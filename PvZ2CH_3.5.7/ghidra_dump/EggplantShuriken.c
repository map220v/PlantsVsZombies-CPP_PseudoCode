// Class: EggplantShuriken


/* EggplantShuriken::~EggplantShuriken() */

void __thiscall EggplantShuriken::~EggplantShuriken(EggplantShuriken *this)

{
  *(undefined ***)this = &PTR_GetClass_0674a4b0;
  *(undefined ***)(this + 0x10) = &PTR__EggplantShuriken_0674a6b0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to EggplantShuriken::~EggplantShuriken() */

void __thiscall EggplantShuriken::~EggplantShuriken(EggplantShuriken *this)

{
  ~EggplantShuriken(this + -0x10);
  return;
}


/* EggplantShuriken::~EggplantShuriken() */

void __thiscall EggplantShuriken::~EggplantShuriken(EggplantShuriken *this)

{
  ~EggplantShuriken(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EggplantShuriken::~EggplantShuriken() */

void __thiscall EggplantShuriken::~EggplantShuriken(EggplantShuriken *this)

{
  ~EggplantShuriken(this + -0x10);
  return;
}


/* EggplantShuriken::EggplantShuriken() */

void __thiscall EggplantShuriken::EggplantShuriken(EggplantShuriken *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_0674a4b0;
  *(undefined ***)(this + 0x10) = &PTR__EggplantShuriken_0674a6b0;
  *(undefined4 *)(this + 0x1ac) = 0;
  DVec3::DVec3((DVec3 *)(this + 0x1b0));
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)(this + 0x1bc));
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)(this + 0x1d4));
  return;
}


/* EggplantShuriken::StaticNew() */

EggplantShuriken * EggplantShuriken::StaticNew(void)

{
  EggplantShuriken *this;
  
  this = ::operator_new(0x1f0);
  EggplantShuriken(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantShuriken::StaticClassInit() */

void EggplantShuriken::StaticClassInit(void)

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
    std::string::string(asStack_10,"EggplantShuriken");
    (*pcVar2)(plVar1,asStack_10,FUN_03c2b84c,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EggplantShuriken::StaticGetClass() */

long * EggplantShuriken::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"EggplantShuriken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EggplantShuriken::GetClass() const */

long * EggplantShuriken::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"EggplantShuriken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantShuriken::onFlyBackDone(BoardEntity*) */

void EggplantShuriken::onFlyBackDone(BoardEntity *param_1)

{
  long lVar1;
  long extraout_x0;
  PlantEggplantNinja *this;
  PlantEggplantNinja *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Projectile::GetInstigator((Projectile *)param_1);
  if (lVar1 != 0) {
    Projectile::GetInstigator((Projectile *)param_1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (extraout_x0 != 0) {
      nop();
      PlantEggplantNinja::ResetShurikenSlot(this,*(uint *)(param_1 + 0x1a8));
      nop();
      PlantEggplantNinja::PlayShurikenBack(this_00,false);
    }
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantShuriken::onFlyToTargetDone(BoardEntity*) */

void EggplantShuriken::onFlyToTargetDone(BoardEntity *param_1)

{
  ActionSubSystem *pAVar1;
  ActionSubSystem *pAVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x1ec] == (BoardEntity)0x0) {
    pAVar1 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_78);
                    /* WARNING: Load size is inaccurate */
    pAVar2._0_4_ = *(ActionSubSystem **)(param_1 + 0x1ac);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onFlyBackDone");
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
              (aRStack_50,aRStack_68,asStack_60);
    ActionSubSystem::AddActionMoveTo(pAVar2._0_4_,pAVar1,aRStack_58,param_1 + 0x1b0,aRStack_50);
  }
  else {
    pAVar1 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_78);
                    /* WARNING: Load size is inaccurate */
    pAVar2._0_4_ = *(ActionSubSystem **)(param_1 + 0x1ac);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onFlyBackDone");
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
              (aRStack_50,aRStack_68,asStack_60);
    ActionSubSystem::AddActionBezierTo(pAVar2._0_4_,pAVar1,aRStack_58,param_1 + 0x1d4,aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantShuriken::SetTrajectoryTopHigh() */

void __thiscall EggplantShuriken::SetTrajectoryTopHigh(EggplantShuriken *this)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  ActionSubSystem *pAVar4;
  ActionSubSystem *pAVar5;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  float local_58;
  float fStack_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,*pfVar3,pfVar3[1]);
  local_88 = 800.0;
  *(ulong *)(this + 0x1bc) = CONCAT44(fStack_84,0x44480000);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_80)
  ;
  fVar1 = fStack_84;
  local_80 = (*pfVar3 + local_88) * 0.5;
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  fStack_7c = fVar1 - (float)iVar2 * 3.5;
  *(ulong *)(this + 0x1cc) = CONCAT44(fStack_7c,local_80);
  *(ulong *)(this + 0x1c4) = CONCAT44(fStack_7c,local_80);
  if (this[0x1ec] != (EggplantShuriken)0x0) {
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_58,*(float *)(this + 0x1b0),*(float *)(this + 0x1b4));
    *(ulong *)(this + 0x1d4) = CONCAT44(fStack_54,local_58);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_58);
    local_58 = (*pfVar3 + local_88) * 0.5;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_54 = fStack_84 + (float)iVar2 * 3.5;
    *(ulong *)(this + 0x1e4) = CONCAT44(fStack_54,local_58);
    *(ulong *)(this + 0x1dc) = CONCAT44(fStack_54,local_58);
  }
  pAVar4 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)aRStack_78);
                    /* WARNING: Load size is inaccurate */
  pAVar5._0_4_ = *(ActionSubSystem **)(this + 0x1ac);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onFlyToTargetDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_68,asStack_60)
  ;
  ActionSubSystem::AddActionBezierTo
            (pAVar5._0_4_,pAVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_58,this + 0x1bc,aRStack_50
            );
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantShuriken::SetTrajectoryHigh() */

