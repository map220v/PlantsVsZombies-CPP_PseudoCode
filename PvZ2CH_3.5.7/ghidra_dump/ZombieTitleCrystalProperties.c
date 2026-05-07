// Class: ZombieTitleCrystalProperties


/* ZombieTitleCrystalProperties::~ZombieTitleCrystalProperties() */

void __thiscall
ZombieTitleCrystalProperties::~ZombieTitleCrystalProperties(ZombieTitleCrystalProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06620ae0;
  ZombieTitleProperties::~ZombieTitleProperties((ZombieTitleProperties *)this);
  return;
}


/* ZombieTitleCrystalProperties::~ZombieTitleCrystalProperties() */

void __thiscall
ZombieTitleCrystalProperties::~ZombieTitleCrystalProperties(ZombieTitleCrystalProperties *this)

{
  ~ZombieTitleCrystalProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTitleCrystalProperties::StaticClassInit() */

void ZombieTitleCrystalProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTitleCrystalProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034170b8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTitleCrystalProperties::ZombieTitleCrystalProperties() */

void __thiscall
ZombieTitleCrystalProperties::ZombieTitleCrystalProperties(ZombieTitleCrystalProperties *this)

{
  undefined4 uVar1;
  
  ZombieTitleProperties::ZombieTitleProperties((ZombieTitleProperties *)this);
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  *(undefined4 *)(this + 0x34) = 1;
  *(undefined ***)this = &PTR_GetClass_06620ae0;
  uVar1 = _FUN_03414bd4;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}


/* ZombieTitleCrystalProperties::StaticNew() */

ZombieTitleCrystalProperties * ZombieTitleCrystalProperties::StaticNew(void)

{
  ZombieTitleCrystalProperties *this;
  
  this = ::operator_new(0x40);
  ZombieTitleCrystalProperties(this);
  return this;
}


/* ZombieTitleCrystalProperties::StaticGetClass() */

long * ZombieTitleCrystalProperties::StaticGetClass(void)

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
  uVar2 = ZombieTitleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTitleCrystalProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTitleCrystalProperties::GetClass() const */

long * ZombieTitleCrystalProperties::GetClass(void)

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
  uVar2 = ZombieTitleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTitleCrystalProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

