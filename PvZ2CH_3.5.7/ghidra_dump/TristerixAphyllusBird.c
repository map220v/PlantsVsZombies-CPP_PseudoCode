// Class: TristerixAphyllusBird


/* TristerixAphyllusBird::GetRenderOrder() const */

undefined8 TristerixAphyllusBird::GetRenderOrder(void)

{
  return 0x92824;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird::StaticClassInit() */

void TristerixAphyllusBird::StaticClassInit(void)

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
    std::string::string(asStack_10,"TristerixAphyllusBird");
    (*pcVar2)(plVar1,asStack_10,FUN_042a5cdc,0xf0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TristerixAphyllusBird::StaticGetClass() */

long * TristerixAphyllusBird::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"TristerixAphyllusBird",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TristerixAphyllusBird::GetClass() const */

long * TristerixAphyllusBird::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"TristerixAphyllusBird",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TristerixAphyllusBird::SetBirdInfo(int, int, float, float) */

void __thiscall
TristerixAphyllusBird::SetBirdInfo
          (TristerixAphyllusBird *this,int param_1,int param_2,float param_3,float param_4)

{
  *(float *)(this + 0xac) = param_3;
  *(int *)(this + 0xa4) = param_1;
  *(int *)(this + 0xa8) = param_2;
  *(float *)(this + 0xb0) = param_4;
  return;
}


/* TristerixAphyllusBird::TristerixAphyllusBird() */

void __thiscall TristerixAphyllusBird::TristerixAphyllusBird(TristerixAphyllusBird *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0682a730;
  *(undefined ***)(this + 0x10) = &PTR__TristerixAphyllusBird_0682a918;
  DVec3::DVec3((DVec3 *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xe8));
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 1;
  *(undefined4 *)(this + 0xac) = 0x40400000;
  *(undefined4 *)(this + 0xb0) = 0x42c80000;
  return;
}


/* TristerixAphyllusBird::StaticNew() */

TristerixAphyllusBird * TristerixAphyllusBird::StaticNew(void)

{
  TristerixAphyllusBird *this;
  
  this = ::operator_new(0xf0);
  TristerixAphyllusBird(this);
  return this;
}


/* TristerixAphyllusBird::~TristerixAphyllusBird() */

void __thiscall TristerixAphyllusBird::~TristerixAphyllusBird(TristerixAphyllusBird *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xe0);
  *(undefined ***)this = &PTR_GetClass_0682a730;
  *(undefined ***)(this + 0x10) = &PTR__TristerixAphyllusBird_0682a918;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to TristerixAphyllusBird::~TristerixAphyllusBird() */

void __thiscall TristerixAphyllusBird::~TristerixAphyllusBird(TristerixAphyllusBird *this)

{
  ~TristerixAphyllusBird(this + -0x10);
  return;
}


/* TristerixAphyllusBird::~TristerixAphyllusBird() */

void __thiscall TristerixAphyllusBird::~TristerixAphyllusBird(TristerixAphyllusBird *this)

{
  ~TristerixAphyllusBird(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TristerixAphyllusBird::~TristerixAphyllusBird() */

void __thiscall TristerixAphyllusBird::~TristerixAphyllusBird(TristerixAphyllusBird *this)

{
  ~TristerixAphyllusBird(this + -0x10);
  return;
}


/* TristerixAphyllusBird::SetBirdSpeed(float, float) */

void __thiscall
TristerixAphyllusBird::SetBirdSpeed(TristerixAphyllusBird *this,float param_1,float param_2)

{
  long *plVar1;
  
  *(float *)(this + 0xb8) = param_2;
  *(float *)(this + 0xb4) = param_1;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  (**(code **)(*plVar1 + 0x80))(*(undefined4 *)(this + 0xb8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird::FlyToPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall TristerixAphyllusBird::FlyToPlant(TristerixAphyllusBird *this,RtWeakPtr *param_2)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0xbc) = 1;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xd0),param_2);
  if (*(int *)(this + 0xa4) == 0) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    std::string::string(asStack_40,"n_fly");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else if (*(int *)(this + 0xa4) == 1) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    std::string::string(asStack_40,"yl_fly");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird::Leave() */

void __thiscall TristerixAphyllusBird::Leave(TristerixAphyllusBird *this)

{
  SexyVector3 *pSVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0xbc) = 5;
  local_8 = ___stack_chk_guard;
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0xc0),pSVar1);
  *(float *)(this + 200) = *(float *)(this + 200) + 500.0;
  if (*(int *)(this + 0xa4) == 0) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    std::string::string(asStack_40,"n_fly");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else if (*(int *)(this + 0xa4) == 1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    std::string::string(asStack_40,"yl_fly");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird::FlyToZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall TristerixAphyllusBird::FlyToZombie(TristerixAphyllusBird *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  int iVar1;
  bool bVar2;
  Zombie *this_01;
  PopAnimRig *pPVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xd8);
  *(undefined4 *)(this + 0xbc) = 3;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (bVar2) {
    this_01 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string(asStack_40,"TristerixAphyllusMark");
    Zombie::AddTag(this_01,asStack_40);
    std::string::~string(asStack_40);
    nop();
    iVar1 = *(int *)(this + 0xa4);
  }
  else {
    iVar1 = *(int *)(this + 0xa4);
  }
  if (iVar1 == 0) {
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    std::string::string(asStack_40,"n_fly2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else if (iVar1 == 1) {
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    std::string::string(asStack_40,"yl_fly2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird::Draw(Sexy::Graphics*) */

void TristerixAphyllusBird::Draw(Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ResourceInfo *this;
  Graphics *in_x1;
  undefined1 in_w4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_58;
  undefined4 local_54;
  GraphicsAutoState aGStack_50 [8];
  FastCurve aFStack_48 [8];
  FastCurve aFStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::Draw((BoardEntity *)param_1,in_x1);
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0xe0));
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0xd0))(&local_58,*(long **)(gLawnApp + 0x9f0));
  fVar10 = *(float *)(param_1 + 0x18);
  iVar1 = FUN_042a5574(local_58);
  fVar9 = *(float *)(param_1 + 0x1c);
  fVar11 = *(float *)(param_1 + 0x20);
  iVar2 = FUN_042a5574(local_54);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,in_x1);
  (**(code **)(*(long *)param_1 + 0xf8))(param_1);
  if (this != (ResourceInfo *)0x0) {
    fVar5 = *(float *)(param_1 + 0xe8);
    iVar3 = FUN_042a5574(local_58);
    fVar6 = *(float *)(param_1 + 0xec);
    iVar4 = FUN_042a5574(local_54);
    fVar10 = (float)FUN_042a5564((fVar10 + fVar5 + (float)iVar1) - (float)iVar3);
    fVar5 = *(float *)(in_x1 + 0x20);
    fVar8 = *(float *)(in_x1 + 0x18);
    fVar9 = (float)FUN_042a5564((((fVar9 + fVar6) - fVar11) + (float)iVar2) - (float)iVar4);
    Sexy::FastCurve::SetOutRange
              (aFStack_48,(float)(int)((fVar10 - fVar5) * fVar8) + fVar5,
               (float)(int)((fVar9 - *(float *)(in_x1 + 0x24)) * *(float *)(in_x1 + 0x1c)) +
               *(float *)(in_x1 + 0x24));
    uVar7 = 0x3f800000;
    Sexy::FastCurve::SetOutRange(aFStack_40,1.0,1.0);
    fVar9 = (float)FUN_042a5564(0xbf800000);
    local_38 = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 0xe8),fVar9);
    local_34 = uVar7;
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyTransform2D *)aFStack_48,(SexyVector2 *)aFStack_40,0.0,(SexyVector2 *)&local_38,
               (SexyVector2 *)0x0,(bool)in_w4);
    PopAnimRig::Draw((PopAnimRig *)this,in_x1,aSStack_30);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to TristerixAphyllusBird::Draw(Sexy::Graphics*) */

