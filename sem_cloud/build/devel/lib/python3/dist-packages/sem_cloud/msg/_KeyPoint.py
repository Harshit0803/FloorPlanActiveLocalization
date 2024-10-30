# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from sem_cloud/KeyPoint.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import sem_cloud.msg

class KeyPoint(genpy.Message):
  _md5sum = "11cefb08bec6034bef3e32ec473dc6a7"
  _type = "sem_cloud/KeyPoint"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#class cv::KeyPoint
#{
#    Point2f pt;
#    float size;
#    float angle;
#    float response;
#    int octave;
#    int class_id;
#}

Point2f pt
float32 size
float32 angle
float32 response
int32 octave
int32 class_id
================================================================================
MSG: sem_cloud/Point2f
#class cv::Point2f
#{
#    float x;
#    float y;
#}

float32 x
float32 y"""
  __slots__ = ['pt','size','angle','response','octave','class_id']
  _slot_types = ['sem_cloud/Point2f','float32','float32','float32','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pt,size,angle,response,octave,class_id

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(KeyPoint, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.pt is None:
        self.pt = sem_cloud.msg.Point2f()
      if self.size is None:
        self.size = 0.
      if self.angle is None:
        self.angle = 0.
      if self.response is None:
        self.response = 0.
      if self.octave is None:
        self.octave = 0
      if self.class_id is None:
        self.class_id = 0
    else:
      self.pt = sem_cloud.msg.Point2f()
      self.size = 0.
      self.angle = 0.
      self.response = 0.
      self.octave = 0
      self.class_id = 0

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
      buff.write(_get_struct_5f2i().pack(_x.pt.x, _x.pt.y, _x.size, _x.angle, _x.response, _x.octave, _x.class_id))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.pt is None:
        self.pt = sem_cloud.msg.Point2f()
      end = 0
      _x = self
      start = end
      end += 28
      (_x.pt.x, _x.pt.y, _x.size, _x.angle, _x.response, _x.octave, _x.class_id,) = _get_struct_5f2i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_5f2i().pack(_x.pt.x, _x.pt.y, _x.size, _x.angle, _x.response, _x.octave, _x.class_id))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.pt is None:
        self.pt = sem_cloud.msg.Point2f()
      end = 0
      _x = self
      start = end
      end += 28
      (_x.pt.x, _x.pt.y, _x.size, _x.angle, _x.response, _x.octave, _x.class_id,) = _get_struct_5f2i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_5f2i = None
def _get_struct_5f2i():
    global _struct_5f2i
    if _struct_5f2i is None:
        _struct_5f2i = struct.Struct("<5f2i")
    return _struct_5f2i
