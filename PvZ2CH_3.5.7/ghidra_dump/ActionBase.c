// Class: ActionBase


/* ActionBase::stop() */

void ActionBase::stop(void)

{
  return;
}


/* ActionBase::step(float) */

void __thiscall ActionBase::step(ActionBase *this,float param_1)

{
  code *pcVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (this[0x60] == (ActionBase)0x0) {
    fVar2 = param_1 + *(float *)(this + 0x5c);
  }
  else {
    fVar2 = 0.0;
    this[0x60] = (ActionBase)0x0;
  }
  fVar4 = fVar2 / *(float *)(this + 0x58);
  pcVar1 = *(code **)(*(long *)this + 0x60);
  *(float *)(this + 0x5c) = fVar2;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  uVar3 = NEON_fminnm(fVar4,0x3f800000);
  (*pcVar1)(uVar3,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionBase::StaticClassInit() */

void ActionBase::StaticClassInit(void)

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
    std::string::string(asStack_10,"ActionBase");
    (*pcVar2)(plVar1,asStack_10,FUN_049f7f38,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionBase::StaticGetClass() */

long * ActionBase::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActionBase::GetClass() const */

long * ActionBase::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActionBase::InitWithTarget(Sexy::RtWeakPtr<RealObject>, float) */

void __thiscall ActionBase::InitWithTarget(float param_1,ActionBase *this,RtWeakPtr *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x50),param_3);
  if (param_1 == 0.0) {
    *(undefined4 *)(this + 0x58) = 0x34000000;
    this[0x60] = (ActionBase)0x1;
    *(undefined4 *)(this + 0x5c) = 0;
    return;
  }
  *(float *)(this + 0x58) = param_1;
  this[0x60] = (ActionBase)0x1;
  *(undefined4 *)(this + 0x5c) = 0;
  return;
}


/* ActionBase::~ActionBase() */

void __thiscall ActionBase::~ActionBase(ActionBase *this)

{
  *(undefined ***)this = &PTR_GetClass_0692ce90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 8));
  nop();
  return;
}


/* ActionBase::~ActionBase() */

void __thiscall ActionBase::~ActionBase(ActionBase *this)

{
  ~ActionBase(this);
  AK::FreeHook(this);
  return;
}


/* ActionBase::ActionBase() */

void __thiscall ActionBase::ActionBase(ActionBase *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0692ce90;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  this[0x60] = (ActionBase)0x1;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  return;
}


/* ActionBase::StaticNew() */

ActionBase * ActionBase::StaticNew(void)

{
  ActionBase *this;
  
  this = ::operator_new(0x68);
  ActionBase(this);
  return this;
}

