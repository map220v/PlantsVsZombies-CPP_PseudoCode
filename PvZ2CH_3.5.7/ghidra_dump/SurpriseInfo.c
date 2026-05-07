// Class: SurpriseInfo


/* SurpriseInfo::SurpriseInfo(SurpriseInfo const&) */

void __thiscall SurpriseInfo::SurpriseInfo(SurpriseInfo *this,SurpriseInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  return;
}


/* SurpriseInfo::SurpriseInfo(SurpriseInfo&&) */

void __thiscall SurpriseInfo::SurpriseInfo(SurpriseInfo *this,SurpriseInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  return;
}


/* SurpriseInfo::SurpriseInfo() */

void __thiscall SurpriseInfo::SurpriseInfo(SurpriseInfo *this)

{
  Set8BytesTo0((string *)(this + 0x10));
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0xffffffff;
  std::string::append((string *)(this + 0x10),"",0xffffffff);
  return;
}


/* SurpriseInfo::TEMPNAMEPLACEHOLDERVALUE(SurpriseInfo const&) */

SurpriseInfo * __thiscall SurpriseInfo::operator=(SurpriseInfo *this,SurpriseInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  return this;
}

