// Class: ZombieBeachOctopus


/* ZombieBeachOctopus::onZombieInitialize() */

void __thiscall ZombieBeachOctopus::onZombieInitialize(ZombieBeachOctopus *this)

{
  undefined4 uVar1;
  
  ZombieWithActions::onZombieInitialize((ZombieWithActions *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x844) = 0;
  *(undefined4 *)(this + 0x840) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachOctopus::StaticClassInit() */

void ZombieBeachOctopus::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBeachOctopus");
    (*pcVar2)(plVar1,asStack_10,FUN_04643454,0x848,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachOctopus::StaticGetClass() */

long * ZombieBeachOctopus::StaticGetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieBeachOctopus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBeachOctopus::GetClass() const */

long * ZombieBeachOctopus::GetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieBeachOctopus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachOctopus::calcRangedTargetGridRect() */

void ZombieBeachOctopus::calcRangedTargetGridRect(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BoardEntity *in_x0;
  int iVar7;
  Insets *in_x8;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    Sexy::Insets::Insets(in_x8,0,0,0,0);
  }
  else {
    iVar2 = BoardEntity::CalcColumnPosition(in_x0);
    iVar3 = SharkMinion::getRow((SharkMinion *)in_x0);
    iVar4 = BoardConstants::NUMBER_OF_ROWS();
    iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar6 = BoardConstants::NUMBER_OF_ROWS();
    Sexy::Point::Point(aPStack_10,5,iVar3);
    cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_10);
    iVar7 = -iVar3;
    if (cVar1 != '\0') {
      iVar7 = (iVar4 / 2 + 1) - iVar3;
    }
    Sexy::Insets::Insets(in_x8,-iVar2,iVar7,iVar5 + 1,iVar6 / 2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachOctopus::ZombieBeachOctopus() */

void __thiscall ZombieBeachOctopus::ZombieBeachOctopus(ZombieBeachOctopus *this)

{
  undefined4 uVar1;
  
  ZombieWithActions::ZombieWithActions((ZombieWithActions *)this);
  *(undefined ***)this = &PTR_GetClass_068836f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBeachOctopus_06884160;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x844) = 0;
  *(undefined4 *)(this + 0x840) = uVar1;
  return;
}


/* ZombieBeachOctopus::StaticNew() */

ZombieBeachOctopus * ZombieBeachOctopus::StaticNew(void)

{
  ZombieBeachOctopus *this;
  
  this = ::operator_new(0x848);
  ZombieBeachOctopus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachOctopus::doZap() */

void __thiscall ZombieBeachOctopus::doZap(ZombieBeachOctopus *this)

{
  char cVar1;
  RiftThemeFastSpell *pRVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar2 == (RiftThemeFastSpell *)0x0) || (cVar1 = Creature::IsOnBoard(), cVar1 == '\0')) {
    ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,1);
  }
  else {
    ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,0);
  }
  ZombieWithActions::getBaseActionDefinition<ZombieProjectileActionDefinition>();
  ZombieWithActions::tryStartAction((ZombieWithActions *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBeachOctopus::updateState_Eat() */

void __thiscall ZombieBeachOctopus::updateState_Eat(ZombieBeachOctopus *this)

{
  char cVar1;
  RtObject *this_00;
  PlantGroup *pPVar2;
  RiftThemeFastSpell *pRVar3;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if (this_00 == (RtObject *)0x0) {
    cVar1 = Zombie::IsSuspended((Zombie *)this);
    if (cVar1 == '\0') {
      pRVar3 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
      if ((pRVar3 == (RiftThemeFastSpell *)0x0) || (cVar1 = Creature::IsOnBoard(), cVar1 == '\0')) {
        Zombie::setZombieState((Zombie *)this,1,0);
        return;
      }
      (**(code **)(*(long *)this + 600))(this);
    }
  }
  else {
    pPVar2 = Sexy::RtObject::Cast<PlantGroup>(this_00);
    if ((pPVar2 != (PlantGroup *)0x0) && (cVar1 = PlantGroup::CanBeRangeTargeted(), cVar1 != '\0'))
    {
      doZap(this);
      return;
    }
    (**(code **)(*(long *)this + 0x958))(this,this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachOctopus::updateState_Idle() */

void __thiscall ZombieBeachOctopus::updateState_Idle(ZombieBeachOctopus *this)

{
  bool bVar1;
  char cVar2;
  RiftThemeFastSpell *pRVar3;
  RtObject *pRVar4;
  PlantGroup *pPVar5;
  ZombieProjectileActionDefinition *pZVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if (pRVar3 == (RiftThemeFastSpell *)0x0) {
    Zombie::updateState_Idle((Zombie *)this);
    goto LAB_04643d98;
  }
  fVar7 = (float)RiftThemeFastSpell::GetReducedCDRate();
  ZombieWithActions::getBaseActionDefinition<ZombieProjectileActionDefinition>();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    fVar8 = (float)PVZ_EOT();
    if (*(float *)(this + 0x840) == fVar8) {
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
      ;
      pZVar6 = Sexy::RtObject::Cast<ZombieProjectileActionDefinition>(pRVar4);
      fVar8 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar6 + 0x54));
      fVar9 = (float)PVZ_T();
      *(float *)(this + 0x840) = fVar9 + (1.0 - fVar7) * fVar8;
    }
    fVar8 = (float)PVZ_T();
    if (*(float *)(this + 0x840) < fVar8) {
      fVar8 = (float)BoardHelpers::ApplyLevelBasedModifierValue(0.0,0xe,8,1);
      if (fVar8 <= 0.0) {
LAB_04643e78:
        pRVar4 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        pZVar6 = Sexy::RtObject::Cast<ZombieProjectileActionDefinition>(pRVar4);
        fVar8 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar6 + 0x54));
        fVar9 = (float)PVZ_T();
        *(float *)(this + 0x840) = fVar9 + (1.0 - fVar7) * fVar8;
      }
      else {
        if (*(int *)(this + 0x844) != 0) {
          *(undefined4 *)(this + 0x844) = 0;
          goto LAB_04643e78;
        }
        *(undefined4 *)(this + 0x844) = 1;
      }
      doZap(this);
    }
  }
  pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
  if (pRVar4 == (RtObject *)0x0) {
    Zombie::updateState_Idle((Zombie *)this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    pPVar5 = Sexy::RtObject::Cast<PlantGroup>(pRVar4);
    if ((pPVar5 == (PlantGroup *)0x0) || (cVar2 = PlantGroup::CanBeRangeTargeted(), cVar2 == '\0'))
    {
      Zombie::setZombieState((Zombie *)this,2,0);
    }
    else {
      doZap(this);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
LAB_04643d98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachOctopus::updateState_Walk() */

void __thiscall ZombieBeachOctopus::updateState_Walk(ZombieBeachOctopus *this)

{
  char cVar1;
  bool bVar2;
  RiftThemeFastSpell *pRVar3;
  RtObject *pRVar4;
  PlantGroup *pPVar5;
  ZombieProjectileActionDefinition *pZVar6;
  float fVar7;
  float fVar8;
  Zombie *pZVar9;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar3 != (RiftThemeFastSpell *)0x0) && (cVar1 = Creature::IsOnBoard(), cVar1 != '\0')) {
    pZVar9._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar9._0_4_,0,this,0x6f,1);
    goto LAB_04643f04;
  }
  ZombieWithActions::getBaseActionDefinition<ZombieProjectileActionDefinition>();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar2) {
    fVar7 = (float)PVZ_EOT();
    if (*(float *)(this + 0x840) == fVar7) {
      fVar7 = (float)PVZ_T();
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
      ;
      pZVar6 = Sexy::RtObject::Cast<ZombieProjectileActionDefinition>(pRVar4);
      fVar8 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar6 + 0x54));
      *(float *)(this + 0x840) = fVar8 + fVar7;
    }
    fVar7 = (float)PVZ_T();
    if (*(float *)(this + 0x840) < fVar7) {
      fVar7 = (float)BoardHelpers::ApplyLevelBasedModifierValue(0.0,0xe,8,1);
      if (fVar7 <= 0.0) {
LAB_04644020:
        fVar7 = (float)PVZ_T();
        pRVar4 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        pZVar6 = Sexy::RtObject::Cast<ZombieProjectileActionDefinition>(pRVar4);
        fVar8 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar6 + 0x5c));
        *(float *)(this + 0x840) = fVar8 + fVar7;
      }
      else {
        if (*(int *)(this + 0x844) != 0) {
          *(undefined4 *)(this + 0x844) = 0;
          goto LAB_04644020;
        }
        *(undefined4 *)(this + 0x844) = 1;
      }
      doZap(this);
    }
  }
  pRVar4 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
  if (pRVar4 != (RtObject *)0x0) {
    pPVar5 = Sexy::RtObject::Cast<PlantGroup>(pRVar4);
    if ((pPVar5 == (PlantGroup *)0x0) || (cVar1 = PlantGroup::CanBeRangeTargeted(), cVar1 == '\0'))
    {
      Zombie::setZombieState((Zombie *)this,2,0);
    }
    else {
      doZap(this);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_04643f04:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBeachOctopus::FindSpellTarget() */

void __thiscall ZombieBeachOctopus::FindSpellTarget(ZombieBeachOctopus *this)

{
  undefined8 uVar1;
  code *pcVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x1f8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar1 = (*pcVar2)(this,avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ZombieBeachOctopus::~ZombieBeachOctopus() */

void __thiscall ZombieBeachOctopus::~ZombieBeachOctopus(ZombieBeachOctopus *this)

{
  *(undefined ***)this = &PTR_GetClass_068836f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBeachOctopus_06884160;
  ZombieWithActions::~ZombieWithActions((ZombieWithActions *)this);
  return;
}


/* non-virtual thunk to ZombieBeachOctopus::~ZombieBeachOctopus() */

void __thiscall ZombieBeachOctopus::~ZombieBeachOctopus(ZombieBeachOctopus *this)

{
  ~ZombieBeachOctopus(this + -0x10);
  return;
}


/* ZombieBeachOctopus::~ZombieBeachOctopus() */

void __thiscall ZombieBeachOctopus::~ZombieBeachOctopus(ZombieBeachOctopus *this)

{
  ~ZombieBeachOctopus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieBeachOctopus::~ZombieBeachOctopus() */

void __thiscall ZombieBeachOctopus::~ZombieBeachOctopus(ZombieBeachOctopus *this)

{
  ~ZombieBeachOctopus(this + -0x10);
  return;
}

