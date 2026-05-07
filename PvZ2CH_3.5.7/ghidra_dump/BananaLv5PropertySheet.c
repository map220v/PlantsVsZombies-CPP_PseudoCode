// Class: BananaLv5PropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaLv5PropertySheet::StaticClassInit() */

void BananaLv5PropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"BananaLv5PropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_041ee88c,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BananaLv5PropertySheet::StaticGetClass() */

long * BananaLv5PropertySheet::StaticGetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"BananaLv5PropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BananaLv5PropertySheet::GetClass() const */

long * BananaLv5PropertySheet::GetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"BananaLv5PropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BananaLv5PropertySheet::~BananaLv5PropertySheet() */

void __thiscall BananaLv5PropertySheet::~BananaLv5PropertySheet(BananaLv5PropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06805bf0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* BananaLv5PropertySheet::~BananaLv5PropertySheet() */

void __thiscall BananaLv5PropertySheet::~BananaLv5PropertySheet(BananaLv5PropertySheet *this)

{
  ~BananaLv5PropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* BananaLv5PropertySheet::BananaLv5PropertySheet() */

void __thiscall BananaLv5PropertySheet::BananaLv5PropertySheet(BananaLv5PropertySheet *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06805bf0;
  return;
}


/* BananaLv5PropertySheet::StaticNew() */

BananaLv5PropertySheet * BananaLv5PropertySheet::StaticNew(void)

{
  BananaLv5PropertySheet *this;
  
  this = ::operator_new(0x1f0);
  BananaLv5PropertySheet(this);
  return this;
}

