// Class: HorsebeanPlane


/* HorsebeanPlane::SetRayTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall HorsebeanPlane::SetRayTarget(HorsebeanPlane *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x180),param_2);
  return;
}


/* HorsebeanPlane::CalcRenderOrder() const */

undefined8 HorsebeanPlane::CalcRenderOrder(void)

{
  return 900000;
}


/* non-virtual thunk to HorsebeanPlane::CalcRenderOrder() const */

void __thiscall HorsebeanPlane::CalcRenderOrder(HorsebeanPlane *this)

{
  CalcRenderOrder();
  return;
}


/* HorsebeanPlane::isInState(HBPState) const */

bool __thiscall HorsebeanPlane::isInState(HorsebeanPlane *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_042270b4(*(undefined4 *)(this + 0xb0));
  return iVar1 == param_2;
}


/* HorsebeanPlane::getHorsebeanPlaneStateSerialization() */

void __thiscall HorsebeanPlane::getHorsebeanPlaneStateSerialization(HorsebeanPlane *this)

{
  FUN_042270b4(*(undefined4 *)(this + 0xb0));
  return;
}


/* HorsebeanPlane::~HorsebeanPlane() */

void __thiscall HorsebeanPlane::~HorsebeanPlane(HorsebeanPlane *this)

{
  *(undefined ***)this = &PTR_GetClass_0680fa50;
  *(undefined ***)(this + 0x10) = &PTR__HorsebeanPlane_0680fcc8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x180));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to HorsebeanPlane::~HorsebeanPlane() */

void __thiscall HorsebeanPlane::~HorsebeanPlane(HorsebeanPlane *this)

{
  ~HorsebeanPlane(this + -0x10);
  return;
}


/* HorsebeanPlane::~HorsebeanPlane() */

void __thiscall HorsebeanPlane::~HorsebeanPlane(HorsebeanPlane *this)

