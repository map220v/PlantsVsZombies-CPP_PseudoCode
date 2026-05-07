// Class: PlantSuggestedTagsModuleProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSuggestedTagsModuleProps::StaticClassInit() */

void PlantSuggestedTagsModuleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSuggestedTagsModuleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04da91cc,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSuggestedTagsModuleProps::StaticGetClass() */

long * PlantSuggestedTagsModuleProps::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PlantSuggestedTagsModuleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSuggestedTagsModuleProps::GetClass() const */

long * PlantSuggestedTagsModuleProps::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PlantSuggestedTagsModuleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSuggestedTagsModuleProps::GetModuleClass() const */

long * PlantSuggestedTagsModuleProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantSuggestedTagsModule::sClass != (long *)0x0) {
    return PlantSuggestedTagsModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantSuggestedTagsModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantSuggestedTagsModule",uVar2,PlantSuggestedTagsModule::StaticNew);
  PlantSuggestedTagsModule::StaticClassInit();
  return PlantSuggestedTagsModule::sClass;
}


/* PlantSuggestedTagsModuleProps::PlantSuggestedTagsModuleProps() */

void __thiscall
PlantSuggestedTagsModuleProps::PlantSuggestedTagsModuleProps(PlantSuggestedTagsModuleProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069be8a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* PlantSuggestedTagsModuleProps::StaticNew() */

PlantSuggestedTagsModuleProps * PlantSuggestedTagsModuleProps::StaticNew(void)

{
  PlantSuggestedTagsModuleProps *this;
  
  this = ::operator_new(0x58);
  PlantSuggestedTagsModuleProps(this);
  return this;
}


/* PlantSuggestedTagsModuleProps::~PlantSuggestedTagsModuleProps() */

void __thiscall
PlantSuggestedTagsModuleProps::~PlantSuggestedTagsModuleProps(PlantSuggestedTagsModuleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069be8a0;
  std::
  vector<std::vector<PlantTag,std::allocator<PlantTag>>,std::allocator<std::vector<PlantTag,std::allocator<PlantTag>>>>
  ::~vector((vector<std::vector<PlantTag,std::allocator<PlantTag>>,std::allocator<std::vector<PlantTag,std::allocator<PlantTag>>>>
             *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PlantSuggestedTagsModuleProps::~PlantSuggestedTagsModuleProps() */

void __thiscall
PlantSuggestedTagsModuleProps::~PlantSuggestedTagsModuleProps(PlantSuggestedTagsModuleProps *this)

{
  ~PlantSuggestedTagsModuleProps(this);
  AK::FreeHook(this);
  return;
}

