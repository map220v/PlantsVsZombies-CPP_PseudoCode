// Class: DevilsParasiteEntity


/* DevilsParasiteEntity::CalcRenderOrder() const */

undefined4 __thiscall DevilsParasiteEntity::CalcRenderOrder(DevilsParasiteEntity *this)

{
  return *(undefined4 *)(this + 0x1b0);
}


/* non-virtual thunk to DevilsParasiteEntity::CalcRenderOrder() const */

void __thiscall DevilsParasiteEntity::CalcRenderOrder(DevilsParasiteEntity *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* DevilsParasiteEntity::isInState(DPEState) const */

bool __thiscall DevilsParasiteEntity::isInState(DevilsParasiteEntity *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_04d61944(*(undefined4 *)(this + 0xb0));
  return iVar1 == param_2;
}


/* DevilsParasiteEntity::getStateSerialization() */

void __thiscall DevilsParasiteEntity::getStateSerialization(DevilsParasiteEntity *this)

{
  FUN_04d61944(*(undefined4 *)(this + 0xb0));
  return;
}


/* DevilsParasiteEntity::IsBig() */

bool __thiscall DevilsParasiteEntity::IsBig(DevilsParasiteEntity *this)

{
  return *(int *)(this + 0x16c) == 1;
}


/* DevilsParasiteEntity::IsGotToFace(Sexy::SexyVector3, Sexy::SexyVector3) */

bool DevilsParasiteEntity::IsGotToFace
               (float param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5
               ,undefined4 param_6,long param_7)

{
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_30 = param_4;
  local_2c = param_5;
  local_28 = param_6;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Sexy::SexyVector3::operator-((SexyVector3 *)&local_30,(SexyVector3 *)&local_20);
  if (*(char *)(param_7 + 0x168) == '\0') {
    return local_20 != local_30 && local_20 >= local_30;
  }
  return local_20 < local_30;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::GetIdleName(bool) */

void DevilsParasiteEntity::GetIdleName(bool param_1)

{
  long lVar1;
  char cVar2;
  DevilsParasiteEntity *this;
  char in_w1;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  this = (DevilsParasiteEntity *)(ulong)param_1;
  if (in_w1 == '\0') {
    if (this[0x1a0] == (DevilsParasiteEntity)0x0) {
      cVar2 = IsBig(this);
      if (cVar2 == '\0') {
        __s = "idle";
      }
      else {
        __s = "idle_lv5";
      }
    }
    else {
      cVar2 = IsBig(this);
      if (cVar2 == '\0') {
        __s = "idle_full";
      }
      else {
        __s = "idle_full_lv5";
      }
    }
  }
  else if (this[0x1a0] == (DevilsParasiteEntity)0x0) {
    cVar2 = IsBig(this);
    if (cVar2 == '\0') {
      __s = "idle_back";
    }
    else {
      __s = "idle_lv5_back";
    }
  }
  else {
    cVar2 = IsBig(this);
    if (cVar2 == '\0') {
      __s = "idle_full_back";
    }
    else {
      __s = "idle_full_lv5_back";
    }
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::GetAttackName() */

void DevilsParasiteEntity::GetAttackName(void)

{
  long lVar1;
  char cVar2;
  DevilsParasiteEntity *in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = IsBig(in_x0);
  if (cVar2 == '\0') {
    __s = "attack";
  }
  else {
    __s = "attack_lv5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::PlantDied(Plant*) */

void DevilsParasiteEntity::PlantDied(Plant *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtWeakPtrBase::operator==
                    ((RtWeakPtrBase *)(param_1 + 0x198),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DevilsParasiteEntity::~DevilsParasiteEntity() */

void __thiscall DevilsParasiteEntity::~DevilsParasiteEntity(DevilsParasiteEntity *this)

{
  *(undefined ***)this = &PTR_GetClass_069b5cd0;
  *(undefined ***)(this + 0x10) = &PTR__DevilsParasiteEntity_069b5f48;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to DevilsParasiteEntity::~DevilsParasiteEntity() */

void __thiscall DevilsParasiteEntity::~DevilsParasiteEntity(DevilsParasiteEntity *this)

{
  ~DevilsParasiteEntity(this + -0x10);
  return;
}


/* DevilsParasiteEntity::~DevilsParasiteEntity() */

void __thiscall DevilsParasiteEntity::~DevilsParasiteEntity(DevilsParasiteEntity *this)

{
  ~DevilsParasiteEntity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DevilsParasiteEntity::~DevilsParasiteEntity() */

void __thiscall DevilsParasiteEntity::~DevilsParasiteEntity(DevilsParasiteEntity *this)

{
  ~DevilsParasiteEntity(this + -0x10);
  return;
}


/* DevilsParasiteEntity::SetTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall DevilsParasiteEntity::SetTarget(DevilsParasiteEntity *this,RtWeakPtr *param_2)

{
  int iVar1;
  long *plVar2;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),param_2);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  iVar1 = (**(code **)(*plVar2 + 200))();
  *(int *)(this + 0x1b0) = iVar1 + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::onDraw(Sexy::Graphics*) */

void __thiscall DevilsParasiteEntity::onDraw(DevilsParasiteEntity *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  uVar7 = (ulong)*(uint *)(this + 0x1c);
  this_00 = (RtWeakPtr *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  fVar3 = (float)FUN_04d61a50(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  fVar8 = *(float *)(param_1 + 0x20);
  fVar4 = (float)FUN_04d61eec(fVar3 + 20.0);
  fVar9 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar8 +
       (float)(int)((fVar4 - fVar8) * *(float *)(param_1 + 0x18));
  fVar4 = (float)FUN_04d61eec((int)uVar7);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar9 +
       (float)(int)((fVar4 - fVar9) * *(float *)(param_1 + 0x1c));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    uVar5 = FUN_04d61eec(0xc2b40000);
    uVar6 = FUN_04d61eec(0xc2700000);
    FUN_04d61588(uVar5,uVar6,auStack_28,auStack_1c);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::SetRenderTransform(pPVar2,aSStack_30);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::Draw(pPVar2,param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  *(ulong *)(this + 0x150) = uVar7 << 0x20 | (ulong)(uint)(fVar3 + 20.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::CalcTargetFace(Sexy::SexyVector3&) */

void __thiscall
DevilsParasiteEntity::CalcTargetFace(DevilsParasiteEntity *this,SexyVector3 *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  RtObject *pRVar3;
  Zombie *pZVar4;
  PopAnimRig *this_01;
  float *pfVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  SexyVector3 *pSVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  Point aPStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
    cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))();
    if (cVar2 == '\0') {
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
      cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))();
      if (cVar2 == '\0') {
        Sexy::Insets::Insets(aIStack_18);
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
        this_01 = (PopAnimRig *)Zombie::GetAnimRig(pZVar4);
        std::string::string((string *)&local_28,"butter");
        PopAnimRig::CalcSymbolRect(this_01,(string *)&local_28,(TRect *)aIStack_18);
        std::string::~string((string *)&local_28);
        nop();
        Sexy::TRect<int>::GetCenter();
        Sexy::Point::Point(aPStack_38,(TPoint *)&local_28);
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)pZVar4);
        fVar8 = *pfVar5;
        fVar9 = pfVar5[1];
        DVec3::DVec3((DVec3 *)&local_28);
        local_24 = 0xc2a00000;
        local_28 = 0xc1c80000;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,fVar8 - 25.0,fVar9 - 80.0);
        this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pSVar6 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_02);
        Sexy::SexyVector3::operator=(param_1,pSVar6);
        *(undefined4 *)param_1 = local_30;
        *(undefined4 *)(param_1 + 4) = local_2c;
        uVar7 = 1;
        goto LAB_04d63f34;
      }
    }
  }
  uVar7 = 0;
LAB_04d63f34:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::CalcMoveTarget(DevilsParasiteType, Sexy::TRect<int>) */

void __thiscall
DevilsParasiteEntity::CalcMoveTarget(DevilsParasiteEntity *this,uint param_2,int *param_3)

{
  undefined8 local_20;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_18);
  CalcTargetFace(this,(SexyVector3 *)&local_18);
  if (param_2 < 2) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,local_18,local_14);
  }
  else {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)*param_3,(float)param_3[1]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)local_20,(int)((ulong)local_20 >> 0x20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::FindTarget() */

void __thiscall DevilsParasiteEntity::FindTarget(DevilsParasiteEntity *this)

{
  char cVar1;
  undefined8 uVar2;
  ResourceInfo *pRVar3;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  pRVar3 = (ResourceInfo *)0x0;
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  Plant::FindTarget(aRStack_10,uVar2,0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if ((cVar1 != '\0') &&
     (cVar1 = Sexy::RtWeakPtrBase::operator!=
                        ((RtWeakPtrBase *)aRStack_10,(RtWeakPtrBase *)(this + 0x170)), cVar1 != '\0'
     )) {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::onPostLoad() */

void __thiscall DevilsParasiteEntity::onPostLoad(DevilsParasiteEntity *this)

{
  bool bVar1;
  TimeChallengeEndLevelUI *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::onPostLoad((BoardEntity *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    this_00 = (TimeChallengeEndLevelUI *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimCommand);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_38,aCStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::DevilsParasiteEntity() */

void __thiscall DevilsParasiteEntity::DevilsParasiteEntity(DevilsParasiteEntity *this)

{
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_069b5cd0;
  *(undefined ***)(this + 0x10) = &PTR__DevilsParasiteEntity_069b5f48;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  StateMachine<DPEState>::StateMachine((StateMachine<DPEState> *)(this + 0xb0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x150));
  DVec3::DVec3((DVec3 *)(this + 0x158));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  DVec3::DVec3((DVec3 *)(this + 0x178));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  DVec3::DVec3((DVec3 *)(this + 0x1a4));
  this[0x168] = (DevilsParasiteEntity)0x0;
  this[0x184] = (DevilsParasiteEntity)0x0;
  this[0x1a0] = (DevilsParasiteEntity)0x0;
  *(undefined4 *)(this + 0x164) = 0;
  DVec3::DVec3(aDStack_18);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1a4),(SexyVector3 *)aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DevilsParasiteEntity::StaticNew() */

DevilsParasiteEntity * DevilsParasiteEntity::StaticNew(void)

{
  DevilsParasiteEntity *this;
  
  this = ::operator_new(0x1b8);
  DevilsParasiteEntity(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::onEnterState_FLYAWAY(DPEState) */

void DevilsParasiteEntity::onEnterState_FLYAWAY
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  ActionSubSystem *pAVar5;
  PopAnimRig *pPVar6;
  ActionSubSystem *pAVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtMixedPtr aRStack_88 [8];
  RtId aRStack_80 [8];
  float local_78;
  float fStack_74;
  float local_70 [2];
  float local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_1);
  fVar8 = *pfVar4;
  fVar9 = pfVar4[1];
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)local_68);
  if (*(uint *)(param_1 + 0x16c) < 2) {
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_78);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    local_78 = fVar8 + (float)iVar2 * 2.0;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_74 = fVar9 + (float)iVar2 * 1.5;
    local_60 = CONCAT44(fStack_74,local_78);
    local_58 = local_60;
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)local_70,fVar8 + (float)iVar2 * 2.5,fVar9 - (float)iVar3 * 0.5);
    local_68[0] = local_70[0];
  }
  if (fVar8 <= local_68[0]) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xa8));
    if (!bVar1) goto LAB_04d66174;
    pPVar6 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
    GetIdleName(SUB81(param_1,0));
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
  }
  else {
    param_1[0x168] =
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          )0x1;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xa8));
    if (!bVar1) goto LAB_04d66174;
    pPVar6 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
    GetIdleName(SUB81(param_1,0));
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
  }
  PopAnimRig::PlayAndContinue(pPVar6,(RtWeakPtr<Sexy::SoundResource> *)local_70,0,aRStack_50);
  std::string::~string((string *)local_70);
LAB_04d66174:
  pAVar7 = (ActionSubSystem *)FUN_04d61948(0x3fc00000,0x40200000);
  pAVar5 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_70,(RtWeakPtrBase *)aRStack_90);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
  std::string::string((string *)&local_78,"onFlyAwayDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_80,
             (string *)&local_78);
  ActionSubSystem::AddActionBezierTo
            (pAVar7,pAVar5,(RtWeakPtr<Sexy::SoundResource> *)local_70,(_ccBezierConfig *)local_68,
             aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_78);
  nop();
  Sexy::RtId::~RtId(aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::onEnterState_TURNBACK(DPEState) */

void DevilsParasiteEntity::onEnterState_TURNBACK
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  ActionSubSystem *pAVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  ActionSubSystem *pAVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  RtMixedPtr aRStack_a8 [8];
  RtId aRStack_a0 [8];
  string asStack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  undefined8 local_88;
  undefined4 local_80;
  float local_78 [2];
  undefined4 local_70;
  float local_68 [6];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_4);
  local_88 = *puVar2;
  local_80 = *(undefined4 *)(puVar2 + 1);
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)local_68);
  if (*(uint *)(param_4 + 0x16c) < 2) {
    Sexy::FastCurve::SetOutRange((FastCurve *)local_78,(float)local_88,local_88._4_4_);
    Sexy::FastCurve::SetOutRange((FastCurve *)local_78,(float)local_88,local_88._4_4_);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)local_78,*(float *)(param_4 + 0x158),*(float *)(param_4 + 0x15c));
    local_68[0] = local_78[0];
  }
  if ((float)local_88 <= local_68[0]) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_4 + 0xa8));
    if (!bVar1) goto LAB_04d6642c;
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0xa8));
    GetIdleName(SUB81(param_4,0));
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
  }
  else {
    param_4[0x168] =
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          )0x1;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_4 + 0xa8));
    if (!bVar1) goto LAB_04d6642c;
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0xa8));
    GetIdleName(SUB81(param_4,0));
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
  }
  PopAnimRig::PlayAndContinue(pPVar4,(DVec3 *)local_78,0,aRStack_50);
  std::string::~string((string *)local_78);
