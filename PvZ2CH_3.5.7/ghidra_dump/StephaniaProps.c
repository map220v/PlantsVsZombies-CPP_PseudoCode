// Class: StephaniaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaProps::StaticClassInit() */

void StephaniaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StephaniaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040f5f34,0x338,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StephaniaProps::StaticGetClass() */

long * StephaniaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StephaniaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StephaniaProps::GetClass() const */

long * StephaniaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StephaniaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StephaniaProps::StephaniaProps() */

void __thiscall StephaniaProps::StephaniaProps(StephaniaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067e0dd0;
  DVec3::DVec3((DVec3 *)(this + 0x2c0));
  DVec3::DVec3((DVec3 *)(this + 0x2cc));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2d8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x308));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 800));
  *(undefined4 *)(this + 0x2b8) = 0x42c80000;
  *(undefined4 *)(this + 700) = 0x42480000;
  return;
}


/* StephaniaProps::StaticNew() */

StephaniaProps * StephaniaProps::StaticNew(void)

{
  StephaniaProps *this;
  
  this = ::operator_new(0x338);
  StephaniaProps(this);
  return this;
}


/* StephaniaProps::~StephaniaProps() */

void __thiscall StephaniaProps::~StephaniaProps(StephaniaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e0dd0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 800));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x308));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2f0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* StephaniaProps::~StephaniaProps() */

void __thiscall StephaniaProps::~StephaniaProps(StephaniaProps *this)

{
  ~StephaniaProps(this);
  AK::FreeHook(this);
  return;
}

