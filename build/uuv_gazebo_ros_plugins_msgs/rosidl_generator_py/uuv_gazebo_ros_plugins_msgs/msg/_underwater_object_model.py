# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'added_mass'
# Member 'linear_damping'
# Member 'linear_damping_forward_speed'
# Member 'quadratic_damping'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UnderwaterObjectModel(type):
    """Metaclass of message 'UnderwaterObjectModel'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('uuv_gazebo_ros_plugins_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_gazebo_ros_plugins_msgs.msg.UnderwaterObjectModel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__underwater_object_model
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__underwater_object_model
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__underwater_object_model
            cls._TYPE_SUPPORT = module.type_support_msg__msg__underwater_object_model
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__underwater_object_model

            from geometry_msgs.msg import Inertia
            if Inertia.__class__._TYPE_SUPPORT is None:
                Inertia.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UnderwaterObjectModel(metaclass=Metaclass_UnderwaterObjectModel):
    """Message class 'UnderwaterObjectModel'."""

    __slots__ = [
        '_added_mass',
        '_linear_damping',
        '_linear_damping_forward_speed',
        '_quadratic_damping',
        '_volume',
        '_bbox_height',
        '_bbox_length',
        '_bbox_width',
        '_fluid_density',
        '_cob',
        '_neutrally_buoyant',
        '_inertia',
    ]

    _fields_and_field_types = {
        'added_mass': 'sequence<double>',
        'linear_damping': 'sequence<double>',
        'linear_damping_forward_speed': 'sequence<double>',
        'quadratic_damping': 'sequence<double>',
        'volume': 'double',
        'bbox_height': 'double',
        'bbox_length': 'double',
        'bbox_width': 'double',
        'fluid_density': 'double',
        'cob': 'geometry_msgs/Vector3',
        'neutrally_buoyant': 'boolean',
        'inertia': 'geometry_msgs/Inertia',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Inertia'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.added_mass = array.array('d', kwargs.get('added_mass', []))
        self.linear_damping = array.array('d', kwargs.get('linear_damping', []))
        self.linear_damping_forward_speed = array.array('d', kwargs.get('linear_damping_forward_speed', []))
        self.quadratic_damping = array.array('d', kwargs.get('quadratic_damping', []))
        self.volume = kwargs.get('volume', float())
        self.bbox_height = kwargs.get('bbox_height', float())
        self.bbox_length = kwargs.get('bbox_length', float())
        self.bbox_width = kwargs.get('bbox_width', float())
        self.fluid_density = kwargs.get('fluid_density', float())
        from geometry_msgs.msg import Vector3
        self.cob = kwargs.get('cob', Vector3())
        self.neutrally_buoyant = kwargs.get('neutrally_buoyant', bool())
        from geometry_msgs.msg import Inertia
        self.inertia = kwargs.get('inertia', Inertia())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.added_mass != other.added_mass:
            return False
        if self.linear_damping != other.linear_damping:
            return False
        if self.linear_damping_forward_speed != other.linear_damping_forward_speed:
            return False
        if self.quadratic_damping != other.quadratic_damping:
            return False
        if self.volume != other.volume:
            return False
        if self.bbox_height != other.bbox_height:
            return False
        if self.bbox_length != other.bbox_length:
            return False
        if self.bbox_width != other.bbox_width:
            return False
        if self.fluid_density != other.fluid_density:
            return False
        if self.cob != other.cob:
            return False
        if self.neutrally_buoyant != other.neutrally_buoyant:
            return False
        if self.inertia != other.inertia:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def added_mass(self):
        """Message field 'added_mass'."""
        return self._added_mass

    @added_mass.setter
    def added_mass(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'added_mass' array.array() must have the type code of 'd'"
            self._added_mass = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'added_mass' field must be a set or sequence and each value of type 'float'"
        self._added_mass = array.array('d', value)

    @property
    def linear_damping(self):
        """Message field 'linear_damping'."""
        return self._linear_damping

    @linear_damping.setter
    def linear_damping(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'linear_damping' array.array() must have the type code of 'd'"
            self._linear_damping = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'linear_damping' field must be a set or sequence and each value of type 'float'"
        self._linear_damping = array.array('d', value)

    @property
    def linear_damping_forward_speed(self):
        """Message field 'linear_damping_forward_speed'."""
        return self._linear_damping_forward_speed

    @linear_damping_forward_speed.setter
    def linear_damping_forward_speed(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'linear_damping_forward_speed' array.array() must have the type code of 'd'"
            self._linear_damping_forward_speed = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'linear_damping_forward_speed' field must be a set or sequence and each value of type 'float'"
        self._linear_damping_forward_speed = array.array('d', value)

    @property
    def quadratic_damping(self):
        """Message field 'quadratic_damping'."""
        return self._quadratic_damping

    @quadratic_damping.setter
    def quadratic_damping(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'quadratic_damping' array.array() must have the type code of 'd'"
            self._quadratic_damping = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'quadratic_damping' field must be a set or sequence and each value of type 'float'"
        self._quadratic_damping = array.array('d', value)

    @property
    def volume(self):
        """Message field 'volume'."""
        return self._volume

    @volume.setter
    def volume(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'volume' field must be of type 'float'"
        self._volume = value

    @property
    def bbox_height(self):
        """Message field 'bbox_height'."""
        return self._bbox_height

    @bbox_height.setter
    def bbox_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bbox_height' field must be of type 'float'"
        self._bbox_height = value

    @property
    def bbox_length(self):
        """Message field 'bbox_length'."""
        return self._bbox_length

    @bbox_length.setter
    def bbox_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bbox_length' field must be of type 'float'"
        self._bbox_length = value

    @property
    def bbox_width(self):
        """Message field 'bbox_width'."""
        return self._bbox_width

    @bbox_width.setter
    def bbox_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bbox_width' field must be of type 'float'"
        self._bbox_width = value

    @property
    def fluid_density(self):
        """Message field 'fluid_density'."""
        return self._fluid_density

    @fluid_density.setter
    def fluid_density(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fluid_density' field must be of type 'float'"
        self._fluid_density = value

    @property
    def cob(self):
        """Message field 'cob'."""
        return self._cob

    @cob.setter
    def cob(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'cob' field must be a sub message of type 'Vector3'"
        self._cob = value

    @property
    def neutrally_buoyant(self):
        """Message field 'neutrally_buoyant'."""
        return self._neutrally_buoyant

    @neutrally_buoyant.setter
    def neutrally_buoyant(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'neutrally_buoyant' field must be of type 'bool'"
        self._neutrally_buoyant = value

    @property
    def inertia(self):
        """Message field 'inertia'."""
        return self._inertia

    @inertia.setter
    def inertia(self, value):
        if __debug__:
            from geometry_msgs.msg import Inertia
            assert \
                isinstance(value, Inertia), \
                "The 'inertia' field must be a sub message of type 'Inertia'"
        self._inertia = value
