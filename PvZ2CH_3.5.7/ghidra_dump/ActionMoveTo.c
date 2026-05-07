// Class: ActionMoveTo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionMoveTo::StaticClassInit() */

void ActionMoveTo::StaticClassInit(void)

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
    std::string::string(asStack_10,"ActionMoveTo");
    (*pcVar2)(plVar1,asStack_10,FUN_049f74b0,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionMoveTo::StaticGetClass() */

long * ActionMoveTo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionMoveTo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActionMoveTo::GetClass() const */

long * ActionMoveTo::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionMoveTo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActionMoveTo::~ActionMoveTo() */

void __thiscall ActionMoveTo::~ActionMoveTo(ActionMoveTo *this)

{
  *(undefined ***)this = &PTR_GetClass_0692cf90;
  ActionBase::~ActionBase((ActionBase *)this);
  return;
}


/* ActionMoveTo::~ActionMoveTo() */

void __thiscall ActionMoveTo::~ActionMoveTo(ActionMoveTo *this)

{
  ~ActionMoveTo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionMoveTo::InitWithTarget(Sexy::RtWeakPtr<RealObject>, float, Sexy::SexyVector3 const&) */

void ActionMoveTo::InitWithTarget
               (ActionBase *param_1,undefined4 param_2,undefined4 param_3,long param_4,
               RtWeakPtrBase *param_5,SexyVector3 *param_6)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  SexyVector3 *pSVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
  ActionBase::InitWithTarget(param_1,param_4,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x50));
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this);
  local_18 = Sexy::SexyVector3::operator-(param_6,pSVar1);
  local_14 = param_2;
  local_10 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 100),(SexyVector3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionMoveTo::update(float) */

void ActionMoveTo::update(float param_1)

{
  RtWeakPtr *this;
  SexyVector3 *this_00;
  bool bVar1;
  long in_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x50);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    this_00 = (SexyVector3 *)(in_x0 + 0x70);
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    local_48 = *puVar2;
    local_40 = *(undefined4 *)(puVar2 + 1);
    local_38[0] = Sexy::SexyVector3::operator-
                            ((SexyVector3 *)&local_48,(SexyVector3 *)(in_x0 + 0x7c));
    local_18[0] = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)local_38);
    Sexy::SexyVector3::operator=(this_00,(SexyVector3 *)local_18);
    local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 100),param_1);
    local_28[0] = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)local_18);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar3 + 0x78))(plVar3,(SexyVector3 *)local_28);
    Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x7c),(SexyVector3 *)local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionMoveTo::ActionMoveTo() */

void __thiscall ActionMoveTo::ActionMoveTo(ActionMoveTo *this)

{
  ActionBase::ActionBase((ActionBase *)this);
  *(undefined ***)this = &PTR_GetClass_0692cf90;
  DVec3::DVec3((DVec3 *)(this + 100));
  DVec3::DVec3((DVec3 *)(this + 0x70));
  DVec3::DVec3((DVec3 *)(this + 0x7c));
  return;
}


/* ActionMoveTo::StaticNew() */

ActionMoveTo * ActionMoveTo::StaticNew(void)

{
  ActionMoveTo *this;
  
  this = ::operator_new(0x88);
  ActionMoveTo(this);
  return this;
}

