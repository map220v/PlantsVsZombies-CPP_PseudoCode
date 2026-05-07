// Class: PlantBroccoli


/* PlantBroccoli::CanBeShoveled() */

bool __thiscall PlantBroccoli::CanBeShoveled(PlantBroccoli *this)

{
  return 2 < *(int *)(*(long *)(this + 0x10) + 200) - 0x10U;
}


/* PlantBroccoli::CanApplyPlantfood() */

bool __thiscall PlantBroccoli::CanApplyPlantfood(PlantBroccoli *this)

{
  return (*(uint *)(*(long *)(this + 0x10) + 200) & 0xfffffffb) == 10 ||
         *(uint *)(*(long *)(this + 0x10) + 200) == 0x13;
}


/* PlantBroccoli::CalcRenderOrder() */

void __thiscall PlantBroccoli::CalcRenderOrder(PlantBroccoli *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    Board::MakeRenderOrder(0x639c0,*(int *)(*(long *)(this + 0x10) + 0x110) + 1,2);
    return;
  }
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    Board::MakeRenderOrder(0x639c0,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),2);
    return;
  default:
    PlantFramework::CalcRenderOrder((PlantFramework *)this);
    return;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::StaticClassInit() */

void PlantBroccoli::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBroccoli");
    (*pcVar2)(plVar1,asStack_10,FUN_03ff341c,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBroccoli::StaticGetClass() */

long * PlantBroccoli::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantBroccoli",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBroccoli::GetClass() const */

long * PlantBroccoli::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantBroccoli",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBroccoli::IsBetterTargetWithPrimaryWeapon(Zombie*, Zombie*) */

bool __thiscall
PlantBroccoli::IsBetterTargetWithPrimaryWeapon(PlantBroccoli *this,Zombie *param_1,Zombie *param_2)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  bVar2 = param_1 != (Zombie *)0x0 && param_2 == (Zombie *)0x0;
  if ((param_1 != (Zombie *)0x0 && param_2 == (Zombie *)0x0) ||
     ((iVar1 = Zombie::GetSizeType(param_1), iVar1 == 0 &&
      (iVar1 = Zombie::GetSizeType(param_2), iVar1 != 0)))) {
    bVar2 = true;
  }
  else {
    iVar1 = Zombie::GetSizeType(param_1);
    if ((iVar1 == 0) && (iVar1 = Zombie::GetSizeType(param_2), iVar1 == 0)) {
      fVar3 = (float)FUN_03ff1558(*(undefined4 *)(param_1 + 0x280));
      fVar4 = (float)FUN_03ff1558(*(undefined4 *)(param_2 + 0x280));
      bVar2 = fVar4 < fVar3;
    }
  }
  return bVar2;
}


/* PlantBroccoli::OnAttackAnimationHitBackMiddle() */

void __thiscall PlantBroccoli::OnAttackAnimationHitBackMiddle(PlantBroccoli *this)

{
  float *pfVar1;
  float fVar2;
  
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x4c) = 4;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x34),(SexyVector3 *)(this + 0x40));
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar2 = *pfVar1;
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x78);
  *(float *)(this + 0x40) = fVar2 - 100.0;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x6c);
  *(float *)(this + 0x48) = *(float *)(this + 0x70) - 10.0;
  *(undefined4 *)(this + 0x78) = 0x43910000;
  return;
}


/* PlantBroccoli::OnAttackAnimationHitFrontMiddle() */

void __thiscall PlantBroccoli::OnAttackAnimationHitFrontMiddle(PlantBroccoli *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x4c) = 3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x34),(SexyVector3 *)(this + 0x40));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x40),(SexyVector3 *)(this + 0x68));
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(this + 0x78) = 0xc2b40000;
  return;
}


/* PlantBroccoli::~PlantBroccoli() */

void __thiscall PlantBroccoli::~PlantBroccoli(PlantBroccoli *this)

{
  *(undefined ***)this = &PTR_GetClass_067b15c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBroccoli::~PlantBroccoli() */

void __thiscall PlantBroccoli::~PlantBroccoli(PlantBroccoli *this)

{
  ~PlantBroccoli(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::Initialize() */

void __thiscall PlantBroccoli::Initialize(PlantBroccoli *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x28] = (PlantBroccoli)0x0;
  this[0x7c] = (PlantBroccoli)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x58),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x60),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::ApplyPlantfood() */

void __thiscall PlantBroccoli::ApplyPlantfood(PlantBroccoli *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0x14;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x60),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBroccoli::TargetIsControlledByOhter(Sexy::RtWeakPtr<Zombie>) */

byte __thiscall
PlantBroccoli::TargetIsControlledByOhter(PlantBroccoli *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  byte bVar2;
  Zombie *this_00;
  
  this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = Zombie::IsControlled(this_00);
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = (byte)this[0x28] ^ 1;
  }
  return bVar2;
}


/* PlantBroccoli::BeginThrowTargetBack() */

void __thiscall PlantBroccoli::BeginThrowTargetBack(PlantBroccoli *this)

{
  undefined4 uVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0x10;
  *(undefined4 *)(this + 0x4c) = 3;
  *(undefined4 *)(this + 0x50) = 0;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x68),pSVar2);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x34),(SexyVector3 *)(this + 0x68));
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  uVar1 = *puVar3;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x6c);
  *(undefined4 *)(this + 0x40) = uVar1;
  *(float *)(this + 0x48) = *(float *)(this + 0x70) + 60.0;
  *(undefined4 *)(this + 0x78) = 0x43070000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::ThrowTargetAway(Sexy::RtWeakPtr<Zombie>) */

void PlantBroccoli::ThrowTargetAway(PlantFramework *param_1)

{
  long lVar1;
  int iVar2;
  Zombie *this;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Zombie *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x58))
  ;
  iVar2 = PlantFramework::Rand(param_1,600);
  EATextSquish::Vec3::Vec3(aVStack_18,1000.0,(float)iVar2,0.0);
  Zombie::FlickOff(this,(SexyVector3 *)aVStack_18);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 200) = 0x12;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::UpdateFindTarget() */

