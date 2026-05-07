// Class: ZombieIceAgeArmor3ElitePropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeArmor3ElitePropertySheet::StaticClassInit() */

void ZombieIceAgeArmor3ElitePropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeArmor3ElitePropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_04f50a34,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeArmor3ElitePropertySheet::StaticGetClass() */

long * ZombieIceAgeArmor3ElitePropertySheet::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeArmor3ElitePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeArmor3ElitePropertySheet::GetClass() const */

long * ZombieIceAgeArmor3ElitePropertySheet::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeArmor3ElitePropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeArmor3ElitePropertySheet::ZombieIceAgeArmor3ElitePropertySheet() */

void __thiscall
ZombieIceAgeArmor3ElitePropertySheet::ZombieIceAgeArmor3ElitePropertySheet
          (ZombieIceAgeArmor3ElitePropertySheet *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06a1e240;
  return;
}


/* ZombieIceAgeArmor3ElitePropertySheet::StaticNew() */

ZombieIceAgeArmor3ElitePropertySheet * ZombieIceAgeArmor3ElitePropertySheet::StaticNew(void)

{
  ZombieIceAgeArmor3ElitePropertySheet *this;
  
  this = ::operator_new(0x210);
  ZombieIceAgeArmor3ElitePropertySheet(this);
  return this;
}


/* ZombieIceAgeArmor3ElitePropertySheet::~ZombieIceAgeArmor3ElitePropertySheet() */

void __thiscall
ZombieIceAgeArmor3ElitePropertySheet::~ZombieIceAgeArmor3ElitePropertySheet
          (ZombieIceAgeArmor3ElitePropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1e240;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieIceAgeArmor3ElitePropertySheet::~ZombieIceAgeArmor3ElitePropertySheet() */

void __thiscall
ZombieIceAgeArmor3ElitePropertySheet::~ZombieIceAgeArmor3ElitePropertySheet
          (ZombieIceAgeArmor3ElitePropertySheet *this)

{
  ~ZombieIceAgeArmor3ElitePropertySheet(this);
  AK::FreeHook(this);
  return;
}

