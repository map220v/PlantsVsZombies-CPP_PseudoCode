// Class: ZombieBull


/* ZombieBull::onWalkAnimContinued(std::string const&, std::string const&, int) */

void ZombieBull::onWalkAnimContinued(string *param_1,string *param_2,int param_3)

{
  param_1[0x801] = (string)0x1;
  return;
}


/* ZombieBull::onPawingAnimDone(std::string const&) */

void ZombieBull::onPawingAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    if (param_1[0x808] != (string)0x0) {
      Zombie::setZombieState((Zombie *)param_1,0x21);
      return;
    }
    cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)param_1 + 0x260))(param_1);
      return;
    }
  }
  return;
}


/* ZombieBull::onPreRunAnimDone(std::string const&) */

void ZombieBull::onPreRunAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    if (param_1[0x808] != (string)0x0) {
      Zombie::setZombieState((Zombie *)param_1,0x22);
      return;
    }
    cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)param_1 + 0x260))(param_1);
      return;
    }
  }
  return;
}


/* ZombieBull::onRearingAnimDone(std::string const&) */

void ZombieBull::onRearingAnimDone(string *param_1)

{
  char cVar1;
  
  Zombie::SetIsUsingAnimTranslation((Zombie *)param_1,false);
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  return;
}


/* ZombieBull::~ZombieBull() */

void __thiscall ZombieBull::~ZombieBull(ZombieBull *this)