void __thiscall PlantBroccoli::UpdateFindTarget(PlantBroccoli *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long *plVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = (**(code **)(*plVar3 + 0x328))();
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
      cVar2 = TargetIsControlledByOhter(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (cVar2 == '\0') goto LAB_03ff1d84;
    }
  }
  (**(code **)(*(long *)this + 0x490))(this);
LAB_03ff1d84:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantBroccoli::CancelPlantfood() */

void __thiscall PlantBroccoli::CancelPlantfood(PlantBroccoli *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  Zombie *pZVar2;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this_00 = (RtMixedPtrBase *)(this + 0x60);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIsTargetable(pZVar2,true);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIgnoresAllDamage(pZVar2,false);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIgnoresCollisions(pZVar2,false);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Zombie::SetIsControlled(pZVar2,false);
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  return;
}


/* PlantBroccoli::UpdateRest() */

void __thiscall PlantBroccoli::UpdateRest(PlantBroccoli *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_Dt();
  fVar2 = *(float *)(this + 0x30);
  *(float *)(this + 0x30) = fVar2 - fVar1;
  if (0.0 <= fVar2 - fVar1) {
    return;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  (**(code **)(*(long *)this + 0x490))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::UpdateTargetPosition() */

void __thiscall PlantBroccoli::UpdateTargetPosition(PlantBroccoli *this)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  fVar3 = (float)*(int *)(this + 0x4c) * _FUN_03ff2048;
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_Dt();
  fVar2 = fVar2 + *(float *)(this + 0x50);
  *(float *)(this + 0x50) = fVar2;
  local_14 = fVar3;
  local_18 = CurveLerp(0,this + 0x34,this + 0x40,1);
  local_10 = fVar2;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  (**(code **)(*plVar1 + 0x78))(plVar1,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBroccoli::UpdatePullTarget() */

void __thiscall PlantBroccoli::UpdatePullTarget(PlantBroccoli *this)

{
  bool bVar1;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x58));
  if (!bVar1) {
    return;
  }
  UpdateTargetPosition(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::UpdateTargetPositionAndRotation() */

void __thiscall PlantBroccoli::UpdateTargetPositionAndRotation(PlantBroccoli *this)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  fVar5 = (float)*(int *)(this + 0x4c) * _FUN_03ff2170;
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_Dt();
  fVar3 = fVar3 + *(float *)(this + 0x50);
  *(float *)(this + 0x50) = fVar3;
  fVar4 = fVar5;
  local_18 = CurveLerp(0,this + 0x34,this + 0x40,1);
  local_14 = fVar4;
  local_10 = fVar3;
  fVar4 = CurveLerp<float>(0,fVar5,*(undefined4 *)(this + 0x50),this + 0x74,this + 0x78,1);
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  (**(code **)(*plVar1 + 0x78))(plVar1,&local_18);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  FUN_03ff1550(fVar4,lVar2 + 0x36c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBroccoli::UpdateHitTargetBack() */

void __thiscall PlantBroccoli::UpdateHitTargetBack(PlantBroccoli *this)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    cVar1 = (**(code **)(*plVar2 + 0x328))();
    if (cVar1 == '\0') {
      UpdateTargetPositionAndRotation(this);
      return;
    }
  }
  return;
}


/* PlantBroccoli::Idle() */

void __thiscall PlantBroccoli::Idle(PlantBroccoli *this)

{
  long *plVar1;
  UIEasyButtonWidget *this_00;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 10;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* PlantBroccoli::FixTarget(Sexy::RtWeakPtr<Zombie>, bool) */

void __thiscall
PlantBroccoli::FixTarget
          (PlantBroccoli *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,PlantBroccoli param_3)

{
  Zombie *pZVar1;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar2;
  ResourceInfo *pRVar3;
  undefined8 uVar4;
  
  this[0x28] = param_3;
  if (param_3 == (PlantBroccoli)0x0) {
    pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Zombie::SetIsControlled(pZVar1,false);
    pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    pEVar2 = (EntityConditionTracker<Zombie,ZombieConditions> *)Zombie::GetConditionTracker(pZVar1);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_2);
    EntityConditionTracker<Zombie,ZombieConditions>::EndCondition(pEVar2,pRVar3,0x18);
    return;
  }
  pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIsControlled(pZVar1,true);
  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::ApplyCondition((Zombie *)0x41200000,0,uVar4,0x18,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::onZombieDied(Zombie*, DamageInfo const*) */

void PlantBroccoli::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(param_1 + 0x58);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if ((cVar2 != '\0') && (param_1[0x28] != (Zombie)0x0)) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)this);
      FixTarget((PlantBroccoli *)param_1,aRStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::onKilled(bool) */

void PlantBroccoli::onKilled(bool param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  PlantBroccoli *pPVar2;
  long *plVar3;
  long lVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pPVar2 = (PlantBroccoli *)(ulong)param_1;
  this = (RtMixedPtrBase *)(pPVar2 + 0x58);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if ((cVar1 != '\0') && (pPVar2[0x28] != (PlantBroccoli)0x0)) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this);
    FixTarget(pPVar2,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    cVar1 = Sexy::SexyVector3::ApproxZero((SexyVector3 *)(pPVar2 + 0x68),0.001);
    if (cVar1 == '\0') {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      (**(code **)(*plVar3 + 0x78))(plVar3,(SexyVector3 *)(pPVar2 + 0x68));
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      FUN_03ff1550(0,lVar4 + 0x36c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::BeginPullFail() */

void __thiscall PlantBroccoli::BeginPullFail(PlantBroccoli *this)

{
  int iVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x2c);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xd;
  *(int *)(this + 0x2c) = iVar1 + 1;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x58));
  FixTarget(this,aRStack_10,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::EndPullFail() */

void __thiscall PlantBroccoli::EndPullFail(PlantBroccoli *this)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xe;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x58));
  FixTarget(this,aRStack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::BeginPushTarget() */

void __thiscall PlantBroccoli::BeginPushTarget(PlantBroccoli *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var1;
  SexyVector3 *pSVar2;
  float *pfVar3;
  long lVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xc;
  *(undefined4 *)(this + 0x4c) = 7;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x50) = 0;
  p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(p_Var1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x34),pSVar2);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  *(float *)(this + 0x40) = *pfVar3 + 60.0;
  p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var1);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(lVar4 + 4);
  p_Var1 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var1);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(lVar4 + 8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
  FixTarget(this,aRStack_10,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::BeginPullTarget() */

void __thiscall PlantBroccoli::BeginPullTarget(PlantBroccoli *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  SexyVector3 *pSVar3;
  float *pfVar4;
  long lVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
  iVar1 = *(int *)(this + 0x2c);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xf;
  *(int *)(this + 0x2c) = iVar1 + 1;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x4c) = 5;
  *(undefined4 *)(this + 0x50) = 0;
  p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(p_Var2);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x34),pSVar3);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  *(float *)(this + 0x40) = *pfVar4 + 30.0;
  p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var2);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(lVar5 + 4);
  p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var2);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(lVar5 + 8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
  FixTarget(this,aRStack_10,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::UpdatePushTarget() */

void __thiscall PlantBroccoli::UpdatePushTarget(PlantBroccoli *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long *plVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = (**(code **)(*plVar3 + 0x328))();
    if (cVar2 == '\0') {
      UpdateTargetPosition(this);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
      FixTarget(this,aRStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*(long *)this + 0x490))(this);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x490))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::SetZombieInPlantFoodControl(Zombie*) */

void __thiscall PlantBroccoli::SetZombieInPlantFoodControl(PlantBroccoli *this,Zombie *param_1)

{
  bool bVar1;
  float *pfVar2;
  ZombiePirateBarrelPusher *this_00;
  ZombiePullSubSystem *pZVar3;
  undefined8 uVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x60),(RtWeakPtrBase *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3((Vec3 *)&local_60,(float)(int)*pfVar2,(float)(int)pfVar2[1],0.0);
  Zombie::SetIsTargetable(param_1,false);
  Zombie::SetIgnoresAllDamage(param_1,true);
  Zombie::SetIgnoresCollisions(param_1,true);
  Zombie::SetIsControlled(param_1,true);
  bVar1 = Sexy::RtObject::IsA<ZombiePirateBarrelPusher>((RtObject *)param_1);
  if (bVar1) {
    this_00 = Sexy::RtObject::Cast<ZombiePirateBarrelPusher>((RtObject *)param_1);
    ZombiePirateBarrelPusher::disconnectBarrel(this_00);
  }
  pZVar3 = Board::GetGameSubSystem<ZombiePullSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  uVar4 = *(undefined8 *)(this + 0x10);
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
  ZombiePullSubSystem::PullZombieToTarget
            (local_60,local_5c,local_58,pZVar3,uVar4,param_1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBroccoli::PlantBroccoli() */

void __thiscall PlantBroccoli::PlantBroccoli(PlantBroccoli *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantBroccoli)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR_GetClass_067b15c0;
  *(undefined4 *)(this + 0x30) = 0;
  DVec3::DVec3((DVec3 *)(this + 0x34));
  DVec3::DVec3((DVec3 *)(this + 0x40));
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  DVec3::DVec3((DVec3 *)(this + 0x68));
  this[0x7c] = (PlantBroccoli)0x0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<PlantBroccoli,void(PlantBroccoli::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}


/* PlantBroccoli::StaticNew() */

PlantBroccoli * PlantBroccoli::StaticNew(void)

{
  PlantBroccoli *this;
  
  this = ::operator_new(0x80);
  PlantBroccoli(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::HandleDamageStateChanged() */

void __thiscall PlantBroccoli::HandleDamageStateChanged(PlantBroccoli *this)

{
  long lVar1;
  PlantAnimRig_Broccoli *this_00;
  float fVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  fVar3 = *(float *)(*(long *)(this + 0x10) + 0xd8);
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  fVar2 = *(float *)(lVar1 + 0x24);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (PlantAnimRig_Broccoli *)FUN_03ff2d08(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Broccoli::SetIsDamage(this_00,fVar3 / fVar2 < 0.5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* PlantBroccoli::GetRestTime() */

float __thiscall PlantBroccoli::GetRestTime(PlantBroccoli *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_03ff2e2c(*(undefined8 *)(this + 0x10));
  fVar2 = (float)FUN_03ff151c(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
  return fVar2 * *(float *)(lVar1 + 0x2c0);
}


/* PlantBroccoli::Rest() */

void __thiscall PlantBroccoli::Rest(PlantBroccoli *this)

{
  PlantAnimRig_Broccoli *this_00;
  undefined4 uVar1;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0x13;
  uVar1 = GetRestTime(this);
  *(undefined4 *)(this + 0x30) = uVar1;
  this_00 = (PlantAnimRig_Broccoli *)FUN_03ff2d08(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Broccoli::PlayRestLooped(this_00);
  return;
}


/* PlantBroccoli::GetAttackCountBeforeRest() */

undefined4 __thiscall PlantBroccoli::GetAttackCountBeforeRest(PlantBroccoli *this)

{
  long lVar1;
  
  lVar1 = FUN_03ff2e2c(*(undefined8 *)(this + 0x10));
  return *(undefined4 *)(lVar1 + 0x2c4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::EndPrimaryAttack(bool) */

void PlantBroccoli::EndPrimaryAttack(bool param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  PlantBroccoli *this;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this = (PlantBroccoli *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
  if ((cVar2 == '\0') || (this[0x28] == (PlantBroccoli)0x0)) {
    iVar1 = *(int *)(this + 0x2c);
    iVar3 = GetAttackCountBeforeRest(this);
    if (iVar1 < iVar3) {
LAB_03ff2fe8:
      (**(code **)(*(long *)this + 0x490))(this);
      goto LAB_03ff2f88;
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x58));
    FixTarget(this,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    iVar1 = *(int *)(this + 0x2c);
    iVar3 = GetAttackCountBeforeRest(this);
    if (iVar1 < iVar3) goto LAB_03ff2fe8;
  }
  Rest(this);
LAB_03ff2f88:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBroccoli::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantBroccoli::onAnimStoppedCallback(PlantBroccoli *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"attack");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"advanced_attack"), !bVar1)) {
    bVar1 = std::operator==(param_1,"cannotmove");
    if (!bVar1) {
      return;
    }
    EndPrimaryAttack(SUB81(this,0));
    return;
  }
  EndPrimaryAttack(SUB81(this,0));
  return;
}


/* PlantBroccoli::UpdatePullTargetFail() */

void __thiscall PlantBroccoli::UpdatePullTargetFail(PlantBroccoli *this)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x58));
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    cVar2 = (**(code **)(*plVar3 + 0x328))();
    if (cVar2 == '\0') {
      return;
    }
  }
  EndPrimaryAttack(SUB81(this,0));
  return;
}


/* PlantBroccoli::GetAdvancedPrimaryAttackProbility(int) */

undefined4 __thiscall
PlantBroccoli::GetAdvancedPrimaryAttackProbility(PlantBroccoli *this,int param_1)

{
  long lVar1;
  
  if (param_1 == 2) {
    lVar1 = FUN_03ff2e2c(*(undefined8 *)(this + 0x10));
    return *(undefined4 *)(lVar1 + 0x2c8);
  }
  if ((1 < param_1) && (param_1 < 6)) {
    lVar1 = FUN_03ff2e2c(*(undefined8 *)(this + 0x10));
    return *(undefined4 *)(lVar1 + 0x2cc);
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::DamageTargetInRect(Sexy::TRect<int> const&, Zombie*, DamageInfo const&) */

void __thiscall
PlantBroccoli::DamageTargetInRect
          (PlantBroccoli *this,TRect *param_1,Zombie *param_2,DamageInfo *param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  ulong uVar7;
  long *extraout_x0;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
    uVar3 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar3 = (**(code **)(*(long *)this + 400))(this,0);
  }
  uVar9 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar4 = operator|(4,2);
  EntityFinder::GetEntitiesInRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar4,
             param_1);
  uVar10 = local_20;
  lVar5 = FUN_03ff156c(local_20,local_18);
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_03ff1578(uVar10,uVar9);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      uVar10 = local_20;
      if (this_00 == (Zombie *)0x0) {
        FUN_03ff1578(local_20,uVar9);
        nop();
        if (((extraout_x0 != (long *)0x0) &&
            (cVar1 = (**(code **)(*extraout_x0 + 0x200))(), uVar10 = local_20, cVar1 != '\0')) &&
           (cVar1 = (**(code **)(*extraout_x0 + 0x210))(extraout_x0,*(undefined8 *)(this + 0x10)),
           uVar10 = local_20, cVar1 != '\0')) {
          (**(code **)(*extraout_x0 + 0x110))(extraout_x0,param_3);
          uVar10 = local_20;
        }
      }
      else {
        cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
        uVar10 = local_20;
        if (((cVar1 == '\0') &&
            (cVar1 = Zombie::IsControlled(this_00), uVar10 = local_20, cVar1 == '\0')) &&
           ((cVar1 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar3), uVar10 = local_20,
            cVar1 != '\0' &&
            (cVar1 = RealObject::IsOnOpposingTeam
                               ((RealObject *)this_00,*(RealObject **)(this + 0x10)),
            uVar10 = local_20, cVar1 != '\0')))) {
          pcVar8 = *(code **)(*(long *)this + 0x3e0);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
          cVar1 = (*pcVar8)(this,aRStack_28,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          uVar10 = local_20;
          if (cVar1 != '\0') {
            pcVar8 = *(code **)(*(long *)this_00 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
            bVar2 = (*pcVar8)(this_00,aRStack_28,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            uVar10 = local_20;
            if ((this_00 == param_2) < bVar2) {
              (**(code **)(*(long *)this_00 + 0x110))(this_00,param_3);
              uVar10 = local_20;
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
      uVar7 = FUN_03ff156c(uVar10,local_18);
    } while (uVar9 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::PrimaryHit(bool) */

void __thiscall PlantBroccoli::PrimaryHit(PlantBroccoli *this,bool param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ResourceInfo *pRVar5;
  Plant *this_00;
  RealObject *this_01;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Point aPStack_80 [8];
  int local_78;
  undefined4 local_74;
  int local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  lVar2 = FUN_03ff1580(*(undefined8 *)(lVar2 + 0x70),0);
  this_00 = *(Plant **)(this + 0x10);
  fVar7 = (float)FUN_03ff1508(*(undefined4 *)(this_00 + 0xf4),*(undefined4 *)(this_00 + 0x100),
                              *(undefined4 *)(this_00 + 0x104),*(undefined4 *)(this_00 + 0x3b8));
  fVar8 = (float)FUN_03ff1518(*(undefined4 *)(this_00 + 0x3bc));
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar9 = (float)Plant::GetExtraDPSmodifier(this_00);
  fVar10 = (float)FUN_03ff1520(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
    uVar3 = PlantFramework::GetDamageFlags();
  }
  else {
    uVar3 = (**(code **)(*(long *)this + 0x198))(this,0);
  }
  uVar6 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_80,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(float)(int)(fVar7 * fVar8 * (float)iVar1 * fVar9 * fVar10),local_78,
             local_74,aRStack_68,uVar3,uVar6,aPStack_80,0);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  (**(code **)(*plVar4 + 0x110))(plVar4,aRStack_68);
  Plant::GetPlantAttackRect((Plant *)&local_78,*(undefined8 *)(this + 0x10),0);
  if (param_1) {
    local_78 = local_78 - local_70;
  }
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x58));
  DamageTargetInRect(this,(TRect *)&local_78,(Zombie *)pRVar5,(DamageInfo *)aRStack_68);
  this_01 = *(RealObject **)(this + 0x10);
  std::string::string((string *)aPStack_80,"Play_Plant_Squash_Impact");
  RealObject::PlayPositionalSound(this_01,(string *)aPStack_80,0.0);
  std::string::~string((string *)aPStack_80);
  nop();
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBroccoli::OnAttackAnimationHitBack() */

void __thiscall PlantBroccoli::OnAttackAnimationHitBack(PlantBroccoli *this)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
  if (cVar2 != '\0') {
    PrimaryHit(this,true);
  }
  *(undefined4 *)(this + 0x4c) = 0xd;
  *(undefined4 *)(this + 0x50) = 0;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x34),(SexyVector3 *)(this + 0x40));
  puVar3 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  uVar1 = *puVar3;
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x6c);
  *(float *)(this + 0x48) = *(float *)(this + 0x70) + 60.0;
  *(undefined4 *)(this + 0x78) = 0x42b40000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::UpdatePlantfood() */

void __thiscall PlantBroccoli::UpdatePlantfood(PlantBroccoli *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  ulong uVar7;
  long *extraout_x0;
  code *pcVar8;
  ulong uVar9;
  RealObject *this_01;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x7c] != (PlantBroccoli)0x0) {
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    FUN_03ff1580(*(undefined8 *)(lVar4 + 0x70),1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    this_01 = *(RealObject **)(this + 0x10);
    std::string::string((string *)aRStack_68,"Play_Plant_BonkChoy_Nitro");
    RealObject::PlayPositionalSound(this_01,(string *)aRStack_68,0.0);
    std::string::~string((string *)aRStack_68);
    nop();
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
      uVar5 = PlantFramework::GetDamageFlags();
    }
    else {
      uVar5 = (**(code **)(*(long *)this + 0x198))(this,1);
    }
    uVar5 = operator|(uVar5,0x2000);
    operator|=(auStack_58,uVar5);
    fVar10 = (float)PVZ_Dt();
    local_60 = fVar10 * local_60;
    (**(code **)(*(long *)this + 0x2b8))(auStack_90,this,1);
    if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
      uVar2 = PlantFramework::GetCollisionFlags();
    }
    else {
      uVar2 = (**(code **)(*(long *)this + 400))(this,1);
    }
    uVar9 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar3 = operator|(4,2);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3,
               auStack_90,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,
               *(int *)(*(long *)(this + 0x10) + 0x110) + 1);
    uVar5 = local_80;
    lVar4 = FUN_03ff156c(local_80,local_78);
    if (lVar4 != 0) {
      do {
        puVar6 = (undefined8 *)FUN_03ff1578(uVar5,uVar9);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
        uVar5 = local_80;
        if (this_00 == (Zombie *)0x0) {
          FUN_03ff1578(local_80,uVar9);
          nop();
          if (((extraout_x0 != (long *)0x0) &&
              (cVar1 = (**(code **)(*extraout_x0 + 0x200))(), uVar5 = local_80, cVar1 != '\0')) &&
             (cVar1 = (**(code **)(*extraout_x0 + 0x210))(extraout_x0,*(undefined8 *)(this + 0x10)),
             uVar5 = local_80, cVar1 != '\0')) {
            (**(code **)(*extraout_x0 + 0x110))(extraout_x0,aRStack_68);
            uVar5 = local_80;
          }
        }
        else {
          cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
          uVar5 = local_80;
          if (((cVar1 == '\0') &&
              (cVar1 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar2), uVar5 = local_80,
              cVar1 != '\0')) &&
             (cVar1 = RealObject::IsOnOpposingTeam
                                ((RealObject *)this_00,*(RealObject **)(this + 0x10)),
             uVar5 = local_80, cVar1 != '\0')) {
            pcVar8 = *(code **)(*(long *)this + 0x3e0);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_a0);
            cVar1 = (*pcVar8)(this,aRStack_98,1);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
            uVar5 = local_80;
            if (cVar1 != '\0') {
              pcVar8 = *(code **)(*(long *)this_00 + 0x3d0);
              Plant::GetType();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_98,(RtWeakPtrBase *)aRStack_a0);
              cVar1 = (*pcVar8)(this_00,aRStack_98,0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
              uVar5 = local_80;
              if (cVar1 != '\0') {
                (**(code **)(*(long *)this_00 + 0x110))(this_00,aRStack_68);
                uVar5 = local_80;
              }
            }
          }
        }
        uVar9 = uVar9 + 1;
        uVar7 = FUN_03ff156c(uVar5,local_78);
      } while (uVar9 < uVar7);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::GetBestTargetWithPrimaryWeapon() */

void PlantBroccoli::GetBestTargetWithPrimaryWeapon(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  PlantBroccoli *in_x0;
  ulong uVar4;
  Zombie *this;
  float *pfVar5;
  long lVar6;
  ResourceInfo *pRVar7;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  Plant aPStack_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  RtMixedPtrBase aRStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  cVar1 = Board::RowCanHaveZombies
                    (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(in_x0 + 0x10) + 0x110));
  if (cVar1 != '\0') {
    if (*(code **)(*(long *)in_x0 + 400) == PlantFramework::GetCollisionFlags) {
      uVar3 = PlantFramework::GetCollisionFlags();
    }
    else {
      uVar3 = (**(code **)(*(long *)in_x0 + 400))();
    }
    Plant::GetPlantAttackRect(aPStack_98,*(undefined8 *)(in_x0 + 0x10),0);
    uVar8 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_88);
    EntityFinder::GetEntitiesInRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_88,2,
               aPStack_98);
    uVar9 = local_88;
    uVar4 = FUN_03ff156c(local_88,local_80);
    if (uVar4 != 0) {
      do {
        FUN_03ff1578(uVar9,uVar8);
        nop();
        if (this != (Zombie *)0x0) {
          ToolPacketData::GetProps();
          cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_70);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
          if ((((((cVar1 != '\0') && (cVar1 = Zombie::IsControlled(this), cVar1 == '\0')) &&
                (cVar1 = Zombie::IsFlying(this), cVar1 == '\0')) &&
               (((cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0' &&
                 (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) &&
                ((cVar1 = RealObject::IsOnOpposingTeam
                                    ((RealObject *)this,*(RealObject **)(in_x0 + 0x10)),
                 cVar1 != '\0' &&
                 ((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this), !bVar2 &&
                  (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this), !bVar2))))))))
              && (bVar2 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)this), !bVar2)) &&
             (((bVar2 = Sexy::RtObject::IsA<ZombieSteamStove>((RtObject *)this), !bVar2 &&
               (cVar1 = (**(code **)(*(long *)this + 0x4d8))(this), cVar1 == '\0')) &&
              (cVar1 = (**(code **)(*(long *)this + 0x508))(this), cVar1 == '\0')))) {
            Zombie::GetCurrentTitleStatus();
            cVar1 = local_58;
            TitleStatus::~TitleStatus((TitleStatus *)aRStack_70);
            if (cVar1 == '\0') {
              pcVar10 = *(code **)(*(long *)in_x0 + 0x3e0);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,(RtWeakPtrBase *)aRStack_a0);
              cVar1 = (*pcVar10)();
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
              if (cVar1 != '\0') {
                pfVar5 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                 *)this);
                fVar11 = *pfVar5;
                lVar6 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
                if (fVar11 <= *(float *)(lVar6 + 0x10)) {
                  pcVar10 = *(code **)(*(long *)this + 0x3d0);
                  Plant::GetType();
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,
                             (RtWeakPtrBase *)aRStack_a0);
                  cVar1 = (*pcVar10)(this,aRStack_70,0);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
                  if ((cVar1 != '\0') &&
                     (cVar1 = (**(code **)(*(long *)this + 0xb8))(this,uVar3), cVar1 != '\0')) {
                    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)in_x8);
                    cVar1 = IsBetterTargetWithPrimaryWeapon(in_x0,this,(Zombie *)pRVar7);
                    if (cVar1 != '\0') {
                      ToolPacketData::GetProps();
                      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                                ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,
                                 (RtWeakPtrBase *)aRStack_70);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
                    }
                  }
                }
              }
            }
          }
          uVar9 = local_88;
          uVar4 = FUN_03ff156c(local_88,local_80);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::UpdateActions() */

