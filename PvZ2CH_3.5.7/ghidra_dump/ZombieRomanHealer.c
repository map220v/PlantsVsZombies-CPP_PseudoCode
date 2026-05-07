// Class: ZombieRomanHealer


/* ZombieRomanHealer::onApplyCondition(ZombieConditions) */

void __thiscall ZombieRomanHealer::onApplyCondition(undefined8 param_1,int param_2)

{
  if (param_2 != 0x2f) {
    return;
  }
  Zombie::EndCondition();
  return;
}


/* ZombieRomanHealer::onLostHead() */

void ZombieRomanHealer::onLostHead(void)

{
  long in_x0;
  
  nop();
  *(undefined1 *)(in_x0 + 0x850) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealer::StaticClassInit() */

void ZombieRomanHealer::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanHealer");
    (*pcVar2)(plVar1,asStack_10,FUN_04eeb620,0x858,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanHealer::StaticGetClass() */

long * ZombieRomanHealer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanHealer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanHealer::GetClass() const */

long * ZombieRomanHealer::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRomanHealer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanHealer::compareZombies(Zombie*, Zombie*) const */

bool __thiscall
ZombieRomanHealer::compareZombies(ZombieRomanHealer *this,Zombie *param_1,Zombie *param_2)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar4 = *pfVar2;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_2);
  bVar1 = true;
  if ((*pfVar2 <= fVar4) && (bVar1 = false, fVar4 == *pfVar2)) {
    fVar4 = (float)FUN_04ee7110(*(undefined4 *)(param_1 + 0x280));
    fVar3 = (float)FUN_04ee7110(*(undefined4 *)(param_2 + 0x280));
    bVar1 = fVar4 < fVar3;
  }
  return bVar1;
}


/* ZombieRomanHealer::filterZombieByHealingStatus(Zombie*) */

undefined8 __thiscall
ZombieRomanHealer::filterZombieByHealingStatus(ZombieRomanHealer *this,Zombie *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(this + 0x84c);
  if (iVar1 == 1) {
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_1);
    if (cVar2 != '\0') {
      uVar3 = Zombie::HasCondition(param_1,0x19);
      return uVar3;
    }
  }
  else if (iVar1 == 0) {
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_1);
    if (cVar2 != '\0') {
      return 0;
    }
    fVar4 = (float)FUN_04ee7110(*(undefined4 *)(param_1 + 0x280));
    fVar5 = (float)FUN_04ee7114(*(undefined4 *)(param_1 + 0x284));
    if (fVar4 < fVar5) {
      return 1;
    }
  }
  else if ((iVar1 == 2) &&
          (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_1),
          cVar2 == '\0')) {
    cVar2 = Zombie::HasCondition(param_1,0x2f);
    if (((cVar2 == '\0') &&
        (((cVar2 = Zombie::HasCondition(param_1,0x30), cVar2 == '\0' &&
          (cVar2 = Zombie::HasCondition(param_1,0x47), cVar2 == '\0')) &&
         (cVar2 = Zombie::HasCondition(param_1,0x4c), cVar2 == '\0')))) &&
       (cVar2 = Zombie::HasCondition(param_1,0x4e), cVar2 == '\0')) {
      uVar3 = Zombie::HasCondition(param_1,0x4f);
      return uVar3;
    }
    return 1;
  }
  return 0;
}


/* ZombieRomanHealer::SetNotHealing() */

void __thiscall ZombieRomanHealer::SetNotHealing(ZombieRomanHealer *this)

{
  *(undefined4 *)(this + 0x84c) = 3;
  return;
}


/* ZombieRomanHealer::compareHealerZombies(Zombie*, Zombie*) const */

bool __thiscall
ZombieRomanHealer::compareHealerZombies(ZombieRomanHealer *this,Zombie *param_1,Zombie *param_2)

{
  bool bVar1;
  bool bVar2;
  string *psVar3;
  float *pfVar4;
  float *pfVar5;
  
  psVar3 = (string *)Zombie::GetTypeName(param_2);
  bVar2 = std::operator==(psVar3,"roman_healer");
  bVar1 = true;
  if (bVar2) {
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_2);
    bVar1 = *pfVar4 < *pfVar5;
  }
  return bVar1;
}


/* ZombieRomanHealer::IsValidFriendlyTarget(Zombie*) */

