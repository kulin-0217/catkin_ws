# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from op3_online_walking_module_msgs/WalkingParam.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class WalkingParam(genpy.Message):
  _md5sum = "2197a6ee210540728363ab6b547935bd"
  _type = "op3_online_walking_module_msgs/WalkingParam"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 dsp_ratio
float64 lipm_height
float64 foot_height_max
float64 zmp_offset_x
float64 zmp_offset_y
"""
  __slots__ = ['dsp_ratio','lipm_height','foot_height_max','zmp_offset_x','zmp_offset_y']
  _slot_types = ['float64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       dsp_ratio,lipm_height,foot_height_max,zmp_offset_x,zmp_offset_y

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WalkingParam, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.dsp_ratio is None:
        self.dsp_ratio = 0.
      if self.lipm_height is None:
        self.lipm_height = 0.
      if self.foot_height_max is None:
        self.foot_height_max = 0.
      if self.zmp_offset_x is None:
        self.zmp_offset_x = 0.
      if self.zmp_offset_y is None:
        self.zmp_offset_y = 0.
    else:
      self.dsp_ratio = 0.
      self.lipm_height = 0.
      self.foot_height_max = 0.
      self.zmp_offset_x = 0.
      self.zmp_offset_y = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_5d().pack(_x.dsp_ratio, _x.lipm_height, _x.foot_height_max, _x.zmp_offset_x, _x.zmp_offset_y))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 40
      (_x.dsp_ratio, _x.lipm_height, _x.foot_height_max, _x.zmp_offset_x, _x.zmp_offset_y,) = _get_struct_5d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_5d().pack(_x.dsp_ratio, _x.lipm_height, _x.foot_height_max, _x.zmp_offset_x, _x.zmp_offset_y))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 40
      (_x.dsp_ratio, _x.lipm_height, _x.foot_height_max, _x.zmp_offset_x, _x.zmp_offset_y,) = _get_struct_5d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_5d = None
def _get_struct_5d():
    global _struct_5d
    if _struct_5d is None:
        _struct_5d = struct.Struct("<5d")
    return _struct_5d