{
  ~HorsebeanPlane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HorsebeanPlane::~HorsebeanPlane() */

void __thiscall HorsebeanPlane::~HorsebeanPlane(HorsebeanPlane *this)

{
  ~HorsebeanPlane(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HorsebeanPlane::onDraw(Sexy::Graphics*) */

void __thiscall HorsebeanPlane::onDraw(HorsebeanPlane *this,Graphics *param_1)

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
  fVar3 = (float)FUN_04227168(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  (**(code **)(*(long *)this + 0xf8))(this,param_1);
  fVar8 = *(float *)(param_1 + 0x20);
  fVar4 = (float)FUN_04227404(fVar3 + 20.0);
  fVar9 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar8 +
       (float)(int)((fVar4 - fVar8) * *(float *)(param_1 + 0x18));
  fVar4 = (float)FUN_04227404((int)uVar7);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar9 +
       (float)(int)((fVar4 - fVar9) * *(float *)(param_1 + 0x1c));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    uVar5 = FUN_04227404(0xc2b40000);
    uVar6 = FUN_04227404(0xc2700000);
    FUN_04226f6c(uVar5,uVar6,auStack_28,auStack_1c);
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


/* HorsebeanPlane::onUpdate() */

void __thiscall HorsebeanPlane::onUpdate(HorsebeanPlane *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  StateMachine<HBPState>::UpdateState((StateMachine<HBPState> *)(this + 0xb0));
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


/* HorsebeanPlane::HorsebeanPlane() */

void __thiscall HorsebeanPlane::HorsebeanPlane(HorsebeanPlane *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0680fa50;
  *(undefined ***)(this + 0x10) = &PTR__HorsebeanPlane_0680fcc8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  StateMachine<HBPState>::StateMachine((StateMachine<HBPState> *)(this + 0xb0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x150));
  DVec3::DVec3((DVec3 *)(this + 0x160));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x180));
  this[0x15c] = (HorsebeanPlane)0x0;
  *(undefined4 *)(this + 0x17c) = 1;
  *(undefined4 *)(this + 0x158) = 0;
  return;
}


/* HorsebeanPlane::StaticNew() */

HorsebeanPlane * HorsebeanPlane::StaticNew(void)

{
  HorsebeanPlane *this;
  
  this = ::operator_new(0x188);
  HorsebeanPlane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HorsebeanPlane::onEnterState_FLYAWAY(HBPState) */

void HorsebeanPlane::onEnterState_FLYAWAY
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ActionSubSystem *pAVar5;
  float *pfVar6;
  PopAnimRig *pPVar7;
  char *__s;
  float fVar8;
  float fVar9;
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
  iVar2 = *(int *)(param_1 + 0x16c);
  if (iVar2 == 1) {
    fVar9 = *(float *)(param_1 + 0x160);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar8 = *(float *)(param_1 + 0x164);
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_80,fVar9 - (float)iVar2 * 1.5,fVar8 - (float)iVar3);
    local_68 = local_80;
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_80);
    fVar8 = (float)local_78;
    local_80 = (float)local_78 + (local_68 - (float)local_78) * 0.5;
    pfVar6 = eastl::max_alt<float>((float *)((long)&local_78 + 4),&fStack_64);
    fVar9 = *pfVar6;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_7c = fVar9 + (float)iVar2 * 1.8;
    local_60 = CONCAT44(fStack_7c,local_80);
    local_58 = local_60;
LAB_04228014:
    if (local_68 < fVar8) goto LAB_04228028;
LAB_042281f4:
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xa8));
    if (!bVar1) goto LAB_04228040;
    pPVar7 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
    __s = "idle1";
  }
  else {
    if (iVar2 == 0) {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_88);
      fVar8 = (float)local_78;
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      fVar9 = local_78._4_4_;
      local_88 = fVar8 + (float)iVar2 * 2.0;
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      fStack_84 = fVar9 + (float)iVar2 * 1.5;
      local_60 = CONCAT44(fStack_84,local_88);
      local_58 = local_60;
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_80,fVar8 + (float)iVar2 * 2.5,fVar9 - (float)iVar3 * 0.5);
      local_68 = local_80;
      goto LAB_04228014;
    }
    if (iVar2 != 2) {
      fVar8 = (float)local_78;
      goto LAB_04228014;
    }
    fVar8 = *(float *)(param_1 + 0x160);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar9 = *(float *)(param_1 + 0x164);
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_80,fVar8 - (float)iVar2,fVar9 - (float)iVar3 * 1.5);
    local_68 = local_80;
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_80);
    fVar8 = (float)local_78;
    local_80 = (float)local_78 + (local_68 - (float)local_78) * 0.5;
    pfVar6 = eastl::max_alt<float>((float *)((long)&local_78 + 4),&fStack_64);
    fVar9 = *pfVar6;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_7c = fVar9 + (float)iVar2 * 1.2;
    local_60 = CONCAT44(fStack_7c,local_80);
    local_58 = local_60;
    if (fVar8 <= local_68) goto LAB_042281f4;
