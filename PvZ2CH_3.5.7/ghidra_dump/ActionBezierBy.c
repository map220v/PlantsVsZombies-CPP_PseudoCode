// Class: ActionBezierBy


/* ActionBezierBy::isDone() const */

bool __thiscall ActionBezierBy::isDone(ActionBezierBy *this)

{
  return *(float *)(this + 0x58) <= *(float *)(this + 0x5c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionBezierBy::StaticClassInit() */

void ActionBezierBy::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ccBezierConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_049f7700,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ActionBezierBy");
    (*pcVar3)(plVar2,asStack_10,FUN_049f78cc,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionBezierBy::StaticGetClass() */

long * ActionBezierBy::StaticGetClass(void)

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
  uVar2 = ActionBase::StaticGetClass();
  (*pcVar3)(plVar1,"ActionBezierBy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActionBezierBy::GetClass() const */

long * ActionBezierBy::GetClass(void)

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
  uVar2 = ActionBase::StaticGetClass();
  (*pcVar3)(plVar1,"ActionBezierBy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActionBezierBy::~ActionBezierBy() */

void __thiscall ActionBezierBy::~ActionBezierBy(ActionBezierBy *this)

{
  *(undefined ***)this = &PTR_GetClass_0692d010;
  ActionBase::~ActionBase((ActionBase *)this);
  return;
}


/* ActionBezierBy::~ActionBezierBy() */

void __thiscall ActionBezierBy::~ActionBezierBy(ActionBezierBy *this)

{
  ~ActionBezierBy(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionBezierBy::InitWithTarget(Sexy::RtWeakPtr<RealObject>, float, _ccBezierConfig const&) */

void __thiscall
ActionBezierBy::InitWithTarget
          (ActionBase *param_1,ActionBezierBy *this,RtWeakPtrBase *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  ActionBase::InitWithTarget(param_1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar1 = param_4[1];
  *(undefined8 *)(this + 100) = *param_4;
  *(undefined8 *)(this + 0x6c) = uVar1;
  *(undefined8 *)(this + 0x74) = param_4[2];
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  pSVar2 = (SexyVector3 *)Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x7c),pSVar2);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x88),pSVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionBezierBy::update(float) */

void __thiscall ActionBezierBy::update(ActionBezierBy *this,float param_1)

{
  bool bVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x50));
  if (bVar1) {
    fVar4 = (float)FUN_049f60d0(*(undefined4 *)(this + 0x6c),*(undefined4 *)(this + 0x74),
                                *(undefined4 *)(this + 100),param_1);
    fVar5 = (float)FUN_049f60d0(*(undefined4 *)(this + 0x70),*(undefined4 *)(this + 0x78),
                                *(undefined4 *)(this + 0x68),param_1);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
    uVar6 = 0;
    pcVar3 = *(code **)(*plVar2 + 0x78);
    EATextSquish::Vec3::Vec3(aVStack_28,fVar4,fVar5,0.0);
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)(this + 0x7c),(SexyVector3 *)aVStack_28);
    local_14 = fVar5;
    local_10 = uVar6;
    (*pcVar3)(plVar2,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionBezierBy::ActionBezierBy() */

void __thiscall ActionBezierBy::ActionBezierBy(ActionBezierBy *this)

{
  ActionBase::ActionBase((ActionBase *)this);
  *(undefined ***)this = &PTR_GetClass_0692d010;
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)(this + 100));
  DVec3::DVec3((DVec3 *)(this + 0x7c));
  DVec3::DVec3((DVec3 *)(this + 0x88));
  return;
}


/* ActionBezierBy::StaticNew() */

ActionBezierBy * ActionBezierBy::StaticNew(void)

{
  ActionBezierBy *this;
  
  this = ::operator_new(0x98);
  ActionBezierBy(this);
  return this;
}

