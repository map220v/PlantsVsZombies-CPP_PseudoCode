// Class: Zomboss


/* Zomboss::getHeadIcon() */

_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> * __thiscall
Zomboss::getHeadIcon(Zomboss *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  return in_x8;
}


/* Zomboss::Zomboss() */

void __thiscall Zomboss::Zomboss(Zomboss *this)

{
  ZombieWithActions::ZombieWithActions((ZombieWithActions *)this);
  *(undefined ***)this = &PTR_GetClass_068cb3b0;
  *(undefined ***)(this + 0x10) = &PTR__Zomboss_068cbed0;
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x840));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x890));
  return;
}


/* Zomboss::~Zomboss() */

void __thiscall Zomboss::~Zomboss(Zomboss *this)

{
  *(undefined ***)this = &PTR_GetClass_068cb3b0;
  *(undefined ***)(this + 0x10) = &PTR__Zomboss_068cbed0;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x890));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x840));
  ZombieWithActions::~ZombieWithActions((ZombieWithActions *)this);
  return;
}


/* non-virtual thunk to Zomboss::~Zomboss() */

void __thiscall Zomboss::~Zomboss(Zomboss *this)

{
  ~Zomboss(this + -0x10);
  return;
}


/* Zomboss::~Zomboss() */

void __thiscall Zomboss::~Zomboss(Zomboss *this)

{
  ~Zomboss(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Zomboss::~Zomboss() */

void __thiscall Zomboss::~Zomboss(Zomboss *this)

{
  ~Zomboss(this + -0x10);
  return;
}


/* Zomboss::startFunctioning() */

void Zomboss::startFunctioning(void)

{
  return;
}


/* Zomboss::canChangeStage() const */

undefined8 Zomboss::canChangeStage(void)

{
  return 1;
}


/* Zomboss::onEpilogueAnimDone(std::string const&) */

void Zomboss::onEpilogueAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* Zomboss::onDieAnimDone(std::string const&) */

void Zomboss::onDieAnimDone(string *param_1)

{
  Zombie::setZombieState((Zombie *)param_1,0x21,0);
  return;
}


/* Zomboss::onApplyCondition(ZombieConditions) */

void __thiscall Zomboss::onApplyCondition(Zomboss *this,int param_2)

{
  if ((param_2 != 3) && (param_2 != 4)) {
    if (param_2 != 1) {
      return;
    }
    Zombie::EndCondition();
    Zombie::ApplyCondition((Zombie *)0x41200000,0,this,0,1);
    return;
  }
  Zombie::EndCondition();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Zomboss::IsInRow(int) const */

void __thiscall Zomboss::IsInRow(Zomboss *this,int param_1)

{
  int iVar1;
  undefined1 auStack_10 [4];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = SharkMinion::getRow((SharkMinion *)this);
  (**(code **)(*(long *)this + 0xd0))(auStack_10,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 - local_c < param_1 && param_1 <= iVar1);
}


/* Zomboss::IsDying() const */

undefined8 __thiscall Zomboss::IsDying(Zomboss *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::IsDying((Zombie *)this);
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x22), cVar1 == '\0')) {
    uVar2 = Zombie::isInState((Zombie *)this,0x21);
    return uVar2;
  }
  return 1;
}


/* Zomboss::introduceMyself(RtReflectionDelegate<Sexy::Delegate0>) */

void __thiscall Zomboss::introduceMyself(Zomboss *this,RtReflectionDelegate *param_2)

{
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x840),param_2);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* Zomboss::shouldZombossDie() const */

bool __thiscall Zomboss::shouldZombossDie(Zomboss *this)

{
  float fVar1;
  
  if (*(int *)(this + 0x888) != *(int *)(this + 0x88c)) {
    return false;
  }
  fVar1 = (float)FUN_0474ddd0(*(undefined4 *)(this + 0x280));
  return fVar1 <= 0.0;
}


/* Zomboss::shouldZombossChangeStages() const */

bool __thiscall Zomboss::shouldZombossChangeStages(Zomboss *this)

{
  float fVar1;
  
  fVar1 = (float)FUN_0474ddd0(*(undefined4 *)(this + 0x280));
  return fVar1 <= 0.0;
}


/* Zomboss::tryChangeStage() */

char __thiscall Zomboss::tryChangeStage(Zomboss *this)