LAB_04228028:
    param_1[0x15c] =
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          )0x1;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xa8));
    if (!bVar1) goto LAB_04228040;
    pPVar7 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
    __s = "idle2";
  }
  std::string::string((string *)&local_80,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
  PopAnimRig::PlayAndContinue(pPVar7,(string *)&local_80,0,(DummyInit *)aRStack_50);
  std::string::~string((string *)&local_80);
  nop();
LAB_04228040:
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
            ((ActionSubSystem *)0x3fc00000,pAVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_80,
             (_ccBezierConfig *)&local_68,aRStack_50);
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
/* HorsebeanPlane::onEnterState_TURNBACK(HBPState) */

void HorsebeanPlane::onEnterState_TURNBACK
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  RtWeakPtr *this;
  int iVar1;
  bool bVar2;
  float *pfVar3;
  ActionSubSystem *pAVar4;
  PopAnimRig *pPVar5;
  char *__s;
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
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_1);
  fVar6 = *pfVar3;
  fVar7 = pfVar3[1];
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)&local_68);
  iVar1 = *(int *)(param_1 + 0x16c);
  if (iVar1 == 1) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,fVar6,fVar7);
    local_60 = local_70;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,fVar6,fVar7);
    local_58 = local_70;
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_70,*(float *)(param_1 + 0x160) - 25.0,*(float *)(param_1 + 0x164)
              );
    local_68 = local_70;
  }
  else if (iVar1 == 0) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,fVar6,fVar7);
    local_60 = local_70;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,fVar6,fVar7);
    local_58 = local_70;
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_70,*(float *)(param_1 + 0x160) - 10.0,*(float *)(param_1 + 0x164)
              );
    local_68 = local_70;
  }
  else if (iVar1 == 2) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,fVar6,fVar7);
    local_60 = local_70;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,fVar6,fVar7);
    local_58 = local_70;
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_70,*(float *)(param_1 + 0x160) - 25.0,*(float *)(param_1 + 0x164)
              );
    local_68 = local_70;
  }
  this = (RtWeakPtr *)(param_1 + 0xa8);
  if (fVar6 <= (float)local_68) {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (!bVar2) goto LAB_0422844c;
    pPVar5 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    __s = "idle1";
  }
  else {
    param_1[0x15c] =
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          )0x1;
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (!bVar2) goto LAB_0422844c;
    pPVar5 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    __s = "idle2";
  }
  std::string::string((string *)&local_70,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
  PopAnimRig::PlayAndContinue
            (pPVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_70,0,(DummyInit *)aRStack_50);
  std::string::~string((string *)&local_70);
  nop();
LAB_0422844c:
  pAVar4 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
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
            ((ActionSubSystem *)0x3fc00000,pAVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_70,
             (_ccBezierConfig *)&local_68,aRStack_50);
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
/* HorsebeanPlane::onEnterState_ATTACK(HBPState) */

void HorsebeanPlane::onEnterState_ATTACK(RealObject *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  PopAnimRig *pPVar4;
  string *__n;
  float fVar5;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  iVar3 = *(int *)(param_1 + 0x17c);
  local_8 = ___stack_chk_guard;
  param_1[0x15c] = (RealObject)0x0;
  if (iVar3 < 5) {
    if (iVar3 != 2) goto LAB_04228738;
LAB_04228908:
    fVar5 = (float)Sexy::Rand(1.0);
    if (0.2 <= fVar5) {
      iVar3 = *(int *)(param_1 + 0x17c);
      goto LAB_04228738;
    }
  }
  else {
    fVar5 = (float)Sexy::Rand(1.0);
    if (fVar5 < 0.23) {
      bVar1 = true;
      bVar2 = false;
      goto LAB_04228748;
    }
    iVar3 = *(int *)(param_1 + 0x17c);
    if (iVar3 == 2) goto LAB_04228908;
LAB_04228738:
    if ((iVar3 < 3) || (fVar5 = (float)Sexy::Rand(1.0), 0.4 <= fVar5)) {
      bVar1 = false;
      bVar2 = false;
      goto LAB_04228748;
    }
  }
  bVar1 = false;
  bVar2 = true;
LAB_04228748:
  __n = asStack_58;
  std::string::string(asStack_70,"attack1");
  nop();
  iVar3 = *(int *)(param_1 + 0x16c);
  if (iVar3 == 1) {
    if (bVar1) {
      std::string::append(asStack_70,"attack5",(size_t)__n);
    }
    else if (bVar2) {
      std::string::append(asStack_70,"attack2_1",(size_t)__n);
    }
    else {
      std::string::append(asStack_70,"attack2",(size_t)__n);
    }
  }
  else if (iVar3 == 0) {
    if (bVar1) {
      std::string::append(asStack_70,"attack4",(size_t)__n);
    }
    else if (bVar2) {
      std::string::append(asStack_70,"attack1_1",(size_t)__n);
    }
    else {
      std::string::append(asStack_70,"attack1",(size_t)__n);
    }
  }
  else if (iVar3 == 2) {
    if (bVar1) {
      std::string::append(asStack_70,"attack6",(size_t)__n);
    }
    else if (bVar2) {
      std::string::append(asStack_70,"attack3_1",(size_t)__n);
    }
    else {
      std::string::append(asStack_70,"attack3",(size_t)__n);
    }
  }
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAttackAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar4,asStack_70,0,aRStack_50);
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
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HorsebeanPlane::onEnterState_END(HBPState) */

void HorsebeanPlane::onEnterState_END(long *param_1)

{
  undefined *puVar1;
  bool bVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x2e));
  puVar1 = gMessageRouter;
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(param_1 + 0x2e));
    MessageRouter::Post<Plant*,int,Sexy::RtWeakPtr<Plant>,int>
              ((MessageRouter *)puVar1,Message::HorseBeanPlaneTurnBack,aRStack_10,(int)param_1[0x2f]
              );
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HorsebeanPlane::onAnimCommand(std::string const&, float, std::string const&, std::string const&)
    */

