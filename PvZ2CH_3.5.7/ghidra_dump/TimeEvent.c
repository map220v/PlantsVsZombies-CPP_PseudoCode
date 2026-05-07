// Class: TimeEvent


/* TimeEvent::Create() */

void TimeEvent::Create(void)

{
  GameObject::Create<TimeEvent>();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEvent::Init(Sexy::RtId, std::string const&) */

void __thiscall TimeEvent::Init(TimeEvent *this,RtId *param_2,undefined8 param_3)

{
  RtId aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtId::RtId(aRStack_58,param_2);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_50,aRStack_58,param_3);
  RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x28),
             (RtReflectionDelegate *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  Sexy::RtId::~RtId(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEvent::Create(Sexy::RtId, std::string const&) */

void TimeEvent::Create(RtId *param_1,undefined8 param_2)

{
  TimeEvent *pTVar1;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar1 = (TimeEvent *)Create();
  Sexy::RtId::RtId(aRStack_10,param_1);
  Init(pTVar1,aRStack_10,param_2);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pTVar1);
}


/* TimeEvent::~TimeEvent() */

void __thiscall TimeEvent::~TimeEvent(TimeEvent *this)

{
  *(undefined ***)this = &PTR_GetClass_06733c50;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x28));
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* TimeEvent::~TimeEvent() */

void __thiscall TimeEvent::~TimeEvent(TimeEvent *this)

{
  ~TimeEvent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEvent::StaticClassInit() */

void TimeEvent::StaticClassInit(void)

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
    std::string::string(asStack_10,"TimeEvent");
    (*pcVar2)(plVar1,asStack_10,FUN_03b5c270,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEvent::StaticGetClass() */

long * TimeEvent::StaticGetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"TimeEvent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEvent::GetClass() const */

long * TimeEvent::GetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"TimeEvent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEvent::TimeEvent() */

void __thiscall TimeEvent::TimeEvent(TimeEvent *this)

{
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  *(undefined ***)this = &PTR_GetClass_06733c50;
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x28));
  return;
}


/* TimeEvent::StaticNew() */

TimeEvent * TimeEvent::StaticNew(void)

{
  TimeEvent *this;
  
  this = ::operator_new(0x70);
  TimeEvent(this);
  return this;
}


/* TimeEvent::Update(float) */

void TimeEvent::Update(float param_1)

{
  long in_x0;
  RtInvokeVariant *pRVar1;
  
  pRVar1 = (RtInvokeVariant *)
           RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                     ((RtReflectionDelegate<Sexy::Delegate0> *)(in_x0 + 0x28));
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar1);
  return;
}

