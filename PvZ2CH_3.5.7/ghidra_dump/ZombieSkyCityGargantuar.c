// Class: ZombieSkyCityGargantuar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityGargantuar::getAshPAMName() const */

void __thiscall ZombieSkyCityGargantuar::getAshPAMName(ZombieSkyCityGargantuar *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_SKYCITY_GARGANTUAR_ASH");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieSkyCityGargantuar::~ZombieSkyCityGargantuar() */

void __thiscall ZombieSkyCityGargantuar::~ZombieSkyCityGargantuar(ZombieSkyCityGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_068e0930;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCityGargantuar_068e1388;
  ZombieGargantuar::~ZombieGargantuar((ZombieGargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieSkyCityGargantuar::~ZombieSkyCityGargantuar() */

void __thiscall ZombieSkyCityGargantuar::~ZombieSkyCityGargantuar(ZombieSkyCityGargantuar *this)

{
  ~ZombieSkyCityGargantuar(this + -0x10);
  return;
}


/* ZombieSkyCityGargantuar::~ZombieSkyCityGargantuar() */

void __thiscall ZombieSkyCityGargantuar::~ZombieSkyCityGargantuar(ZombieSkyCityGargantuar *this)

{
  ~ZombieSkyCityGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSkyCityGargantuar::~ZombieSkyCityGargantuar() */

void __thiscall ZombieSkyCityGargantuar::~ZombieSkyCityGargantuar(ZombieSkyCityGargantuar *this)

{
  ~ZombieSkyCityGargantuar(this + -0x10);
  return;
}


/* ZombieSkyCityGargantuar::onEnterState_Walk(ZombieState) */

void ZombieSkyCityGargantuar::onEnterState_Walk(long param_1)

{
  Zombie::onEnterState_Walk();
  *(undefined1 *)(param_1 + 0x808) = 0;
  return;
}


/* ZombieSkyCityGargantuar::ZombieSkyCityGargantuar() */

void __thiscall ZombieSkyCityGargantuar::ZombieSkyCityGargantuar(ZombieSkyCityGargantuar *this)

{
  ZombieGargantuar::ZombieGargantuar((ZombieGargantuar *)this);
  this[0x808] = (ZombieSkyCityGargantuar)0x0;
  *(undefined ***)this = &PTR_GetClass_068e0930;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCityGargantuar_068e1388;
  return;
}


/* ZombieSkyCityGargantuar::StaticNew() */

ZombieSkyCityGargantuar * ZombieSkyCityGargantuar::StaticNew(void)

{
  ZombieSkyCityGargantuar *this;
  
  this = ::operator_new(0x810);
  ZombieSkyCityGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityGargantuar::StaticClassInit() */

void ZombieSkyCityGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkyCityGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_047a8888,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityGargantuar::StaticGetClass() */

long * ZombieSkyCityGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityGargantuar::GetClass() const */

long * ZombieSkyCityGargantuar::GetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityGargantuar::onEnterState_Smashing(ZombieState) */

void ZombieSkyCityGargantuar::onEnterState_Smashing(Zombie *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ZombieGargantuarProps *pZVar3;
  undefined1 *__n;
  code *pcVar4;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  __n = auStack_48;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_plant");
  nop();
  if (param_1[0x808] != (Zombie)0x0) {
    std::string::append(asStack_40,"attack_ship",(size_t)__n);
  }
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar2 + 0x168);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar1 = (*pcVar4)(plVar2,asStack_40,0,aDStack_38);
  *(undefined4 *)(param_1 + 0x804) = uVar1;
  pZVar3 = Zombie::GetProps<ZombieGargantuarProps>(param_1);
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar3 + 600),0.0);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityGargantuar::GetRemainImp() */

int __thiscall ZombieSkyCityGargantuar::GetRemainImp(ZombieSkyCityGargantuar *this)

{
  int iVar1;
  ZombieGargantuarProps *pZVar2;
  
  pZVar2 = Zombie::GetProps<ZombieGargantuarProps>((Zombie *)this);
  iVar1 = FUN_047a8420(*(undefined8 *)(pZVar2 + 0x210),*(undefined8 *)(pZVar2 + 0x218));
  return iVar1 - *(int *)(this + 0x800);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityGargantuar::ThrowRemainImp() */

void __thiscall ZombieSkyCityGargantuar::ThrowRemainImp(ZombieSkyCityGargantuar *this)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  ZombieGargantuarProps *pZVar4;
  code *pcVar5;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnTeam(this,1);
  if (cVar1 == '\0') {
    GetRemainImp(this);
    plVar3 = (long *)Zombie::GetAnimRig((Zombie *)this);
    pcVar5 = *(code **)(*plVar3 + 0x168);
    std::string::string(asStack_58,"fire");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnDeadThrowEnd);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<ZombieSkyCityGargantuar,void(ZombieSkyCityGargantuar::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    uVar2 = (*pcVar5)(plVar3,asStack_58,0,aDStack_38);
    *(undefined4 *)(this + 0xd0) = uVar2;
    std::string::~string(asStack_58);
    nop();
    pZVar4 = Zombie::GetProps<ZombieGargantuarProps>((Zombie *)this);
    RealObject::PlayPositionalSound((RealObject *)this,(string *)(pZVar4 + 0x260),0.0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityGargantuar::OnDeadThrowEnd(std::string const&) */

void ZombieSkyCityGargantuar::OnDeadThrowEnd(string *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetRemainImp((ZombieSkyCityGargantuar *)param_1);
  if (0 < iVar1) {
    ThrowRemainImp((ZombieSkyCityGargantuar *)param_1);
    return;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x148))(*(long **)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  return;
}


/* ZombieSkyCityGargantuar::playDeathAnimation() */

void __thiscall ZombieSkyCityGargantuar::playDeathAnimation(ZombieSkyCityGargantuar *this)

{
  LawnApp *pLVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  (**(code **)(*(long *)this + 0x2f0))();
  Zombie::ClearConditions((Zombie *)this);
  pLVar1 = gLawnApp;
  uVar3 = operator|(1,2);
  cVar2 = LawnApp::IsInModule(pLVar1,uVar3);
  if ((cVar2 == '\0') && (iVar4 = GetRemainImp(this), 0 < iVar4)) {
    ThrowRemainImp(this);
    iVar4 = *(int *)(this + 0xd0);
  }
  else {
    iVar4 = (**(code **)(**(long **)(this + 0xc0) + 0x148))(*(long **)(this + 0xc0));
    *(int *)(this + 0xd0) = iVar4;
  }
  if (iVar4 != -1) {
    SetFlag<DebugLogFlags>(this + 0xcc,1,0);
    SetFlag<DebugLogFlags>(this + 0xcc,0x400,1);
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* ZombieSkyCityGargantuar::isImpReadyToBeThrown() */

bool __thiscall ZombieSkyCityGargantuar::isImpReadyToBeThrown(ZombieSkyCityGargantuar *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ZombieSkyCityGargantuarProps *pZVar4;
  ZombieGargantuarProps *pZVar5;
  ulong uVar6;
  
  pZVar4 = Zombie::GetProps<ZombieSkyCityGargantuarProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar4 + 0x268);
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  pZVar5 = Zombie::GetProps<ZombieGargantuarProps>((Zombie *)this);
  uVar6 = FUN_047a8420(*(undefined8 *)(pZVar5 + 0x210),*(undefined8 *)(pZVar5 + 0x218));
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  return iVar2 == iVar3 - (iVar1 + *(uint *)(this + 0x800) * iVar1) &&
         *(uint *)(this + 0x800) < uVar6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityGargantuar::updateState_Walk() */

void __thiscall ZombieSkyCityGargantuar::updateState_Walk(ZombieSkyCityGargantuar *this)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  RtObject *this_00;
  LevelModuleManager *this_01;
  PooyanModule *this_02;
  PooyanShooter *this_03;
  code *pcVar4;
  Point aPStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  RtMixedPtrBase aRStack_68 [96];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar2 == '\0') {
    cVar2 = LawnApp::IsInModule(pLVar1,2);
    if (cVar2 == '\0') {
      this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
      if (this_00 == (RtObject *)0x0) {
        cVar2 = (**(code **)(*(long *)this + 0xa08))(this);
        if (((cVar2 != '\0') &&
            (cVar2 = ZombieGargantuar::isFarEnoughOutToThrowImp((ZombieGargantuar *)this),
            cVar2 != '\0')) && (cVar2 = RealObject::IsOnTeam(this,2), cVar2 != '\0')) {
          Zombie::setZombieState((Zombie *)this,0x20,0);
        }
      }
      else {
        ToolPacketData::GetProps();
        cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        if ((cVar2 != '\0') && (bVar3 = Sexy::RtObject::IsA<GridItemAirship>(this_00), bVar3)) {
          this[0x808] = (ZombieSkyCityGargantuar)0x1;
        }
        Zombie::setZombieState((Zombie *)this,0x1f,0);
      }
    }
  }
  else {
    this_01 = (LevelModuleManager *)FUN_047a8418(*(undefined8 *)(*(long *)(pLVar1 + 0x9f0) + 0xad8))
    ;
    this_02 = LevelModuleManager::GetModuleByClass<PooyanModule>(this_01);
    PooyanModule::GetPooyanShooter();
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_68);
    if ((bVar3) && (cVar2 = PooyanModule::IsPooyanShooterAlive(this_02), cVar2 != '\0')) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      PooyanModule::GetPooyanShooter();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      PooyanShooter::GetPooyanShooterRect();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      (**(code **)(*(long *)this + 0x3a0))(&local_78,this);
      if ((ABS((float)(local_88 + local_80 / 2) - (float)(local_78 + local_70 / 2)) <=
           ABS((float)(local_80 + local_70) * 0.5)) &&
         (ABS((float)(local_84 + local_7c / 2) - (float)(local_74 + local_6c / 2)) <=
          ABS((float)(local_7c + local_6c) * 0.5))) {
        PooyanModule::GetPooyanShooter();
        this_03 = (PooyanShooter *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        cVar2 = PooyanShooter::IsInvincible(this_03);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        if (cVar2 == '\0') {
          PooyanModule::KillPooyanShooter(this_02);
          MessageRouter::Post((_func_void *)gMessageRouter);
        }
        else {
          pcVar4 = *(code **)(*(long *)this + 0x110);
          Sexy::Point::Point(aPStack_98,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x497423f0,local_90,local_8c,(RtWeakPtr *)aRStack_68,aPStack_98,0
                    );
          (*pcVar4)(this,(RtWeakPtr *)aRStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