void __thiscall EggplantShuriken::SetTrajectoryHigh(EggplantShuriken *this)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  ActionSubSystem *pAVar4;
  ActionSubSystem *pAVar5;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  float local_58;
  float fStack_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,*pfVar3,pfVar3[1]);
  local_88 = 800.0;
  *(ulong *)(this + 0x1bc) = CONCAT44(fStack_84,0x44480000);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_80)
  ;
  fVar1 = fStack_84;
  local_80 = (*pfVar3 + local_88) * 0.5;
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  fStack_7c = fVar1 - (float)(iVar2 << 1);
  *(ulong *)(this + 0x1cc) = CONCAT44(fStack_7c,local_80);
  *(ulong *)(this + 0x1c4) = CONCAT44(fStack_7c,local_80);
  if (this[0x1ec] != (EggplantShuriken)0x0) {
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_58,*(float *)(this + 0x1b0),*(float *)(this + 0x1b4));
    *(ulong *)(this + 0x1d4) = CONCAT44(fStack_54,local_58);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_58);
    local_58 = (*pfVar3 + local_88) * 0.5;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_54 = (float)(iVar2 << 1) + fStack_84;
    *(ulong *)(this + 0x1e4) = CONCAT44(fStack_54,local_58);
    *(ulong *)(this + 0x1dc) = CONCAT44(fStack_54,local_58);
  }
  pAVar4 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)aRStack_78);
                    /* WARNING: Load size is inaccurate */
  pAVar5._0_4_ = *(ActionSubSystem **)(this + 0x1ac);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onFlyToTargetDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_68,asStack_60)
  ;
  ActionSubSystem::AddActionBezierTo
            (pAVar5._0_4_,pAVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_58,this + 0x1bc,aRStack_50
            );
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantShuriken::SetTrajectoryLow() */