LAB_04d6642c:
  local_78[0] = (float)Sexy::SexyVector3::operator-
                                 ((SexyVector3 *)(param_4 + 0x158),(SexyVector3 *)&local_88);
  local_70 = param_3;
  fVar5 = (float)DVec3::getLength((DVec3 *)local_78);
  pAVar6._0_4_ = (ActionSubSystem *)((fVar5 / *(float *)(param_4 + 0x18c)) * _FUN_04d66658);
  pAVar3 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)aRStack_b0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a8);
  std::string::string(asStack_98,"onTurnBackDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_a0,asStack_98)
  ;
  ActionSubSystem::AddActionBezierTo
            (pAVar6._0_4_,pAVar3,aRStack_90,(_ccBezierConfig *)local_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_98);
  nop();
  Sexy::RtId::~RtId(aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::onEnterState_END(DPEState) */

void DevilsParasiteEntity::onEnterState_END(DevilsParasiteEntity *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(param_1 + 0x198));
  uVar2 = IsBig(param_1);
  MessageRouter::Post<Plant*,bool,bool,Sexy::RtWeakPtr<Plant>,bool,bool>
            ((MessageRouter *)puVar1,Message::DevilsParasiteTurnBack,aRStack_10,uVar2,param_1[0x1a0]
            );
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::GenerateMummyZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
DevilsParasiteEntity::GenerateMummyZombie(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RtObject *this;
  ZombieImp *pZVar4;
  string *psVar5;
  ZombieType *this_00;
  long lVar6;
  SexyVector3 *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  char *__s;
  long *plVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  string asStack_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    pZVar4 = Sexy::RtObject::Cast<ZombieImp>(this);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    if (pZVar4 == (ZombieImp *)0x0) {
      __s = "devils_mummy";
    }
    else {
      __s = "devils_mummy_imp";
    }
    std::string::string(asStack_38,__s);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    std::string::~string(asStack_38);
    nop();
    this_00 = (ZombieType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    ZombieType::EnsureResourceGroupsLoaded(this_00);
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar2 = FUN_04d616b8(*(undefined4 *)(lVar6 + 0x50));
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    iVar3 = FUN_04d616b8(*(undefined4 *)(lVar6 + 0x50));
    local_30 = ClampInt(iVar2 + -2,1,iVar3);
    local_2b = 1;
    local_29 = 1;
    local_2c = 0;
    plVar7 = *(long **)(gLawnApp + 0x9f0);
    pcVar8 = *(code **)(*plVar7 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)aRStack_40);
    this_01 = (SexyVector3 *)
              (*pcVar8)(plVar7,asStack_38,0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
    if (this_01 != (SexyVector3 *)0x0) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      fVar9 = (float)FUN_04d616f4(*(undefined4 *)(lVar6 + 0x280));
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      fVar10 = (float)FUN_04d616fc(*(undefined4 *)(lVar6 + 0x2a8));
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      fVar11 = (float)FUN_04d616f8(*(undefined4 *)(lVar6 + 0x284));
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      fVar12 = (float)FUN_04d61700(*(undefined4 *)(lVar6 + 0x2ac));
      fVar13 = (float)FUN_04d616f8(*(undefined4 *)(this_01 + 0x284));
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_leftmost(this_02);
      BoardEntity::PlaceOnBoard(this_01);
      Zombie::SetHitpoints((Zombie *)this_01,((fVar10 + fVar9) / (fVar12 + fVar11)) * fVar13);
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      (**(code **)(*plVar7 + 0x48))();
    }
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::StaticClassInit() */

void DevilsParasiteEntity::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  StateMachineTableBuilder *this;
  RtClass *pRVar3;
  StateMachineTable *pSVar4;
  code *pcVar5;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<DPEState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<DPEState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_150,"DevilsParasiteParam");
      (*pcVar5)(plVar2,asStack_150,FUN_04d6173c,0xc,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"DevilsParasiteEntity");
    (*pcVar5)(plVar2,asStack_150,FUN_04d696f4,0x1b8,0);
    std::string::~string(asStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<DPEState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1d8);
  Sexy::Delegate1<DPEState>::Delegate1<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(DPEState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e0);
  Sexy::Delegate0::Delegate0<DevilsParasiteEntity,void(DevilsParasiteEntity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e8);
  Sexy::Delegate1<DPEState>::Delegate1<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(DPEState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"DPEState_INIT");
  StateDefinition<DPEState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04d68f64(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f0);
  Sexy::Delegate1<DPEState>::Delegate1<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(DPEState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f8);
  Sexy::Delegate0::Delegate0<DevilsParasiteEntity,void(DevilsParasiteEntity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x200);
  Sexy::Delegate1<DPEState>::Delegate1<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(DPEState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"DPEState_FLYTOTARGET");
  StateDefinition<DPEState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04d68f64(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x208);
  Sexy::Delegate1<DPEState>::Delegate1<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(DPEState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x210);
  Sexy::Delegate0::Delegate0<DevilsParasiteEntity,void(DevilsParasiteEntity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x218);
  Sexy::Delegate1<DPEState>::Delegate1<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(DPEState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"DPEState_ATTACK");
  StateDefinition<DPEState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04d68f64(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x220);
  Sexy::Delegate1<DPEState>::Delegate1<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(DPEState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)&DAT_00000228);
  Sexy::Delegate0::Delegate0<DevilsParasiteEntity,void(DevilsParasiteEntity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x230);
  Sexy::Delegate1<DPEState>::Delegate1<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(DPEState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"DPEState_FLYAWAY");
  StateDefinition<DPEState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04d68f64(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x238);
  Sexy::Delegate1<DPEState>::Delegate1<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(DPEState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x240);
  Sexy::Delegate0::Delegate0<DevilsParasiteEntity,void(DevilsParasiteEntity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x248);
  Sexy::Delegate1<DPEState>::Delegate1<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(DPEState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"DPEState_TURNBACK");
  StateDefinition<DPEState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04d68f64(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x250);
  Sexy::Delegate1<DPEState>::Delegate1<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(DPEState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x258);
  Sexy::Delegate0::Delegate0<DevilsParasiteEntity,void(DevilsParasiteEntity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x260);
  Sexy::Delegate1<DPEState>::Delegate1<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(DPEState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"DPEState_END");
  StateDefinition<DPEState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04d68f64(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DevilsParasiteEntity::StaticGetClass() */

long * DevilsParasiteEntity::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DevilsParasiteEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DevilsParasiteEntity::GetClass() const */

long * DevilsParasiteEntity::GetClass(void)

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
  (*pcVar3)(plVar1,"DevilsParasiteEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::setState(DPEState) */

void __thiscall DevilsParasiteEntity::setState(DevilsParasiteEntity *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<DPEState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<DPEState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<DPEState>::GetStateDefinition
                     ((StateMachineTable<DPEState> *)pSVar2,param_2);
  StateDefinition<DPEState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<DPEState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetState
            ((StateMachine<DPEState> *)(this + 0xb0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::DevilsParasiteInitialize(DevilsParasiteType, DevilsParasiteParam,
   Sexy::RtWeakPtr<Plant>) */

void DevilsParasiteEntity::DevilsParasiteInitialize
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,
               DevilsParasiteEntity *param_4,undefined4 param_5,RtWeakPtr *param_6)

{
  RtWeakPtr *this;
  undefined *puVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  ResourceInfo *pRVar5;
  RtClass *pRVar6;
  TimeChallengeEndLevelUI *this_00;
  PopAnimRig *pPVar7;
  SexyVector3 *pSVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  RtWeakPtr aRStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  this = (RtWeakPtr *)(param_4 + 0xa8);
  *(undefined4 *)(param_4 + 0x16c) = param_5;
  *(ulong *)(param_4 + 0x188) = CONCAT44(param_2,param_1);
  *(undefined4 *)(param_4 + 400) = param_3;
  local_8 = ___stack_chk_guard;
  local_70 = param_1;
  uStack_6c = param_2;
  local_68 = param_3;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_4 + 0x198),param_6);
  IsBig(param_4);
  setState(param_4,0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar2) {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar4 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  }
  std::string::string((string *)&local_50,"POPANIM_EFFECTS_DEVILSFLOWER_PARASITE");
  GetPAMByName((string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
  pRVar6 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar5,pRVar6);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  this_00 = (TimeChallengeEndLevelUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_4,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,(string *)&local_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  pPVar7 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  GetIdleName(SUB81(param_4,0));
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar7,(string *)&local_50,0,aDStack_38);
  std::string::~string((string *)&local_50);
  pSVar8 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_4);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x158),pSVar8);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_50,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x178),(SexyVector3 *)&local_50);
  uVar3 = Board::MakeRenderOrder(0x64960,0,0);
  *(undefined4 *)(param_4 + 0x1b0) = uVar3;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_4,PlantDied);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<DevilsParasiteEntity,void(DevilsParasiteEntity::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::MoveToTarget(Sexy::SexyVector2) */

void DevilsParasiteEntity::MoveToTarget
               (undefined4 param_1,undefined4 param_2,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_3)

{
  bool bVar1;
  float *pfVar2;
  PopAnimRig *pPVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  DummyInit *local_90;
  undefined8 local_78;
  undefined4 local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  uVar5 = *(undefined4 *)(param_3 + 0x1c);
  local_8 = ___stack_chk_guard;
  local_78 = CONCAT44(param_2,param_1);
  uVar4 = FUN_04d61a50(*(undefined4 *)(param_3 + 0x18),uVar5,*(undefined4 *)(param_3 + 0x20));
  *(undefined4 *)(param_3 + 0x150) = uVar4;
  *(undefined4 *)(param_3 + 0x154) = uVar5;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_3);
  fVar6 = *pfVar2;
  fVar7 = pfVar2[1];
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)&local_50);
  if (*(uint *)(param_3 + 0x16c) < 2) {
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_60);
    local_50 = local_78;
    local_60 = fVar6 + ((float)local_78 - fVar6) * 0.5;
    fStack_5c = local_78._4_4_ * 0.5 + 10.0;
    local_48 = CONCAT44(fStack_5c,local_60);
    local_40 = local_48;
  }
  if (fVar6 <= (float)local_50) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_3 + 0xa8));
    if (!bVar1) goto LAB_04d6aaa0;
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0xa8));
    GetIdleName(SUB81(param_3,0));
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  }
  else {
    param_3[0x168] =
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          )0x1;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_3 + 0xa8));
    if (!bVar1) goto LAB_04d6aaa0;
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0xa8));
    GetIdleName(SUB81(param_3,0));
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  }
  local_90 = aDStack_38;
  PopAnimRig::PlayAndContinue(pPVar3,(FastCurve *)&local_60,0,local_90);
  std::string::~string((string *)&local_60);
