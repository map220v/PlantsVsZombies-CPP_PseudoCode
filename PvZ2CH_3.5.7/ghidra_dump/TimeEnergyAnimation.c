// Class: TimeEnergyAnimation


/* TimeEnergyAnimation::Draw(Sexy::Graphics*) */

void TimeEnergyAnimation::Draw(Graphics *param_1)

{
  return;
}


/* non-virtual thunk to TimeEnergyAnimation::Draw(Sexy::Graphics*) */

void __thiscall TimeEnergyAnimation::Draw(TimeEnergyAnimation *this,Graphics *param_1)

{
  Draw((Graphics *)(this + -0x28));
  return;
}


/* TimeEnergyAnimation::ButtonDepress(int) */

void __thiscall TimeEnergyAnimation::ButtonDepress(TimeEnergyAnimation *this,int param_1)

{
  if (param_1 != 0x4d2) {
    return;
  }
  (**(code **)(*(long *)this + 0x48))();
  return;
}


/* non-virtual thunk to TimeEnergyAnimation::ButtonDepress(int) */

void __thiscall TimeEnergyAnimation::ButtonDepress(TimeEnergyAnimation *this,int param_1)

{
  ButtonDepress(this + -0x30,param_1);
  return;
}


/* TimeEnergyAnimation::~TimeEnergyAnimation() */

void __thiscall TimeEnergyAnimation::~TimeEnergyAnimation(TimeEnergyAnimation *this)