void __thiscall EggplantShuriken::SetTrajectoryLow(EggplantShuriken *this)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  ActionSubSystem *pAVar4;
  ActionSubSystem *pAVar5;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  float local_58;
  float fStack_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,*pfVar3,pfVar3[1]);
  local_88 = 800.0;
  *(ulong *)(this + 0x1bc) = CONCAT44(fStack_84,0x44480000);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_80)
  ;
  fVar1 = fStack_84;
  local_80 = (*pfVar3 + local_88) * 0.5;
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  fStack_7c = (float)(iVar2 << 1) + fVar1;
  *(ulong *)(this + 0x1cc) = CONCAT44(fStack_7c,local_80);
  *(ulong *)(this + 0x1c4) = CONCAT44(fStack_7c,local_80);
  if (this[0x1ec] != (EggplantShuriken)0x0) {
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_58,*(float *)(this + 0x1b0),*(float *)(this + 0x1b4));
    *(ulong *)(this + 0x1d4) = CONCAT44(fStack_54,local_58);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_58);
    local_58 = (*pfVar3 + local_88) * 0.5;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_54 = fStack_84 - (float)(iVar2 << 1);
    *(ulong *)(this + 0x1e4) = CONCAT44(fStack_54,local_58);
    *(ulong *)(this + 0x1dc) = CONCAT44(fStack_54,local_58);
  }
  pAVar4 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)aRStack_78);
                    /* WARNING: Load size is inaccurate */
  pAVar5._0_4_ = *(ActionSubSystem **)(this + 0x1ac);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onFlyToTargetDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_68,asStack_60)
  ;
  ActionSubSystem::AddActionBezierTo
            (pAVar5._0_4_,pAVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_58,this + 0x1bc,aRStack_50
            );
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantShuriken::SetTrajectoryBottomLow() */

void __thiscall EggplantShuriken::SetTrajectoryBottomLow(EggplantShuriken *this)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  ActionSubSystem *pAVar4;
  ActionSubSystem *pAVar5;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  float local_58;
  float fStack_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,*pfVar3,pfVar3[1]);
  local_88 = 800.0;
  *(ulong *)(this + 0x1bc) = CONCAT44(fStack_84,0x44480000);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_80)
  ;
  fVar1 = fStack_84;
  local_80 = (*pfVar3 + local_88) * 0.5;
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  fStack_7c = fVar1 + (float)iVar2 * 3.5;
  *(ulong *)(this + 0x1cc) = CONCAT44(fStack_7c,local_80);
  *(ulong *)(this + 0x1c4) = CONCAT44(fStack_7c,local_80);
  if (this[0x1ec] != (EggplantShuriken)0x0) {
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_58,*(float *)(this + 0x1b0),*(float *)(this + 0x1b4));
    *(ulong *)(this + 0x1d4) = CONCAT44(fStack_54,local_58);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_58);
    local_58 = (*pfVar3 + local_88) * 0.5;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_54 = fStack_84 - (float)iVar2 * 3.5;
    *(ulong *)(this + 0x1e4) = CONCAT44(fStack_54,local_58);
    *(ulong *)(this + 0x1dc) = CONCAT44(fStack_54,local_58);
  }
  pAVar4 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)aRStack_78);
                    /* WARNING: Load size is inaccurate */
  pAVar5._0_4_ = *(ActionSubSystem **)(this + 0x1ac);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onFlyToTargetDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_68,asStack_60)
  ;
  ActionSubSystem::AddActionBezierTo
            (pAVar5._0_4_,pAVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_58,this + 0x1bc,aRStack_50
            );
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EggplantShuriken::SetTrajectory(EggplantShuriken::ShurikenTrajectory, bool) */

void __thiscall
EggplantShuriken::SetTrajectory(EggplantShuriken *this,undefined4 param_2,EggplantShuriken param_3)

{
  SexyVector3 *pSVar1;
  
  this[0x1ec] = param_3;
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1b0),pSVar1);
  switch(param_2) {
  case 0:
    SetTrajectoryTopHigh(this);
    return;
  case 1:
    SetTrajectoryHigh(this);
    return;
  case 2:
    GeishaProjectile::SetTrajectoryNormal((GeishaProjectile *)this);
    return;
  case 3:
    SetTrajectoryLow(this);
    return;
  case 4:
    SetTrajectoryBottomLow(this);
    return;
  default:
    return;
  }
}

