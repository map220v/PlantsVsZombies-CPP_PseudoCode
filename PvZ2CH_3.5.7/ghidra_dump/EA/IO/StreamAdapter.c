// Class: EA::IO::StreamAdapter


/* EA::IO::StreamAdapter::VerifyArraySize(unsigned int, unsigned int) */

undefined8 __thiscall
EA::IO::StreamAdapter::VerifyArraySize(StreamAdapter *this,uint param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (**(code **)(**(long **)this + 0x50))(*(long **)this,0);
  uVar2 = (**(code **)(**(long **)this + 0x40))(*(long **)this);
  if ((uVar1 <= uVar2) &&
     ((ulong)param_1 * (ulong)param_2 < uVar2 - uVar1 ||
      (ulong)param_1 * (ulong)param_2 - (uVar2 - uVar1) == 0)) {
    return 1;
  }
  FUN_053fbfbc(this + 0x14);
  return 0;
}

