// Class: TimeEnergyTriggerData


/* TimeEnergyTriggerData::TimeEnergyTriggerData() */

void __thiscall TimeEnergyTriggerData::TimeEnergyTriggerData(TimeEnergyTriggerData *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06991830;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  TimeEnergyWormHoleTriggerData::TimeEnergyWormHoleTriggerData
            ((TimeEnergyWormHoleTriggerData *)(this + 0x20));
  TimeEnergyPortalTriggerData::TimeEnergyPortalTriggerData
            ((TimeEnergyPortalTriggerData *)(this + 0x30));
  TimeEnergyBlackHoleTriggerData::TimeEnergyBlackHoleTriggerData
            ((TimeEnergyBlackHoleTriggerData *)(this + 0x70));
  return;
}


/* TimeEnergyTriggerData::StaticNew() */

TimeEnergyTriggerData * TimeEnergyTriggerData::StaticNew(void)

{
  TimeEnergyTriggerData *this;
  
  this = ::operator_new(0x90);
  TimeEnergyTriggerData(this);
  return this;
}


/* TimeEnergyTriggerData::~TimeEnergyTriggerData() */

void __thiscall TimeEnergyTriggerData::~TimeEnergyTriggerData(TimeEnergyTriggerData *this)

{
  *(undefined ***)this = &PTR_GetClass_06991830;
  TimeEnergyBlackHoleTriggerData::~TimeEnergyBlackHoleTriggerData
            ((TimeEnergyBlackHoleTriggerData *)(this + 0x70));
  TimeEnergyPortalTriggerData::~TimeEnergyPortalTriggerData
            ((TimeEnergyPortalTriggerData *)(this + 0x30));
  TimeEnergyWormHoleTriggerData::~TimeEnergyWormHoleTriggerData
            ((TimeEnergyWormHoleTriggerData *)(this + 0x20));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* TimeEnergyTriggerData::~TimeEnergyTriggerData() */

void __thiscall TimeEnergyTriggerData::~TimeEnergyTriggerData(TimeEnergyTriggerData *this)

{
  ~TimeEnergyTriggerData(this);
  AK::FreeHook(this);
  return;
}


/* TimeEnergyTriggerData::TimeEnergyTriggerData(TimeEnergyTriggerData const&) */

void __thiscall
TimeEnergyTriggerData::TimeEnergyTriggerData
          (TimeEnergyTriggerData *this,TimeEnergyTriggerData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined ***)this = &PTR_GetClass_06991830;
  *(undefined4 *)(this + 0x18) = uVar1;
  TimeEnergyWormHoleTriggerData::TimeEnergyWormHoleTriggerData
            ((TimeEnergyWormHoleTriggerData *)(this + 0x20),
             (TimeEnergyWormHoleTriggerData *)(param_1 + 0x20));
  TimeEnergyPortalTriggerData::TimeEnergyPortalTriggerData
            ((TimeEnergyPortalTriggerData *)(this + 0x30),
             (TimeEnergyPortalTriggerData *)(param_1 + 0x30));
  TimeEnergyBlackHoleTriggerData::TimeEnergyBlackHoleTriggerData
            ((TimeEnergyBlackHoleTriggerData *)(this + 0x70),
             (TimeEnergyBlackHoleTriggerData *)(param_1 + 0x70));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyTriggerData::StaticClassInit() */

void TimeEnergyTriggerData::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0xffffffff;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"invalid",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"wormhole",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"portal",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"blackhole",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"TimeEnergyTriggerType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"TimeEnergyTriggerData");
    (*pcVar3)(plVar2,avStack_20,FUN_04c710bc,0x90,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyTriggerData::StaticGetClass() */

long * TimeEnergyTriggerData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TimeEnergyTriggerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyTriggerData::GetClass() const */

long * TimeEnergyTriggerData::GetClass(void)

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
  (*pcVar3)(plVar1,"TimeEnergyTriggerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyTriggerData::TEMPNAMEPLACEHOLDERVALUE(TimeEnergyTriggerData const&) */

TimeEnergyTriggerData * __thiscall
TimeEnergyTriggerData::operator=(TimeEnergyTriggerData *this,TimeEnergyTriggerData *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  DIniItem::operator=((DIniItem *)this,(DIniItem *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar1;
  TimeEnergyWormHoleTriggerData::operator=
            ((TimeEnergyWormHoleTriggerData *)(this + 0x20),
             (TimeEnergyWormHoleTriggerData *)(param_1 + 0x20));
  TimeEnergyPortalTriggerData::operator=
            ((TimeEnergyPortalTriggerData *)(this + 0x30),
             (TimeEnergyPortalTriggerData *)(param_1 + 0x30));
  TimeEnergyBlackHoleTriggerData::operator=
            ((TimeEnergyBlackHoleTriggerData *)(this + 0x70),
             (TimeEnergyBlackHoleTriggerData *)(param_1 + 0x70));
  return this;
}


/* TimeEnergyTriggerData::TimeEnergyTriggerData(TimeEnergyTriggerData&&) */

void __thiscall
TimeEnergyTriggerData::TimeEnergyTriggerData
          (TimeEnergyTriggerData *this,TimeEnergyTriggerData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined ***)this = &PTR_GetClass_06991830;
  *(undefined4 *)(this + 0x18) = uVar1;
  TimeEnergyWormHoleTriggerData::TimeEnergyWormHoleTriggerData
            ((TimeEnergyWormHoleTriggerData *)(this + 0x20),
             (TimeEnergyWormHoleTriggerData *)(param_1 + 0x20));
  TimeEnergyPortalTriggerData::TimeEnergyPortalTriggerData
            ((TimeEnergyPortalTriggerData *)(this + 0x30),
             (TimeEnergyPortalTriggerData *)(param_1 + 0x30));
  TimeEnergyBlackHoleTriggerData::TimeEnergyBlackHoleTriggerData
            ((TimeEnergyBlackHoleTriggerData *)(this + 0x70),
             (TimeEnergyBlackHoleTriggerData *)(param_1 + 0x70));
  return;
}

