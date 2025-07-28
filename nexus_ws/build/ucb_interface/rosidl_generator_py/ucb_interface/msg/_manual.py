# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ucb_interface:msg/Manual.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Manual(type):
    """Metaclass of message 'Manual'."""

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
            module = import_type_support('ucb_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ucb_interface.msg.Manual')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__manual
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__manual
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__manual
            cls._TYPE_SUPPORT = module.type_support_msg__msg__manual
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__manual

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Manual(metaclass=Metaclass_Manual):
    """Message class 'Manual'."""

    __slots__ = [
        '_puerta',
        '_reversa',
        '_freno',
    ]

    _fields_and_field_types = {
        'puerta': 'boolean',
        'reversa': 'boolean',
        'freno': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.puerta = kwargs.get('puerta', bool())
        self.reversa = kwargs.get('reversa', bool())
        self.freno = kwargs.get('freno', bool())

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
        if self.puerta != other.puerta:
            return False
        if self.reversa != other.reversa:
            return False
        if self.freno != other.freno:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def puerta(self):
        """Message field 'puerta'."""
        return self._puerta

    @puerta.setter
    def puerta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'puerta' field must be of type 'bool'"
        self._puerta = value

    @builtins.property
    def reversa(self):
        """Message field 'reversa'."""
        return self._reversa

    @reversa.setter
    def reversa(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reversa' field must be of type 'bool'"
        self._reversa = value

    @builtins.property
    def freno(self):
        """Message field 'freno'."""
        return self._freno

    @freno.setter
    def freno(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'freno' field must be of type 'bool'"
        self._freno = value
