// Class: MissileToeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeProps::StaticClassInit() */

void MissileToeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MissileToeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bf51b4,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MissileToeProps::StaticGetClass() */

long * MissileToeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MissileToeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MissileToeProps::GetClass() const */

long * MissileToeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MissileToeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MissileToeProps::MissileToeProps() */

void __thiscall MissileToeProps::MissileToeProps(MissileToeProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06740c60;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2c4));
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined4 *)(this + 700) = 0x3f800000;
  *(undefined4 *)(this + 0x2c0) = 0x3f000000;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2cc) = 0x41200000;
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0;
  return;
}


/* MissileToeProps::StaticNew() */

MissileToeProps * MissileToeProps::StaticNew(void)

{
  MissileToeProps *this;
  
  this = ::operator_new(0x2e0);
  MissileToeProps(this);
  return this;
}


/* MissileToeProps::~MissileToeProps() */

void __thiscall MissileToeProps::~MissileToeProps(MissileToeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06740c60;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* MissileToeProps::~MissileToeProps() */

void __thiscall MissileToeProps::~MissileToeProps(MissileToeProps *this)

{
  ~MissileToeProps(this);
  AK::FreeHook(this);
  return;
}

