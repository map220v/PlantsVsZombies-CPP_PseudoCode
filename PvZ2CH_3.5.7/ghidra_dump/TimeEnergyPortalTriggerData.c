// Class: TimeEnergyPortalTriggerData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyPortalTriggerData::StaticClassInit() */

void TimeEnergyPortalTriggerData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TimeEnergyPortalTriggerData");
    (*pcVar2)(plVar1,asStack_10,FUN_04c6ead0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyPortalTriggerData::StaticGetClass() */

long * TimeEnergyPortalTriggerData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TimeEnergyPortalTriggerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyPortalTriggerData::GetClass() const */

long * TimeEnergyPortalTriggerData::GetClass(void)

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
  (*pcVar3)(plVar1,"TimeEnergyPortalTriggerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyPortalTriggerData::TimeEnergyPortalTriggerData() */

void __thiscall
TimeEnergyPortalTriggerData::TimeEnergyPortalTriggerData(TimeEnergyPortalTriggerData *this)

{
  size_t in_x2;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06991770;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x28));
  Set8BytesTo0((string *)(this + 0x30));
  Set8BytesTo0((string *)(this + 0x38));
  std::string::append((string *)(this + 0x28),"",in_x2);
  std::string::append((string *)(this + 0x30),"",in_x2);
  std::string::append((string *)(this + 0x38),"",in_x2);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::clear
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x10));
  return;
}


/* TimeEnergyPortalTriggerData::StaticNew() */

TimeEnergyPortalTriggerData * TimeEnergyPortalTriggerData::StaticNew(void)

{
  TimeEnergyPortalTriggerData *this;
  
  this = ::operator_new(0x40);
  TimeEnergyPortalTriggerData(this);
  return this;
}


/* TimeEnergyPortalTriggerData::~TimeEnergyPortalTriggerData() */

void __thiscall
TimeEnergyPortalTriggerData::~TimeEnergyPortalTriggerData(TimeEnergyPortalTriggerData *this)

{
  *(undefined ***)this = &PTR_GetClass_06991770;
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* TimeEnergyPortalTriggerData::~TimeEnergyPortalTriggerData() */

void __thiscall
TimeEnergyPortalTriggerData::~TimeEnergyPortalTriggerData(TimeEnergyPortalTriggerData *this)

{
  ~TimeEnergyPortalTriggerData(this);
  AK::FreeHook(this);
  return;
}


/* TimeEnergyPortalTriggerData::TimeEnergyPortalTriggerData(TimeEnergyPortalTriggerData const&) */

void __thiscall
TimeEnergyPortalTriggerData::TimeEnergyPortalTriggerData
          (TimeEnergyPortalTriggerData *this,TimeEnergyPortalTriggerData *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_06991770;
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  return;
}


/* TimeEnergyPortalTriggerData::TEMPNAMEPLACEHOLDERVALUE(TimeEnergyPortalTriggerData const&) */

TimeEnergyPortalTriggerData * __thiscall
TimeEnergyPortalTriggerData::operator=
          (TimeEnergyPortalTriggerData *this,TimeEnergyPortalTriggerData *param_1)

{
  DIniItem::operator=((DIniItem *)this,(DIniItem *)param_1);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::operator=
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  return this;
}


/* TimeEnergyPortalTriggerData::TimeEnergyPortalTriggerData(TimeEnergyPortalTriggerData&&) */

void __thiscall
TimeEnergyPortalTriggerData::TimeEnergyPortalTriggerData
          (TimeEnergyPortalTriggerData *this,TimeEnergyPortalTriggerData *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_06991770;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  FUN_05474148(this + 0x28,param_1 + 0x28);
  FUN_05474148(this + 0x30,param_1 + 0x30);
  FUN_05474148(this + 0x38,param_1 + 0x38);
  return;
}

