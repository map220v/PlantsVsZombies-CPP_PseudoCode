// Class: PlantCultivateTaskConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateTaskConfig::StaticClassInit() */

void PlantCultivateTaskConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCultivateTaskConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_03a773b8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCultivateTaskConfig::StaticGetClass() */

long * PlantCultivateTaskConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCultivateTaskConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCultivateTaskConfig::GetClass() const */

long * PlantCultivateTaskConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCultivateTaskConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCultivateTaskConfig::PlantCultivateTaskConfig() */

void __thiscall PlantCultivateTaskConfig::PlantCultivateTaskConfig(PlantCultivateTaskConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0670d290;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* PlantCultivateTaskConfig::StaticNew() */

PlantCultivateTaskConfig * PlantCultivateTaskConfig::StaticNew(void)

{
  PlantCultivateTaskConfig *this;
  
  this = ::operator_new(0x20);
  PlantCultivateTaskConfig(this);
  return this;
}


/* PlantCultivateTaskConfig::~PlantCultivateTaskConfig() */

void __thiscall PlantCultivateTaskConfig::~PlantCultivateTaskConfig(PlantCultivateTaskConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0670d290;
  std::
  vector<Sexy::RtEmbeddedPtr<GeneralTaskData,158>,std::allocator<Sexy::RtEmbeddedPtr<GeneralTaskData,158>>>
  ::~vector((vector<Sexy::RtEmbeddedPtr<GeneralTaskData,158>,std::allocator<Sexy::RtEmbeddedPtr<GeneralTaskData,158>>>
             *)(this + 8));
  nop();
  return;
}


/* PlantCultivateTaskConfig::~PlantCultivateTaskConfig() */

void __thiscall PlantCultivateTaskConfig::~PlantCultivateTaskConfig(PlantCultivateTaskConfig *this)

{
  ~PlantCultivateTaskConfig(this);
  AK::FreeHook(this);
  return;
}