void HorsebeanPlane::onAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  RtWeakPtr *this;
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  float *pfVar6;
  ResourceInfo *pRVar7;
  Projectile *this_00;
  RayEntity *pRVar8;
  RtObject *pRVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 in_register_00005004;
  string asStack_98 [8];
  string asStack_90 [8];
  RtMixedPtrBase aRStack_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  RtName aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = isInState((HorsebeanPlane *)CONCAT44(in_register_00005004,param_2),param_1,2);
  if ((cVar3 == '\0') ||
     (((((bVar4 = std::operator==(param_4,"begin_fire1"), !bVar4 &&
         (bVar4 = std::operator==(param_4,"begin_fire2"), !bVar4)) &&
        (bVar4 = std::operator==(param_4,"begin_fire3"), !bVar4)) &&
       ((bVar4 = std::operator==(param_4,"begin_fire4"), !bVar4 &&
        (bVar4 = std::operator==(param_4,"begin_fire5"), !bVar4)))) &&
      (bVar4 = std::operator==(param_4,"begin_fire6"), !bVar4)))) goto LAB_04228b88;
  if ((*(int *)(param_1 + 0x17c) < 5) ||
     (((bVar4 = std::operator==(param_4,"begin_fire4"), !bVar4 &&
       (bVar4 = std::operator==(param_4,"begin_fire5"), !bVar4)) &&
      (bVar4 = std::operator==(param_4,"begin_fire6"), !bVar4)))) {
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string((string *)&local_80,"HorseBeanDefault");
    Sexy::ToWString((string *)&local_80);
    Sexy::RtName::RtName(aRStack_68,(wstring *)&local_78);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_88,uVar5,0xc,aRStack_68);
    Sexy::RtName::~RtName(aRStack_68);
    FUN_05476c50((Point *)&local_78);
    std::string::~string((string *)&local_80);
    nop();
    cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_88);
    if (cVar3 != '\0') {
      iVar1 = *(int *)(param_1 + 0x16c);
      if (iVar1 == 1) {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        Sexy::Point::Point((Point *)&local_78,(int)(*pfVar6 + 20.0),(int)(pfVar6[1] + 68.0));
        uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_88);
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x170));
        this_00 = (Projectile *)
                  Board::AddProjectile
                            ((Board *)(float)local_78,(float)local_74,0,uVar5,aRStack_68,pRVar7,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::SexyMath::DegToRad(-115.0);
        FUN_04227094(this_00 + 0xc4);
      }
      else if (iVar1 == 0) {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        Sexy::Point::Point((Point *)&local_78,(int)(*pfVar6 + 60.0),(int)(pfVar6[1] + 60.0));
        uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_88);
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x170));
        this_00 = (Projectile *)
                  Board::AddProjectile
                            ((Board *)(float)local_78,(float)local_74,0,uVar5,aRStack_68,pRVar7,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::SexyMath::DegToRad(-45.0);
        FUN_04227094(this_00 + 0xc4);
      }
      else {
        if (iVar1 != 2) {
          RealObject::JoinTeam((RealObject *)0x0,1);
          FUN_04227158(0x50);
          Projectile::SetShadow((Projectile *)0x0,false);
          EATextSquish::Vec3::Vec3((Vec3 *)&local_78,300.0,300.0,0.0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1000,0x4229144);
          (*pcVar2)();
        }
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        Sexy::Point::Point((Point *)&local_78,(int)(*pfVar6 + 15.0),(int)(pfVar6[1] + 65.0));
        uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_88);
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x170));
        this_00 = (Projectile *)
                  Board::AddProjectile
                            ((Board *)(float)local_78,(float)local_74,0,uVar5,aRStack_68,pRVar7,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::SexyMath::DegToRad(-105.0);
        FUN_04227094(this_00 + 0xc4);
      }
      RealObject::JoinTeam((RealObject *)this_00,1);
      FUN_04227158(this_00 + 0x50);
      Projectile::SetShadow(this_00,false);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_78,300.0,300.0,0.0);
      fVar11 = (float)FUN_04227090(*(undefined4 *)(this_00 + 0xc4));
      fVar12 = cosf(fVar11);
      fVar13 = (float)DVec3::getLength((DVec3 *)&local_78);
      fVar11 = sinf(fVar11);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,fVar13 * fVar12,-(fVar11 * fVar13),0.0);
      Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_68);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    goto LAB_04228b88;
  }
  EATextSquish::Vec3::Vec3((Vec3 *)&local_78,0.0,0.0,0.0);
  iVar1 = *(int *)(param_1 + 0x16c);
  if (iVar1 == 1) {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar13 = *pfVar6;
    fVar12 = pfVar6[1] + 38.0;
    fVar11 = 20.0;
LAB_04228eac:
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,fVar13 + fVar11,fVar12,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_78,(SexyVector3 *)aRStack_68);
  }
  else {
    if (iVar1 == 0) {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      fVar13 = *pfVar6;
      fVar12 = pfVar6[1] + 35.0;
      fVar11 = 25.0;
      goto LAB_04228eac;
    }
    if (iVar1 == 2) {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      fVar13 = *pfVar6;
      fVar12 = pfVar6[1] + 35.0;
      fVar11 = 15.0;
      goto LAB_04228eac;
    }
  }
  this = (RtWeakPtr *)(param_1 + 0x180);
  bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (!bVar4) goto LAB_04228b88;
  std::string::string(asStack_98,"animation");
  nop();
  std::string::string(asStack_90,"POPANIM_EFFECTS_HORSEBEAN_BOLT");
  nop();
  pRVar8 = GameObject::Create<RayEntity>();
  BoardEntity::PlaceOnBoard((SexyVector3 *)pRVar8);
  std::string::string((string *)&local_80,"POPANIM_EFFECTS_HORSEBEAN_BOLT_HIT");
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_88);
  RayEntity::Initialize
            ((RayEntity *)0x3ee66666,pRVar8,asStack_90,(string *)&local_80,asStack_98,
             (RtWeakPtr<Sexy::SoundResource> *)aRStack_68,1,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  std::string::~string((string *)&local_80);
  nop();
  FUN_0422714c(pRVar8 + 0x102);
  Sexy::Point::Point((Point *)aRStack_68,0,-0x1e);
  RayEntity::SetHitOffset(pRVar8,(RtWeakPtr<Sexy::SoundResource> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)this);
  RayEntity::InitiateWithTarget(pRVar8,(RtWeakPtr<Sexy::SoundResource> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar4) {
    pRVar9 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    bVar4 = Sexy::RtObject::IsA<Zombie>(pRVar9);
    if (!bVar4) {
      pRVar9 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      bVar4 = Sexy::RtObject::IsA<GridItem>(pRVar9);
      if (!bVar4) goto LAB_0422900c;
    }
    plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this);
    pcVar2 = *(code **)(*plVar10 + 0x110);
    Sexy::Point::Point((Point *)aRStack_88,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x457a0000,local_80,local_7c,
               (RtWeakPtr<Sexy::SoundResource> *)aRStack_68,
               (RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88,0);
    (*pcVar2)(plVar10,(RtWeakPtr<Sexy::SoundResource> *)aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
LAB_0422900c:
  std::string::~string(asStack_90);
  std::string::~string(asStack_98);
LAB_04228b88:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HorsebeanPlane::StaticClassInit() */

void HorsebeanPlane::StaticClassInit(void)

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
  Delegate1<HBPState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<HBPState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"HorsebeanPlane");
      (*pcVar4)(plVar1,asStack_150,FUN_04229cec,0x188,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<HBPState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1d8);
  Sexy::Delegate1<HBPState>::Delegate1<HorsebeanPlane,void(HorsebeanPlane::*)(HBPState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e0);
  Sexy::Delegate0::Delegate0<HorsebeanPlane,void(HorsebeanPlane::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e8);
  Sexy::Delegate1<HBPState>::Delegate1<HorsebeanPlane,void(HorsebeanPlane::*)(HBPState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"HBPState_INIT");
  StateDefinition<HBPState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_042295dc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f0);
  Sexy::Delegate1<HBPState>::Delegate1<HorsebeanPlane,void(HorsebeanPlane::*)(HBPState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f8);
  Sexy::Delegate0::Delegate0<HorsebeanPlane,void(HorsebeanPlane::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x200);
  Sexy::Delegate1<HBPState>::Delegate1<HorsebeanPlane,void(HorsebeanPlane::*)(HBPState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"HBPState_FLYTOTARGET");
  StateDefinition<HBPState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_042295dc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x208);
  Sexy::Delegate1<HBPState>::Delegate1<HorsebeanPlane,void(HorsebeanPlane::*)(HBPState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x210);
  Sexy::Delegate0::Delegate0<HorsebeanPlane,void(HorsebeanPlane::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x218);
  Sexy::Delegate1<HBPState>::Delegate1<HorsebeanPlane,void(HorsebeanPlane::*)(HBPState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"HBPState_ATTACK");
  StateDefinition<HBPState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_042295dc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x220);
  Sexy::Delegate1<HBPState>::Delegate1<HorsebeanPlane,void(HorsebeanPlane::*)(HBPState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)&DAT_00000228);
  Sexy::Delegate0::Delegate0<HorsebeanPlane,void(HorsebeanPlane::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x230);
  Sexy::Delegate1<HBPState>::Delegate1<HorsebeanPlane,void(HorsebeanPlane::*)(HBPState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"HBPState_FLYAWAY");
  StateDefinition<HBPState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_042295dc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x238);
  Sexy::Delegate1<HBPState>::Delegate1<HorsebeanPlane,void(HorsebeanPlane::*)(HBPState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x240);
  Sexy::Delegate0::Delegate0<HorsebeanPlane,void(HorsebeanPlane::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x248);
  Sexy::Delegate1<HBPState>::Delegate1<HorsebeanPlane,void(HorsebeanPlane::*)(HBPState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"HBPState_TURNBACK");
  StateDefinition<HBPState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_042295dc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x250);
  Sexy::Delegate1<HBPState>::Delegate1<HorsebeanPlane,void(HorsebeanPlane::*)(HBPState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x258);
  Sexy::Delegate0::Delegate0<HorsebeanPlane,void(HorsebeanPlane::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x260);
  Sexy::Delegate1<HBPState>::Delegate1<HorsebeanPlane,void(HorsebeanPlane::*)(HBPState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"HBPState_END");
  StateDefinition<HBPState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_042295dc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* HorsebeanPlane::StaticGetClass() */

