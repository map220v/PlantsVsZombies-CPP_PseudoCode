// Class: ArtifactBeeEntity


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::CalcMoveTarget(ArtifactBeehive::ArtifactBeeType, Sexy::TRect<int>) */

void __thiscall ArtifactBeeEntity::CalcMoveTarget(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined8 local_10;
  long local_8;
  
  iVar1 = *param_3;
  local_8 = ___stack_chk_guard;
  if ((param_2 != 3) && (param_2 != 0)) {
    if ((param_2 == 4) || (param_2 == 1)) {
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_10,(float)(iVar1 + -0xd),(float)(param_3[1] + -0x48));
      goto LAB_03735088;
    }
    if ((param_2 == 5) || (param_2 == 2)) {
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_10,(float)(iVar1 + -6),(float)(param_3[1] + -0x5f));
      goto LAB_03735088;
    }
  }
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_10,(float)(iVar1 + -0x61),(float)(param_3[1] + -0x39));
LAB_03735088:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)local_10,(int)((ulong)local_10 >> 0x20));
}


/* ArtifactBeeEntity::CalcRenderOrder() const */

undefined8 ArtifactBeeEntity::CalcRenderOrder(void)

{
  return 900000;
}


/* non-virtual thunk to ArtifactBeeEntity::CalcRenderOrder() const */

void __thiscall ArtifactBeeEntity::CalcRenderOrder(ArtifactBeeEntity *this)

{
  CalcRenderOrder();
  return;
}


/* ArtifactBeeEntity::isInState(ABEState) const */

bool __thiscall ArtifactBeeEntity::isInState(ArtifactBeeEntity *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_04cab0b0(*(undefined4 *)(this + 0xb0));
  return iVar1 == param_2;
}


/* ArtifactBeeEntity::getStateSerialization() */

void __thiscall ArtifactBeeEntity::getStateSerialization(ArtifactBeeEntity *this)

{
  FUN_04cab0b0(*(undefined4 *)(this + 0xb0));
  return;
}


/* ArtifactBeeEntity::IsBig() */

bool __thiscall ArtifactBeeEntity::IsBig(ArtifactBeeEntity *this)

{
  return *(int *)(this + 0x16c) - 3U < 3;
}


/* ArtifactBeeEntity::~ArtifactBeeEntity() */

void __thiscall ArtifactBeeEntity::~ArtifactBeeEntity(ArtifactBeeEntity *this)

