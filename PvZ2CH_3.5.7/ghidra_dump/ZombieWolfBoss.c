// Class: ZombieWolfBoss


/* ZombieWolfBoss::GetTrackOffset() const */

undefined4 ZombieWolfBoss::GetTrackOffset(void)

{
  return 0x3e3851ec;
}


/* ZombieWolfBoss::onUpdate() */

void __thiscall ZombieWolfBoss::onUpdate(ZombieWolfBoss *this)

{
  float fVar1;
  float fVar2;
  
  ZombieTowerDefendBasic::onUpdate((ZombieTowerDefendBasic *)this);
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x810) < fVar1) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_EOT();
    this[0x814] = (ZombieWolfBoss)0x1;
    *(float *)(this + 0x810) = fVar2 + fVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfBoss::blowPlant(Plant*) */

void __thiscall ZombieWolfBoss::blowPlant(ZombieWolfBoss *this,Plant *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  Board *this_00;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_24;
  float local_20;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Plant *)0x0) &&
     (cVar2 = FUN_04660e0c(*(undefined4 *)(param_1 + 0x1d0)), cVar2 == '\0')) {
    RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
    puVar4 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    uVar1 = puVar4[1];
    local_38 = *puVar4;
    local_34 = uVar1;
    local_24 = PVZ_T();
    local_20 = (float)PVZ_T();
    local_20 = local_20 + 1.0;
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(-100);
    iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3);
    local_30 = (float)iVar3;
    local_18 = 2;
    local_2c = uVar1;
    Plant::addRelocationEvent(param_1,(RelocationEvent *)&local_38);
    if (*(code **)(*(long *)param_1 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar2 = Plant::IsInPlantFoodState(param_1);
    }
    else {
      cVar2 = (**(code **)(*(long *)param_1 + 0x1f8))();
    }
    if (cVar2 != '\0') {
      (**(code **)(**(long **)(param_1 + 0xa8) + 0x228))(*(long **)(param_1 + 0xa8));
    }
    if (*(code **)(**(long **)(param_1 + 0xa8) + 0x440) != PlantFramework::stopSpecialEffect) {
      (**(code **)(**(long **)(param_1 + 0xa8) + 0x440))();
    }
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(local_30);
    Board::MovePlant(this_00,param_1,iVar3,*(int *)(param_1 + 0x110),false);
    Plant::bePushed(param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfBoss::burnPlant(Plant*) */

void __thiscall ZombieWolfBoss::burnPlant(ZombieWolfBoss *this,Plant *param_1)

{
  char cVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  Point *extraout_x1;
  BoardTransforms aBStack_40 [8];
  int local_38;
  int local_34;
  string asStack_30 [8];
  RtWeakPtr aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (Plant *)0x0) && (cVar1 = Zombie::isInState((Zombie *)this,4), cVar1 == '\0'))
      && ((cVar1 = FUN_04660e08(param_1[400]), cVar1 == '\0' ||
          (iVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1), iVar2 < 2)))) &&
     ((cVar1 = Plant::IsInvincible(param_1,false), cVar1 == '\0' &&
      (iVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1), 1 < iVar2)))) {
    BoardEntity::CalcGridPosition();
    BoardTransforms::GridToBoardSpaceRect(aBStack_40,extraout_x1);
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_38,(TPoint *)aRStack_28);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_30,"POPANIM_EFFECTS_PLANT_BE_FIRED");
    GetPAMByName(asStack_30);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    std::string::~string(asStack_30);
    nop();
    std::string::string((string *)aRStack_28,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_28,0);
    std::string::~string((string *)aRStack_28);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,(float)local_38,(float)local_34,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_28,-1);
    Effect_PopAnim::SetCentered(this_00,true);
    std::string::string((string *)aRStack_28,"Play_Zomb_Egypt_Explorer_Mvmt_Burn");
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aRStack_28,0.0);
    std::string::~string((string *)aRStack_28);
    nop();
    Plant::KillPlant(param_1,0,1,1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfBoss::onIntroCompleted(std::string const&) */

void ZombieWolfBoss::onIntroCompleted(string *param_1)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x818) != -1)) {
    plVar2 = (long *)Zombie::GetAnimRig((Zombie *)param_1);
    pcVar3 = *(code **)(*plVar2 + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    Zombie::setZombieState((Zombie *)param_1,*(undefined4 *)(param_1 + 0x818),0);
    *(undefined4 *)(param_1 + 0x818) = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfBoss::onFireCompleted(std::string const&) */

void ZombieWolfBoss::onFireCompleted(string *param_1)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x818) != -1)) {
    plVar2 = (long *)Zombie::GetAnimRig((Zombie *)param_1);
    pcVar3 = *(code **)(*plVar2 + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    Zombie::setZombieState((Zombie *)param_1,*(undefined4 *)(param_1 + 0x818),0);
    *(undefined4 *)(param_1 + 0x818) = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfBoss::onBlowCompleted(std::string const&) */

void ZombieWolfBoss::onBlowCompleted(string *param_1)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x818) != -1)) {
    plVar2 = (long *)Zombie::GetAnimRig((Zombie *)param_1);
    pcVar3 = *(code **)(*plVar2 + 0x118);
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate(aRStack_50);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    Zombie::setZombieState((Zombie *)param_1,*(undefined4 *)(param_1 + 0x818),0);
    *(undefined4 *)(param_1 + 0x818) = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWolfBoss::ZombieWolfBoss() */

void __thiscall ZombieWolfBoss::ZombieWolfBoss(ZombieWolfBoss *this)

{
  ZombieTowerDefendBasic::ZombieTowerDefendBasic((ZombieTowerDefendBasic *)this);
  *(undefined ***)this = &PTR_GetClass_0688f6d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWolfBoss_068901a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x820));
  return;
}