long * HorsebeanPlane::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HorsebeanPlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HorsebeanPlane::GetClass() const */

long * HorsebeanPlane::GetClass(void)

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
  (*pcVar3)(plVar1,"HorsebeanPlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HorsebeanPlane::setState(HBPState) */

void __thiscall HorsebeanPlane::setState(HorsebeanPlane *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<HBPState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<HBPState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<HBPState>::GetStateDefinition
                     ((StateMachineTable<HBPState> *)pSVar2,param_2);
  StateDefinition<HBPState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<HBPState>::SetContext(aSStack_a8,this);
  StateMachine<HBPState>::SetState
            ((StateMachine<HBPState> *)(this + 0xb0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HorsebeanPlane::HorsebeanPlaneInitialize(EHorseBeanType, Sexy::RtWeakPtr<Plant>, int, int, bool)
    */

void __thiscall
HorsebeanPlane::HorsebeanPlaneInitialize
          (HorsebeanPlane *this,undefined4 param_2,RtWeakPtr *param_3,undefined4 param_4,int param_5
          ,char param_6)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  ResourceInfo *pRVar3;
  RtClass *pRVar4;
  TimeChallengeEndLevelUI *this_01;
  PopAnimRig *pPVar5;
  long *plVar6;
  string *psVar7;
  long lVar8;
  Board *pBVar9;
  RtWeakPtr aRStack_58 [8];
  string asStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),param_3);
  *(undefined4 *)(this + 0x178) = param_4;
  *(undefined4 *)(this + 0x16c) = param_2;
  *(int *)(this + 0x17c) = param_5;
  if (4 < param_5) {
    psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_50,"witchhazel");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
    std::string::~string(asStack_50);
    nop();
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_58);
    if (cVar2 != '\0') {
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      Board::LoadResourceGroupForGameplay(pBVar9,(string *)(lVar8 + 0x10));
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      Board::LoadResourceGroupsForGameplay(pBVar9,(vector *)(lVar8 + 0x80));
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  this_00 = (RtWeakPtr *)(this + 0xa8);
  setState(this,0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar6 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  std::string::string(asStack_50,"POPANIM_EFFECTS_HORSEBEAN_PLANE");
  GetPAMByName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
  pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar3,pRVar4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  this_01 = (TimeChallengeEndLevelUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<HorsebeanPlane,void(HorsebeanPlane::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,asStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  if (param_6 != '\0') {
    pPVar5 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string(asStack_50,"custom_01");
  }
  else {
    pPVar5 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string(asStack_50,"custom_01");
  }
  PopAnimRig::SetLayerVisibility(pPVar5,asStack_50,param_6 != '\0');
  std::string::~string(asStack_50);
  nop();
  pPVar5 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_50,"idle1");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar5,asStack_50,0,aDStack_38);
  std::string::~string(asStack_50);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HorsebeanPlane::MoveToTarget(Sexy::SexyVector2) */

void HorsebeanPlane::MoveToTarget
               (undefined4 param_1,undefined4 param_2,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  SexyVector3 *pSVar4;
  ActionSubSystem *pAVar5;
  float *pfVar6;
  PopAnimRig *pPVar7;
  char *__s;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
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
  uVar8 = FUN_04227168(*(undefined4 *)(param_3 + 0x18),uVar10,*(undefined4 *)(param_3 + 0x20));
  *(undefined4 *)(param_3 + 0x150) = uVar8;
  *(undefined4 *)(param_3 + 0x154) = uVar10;
  pSVar4 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_3);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_3 + 0x160),pSVar4);
  local_78 = *(undefined8 *)pSVar4;
  local_70 = *(undefined4 *)(pSVar4 + 8);
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)&local_68);
  iVar3 = *(int *)(param_3 + 0x16c);
  if (iVar3 == 1) {
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_80);
    fVar9 = (float)local_78;
    local_80 = (float)local_78 + ((float)local_b8 - (float)local_78) * 0.5;
    pfVar6 = eastl::max_alt<float>((float *)((long)&local_78 + 4),(float *)((long)&local_b8 + 4));
    fVar11 = *pfVar6;
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_68 = local_b8;
    fStack_7c = fVar11 + (float)iVar3 * 3.5;
    local_60 = CONCAT44(fStack_7c,local_80);
    local_58 = local_60;