ulong __thiscall ZombieRomanHealer::IsValidFriendlyTarget(ZombieRomanHealer *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  
  if ((param_1 != (Zombie *)0x0) && (this != (ZombieRomanHealer *)param_1)) {
    uVar4 = operator|(1,8);
    cVar1 = Zombie::MatchesAny(param_1,uVar4);
    if (cVar1 == '\0') {
      bVar2 = Creature::IsOnBoard();
      if ((bVar2 != 0) &&
         (bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar3)) {
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        if (*pfVar5 <= *pfVar6) {
          cVar1 = NewPVPUtils::IsPlayingNewPVP();
          if (cVar1 == '\0') {
            return (ulong)bVar2;
          }
          uVar7 = NewPVPUtils::IsSameRegion((BoardEntity *)this,(BoardEntity *)param_1);
          return uVar7;
        }
      }
    }
  }
  return 0;
}


/* ZombieRomanHealer::ZombieRomanHealer() */

void __thiscall ZombieRomanHealer::ZombieRomanHealer(ZombieRomanHealer *this)

{
  ZombieWithActions::ZombieWithActions((ZombieWithActions *)this);
  *(undefined ***)this = &PTR_GetClass_06a00110;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRomanHealer_06a00b80;
  return;
}


/* ZombieRomanHealer::StaticNew() */

ZombieRomanHealer * ZombieRomanHealer::StaticNew(void)

{
  ZombieRomanHealer *this;
  
  this = ::operator_new(0x858);
  ZombieRomanHealer(this);
  return this;
}


/* ZombieRomanHealer::updateState_Eat() */

void __thiscall ZombieRomanHealer::updateState_Eat(ZombieRomanHealer *this)

{
  char cVar1;
  long lVar2;
  RiftThemeFastSpell *pRVar3;
  
  lVar2 = (**(code **)(*(long *)this + 0x428))();
  if (lVar2 == 0) {
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
    (**(code **)(*(long *)this + 0x958))(this,lVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealer::onZombieInitialize() */

void __thiscall ZombieRomanHealer::onZombieInitialize(ZombieRomanHealer *this)

{
  RtObject *this_00;
  ZombieRomanHealerHealActionDefinition *pZVar1;
  RiftThemeFastSpell *pRVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieWithActions::onZombieInitialize((ZombieWithActions *)this);
  this[0x850] = (ZombieRomanHealer)0x0;
  *(undefined4 *)(this + 0x84c) = 3;
  ZombieWithActions::getBaseActionDefinition<ZombieRomanHealerHealActionDefinition>();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pZVar1 = Sexy::RtObject::Cast<ZombieRomanHealerHealActionDefinition>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar3 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x50));
  fVar4 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x68));
  fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x80));
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if (pRVar2 != (RiftThemeFastSpell *)0x0) {
    fVar6 = (float)RiftThemeFastSpell::GetReducedCDRate();
    fVar3 = fVar3 * (1.0 - fVar6);
    fVar6 = (float)RiftThemeFastSpell::GetReducedCDRate();
    fVar4 = fVar4 * (1.0 - fVar6);
    fVar6 = (float)RiftThemeFastSpell::GetReducedCDRate();
    fVar5 = fVar5 * (1.0 - fVar6);
  }
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x840) = fVar6 + fVar3;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x844) = fVar3 + fVar4;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x848) = fVar3 + fVar5;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealer::updateCastTime(bool) */

void __thiscall ZombieRomanHealer::updateCastTime(ZombieRomanHealer *this,bool param_1)

{
  int iVar1;
  RtObject *this_00;
  ZombieRomanHealerHealActionDefinition *pZVar2;
  RiftThemeFastSpell *pRVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieWithActions::getBaseActionDefinition<ZombieRomanHealerHealActionDefinition>();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pZVar2 = Sexy::RtObject::Cast<ZombieRomanHealerHealActionDefinition>(this_00);
  if (param_1) {
    fVar4 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x58));
    fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x70));
    fVar6 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x88));
  }
  else {
    fVar4 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x60));
    fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x78));
    fVar6 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x90));
  }
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if (pRVar3 != (RiftThemeFastSpell *)0x0) {
    fVar7 = (float)RiftThemeFastSpell::GetReducedCDRate();
    fVar4 = fVar4 * (1.0 - fVar7);
    fVar7 = (float)RiftThemeFastSpell::GetReducedCDRate();
    fVar5 = fVar5 * (1.0 - fVar7);
    fVar7 = (float)RiftThemeFastSpell::GetReducedCDRate();
    fVar6 = fVar6 * (1.0 - fVar7);
  }
  iVar1 = *(int *)(this + 0x84c);
  if (iVar1 == 1) {
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x844) = fVar4 + fVar5;
  }
  else if (iVar1 == 2) {
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x848) = fVar4 + fVar6;
  }
  else if (iVar1 == 0) {
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x840) = fVar5 + fVar4;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanHealer::HealZombie(Zombie*, float) */

