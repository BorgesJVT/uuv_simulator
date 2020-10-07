# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_sensor_ros_plugins_msgs:msg/Salinity.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Salinity(type):
    """Metaclass of message 'Salinity'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PSU': 'psu',
        'PPM': 'ppm',
        'PPT': 'ppt',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('uuv_sensor_ros_plugins_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_sensor_ros_plugins_msgs.msg.Salinity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__salinity
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__salinity
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__salinity
            cls._TYPE_SUPPORT = module.type_support_msg__msg__salinity
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__salinity

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PSU': cls.__constants['PSU'],
            'PPM': cls.__constants['PPM'],
            'PPT': cls.__constants['PPT'],
        }

    @property
    def PSU(self):
        """Message constant 'PSU'."""
        return Metaclass_Salinity.__constants['PSU']

    @property
    def PPM(self):
        """Message constant 'PPM'."""
        return Metaclass_Salinity.__constants['PPM']

    @property
    def PPT(self):
        """Message constant 'PPT'."""
        return Metaclass_Salinity.__constants['PPT']


class Salinity(metaclass=Metaclass_Salinity):
    """
    Message class 'Salinity'.

    Constants:
      PSU
      PPM
      PPT
    """

    __slots__ = [
        '_header',
        '_salinity',
        '_variance',
        '_unit',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'salinity': 'double',
        'variance': 'double',
        'unit': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.salinity = kwargs.get('salinity', float())
        self.variance = kwargs.get('variance', float())
        self.unit = kwargs.get('unit', str())

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
        if self.header != other.header:
            return False
        if self.salinity != other.salinity:
            return False
        if self.variance != other.variance:
            return False
        if self.unit != other.unit:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def salinity(self):
        """Message field 'salinity'."""
        return self._salinity

    @salinity.setter
    def salinity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'salinity' field must be of type 'float'"
        self._salinity = value

    @property
    def variance(self):
        """Message field 'variance'."""
        return self._variance

    @variance.setter
    def variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'variance' field must be of type 'float'"
        self._variance = value

    @property
    def unit(self):
        """Message field 'unit'."""
        return self._unit

    @unit.setter
    def unit(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'unit' field must be of type 'str'"
        self._unit = value
