// Class: EA::IO::FixedMemoryStream


/* EA::IO::FixedMemoryStream::AddRef() */

void __thiscall EA::IO::FixedMemoryStream::AddRef(FixedMemoryStream *this)

{
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return;
}


/* EA::IO::FixedMemoryStream::Release() */

int __thiscall EA::IO::FixedMemoryStream::Release(FixedMemoryStream *this)

{
  int iVar1;
  
  if (1 < *(int *)(this + 0x10)) {
    iVar1 = *(int *)(this + 0x10) + -1;
    *(int *)(this + 0x10) = iVar1;
    return iVar1;
  }
  (**(code **)(*(long *)this + 8))();
  return 0;
}


/* EA::IO::FixedMemoryStream::GetType() const */

undefined8 EA::IO::FixedMemoryStream::GetType(void)

{
  return 0x2f2f470;
}


/* EA::IO::FixedMemoryStream::GetAccessFlags() const */

undefined8 EA::IO::FixedMemoryStream::GetAccessFlags(void)

{
  return 3;
}


/* EA::IO::FixedMemoryStream::GetSize() const */

undefined8 __thiscall EA::IO::FixedMemoryStream::GetSize(FixedMemoryStream *this)

{
  return *(undefined8 *)(this + 0x18);
}


/* EA::IO::FixedMemoryStream::GetAvailable() const */

long __thiscall EA::IO::FixedMemoryStream::GetAvailable(FixedMemoryStream *this)

{
  return *(long *)(this + 0x18) - *(long *)(this + 0x28);
}


/* EA::IO::FixedMemoryStream::SetSize(unsigned long) */

undefined8 __thiscall EA::IO::FixedMemoryStream::SetSize(FixedMemoryStream *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 <= *(ulong *)(this + 0x20)) {
    uVar1 = 1;
    *(ulong *)(this + 0x18) = param_1;
    if (param_1 < *(ulong *)(this + 0x28)) {
      *(ulong *)(this + 0x28) = param_1;
    }
  }
  return uVar1;
}


/* EA::IO::FixedMemoryStream::GetPosition(EA::IO::PositionType) const */

long __thiscall EA::IO::FixedMemoryStream::GetPosition(FixedMemoryStream *this,int param_2)

{
  if (param_2 == 0) {
    return *(long *)(this + 0x28);
  }
  if (param_2 == 2) {
    return *(long *)(this + 0x28) - *(long *)(this + 0x18);
  }
  return 0;
}


/* EA::IO::FixedMemoryStream::SetPosition(long, EA::IO::PositionType) */

bool __thiscall
EA::IO::FixedMemoryStream::SetPosition(FixedMemoryStream *this,ulong param_1,int param_3)

{
  ulong uVar1;
  
  if (param_3 == 1) {
    uVar1 = *(ulong *)(this + 0x18);
    param_1 = param_1 + *(long *)(this + 0x28);
    *(ulong *)(this + 0x28) = param_1;
  }
  else if (param_3 == 0) {
    uVar1 = *(ulong *)(this + 0x18);
    *(ulong *)(this + 0x28) = param_1;
  }
  else {
    uVar1 = *(ulong *)(this + 0x18);
    if (param_3 == 2) {
      param_1 = param_1 + uVar1;
      *(ulong *)(this + 0x28) = param_1;
    }
    else {
      param_1 = *(ulong *)(this + 0x28);
    }
  }
  if (param_1 > uVar1) {
    *(ulong *)(this + 0x28) = uVar1;
  }
  return param_1 <= uVar1;
}


/* EA::IO::FixedMemoryStream::Read(void*, unsigned long) */

size_t __thiscall
EA::IO::FixedMemoryStream::Read(FixedMemoryStream *this,void *param_1,ulong param_2)

{
  ulong uVar1;
  size_t __n;
  
  __n = 0;
  if (param_2 != 0) {
    uVar1 = *(long *)(this + 0x18) - *(long *)(this + 0x28);
    if (uVar1 != 0) {
      __n = param_2;
      if (uVar1 < param_2) {
        __n = uVar1;
      }
      memmove(param_1,(void *)(*(long *)(this + 8) + *(long *)(this + 0x28)),__n);
      *(size_t *)(this + 0x28) = *(long *)(this + 0x28) + __n;
    }
  }
  return __n;
}


/* EA::IO::FixedMemoryStream::Write(void const*, unsigned long) */

bool __thiscall
EA::IO::FixedMemoryStream::Write(FixedMemoryStream *this,void *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  
  bVar2 = true;
  if (param_2 != 0) {
    lVar3 = *(long *)(this + 0x28);
    uVar1 = param_2 + lVar3;
    if (*(ulong *)(this + 0x20) < uVar1) {
      bVar2 = param_2 == *(long *)(this + 0x18) - lVar3;
      param_2 = *(long *)(this + 0x18) - lVar3;
    }
    else if (*(ulong *)(this + 0x18) < uVar1) {
      *(ulong *)(this + 0x18) = uVar1;
    }
    memcpy((void *)(*(long *)(this + 8) + lVar3),param_1,param_2);
    *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + param_2;
  }
  return bVar2;
}


/* EA::IO::FixedMemoryStream::FixedMemoryStream(void*, unsigned long) */

void __thiscall
EA::IO::FixedMemoryStream::FixedMemoryStream(FixedMemoryStream *this,void *param_1,ulong param_2)

{
  IStream::IStream((IStream *)this);
  *(void **)(this + 8) = param_1;
  *(undefined4 *)(this + 0x10) = 0;
  *(ulong *)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR_nop_06a36880;
  *(ulong *)(this + 0x20) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* EA::IO::FixedMemoryStream::FixedMemoryStream(EA::IO::FixedMemoryStream&) */

void __thiscall
EA::IO::FixedMemoryStream::FixedMemoryStream(FixedMemoryStream *this,FixedMemoryStream *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  IStream::IStream((IStream *)this);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined ***)this = &PTR_nop_06a36880;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = uVar1;
  return;
}


/* EA::IO::FixedMemoryStream::SetData(void*, unsigned long) */

undefined8 __thiscall
EA::IO::FixedMemoryStream::SetData(FixedMemoryStream *this,void *param_1,ulong param_2)

{
  *(void **)(this + 8) = param_1;
  *(ulong *)(this + 0x20) = param_2;
  *(ulong *)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  return 1;
}

