#!/usr/bin/python3
#ou roda #!/usr/bin/env python3

import sys, getopt

inputfile = ''
outputfile = 'added_mass.txt'
def main(argv):
    global inputfile
    global outfile
    try:
      opts, args = getopt.getopt(argv,"hi:o:",["ifile=","ofile="])
    except getopt.GetoptError:
      print ('\nUse the sintax:')
      print ('\t\tadded_mass_calc.py -i <inputfile> -o <outputfile>\n')
      sys.exit(2)

    if not opts:
       print ('\nUse the sintax:')
       print ('\t\tadded_mass_calc.py -i <inputfile> -o <outputfile>\n') 
    if opts:
        for opt, arg in opts:
          if opt == '-h':
             print ('\nUse the sintax:')
             print ('\t\tadded_mass_calc.py -i <inputfile> -o <outputfile>\n')
             sys.exit()
          elif opt in ("-i", "--ifile"):
             inputfile = arg
          elif opt in ("-o", "--ofile"):
             outputfile = arg

main(sys.argv[1:])

try:
    import capytaine
except ImportError as e:
    print ("Module capytaine not installed. Execute command <pip install capytayne> to solve your problem")
    #install(capytaine)
    sys.exit()
    pass  # module doesn't exist, deal with it.





from capytaine.meshes.geometry import Axis, Plane, xOz_Plane, yOz_Plane, xOy_Plane
from capytaine.meshes.meshes import Mesh
from capytaine.meshes.collections import CollectionOfMeshes
from capytaine.meshes.symmetric import ReflectionSymmetricMesh, TranslationalSymmetricMesh, AxialSymmetricMesh
from capytaine.bodies.bodies import FloatingBody
from capytaine.bodies.predefined.spheres import Sphere
from capytaine.bodies.predefined.cylinders import VerticalCylinder, HorizontalCylinder, Disk
from capytaine.bodies.predefined.rectangles import Rectangle, RectangularParallelepiped, OpenRectangularParallelepiped
from capytaine.bem.problems_and_results import RadiationProblem, DiffractionProblem
from capytaine.bem.solver import Nemoh, BEMSolver
from capytaine.bem.engines import BasicMatrixEngine, HierarchicalToeplitzMatrixEngine
from capytaine.green_functions.delhommeau import Delhommeau, XieDelhommeau
from capytaine.post_pro.free_surfaces import FreeSurface
from capytaine.io.xarray import assemble_dataset

from numpy import infty

import logging
logging.basicConfig(level=logging.INFO)



body = FloatingBody.from_file(inputfile, file_format='stl')

body.add_all_rigid_body_dofs()
body.keep_immersed_part()


problems = []
omega = 1


problems += [RadiationProblem(omega=omega, body=body, radiating_dof=dof) for dof in body.dofs]

solver = BEMSolver()

results = [solver.solve(problem) for problem in problems]

dataset = assemble_dataset(results)

print("\nADDEDD MASS:\n" )
print(dataset['added_mass'].values[0])


added_mass = dataset['added_mass'].values[0]

f= open(outputfile,"w+")

for linha in added_mass: 
    for linha_formatada in linha:
        f.write (str( ['{:.6f}'.format(linha_formatada)] )
                .replace("[", "")
                .replace("]","")
                .replace("'","") 
                )
        f.write ("\t")
    f.write("\n")
f.close


print("\nSaved addes_mass at file: " + outputfile + "\n" )




# if __name__ == "__main__":
#    main(sys.argv[1:])



























# import pip

# def install(package):
#     if hasattr(pip, 'main'):
#         pip.main(['install', package])
#     else:
#         pip._internal.main(['install', package])

# # Example
# if __name__ == '__main__':
#     install('argh')