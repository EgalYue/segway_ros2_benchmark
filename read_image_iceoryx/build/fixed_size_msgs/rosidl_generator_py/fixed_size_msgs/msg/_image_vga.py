# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fixed_size_msgs:msg/ImageVGA.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImageVGA(type):
    """Metaclass of message 'ImageVGA'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HEIGHT': 480,
        'WIDTH': 640,
        'CHANNELS': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fixed_size_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fixed_size_msgs.msg.ImageVGA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__image_vga
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__image_vga
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__image_vga
            cls._TYPE_SUPPORT = module.type_support_msg__msg__image_vga
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__image_vga

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HEIGHT': cls.__constants['HEIGHT'],
            'WIDTH': cls.__constants['WIDTH'],
            'CHANNELS': cls.__constants['CHANNELS'],
        }

    @property
    def HEIGHT(self):
        """Message constant 'HEIGHT'."""
        return Metaclass_ImageVGA.__constants['HEIGHT']

    @property
    def WIDTH(self):
        """Message constant 'WIDTH'."""
        return Metaclass_ImageVGA.__constants['WIDTH']

    @property
    def CHANNELS(self):
        """Message constant 'CHANNELS'."""
        return Metaclass_ImageVGA.__constants['CHANNELS']


class ImageVGA(metaclass=Metaclass_ImageVGA):
    """
    Message class 'ImageVGA'.

    Constants:
      HEIGHT
      WIDTH
      CHANNELS
    """

    __slots__ = [
        '_timestamp',
        '_is_bigendian',
        '_step',
        '_data',
    ]

    _fields_and_field_types = {
        'timestamp': 'int64',
        'is_bigendian': 'uint8',
        'step': 'uint32',
        'data': 'uint8[921600]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 921600),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.is_bigendian = kwargs.get('is_bigendian', int())
        self.step = kwargs.get('step', int())
        if 'data' not in kwargs:
            self.data = numpy.zeros(921600, dtype=numpy.uint8)
        else:
            self.data = numpy.array(kwargs.get('data'), dtype=numpy.uint8)
            assert self.data.shape == (921600, )

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
        if self.timestamp != other.timestamp:
            return False
        if self.is_bigendian != other.is_bigendian:
            return False
        if self.step != other.step:
            return False
        if all(self.data != other.data):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'timestamp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._timestamp = value

    @property
    def is_bigendian(self):
        """Message field 'is_bigendian'."""
        return self._is_bigendian

    @is_bigendian.setter
    def is_bigendian(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_bigendian' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_bigendian' field must be an unsigned integer in [0, 255]"
        self._is_bigendian = value

    @property
    def step(self):
        """Message field 'step'."""
        return self._step

    @step.setter
    def step(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'step' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'step' field must be an unsigned integer in [0, 4294967295]"
        self._step = value

    @property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'data' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 921600, \
                "The 'data' numpy.ndarray() must have a size of 921600"
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
                 len(value) == 921600 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence with length 921600 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = numpy.array(value, dtype=numpy.uint8)