LAB_04d6aaa0:
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_60,fVar6,fVar7);
  local_68 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_78,(SexyVector2 *)&local_60);
  local_64 = fVar7;
  fVar6 = (float)DVec2::getLength((DVec2 *)&local_68);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_60,*(float *)(param_3 + 0x18c),
             fVar7 / (fVar6 / *(float *)(param_3 + 0x18c)),0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_3 + 0x1a4),(SexyVector3 *)&local_60);
  setState((DevilsParasiteEntity *)param_3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DevilsParasiteEntity::onFlyToTargetDone(BoardEntity*) */

void DevilsParasiteEntity::onFlyToTargetDone(BoardEntity *param_1)

{
  setState((DevilsParasiteEntity *)param_1,2);
  return;
}


/* DevilsParasiteEntity::onFlyAwayDone(BoardEntity*) */

void DevilsParasiteEntity::onFlyAwayDone(BoardEntity *param_1)

{
  setState((DevilsParasiteEntity *)param_1,4);
  return;
}


/* DevilsParasiteEntity::onTurnBackDone(BoardEntity*) */

void DevilsParasiteEntity::onTurnBackDone(BoardEntity *param_1)

{
  setState((DevilsParasiteEntity *)param_1,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::onAttackAnimDone(std::string const&) */

void DevilsParasiteEntity::onAttackAnimDone(string *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  RtObject *pRVar2;
  Zombie *pZVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this = (RtMixedPtrBase *)(param_1 + 0x170);
  local_8 = ___stack_chk_guard;
  setState((DevilsParasiteEntity *)param_1,4);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if ((cVar1 != '\0') && (cVar1 = IsBig((DevilsParasiteEntity *)param_1), cVar1 != '\0')) {
    pRVar2 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pZVar3 = Sexy::RtObject::Cast<Zombie>(pRVar2);
    cVar1 = (**(code **)(*(long *)pZVar3 + 0x328))();
    if (cVar1 == '\0') {
      pRVar2 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pZVar3 = Sexy::RtObject::Cast<Zombie>(pRVar2);
      cVar1 = (**(code **)(*(long *)pZVar3 + 0x330))();
      if (cVar1 == '\0') {
        pRVar2 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        pZVar3 = Sexy::RtObject::Cast<Zombie>(pRVar2);
        cVar1 = Zombie::IsIgnoringAllDamage(pZVar3);
        if (cVar1 == '\0') {
          pRVar2 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          Sexy::RtObject::Cast<Zombie>(pRVar2);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
          GenerateMummyZombie((DevilsParasiteEntity *)param_1,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::onAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void __thiscall
DevilsParasiteEntity::onAnimCommand
          (DevilsParasiteEntity *this,string *param_1,float param_2,string *param_3,string *param_4)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  RtObject *pRVar3;
  PopAnimRig *pPVar4;
  undefined8 uVar5;
  long *plVar6;
  RealObject *this_01;
  Zombie *pZVar7;
  code *pcVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_s1;
  Point aPStack_b0 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  DummyInit aDStack_98 [48];
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,2);
  if ((cVar1 != '\0') && (bVar2 = std::operator==(param_3,"use_action"), bVar2)) {
    this_00 = (RtWeakPtr *)(this + 0x170);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar3);
      cVar1 = (**(code **)(*(long *)pZVar7 + 0x328))();
      if (cVar1 == '\0') {
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar3);
        cVar1 = (**(code **)(*(long *)pZVar7 + 0x330))();
        if (cVar1 == '\0') {
          pRVar3 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar3);
          if (bVar2) {
            uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            cVar1 = RealObject::IsOnTeam(uVar5,2);
            if (cVar1 != '\0') {
              fVar9 = *(float *)(this + 0x188);
              plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              pcVar8 = *(code **)(*plVar6 + 0x110);
              Sexy::Point::Point(aPStack_b0,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_a8,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)(float)(int)fVar9,local_a8,local_a4,(DamageInfo *)asStack_68,
                         aPStack_b0,0);
              (*pcVar8)(plVar6,(DamageInfo *)asStack_68);
              DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
              bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
              if (bVar2) {
                this_01 = (RealObject *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
                std::string::string(asStack_68,"Play_Plant_Devilsflower_Absorb");
                RealObject::PlayPositionalSound(this_01,asStack_68,0.0);
                std::string::~string(asStack_68);
                nop();
              }
            }
          }
          goto LAB_04d6b1ac;
        }
      }
    }
    pRVar3 = (RtObject *)FindTarget(this);
    if ((pRVar3 == (RtObject *)0x0) || (this[0x1a0] != (DevilsParasiteEntity)0x0)) {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
      if (bVar2) {
        pPVar4 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
        GetIdleName(SUB81(this,0));
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_98);
        PopAnimRig::PlayAndContinue(pPVar4,asStack_68,0,aDStack_98);
        std::string::~string(asStack_68);
      }
      setState(this,4);
    }
    else {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_68,(RtWeakPtrBase *)&local_a8);
      SetTarget(this,(RtWeakPtr<Sexy::SoundResource> *)asStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a8);
      pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar3);
      (**(code **)(*(long *)pZVar7 + 0x3a0))((RtWeakPtr<Sexy::ResourceInfo> *)&local_a8);
      uVar10 = *(undefined4 *)(this + 0x16c);
      Sexy::Insets::Insets((Insets *)asStack_68,(Insets *)&local_a8);
      uVar10 = CalcMoveTarget(this,uVar10,(RtWeakPtr<Sexy::SoundResource> *)asStack_68);
      MoveToTarget(uVar10,in_s1,this);
    }
  }
LAB_04d6b1ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::onEnterState_ATTACK(DPEState) */

void DevilsParasiteEntity::onEnterState_ATTACK
               (undefined1 param_1 [16],undefined4 param_2,DevilsParasiteEntity *param_3)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  RtObject *pRVar3;
  Zombie *pZVar4;
  undefined8 uVar5;
  PopAnimRig *pPVar6;
  undefined4 uVar7;
  string asStack_80 [8];
  RtMixedPtr aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [16];
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this = (RtWeakPtr *)(param_3 + 0x170);
  local_8 = ___stack_chk_guard;
  param_3[0x168] = (DevilsParasiteEntity)0x0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
    cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))();
    if (cVar2 == '\0') {
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
      cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))();
      if (cVar2 == '\0') {
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        bVar1 = Sexy::RtObject::IsA<Zombie>(pRVar3);
        if (bVar1) {
          uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          cVar2 = RealObject::IsOnTeam(uVar5,2);
          if (cVar2 != '\0') {
            param_3[0x1a0] = (DevilsParasiteEntity)0x1;
            pRVar3 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
            ;
            pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
            cVar2 = IsBig(param_3);
                    /* WARNING: Load size is inaccurate */
            uVar7 = 0x85;
            if (cVar2 == '\0') {
              uVar7 = 0x84;
            }
            Zombie::ApplyCondition(*(Zombie **)(param_3 + 400),0,pZVar4,uVar7,1);
          }
        }
        std::string::string(asStack_80,"attack");
        nop();
        if (*(uint *)(param_3 + 0x16c) < 2) {
          GetAttackName();
          thunk_FUN_05475e00(asStack_80,(string *)aRStack_60);
          std::string::~string((string *)aRStack_60);
        }
        pPVar6 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0xa8));
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
        std::string::string((string *)aRStack_60,"onAttackAnimDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   (RtId *)aRStack_70,(string *)aRStack_60);
        PopAnimRig::PlayAndStop(pPVar6,asStack_80,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)aRStack_60);
        nop();
        Sexy::RtId::~RtId((RtId *)aRStack_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
        ;
        std::string::string((string *)aRStack_60,"Play_Throw");
        RealObject::PlayPositionalSound((RealObject *)param_3,(string *)aRStack_60,0.0);
        std::string::~string((string *)aRStack_60);
        nop();
        std::string::~string(asStack_80);
        goto LAB_04d6b55c;
      }
    }
  }
  pRVar3 = (RtObject *)FindTarget(param_3);
  if (pRVar3 == (RtObject *)0x0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_3 + 0xa8));
    if (bVar1) {
      pPVar6 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0xa8));
      GetIdleName(SUB81(param_3,0));
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50)
      ;
      PopAnimRig::PlayAndContinue(pPVar6,(string *)aRStack_60,0,(DummyInit *)aRStack_50);
      std::string::~string((string *)aRStack_60);
    }
    setState(param_3,4);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_70);
    SetTarget(param_3,aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
    (**(code **)(*(long *)pZVar4 + 0x3a0))(aRStack_70);
    uVar7 = *(undefined4 *)(param_3 + 0x16c);
    Sexy::Insets::Insets((Insets *)aRStack_60,(Insets *)aRStack_70);
    uVar7 = CalcMoveTarget(param_3,uVar7,aRStack_60);
    MoveToTarget(uVar7,param_2,param_3);
  }
