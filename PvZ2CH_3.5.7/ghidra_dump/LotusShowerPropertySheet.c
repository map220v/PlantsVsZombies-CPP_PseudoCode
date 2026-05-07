// Class: LotusShowerPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotusShowerPropertySheet::StaticClassInit() */

void LotusShowerPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"LotusShowerPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_040a8438,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotusShowerPropertySheet::StaticGetClass() */

long * LotusShowerPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LotusShowerPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LotusShowerPropertySheet::GetClass() const */

long * LotusShowerPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"LotusShowerPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LotusShowerPropertySheet::LotusShowerPropertySheet() */

void __thiscall LotusShowerPropertySheet::LotusShowerPropertySheet(LotusShowerPropertySheet *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067d1ba0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2b8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2c0));
  return;
}


/* LotusShowerPropertySheet::StaticNew() */

LotusShowerPropertySheet * LotusShowerPropertySheet::StaticNew(void)

{
  LotusShowerPropertySheet *this;
  
  this = ::operator_new(0x2c8);
  LotusShowerPropertySheet(this);
  return this;
}


/* LotusShowerPropertySheet::~LotusShowerPropertySheet() */

void __thiscall LotusShowerPropertySheet::~LotusShowerPropertySheet(LotusShowerPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_067d1ba0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* LotusShowerPropertySheet::~LotusShowerPropertySheet() */

void __thiscall LotusShowerPropertySheet::~LotusShowerPropertySheet(LotusShowerPropertySheet *this)

{
  ~LotusShowerPropertySheet(this);
  AK::FreeHook(this);
  return;
}