{
  *(undefined ***)this = &PTR_GetClass_06999180;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactBeeEntity_069993f8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to ArtifactBeeEntity::~ArtifactBeeEntity() */

void __thiscall ArtifactBeeEntity::~ArtifactBeeEntity(ArtifactBeeEntity *this)

{
  ~ArtifactBeeEntity(this + -0x10);
  return;
}


/* ArtifactBeeEntity::~ArtifactBeeEntity() */

void __thiscall ArtifactBeeEntity::~ArtifactBeeEntity(ArtifactBeeEntity *this)

{
  ~ArtifactBeeEntity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactBeeEntity::~ArtifactBeeEntity() */

void __thiscall ArtifactBeeEntity::~ArtifactBeeEntity(ArtifactBeeEntity *this)

{
  ~ArtifactBeeEntity(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::onDraw(Sexy::Graphics*) */

void __thiscall ArtifactBeeEntity::onDraw(ArtifactBeeEntity *this,Graphics *param_1)

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
  fVar3 = (float)FUN_04cab200(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  fVar8 = *(float *)(param_1 + 0x20);
  fVar4 = (float)FUN_04cab600(fVar3 + 20.0);
  fVar9 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar8 +
       (float)(int)((fVar4 - fVar8) * *(float *)(param_1 + 0x18));
  fVar4 = (float)FUN_04cab600((int)uVar7);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar9 +
       (float)(int)((fVar4 - fVar9) * *(float *)(param_1 + 0x1c));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    uVar5 = FUN_04cab600(0xc2b40000);
    uVar6 = FUN_04cab600(0xc2700000);
    FUN_04caaaa8(uVar5,uVar6,auStack_28,auStack_1c);
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


/* ArtifactBeeEntity::SetTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall ArtifactBeeEntity::SetTarget(ArtifactBeeEntity *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar2;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x170);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (!bVar1) {
    return;
  }
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_01);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x178),pSVar2);
  return;
}


/* ArtifactBeeEntity::CheckTargetOutOfOriginalPosition() */

bool __thiscall ArtifactBeeEntity::CheckTargetOutOfOriginalPosition(ArtifactBeeEntity *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x170));
  bVar1 = false;
  if (bVar2) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    fVar6 = *(float *)(this + 0x178);
    fVar5 = *pfVar4;
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    bVar1 = (float)iVar3 < ABS(fVar5 - fVar6);
  }
  return bVar1;
}


/* ArtifactBeeEntity::onUpdate() */

void __thiscall ArtifactBeeEntity::onUpdate(ArtifactBeeEntity *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  StateMachine<ABEState>::UpdateState((StateMachine<ABEState> *)(this + 0xb0));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
  if (!bVar1) {
    return;
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
  ;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::onPostLoad() */

void __thiscall ArtifactBeeEntity::onPostLoad(ArtifactBeeEntity *this)

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
    Delegate4<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_38,aCStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactBeeEntity::ArtifactBeeEntity() */

void __thiscall ArtifactBeeEntity::ArtifactBeeEntity(ArtifactBeeEntity *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06999180;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactBeeEntity_069993f8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  StateMachine<ABEState>::StateMachine((StateMachine<ABEState> *)(this + 0xb0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x150));
  DVec3::DVec3((DVec3 *)(this + 0x158));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  DVec3::DVec3((DVec3 *)(this + 0x178));
  this[0x168] = (ArtifactBeeEntity)0x0;
  this[0x194] = (ArtifactBeeEntity)0x0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 400) = 0;
  return;
}


/* ArtifactBeeEntity::StaticNew() */

ArtifactBeeEntity * ArtifactBeeEntity::StaticNew(void)

{
  ArtifactBeeEntity *this;
  
  this = ::operator_new(0x198);
  ArtifactBeeEntity(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::onEnterState_ATTACK(ABEState) */

void ArtifactBeeEntity::onEnterState_ATTACK(RealObject *param_1)

{
  char cVar1;
  PopAnimRig *pPVar2;
  long *plVar3;
  string *__n;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  param_1[0x168] = (RealObject)0x0;
  __n = asStack_58;
  std::string::string(asStack_70,"attack1");
  nop();
  switch(*(undefined4 *)(param_1 + 0x16c)) {
  case 0:
  case 3:
    std::string::append(asStack_70,"attack1",(size_t)__n);
    break;
  case 1:
  case 4:
    std::string::append(asStack_70,"attack2",(size_t)__n);
    break;
  case 2:
  case 5:
    std::string::append(asStack_70,"attack3",(size_t)__n);
  }
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAttackAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar2,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_58,"Play_Throw");
  RealObject::PlayPositionalSound(param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  cVar1 = IsBig((ArtifactBeeEntity *)param_1);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
    (**(code **)(*plVar3 + 0x80))(0x40000000);
  }
  std::string::~string(asStack_70);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::onEnterState_FLYAWAY(ABEState) */

void ArtifactBeeEntity::onEnterState_FLYAWAY
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ActionSubSystem *pAVar5;
  float *pfVar6;
  PopAnimRig *pPVar7;
  char *__s;
  ActionSubSystem *pAVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  RtMixedPtr aRStack_98 [8];
  RtId aRStack_90 [8];
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  float local_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_1);
  local_78 = *puVar4;
  local_70 = *(undefined4 *)(puVar4 + 1);
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)&local_68);
  switch(*(undefined4 *)(param_1 + 0x16c)) {
  case 0:
  case 3:
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_88);
    fVar9 = (float)local_78;
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar10 = local_78._4_4_;
    local_88 = fVar9 + (float)iVar2 * 2.0;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_84 = fVar10 + (float)iVar2 * 1.5;
    local_60 = CONCAT44(fStack_84,local_88);
    local_58 = local_60;
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_80,fVar9 + (float)iVar2 * 2.5,fVar10 - (float)iVar3 * 0.5);
    local_68 = local_80;
    break;
  case 1:
  case 4:
    fVar10 = *(float *)(param_1 + 0x158);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar9 = *(float *)(param_1 + 0x15c);
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_80,fVar10 - (float)iVar2 * 1.5,fVar9 - (float)iVar3);
    local_68 = local_80;
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_80);
    fVar9 = (float)local_78;
    local_80 = (float)local_78 + (local_68 - (float)local_78) * 0.5;
    pfVar6 = eastl::max_alt<float>((float *)((long)&local_78 + 4),&fStack_64);
    fVar11 = *pfVar6;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fVar10 = 1.8;
    goto LAB_04caef9c;
  case 2:
  case 5:
    fVar9 = *(float *)(param_1 + 0x158);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar10 = *(float *)(param_1 + 0x15c);
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_80,fVar9 - (float)iVar2,fVar10 - (float)iVar3 * 1.5);
    local_68 = local_80;
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_80);
    fVar9 = (float)local_78;
    local_80 = (float)local_78 + (local_68 - (float)local_78) * 0.5;
    pfVar6 = eastl::max_alt<float>((float *)((long)&local_78 + 4),&fStack_64);
    fVar11 = *pfVar6;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fVar10 = 1.2;