/* ZombieWolfBoss::StaticNew() */

ZombieWolfBoss * ZombieWolfBoss::StaticNew(void)

{
  ZombieWolfBoss *this;
  
  this = ::operator_new(0x838);
  ZombieWolfBoss(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfBoss::NotifyCanTakeSkill(ZombieState) */

void __thiscall ZombieWolfBoss::NotifyCanTakeSkill(ZombieWolfBoss *this,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  RtObject *pRVar5;
  Plant *pPVar6;
  ZombieWolfBossProps *pZVar7;
  ZombieWolfBoss ZVar8;
  float fVar9;
  float fVar10;
  string asStack_10 [8];
  long local_8;
  
  ZVar8 = this[0x814];
  local_8 = ___stack_chk_guard;
  if (ZVar8 == (ZombieWolfBoss)0x0) goto LAB_04661d9c;
  uVar2 = FUN_04660e2c(*(undefined8 *)(this + 0x820),*(undefined8 *)(this + 0x828));
  iVar3 = (**(code **)(*(long *)this + 0x300))(this,uVar2);
  uVar4 = FUN_04660e38(*(undefined8 *)(this + 0x820),(long)iVar3);
  FUN_05475d88(asStack_10,uVar4);
  cVar1 = std::operator==(asStack_10,(string *)&DAT_06b1d440);
  if (cVar1 == '\0') {
    cVar1 = std::operator==(asStack_10,(string *)&DAT_06b1d448);
    if (cVar1 == '\0') {
      cVar1 = std::operator==(asStack_10,(string *)&DAT_06b1d508);
      if (((cVar1 != '\0') &&
          (pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this),
          pRVar5 != (RtObject *)0x0)) &&
         (pPVar6 = Sexy::RtObject::Cast<Plant>(pRVar5), pPVar6 != (Plant *)0x0)) {
        *(undefined4 *)(this + 0x818) = param_2;
        fVar9 = (float)PVZ_T();
        pZVar7 = Zombie::GetProps<ZombieWolfBossProps>((Zombie *)this);
        fVar10 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar7 + 0x218));
        this[0x814] = (ZombieWolfBoss)0x0;
        *(float *)(this + 0x810) = fVar10 + fVar9;
        Zombie::setZombieState((Zombie *)this,0x24,0);
        goto LAB_04661ef8;
      }
    }
    else {
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pPVar6 = Sexy::RtObject::Cast<Plant>(pRVar5), pPVar6 != (Plant *)0x0)) {
        *(undefined4 *)(this + 0x818) = param_2;
        fVar9 = (float)PVZ_T();
        pZVar7 = Zombie::GetProps<ZombieWolfBossProps>((Zombie *)this);
        fVar10 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar7 + 0x218));
        this[0x814] = (ZombieWolfBoss)0x0;
        *(float *)(this + 0x810) = fVar10 + fVar9;
        Zombie::setZombieState((Zombie *)this,0x25,0);
        goto LAB_04661ef8;
      }
    }
    ZVar8 = (ZombieWolfBoss)0x0;
    std::string::~string(asStack_10);
  }
  else {
    *(undefined4 *)(this + 0x818) = param_2;
    fVar9 = (float)PVZ_T();
    pZVar7 = Zombie::GetProps<ZombieWolfBossProps>((Zombie *)this);
    fVar10 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar7 + 0x218));
    this[0x814] = (ZombieWolfBoss)0x0;
    *(float *)(this + 0x810) = fVar10 + fVar9;
    Zombie::setZombieState((Zombie *)this,0x23,0);
