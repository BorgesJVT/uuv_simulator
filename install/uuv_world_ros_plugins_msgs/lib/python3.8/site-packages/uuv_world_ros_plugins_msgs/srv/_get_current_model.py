# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_world_ros_plugins_msgs:srv/GetCurrentModel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetCurrentModel_Request(type):
    """Metaclass of message 'GetCurrentModel_Request'."""

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
            module = import_type_support('uuv_world_ros_plugins_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_world_ros_plugins_msgs.srv.GetCurrentModel_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_current_model__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_current_model__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_current_model__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_current_model__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_current_model__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCurrentModel_Request(metaclass=Metaclass_GetCurrentModel_Request):
    """Message class 'GetCurrentModel_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetCurrentModel_Response(type):
    """Metaclass of message 'GetCurrentModel_Response'."""

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
            module = import_type_support('uuv_world_ros_plugins_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_world_ros_plugins_msgs.srv.GetCurrentModel_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_current_model__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_current_model__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_current_model__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_current_model__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_current_model__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCurrentModel_Response(metaclass=Metaclass_GetCurrentModel_Response):
    """Message class 'GetCurrentModel_Response'."""

    __slots__ = [
        '_mean',
        '_min',
        '_max',
        '_noise',
        '_mu',
    ]

    _fields_and_field_types = {
        'mean': 'double',
        'min': 'double',
        'max': 'double',
        'noise': 'double',
        'mu': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mean = kwargs.get('mean', float())
        self.min = kwargs.get('min', float())
        self.max = kwargs.get('max', float())
        self.noise = kwargs.get('noise', float())
        self.mu = kwargs.get('mu', float())

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
        if self.mean != other.mean:
            return False
        if self.min != other.min:
            return False
        if self.max != other.max:
            return False
        if self.noise != other.noise:
            return False
        if self.mu != other.mu:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def mean(self):
        """Message field 'mean'."""
        return self._mean

    @mean.setter
    def mean(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mean' field must be of type 'float'"
        self._mean = value

    @property  # noqa: A003
    def min(self):  # noqa: A003
        """Message field 'min'."""
        return self._min

    @min.setter  # noqa: A003
    def min(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min' field must be of type 'float'"
        self._min = value

    @property  # noqa: A003
    def max(self):  # noqa: A003
        """Message field 'max'."""
        return self._max

    @max.setter  # noqa: A003
    def max(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max' field must be of type 'float'"
        self._max = value

    @property
    def noise(self):
        """Message field 'noise'."""
        return self._noise

    @noise.setter
    def noise(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'noise' field must be of type 'float'"
        self._noise = value

    @property
    def mu(self):
        """Message field 'mu'."""
        return self._mu

    @mu.setter
    def mu(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mu' field must be of type 'float'"
        self._mu = value


class Metaclass_GetCurrentModel(type):
    """Metaclass of service 'GetCurrentModel'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('uuv_world_ros_plugins_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_world_ros_plugins_msgs.srv.GetCurrentModel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_current_model

            from uuv_world_ros_plugins_msgs.srv import _get_current_model
            if _get_current_model.Metaclass_GetCurrentModel_Request._TYPE_SUPPORT is None:
                _get_current_model.Metaclass_GetCurrentModel_Request.__import_type_support__()
            if _get_current_model.Metaclass_GetCurrentModel_Response._TYPE_SUPPORT is None:
                _get_current_model.Metaclass_GetCurrentModel_Response.__import_type_support__()


class GetCurrentModel(metaclass=Metaclass_GetCurrentModel):
    from uuv_world_ros_plugins_msgs.srv._get_current_model import GetCurrentModel_Request as Request
    from uuv_world_ros_plugins_msgs.srv._get_current_model import GetCurrentModel_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
