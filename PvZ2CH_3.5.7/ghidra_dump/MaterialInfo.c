// Class: MaterialInfo


/* MaterialInfo::~MaterialInfo() */

void __thiscall MaterialInfo::~MaterialInfo(MaterialInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06611c30;
  nop();
  return;
}


/* MaterialInfo::~MaterialInfo() */

void __thiscall MaterialInfo::~MaterialInfo(MaterialInfo *this)

{
  ~MaterialInfo(this);
  AK::FreeHook(this);
  return;
}


/* MaterialInfo::MaterialInfo() */

void __thiscall MaterialInfo::MaterialInfo(MaterialInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetClass_06611c30;
  LawnKeyField::LawnKeyField((LawnKeyField *)(this + 0xc),0);
  return;
}


/* MaterialInfo::StaticNew() */

MaterialInfo * MaterialInfo::StaticNew(void)

{
  MaterialInfo *this;
  
  this = ::operator_new(0x18);
  MaterialInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaterialInfo::StaticClassInit() */

void MaterialInfo::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"MaterialInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_03301470,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MaterialInfo::StaticGetClass() */

long * MaterialInfo::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"MaterialInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MaterialInfo::GetClass() const */

long * MaterialInfo::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"MaterialInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MaterialInfo::MaterialInfo(MaterialInfo&&) */

void __thiscall MaterialInfo::MaterialInfo(MaterialInfo *this,MaterialInfo *param_1)

{
  undefined8 uVar1;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc) = uVar1;
  *(undefined ***)this = &PTR_GetClass_06611c30;
  return;
}


/* MaterialInfo::TEMPNAMEPLACEHOLDERVALUE(MaterialInfo const&) */

MaterialInfo * __thiscall MaterialInfo::operator=(MaterialInfo *this,MaterialInfo *param_1)

{
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  FUN_0432665c(this + 0xc,*(undefined4 *)(param_1 + 0xc));
  return this;
}


/* MaterialInfo::TEMPNAMEPLACEHOLDERVALUE(MaterialInfo&&) */

MaterialInfo * __thiscall MaterialInfo::operator=(MaterialInfo *this,MaterialInfo *param_1)

{
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  FUN_04c10d48(this + 0xc,*(undefined4 *)(param_1 + 0xc));
  return this;
}

