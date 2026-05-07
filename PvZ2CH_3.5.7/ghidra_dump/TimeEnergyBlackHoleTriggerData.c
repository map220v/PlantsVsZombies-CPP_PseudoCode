// Class: TimeEnergyBlackHoleTriggerData


/* TimeEnergyBlackHoleTriggerData::~TimeEnergyBlackHoleTriggerData() */

void __thiscall
TimeEnergyBlackHoleTriggerData::~TimeEnergyBlackHoleTriggerData
          (TimeEnergyBlackHoleTriggerData *this)

{
  *(undefined ***)this = &PTR_GetClass_069917d0;
  std::string::~string((string *)(this + 0x18));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* TimeEnergyBlackHoleTriggerData::~TimeEnergyBlackHoleTriggerData() */

void __thiscall
TimeEnergyBlackHoleTriggerData::~TimeEnergyBlackHoleTriggerData
          (TimeEnergyBlackHoleTriggerData *this)

{
  ~TimeEnergyBlackHoleTriggerData(this);
  AK::FreeHook(this);
  return;
}


/* TimeEnergyBlackHoleTriggerData::TimeEnergyBlackHoleTriggerData() */

void __thiscall
TimeEnergyBlackHoleTriggerData::TimeEnergyBlackHoleTriggerData(TimeEnergyBlackHoleTriggerData *this)

{
  size_t in_x2;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_069917d0;
  Set8BytesTo0((string *)(this + 0x18));
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  std::string::append((string *)(this + 0x18),"",in_x2);
  return;
}


/* TimeEnergyBlackHoleTriggerData::StaticNew() */

TimeEnergyBlackHoleTriggerData * TimeEnergyBlackHoleTriggerData::StaticNew(void)

{
  TimeEnergyBlackHoleTriggerData *this;
  
  this = ::operator_new(0x20);
  TimeEnergyBlackHoleTriggerData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyBlackHoleTriggerData::StaticClassInit() */

void TimeEnergyBlackHoleTriggerData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TimeEnergyBlackHoleTriggerData");
    (*pcVar2)(plVar1,asStack_10,FUN_04c6d754,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyBlackHoleTriggerData::StaticGetClass() */

long * TimeEnergyBlackHoleTriggerData::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"TimeEnergyBlackHoleTriggerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyBlackHoleTriggerData::GetClass() const */

long * TimeEnergyBlackHoleTriggerData::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"TimeEnergyBlackHoleTriggerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyBlackHoleTriggerData::TimeEnergyBlackHoleTriggerData(TimeEnergyBlackHoleTriggerData
   const&) */

void __thiscall
TimeEnergyBlackHoleTriggerData::TimeEnergyBlackHoleTriggerData
          (TimeEnergyBlackHoleTriggerData *this,TimeEnergyBlackHoleTriggerData *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &PTR_GetClass_069917d0;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  return;
}


/* TimeEnergyBlackHoleTriggerData::TEMPNAMEPLACEHOLDERVALUE(TimeEnergyBlackHoleTriggerData const&)
    */

TimeEnergyBlackHoleTriggerData * __thiscall
TimeEnergyBlackHoleTriggerData::operator=
          (TimeEnergyBlackHoleTriggerData *this,TimeEnergyBlackHoleTriggerData *param_1)

{
  DIniItem::operator=((DIniItem *)this,(DIniItem *)param_1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  return this;
}


/* TimeEnergyBlackHoleTriggerData::TimeEnergyBlackHoleTriggerData(TimeEnergyBlackHoleTriggerData&&)
    */

void __thiscall
TimeEnergyBlackHoleTriggerData::TimeEnergyBlackHoleTriggerData
          (TimeEnergyBlackHoleTriggerData *this,TimeEnergyBlackHoleTriggerData *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &PTR_GetClass_069917d0;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  return;
}

