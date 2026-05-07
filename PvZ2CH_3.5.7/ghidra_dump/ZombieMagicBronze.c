// Class: ZombieMagicBronze


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMagicBronze::getAshPAMName() const */

void __thiscall ZombieMagicBronze::getAshPAMName(ZombieMagicBronze *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_BRONZE_ASH");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMagicBronze::GetStunnedEffectOffset() const */

void ZombieMagicBronze::GetStunnedEffectOffset(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,-15.0,0.0,75.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMagicBronze::getElectrocutePAMName() const */

void __thiscall ZombieMagicBronze::getElectrocutePAMName(ZombieMagicBronze *this)

{
  char cVar1;
  string *extraout_x1;
  string *in_x8;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_BRONZE_SHOCK");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMagicBronze::onEnterState_Debut(ZombieState) */

void ZombieMagicBronze::onEnterState_Debut(Zombie *param_1)

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
  ZombieAnimRig_MagicBronze::PlayDebut((ZombieAnimRig_MagicBronze *)pZVar1,aRStack_50);
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


/* ZombieMagicBronze::onSummonAnimDone(std::string const&) */

void ZombieMagicBronze::onSummonAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,1);
      return;
    }
  }
  return;
}


/* ZombieMagicBronze::onPullAnimDone(std::string const&) */

void ZombieMagicBronze::onPullAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,1);
      return;
    }
  }
  return;
}


/* ZombieMagicBronze::onDebutAnimDone(std::string const&) */

void ZombieMagicBronze::onDebutAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,1);
      return;
    }
  }
  return;
}


/* ZombieMagicBronze::onApplyCondition(ZombieConditions) */

void __thiscall ZombieMagicBronze::onApplyCondition(ZombieMagicBronze *this,int param_2)

{
  int iVar1;
  
  if ((param_2 == 2) && (iVar1 = Zombie::getZombieStateSerialization((Zombie *)this), iVar1 == 0x1f)
     ) {
    Zombie::setZombieState((Zombie *)this,1,0);
    return;
  }
  return;
}


/* ZombieMagicBronze::~ZombieMagicBronze() */

void __thiscall ZombieMagicBronze::~ZombieMagicBronze(ZombieMagicBronze *this)

