// Class: CactusProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CactusProps::StaticClassInit() */

void CactusProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CactusProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0417c434,0x328,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CactusProps::StaticGetClass() */

long * CactusProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"CactusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CactusProps::GetClass() const */

long * CactusProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"CactusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CactusProps::CactusProps() */

void __thiscall CactusProps::CactusProps(CactusProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067f6e30;
  Sexy::Insets::Insets((Insets *)(this + 0x2b8));
  Sexy::Insets::Insets((Insets *)(this + 0x2c8));
  Sexy::Insets::Insets((Insets *)(this + 0x2d8));
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x300));
  *(undefined4 *)(this + 0x2e8) = 10;
  *(undefined4 *)(this + 0x2f0) = 10;
  *(undefined4 *)(this + 0x2ec) = 0x3f000000;
  *(undefined4 *)(this + 0x2f8) = 0x3f19999a;
  *(undefined4 *)(this + 0x2f4) = 0x3f000000;
  *(undefined4 *)(this + 0x2fc) = 0x3dcccccd;
  return;
}


/* CactusProps::StaticNew() */

CactusProps * CactusProps::StaticNew(void)

{
  CactusProps *this;
  
  this = ::operator_new(0x328);
  CactusProps(this);
  return this;
}


/* CactusProps::~CactusProps() */

void __thiscall CactusProps::~CactusProps(CactusProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f6e30;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x300));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* CactusProps::~CactusProps() */

void __thiscall CactusProps::~CactusProps(CactusProps *this)

{
  ~CactusProps(this);
  AK::FreeHook(this);
  return;
}