void __thiscall PlantBroccoli::UpdateActions(PlantBroccoli *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  float *pfVar4;
  float *pfVar5;
  PlantAnimRig_Broccoli *pPVar6;
  Zombie *this_01;
  long *plVar7;
  code *pcVar8;
  float fVar9;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 10:
    cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 != '\0') break;
    this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x58);
    GetBestTargetWithPrimaryWeapon();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    this[0x28] = (PlantBroccoli)0x0;
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
    if (cVar1 == '\0') break;
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var3);
    p_Var3 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(this + 0x10);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var3);
    if (*pfVar4 < *pfVar5 + 60.0) {
      BeginPushTarget(this);
      p_Var3 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 **)(this + 0x10);
    }
    else {
      *(undefined4 *)(p_Var3 + 200) = 0xb;
    }
    pPVar6 = (PlantAnimRig_Broccoli *)FUN_03ff2d08(p_Var3);
    this_01 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar2 = Zombie::GetSizeType(this_01);
    if (iVar2 == 0) {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar1 = (**(code **)(*plVar7 + 0x3f0))();
      if (cVar1 == '\0') goto LAB_03ff4610;
      iVar2 = FUN_03ff1528(*(undefined8 *)(this + 0x10));
      fVar9 = (float)GetAdvancedPrimaryAttackProbility(this,iVar2);
      iVar2 = PlantFramework::Rand((PlantFramework *)this,100);
      if (fVar9 <= (float)iVar2) {
        pcVar8 = *(code **)(*(long *)pPVar6 + 0x130);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,aRStack_58);
        (*pcVar8)(pPVar6,aRStack_50);
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,aRStack_58);
        PlantAnimRig_Broccoli::PlayAdvancedAttack(pPVar6,aRStack_50);
      }
    }
    else {
LAB_03ff4610:
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,aRStack_58);
      PlantAnimRig_Broccoli::PlayPullFail(pPVar6,aRStack_50);
    }
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    break;
  case 0xb:
    UpdateFindTarget(this);
    break;
  case 0xc:
    UpdatePushTarget(this);
    break;
  case 0xd:
    UpdatePullTargetFail(this);
    break;
  case 0xf:
    UpdatePullTarget(this);
    break;
  case 0x10:
    UpdateHitTargetBack(this);
    break;
  case 0x13:
    UpdateRest(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::FindPlantFoodTarget() */

void __thiscall PlantBroccoli::FindPlantFoodTarget(PlantBroccoli *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtObject *this_01;
  Zombie *pZVar9;
  ZombieBull *this_02;
  ZombieCavalry *this_03;
  ulong uVar10;
  code *pcVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,2);
  lVar4 = FUN_03ff156c(local_38,local_30);
  if (lVar4 != 0) {
    uVar10 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    uVar7 = local_38;
    uVar5 = FUN_03ff156c(local_38,local_30);
    if (uVar5 != 0) {
      do {
        plVar6 = (long *)FUN_03ff1578(uVar7,uVar10);
        if (*plVar6 != 0) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_48);
          if ((bVar1) &&
             (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_48), cVar2 != '\0')) {
            std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                       *)&local_20,(RtWeakPtr *)aRStack_48);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          uVar7 = local_38;
          uVar5 = FUN_03ff156c(local_38,local_30);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar5);
    }
    uVar10 = 0;
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    std::
    sort<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,bool(*)(Sexy::RtWeakPtr<BoardEntity>,Sexy::RtWeakPtr<BoardEntity>)>
              (uVar7,uVar8,FindPlantFoodTargetSortFun);
    uVar7 = local_20;
    lVar4 = FUN_03ff1590(local_20,local_18);
    if (lVar4 != 0) {
      do {
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03ff159c(uVar7,uVar10);
        this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        pZVar9 = Sexy::RtObject::Cast<Zombie>(this_01);
        if ((pZVar9 != (Zombie *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pZVar9 + 0x3f0))(), cVar2 != '\0')) {
          pcVar11 = *(code **)(*(long *)pZVar9 + 0x3d0);
          Plant::GetType();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_48);
          cVar2 = (*pcVar11)(pZVar9,(RtWeakPtr<Sexy::SoundResource> *)aRStack_40,0);
          if (((cVar2 == '\0') ||
              (((cVar2 = (**(code **)(*(long *)pZVar9 + 0x328))(pZVar9), cVar2 != '\0' ||
                (cVar2 = (**(code **)(*(long *)pZVar9 + 0x330))(pZVar9), cVar2 != '\0')) ||
               (cVar2 = Zombie::IsControlled(pZVar9), cVar2 != '\0')))) ||
             ((cVar2 = FUN_03ff1530(*(undefined4 *)(pZVar9 + 0x354),pZVar9 + 0x358), cVar2 != '\0'
              || (cVar2 = Zombie::HasCondition(pZVar9,0x27), cVar2 != '\0')))) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          }
          else {
            cVar2 = Zombie::HasCondition(pZVar9,0x25);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
            if (cVar2 == '\0') {
              iVar3 = Zombie::GetSizeType(pZVar9);
              if (iVar3 == 0) {
                SetZombieInPlantFoodControl(this,pZVar9);
                break;
              }
              bVar1 = Sexy::RtObject::IsA<ZombieBull>((RtObject *)pZVar9);
              if (bVar1) {
                this_02 = Sexy::RtObject::Cast<ZombieBull>((RtObject *)pZVar9);
                if ((this_02 != (ZombieBull *)0x0) &&
                   (cVar2 = ZombieBull::canPullDown(this_02), cVar2 != '\0')) {
                  pZVar9 = (Zombie *)ZombieBull::takePullDown();
                  SetZombieInPlantFoodControl(this,pZVar9);
                  std::
                  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                  ::~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                             *)&local_20);
                  goto LAB_03ff49cc;
                }
              }
              else {
                bVar1 = Sexy::RtObject::IsA<ZombieCavalry>((RtObject *)pZVar9);
                if (((bVar1) &&
                    (this_03 = Sexy::RtObject::Cast<ZombieCavalry>((RtObject *)pZVar9),
                    this_03 != (ZombieCavalry *)0x0)) &&
                   (cVar2 = ZombieCavalry::canPullDown(this_03), cVar2 != '\0')) {
                  pZVar9 = (Zombie *)ZombieCavalry::takePullDown();
                  SetZombieInPlantFoodControl(this,pZVar9);
                  break;
                }
              }
            }
          }
        }
        uVar7 = local_20;
        uVar10 = uVar10 + 1;
        uVar5 = FUN_03ff1590(local_20,local_18);
      } while (uVar10 < uVar5);
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_20);
  }