LAB_0422af64:
    bVar2 = (float)local_68 < fVar9;
    if (bVar2) goto LAB_0422af78;
LAB_0422b11c:
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_3 + 0xa8));
    if (!bVar2) goto LAB_0422af94;
    pPVar7 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0xa8));
    __s = "idle1";
  }
  else {
    if (iVar3 == 0) {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_80);
      fVar9 = (float)local_78;
      local_80 = (float)local_78 + ((float)local_b8 - (float)local_78) * 0.5;
      pfVar6 = eastl::max_alt<float>((float *)((long)&local_78 + 4),(float *)((long)&local_b8 + 4));
      fVar11 = *pfVar6;
      iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
      local_68 = local_b8;
      fStack_7c = fVar11 + (float)iVar3 * 1.5;
      local_60 = CONCAT44(fStack_7c,local_80);
      local_58 = local_60;
      goto LAB_0422af64;
    }
    if (iVar3 != 2) {
      fVar9 = (float)local_78;
      goto LAB_0422af64;
    }
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_80);
    fVar9 = (float)local_78;
    local_80 = (float)local_78 + ((float)local_b8 - (float)local_78) * 0.5;
    pfVar6 = eastl::min_alt<float>((float *)((long)&local_78 + 4),(float *)((long)&local_b8 + 4));
    fVar11 = *pfVar6;
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_68 = local_b8;
    uVar1 = local_68;
    fStack_7c = fVar11 - (float)iVar3 * 1.5;
    local_60 = CONCAT44(fStack_7c,local_80);
    local_68._0_4_ = (float)local_b8;
    bVar2 = fVar9 <= (float)local_68;
    local_68 = uVar1;
    local_58 = local_60;
    if (bVar2) goto LAB_0422b11c;