LAB_04661ef8:
    std::string::~string(asStack_10);
  }
LAB_04661d9c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ZVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfBoss::onEnterState_WolfBossIntro(ZombieState) */

void ZombieWolfBoss::onEnterState_WolfBossIntro(Zombie *param_1)

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
  std::string::string(asStack_58,"onIntroCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_WolfBoss::PlayIntro((ZombieAnimRig_WolfBoss *)pZVar1,aRStack_50);
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
/* ZombieWolfBoss::onEnterState_WolfBossFire(ZombieState) */

void ZombieWolfBoss::onEnterState_WolfBossFire(Zombie *param_1)

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
  std::string::string(asStack_58,"onFireCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_WolfBoss::PlayFire((ZombieAnimRig_WolfBoss *)pZVar1,aRStack_50);
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
/* ZombieWolfBoss::onEnterState_WolfBossBlow(ZombieState) */

void ZombieWolfBoss::onEnterState_WolfBossBlow(Zombie *param_1)

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
  std::string::string(asStack_58,"onBlowCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_WolfBoss::PlayBlow((ZombieAnimRig_WolfBoss *)pZVar1,aRStack_50);
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
/* ZombieWolfBoss::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieWolfBoss::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  ZombieTowerDefendBasic *this;
  ulong uVar5;
  RtObject *this_00;
  Plant *pPVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  bVar1 = std::operator==(param_4,"intro_action");
  if (bVar1) {
    uVar7 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntities
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
    uVar8 = local_20;
    lVar3 = FUN_04660e40(local_20,local_18);
    if (lVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_04660e4c(uVar8,uVar7);
        this = Sexy::RtObject::Cast<ZombieTowerDefendBasic>((RtObject *)*puVar4);
        if (this != (ZombieTowerDefendBasic *)0x0) {
          ZombieTowerDefendBasic::SetWalkUpValue(this,true,10.0,2.0);
        }
        uVar8 = local_20;
        uVar7 = uVar7 + 1;
        uVar5 = FUN_04660e40(local_20,local_18);
      } while (uVar7 < uVar5);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  else {
    bVar1 = std::operator==(param_4,"chui_action");
    if (((bVar1) &&
        (this_00 = (RtObject *)(**(code **)(*(long *)param_1 + 0x228))(param_1),
        this_00 != (RtObject *)0x0)) &&
       (pPVar6 = Sexy::RtObject::Cast<Plant>(this_00), pPVar6 != (Plant *)0x0)) {
      cVar2 = Zombie::isInState((Zombie *)param_1,0x24);
      if (cVar2 == '\0') {
        cVar2 = Zombie::isInState((Zombie *)param_1,0x25);
        if (cVar2 != '\0') {
          pPVar6 = Sexy::RtObject::Cast<Plant>(this_00);
          blowPlant((ZombieWolfBoss *)param_1,pPVar6);
        }
      }
      else {
        pPVar6 = Sexy::RtObject::Cast<Plant>(this_00);
        burnPlant((ZombieWolfBoss *)param_1,pPVar6);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWolfBoss::~ZombieWolfBoss() */

void __thiscall ZombieWolfBoss::~ZombieWolfBoss(ZombieWolfBoss *this)

{
  *(undefined ***)this = &PTR_GetClass_0688f6d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWolfBoss_068901a0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x820));
  ZombieTowerDefendBasic::~ZombieTowerDefendBasic((ZombieTowerDefendBasic *)this);
  return;
}


/* non-virtual thunk to ZombieWolfBoss::~ZombieWolfBoss() */

void __thiscall ZombieWolfBoss::~ZombieWolfBoss(ZombieWolfBoss *this)

{
  ~ZombieWolfBoss(this + -0x10);
  return;
}


/* ZombieWolfBoss::~ZombieWolfBoss() */

void __thiscall ZombieWolfBoss::~ZombieWolfBoss(ZombieWolfBoss *this)

{
  ~ZombieWolfBoss(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWolfBoss::~ZombieWolfBoss() */

void __thiscall ZombieWolfBoss::~ZombieWolfBoss(ZombieWolfBoss *this)

{
  ~ZombieWolfBoss(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfBoss::onZombieInitialize() */

void __thiscall ZombieWolfBoss::onZombieInitialize(ZombieWolfBoss *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  bool bVar1;
  ZombieWolfBossProps *pZVar2;
  LevelModuleManager *this_01;
  TowerDefendModule *this_02;
  undefined8 *puVar3;
  string *psVar4;
  float fVar5;
  float fVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x820);
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_T();
  pZVar2 = Zombie::GetProps<ZombieWolfBossProps>((Zombie *)this);
  fVar6 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x210));
  this[0x814] = (ZombieWolfBoss)0x0;
  *(undefined4 *)(this + 0x818) = 0xffffffff;
  *(float *)(this + 0x810) = fVar6 + fVar5;
  std::vector<std::string,std::allocator<std::string>>::clear(this_00);
  this_01 = (LevelModuleManager *)FUN_04660e18(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_02 = LevelModuleManager::GetModuleByClass<TowerDefendModule>(this_01);
  if (this_02 == (TowerDefendModule *)0x0) {
    std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)&DAT_06b1d440)
    ;
    std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)&DAT_06b1d508)
    ;
    std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)&DAT_06b1d448)
    ;
  }
  else {
    puVar3 = (undefined8 *)
             IntroArenaTutorialBattleModule::getMowerAudio
                       ((IntroArenaTutorialBattleModule *)this_02);
    local_18 = FUN_04661730(*puVar3);
    local_10 = FUN_04661780(puVar3[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      std::vector<std::string,std::allocator<std::string>>::push_back(this_00,psVar4);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWolfBoss::StaticClassInit() */

void ZombieWolfBoss::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieWolfBoss");
      (*pcVar4)(plVar1,asStack_150,FUN_04662cb4,0x838,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWolfBoss,void(ZombieWolfBoss::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate0::Delegate0<ZombieWolfBoss,void(ZombieWolfBoss::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWolfBoss,void(ZombieWolfBoss::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_WOLFBOSS_INTRO");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04662900(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa90);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWolfBoss,void(ZombieWolfBoss::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa98);
  Sexy::Delegate0::Delegate0<ZombieWolfBoss,void(ZombieWolfBoss::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWolfBoss,void(ZombieWolfBoss::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_WOLFBOSS_FIRE");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04662900(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWolfBoss,void(ZombieWolfBoss::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate0::Delegate0<ZombieWolfBoss,void(ZombieWolfBoss::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieWolfBoss,void(ZombieWolfBoss::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_WOLFBOSS_BLOW");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04662900(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieWolfBoss::StaticGetClass() */

long * ZombieWolfBoss::StaticGetClass(void)

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
  uVar2 = ZombieTowerDefendBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWolfBoss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWolfBoss::GetClass() const */

long * ZombieWolfBoss::GetClass(void)

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
  uVar2 = ZombieTowerDefendBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWolfBoss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