{
  *(undefined ***)this = &PTR_GetClass_068c88f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMagicBronze_068c9350;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieMagicBronze::~ZombieMagicBronze() */

void __thiscall ZombieMagicBronze::~ZombieMagicBronze(ZombieMagicBronze *this)

{
  ~ZombieMagicBronze(this + -0x10);
  return;
}


/* ZombieMagicBronze::~ZombieMagicBronze() */

void __thiscall ZombieMagicBronze::~ZombieMagicBronze(ZombieMagicBronze *this)

{
  ~ZombieMagicBronze(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieMagicBronze::~ZombieMagicBronze() */

void __thiscall ZombieMagicBronze::~ZombieMagicBronze(ZombieMagicBronze *this)

{
  ~ZombieMagicBronze(this + -0x10);
  return;
}


/* ZombieMagicBronze::ZombieMagicBronze() */

void __thiscall ZombieMagicBronze::ZombieMagicBronze(ZombieMagicBronze *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068c88f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMagicBronze_068c9350;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar1;
  return;
}


/* ZombieMagicBronze::StaticNew() */

ZombieMagicBronze * ZombieMagicBronze::StaticNew(void)

{
  ZombieMagicBronze *this;
  
  this = ::operator_new(0x808);
  ZombieMagicBronze(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMagicBronze::DoPullSkill() */

void __thiscall ZombieMagicBronze::DoPullSkill(ZombieMagicBronze *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  Board *pBVar5;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (iVar2 != 0x1f) {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    BoardTransforms::BoardSpaceToGrid(*pfVar3,pfVar3[1],&local_18,&local_14);
    iVar2 = local_18;
    do {
      iVar1 = local_14;
      pBVar5 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"");
      lVar4 = Board::GetPlantAt(pBVar5,iVar2,iVar1,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (lVar4 != 0) goto LAB_04748584;
      iVar2 = iVar2 + -1;
    } while (local_18 + -1 <= iVar2);
    iVar2 = local_18 + -2;
    if (-1 < iVar2) {
      do {
        iVar1 = local_14;
        pBVar5 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"");
        lVar4 = Board::GetPlantAt(pBVar5,iVar2,iVar1,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (lVar4 != 0) {
          Zombie::setZombieState((Zombie *)this,0x1f,0);
          break;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
  }
LAB_04748584:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieMagicBronze::DoSkill(ZombieSkillType) */

char __thiscall ZombieMagicBronze::DoSkill(ZombieMagicBronze *this,int param_2)

{
  char cVar1;
  
  if (param_2 == 0) {
    cVar1 = Zombie::isInState((Zombie *)this,1);
    if (cVar1 != '\0') {
      Zombie::setZombieState((Zombie *)this,0x20,0);
      return cVar1;
    }
  }
  else if ((param_2 == 1) && (cVar1 = Zombie::isInState((Zombie *)this,1), cVar1 != '\0')) {
    DoPullSkill(this);
    return cVar1;
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMagicBronze::pullPlant(Plant*, bool) */

void __thiscall ZombieMagicBronze::pullPlant(ZombieMagicBronze *this,Plant *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  Board *this_00;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_54;
  float local_50;
  undefined1 local_4c;
  undefined4 local_48;
  float local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  float local_24;
  float local_20;
  undefined1 local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar5 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  RelocationEvent::RelocationEvent((RelocationEvent *)&local_68);
  local_68 = uVar1;
  local_64 = uVar2;
  local_54 = PVZ_T();
  iVar3 = *(int *)(param_1 + 0x114);
  iVar4 = *(int *)(param_1 + 0x110);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)&local_38,"");
  lVar6 = Board::GetPlantAt(this_00,iVar3 + 1,iVar4,(string *)&local_38);
  local_5c = uVar2;
  if ((lVar6 == 0) || (!param_2)) {
    std::string::~string((string *)&local_38);
    nop();
    local_50 = (float)PVZ_T();
    local_50 = local_50 + 0.5;
    iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(param_1 + 0x114) + 1);
    local_60 = (float)iVar3;
    local_4c = 1;
    local_48 = 1;
    Plant::addRelocationEvent(param_1,(RelocationEvent *)&local_68);
  }
  else {
    std::string::~string((string *)&local_38);
    nop();
    local_4c = 1;
    local_50 = (float)PVZ_T();
    local_50 = local_50 + 0.5;
    iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(param_1 + 0x114) + 1);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    local_48 = 1;
    local_60 = (float)(iVar3 - iVar4 / 2);
    Plant::addRelocationEvent(param_1,(RelocationEvent *)&local_68);
    RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
    local_1c = 1;
    iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(param_1 + 0x114) + 1);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    local_38 = (float)(iVar3 - iVar4 / 2);
    local_34 = uVar2;
    local_24 = (float)PVZ_T();
    local_24 = local_24 + 0.5;
    local_20 = (float)PVZ_T();
    local_20 = local_20 + 1.5;
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(-100);
    iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3);
    local_30 = (float)iVar3;
    local_18 = 2;
    local_2c = uVar2;
    Plant::addRelocationEvent(param_1,(RelocationEvent *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMagicBronze::startPulling(Zombie*) */

void ZombieMagicBronze::startPulling(Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  float *pfVar3;
  RtObject *this;
  Plant *this_00;
  int iVar4;
  int iVar5;
  Board *pBVar6;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x330))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0'))
  {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    BoardTransforms::BoardSpaceToGrid(*pfVar3,pfVar3[1],&local_18,&local_14);
    iVar5 = local_18;
    do {
      iVar4 = local_14;
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"");
      this = (RtObject *)Board::GetPlantAt(pBVar6,iVar5,iVar4,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if ((this != (RtObject *)0x0) && (bVar2 = Sexy::RtObject::IsA<PlantTurnip>(this), bVar2))
      goto LAB_04748918;
      iVar5 = iVar5 + -1;
      iVar4 = local_18 + -1;
    } while (iVar4 <= iVar5);
    if (-1 < iVar4) {
      do {
        iVar5 = local_14;
        pBVar6 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"");
        this_00 = (Plant *)Board::GetPlantAt(pBVar6,iVar4,iVar5,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (this_00 != (Plant *)0x0) {
          cVar1 = PlantTurnip::WhetherCanBePulled(this_00,local_18);
          if (cVar1 == '\0') break;
          if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
            cVar1 = Plant::IsInPlantFoodState(this_00);
          }
          else {
            cVar1 = (**(code **)(*(long *)this_00 + 0x1f8))(this_00);
          }
          if (cVar1 != '\0') break;
          cVar1 = FUN_04748284(*(undefined4 *)(this_00 + 0x1d0));
          if (cVar1 == '\0') {
            pullPlant((ZombieMagicBronze *)param_1,this_00,local_18 + -1 == iVar4);
          }
          if (*(code **)(**(long **)(this_00 + 0xa8) + 0x440) != PlantFramework::stopSpecialEffect)
          {
            (**(code **)(**(long **)(this_00 + 0xa8) + 0x440))();
          }
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
  }
LAB_04748918:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMagicBronze::onEnterState_Summon(ZombieState) */

void ZombieMagicBronze::onEnterState_Summon(Zombie *param_1)

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
  std::string::string(asStack_58,"onSummonAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_MagicBronze::PlaySummon((ZombieAnimRig_MagicBronze *)pZVar1,aRStack_50);
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
/* ZombieMagicBronze::onEnterState_Pull(ZombieState) */

void ZombieMagicBronze::onEnterState_Pull(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  undefined4 uVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_T();
  *(undefined4 *)(param_1 + 0x800) = uVar2;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onPullAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_MagicBronze::PlayPull((ZombieAnimRig_MagicBronze *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_58,"Play_Zomb_Kongfu_Qigong_Absorb");
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
/* ZombieMagicBronze::StaticClassInit() */

void ZombieMagicBronze::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieMagicBronze");
      (*pcVar4)(plVar1,asStack_150,FUN_04749204,0x808,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMagicBronze,void(ZombieMagicBronze::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieMagicBronze,void(ZombieMagicBronze::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMagicBronze,void(ZombieMagicBronze::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MagicBronze_Pull");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04748e50(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMagicBronze,void(ZombieMagicBronze::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieMagicBronze,void(ZombieMagicBronze::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMagicBronze,void(ZombieMagicBronze::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MagicBronze_Summon");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04748e50(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMagicBronze,void(ZombieMagicBronze::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieMagicBronze,void(ZombieMagicBronze::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieMagicBronze,void(ZombieMagicBronze::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_MagicBronze_Debut");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04748e50(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieMagicBronze::StaticGetClass() */

long * ZombieMagicBronze::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMagicBronze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMagicBronze::GetClass() const */

long * ZombieMagicBronze::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMagicBronze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMagicBronze::onZombieInitialize() */

void __thiscall ZombieMagicBronze::onZombieInitialize(ZombieMagicBronze *this)

{
  ZombieMagicBronzeProps *pZVar1;
  undefined4 uVar2;
  
  Zombie::onZombieInitialize((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieMagicBronzeProps>((Zombie *)this);
  ZombieSkillUtils::LoadSummonZombiesResources((CZombieSummonDataPool *)(pZVar1 + 0x210));
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar2;
  return;
}


/* ZombieMagicBronze::onPlaceOnBoard() */

void __thiscall ZombieMagicBronze::onPlaceOnBoard(ZombieMagicBronze *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x21,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMagicBronze::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieMagicBronze::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  ZombieHydraHeadAnimRig *this;
  ZombieMagicBronzeProps *pZVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar2 == '\0'))
  {
    bVar3 = std::operator==(param_4,"call_action");
    if (bVar3) {
      pZVar4 = Zombie::GetProps<ZombieMagicBronzeProps>((Zombie *)param_1);
      ZombieSkillUtils::SummonZombies((CZombieSummonDataPool *)(pZVar4 + 0x210),(Zombie *)param_1);
    }
    else {
      bVar3 = std::operator==(param_4,"skill_action");
      if (bVar3) {
        this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
        fVar5 = (float)ZombieAnimRig_MagicBronze::GetPullDuration((ZombieAnimRig_MagicBronze *)this)
        ;
        fVar10 = *(float *)(param_1 + 0x800);
        fVar6 = (float)PVZ_T();
        fVar9 = *(float *)(param_1 + 0x1c);
        fVar7 = (float)FUN_04748298(*(undefined4 *)(param_1 + 0x18),fVar9,
                                    *(undefined4 *)(param_1 + 0x20));
        puVar1 = gMessageRouter;
        BoardTransforms::BoardSpaceToGrid((BoardTransforms *)gMessageRouter,fVar7,fVar9);
        MessageRouter::Post<Sexy::Point_const&,float,Sexy::Point,float>
                  ((MessageRouter *)((fVar5 + fVar10) - fVar6),puVar1,Message::PlantAbsorbed,
                   asStack_10);
        uVar8 = PVZ_EOT();
        *(undefined4 *)(param_1 + 0x800) = uVar8;
        startPulling((Zombie *)param_1);
        std::string::string(asStack_10,"Play_Plant_Absorbed");
        RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
        std::string::~string(asStack_10);
        nop();
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