{
  *(undefined ***)this = &PTR_GetClass_0689b340;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBull_0689bdd0;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieBull::~ZombieBull() */

void __thiscall ZombieBull::~ZombieBull(ZombieBull *this)

{
  ~ZombieBull(this + -0x10);
  return;
}


/* ZombieBull::~ZombieBull() */

void __thiscall ZombieBull::~ZombieBull(ZombieBull *this)

{
  ~ZombieBull(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieBull::~ZombieBull() */

void __thiscall ZombieBull::~ZombieBull(ZombieBull *this)

{
  ~ZombieBull(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::getElectrocutePAMName() const */

void __thiscall ZombieBull::getElectrocutePAMName(ZombieBull *this)

{
  char cVar1;
  string *extraout_x1;
  string *in_x8;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_BULL_SHOCK");
  nop();
  Zombie::GetElectrocuteColor();
  cVar1 = FUN_0547419c(aSStack_18);
  if (cVar1 == '\0') {
    FUN_05475ad8();
    Sexy::Upper(aSStack_18,extraout_x1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBull::ZombieBull() */

void __thiscall ZombieBull::ZombieBull(ZombieBull *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0689b340;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBull_0689bdd0;
  return;
}


/* ZombieBull::StaticNew() */

ZombieBull * ZombieBull::StaticNew(void)

{
  ZombieBull *this;
  
  this = ::operator_new(0x810);
  ZombieBull(this);
  return this;
}


/* ZombieBull::canPullDown() */

ulong __thiscall ZombieBull::canPullDown(ZombieBull *this)

{
  ZombieBull ZVar1;
  char cVar2;
  ulong uVar3;
  
  ZVar1 = this[0x808];
  if ((((byte)ZVar1 != 0) && (cVar2 = Zombie::isInState((Zombie *)this,0x1f), cVar2 == '\0')) &&
     (cVar2 = Zombie::isInState((Zombie *)this,0x20), cVar2 == '\0')) {
    uVar3 = Zombie::isInState((Zombie *)this,0x21);
    return uVar3;
  }
  return (ulong)(uint)(byte)ZVar1;
}


/* ZombieBull::onApplyCondition(ZombieConditions) */

void __thiscall ZombieBull::onApplyCondition(ZombieBull *this,int param_2)

{
  ZombieHydraHeadAnimRig *this_00;
  
  if ((4 < param_2 - 0x40U) && (param_2 != 0x60)) {
    return;
  }
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_Bull::HideRider((ZombieAnimRig_Bull *)this_00);
  return;
}


/* ZombieBull::calcBuckRect() */

void ZombieBull::calcBuckRect(void)

{
  int iVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieBullProps *pZVar3;
  Insets *in_x8;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pZVar3 = Zombie::GetProps<ZombieBullProps>(in_x0);
  Sexy::Insets::Insets(in_x8,(Insets *)(pZVar3 + 0x210));
  fVar6 = *(float *)(in_x0 + 0x1c);
  fVar4 = (float)FUN_046822a8(*(undefined4 *)(in_x0 + 0x18),fVar6,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar5 = (float)Zombie::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar4 - (float)(iVar1 / 2)) + (float)iVar2 * fVar5);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar6) - (float)*(int *)(in_x8 + 0xc));
  return;
}


/* ZombieBull::updateState_Entering() */

void __thiscall ZombieBull::updateState_Entering(ZombieBull *this)

{
  ZombieBull ZVar1;
  char cVar2;
  RiftThemeCharging *pRVar3;
  float *pfVar4;
  ZombieBullProps *pZVar5;
  float fVar6;
  
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeCharging>();
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar6 = *pfVar4;
  pZVar5 = Zombie::GetProps<ZombieBullProps>((Zombie *)this);
  if ((*(float *)(pZVar5 + 0x224) < fVar6) || (this[0x801] == (ZombieBull)0x0)) {
    if (pRVar3 == (RiftThemeCharging *)0x0) goto LAB_04682934;
    ZVar1 = this[0x808];
  }
  else {
    ZVar1 = this[0x808];
  }
  if (ZVar1 != (ZombieBull)0x0) {
    Zombie::setZombieState((Zombie *)this,0x20,0);
    this[0x801] = (ZombieBull)0x0;
    return;
  }
  cVar2 = (**(code **)(*(long *)this + 0x328))(this);
  if (cVar2 == '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
    this[0x801] = (ZombieBull)0x0;
    return;
  }
LAB_04682934:
  this[0x801] = (ZombieBull)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::onEnterState_Entering(ZombieState) */

void ZombieBull::onEnterState_Entering(Zombie *param_1)

{
  long *plVar1;
  ZombieAnimRig *this;
  ZombieBullProps *pZVar2;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar3 = *(code **)(*plVar1 + 0x118);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onWalkAnimContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar3)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  pZVar2 = Zombie::GetProps<ZombieBullProps>(param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar2 + 0x228));
  std::string::string(asStack_58,"Play_Zomb_WildWest_Bull_Snort");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::onEnterState_Running(ZombieState) */

void ZombieBull::onEnterState_Running(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  long *plVar1;
  ZombieAnimRig *this_00;
  ZombieBullProps *pZVar2;
  RiftThemeCharging *pRVar3;
  code *pcVar4;
  Zombie *pZVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)this,true);
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar1 + 0x118);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onWalkAnimContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar4)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  pZVar2 = Zombie::GetProps<ZombieBullProps>(param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this_00,*(float *)(pZVar2 + 0x220));
  param_1[0x801] = (Zombie)0x1;
  param_1[0x800] = (Zombie)0x0;
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeCharging>();
  if (pRVar3 != (RiftThemeCharging *)0x0) {
    pZVar5._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar5._0_4_,0,param_1,0x6e,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::onEnterState_Pawing(ZombieState) */

void ZombieBull::onEnterState_Pawing(Zombie *param_1)

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
  std::string::string(asStack_58,"onPawingAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Cavalry::PlayPawing((ZombieAnimRig_Cavalry *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_58,"Play_Zomb_WildWest_Bull_Snort");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"Play_Zomb_WildWest_Bull_FS_Scuff");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::onEnterState_PreRun(ZombieState) */

void ZombieBull::onEnterState_PreRun(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  ZombieAnimRig *this;
  ZombieBullProps *pZVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onPreRunAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Bull::PlayPreRun((ZombieAnimRig_Bull *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  pZVar2 = Zombie::GetProps<ZombieBullProps>(param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar2 + 0x220));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::onEnterState_Rearing(ZombieState) */

void ZombieBull::onEnterState_Rearing(Zombie *param_1)

{
  RiftThemeCharging *pRVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  ZombieAnimRig *this;
  ZombieBullProps *pZVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = RiftUtils::GetThemeByClass<RiftThemeCharging>();
  if (pRVar1 != (RiftThemeCharging *)0x0) {
    Zombie::EndCondition(param_1,0x6e);
  }
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRearingAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Cavalry::PlayRearing((ZombieAnimRig_Cavalry *)pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  pZVar3 = Zombie::GetProps<ZombieBullProps>(param_1);
  ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar3 + 0x220));
  std::string::string(asStack_58,"Play_Zomb_WildWest_Imp_VO_Giggle");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::updateState_Running() */

void __thiscall ZombieBull::updateState_Running(ZombieBull *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  PlantGroup *pPVar10;
  RealObject *this_00;
  ulong uVar11;
  RtWeakPtr aRStack_38 [8];
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar11 = 0;
  local_8 = ___stack_chk_guard;
  calcBuckRect();
  uVar3 = SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar6 = operator|(0x10,4);
  uVar4 = operator|(uVar6,2);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar4,
             auStack_30,uVar3,uVar3);
  uVar6 = local_20;
  lVar7 = FUN_04682294(local_20,local_18);
  if (lVar7 != 0) {
    do {
      puVar8 = (undefined8 *)FUN_046822a0(uVar6,uVar11);
      this_00 = (RealObject *)*puVar8;
      iVar5 = (**(code **)(*(long *)this_00 + 0x180))(this_00);
      if ((1 < iVar5) &&
         (cVar1 = RealObject::IsOnOpposingTeam(this_00,(RealObject *)this), cVar1 != '\0'))
      goto LAB_0468311c;
      bVar2 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)this_00);
      if (bVar2) {
        pPVar10 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)this_00);
        PlantGroup::GetPlantAtLayer(aRStack_38,pPVar10,1);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          goto LAB_0468311c;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
      }
      uVar6 = local_20;
      uVar11 = uVar11 + 1;
      uVar9 = FUN_04682294(local_20,local_18);
    } while (uVar11 < uVar9);
  }
  if (this[0x800] == (ZombieBull)0x0) {
LAB_046831a4:
    cVar1 = Zombie::HasCondition(this,0x8c);
    if (cVar1 == '\0') goto LAB_0468313c;
  }
  else {
LAB_0468311c:
    this[0x800] = (ZombieBull)0x1;
    if (this[0x801] == (ZombieBull)0x0) goto LAB_046831a4;
  }
  Zombie::setZombieState((Zombie *)this,0x23,0);
LAB_0468313c:
  this[0x801] = (ZombieBull)0x0;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::takePullDown() */

void ZombieBull::takePullDown(void)

{
  char cVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieHydraHeadAnimRig *this;
  string *psVar3;
  ZombieImp *this_00;
  SexyVector3 *this_01;
  long *plVar4;
  code *pcVar5;
  undefined4 in_s1;
  undefined4 in_s2;
  string asStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
  ZombieAnimRig_Bull::HideRider((ZombieAnimRig_Bull *)this);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_2b = 1;
  local_30 = *(undefined4 *)(in_x0 + 0x50);
  plVar4 = *(long **)(gLawnApp + 0x9f0);
  pcVar5 = *(code **)(*plVar4 + 0x318);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_48,"west_bullrider");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  (*pcVar5)(plVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0xffffffff,
            (SpawnZombieParams *)&local_30);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::string::~string(asStack_48);
  nop();
  ZombieImp::SetGetsUpFromLanding(this_00,true);
  if (((DAT_06b1e490 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1e490), iVar2 != 0)) {
    in_s1 = 0;
    in_s2 = 0x42480000;
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b1e3b0,-60.0,0.0,50.0);
    __cxa_guard_release(&DAT_06b1e490);
  }
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)in_x0);
  local_40 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&DAT_06b1e3b0);
  local_3c = in_s1;
  local_38 = in_s2;
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
  (**(code **)(*(long *)this_00 + 600))(this_00);
  in_x0[0x808] = (Zombie)0x0;
  cVar1 = (**(code **)(*(long *)in_x0 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)in_x0 + 0x330))(), cVar1 == '\0')) {
    (**(code **)(*(long *)in_x0 + 0x260))();
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::launchImp() */

void ZombieBull::launchImp(void)

{
  char cVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieHydraHeadAnimRig *this;
  string *psVar3;
  ZombieImp *this_00;
  SexyVector3 *this_01;
  long *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 in_s1;
  undefined4 in_s2;
  float fVar7;
  float fVar8;
  string asStack_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasCondition(in_x0,0x40);
  if (((((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(), cVar1 == '\0')) &&
       (cVar1 = Zombie::HasCondition(), cVar1 == '\0')) &&
      ((cVar1 = Zombie::HasCondition(), cVar1 == '\0' &&
       (cVar1 = Zombie::HasCondition(), cVar1 == '\0')))) &&
     (cVar1 = Zombie::HasCondition(), cVar1 == '\0')) {
    this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
    ZombieAnimRig_Bull::HideRider((ZombieAnimRig_Bull *)this);
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_2b = 1;
    local_30 = *(undefined4 *)(in_x0 + 0x50);
    plVar4 = *(long **)(gLawnApp + 0x9f0);
    pcVar5 = *(code **)(*plVar4 + 0x318);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_48,"west_bullrider");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    (*pcVar5)(plVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0xffffffff,
              (SpawnZombieParams *)&local_30);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    std::string::~string(asStack_48);
    nop();
    ZombieImp::SetGetsUpFromLanding(this_00,true);
    if (((DAT_06b1e3c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1e3c0), iVar2 != 0)) {
      in_s1 = 0;
      in_s2 = 0x42480000;
      EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b1e480,-60.0,0.0,50.0);
      __cxa_guard_release(&DAT_06b1e3c0);
    }
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)in_x0);
    uVar6 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&DAT_06b1e480);
    local_40 = CONCAT44(in_s1,uVar6);
    local_38 = in_s2;
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
    local_40 = *(undefined8 *)this_01;
    local_38 = *(undefined4 *)(this_01 + 8);
    fVar7 = *(float *)this_01;
    fVar8 = DAT_06b1e3c8;
    if (((DAT_06b1e358 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&DAT_06b1e358), fVar8 = DAT_06b1e3c8, iVar2 != 0)) {
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      DAT_06b1e3c8 = (float)iVar2 * 4.0;
      __cxa_guard_release(&DAT_06b1e358);
      fVar8 = (float)iVar2 * 4.0;
    }
    local_40 = CONCAT44(local_40._4_4_,fVar7 - fVar8);
    (**(code **)(*(long *)this_00 + 0xa08))
              (fVar7 - fVar8,local_40._4_4_,local_38,0x3f400000,0x437a0000,this_00,0);
    std::string::string(asStack_48,"Play_Zomb_WildWest_Imp_VO_Throw");
    RealObject::PlayPositionalSound((RealObject *)this_00,asStack_48,0.0);
    std::string::~string(asStack_48);
    nop();
    std::string::string(asStack_48,"Play_Zomb_WildWest_Bull_Yell_Throw");
    RealObject::PlayPositionalSound((RealObject *)in_x0,asStack_48,0.0);
    std::string::~string(asStack_48);
    nop();
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::StaticClassInit() */

