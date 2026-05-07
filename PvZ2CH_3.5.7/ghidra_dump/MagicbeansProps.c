// Class: MagicbeansProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicbeansProps::StaticClassInit() */

void MagicbeansProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagicbeansProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0405b780,0x2f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagicbeansProps::StaticGetClass() */

long * MagicbeansProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MagicbeansProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicbeansProps::GetClass() const */

long * MagicbeansProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MagicbeansProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicbeansProps::MagicbeansProps() */

void __thiscall MagicbeansProps::MagicbeansProps(MagicbeansProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067c2390;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2c4));
  this[0x2cc] = (MagicbeansProps)0x0;
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2d4) = 0x41700000;
  DuplicatableProps::DuplicatableProps((DuplicatableProps *)(this + 0x2d8));
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined4 *)(this + 700) = 0x3f800000;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2c0) = 0x3f000000;
  *(undefined4 *)(this + 0x2c8) = 0;
  return;
}


/* MagicbeansProps::StaticNew() */

MagicbeansProps * MagicbeansProps::StaticNew(void)

{
  MagicbeansProps *this;
  
  this = ::operator_new(0x2f8);
  MagicbeansProps(this);
  return this;
}


/* MagicbeansProps::~MagicbeansProps() */

void __thiscall MagicbeansProps::~MagicbeansProps(MagicbeansProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067c2390;
  DuplicatableProps::~DuplicatableProps((DuplicatableProps *)(this + 0x2d8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* MagicbeansProps::~MagicbeansProps() */

void __thiscall MagicbeansProps::~MagicbeansProps(MagicbeansProps *this)

{
  ~MagicbeansProps(this);
  AK::FreeHook(this);
  return;
}