LAB_0422af78:
    param_3[0x15c] =
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          )0x1;
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_3 + 0xa8));
    if (!bVar2) goto LAB_0422af94;
    pPVar7 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0xa8));
    __s = "idle2";
  }
  std::string::string((string *)&local_80,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
  PopAnimRig::PlayAndContinue(pPVar7,(string *)&local_80,0,(DummyInit *)aRStack_50);
  std::string::~string((string *)&local_80);
  nop();
LAB_0422af94:
  setState((HorsebeanPlane *)param_3,1);
  pAVar5 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
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
            ((ActionSubSystem *)0x3fcccccd,pAVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_80,
             (_ccBezierConfig *)&local_68,aRStack_50);
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


/* HorsebeanPlane::onFlyToTargetDone(BoardEntity*) */

void HorsebeanPlane::onFlyToTargetDone(BoardEntity *param_1)

{
  setState((HorsebeanPlane *)param_1,2);
  return;
}


/* HorsebeanPlane::onFlyAwayDone(BoardEntity*) */

void HorsebeanPlane::onFlyAwayDone(BoardEntity *param_1)

{
  setState((HorsebeanPlane *)param_1,4);
  return;
}


/* HorsebeanPlane::onTurnBackDone(BoardEntity*) */

void HorsebeanPlane::onTurnBackDone(BoardEntity *param_1)

{
  setState((HorsebeanPlane *)param_1,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HorsebeanPlane::onAttackAnimDone(std::string const&) */

void HorsebeanPlane::onAttackAnimDone(string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xa8));
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  setState((HorsebeanPlane *)param_1,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HorsebeanPlane::setHorsebeanPlaneStateSerialization(int) */

void __thiscall
HorsebeanPlane::setHorsebeanPlaneStateSerialization(HorsebeanPlane *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<HBPState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<HBPState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<HBPState>::GetStateDefinition
                     ((StateMachineTable<HBPState> *)pSVar2,param_1);
  StateDefinition<HBPState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<HBPState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0xb0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

