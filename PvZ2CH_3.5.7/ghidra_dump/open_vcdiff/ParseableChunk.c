// Class: open_vcdiff::ParseableChunk


void __thiscall open_vcdiff::ParseableChunk::Advance(ParseableChunk *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x10);
  uVar1 = FUN_053f39bc(*(undefined8 *)(this + 8),lVar4);
  if (param_1 <= uVar1) {
    *(ulong *)(this + 0x10) = lVar4 + param_1;
    return;
  }
  uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar2 = FUN_054603b8(uVar2,"Internal error: position advanced by ");
  uVar2 = thunk_FUN_0546069c(uVar2,param_1);
  uVar2 = FUN_054603b8(uVar2," bytes, current unparsed size ");
  uVar3 = FUN_053f39bc(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  uVar2 = thunk_FUN_0546069c(uVar2,uVar3);
  FUN_0545f9e8(uVar2,FUN_0545fdc8);
  CheckFatalError();
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
  return;
}


/* open_vcdiff::ParseableChunk::Empty() const */

bool __thiscall open_vcdiff::ParseableChunk::Empty(ParseableChunk *this)

{
  long lVar1;
  
  lVar1 = FUN_05334c8c(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return lVar1 == 0;
}


bool __thiscall open_vcdiff::ParseableChunk::Empty(ParseableChunk *this)

{
  long lVar1;
  
  lVar1 = FUN_05334c8c(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return lVar1 == 0;
}


/* open_vcdiff::ParseableChunk::SetDataBuffer(char const*, unsigned long) */

void __thiscall
open_vcdiff::ParseableChunk::SetDataBuffer(ParseableChunk *this,char *param_1,ulong param_2)

{
  *(char **)this = param_1;
  *(char **)(this + 8) = param_1 + param_2;
  *(char **)(this + 0x10) = param_1;
  return;
}


/* open_vcdiff::ParseableChunk::ParseableChunk(char const*, unsigned long) */

void __thiscall
open_vcdiff::ParseableChunk::ParseableChunk(ParseableChunk *this,char *param_1,ulong param_2)

{
  *(char **)this = param_1;
  *(char **)(this + 8) = param_1 + param_2;
  *(char **)(this + 0x10) = param_1;
  return;
}


/* open_vcdiff::ParseableChunk::Advance(unsigned long) */

void __thiscall open_vcdiff::ParseableChunk::Advance(ParseableChunk *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x10);
  uVar1 = FUN_053f39bc(*(undefined8 *)(this + 8),lVar4);
  if (param_1 <= uVar1) {
    *(ulong *)(this + 0x10) = lVar4 + param_1;
    return;
  }
  uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar2 = FUN_054603b8(uVar2,"Internal error: position advanced by ");
  uVar2 = thunk_FUN_0546069c(uVar2,param_1);
  uVar2 = FUN_054603b8(uVar2," bytes, current unparsed size ");
  uVar3 = FUN_053f39bc(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  uVar2 = thunk_FUN_0546069c(uVar2,uVar3);
  FUN_0545f9e8(uVar2,FUN_0545fdc8);
  CheckFatalError();
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
  return;
}


/* open_vcdiff::ParseableChunk::SetPosition(char const*) */

void __thiscall open_vcdiff::ParseableChunk::SetPosition(ParseableChunk *this,char *param_1)

{
  undefined8 uVar1;
  
  if (param_1 < *(char **)this) {
    uVar1 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar1 = FUN_054603b8(uVar1,"Internal error: new data position ");
    uVar1 = FUN_054603b8(uVar1,param_1);
    uVar1 = FUN_054603b8(uVar1," is beyond start of data ");
    uVar1 = FUN_054603b8(uVar1,*(undefined8 *)this);
    FUN_0545f9e8(uVar1,FUN_0545fdc8);
    CheckFatalError();
    *(undefined8 *)(this + 0x10) = *(undefined8 *)this;
    return;
  }
  if (param_1 <= *(char **)(this + 8)) {
    *(char **)(this + 0x10) = param_1;
    return;
  }
  uVar1 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar1 = FUN_054603b8(uVar1,"Internal error: new data position ");
  uVar1 = FUN_054603b8(uVar1,param_1);
  uVar1 = FUN_054603b8(uVar1," is beyond end of data ");
  uVar1 = FUN_054603b8(uVar1,*(undefined8 *)(this + 8));
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  CheckFatalError();
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
  return;
}


/* open_vcdiff::ParseableChunk::FinishExcept(unsigned long) */

void __thiscall open_vcdiff::ParseableChunk::FinishExcept(ParseableChunk *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 8);
  uVar1 = FUN_053f39bc(lVar4,*(undefined8 *)(this + 0x10));
  if (param_1 <= uVar1) {
    *(ulong *)(this + 0x10) = lVar4 - param_1;
    return;
  }
  uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar2 = FUN_054603b8(uVar2,"Internal error: specified number of remaining bytes ");
  uVar2 = thunk_FUN_0546069c(uVar2,param_1);
  uVar2 = FUN_054603b8(uVar2," is greater than unparsed data size ");
  uVar3 = FUN_053f39bc(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  uVar2 = thunk_FUN_0546069c(uVar2,uVar3);
  FUN_0545f9e8(uVar2,FUN_0545fdc8);
  CheckFatalError();
  FUN_053f39c8(*(undefined8 *)(this + 8),this + 0x10);
  return;
}