{
  *(undefined ***)this = &PTR_GetClass_06776f50;
  *(undefined ***)(this + 0x28) = &PTR__TimeEnergyAnimation_06777008;
  *(undefined ***)(this + 0x30) = &PTR_ButtonPress_06777038;
  FUN_05476c50(this + 0x50);
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* non-virtual thunk to TimeEnergyAnimation::~TimeEnergyAnimation() */

void __thiscall TimeEnergyAnimation::~TimeEnergyAnimation(TimeEnergyAnimation *this)

{
  ~TimeEnergyAnimation(this + -0x28);
  return;
}


/* TimeEnergyAnimation::~TimeEnergyAnimation() */

void __thiscall TimeEnergyAnimation::~TimeEnergyAnimation(TimeEnergyAnimation *this)

{
  ~TimeEnergyAnimation(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TimeEnergyAnimation::~TimeEnergyAnimation() */

void __thiscall TimeEnergyAnimation::~TimeEnergyAnimation(TimeEnergyAnimation *this)

{
  ~TimeEnergyAnimation(this + -0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyAnimation::StaticClassInit() */

void TimeEnergyAnimation::StaticClassInit(void)

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
    std::string::string(asStack_10,"TimeEnergyAnimation");
    (*pcVar2)(plVar1,asStack_10,FUN_03db7bf8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyAnimation::StaticGetClass() */

long * TimeEnergyAnimation::StaticGetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"TimeEnergyAnimation",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyAnimation::GetClass() const */

long * TimeEnergyAnimation::GetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"TimeEnergyAnimation",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TimeEnergyAnimation::TimeEnergyAnimation() */

void __thiscall TimeEnergyAnimation::TimeEnergyAnimation(TimeEnergyAnimation *this)

{
  Renderable *extraout_x1;
  
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  Renderable::Renderable((Renderable *)(this + 0x28),extraout_x1);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x30));
  *(undefined ***)this = &PTR_GetClass_06776f50;
  *(undefined ***)(this + 0x28) = &PTR__TimeEnergyAnimation_06777008;
  *(undefined ***)(this + 0x30) = &PTR_ButtonPress_06777038;
  FUN_05476574(this + 0x50);
  return;
}


/* TimeEnergyAnimation::StaticNew() */

TimeEnergyAnimation * TimeEnergyAnimation::StaticNew(void)

{
  TimeEnergyAnimation *this;
  
  this = ::operator_new(0x60);
  TimeEnergyAnimation(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyAnimation::AddToRenderQueue(RenderQueue*) */

void __thiscall
TimeEnergyAnimation::AddToRenderQueue(TimeEnergyAnimation *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x98);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<TimeEnergyAnimation,void(TimeEnergyAnimation::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,800000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TimeEnergyAnimation::onDestroy() */

void __thiscall TimeEnergyAnimation::onDestroy(TimeEnergyAnimation *this)

{
  MessageRouter::Broadcast<int,int>
            ((MessageRouter *)gMessageRouter,Message::TimeEnergyTrigger,*(int *)(this + 0x38));
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 0x18))();
    *(undefined8 *)(this + 0x40) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeEnergyAnimation::Init(float, TimeEnergyTriggerType) */

void __thiscall TimeEnergyAnimation::Init(float param_1,TimeEnergyAnimation *this,int param_3)

{
  TimeEnergyAnimation *pTVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PVZ2UIButton *this_00;
  undefined8 uVar5;
  wchar_t *pwVar6;
  Board *pBVar7;
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  pTVar1 = this + 0x50;
  local_8 = ___stack_chk_guard;
  AnimationController::SetDuration((AnimationController *)this,param_1);
  FUN_03db78d8(this + 0x1c);
  *(int *)(this + 0x38) = param_3;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  FUN_054772c4(pTVar1,&DAT_056f11a8);
  if (param_3 == 0) {
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ada038);
    *(undefined8 *)(this + 0x48) = uVar5;
    std::string::string(asStack_20,"[TIME_ENERGY_ADVICE_WORM_HOLE]");
    StringHelper::ToStringValue(asStack_20);
    FUN_054766c8(pTVar1,aCStack_18);
    FUN_05476c50(aCStack_18);
    std::string::~string(asStack_20);
    nop();
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(aCStack_18,L"[PVZ1MODE_TIMEENERGY_WARNING_WORM]",asStack_20);
  }
  else {
    if (param_3 == 1) {
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad9dd0);
      *(undefined8 *)(this + 0x48) = uVar5;
      std::string::string(asStack_20,"[TIME_ENERGY_ADVICE_PORTAL]");
      StringHelper::ToStringValue(asStack_20);
      FUN_054766c8(pTVar1,aCStack_18);
      FUN_05476c50(aCStack_18);
      std::string::~string(asStack_20);
      nop();
      pwVar6 = L"[PVZ1MODE_TIMEENERGY_WARNING_PORTAL]";
    }
    else {
      if (param_3 != 2) goto LAB_03db87b8;
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad9f40);
      *(undefined8 *)(this + 0x48) = uVar5;
      std::string::string(asStack_20,"[TIME_ENERGY_ADVICE_BLACK_HOLE]");
      StringHelper::ToStringValue(asStack_20);
      FUN_054766c8(pTVar1,aCStack_18);
      FUN_05476c50(aCStack_18);
      std::string::~string(asStack_20);
      nop();
      pwVar6 = L"[PVZ1MODE_TIMEENERGY_WARNING_BLACKHOLE]";
    }
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(aCStack_18,pwVar6,asStack_20);
  }
  Board::DisplayAdviceAgain(pBVar7,aCStack_18,0x11,0);
  FUN_05476c50(aCStack_18);
  nop();
LAB_03db87b8:
  FUN_05478178(asStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x4d2,(ButtonListener *)(this + 0x30),(wstring *)asStack_20,aCStack_18);
  *(PVZ2UIButton **)(this + 0x40) = this_00;
  FUN_05476c50(asStack_20);
  nop();
  (**(code **)(**(long **)(this + 0x40) + 0x198))
            (*(long **)(this + 0x40),0,0,*(undefined4 *)(gLawnApp + 0x724),
             *(undefined4 *)(gLawnApp + 0x728));
  iVar4 = *(int *)(gLawnApp + 0x724);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x48));
  iVar2 = *(int *)(gLawnApp + 0x728);
  *(int *)(this + 0x58) = (int)((float)(iVar4 / 2) - (float)iVar3 * 0.5);
  iVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x48));
  *(int *)(this + 0x5c) = (int)((float)(iVar2 / 2) - (float)iVar4 * 0.5);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TimeEnergyAnimation::Create(float, TimeEnergyTriggerType) */

TimeEnergyAnimation * TimeEnergyAnimation::Create(TimeEnergyAnimation *param_1,undefined4 param_2)

{
  TimeEnergyAnimation *pTVar1;
  
  pTVar1 = GameObject::Create<TimeEnergyAnimation>();
  Init(param_1,pTVar1,param_2);
  return pTVar1;
}