LAB_03ff49cc:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBroccoli::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall PlantBroccoli::OnAnimCommand(PlantBroccoli *this,string *param_1,string *param_2)

{
  RtMixedPtrBase *pRVar1;
  RtWeakPtr *pRVar2;
  undefined *puVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  PlantBroccoli PVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  Zombie *this_00;
  undefined8 *puVar11;
  RtObject *this_01;
  ThrowZombieProjectile *pTVar12;
  ulong uVar13;
  RealObject *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  undefined8 uVar14;
  Board *pBVar17;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_20;
  undefined4 local_1c;
  Vec3 aVStack_18 [16];
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  bVar4 = std::operator==(param_1,"primary_attack");
  if (bVar4) {
    bVar4 = std::operator==(param_2,"pull_begin");
    if (!bVar4) {
      bVar4 = std::operator==(param_2,"pull_end");
      if (!bVar4) {
        bVar4 = std::operator==(param_2,"hit_back");
        if (bVar4) {
LAB_03ff4f58:
          uVar13 = 1;
          OnAttackAnimationHitBack(this);
        }
        else {
          bVar4 = std::operator==(param_2,"hit_front");
          uVar13 = (ulong)bVar4;
          if (bVar4) {
            pRVar1 = (RtMixedPtrBase *)(this + 0x58);
            cVar5 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
            if (cVar5 != '\0') {
              plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
              (**(code **)(*plVar9 + 0x78))(plVar9,(SexyVector3 *)(this + 0x68));
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
              FUN_03ff1550(0,lVar10 + 0x36c);
              EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
              Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x68),(SexyVector3 *)aVStack_18);
              PrimaryHit(this,false);
            }
            *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0x11;
          }
          else {
            bVar4 = std::operator==(param_2,"hit_front_middle");
            if (!bVar4) {
              bVar4 = std::operator==(param_2,"hit_back_middle");
              if (bVar4) goto LAB_03ff4f98;
              goto LAB_03ff4c24;
            }
LAB_03ff4fa8:
            uVar13 = 1;
            OnAttackAnimationHitFrontMiddle(this);
          }
        }
        goto LAB_03ff4c28;
      }
LAB_03ff4df0:
      cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
      if (cVar5 != '\0') {
        uVar13 = 1;
        BeginThrowTargetBack(this);
        goto LAB_03ff4c28;
      }
      goto LAB_03ff4c24;
    }
