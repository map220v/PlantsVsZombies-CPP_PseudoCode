// Class: ActionBezierTo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionBezierTo::StaticClassInit() */

void ActionBezierTo::StaticClassInit(void)

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
    std::string::string(asStack_10,"ActionBezierTo");
    (*pcVar2)(plVar1,asStack_10,FUN_049f7b20,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionBezierTo::StaticGetClass() */

long * ActionBezierTo::StaticGetClass(void)

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
  uVar2 = ActionBezierBy::StaticGetClass();
  (*pcVar3)(plVar1,"ActionBezierTo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActionBezierTo::GetClass() const */

long * ActionBezierTo::GetClass(void)

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
  uVar2 = ActionBezierBy::StaticGetClass();
  (*pcVar3)(plVar1,"ActionBezierTo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActionBezierTo::~ActionBezierTo() */

void __thiscall ActionBezierTo::~ActionBezierTo(ActionBezierTo *this)

{
  *(undefined ***)this = &PTR_GetClass_0692d090;
  ActionBezierBy::~ActionBezierBy((ActionBezierBy *)this);
  return;
}


/* ActionBezierTo::~ActionBezierTo() */

void __thiscall ActionBezierTo::~ActionBezierTo(ActionBezierTo *this)

{
  ~ActionBezierTo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionBezierTo::InitWithTarget(Sexy::RtWeakPtr<RealObject>, float, _ccBezierConfig const&) */

void __thiscall
ActionBezierTo::InitWithTarget
          (ActionBezierBy *param_1,ActionBezierTo *this,RtWeakPtrBase *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar1 = param_4[1];
  *(undefined8 *)(this + 0x94) = *param_4;
  *(undefined8 *)(this + 0x9c) = uVar1;
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xa4) = param_4[2];
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  ActionBezierBy::InitWithTarget(param_1,this,aRStack_10,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  fVar4 = *(float *)(this + 0x80);
  Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_10,*(float *)(this + 0x7c),fVar4);
  uVar3 = Sexy::SexyVector2::operator-((SexyVector2 *)(this + 0x9c),(SexyVector2 *)aRStack_10);
  *(undefined4 *)(this + 0x6c) = uVar3;
  *(float *)(this + 0x70) = fVar4;
  uVar3 = Sexy::SexyVector2::operator-((SexyVector2 *)(this + 0xa4),(SexyVector2 *)aRStack_10);
  *(undefined4 *)(this + 0x74) = uVar3;
  *(float *)(this + 0x78) = fVar4;
  uVar3 = Sexy::SexyVector2::operator-((SexyVector2 *)(this + 0x94),(SexyVector2 *)aRStack_10);
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 100) = uVar3;
  *(float *)(this + 0x68) = fVar4;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionBezierTo::ActionBezierTo() */

void __thiscall ActionBezierTo::ActionBezierTo(ActionBezierTo *this)

{
  ActionBezierBy::ActionBezierBy((ActionBezierBy *)this);
  *(undefined ***)this = &PTR_GetClass_0692d090;
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)(this + 0x94));
  return;
}


/* ActionBezierTo::StaticNew() */

ActionBezierTo * ActionBezierTo::StaticNew(void)

{
  ActionBezierTo *this;
  
  this = ::operator_new(0xb0);
  ActionBezierTo(this);
  return this;
}