{
  char cVar1;
  char cVar2;
  
  if (*(code **)(*(long *)this + 0xa90) == canChangeStage) {
    cVar1 = canChangeStage();
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0xa90))();
  }
  if (cVar1 != '\0') {
    cVar1 = shouldZombossChangeStages(this);
    if (cVar1 != '\0') {
      cVar2 = shouldZombossDie(this);
      if (cVar2 == '\0') {
        Zombie::setZombieState((Zombie *)this,0x20,0);
        return cVar1;
      }
      Zombie::setZombieState((Zombie *)this,0x22,0);
      return cVar2;
    }
  }
  return '\0';
}


/* Zomboss::setActiveStageIndex(int) */

void __thiscall Zomboss::setActiveStageIndex(Zomboss *this,int param_1)

{
  *(int *)(this + 0x888) = param_1;
  (**(code **)(*(long *)this + 0xa80))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Zomboss::hideProgressMeter() const */

void Zomboss::hideProgressMeter(void)

{
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIBossProgressBar");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  UIWidget::SetVisible(this,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Zomboss::updateProgressMeter() const */

void __thiscall Zomboss::updateProgressMeter(Zomboss *this)

{
  float fVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0474ddd0(*(undefined4 *)(this + 0x280));
  FUN_0474ddd4(*(undefined4 *)(this + 0x284));
  local_c = 0x42c80000;
  local_10 = 0;
  fVar1 = CurveEvaluate<float>(&local_10,&local_c,1);
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Zomboss::TakeDamage(DamageInfo const&) */

void __thiscall Zomboss::TakeDamage(Zomboss *this,DamageInfo *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::IsFlying((Zombie *)this);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::TakeDamage((Zombie *)this,param_1);
  updateProgressMeter(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Zomboss::showBossProgressMeter(RtReflectionDelegate<Sexy::Delegate0>) */

void __thiscall Zomboss::showBossProgressMeter(Zomboss *this,RtReflectionDelegate *param_2)

{
  BossProgressMeter *extraout_x0;
  float fVar1;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x890),param_2);
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x8d8) = fVar1 + 1.0;
  *(float *)(this + 0x8dc) = fVar1 + 1.0 + 2.0;
  Board::ArrangeChallengeUI(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_18,"UIBossProgressBar");
  UIWidget::GetWidgetBySheetName(asStack_18);
  nop();
  (**(code **)(*(long *)this + 0xa60))(aRStack_10,this);
  BossProgressMeter::SetHeadIcon(extraout_x0,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  MessageRouter::Post((_func_void *)gMessageRouter);
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::BossShowFillSpark,true);
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Zomboss::StaticNew() */

Zomboss * Zomboss::StaticNew(void)

{
  Zomboss *this;
  
  this = ::operator_new(0x8e0);
  Zomboss(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Zomboss::onChangeActiveStage(int) */

void Zomboss::onChangeActiveStage(int param_1)

{
  uint uVar1;
  int iVar2;
  ZombossBattleModule *this;
  ZombossLastStandMinigameModule *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ZombossBattleModule *)FUN_0474e718(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (ZombossBattleModule *)0x0) {
    iVar2 = ZombossBattleModule::GetZombossStartStageIndex(this);
    uVar1 = (*(int *)((ulong)(uint)param_1 + 0x888) - iVar2) + 2;
    if ((int)uVar1 < 1) {
      uVar1 = 1;
    }
    if (3 < (int)uVar1) {
      uVar1 = 3;
    }
    Sexy::StrFormat("Set_Switch_Music_Wave_%d",asStack_10,(ulong)uVar1);
    ZombossBattleModule::SendZombossMusicEvent(this,asStack_10);
    std::string::~string(asStack_10);
  }
  this_00 = (ZombossLastStandMinigameModule *)
            FUN_0474e724(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 != (ZombossLastStandMinigameModule *)0x0) {
    iVar2 = ZombossLastStandMinigameModule::getStartStageIndex(this_00);
    uVar1 = (*(int *)((ulong)(uint)param_1 + 0x888) - iVar2) + 2;
    if ((int)uVar1 < 1) {
      uVar1 = 1;
    }
    if (3 < (int)uVar1) {
      uVar1 = 3;
    }
    Sexy::StrFormat("Set_Switch_Music_Wave_%d",asStack_10,(ulong)uVar1);
    ZombossLastStandMinigameModule::SendZombossMusicEvent(this_00,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0474e9ac */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Zomboss::onUpdate() */

void __thiscall Zomboss::onUpdate(Zomboss *this)

{
  RtReflectionDelegate *this_00;
  int iVar1;
  float *pfVar2;
  long lVar3;
  RtInvokeVariant *pRVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  fVar5 = (float)PVZ_T();
  if (*(float *)(this + 0x8d8) <= fVar5) {
    uVar7 = *(undefined4 *)(this + 0x8dc);
    auVar8 = PVZ_T();
    local_10 = 0.0;
    local_c = 1.0;
    fVar5 = CurveLerp<float>(auVar8,uVar7,auVar8._0_4_,&local_10,&local_c,1);
    MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,fVar5 * 100.0);
  }
  fVar5 = (float)PVZ_T();
  if (*(float *)(this + 0x8dc) <= fVar5) {
    this_00 = (RtReflectionDelegate *)(this + 0x890);
    fVar5 = (float)FUN_0474ddd0(*(undefined4 *)(this + 0x280));
    fVar6 = (float)FUN_0474ddd4(*(undefined4 *)(this + 0x284));
    local_c = 100.0;
    local_10 = 0.0;
    local_14 = (fVar5 / fVar6) * 100.0;
    pfVar2 = eastl::max_alt<float>(&local_10,&local_14);
    pfVar2 = eastl::min_alt<float>(&local_c,pfVar2);
    local_14 = *pfVar2;
    MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,local_14);
    uVar7 = PVZ_EOT();
    *(undefined4 *)(this + 0x8d8) = uVar7;
    *(undefined4 *)(this + 0x8dc) = uVar7;
    iVar1 = ::RtReflectionDelegate::operator_cast_to_int(this_00);
    if ((iVar1 != 0) &&
       (lVar3 = RtReflectionDelegate<Sexy::Delegate0>::TryGetDelegate
                          ((RtReflectionDelegate<Sexy::Delegate0> *)this_00), lVar3 != 0)) {
      pRVar4 = (RtInvokeVariant *)
               RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                         ((RtReflectionDelegate<Sexy::Delegate0> *)this_00);
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar4);
    }
  }
  tryChangeStage(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Zomboss::onIntroAnimDone(std::string const&) */

void Zomboss::onIntroAnimDone(string *param_1)

{
  RtReflectionDelegate *this;
  int iVar1;
  long lVar2;
  RtInvokeVariant *pRVar3;
  
  this = (RtReflectionDelegate *)(param_1 + 0x840);
  Zombie::setZombieState((Zombie *)param_1,0,0);
  iVar1 = ::RtReflectionDelegate::operator_cast_to_int(this);
  if ((iVar1 != 0) &&
     (lVar2 = RtReflectionDelegate<Sexy::Delegate0>::TryGetDelegate
                        ((RtReflectionDelegate<Sexy::Delegate0> *)this), lVar2 != 0)) {
    pRVar3 = (RtInvokeVariant *)
             RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                       ((RtReflectionDelegate<Sexy::Delegate0> *)this);
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Zomboss::onEnterState_Intro(ZombieState) */

void Zomboss::onEnterState_Intro(Zombie *param_1)

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
  std::string::string(asStack_58,"onIntroAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Zomboss::PlayIntro((ZombieAnimRig_Zomboss *)pZVar1,aRStack_50);
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
/* Zomboss::onEnterState_ChangeStage(ZombieState) */

void Zomboss::onEnterState_ChangeStage(Zomboss *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setActiveStageIndex(param_1,*(int *)(param_1 + 0x888) + 1);
  MessageRouter::Post((_func_void *)gMessageRouter);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onChangeStageAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Zomboss::PlayChangeStage((ZombieAnimRig_Zomboss *)pZVar1,aRStack_50);
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
/* Zomboss::onEnterState_Epilogue(ZombieState) */

void Zomboss::onEnterState_Epilogue(Zombie *param_1)

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
  std::string::string(asStack_58,"onEpilogueAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Zomboss::PlayEpilogue((ZombieAnimRig_Zomboss *)pZVar1,aRStack_50);
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
/* Zomboss::onEnterState_Death(ZombieState) */

void Zomboss::onEnterState_Death(Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  ZombieHydraHeadAnimRig *pZVar6;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  RtId aRStack_78 [8];
  Iterator aIStack_70 [32];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  hideProgressMeter();
  (**(code **)(*(long *)param_1 + 0x2f0))(param_1);
  Zombie::ClearConditions(param_1);
  Zombie::broadcastZombieDied(param_1,(DamageInfo *)0x0);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_70,uVar3,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_70), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_70);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)aRStack_78);
    Sexy::RtId::~RtId(aRStack_78);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_80);
    if (param_1 != (Zombie *)pRVar4) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      (**(code **)(*plVar5 + 0x48))();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    Sexy::RtDbTable::Iterator::operator++(aIStack_70,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_70);
  pZVar6 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_80);
  std::string::string((string *)aIStack_70,"onDieAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
             aIStack_70);
  cVar2 = ZombieAnimRig_Zomboss::PlayZombossDie((ZombieAnimRig_Zomboss *)pZVar6,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aIStack_70);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (cVar2 != '\0') {
    Zombie::SetIsUsingAnimTranslation(param_1,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Zomboss::setStartStageIndex(int) */

void __thiscall Zomboss::setStartStageIndex(Zomboss *this,int param_1)

{
  undefined *this_00;
  ZombossProps *pZVar1;
  
  *(int *)(this + 0x888) = param_1;
  pZVar1 = Zombie::GetProps<ZombossProps>((Zombie *)this);
  *(int *)(this + 0x88c) = param_1 + *(int *)(pZVar1 + 0x210) + -1;
  this_00 = gMessageRouter;
  pZVar1 = Zombie::GetProps<ZombossProps>((Zombie *)this);
  MessageRouter::Post<int,int>
            ((MessageRouter *)this_00,Message::BossSetPhaseCount,*(int *)(pZVar1 + 0x210));
  (**(code **)(*(long *)this + 0xa80))(this,*(undefined4 *)(this + 0x888));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Zomboss::StaticClassInit() */

void Zomboss::StaticClassInit(void)

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
      std::string::string(asStack_150,"Zomboss");
      (*pcVar4)(plVar1,asStack_150,FUN_0474f474,0x8e0,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa98);
  Sexy::Delegate1<ZombieState>::Delegate1<Zomboss,void(Zomboss::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa0);
  Sexy::Delegate0::Delegate0<Zomboss,void(Zomboss::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa8);
  Sexy::Delegate1<ZombieState>::Delegate1<Zomboss,void(Zomboss::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"Zomboss_Intro");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0474ef58(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate1<ZombieState>::Delegate1<Zomboss,void(Zomboss::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab8);
  Sexy::Delegate0::Delegate0<Zomboss,void(Zomboss::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac0);
  Sexy::Delegate1<ZombieState>::Delegate1<Zomboss,void(Zomboss::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"Zomboss_ChangeStage");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0474ef58(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac8);
  Sexy::Delegate1<ZombieState>::Delegate1<Zomboss,void(Zomboss::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xad0);
  Sexy::Delegate0::Delegate0<Zomboss,void(Zomboss::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xad8);
  Sexy::Delegate1<ZombieState>::Delegate1<Zomboss,void(Zomboss::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"Zomboss_Epilogue");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0474ef58(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xae0);
  Sexy::Delegate1<ZombieState>::Delegate1<Zomboss,void(Zomboss::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xae8);
  Sexy::Delegate0::Delegate0<Zomboss,void(Zomboss::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaf0);
  Sexy::Delegate1<ZombieState>::Delegate1<Zomboss,void(Zomboss::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"Zomboss_Death");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0474ef58(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaf8);
  Sexy::Delegate1<ZombieState>::Delegate1<Zomboss,void(Zomboss::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb00);
  Sexy::Delegate0::Delegate0<Zomboss,void(Zomboss::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb08);
  Sexy::Delegate1<ZombieState>::Delegate1<Zomboss,void(Zomboss::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"Zomboss_None");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0474ef58(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Zomboss::StaticGetClass() */

long * Zomboss::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Zomboss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Zomboss::GetClass() const */

long * Zomboss::GetClass(void)

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
  (*pcVar3)(plVar1,"Zomboss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Zomboss::onZombieInitialize() */

void __thiscall Zomboss::onZombieInitialize(Zomboss *this)

{
  undefined4 uVar1;
  
  Zombie::onZombieInitialize((Zombie *)this);
  *(undefined4 *)(this + 0x888) = 0;
  *(undefined4 *)(this + 0x88c) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x8d8) = uVar1;
  *(undefined4 *)(this + 0x8dc) = uVar1;
  Zombie::SetSuppressDeath((Zombie *)this,true);
  return;
}

