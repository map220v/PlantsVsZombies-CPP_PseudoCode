// Class: EffectAnimRig_ZombossHologram


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombossHologram::GetDefeatedAnim() */

void __thiscall EffectAnimRig_ZombossHologram::GetDefeatedAnim(EffectAnimRig_ZombossHologram *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"defeated");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* EffectAnimRig_ZombossHologram::~EffectAnimRig_ZombossHologram() */

void __thiscall
EffectAnimRig_ZombossHologram::~EffectAnimRig_ZombossHologram(EffectAnimRig_ZombossHologram *this)

{
  *(undefined ***)this = &PTR_GetClass_0675eb10;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_ZombossHologram_0675ec30;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x218));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_ZombossHologram::~EffectAnimRig_ZombossHologram() */

void __thiscall
EffectAnimRig_ZombossHologram::~EffectAnimRig_ZombossHologram(EffectAnimRig_ZombossHologram *this)

{
  ~EffectAnimRig_ZombossHologram(this + -0x10);
  return;
}


/* EffectAnimRig_ZombossHologram::~EffectAnimRig_ZombossHologram() */

void __thiscall
EffectAnimRig_ZombossHologram::~EffectAnimRig_ZombossHologram(EffectAnimRig_ZombossHologram *this)

{
  ~EffectAnimRig_ZombossHologram(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_ZombossHologram::~EffectAnimRig_ZombossHologram() */

void __thiscall
EffectAnimRig_ZombossHologram::~EffectAnimRig_ZombossHologram(EffectAnimRig_ZombossHologram *this)

{
  ~EffectAnimRig_ZombossHologram(this + -0x10);
  return;
}


/* EffectAnimRig_ZombossHologram::PopAnimPlaySample(std::string const&, int, double, double) */

void EffectAnimRig_ZombossHologram::PopAnimPlaySample
               (string *param_1,int param_2,double param_3,double param_4)

{
  WorldMap *this;
  
  this = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  WorldMap::PlayZombossSound(this,(string *)(ulong)(uint)param_2);
  return;
}


/* non-virtual thunk to EffectAnimRig_ZombossHologram::PopAnimPlaySample(std::string const&, int,
   double, double) */

void __thiscall
EffectAnimRig_ZombossHologram::PopAnimPlaySample
          (EffectAnimRig_ZombossHologram *this,string *param_1,int param_2,double param_3,
          double param_4)

{
  PopAnimPlaySample((string *)(this + -0x10),(int)param_1,param_3,param_4);
  return;
}


/* EffectAnimRig_ZombossHologram::StaticGetClass() */

long * EffectAnimRig_ZombossHologram::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_ZombossHologram",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_ZombossHologram::GetClass() const */

long * EffectAnimRig_ZombossHologram::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_ZombossHologram",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombossHologram::GetOpenAnim() */

void __thiscall EffectAnimRig_ZombossHologram::GetOpenAnim(EffectAnimRig_ZombossHologram *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"open");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombossHologram::GetCloseAnim() */

void __thiscall EffectAnimRig_ZombossHologram::GetCloseAnim(EffectAnimRig_ZombossHologram *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"close");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombossHologram::PlayTauntSequence() */

void __thiscall
EffectAnimRig_ZombossHologram::PlayTauntSequence(EffectAnimRig_ZombossHologram *this)

{
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x210) = 2;
  local_8 = ___stack_chk_guard;
  GetOpenAnim(this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<EffectAnimRig_ZombossHologram,void(EffectAnimRig_ZombossHologram::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombossHologram::PlayActivateSequence() */

void __thiscall
EffectAnimRig_ZombossHologram::PlayActivateSequence(EffectAnimRig_ZombossHologram *this)

{
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x210) = 1;
  local_8 = ___stack_chk_guard;
  GetOpenAnim(this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<EffectAnimRig_ZombossHologram,void(EffectAnimRig_ZombossHologram::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombossHologram::PlayDefeatedSequence() */

void __thiscall
EffectAnimRig_ZombossHologram::PlayDefeatedSequence(EffectAnimRig_ZombossHologram *this)

{
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x210) = 3;
  local_8 = ___stack_chk_guard;
  GetOpenAnim(this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<EffectAnimRig_ZombossHologram,void(EffectAnimRig_ZombossHologram::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_ZombossHologram::SelectAndBeginStateForWorld(std::string const&) */

void __thiscall
EffectAnimRig_ZombossHologram::SelectAndBeginStateForWorld
          (EffectAnimRig_ZombossHologram *this,string *param_1)

{
  char cVar1;
  long lVar2;
  WorldMap *this_00;
  
  lVar2 = WorldMapUtils::FindZombossNodeInWorld(param_1);
  if (lVar2 == 0) {
    return;
  }
  cVar1 = FUN_03cc358c(*(undefined1 *)(lVar2 + 0xf2));
  if (cVar1 == '\0') {
    cVar1 = FUN_03cc3588(*(undefined1 *)(lVar2 + 0xf1));
    if (cVar1 == '\0') {
      PlayTauntSequence(this);
      this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
      WorldMap::PlayRandomZombossTaunts(this_00);
      return;
    }
    PlayActivateSequence(this);
    lVar2 = LawnApp::GetWorldMap(gLawnApp);
    FUN_03cc3594(lVar2 + 0x3d8);
    return;
  }
  PlayDefeatedSequence(this);
  lVar2 = LawnApp::GetWorldMap(gLawnApp);
  FUN_03cc3594(lVar2 + 0x3d8);
  return;
}


/* EffectAnimRig_ZombossHologram::onSwitchedWorlds(WorldData*) */

void __thiscall
EffectAnimRig_ZombossHologram::onSwitchedWorlds
          (EffectAnimRig_ZombossHologram *this,WorldData *param_1)

{
  SelectAndBeginStateForWorld(this,(string *)(param_1 + 0x38));
  return;
}


/* EffectAnimRig_ZombossHologram::EffectAnimRig_ZombossHologram() */

void __thiscall
EffectAnimRig_ZombossHologram::EffectAnimRig_ZombossHologram(EffectAnimRig_ZombossHologram *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0675eb10;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_ZombossHologram_0675ec30;
  Set8BytesTo0(this + 0x218);
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x220) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSwitchedWorlds);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<WorldData*,Sexy::CBMemberTranslatorX<EffectAnimRig_ZombossHologram,void(EffectAnimRig_ZombossHologram::*)(WorldData*)>>
            ((MessageRouter *)puVar1,Message::WorldMapSwitchedWorlds,&local_40);
  return;
}


/* EffectAnimRig_ZombossHologram::StaticNew() */

EffectAnimRig_ZombossHologram * EffectAnimRig_ZombossHologram::StaticNew(void)

{
  EffectAnimRig_ZombossHologram *this;
  
  this = ::operator_new(0x228);
  EffectAnimRig_ZombossHologram(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombossHologram::PickActiveIdleAnim() */

void EffectAnimRig_ZombossHologram::PickActiveIdleAnim(void)

{
  long in_x0;
  string asStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  std::string::string(asStack_40,"idle");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,5);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"idle2");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,5);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"idle3");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,5);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"laugh");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,3);
  std::string::~string(asStack_40);
  nop();
  if (1 < *(int *)(in_x0 + 0x220)) {
    std::string::string(asStack_40,"idle4");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
    std::string::~string(asStack_40);
    nop();
  }
  ProbabilitySet<std::string>::PickItemIgnoring((string *)aPStack_38);
  thunk_FUN_05475e00(in_x0 + 0x218);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombossHologram::PlayActiveIdleLooped() */

void __thiscall
EffectAnimRig_ZombossHologram::PlayActiveIdleLooped(EffectAnimRig_ZombossHologram *this)

{
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x210) = 6;
  local_8 = ___stack_chk_guard;
  PickActiveIdleAnim();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<EffectAnimRig_ZombossHologram,void(EffectAnimRig_ZombossHologram::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombossHologram::PickTauntAnim() */

void __thiscall EffectAnimRig_ZombossHologram::PickTauntAnim(EffectAnimRig_ZombossHologram *this)

{
  string asStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  std::string::string(asStack_40,"laugh_broken");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,4);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"idle_broken");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
  std::string::~string(asStack_40);
  nop();
  ProbabilitySet<std::string>::PickItem();
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombossHologram::onFinished(std::string const&) */

void EffectAnimRig_ZombossHologram::onFinished(string *param_1)

{
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(param_1 + 0x210)) {
  case 1:
    PlayActiveIdleLooped((EffectAnimRig_ZombossHologram *)param_1);
    break;
  case 2:
    PickTauntAnim((EffectAnimRig_ZombossHologram *)param_1);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,onFinished);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<EffectAnimRig_ZombossHologram,void(EffectAnimRig_ZombossHologram::*)(std::string_const&)>
              (aDStack_38,asStack_50);
    PopAnimRig::PlayAndStop((PopAnimRig *)param_1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    *(undefined4 *)(param_1 + 0x210) = 4;
    break;
  case 3:
    GetDefeatedAnim((EffectAnimRig_ZombossHologram *)param_1);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_50,0,(DummyInit *)aDStack_38);
    std::string::~string(asStack_50);
    *(undefined4 *)(param_1 + 0x210) = 7;
    break;
  case 4:
    GetCloseAnim((EffectAnimRig_ZombossHologram *)param_1);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,onFinished);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<EffectAnimRig_ZombossHologram,void(EffectAnimRig_ZombossHologram::*)(std::string_const&)>
              (aDStack_38,asStack_50);
    PopAnimRig::PlayAndStop((PopAnimRig *)param_1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    *(undefined4 *)(param_1 + 0x210) = 5;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x210) = 0;
    break;
  case 6:
    *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1;
    PlayActiveIdleLooped((EffectAnimRig_ZombossHologram *)param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

