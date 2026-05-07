// Class: TimeEnergyWormHoleTriggerData


/* TimeEnergyWormHoleTriggerData::~TimeEnergyWormHoleTriggerData() */

void __thiscall
TimeEnergyWormHoleTriggerData::~TimeEnergyWormHoleTriggerData(TimeEnergyWormHoleTriggerData *this)

{
  *(undefined ***)this = &PTR_GetClass_06991710;
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* TimeEnergyWormHoleTriggerData::~TimeEnergyWormHoleTriggerData() */

void __thiscall
TimeEnergyWormHoleTriggerData::~TimeEnergyWormHoleTriggerData(TimeEnergyWormHoleTriggerData *this)

{
  ~TimeEnergyWormHoleTriggerData(this);
  AK::FreeHook(this);
  return;
}


/* TimeEnergyWormHoleTriggerData::TimeEnergyWormHoleTriggerData() */

void __thiscall
TimeEnergyWormHoleTriggerData::TimeEnergyWormHoleTriggerData(TimeEnergyWormHoleTriggerData *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06991710;
  return;
}


/* TimeEnergyWormHoleTriggerData::StaticNew() */

TimeEnergyWormHoleTriggerData * TimeEnergyWormHoleTriggerData::StaticNew(void)

{
  TimeEnergyWormHoleTriggerData *this;
  
  this = ::operator_new(0x10);
  TimeEnergyWormHoleTriggerData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyWormHoleTriggerData::StaticClassInit() */

void TimeEnergyWormHoleTriggerData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TimeEnergyWormHoleTriggerData");
    (*pcVar2)(plVar1,asStack_10,FUN_04c6d40c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyWormHoleTriggerData::StaticGetClass() */

long * TimeEnergyWormHoleTriggerData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TimeEnergyWormHoleTriggerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyWormHoleTriggerData::GetClass() const */

long * TimeEnergyWormHoleTriggerData::GetClass(void)

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
  (*pcVar3)(plVar1,"TimeEnergyWormHoleTriggerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyWormHoleTriggerData::TimeEnergyWormHoleTriggerData(TimeEnergyWormHoleTriggerData
   const&) */

void __thiscall
TimeEnergyWormHoleTriggerData::TimeEnergyWormHoleTriggerData
          (TimeEnergyWormHoleTriggerData *this,TimeEnergyWormHoleTriggerData *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_06991710;
  return;
}


/* TimeEnergyWormHoleTriggerData::TEMPNAMEPLACEHOLDERVALUE(TimeEnergyWormHoleTriggerData const&) */

TimeEnergyWormHoleTriggerData * __thiscall
TimeEnergyWormHoleTriggerData::operator=
          (TimeEnergyWormHoleTriggerData *this,TimeEnergyWormHoleTriggerData *param_1)

{
  DIniItem::operator=((DIniItem *)this,(DIniItem *)param_1);
  return this;
}


/* TimeEnergyWormHoleTriggerData::TimeEnergyWormHoleTriggerData(TimeEnergyWormHoleTriggerData&&) */

void __thiscall
TimeEnergyWormHoleTriggerData::TimeEnergyWormHoleTriggerData
          (TimeEnergyWormHoleTriggerData *this,TimeEnergyWormHoleTriggerData *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_06991710;
  return;
}