LAB_04d6b55c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::UpdateEntityPos() */

void DevilsParasiteEntity::UpdateEntityPos(void)

{
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar3;
  RtObject *this;
  Zombie *pZVar4;
  PopAnimRig *pPVar5;
  undefined4 uVar6;
  undefined4 in_s1;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [16];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_78 = *puVar3;
  local_70 = *(undefined4 *)(puVar3 + 1);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_78,(Vec3 *)(in_x0 + 0x1a4));
  DVec3::DVec3((DVec3 *)&local_68);
  cVar1 = CalcTargetFace((DevilsParasiteEntity *)in_x0,(SexyVector3 *)&local_68);
  if (cVar1 == '\0') {
    this = (RtObject *)FindTarget((DevilsParasiteEntity *)in_x0);
    if (this == (RtObject *)0x0) {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0xa8));
      if (bVar2) {
        pPVar5 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xa8));
        GetIdleName(SUB81(in_x0,0));
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar5,(string *)aRStack_48,0,aDStack_38);
        std::string::~string((string *)aRStack_48);
      }
      setState();
    }
    else {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_58);
      SetTarget();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      pZVar4 = Sexy::RtObject::Cast<Zombie>(this);
      (**(code **)(*(long *)pZVar4 + 0x3a0))(aRStack_58);
      Sexy::Insets::Insets((Insets *)aRStack_48,(Insets *)aRStack_58);
      uVar6 = CalcMoveTarget();
      MoveToTarget(uVar6,in_s1);
    }
  }
  else {
    cVar1 = IsGotToFace((undefined4)local_78,local_78._4_4_,local_70,local_68,local_64,local_60);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)in_x0 + 0x78))();
    }
    else {
      setState();
      (**(code **)(*(long *)in_x0 + 0x78))();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DevilsParasiteEntity::onUpdate() */

void __thiscall DevilsParasiteEntity::onUpdate(DevilsParasiteEntity *this)

{
  bool bVar1;
  int iVar2;
  PopAnimRig *this_00;
  float fVar3;
  float fVar4;
  
  StateMachine<DPEState>::UpdateState((StateMachine<DPEState> *)(this + 0xb0));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (bVar1) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar3,fVar4);
    iVar2 = FUN_04d61944(*(undefined4 *)(this + 0xb0));
  }
  else {
    iVar2 = FUN_04d61944(*(undefined4 *)(this + 0xb0));
  }
  if (iVar2 != 1) {
    return;
  }
  UpdateEntityPos();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsParasiteEntity::setStateSerialization(int) */

void __thiscall DevilsParasiteEntity::setStateSerialization(DevilsParasiteEntity *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<DPEState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<DPEState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<DPEState>::GetStateDefinition
                     ((StateMachineTable<DPEState> *)pSVar2,param_1);
  StateDefinition<DPEState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<DPEState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0xb0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