void __thiscall ZombieRomanHealer::HealZombie(ZombieRomanHealer *this,Zombie *param_1,float param_2)

{
  char cVar1;
  
  if (*(int *)(this + 0x84c) == 1) {
    Zombie::EndCondition(param_1,0x19);
  }
  else if (*(int *)(this + 0x84c) == 2) {
    cVar1 = Zombie::HasCondition(param_1,0x2f);
    if (cVar1 != '\0') {
      Zombie::EndCondition(param_1,0x2f);
    }
    cVar1 = Zombie::HasCondition(param_1,0x30);
    if (cVar1 != '\0') {
      Zombie::EndCondition(param_1,0x30);
    }
    cVar1 = Zombie::HasCondition(param_1,0x47);
    if (cVar1 != '\0') {
      Zombie::EndCondition(param_1,0x47);
    }
    cVar1 = Zombie::HasCondition(param_1,0x4c);
    if (cVar1 != '\0') {
      Zombie::EndCondition(param_1,0x4c);
    }
    cVar1 = Zombie::HasCondition(param_1,0x4e);
    if (cVar1 != '\0') {
      Zombie::EndCondition(param_1,0x4e);
    }
    cVar1 = Zombie::HasCondition(param_1,0x4f);
    if (cVar1 != '\0') {
      Zombie::EndCondition(param_1,0x4f);
    }
  }
  else {
    Zombie::HealByPercent(param_1,param_2);
  }
  updateCastTime(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealer::startHeal() */

void __thiscall ZombieRomanHealer::startHeal(ZombieRomanHealer *this)

{
  char cVar1;
  uint uVar2;
  RiftThemeFastSpell *pRVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar3 == (RiftThemeFastSpell *)0x0) || (cVar1 = Creature::IsOnBoard(), cVar1 == '\0')) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,uVar4);
  ZombieWithActions::getBaseActionDefinition<ZombieRomanHealerHealActionDefinition>();
  uVar2 = ZombieWithActions::tryStartAction((ZombieWithActions *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  updateCastTime(this,SUB41(uVar2,0));
  if ((uVar2 & 0xff) == 0) {
    SetNotHealing(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ZombieRomanHealer::updateState_Idle() */

void __thiscall ZombieRomanHealer::updateState_Idle(ZombieRomanHealer *this)

{
  char cVar1;
  RiftThemeFastSpell *pRVar2;
  long lVar3;
  float fVar4;
  
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if (pRVar2 != (RiftThemeFastSpell *)0x0) {
    cVar1 = Creature::IsOnBoard();
    if (((cVar1 != '\0') && (cVar1 = RealObject::IsOnTeam(this,2), cVar1 != '\0')) &&
       (*(int *)(this + 0x84c) == 3)) {
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x844) < fVar4) {
        *(undefined4 *)(this + 0x84c) = 1;
        startHeal(this);
      }
      else {
        fVar4 = (float)PVZ_T();
        if (fVar4 <= *(float *)(this + 0x848)) {
          fVar4 = (float)PVZ_T();
          if (*(float *)(this + 0x840) < fVar4) {
            *(undefined4 *)(this + 0x84c) = 0;
            startHeal(this);
          }
        }
        else {
          *(undefined4 *)(this + 0x84c) = 2;
          startHeal(this);
        }
      }
    }
    lVar3 = (**(code **)(*(long *)this + 0x428))(this);
    if (lVar3 != 0) {
      Zombie::setZombieState((Zombie *)this,2,0);
      return;
    }
  }
  Zombie::updateState_Idle((Zombie *)this);
  return;
}


/* ZombieRomanHealer::updateState_Walk() */

void __thiscall ZombieRomanHealer::updateState_Walk(ZombieRomanHealer *this)

{
  char cVar1;
  RiftThemeFastSpell *pRVar2;
  long lVar3;
  float fVar4;
  Zombie *pZVar5;
  
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar2 != (RiftThemeFastSpell *)0x0) && (cVar1 = Creature::IsOnBoard(), cVar1 != '\0')) {
    pZVar5._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar5._0_4_,0,this,0x6f,1);
    return;
  }
  cVar1 = Creature::IsOnBoard();
  if (((cVar1 != '\0') && (cVar1 = RealObject::IsOnTeam(this,2), cVar1 != '\0')) &&
     (*(int *)(this + 0x84c) == 3)) {
    fVar4 = (float)PVZ_T();
    if (*(float *)(this + 0x844) < fVar4) {
      *(undefined4 *)(this + 0x84c) = 1;
      startHeal(this);
    }
    else {
      fVar4 = (float)PVZ_T();
      if (fVar4 <= *(float *)(this + 0x848)) {
        fVar4 = (float)PVZ_T();
        if (*(float *)(this + 0x840) < fVar4) {
          *(undefined4 *)(this + 0x84c) = 0;
          startHeal(this);
        }
      }
      else {
        *(undefined4 *)(this + 0x84c) = 2;
        startHeal(this);
      }
    }
  }
  lVar3 = (**(code **)(*(long *)this + 0x428))(this);
  if (lVar3 != 0) {
    Zombie::setZombieState((Zombie *)this,2,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealer::TryFindTarget() */

void __thiscall ZombieRomanHealer::TryFindTarget(ZombieRomanHealer *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  ZombieRomanHealerHealActionDefinition *pZVar3;
  Zombie *this_01;
  string *psVar4;
  Zombie *pZVar5;
  Zombie *pZVar6;
  Zombie *pZVar7;
  Zombie *pZVar8;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  ZombieWithActions::getBaseActionDefinition<ZombieRomanHealerHealActionDefinition>();
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  pZVar3 = Sexy::RtObject::Cast<ZombieRomanHealerHealActionDefinition>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  pZVar6 = (Zombie *)0x0;
  pZVar8 = (Zombie *)0x0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    cVar2 = IsValidFriendlyTarget(this,this_01);
    pZVar5 = pZVar6;
    pZVar7 = pZVar8;
    if (cVar2 != '\0') {
      psVar4 = (string *)Zombie::GetTypeName(this_01);
      cVar2 = StringRestrictionSet::IsIncluded((StringRestrictionSet *)(pZVar3 + 0xa0),psVar4);
      if ((cVar2 != '\0') && (cVar2 = filterZombieByHealingStatus(this,this_01), cVar2 != '\0')) {
        cVar2 = Zombie::HasCondition(this_01,0x41);
        if ((cVar2 == '\0') &&
           ((((cVar2 = Zombie::HasCondition(this_01,0x40), cVar2 == '\0' &&
              (cVar2 = Zombie::HasCondition(this_01,0x60), cVar2 == '\0')) &&
             (cVar2 = Zombie::HasCondition(this_01,0x42), cVar2 == '\0')) &&
            ((cVar2 = Zombie::HasCondition(this_01,0x43), cVar2 == '\0' &&
             (cVar2 = Zombie::HasCondition(this_01,0x44), cVar2 == '\0')))))) {
          pZVar5 = this_01;
          if (pZVar6 != (Zombie *)0x0) {
            psVar4 = (string *)Zombie::GetTypeName(this_01);
            bVar1 = std::operator==(psVar4,"roman_healer");
            if ((bVar1) && (cVar2 = compareHealerZombies(this,this_01,pZVar6), cVar2 != '\0')) {
              pZVar6 = this_01;
            }
            cVar2 = compareZombies(this,this_01,pZVar6);
            pZVar5 = pZVar6;
            if (cVar2 != '\0') {
              pZVar5 = this_01;
            }
          }
        }
        else {
          pZVar7 = this_01;
          if ((pZVar8 != (Zombie *)0x0) &&
             (cVar2 = compareZombies(this,this_01,pZVar8), pZVar7 = pZVar8, cVar2 != '\0')) {
            pZVar7 = this_01;
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    pZVar6 = pZVar5;
    pZVar8 = pZVar7;
  }
  if (pZVar6 == (Zombie *)0x0) {
    pZVar6 = pZVar8;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pZVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealer::tryPlaceStaff(Sexy::Point const&) */

void __thiscall ZombieRomanHealer::tryPlaceStaff(ZombieRomanHealer *this,Point *param_1)

{
  char cVar1;
  ZombieRomanHealerProps *pZVar2;
  ulong uVar3;
  long *extraout_x0;
  long *extraout_x0_00;
  GridIcelotusDropwater *pGVar4;
  RealObject *this_00;
  undefined8 uVar5;
  Board *pBVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::CanAddGraveStoneAt
                    (*(Board **)(gLawnApp + 0x9f0),*(int *)param_1,*(int *)(param_1 + 4),true);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    pZVar2 = Zombie::GetProps<ZombieRomanHealerProps>((Zombie *)this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,1,
               *(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    uVar8 = local_78;
    uVar5 = local_80;
    uVar3 = FUN_04ee7124(local_80,local_78);
    if (uVar3 != 0) {
      for (uVar7 = 0; uVar7 < uVar3; uVar7 = uVar7 + 1) {
        FUN_04ee7130(uVar5,uVar7);
        nop();
        if ((extraout_x0 != (long *)0x0) &&
           (cVar1 = PlantRestrictionSet::IsIncluded((Plant *)(pZVar2 + 0x230)), uVar5 = local_80,
           uVar8 = local_78, cVar1 != '\0')) {
          pcVar9 = *(code **)(*extraout_x0 + 0x120);
          uVar5 = 0;
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,this,aPStack_90,0);
          (*pcVar9)(extraout_x0,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
          goto LAB_04eea63c;
        }
        uVar3 = FUN_04ee7124(uVar5,uVar8);
      }
      for (uVar7 = 0; uVar7 < uVar3; uVar7 = uVar7 + 1) {
        FUN_04ee7130(uVar5,uVar7);
        nop();
        if (extraout_x0_00 != (long *)0x0) {
          pcVar9 = *(code **)(*extraout_x0_00 + 0x120);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,this,aPStack_90,0);
          (*pcVar9)(extraout_x0_00,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
          uVar5 = local_80;
          uVar8 = local_78;
        }
        uVar3 = FUN_04ee7124(uVar5,uVar8);
      }
    }
    pGVar4 = EntityFinder::GetGridItemAt<GridIcelotusDropwater>
                       (*(int *)param_1,*(int *)(param_1 + 4));
    this_00 = (RealObject *)(**(code **)(*(long *)this + 0x428))(this);
    if (pGVar4 == (GridIcelotusDropwater *)0x0) {
      if ((this_00 != (RealObject *)0x0) &&
         (cVar1 = RealObject::IsOnOpposingTeam(this_00,(RealObject *)this), cVar1 != '\0')) {
        pcVar9 = *(code **)(*(long *)this_00 + 0x120);
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,this,aPStack_90,0);
        (*pcVar9)(this_00,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
    }
    else {
      pcVar9 = *(code **)(*(long *)pGVar4 + 0x120);
      Sexy::Point::Point(aPStack_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,this,aPStack_90,0);
      (*pcVar9)(pGVar4,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aDStack_68,(RtWeakPtrBase *)(pZVar2 + 0x228));
    uVar5 = Board::AddGridItem(pBVar6,aDStack_68,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4)
                               ,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_68);
LAB_04eea63c:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealer::dropStaff() */

void __thiscall ZombieRomanHealer::dropStaff(ZombieRomanHealer *this)

{
  bool bVar1;
  long lVar2;
  RtObject *this_00;
  HealerStaffAnimRig *extraout_x0;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  lVar2 = (**(code **)(*(long *)this + 0x428))(this);
  if (lVar2 != 0) {
    BoardEntity::CalcGridPosition();
    local_78 = local_58;
  }
  this_00 = (RtObject *)tryPlaceStaff(this,(Point *)&local_78);
  if ((this_00 != (RtObject *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<GridItemEntityTargeting>(this_00), bVar1)) {
    nop();
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)&local_58,"onAnimationComplete");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               (string *)&local_58);
    HealerStaffAnimRig::PlayFlip(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanHealer::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieRomanHealer::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if ((bVar1) && (param_1[0x850] != (string)0x0)) {
    dropStaff((ZombieRomanHealer *)param_1);
    return;
  }
  return;
}


/* ZombieRomanHealer::~ZombieRomanHealer() */

void __thiscall ZombieRomanHealer::~ZombieRomanHealer(ZombieRomanHealer *this)

{
  *(undefined ***)this = &PTR_GetClass_06a00110;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRomanHealer_06a00b80;
  ZombieWithActions::~ZombieWithActions((ZombieWithActions *)this);
  return;
}


/* non-virtual thunk to ZombieRomanHealer::~ZombieRomanHealer() */

void __thiscall ZombieRomanHealer::~ZombieRomanHealer(ZombieRomanHealer *this)

{
  ~ZombieRomanHealer(this + -0x10);
  return;
}


/* ZombieRomanHealer::~ZombieRomanHealer() */

void __thiscall ZombieRomanHealer::~ZombieRomanHealer(ZombieRomanHealer *this)

{
  ~ZombieRomanHealer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieRomanHealer::~ZombieRomanHealer() */

void __thiscall ZombieRomanHealer::~ZombieRomanHealer(ZombieRomanHealer *this)

{
  ~ZombieRomanHealer(this + -0x10);
  return;
}

