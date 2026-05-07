// Class: StarChallengePlantFoodNonuse


/* StarChallengePlantFoodNonuse::CancelTip() */

void StarChallengePlantFoodNonuse::CancelTip(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  return;
}


/* StarChallengePlantFoodNonuse::NotShowTipAgain() */

void __thiscall StarChallengePlantFoodNonuse::NotShowTipAgain(StarChallengePlantFoodNonuse *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this[0x20] = (StarChallengePlantFoodNonuse)0x0;
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  return;
}


/* StarChallengePlantFoodNonuse::gameplayEnded() */

void __thiscall StarChallengePlantFoodNonuse::gameplayEnded(StarChallengePlantFoodNonuse *this)

{
  char cVar1;
  
  cVar1 = FUN_04484708(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Complete((Challenge *)this);
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantFoodNonuse::StaticClassInit() */

void StarChallengePlantFoodNonuse::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengePlantFoodNonuse");
    (*pcVar2)(plVar1,asStack_10,FUN_04484c18,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantFoodNonuse::StaticGetClass() */

long * StarChallengePlantFoodNonuse::StaticGetClass(void)

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
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengePlantFoodNonuse",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantFoodNonuse::StarChallengePlantFoodNonuse() */

void __thiscall
StarChallengePlantFoodNonuse::StarChallengePlantFoodNonuse(StarChallengePlantFoodNonuse *this)

{
  Challenge::Challenge((Challenge *)this);
  this[0x20] = (StarChallengePlantFoodNonuse)0x1;
  *(undefined ***)this = &PTR_GetModuleClass_0684f9a0;
  return;
}


/* StarChallengePlantFoodNonuse::StaticNew() */

StarChallengePlantFoodNonuse * StarChallengePlantFoodNonuse::StaticNew(void)

{
  StarChallengePlantFoodNonuse *this;
  
  this = ::operator_new(0x28);
  StarChallengePlantFoodNonuse(this);
  return this;
}


/* StarChallengePlantFoodNonuse::~StarChallengePlantFoodNonuse() */

void __thiscall
StarChallengePlantFoodNonuse::~StarChallengePlantFoodNonuse(StarChallengePlantFoodNonuse *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684f9a0;
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengePlantFoodNonuse::~StarChallengePlantFoodNonuse() */

void __thiscall
StarChallengePlantFoodNonuse::~StarChallengePlantFoodNonuse(StarChallengePlantFoodNonuse *this)

{
  ~StarChallengePlantFoodNonuse(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantFoodNonuse::gameplayStarted() */

void __thiscall StarChallengePlantFoodNonuse::gameplayStarted(StarChallengePlantFoodNonuse *this)

{
  GridItemWaterMist *this_00;
  string asStack_50 [24];
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"UIPlantfood");
  UIWidget::GetWidgetBySheetName(asStack_50);
  nop();
  std::string::~string(asStack_50);
  nop();
  GridItemWaterMist::SetAvatar(this_00,true);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantfoodTouched);
  Sexy::Delegate0wRet<bool>::
  Delegate0wRet<StarChallengePlantFoodNonuse,bool(StarChallengePlantFoodNonuse::*)()>
            (aDStack_38,asStack_50);
  PlantfoodUI::SetTouchDelegate((PlantfoodUI *)this_00,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantFoodNonuse::onPostLoad() */

void __thiscall StarChallengePlantFoodNonuse::onPostLoad(StarChallengePlantFoodNonuse *this)

{
  PlantfoodUI *extraout_x0;
  string asStack_50 [24];
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"UIPlantfood");
  UIWidget::GetWidgetBySheetName(asStack_50);
  nop();
  std::string::~string(asStack_50);
  nop();
  if (extraout_x0 != (PlantfoodUI *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantfoodTouched);
    Sexy::Delegate0wRet<bool>::
    Delegate0wRet<StarChallengePlantFoodNonuse,bool(StarChallengePlantFoodNonuse::*)()>
              (aDStack_38,asStack_50);
    PlantfoodUI::SetTouchDelegate(extraout_x0,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantFoodNonuse::ShowTip() */

void __thiscall StarChallengePlantFoodNonuse::ShowTip(StarChallengePlantFoodNonuse *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar4;
  char *pcVar5;
  wchar_t *pwVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
  this_00 = gLawnApp;
  iVar2 = FUN_044848bc(0x208);
  iVar3 = FUN_044848bc(200);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar1 == '\0') {
    pwVar6 = L"[STARCHALLENGE_PLANTFOOD_NONUSE_TIP]";
  }
  else {
    pwVar6 = L"[STARCHALLENGE_PLANTFOOD_NONUSE_TIP_PVZ1]";
  }
  FUN_05478178(awStack_50,pwVar6,auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  pPVar4 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)awStack_50,1);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar4,(Color *)awStack_50);
  iVar2 = FUN_044848bc(0x8c);
  PVZ2UIDialog::SetHeaderHeight(this_01,iVar2);
  PVZ2UIDialog::Hide(this_01,4);
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[MISTAKE_CLICK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CancelTip);
  Sexy::Delegate0::Delegate0<StarChallengePlantFoodNonuse,void(StarChallengePlantFoodNonuse::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[NEVER_REMIND_AGAIN]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotShowTipAgain);
  Sexy::Delegate0::Delegate0<StarChallengePlantFoodNonuse,void(StarChallengePlantFoodNonuse::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_PopUp_General");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantFoodNonuse::onPlantfoodTouched() */

byte __thiscall StarChallengePlantFoodNonuse::onPlantfoodTouched(StarChallengePlantFoodNonuse *this)

{
  StarChallengePlantFoodNonuse SVar1;
  
  SVar1 = (StarChallengePlantFoodNonuse)0x0;
  if (this[0x20] != (StarChallengePlantFoodNonuse)0x0) {
    ShowTip(this);
    SVar1 = this[0x20];
  }
  return (byte)SVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantFoodNonuse::registerForEvents() */

void __thiscall StarChallengePlantFoodNonuse::registerForEvents(StarChallengePlantFoodNonuse *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<StarChallengePlantFoodNonuse,void(StarChallengePlantFoodNonuse::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengePlantFoodNonuse,void(StarChallengePlantFoodNonuse::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onToolAppliedPlantFood);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<PlantGroup*,Sexy::CBMemberTranslatorX<StarChallengePlantFoodNonuse,void(StarChallengePlantFoodNonuse::*)(PlantGroup*)>>
            ((MessageRouter *)puVar1,Message::ToolAppliedPlantfood,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantFoodNonuse::onToolAppliedPlantFood(PlantGroup*) */

void StarChallengePlantFoodNonuse::onToolAppliedPlantFood(PlantGroup *param_1)

{
  char cVar1;
  char *pcVar2;
  TGALogMgr *this;
  size_t in_x2;
  DString aDStack_68 [16];
  TGAPVZ1ModeData aTStack_58 [8];
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04484708(*(undefined4 *)(param_1 + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Fail();
    cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if (cVar1 != '\0') {
      TGAPVZ1ModeData::TGAPVZ1ModeData(aTStack_58);
      DString::DString(aDStack_68,2);
      pcVar2 = (char *)DString::c_str(aDStack_68);
      std::string::append((string *)aTStack_58,pcVar2,in_x2);
      DString::~DString(aDStack_68);
      Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
      PVZ1ModeNetworkMgr::GetCurrentLevel();
      FUN_05474278(auStack_50,aDStack_68);
      std::string::~string((string *)aDStack_68);
      cVar1 = PVZ1ModeUtils::IsHardMode();
      if (cVar1 == '\0') {
        pcVar2 = "0";
      }
      else {
        pcVar2 = "1";
      }
      std::string::append(asStack_48,pcVar2,in_x2);
      std::string::append(asStack_40,"4",in_x2);
      this = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogPVZ1Mode(this,aTStack_58);
      TGAPVZ1ModeData::~TGAPVZ1ModeData(aTStack_58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

