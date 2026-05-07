// Class: Sexy::ResStreamsLoadDesc


/* Sexy::ResStreamsLoadDesc::ResStreamsLoadDesc() */

void __thiscall Sexy::ResStreamsLoadDesc::ResStreamsLoadDesc(ResStreamsLoadDesc *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (ResStreamsLoadDesc)0x0;
  this[0x1d] = (ResStreamsLoadDesc)0x0;
  this[0x1e] = (ResStreamsLoadDesc)0x0;
  this[0x1f] = (ResStreamsLoadDesc)0x0;
  this[0x20] = (ResStreamsLoadDesc)0x0;
  this[0x21] = (ResStreamsLoadDesc)0x1;
  this[0x22] = (ResStreamsLoadDesc)0x1;
  this[0x23] = (ResStreamsLoadDesc)0x0;
  this[0x24] = (ResStreamsLoadDesc)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  return;
}


/* Sexy::ResStreamsLoadDesc::IsFinished() */

ResStreamsLoadDesc __thiscall Sexy::ResStreamsLoadDesc::IsFinished(ResStreamsLoadDesc *this)

{
  ResStreamsLoadDesc RVar1;
  
  RVar1 = this[0x1c];
  if (RVar1 != (ResStreamsLoadDesc)0x0) {
    if ((this[0x21] != (ResStreamsLoadDesc)0x0) && (this[0x1e] == (ResStreamsLoadDesc)0x0)) {
      return (ResStreamsLoadDesc)0x0;
    }
    if (this[0x22] != (ResStreamsLoadDesc)0x0) {
      RVar1 = this[0x1d];
    }
  }
  return RVar1;
}