void __thiscall TristerixAphyllusBird::Draw(TristerixAphyllusBird *this,Graphics *param_1)

{
  Draw((Graphics *)(this + -0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird::onInitialized() */

void __thiscall TristerixAphyllusBird::onInitialized(TristerixAphyllusBird *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  RtClass *pRVar3;
  ResourceInfo *pRVar4;
  TimeChallengeEndLevelUI *this_01;
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  BoardEntity::onInitialized((BoardEntity *)this);
  *(undefined4 *)(this + 0xbc) = 0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  pRVar3 = (RtClass *)Sexy::RtClass::StaticGetClassNamed("PopAnimRig");
  std::string::string(asStack_58,"POPANIM_EFFECTS_TRISTERIXAPHYLLUS_BIRD");
  GetPAMByName(asStack_58);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  plVar2 = (long *)PopAnimRig::CreateRig((PopAnim *)pRVar4,pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  (**(code **)(*plVar2 + 0x80))(0x40800000,plVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  this_01 = (TimeChallengeEndLevelUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPopAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<TristerixAphyllusBird,void(TristerixAphyllusBird::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird::SkillDisplay() */

void __thiscall TristerixAphyllusBird::SkillDisplay(TristerixAphyllusBird *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xbc) = 4;
  if (*(int *)(this + 0xa4) == 0) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    std::string::string(asStack_58,"n_throw");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<TristerixAphyllusBird,void(TristerixAphyllusBird::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  else if (*(int *)(this + 0xa4) == 1) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    std::string::string(asStack_58,"yl_throw");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<TristerixAphyllusBird,void(TristerixAphyllusBird::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird::Die() */

void __thiscall TristerixAphyllusBird::Die(TristerixAphyllusBird *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xbc) = 6;
  if (*(int *)(this + 0xa4) == 0) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    std::string::string(asStack_58,"n_fly");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<TristerixAphyllusBird,void(TristerixAphyllusBird::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  else if (*(int *)(this + 0xa4) == 1) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
    std::string::string(asStack_58,"yl_fly");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<TristerixAphyllusBird,void(TristerixAphyllusBird::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird::TryDragPlant() */

void __thiscall TristerixAphyllusBird::TryDragPlant(TristerixAphyllusBird *this)

{
  char cVar1;
  long lVar2;
  PlantTristerixAphyllus *this_00;
  PopAnimRig *pPVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd0));
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0xbc) = 5;
  }
  else {
    *(undefined4 *)(this + 0xbc) = 2;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0))
    ;
    this_00 = Sexy::RtObject::Cast<PlantTristerixAphyllus>(*(RtObject **)(lVar2 + 0xa8));
    PlantTristerixAphyllus::PlayDragged(this_00);
    if (*(int *)(this + 0xa4) == 0) {
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
      std::string::string(asStack_58,"n_pull");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onAnimStopped);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<TristerixAphyllusBird,void(TristerixAphyllusBird::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
    }
    else if (*(int *)(this + 0xa4) == 1) {
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
      std::string::string(asStack_58,"yl_pull");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onAnimStopped);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<TristerixAphyllusBird,void(TristerixAphyllusBird::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird::updatePosition() */

void TristerixAphyllusBird::updatePosition(void)

{
  RtMixedPtrBase *this;
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  SexyVector3 *pSVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  fVar10 = *(float *)(in_x0 + 0xb4);
  local_8 = ___stack_chk_guard;
  fVar9 = (float)PVZ_Dt();
  fVar9 = fVar9 * fVar10;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_58 = *puVar2;
  local_50 = *(float *)(puVar2 + 1);
  local_48 = local_58;
  local_40 = local_50;
  if (*(int *)(in_x0 + 0xbc) == 1) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0xd0));
    if (cVar1 != '\0') {
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xd0));
      pSVar4 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var3);
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_48,pSVar4);
      local_40 = 100.0;
      goto LAB_042a85f0;
    }
  }
  else {
    if (*(int *)(in_x0 + 0xbc) != 3) goto LAB_042a85f0;
    this = (RtMixedPtrBase *)(in_x0 + 0xd8);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar1 != '\0') {
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pSVar4 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var3);
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_48,pSVar4);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      lVar6 = (**(code **)(*plVar5 + 0x178))();
      local_40 = (float)(*(int *)(lVar6 + 0xc) + 0x32);
      goto LAB_042a85f0;
    }
  }
  Leave((TristerixAphyllusBird *)in_x0);
