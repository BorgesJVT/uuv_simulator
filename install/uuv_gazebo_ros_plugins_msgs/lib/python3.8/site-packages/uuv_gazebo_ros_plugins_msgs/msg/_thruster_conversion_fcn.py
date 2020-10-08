# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
# Member 'lookup_table_input'
# Member 'lookup_table_output'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ThrusterConversionFcn(type):
    """Metaclass of message 'ThrusterConversionFcn'."""

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
                'uuv_gazebo_ros_plugins_msgs.msg.ThrusterConversionFcn')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__thruster_conversion_fcn
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__thruster_conversion_fcn
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__thruster_conversion_fcn
            cls._TYPE_SUPPORT = module.type_support_msg__msg__thruster_conversion_fcn
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__thruster_conversion_fcn

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ThrusterConversionFcn(metaclass=Metaclass_ThrusterConversionFcn):
    """Message class 'ThrusterConversionFcn'."""

    __slots__ = [
        '_function_name',
        '_tags',
        '_data',
        '_lookup_table_input',
        '_lookup_table_output',
    ]

    _fields_and_field_types = {
        'function_name': 'string',
        'tags': 'sequence<string>',
        'data': 'sequence<double>',
        'lookup_table_input': 'sequence<double>',
        'lookup_table_output': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.function_name = kwargs.get('function_name', str())
        self.tags = kwargs.get('tags', [])
        self.data = array.array('d', kwargs.get('data', []))
        self.lookup_table_input = array.array('d', kwargs.get('lookup_table_input', []))
        self.lookup_table_output = array.array('d', kwargs.get('lookup_table_output', []))

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
        if self.function_name != other.function_name:
            return False
        if self.tags != other.tags:
            return False
        if self.data != other.data:
            return False
        if self.lookup_table_input != other.lookup_table_input:
            return False
        if self.lookup_table_output != other.lookup_table_output:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def function_name(self):
        """Message field 'function_name'."""
        return self._function_name

    @function_name.setter
    def function_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'function_name' field must be of type 'str'"
        self._function_name = value

    @property
    def tags(self):
        """Message field 'tags'."""
        return self._tags

    @tags.setter
    def tags(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'tags' field must be a set or sequence and each value of type 'str'"
        self._tags = value

    @property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'data' array.array() must have the type code of 'd'"
            self._data = value
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
                "The 'data' field must be a set or sequence and each value of type 'float'"
        self._data = array.array('d', value)

    @property
    def lookup_table_input(self):
        """Message field 'lookup_table_input'."""
        return self._lookup_table_input

    @lookup_table_input.setter
    def lookup_table_input(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'lookup_table_input' array.array() must have the type code of 'd'"
            self._lookup_table_input = value
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
                "The 'lookup_table_input' field must be a set or sequence and each value of type 'float'"
        self._lookup_table_input = array.array('d', value)

    @property
    def lookup_table_output(self):
        """Message field 'lookup_table_output'."""
        return self._lookup_table_output

    @lookup_table_output.setter
    def lookup_table_output(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'lookup_table_output' array.array() must have the type code of 'd'"
            self._lookup_table_output = value
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
                "The 'lookup_table_output' field must be a set or sequence and each value of type 'float'"
        self._lookup_table_output = array.array('d', value)
