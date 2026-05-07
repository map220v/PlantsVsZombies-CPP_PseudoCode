// Class: ZombieAgileBronze


/* ZombieAgileBronze::onDebutAnimDone(std::string const&) */

void ZombieAgileBronze::onDebutAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    return;
  }
  return;
}


/* ZombieAgileBronze::onLandingOverAnimDone(std::string const&) */

void ZombieAgileBronze::onLandingOverAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    return;
  }
  return;
}


/* ZombieAgileBronze::GetShadowScaling() const */

undefined1  [16] __thiscall ZombieAgileBronze::GetShadowScaling(ZombieAgileBronze *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)(this + 0x80c) & 0xffffffff;
  return auVar1;
}


/* ZombieAgileBronze::DoSkill(ZombieSkillType) */

undefined8 __thiscall ZombieAgileBronze::DoSkill(ZombieAgileBronze *this,int param_2)

{
  if (param_2 != 2) {
    return 0;
  }
  Zombie::setZombieState((Zombie *)this,0x20,0);
  return 1;
}


/* ZombieAgileBronze::onReadyToJumpAnimDone(std::string const&) */

void ZombieAgileBronze::onReadyToJumpAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x21);
      return;
    }
  }
  return;
}


/* ZombieAgileBronze::~ZombieAgileBronze() */

void __thiscall ZombieAgileBronze::~ZombieAgileBronze(ZombieAgileBronze *this)