LAB_04caef9c:
    fStack_7c = fVar11 + fVar10 * (float)iVar2;
    local_60 = CONCAT44(fStack_7c,local_80);
    local_58 = local_60;
    break;
  default:
    fVar9 = (float)local_78;
  }
  this = (RtWeakPtr *)(param_1 + 0xa8);
  if (fVar9 <= local_68) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (!bVar1) goto LAB_04caed84;
    pPVar7 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    __s = "idle1";
  }
  else {
    param_1[0x168] =
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          )0x1;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (!bVar1) goto LAB_04caed84;
    pPVar7 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    __s = "idle2";
  }
  std::string::string((string *)&local_80,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
  PopAnimRig::PlayAndContinue
            (pPVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_80,0,(DummyInit *)aRStack_50);
  std::string::~string((string *)&local_80);
  nop();
LAB_04caed84:
  pAVar8 = (ActionSubSystem *)FUN_04cab0b4(0x3fc00000,0x40200000);
  pAVar5 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)aRStack_a0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
  std::string::string((string *)&local_88,"onFlyAwayDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_90,
             (string *)&local_88);
  ActionSubSystem::AddActionBezierTo
            (pAVar8,pAVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_80,(_ccBezierConfig *)&local_68,
             aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_88);
  nop();
  Sexy::RtId::~RtId(aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::onEnterState_TURNBACK(ABEState) */

void ArtifactBeeEntity::onEnterState_TURNBACK
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  float *pfVar2;
  ActionSubSystem *pAVar3;
  PopAnimRig *pPVar4;
  char *__s;
  ActionSubSystem *pAVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtMixedPtr aRStack_88 [8];
  RtId aRStack_80 [8];
  string asStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_1);
  fVar6 = *pfVar2;
  fVar7 = pfVar2[1];
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)&local_68);
  if (*(uint *)(param_1 + 0x16c) < 6) {
    switch(*(uint *)(param_1 + 0x16c)) {
    case 0:
    case 3:
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,fVar6,fVar7);
      local_60 = local_70;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,fVar6,fVar7);
      local_58 = local_70;
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_70,*(float *)(param_1 + 0x158) - 10.0,
                 *(float *)(param_1 + 0x15c));
      local_68 = local_70;
      break;
    default:
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,fVar6,fVar7);
      local_60 = local_70;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,fVar6,fVar7);
      local_58 = local_70;
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_70,*(float *)(param_1 + 0x158) - 25.0,
                 *(float *)(param_1 + 0x15c));
      local_68 = local_70;
    }
  }
  this = (RtWeakPtr *)(param_1 + 0xa8);
  if (fVar6 <= (float)local_68) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (!bVar1) goto LAB_04caf1f4;
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    __s = "idle1";
  }
  else {
    param_1[0x168] =
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          )0x1;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (!bVar1) goto LAB_04caf1f4;
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    __s = "idle2";
  }
  std::string::string((string *)&local_70,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
  PopAnimRig::PlayAndContinue
            (pPVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_70,0,(DummyInit *)aRStack_50);
  std::string::~string((string *)&local_70);
  nop();
LAB_04caf1f4:
  pAVar5 = (ActionSubSystem *)FUN_04cab0b4(0x3fcccccd,0x40266666);
  pAVar3 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)aRStack_90);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
  std::string::string(asStack_78,"onTurnBackDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_80,asStack_78)
  ;
  ActionSubSystem::AddActionBezierTo
            (pAVar5,pAVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_70,(_ccBezierConfig *)&local_68,
             aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_78);
  nop();
  Sexy::RtId::~RtId(aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::StaticClassInit() */

void ArtifactBeeEntity::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ABEState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ABEState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ArtifactBeeEntity");
      (*pcVar4)(plVar1,asStack_150,FUN_04cb3ff8,0x198,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ABEState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1d8);
  Sexy::Delegate1<ABEState>::Delegate1<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(ABEState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e0);
  Sexy::Delegate0::Delegate0<ArtifactBeeEntity,void(ArtifactBeeEntity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e8);
  Sexy::Delegate1<ABEState>::Delegate1<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(ABEState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ABEState_INIT");
  StateDefinition<ABEState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04cb38e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f0);
  Sexy::Delegate1<ABEState>::Delegate1<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(ABEState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f8);
  Sexy::Delegate0::Delegate0<ArtifactBeeEntity,void(ArtifactBeeEntity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x200);
  Sexy::Delegate1<ABEState>::Delegate1<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(ABEState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ABEState_FLYTOTARGET");
  StateDefinition<ABEState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04cb38e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x208);
  Sexy::Delegate1<ABEState>::Delegate1<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(ABEState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x210);
  Sexy::Delegate0::Delegate0<ArtifactBeeEntity,void(ArtifactBeeEntity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x218);
  Sexy::Delegate1<ABEState>::Delegate1<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(ABEState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ABEState_ATTACK");
  StateDefinition<ABEState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04cb38e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x220);
  Sexy::Delegate1<ABEState>::Delegate1<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(ABEState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)&DAT_00000228);
  Sexy::Delegate0::Delegate0<ArtifactBeeEntity,void(ArtifactBeeEntity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x230);
  Sexy::Delegate1<ABEState>::Delegate1<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(ABEState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ABEState_FLYAWAY");
  StateDefinition<ABEState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04cb38e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x238);
  Sexy::Delegate1<ABEState>::Delegate1<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(ABEState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x240);
  Sexy::Delegate0::Delegate0<ArtifactBeeEntity,void(ArtifactBeeEntity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x248);
  Sexy::Delegate1<ABEState>::Delegate1<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(ABEState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ABEState_TURNBACK");
  StateDefinition<ABEState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04cb38e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x250);
  Sexy::Delegate1<ABEState>::Delegate1<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(ABEState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x258);
  Sexy::Delegate0::Delegate0<ArtifactBeeEntity,void(ArtifactBeeEntity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x260);
  Sexy::Delegate1<ABEState>::Delegate1<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(ABEState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ABEState_END");
  StateDefinition<ABEState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04cb38e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactBeeEntity::StaticGetClass() */

long * ArtifactBeeEntity::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactBeeEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactBeeEntity::GetClass() const */

long * ArtifactBeeEntity::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactBeeEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::setState(ABEState) */

void __thiscall ArtifactBeeEntity::setState(ArtifactBeeEntity *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<ABEState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<ABEState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<ABEState>::GetStateDefinition
                     ((StateMachineTable<ABEState> *)pSVar2,param_2);
  StateDefinition<ABEState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<ABEState>::SetContext(aSStack_a8,this);
  StateMachine<ABEState>::SetState
            ((StateMachine<ABEState> *)(this + 0xb0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::ArtifactBeeEntityInitialize(ArtifactBeehive::ArtifactBeeType, float, float,
   float, bool) */

void __thiscall
ArtifactBeeEntity::ArtifactBeeEntityInitialize
          (float param_1,float param_2,undefined4 param_3,ArtifactBeeEntity *this,undefined4 param_5
          ,ArtifactBeeEntity param_6)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  uint uVar3;
  TimeChallengeEndLevelUI *this_01;
  PopAnimRig *pPVar4;
  SexyVector3 *pSVar5;
  ResourceInfo *pRVar6;
  RtClass *pRVar7;
  long *plVar8;
  char *__s;
  float fVar9;
  RtWeakPtr aRStack_58 [8];
  string asStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x16c) = param_5;
  local_8 = ___stack_chk_guard;
  cVar1 = IsBig(this);
  fVar9 = 1.0;
  if (cVar1 != '\0') {
    fVar9 = 2.0;
  }
  this[0x194] = param_6;
  this_00 = (RtWeakPtr *)(this + 0xa8);
  *(undefined4 *)(this + 0x18c) = param_3;
  *(float *)(this + 0x184) = fVar9 * param_1;
  *(float *)(this + 0x188) = fVar9 * param_2;
  *(undefined4 *)(this + 400) = 0;
  setState(this,0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar8 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    uVar3 = *(uint *)(this + 0x16c);
    if (uVar3 < 3) goto LAB_04cb5280;
LAB_04cb50d8:
    if (2 < uVar3 - 3) goto LAB_04cb50ec;
    __s = "POPANIM_EFFECTS_ARTIFACT_BEEHIVE_PLANE_BIG";
  }
  else {
    uVar3 = *(uint *)(this + 0x16c);
    if (2 < uVar3) goto LAB_04cb50d8;
LAB_04cb5280:
    __s = "POPANIM_EFFECTS_ARTIFACT_BEEHIVE_PLANE";
  }
  std::string::string(asStack_50,__s);
  GetPAMByName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
  pRVar7 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar6,pRVar7);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
LAB_04cb50ec:
  this_01 = (TimeChallengeEndLevelUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ArtifactBeeEntity,void(ArtifactBeeEntity::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,asStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_50,"idle1");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,asStack_50,0,aDStack_38);
  std::string::~string(asStack_50);
  nop();
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x158),pSVar5);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_50,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x178),(SexyVector3 *)asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::MoveToTarget(Sexy::SexyVector2) */