LAB_03ff4c14:
    cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
    if ((cVar5 == '\0') || (*(float *)(*(long *)(this + 0x10) + 0xd8) <= 0.0)) goto LAB_03ff4c24;
    uVar13 = 1;
    BeginPullTarget(this);
  }
  else {
    bVar4 = std::operator==(param_1,"advance_primary_attack");
    if (bVar4) {
      bVar4 = std::operator==(param_2,"pull_begin");
      if (bVar4) goto LAB_03ff4c14;
      bVar4 = std::operator==(param_2,"pull_end");
      if (bVar4) goto LAB_03ff4df0;
      bVar4 = std::operator==(param_2,"hit_back_middle");
      if (bVar4) {
LAB_03ff4f98:
        uVar13 = 1;
        OnAttackAnimationHitBackMiddle(this);
        goto LAB_03ff4c28;
      }
      bVar4 = std::operator==(param_2,"hit_back");
      if (bVar4) goto LAB_03ff4f58;
      bVar4 = std::operator==(param_2,"hit_front_middle");
      if (bVar4) goto LAB_03ff4fa8;
      bVar4 = std::operator==(param_2,"throw");
      if (bVar4) {
        pRVar1 = (RtMixedPtrBase *)(this + 0x58);
        bVar6 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
        uVar13 = (ulong)bVar6;
        if (bVar6 != 0) {
          EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
          Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x68),(SexyVector3 *)aVStack_18);
          PrimaryHit(this,false);
          plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
          cVar5 = (**(code **)(*plVar9 + 0x328))();
          if (cVar5 == '\0') {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aVStack_18,(RtWeakPtrBase *)pRVar1);
            ThrowTargetAway(this,aVStack_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
            goto LAB_03ff4c28;
          }
        }
      }
    }
    else {
      bVar4 = std::operator==(param_1,"use_plantfood_pull_start");
      if (bVar4) {
        if (*(int *)(*(long *)(this + 0x10) + 200) == 0x14) {
          FindPlantFoodTarget(this);
          bVar6 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x60))
          ;
          uVar13 = (ulong)bVar6;
          if (bVar6 != 0) {
            (**(code **)(*(long *)this + 0x228))(this);
            goto LAB_03ff4c28;
          }
        }
      }
      else {
        PVar7 = (PlantBroccoli)std::operator==(param_1,"use_plantfood_pull_end");
        if ((bool)PVar7) {
          this[0x7c] = (PlantBroccoli)0x1;
          if (*(int *)(*(long *)(this + 0x10) + 200) == 0x14) {
            pRVar2 = (RtWeakPtr *)(this + 0x60);
            bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar2);
            if (bVar4) {
              bVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar2);
              uVar13 = (ulong)bVar6;
              if (bVar6 != 0) {
                plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
                (**(code **)(*plVar9 + 0x80))(plVar9,1);
                goto LAB_03ff4c28;
              }
            }
          }
        }
        else {
          bVar4 = std::operator==(param_1,"use_plantfood_throw");
          if (bVar4) {
            this[0x7c] = PVar7;
            if (*(int *)(*(long *)(this + 0x10) + 200) == 0x14) {
              pRVar2 = (RtWeakPtr *)(this + 0x60);
              bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar2);
              if (bVar4) {
                bVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar2);
                uVar13 = (ulong)bVar6;
                if (bVar6 != 0) {
                  cVar5 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
                  if (cVar5 == '\0') {
                    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                               ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
                    (**(code **)(*plVar9 + 0x80))(plVar9,0);
                    this_00 = (Zombie *)
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
                    iVar8 = PlantFramework::Rand((PlantFramework *)this,600);
                    EATextSquish::Vec3::Vec3(aVStack_18,1000.0,(float)iVar8,0.0);
                    Zombie::FlickOff(this_00,(SexyVector3 *)aVStack_18);
                  }
                  else {
                    this_03 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                **)(this + 0x10);
                    uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
                    puVar11 = (undefined8 *)
                              std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(this_03);
                    /* WARNING: Load size is inaccurate */
                    pBVar17._0_4_ = *puVar11;
                    uVar15 = *(undefined4 *)((long)puVar11 + 4);
                    uVar16 = *(undefined4 *)(puVar11 + 1);
                    lVar10 = FUN_03ff2e2c(this_03);
                    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                              ((RtWeakPtr<Sexy::SoundResource> *)aVStack_18,
                               (RtWeakPtrBase *)(lVar10 + 0x2b8));
                    this_01 = (RtObject *)
                              Board::AddProjectile
                                        (pBVar17._0_4_,uVar15,uVar16,uVar14,
                                         (RtWeakPtr<Sexy::SoundResource> *)aVStack_18,
                                         *(undefined8 *)(this + 0x10),1000);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
                    pTVar12 = Sexy::RtObject::Cast<ThrowZombieProjectile>(this_01);
                    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                              ((RtWeakPtr<Sexy::SoundResource> *)aVStack_18,(RtWeakPtrBase *)pRVar2)
                    ;
                    Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,-115.0,-60.0);
                    ThrowZombieProjectile::SetAttachedZombiePAM
                              (local_20,local_1c,pTVar12,
                               (RtWeakPtr<Sexy::SoundResource> *)aVStack_18);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
                    puVar3 = gMessageRouter;
                    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                              ((RtWeakPtr<Sexy::SoundResource> *)aVStack_18,(RtWeakPtrBase *)pRVar2)
                    ;
                    FUN_02fd40c0(puVar3,(RtWeakPtr<Sexy::SoundResource> *)aVStack_18);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
                    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                               ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
                    (**(code **)(*plVar9 + 0x48))();
                    this_02 = *(RealObject **)(this + 0x10);
                    std::string::string((string *)aVStack_18,"Play_Plant_Future_Citron_PF_Charge");
                    RealObject::PlayPositionalSound(this_02,(string *)aVStack_18,0.0);
                    std::string::~string((string *)aVStack_18);
                    nop();
                  }
                  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                  _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             aVStack_18);
                  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                            ((RtWeakPtr<PowerPropertySheet> *)pRVar2,(RtWeakPtr *)aVStack_18);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
                  goto LAB_03ff4c28;
                }
              }
            }
          }
          else {
            bVar4 = std::operator==(param_1,"cannot_move");
            if (!bVar4) {
              uVar13 = ___stack_chk_guard;
              if (local_8 == ___stack_chk_guard) {
                PlantFramework::OnAnimCommand((string *)this,param_1);
                return;
              }
              goto LAB_03ff5284;
            }
            bVar4 = std::operator==(param_2,"pull_begin");
            if (bVar4) {
              bVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
              uVar13 = (ulong)bVar6;
              if (bVar6 != 0) {
                BeginPullFail(this);
                goto LAB_03ff4c28;
              }
            }
            else {
              bVar4 = std::operator==(param_2,"pull_end");
              if (bVar4) {
                bVar6 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x58));
                uVar13 = (ulong)bVar6;
                if (bVar6 != 0) {
                  EndPullFail(this);
                  goto LAB_03ff4c28;
                }
              }
            }
          }
        }
      }
    }
LAB_03ff4c24:
    uVar13 = 1;
  }
LAB_03ff4c28:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_03ff5284:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}