{
  *(undefined ***)this = &PTR_GetClass_0686b4a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAgileBronze_0686bf30;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieAgileBronze::~ZombieAgileBronze() */

void __thiscall ZombieAgileBronze::~ZombieAgileBronze(ZombieAgileBronze *this)

{
  ~ZombieAgileBronze(this + -0x10);
  return;
}


/* ZombieAgileBronze::~ZombieAgileBronze() */

void __thiscall ZombieAgileBronze::~ZombieAgileBronze(ZombieAgileBronze *this)

{
  ~ZombieAgileBronze(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAgileBronze::~ZombieAgileBronze() */

void __thiscall ZombieAgileBronze::~ZombieAgileBronze(ZombieAgileBronze *this)

{
  ~ZombieAgileBronze(this + -0x10);
  return;
}


/* ZombieAgileBronze::onExitState_Jumping(ZombieState) */

void ZombieAgileBronze::onExitState_Jumping(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(param_1 + 0x800) = uVar1;
  *(undefined4 *)(param_1 + 0x804) = uVar1;
  return;
}


/* ZombieAgileBronze::ZombieAgileBronze() */

void __thiscall ZombieAgileBronze::ZombieAgileBronze(ZombieAgileBronze *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0686b4a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAgileBronze_0686bf30;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x80c));
  return;
}


/* ZombieAgileBronze::StaticNew() */

ZombieAgileBronze * ZombieAgileBronze::StaticNew(void)

{
  ZombieAgileBronze *this;
  
  this = ::operator_new(0x818);
  ZombieAgileBronze(this);
  return this;
}


/* ZombieAgileBronze::onZombieInitialize() */

void __thiscall ZombieAgileBronze::onZombieInitialize(ZombieAgileBronze *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = PVZ_EOT();
  this[0x808] = (ZombieAgileBronze)0xff;
  *(undefined4 *)(this + 0x800) = uVar2;
  *(undefined4 *)(this + 0x804) = uVar2;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  *(undefined8 *)(this + 0x80c) = *(undefined8 *)(lVar1 + 0xe4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAgileBronze::onExitState_Landing(ZombieState) */

void ZombieAgileBronze::onExitState_Landing(Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar1;
  Board *this_00;
  undefined4 uVar2;
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsJumping(param_1,false);
  uVar2 = PVZ_EOT();
  param_1[0x808] = (Zombie)0xff;
  *(undefined4 *)(param_1 + 0x800) = uVar2;
  *(undefined4 *)(param_1 + 0x804) = uVar2;
  this = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(param_1);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  *(undefined8 *)(param_1 + 0x80c) = *(undefined8 *)(lVar1 + 0xe4);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  (**(code **)(*(long *)param_1 + 400))(aTStack_18,param_1);
  Board::KillPlantIn(this_00,aTStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAgileBronze::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

void __thiscall
ZombieAgileBronze::CanBeTargetedByPlant
          (ZombieAgileBronze *this,RtWeakPtrBase *param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsJumping((Zombie *)this);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar2 = Zombie::CanBeTargetedByPlant((Zombie *)this,aRStack_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x045e79f8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieAgileBronze::updateState_Jumping() */

void __thiscall ZombieAgileBronze::updateState_Jumping(ZombieAgileBronze *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  float fVar7;
  float fVar8;
  undefined4 local_c;
  long local_8;
  
  fVar8 = *(float *)(this + 0x804);
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_T();
  fVar6 = *(float *)(this + 0x804);
  if (fVar5 < fVar8) {
    fVar8 = *(float *)(this + 0x800);
    fVar5 = (float)PVZ_T();
    fVar7 = *(float *)(this + 0x800);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    local_c = 0;
    auVar1._4_12_ = extraout_var;
    auVar1._0_4_ = fVar5;
    fVar5 = CurveLerp<float>(auVar1,fVar6 - fVar8,fVar5 - fVar7,lVar4 + 0xe4,&local_c,1);
    fVar8 = *(float *)(this + 0x800);
    fVar6 = *(float *)(this + 0x804);
    *(float *)(this + 0x80c) = fVar5;
    fVar5 = (float)PVZ_T();
    fVar7 = *(float *)(this + 0x800);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    local_c = 0;
    auVar2._4_12_ = extraout_var_00;
    auVar2._0_4_ = fVar5;
    fVar5 = CurveLerp<float>(auVar2,fVar6 - fVar8,fVar5 - fVar7,lVar4 + 0xe8,&local_c,1);
    *(float *)(this + 0x810) = fVar5;
  }
  else {
    fVar5 = (float)PVZ_T();
    if (fVar6 + 2.0 <= fVar5) {
      Zombie::setZombieState((Zombie *)this,0x22,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x045e7af4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieAgileBronze::updateState_Landing() */

void __thiscall ZombieAgileBronze::updateState_Landing(ZombieAgileBronze *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  float fVar5;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_c;
  long local_8;
  
  fVar8 = *(float *)(this + 0x804);
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_T();
  if (fVar8 <= fVar5) {
    Zombie::setZombieState((Zombie *)this,0x23,0);
  }
  else {
    fVar5 = *(float *)(this + 0x804);
    fVar6 = *(float *)(this + 0x800);
    fVar8 = (float)PVZ_T();
    fVar7 = *(float *)(this + 0x800);
    local_c = 0;
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    auVar1._4_12_ = extraout_var;
    auVar1._0_4_ = fVar8;
    fVar5 = CurveLerp<float>(auVar1,fVar5 - fVar6,fVar8 - fVar7,&local_c,lVar4 + 0xe4,1);
    fVar6 = *(float *)(this + 0x800);
    fVar8 = *(float *)(this + 0x804);
    *(float *)(this + 0x80c) = fVar5;
    fVar5 = (float)PVZ_T();
    fVar7 = *(float *)(this + 0x800);
    local_c = 0;
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    auVar2._4_12_ = extraout_var_00;
    auVar2._0_4_ = fVar5;
    fVar5 = CurveLerp<float>(auVar2,fVar8 - fVar6,fVar5 - fVar7,&local_c,lVar4 + 0xe8,1);
    *(float *)(this + 0x810) = fVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAgileBronze::onEnterState_Landing(ZombieState) */

void ZombieAgileBronze::onEnterState_Landing(Zombie *param_1)

{
  int iVar1;
  int iVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  undefined8 *puVar4;
  ZombieAgileBronzeProps *pZVar5;
  float fVar6;
  float fVar7;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  *(float *)(param_1 + 0x800) = fVar6;
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  fVar7 = (float)ZombieAnimRig_AgileBronze::GetLandingDuration((ZombieAnimRig_AgileBronze *)pZVar3);
  *(float *)(param_1 + 0x804) = fVar7 + fVar6;
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_18 = *puVar4;
  local_10 = *(undefined4 *)(puVar4 + 1);
  pZVar5 = Zombie::GetProps<ZombieAgileBronzeProps>(param_1);
  iVar2 = *(int *)(pZVar5 + 0x210);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = CONCAT44(local_18._4_4_,(float)local_18 - (float)(iVar2 * iVar1));
  iVar2 = BoardTransforms::GridToBoardSpaceY((int)(char)param_1[0x808]);
  local_18 = CONCAT44((float)iVar2,(float)local_18);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_18);
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_AgileBronze::PlayLanding((ZombieAnimRig_AgileBronze *)pZVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAgileBronze::onEnterState_ReadyToJump(ZombieState) */

void ZombieAgileBronze::onEnterState_ReadyToJump(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onReadyToJumpAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_AgileBronze::PlayReadyToJump((ZombieAnimRig_AgileBronze *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAgileBronze::onEnterState_Debut(ZombieState) */

void ZombieAgileBronze::onEnterState_Debut(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onDebutAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_AgileBronze::PlayDebut((ZombieAnimRig_AgileBronze *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAgileBronze::onEnterState_LandingOver(ZombieState) */

void ZombieAgileBronze::onEnterState_LandingOver(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onLandingOverAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_AgileBronze::PlayLandingOver((ZombieAnimRig_AgileBronze *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAgileBronze::findWeakestRow() */

void __thiscall ZombieAgileBronze::findWeakestRow(ZombieAgileBronze *this)

{
  undefined4 uVar1;
  ulong uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  float fVar11;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  uVar10 = 0;
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,1);
  local_40 = (ulong)local_40._4_4_ << 0x20;
  std::vector<int,std::allocator<int>>::vector
            ((ulong)local_20,(int *)(long)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc),
             (allocator *)&local_40);
  uVar6 = local_38;
  uVar2 = FUN_045e73d0(local_38,local_30);
  if (uVar2 != 0) {
    do {
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      puVar4 = (undefined8 *)FUN_045e73dc(uVar6,uVar10);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)*puVar4);
      if (*pfVar5 <= *pfVar3) {
        nop();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Plant::GetProps();
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40)
        ;
        fVar11 = *(float *)(lVar8 + 0x24);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48)
        ;
        piVar9 = (int *)FUN_045e73e4(local_20[0],(long)*(int *)(lVar8 + 0x110));
        *piVar9 = (int)((float)*piVar9 + fVar11);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        uVar6 = local_38;
        uVar2 = FUN_045e73d0(local_38,local_30);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar2);
  }
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  local_48 = FUN_045e7cd8(uVar6,uVar7);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
  uVar1 = __gnu_cxx::operator-((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ZombieAgileBronze::onEnterState_Jumping(ZombieState) */

void ZombieAgileBronze::onEnterState_Jumping(ZombieAgileBronze *param_1)

{
  ZombieAgileBronze ZVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  float fVar4;
  
  ZVar1 = (ZombieAgileBronze)findWeakestRow(param_1);
  param_1[0x808] = ZVar1;
  fVar3 = (float)PVZ_T();
  *(float *)(param_1 + 0x800) = fVar3;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  fVar4 = (float)ZombieAnimRig_AgileBronze::GetJumpingDuration((ZombieAnimRig_AgileBronze *)pZVar2);
  *(float *)(param_1 + 0x804) = fVar4 + fVar3;
  Zombie::SetIsJumping((Zombie *)param_1,true);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_AgileBronze::PlayJumping((ZombieAnimRig_AgileBronze *)pZVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAgileBronze::StaticClassInit() */

void ZombieAgileBronze::StaticClassInit(void)

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
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieAgileBronze");
      (*pcVar4)(plVar1,asStack_150,FUN_045e8888,0x818,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAgileBronze,void(ZombieAgileBronze::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieAgileBronze,void(ZombieAgileBronze::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAgileBronze,void(ZombieAgileBronze::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AB_Debut");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_045e836c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAgileBronze,void(ZombieAgileBronze::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieAgileBronze,void(ZombieAgileBronze::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAgileBronze,void(ZombieAgileBronze::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AB_ReadyToJump");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_045e836c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAgileBronze,void(ZombieAgileBronze::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieAgileBronze,void(ZombieAgileBronze::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAgileBronze,void(ZombieAgileBronze::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AB_Jumping");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_045e836c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAgileBronze,void(ZombieAgileBronze::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieAgileBronze,void(ZombieAgileBronze::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAgileBronze,void(ZombieAgileBronze::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AB_Landing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_045e836c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAgileBronze,void(ZombieAgileBronze::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieAgileBronze,void(ZombieAgileBronze::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieAgileBronze,void(ZombieAgileBronze::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_AB_LandingOver");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_045e836c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieAgileBronze::StaticGetClass() */

long * ZombieAgileBronze::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAgileBronze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAgileBronze::GetClass() const */

long * ZombieAgileBronze::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAgileBronze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAgileBronze::canTargetEntityHeight(BoardEntityHeight) */

undefined8 __thiscall
ZombieAgileBronze::canTargetEntityHeight(ZombieAgileBronze *this,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::IsJumping((Zombie *)this);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = Zombie::canTargetEntityHeight((Zombie *)this,param_2);
  return uVar2;
}


/* ZombieAgileBronze::CollidesWithType(CollisionTypeFlags) const */

undefined8 __thiscall
ZombieAgileBronze::CollidesWithType(ZombieAgileBronze *this,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::IsJumping((Zombie *)this);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = Zombie::CollidesWithType((Zombie *)this,param_2);
  return uVar2;
}