void ArtifactBeeEntity::MoveToTarget
               (undefined4 param_1,undefined4 param_2,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_3)

{
  RtWeakPtr *this;
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ActionSubSystem *pAVar4;
  float *pfVar5;
  PopAnimRig *pPVar6;
  char *__s;
  undefined4 uVar7;
  float fVar8;
  ActionSubSystem *pAVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_b8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  RtMixedPtr aRStack_98 [8];
  RtId aRStack_90 [8];
  string asStack_88 [8];
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  uVar10 = *(undefined4 *)(param_3 + 0x1c);
  local_8 = ___stack_chk_guard;
  local_b8 = CONCAT44(param_2,param_1);
  uVar7 = FUN_04cab200(*(undefined4 *)(param_3 + 0x18),uVar10,*(undefined4 *)(param_3 + 0x20));
  *(undefined4 *)(param_3 + 0x150) = uVar7;
  *(undefined4 *)(param_3 + 0x154) = uVar10;
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_3);
  local_78 = *puVar3;
  local_70 = *(undefined4 *)(puVar3 + 1);
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)&local_68);
  if (*(uint *)(param_3 + 0x16c) < 6) {
    switch(*(uint *)(param_3 + 0x16c)) {
    default:
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_80);
      fVar8 = (float)local_78;
      local_80 = (float)local_78 + ((float)local_b8 - (float)local_78) * 0.5;
      pfVar5 = eastl::max_alt<float>((float *)((long)&local_78 + 4),(float *)((long)&local_b8 + 4));
      fVar11 = *pfVar5;
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      fVar12 = 1.5;
      break;
    case 1:
    case 4:
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_80);
      fVar8 = (float)local_78;
      local_80 = (float)local_78 + ((float)local_b8 - (float)local_78) * 0.5;
      pfVar5 = eastl::max_alt<float>((float *)((long)&local_78 + 4),(float *)((long)&local_b8 + 4));
      fVar11 = *pfVar5;
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      fVar12 = 3.5;
      break;
    case 2:
    case 5:
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_80);
      fVar8 = (float)local_78;
      local_80 = (float)local_78 + ((float)local_b8 - (float)local_78) * 0.5;
      pfVar5 = eastl::min_alt<float>((float *)((long)&local_78 + 4),(float *)((long)&local_b8 + 4));
      fVar12 = *pfVar5;
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      local_68 = local_b8;
      fStack_7c = fVar12 - (float)iVar2 * 1.5;
      local_60 = CONCAT44(fStack_7c,local_80);
      local_58 = local_60;
      goto LAB_04cb5334;
    }
    fStack_7c = fVar11 + fVar12 * (float)iVar2;
    local_60 = CONCAT44(fStack_7c,local_80);
    local_68 = local_b8;
    local_58 = local_60;
  }
  else {
    fVar8 = (float)local_78;
  }