void ZombieBull::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieBull");
      (*pcVar4)(plVar1,asStack_150,FUN_04683bec,0x810,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBull,void(ZombieBull::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieBull,void(ZombieBull::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBull,void(ZombieBull::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BULL_Entering");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046836d0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBull,void(ZombieBull::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieBull,void(ZombieBull::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBull,void(ZombieBull::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BULL_Pawing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046836d0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBull,void(ZombieBull::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieBull,void(ZombieBull::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBull,void(ZombieBull::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BULL_PreRun");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046836d0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBull,void(ZombieBull::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieBull,void(ZombieBull::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBull,void(ZombieBull::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BULL_Running");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046836d0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBull,void(ZombieBull::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieBull,void(ZombieBull::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBull,void(ZombieBull::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BULL_Rearing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046836d0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieBull::StaticGetClass() */

long * ZombieBull::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBull",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBull::GetClass() const */

long * ZombieBull::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBull",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::onPlaceOnBoard() */

void __thiscall ZombieBull::onPlaceOnBoard(ZombieBull *this)

{
  long lVar1;
  code *pcVar2;
  Vec3 aVStack_18 [16];
  long local_8;
  
  this[0x808] = (ZombieBull)0x1;
  *(undefined4 *)(this + 0x804) = 0;
  local_8 = ___stack_chk_guard;
  this[0x801] = (ZombieBull)0x0;
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  pcVar2 = *(code **)(*(long *)this + 0x78);
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  EATextSquish::Vec3::Vec3(aVStack_18,920.0,*(float *)(lVar1 + 4),*(float *)(lVar1 + 8));
  (*pcVar2)(this,aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::onUpdate() */

void __thiscall ZombieBull::onUpdate(ZombieBull *this)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  int *piVar3;
  ZombieHydraHeadAnimRig *this_01;
  float fVar4;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar4 = (float)FUN_04682284(*(undefined4 *)(this + 0x280));
  local_14[1] = 0;
  iVar1 = (int)*(float *)(lVar2 + 0x18) / 3;
  local_14[0] = 0;
  if (iVar1 != 0) {
    local_14[0] = (int)fVar4 / iVar1;
  }
  local_14[0] = 2 - local_14[0];
  piVar3 = eastl::max_alt<int>(local_14,local_14 + 1);
  local_14[2] = 2;
  piVar3 = eastl::min_alt<int>(piVar3,local_14 + 2);
  if (*(int *)(this + 0x804) != *piVar3) {
    *(int *)(this + 0x804) = *piVar3;
    this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_Cavalry::SetDamageState((ZombieAnimRig_Cavalry *)this_01,*(int *)(this + 0x804));
  }
  if (local_8 == ___stack_chk_guard) {
    Zombie::onUpdate((Zombie *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBull::onEnterState_Walk(ZombieState) */

void __thiscall ZombieBull::onEnterState_Walk(ZombieBull *this,undefined4 param_2)

{
  ZombieAnimRig *this_00;
  float fVar1;
  
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  if (*(code **)(*(long *)this + 0x1d8) == Zombie::GetWalkSpeed) {
    fVar1 = (float)Zombie::GetWalkSpeed((Zombie *)this);
    ZombieAnimRig::SetDesiredWalkVelocity(this_00,fVar1);
    Zombie::onEnterState_Walk(this,param_2);
    return;
  }
  fVar1 = (float)(**(code **)(*(long *)this + 0x1d8))();
  ZombieAnimRig::SetDesiredWalkVelocity(this_00,fVar1);
  Zombie::onEnterState_Walk(this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::onDestroy() */

void __thiscall ZombieBull::onDestroy(ZombieBull *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onDestroy((Zombie *)this);
  std::string::string(asStack_10,"Stop_Zomb_WildWest_Imp_VO_Riding");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBull::playDeathAnimation() */

void __thiscall ZombieBull::playDeathAnimation(ZombieBull *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Zomb_WildWest_Bull_Death");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Zombie::playDeathAnimation((Zombie *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBull::onPopAnimCommand(std::string const&, float, std::string const&, std::string const&)
    */

void ZombieBull::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==(param_4,"launch");
  if (!bVar1) {
    Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
    return;
  }
  cVar2 = Zombie::HasCondition(param_1,0x8c);
  if (cVar2 != '\0') {
    Zombie::EndCondition((Zombie *)param_1,0x8c);
  }
  param_1[0x808] = (string)0x0;
  launchImp();
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  return;
}


/* ZombieBull::onElectrocuted() */

void __thiscall ZombieBull::onElectrocuted(ZombieBull *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_Bull::HideRider((ZombieAnimRig_Bull *)this_00);
  Zombie::onElectrocuted((Zombie *)this);
  return;
}

