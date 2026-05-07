// Class: NameEffectStruct


/* NameEffectStruct::~NameEffectStruct() */

void __thiscall NameEffectStruct::~NameEffectStruct(NameEffectStruct *this)

{
  FUN_05476c50(this + 0x10);
  return;
}


/* NameEffectStruct::NameEffectStruct() */

void __thiscall NameEffectStruct::NameEffectStruct(NameEffectStruct *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  FUN_05476574(this + 0x10);
  return;
}


/* NameEffectStruct::NameEffectStruct(NameEffectStruct const&) */

void __thiscall NameEffectStruct::NameEffectStruct(NameEffectStruct *this,NameEffectStruct *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  FUN_05477b24(this + 0x10,param_1 + 0x10);
  return;
}


/* NameEffectStruct::TEMPNAMEPLACEHOLDERVALUE(NameEffectStruct const&) */

NameEffectStruct * __thiscall
NameEffectStruct::operator=(NameEffectStruct *this,NameEffectStruct *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  thunk_FUN_05477b9c(this + 0x10,param_1 + 0x10);
  return this;
}


void __thiscall NameEffectStruct::~NameEffectStruct(NameEffectStruct *this)

{
  FUN_05476c50(this + 0x10);
  return;
}


void __thiscall NameEffectStruct::~NameEffectStruct(NameEffectStruct *this)

{
  FUN_05476c50(this + 0x10);
  return;
}


void __thiscall NameEffectStruct::~NameEffectStruct(NameEffectStruct *this)

{
  FUN_05476c50(this + 0x10);
  return;
}