LAB_04cb5334:
  this = (RtWeakPtr *)(param_3 + 0xa8);
  if (fVar8 <= (float)local_68) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (!bVar1) goto LAB_04cb5364;
    pPVar6 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    __s = "idle1";
  }
  else {
    param_3[0x168] =
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          )0x1;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (!bVar1) goto LAB_04cb5364;
    pPVar6 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    __s = "idle2";
  }
  std::string::string((string *)&local_80,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
  PopAnimRig::PlayAndContinue
            (pPVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_80,0,(DummyInit *)aRStack_50);
  std::string::~string((string *)&local_80);
  nop();
LAB_04cb5364:
  setState((ArtifactBeeEntity *)param_3,1);
  pAVar9 = (ActionSubSystem *)FUN_04cab0b4(0x3fcccccd,0x40266666);
  pAVar4 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_80,(RtWeakPtrBase *)aRStack_a0);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_98);
  std::string::string(asStack_88,"onFlyToTargetDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_90,asStack_88)
  ;
  ActionSubSystem::AddActionBezierTo
            (pAVar9,pAVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_80,(_ccBezierConfig *)&local_68,
             aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_88);
  nop();
  Sexy::RtId::~RtId(aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactBeeEntity::onFlyToTargetDone(BoardEntity*) */

void ArtifactBeeEntity::onFlyToTargetDone(BoardEntity *param_1)

{
  if (param_1[0x194] == (BoardEntity)0x0) {
    setState((ArtifactBeeEntity *)param_1,2);
    return;
  }
  setState((ArtifactBeeEntity *)param_1,5);
  return;
}


/* ArtifactBeeEntity::onFlyAwayDone(BoardEntity*) */

void ArtifactBeeEntity::onFlyAwayDone(BoardEntity *param_1)

{
  setState((ArtifactBeeEntity *)param_1,4);
  return;
}


/* ArtifactBeeEntity::onTurnBackDone(BoardEntity*) */

void ArtifactBeeEntity::onTurnBackDone(BoardEntity *param_1)

{
  setState((ArtifactBeeEntity *)param_1,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::onAttackAnimDone(std::string const&) */

void ArtifactBeeEntity::onAttackAnimDone(string *param_1)

{
  RtWeakPtr *this;
  char cVar1;
  bool bVar2;
  PopAnimRig *pPVar3;
  long *plVar4;
  string *__n;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this = (RtWeakPtr *)(param_1 + 0xa8);
  local_8 = ___stack_chk_guard;
  cVar1 = IsBig((ArtifactBeeEntity *)param_1);
  if (cVar1 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar4 + 0x80))(0x3f800000);
  }
  if (*(float *)(param_1 + 400) < *(float *)(param_1 + 0x188)) {
    __n = asStack_58;
    std::string::string(asStack_70,"attack1");
    nop();
    switch(*(undefined4 *)(param_1 + 0x16c)) {
    case 0:
    case 3:
      std::string::append(asStack_70,"attack1",(size_t)__n);
      break;
    case 1:
    case 4:
      std::string::append(asStack_70,"attack2",(size_t)__n);
      break;
    case 2:
    case 5:
      std::string::append(asStack_70,"attack3",(size_t)__n);
    }
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAttackAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar3,asStack_70,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::string(asStack_58,"Play_Throw");
    RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    cVar1 = IsBig((ArtifactBeeEntity *)param_1);
    if (cVar1 == '\0') {
      std::string::~string(asStack_70);
    }
    else {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      (**(code **)(*plVar4 + 0x80))(0x40000000);
      std::string::~string(asStack_70);
    }
  }
  else {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar2) {
      pPVar3 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      std::string::string(asStack_58,"idle1");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50)
      ;
      PopAnimRig::PlayAndContinue(pPVar3,asStack_58,0,(DummyInit *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
    }
    setState((ArtifactBeeEntity *)param_1,3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::setStateSerialization(int) */

void __thiscall ArtifactBeeEntity::setStateSerialization(ArtifactBeeEntity *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<ABEState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<ABEState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<ABEState>::GetStateDefinition
                     ((StateMachineTable<ABEState> *)pSVar2,param_1);
  StateDefinition<ABEState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<ABEState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0xb0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::FindTarget() */

void ArtifactBeeEntity::FindTarget(void)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *extraout_x0;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_50;
  long *local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  Sexy::Point::Point((Point *)&local_50,0,2);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)local_48,(Point *)&local_50);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar3,uVar4,(__normal_iterator *)local_48);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  while( true ) {
    local_48[0] = (long *)std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)local_48);
    if (!bVar1) break;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    nop();
    if ((((extraout_x0 != (long *)0x0) && (cVar2 = RealObject::IsOnTeam(), cVar2 != '\0')) &&
        (cVar2 = (**(code **)(*extraout_x0 + 0x328))(extraout_x0), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*extraout_x0 + 0x330))(extraout_x0), cVar2 == '\0')) {
      local_48[0] = extraout_x0;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,
                 (BoardEntity **)local_48);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  lVar5 = FUN_04cab060(local_38,local_30);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    puVar6 = (undefined8 *)FUN_04cab06c(local_38,0);
    uVar3 = *puVar6;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBeeEntity::onAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void __thiscall
ArtifactBeeEntity::onAnimCommand
          (ArtifactBeeEntity *this,string *param_1,float param_2,string *param_3,string *param_4)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  RtObject *pRVar3;
  Zombie *pZVar4;
  undefined8 uVar5;
  long *plVar6;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar7;
  long lVar8;
  PopAnimRig *pPVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 in_s1;
  float fVar12;
  float fVar13;
  Point aPStack_b0 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  DummyInit aDStack_98 [48];
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,2);
  if ((cVar1 != '\0') &&
     (((bVar2 = std::operator==(param_3,"begin_fire1"), bVar2 ||
       (bVar2 = std::operator==(param_3,"begin_fire2"), bVar2)) ||
      (bVar2 = std::operator==(param_3,"begin_fire3"), bVar2)))) {
    this_00 = (RtWeakPtr *)(this + 0x170);
    std::string::string(asStack_68,"Play_Plant_Pokra_Attack_01_Loop");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_68,0.0);
    std::string::~string(asStack_68);
    nop();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
      cVar1 = (**(code **)(*(long *)pZVar4 + 0x328))();
      if (cVar1 == '\0') {
        pRVar3 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
        cVar1 = (**(code **)(*(long *)pZVar4 + 0x330))();
        if ((cVar1 == '\0') && (cVar1 = CheckTargetOutOfOriginalPosition(this), cVar1 == '\0')) {
          fVar12 = *(float *)(this + 0x184);
          pRVar3 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar3);
          if (bVar2) {
            uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            cVar1 = RealObject::IsOnTeam(uVar5,2);
            if (cVar1 != '\0') {
              plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                         ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              pcVar10 = *(code **)(*plVar6 + 0x110);
              Sexy::Point::Point(aPStack_b0,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_a8,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)(float)(int)fVar12,local_a8,local_a4,asStack_68,aPStack_b0,0)
              ;
              (*pcVar10)(plVar6,asStack_68);
              DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
              *(float *)(this + 400) = *(float *)(this + 400) + (float)(int)fVar12;
              cVar1 = IsBig(this);
              if ((cVar1 != '\0') && (0.0 < *(float *)(this + 0x18c))) {
                pRVar3 = (RtObject *)
                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
                pEVar7 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                         Zombie::GetConditionTracker(pZVar4);
                lVar8 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar7,0x4c);
                fVar13 = *(float *)(lVar8 + 0xc);
                pEVar7 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                         Zombie::GetConditionTracker(pZVar4);
                lVar8 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar7,0x4c);
                fVar12 = *(float *)(lVar8 + 0x14);
                if (fVar12 < 5.0) {
                  fVar13 = fVar13 + *(float *)(this + 0x18c);
                  fVar12 = fVar12 + 1.0;
                }
                Zombie::ApplyCondition((Zombie *)0x40a00000,0,pZVar4,0x4c,1);
                Zombie::SetConditionTracker(fVar13,pZVar4,0x4c);
                Zombie::SetExtraConditionTracker2(fVar12,pZVar4,0x4c);
              }
            }
          }
          goto LAB_04cb5d18;
        }
      }
    }
    pRVar3 = (RtObject *)FindTarget();
    if (pRVar3 == (RtObject *)0x0) {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xa8));
      if (bVar2) {
        pPVar9 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
        std::string::string(asStack_68,"idle1");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_98);
        PopAnimRig::PlayAndContinue(pPVar9,asStack_68,0,aDStack_98);
        std::string::~string(asStack_68);
        nop();
      }
      setState(this,3);
    }
    else {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_68,(RtWeakPtrBase *)&local_a8);
      SetTarget(this,asStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a8);
      pZVar4 = Sexy::RtObject::Cast<Zombie>(pRVar3);
      (**(code **)(*(long *)pZVar4 + 0x3a0))((RtWeakPtr<Sexy::ResourceInfo> *)&local_a8);
      uVar11 = *(undefined4 *)(this + 0x16c);
      Sexy::Insets::Insets((Insets *)asStack_68,(Insets *)&local_a8);
      uVar11 = CalcMoveTarget(this,uVar11,asStack_68);
      MoveToTarget(uVar11,in_s1,this);
    }
  }
LAB_04cb5d18:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