LAB_042a85f0:
  local_38[0] = Sexy::SexyVector3::operator-((SexyVector3 *)&local_48,(SexyVector3 *)&local_58);
  fVar10 = (float)DVec3::getLength((DVec3 *)local_38);
  if (fVar9 < fVar10) {
    local_18[0] = Sexy::SexyVector3::Normalize((SexyVector3 *)local_38);
    local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_18,fVar9);
    pcVar8 = *(code **)(*(long *)in_x0 + 0x78);
    local_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)&local_58,(SexyVector3 *)local_28);
    (*pcVar8)();
    iVar7 = *(int *)(in_x0 + 0xbc);
  }
  else {
    iVar7 = *(int *)(in_x0 + 0xbc);
    if (iVar7 == 1) {
      TryDragPlant((TristerixAphyllusBird *)in_x0);
      iVar7 = *(int *)(in_x0 + 0xbc);
    }
    else if (iVar7 == 3) {
      SkillDisplay((TristerixAphyllusBird *)in_x0);
      iVar7 = *(int *)(in_x0 + 0xbc);
    }
  }
  if (iVar7 == 5) {
    if (*(float *)(in_x0 + 200) < fVar9 + local_50) {
      Die((TristerixAphyllusBird *)in_x0);
    }
    else {
      pcVar8 = *(code **)(*(long *)in_x0 + 0x78);
      EATextSquish::Vec3::Vec3((Vec3 *)local_18,(float)local_58,local_58._4_4_,fVar9 + local_50);
      (*pcVar8)();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TristerixAphyllusBird::onUpdate() */

void __thiscall TristerixAphyllusBird::onUpdate(TristerixAphyllusBird *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  if (((*(uint *)(this + 0xbc) & 0xfffffffd) == 1) || (*(uint *)(this + 0xbc) == 5)) {
    updatePosition();
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xe0));
  }
  else {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xe0));
  }
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void TristerixAphyllusBird::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  RtMixedPtrBase *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  string *psVar6;
  Zombie *pZVar7;
  long lVar8;
  ResourceInfo *pRVar9;
  ulong uVar10;
  string *psVar11;
  float *pfVar12;
  TristerixAphyllusBird_Effect *this_00;
  char *__s;
  ulong uVar13;
  undefined4 uVar14;
  code *pcVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtrBase aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"drop");
  if (!bVar1) goto LAB_042a9ff8;
  this = (RtMixedPtrBase *)(param_1 + 0xd8);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar2 == '\0') goto LAB_042a9ff8;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  cVar2 = (**(code **)(*plVar4 + 0x328))();
  if (cVar2 != '\0') goto LAB_042a9ff8;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  cVar2 = (**(code **)(*plVar4 + 0x330))();
  if (cVar2 != '\0') goto LAB_042a9ff8;
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  cVar2 = RealObject::IsOnTeam(uVar5,1);
  if (cVar2 != '\0') goto LAB_042a9ff8;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  pcVar15 = *(code **)(*plVar4 + 0x3d0);
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_28,"tristerixaphyllus");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,aRStack_20);
  cVar2 = (*pcVar15)(plVar4,aRStack_18,0);
  if (cVar2 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    std::string::~string(asStack_28);
    nop();
    goto LAB_042a9ff8;
  }
  pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  cVar2 = Zombie::IsControlled(pZVar7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  nop();
  if (cVar2 != '\0') goto LAB_042a9ff8;
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  iVar3 = FUN_042a52c4(*(undefined4 *)(lVar8 + 0x50));
  if (*(int *)(param_1 + 0xa8) < iVar3) {
LAB_042aa188:
    uVar14 = 0;
  }
  else {
    pZVar7 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    iVar3 = Zombie::GetSizeType(pZVar7);
    if (iVar3 == 2) goto LAB_042aa188;
    uVar14 = 1;
  }
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_30,"EMPeaDefault");
  Sexy::ToWString(asStack_30);
  Sexy::RtName::RtName((RtName *)aRStack_18,(wstring *)asStack_28);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar5,5,aRStack_18);
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtName::~RtName((RtName *)aRStack_18);
  FUN_05476c50(asStack_28);
  std::string::~string(asStack_30);
  nop();
  if (pRVar9 != (ResourceInfo *)0x0) {
    uVar5 = *(undefined8 *)(pRVar9 + 0x2b8);
    uVar13 = 0;
    while (uVar10 = FUN_042a536c(uVar5,*(undefined8 *)(pRVar9 + 0x2c0)), uVar13 < uVar10) {
      pZVar7 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      psVar6 = (string *)Zombie::GetTypeName(pZVar7);
      uVar5 = *(undefined8 *)(pRVar9 + 0x2b8);
      uVar10 = uVar13 + 1;
      psVar11 = (string *)FUN_042a5378(uVar5,uVar13);
      cVar2 = std::operator==(psVar6,psVar11);
      uVar13 = uVar10;
      if (cVar2 != '\0') {
        uVar14 = 0;
      }
    }
  }
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_30,"PlantTristerixAphyllusDefault");
  Sexy::ToWString(asStack_30);
  Sexy::RtName::RtName((RtName *)aRStack_18,(wstring *)asStack_28);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar5,5,aRStack_18);
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtName::~RtName((RtName *)aRStack_18);
  FUN_05476c50(asStack_28);
  std::string::~string(asStack_30);
  nop();
  if (pRVar9 == (ResourceInfo *)0x0) {
LAB_042aa510:
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar4 + 600))();
  }
  else {
    uVar5 = *(undefined8 *)(pRVar9 + 0x318);
    bVar1 = false;
    uVar13 = 0;
    while (uVar10 = FUN_042a536c(uVar5,*(undefined8 *)(pRVar9 + 800)), uVar13 < uVar10) {
      pZVar7 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      psVar6 = (string *)Zombie::GetTypeName(pZVar7);
      uVar5 = *(undefined8 *)(pRVar9 + 0x318);
      uVar10 = uVar13 + 1;
      psVar11 = (string *)FUN_042a5378(uVar5,uVar13);
      cVar2 = std::operator==(psVar6,psVar11);
      uVar13 = uVar10;
      if (cVar2 != '\0') {
        bVar1 = true;
        uVar14 = 0;
      }
    }
    if (!bVar1) goto LAB_042aa510;
  }
  pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  Zombie::SetIsControlled(pZVar7,true);
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Zombie::ApplyCondition((Zombie *)0x40a00000,0,uVar5,0x18,1);
  pfVar12 = (float *)std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)param_1);
  fVar18 = pfVar12[2];
  fVar16 = *pfVar12;
  fVar17 = pfVar12[1];
  this_00 = Board::AddEffect<TristerixAphyllusBird_Effect>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)aRStack_20,"POPANIM_EFFECTS_TRISTERIXAPHYLLUS_EFFECT");
  GetPAMByName((string *)aRStack_20);
  pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar9,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)aRStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar16,fVar17,fVar18 - 60.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  iVar3 = (**(code **)(*plVar4 + 200))();
  FUN_042a52bc(this_00 + 0x1c,iVar3 + 1);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
  if (*(int *)(param_1 + 0xa4) == 1) {
    __s = "tx02";
  }
  else {
    __s = "tx";
  }
  std::string::string((string *)aRStack_18,__s);
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)this);
                    /* WARNING: Load size is inaccurate */
  TristerixAphyllusBird_Effect::SetTargetZombie
            (*(TristerixAphyllusBird_Effect **)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0),
             this_00,aRStack_18,uVar14,*(int *)(param_1 + 0xa4) == 1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
LAB_042a9ff8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird::onAnimStopped(std::string const&) */

void __thiscall TristerixAphyllusBird::onAnimStopped(TristerixAphyllusBird *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"yl_throw");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"n_throw"), !bVar1)) {
    bVar1 = std::operator==(param_1,"n_pull");
    if ((!bVar1) && (bVar1 = std::operator==(param_1,"yl_pull"), !bVar1)) {
      bVar1 = std::operator==(param_1,"n_fly");
      if ((bVar1) || (bVar1 = std::operator==(param_1,"yl_fly"), bVar1)) {
        (**(code **)(*(long *)this + 0x48))(this);
      }
      goto LAB_042ab30c;
    }
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0xd0));
    if (cVar2 != '\0') {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
      Sexy::RtObject::Cast<PlantTristerixAphyllus>(*(RtObject **)(lVar3 + 0xa8));
      PlantTristerixAphyllus::GetTargetZombie();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      FlyToZombie(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_042ab30c;
    }
  }
  Leave(this);
LAB_042ab30c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

