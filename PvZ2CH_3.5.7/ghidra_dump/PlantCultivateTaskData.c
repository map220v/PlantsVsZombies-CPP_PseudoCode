// Class: PlantCultivateTaskData


/* PlantCultivateTaskData::~PlantCultivateTaskData() */

void __thiscall PlantCultivateTaskData::~PlantCultivateTaskData(PlantCultivateTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670d220;
  GeneralTaskData::~GeneralTaskData((GeneralTaskData *)this);
  return;
}


/* PlantCultivateTaskData::~PlantCultivateTaskData() */

void __thiscall PlantCultivateTaskData::~PlantCultivateTaskData(PlantCultivateTaskData *this)

{
  ~PlantCultivateTaskData(this);
  AK::FreeHook(this);
  return;
}


/* PlantCultivateTaskData::PlantCultivateTaskData() */

void __thiscall PlantCultivateTaskData::PlantCultivateTaskData(PlantCultivateTaskData *this)

{
  GeneralTaskData::GeneralTaskData((GeneralTaskData *)this);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR_GetClass_0670d220;
  return;
}


/* PlantCultivateTaskData::StaticNew() */

PlantCultivateTaskData * PlantCultivateTaskData::StaticNew(void)

{
  PlantCultivateTaskData *this;
  
  this = ::operator_new(0x58);
  PlantCultivateTaskData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCultivateTaskData::StaticClassInit() */

void PlantCultivateTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCultivateTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a73890,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCultivateTaskData::StaticGetClass() */

long * PlantCultivateTaskData::StaticGetClass(void)

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
  uVar2 = GeneralTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"PlantCultivateTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCultivateTaskData::GetClass() const */

long * PlantCultivateTaskData::GetClass(void)

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
  uVar2 = GeneralTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"PlantCultivateTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

