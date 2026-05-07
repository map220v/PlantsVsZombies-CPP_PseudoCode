// Class: ActionShowAds


/* ActionShowAds::~ActionShowAds() */

void __thiscall ActionShowAds::~ActionShowAds(ActionShowAds *this)

{
  *(undefined ***)this = &PTR_GetClass_06859bc0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionShowAds::~ActionShowAds() */

void __thiscall ActionShowAds::~ActionShowAds(ActionShowAds *this)

{
  ~ActionShowAds(this);
  AK::FreeHook(this);
  return;
}


/* ActionShowAds::End() */

void __thiscall ActionShowAds::End(ActionShowAds *this)

{
  long lVar1;
  
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  FUN_0454b284(lVar1 + 0x356,this[10]);
  return;
}


/* ActionShowAds::StaticGetClass() */

long * ActionShowAds::StaticGetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionShowAds",uVar2,StaticNew);
  return sClass;
}


/* ActionShowAds::GetClass() const */

long * ActionShowAds::GetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionShowAds",uVar2,StaticNew);
  return sClass;
}


/* ActionShowAds::ActionShowAds() */

void __thiscall ActionShowAds::ActionShowAds(ActionShowAds *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859bc0;
  return;
}


/* ActionShowAds::StaticNew() */

ActionShowAds * ActionShowAds::StaticNew(void)

{
  ActionShowAds *this;
  
  this = ::operator_new(0x18);
  ActionShowAds(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowAds::CreateIfNeed(bool&) */

void ActionShowAds::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  ActionShowAds *this;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long *plVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    cVar1 = LawnApp::IsAdChannel(gLawnApp,0);
    if ((cVar1 != '\0') && (cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x20), cVar1 != '\0')) {
      LawnApp::GetAdsMapLimit();
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar3);
      if ((cVar1 == '\0') || (iVar2 = LawnApp::GetAdsMapRate(gLawnApp), iVar2 == -1)) {
        std::string::~string(asStack_10);
      }
      else {
        plVar4 = (long *)EASquared::Instance();
        cVar1 = (**(code **)(*plVar4 + 0x58))();
        std::string::~string(asStack_10);
        if ((cVar1 != '\0') && (cVar1 = LawnApp::ShouldPopAds(gLawnApp), cVar1 != '\0')) {
          this = ::operator_new(0x18);
          *(undefined8 *)this = 0;
          this[8] = (ActionShowAds)0x0;
          this[9] = (ActionShowAds)0x0;
          this[10] = (ActionShowAds)0x0;
          *(undefined4 *)(this + 0xc) = 0;
          *(undefined4 *)(this + 0x10) = 0;
          ActionShowAds(this);
          goto LAB_04555644;
        }
      }
    }
  }
  this = (ActionShowAds *)0x0;
LAB_04555644:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowAds::Start() */

void __thiscall ActionShowAds::Start(ActionShowAds *this)

{
  long *plVar1;
  TGALogMgr *pTVar2;
  code *pcVar3;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WorldMapAction::DisableInput((WorldMapAction *)this);
  plVar1 = (long *)EASquared::Instance();
  pcVar3 = *(code **)(*plVar1 + 0x28);
  std::string::string(asStack_58,"EA2WorldAuto");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAdsFinish);
  Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
  Delegate1<ActionShowAds,void(ActionShowAds::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
            (aDStack_38,asStack_50);
  (*pcVar3)(plVar1,asStack_58,aDStack_38,0,0,2);
  std::string::~string(asStack_58);
  nop();
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  std::string::string(asStack_68,"1");
  std::string::string(asStack_60,"");
  std::string::string(asStack_58,"");
  std::string::string(asStack_50,"");
  TGALogMgr::LogAD(pTVar2,asStack_68,asStack_60,2,asStack_58,asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowAds::onAdsFinish(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall ActionShowAds::onAdsFinish(ActionShowAds *this,int param_2)

{
  char *__s;
  TGALogMgr *local_58;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this[9] = (ActionShowAds)0x1;
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    local_58 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    __s = "2";
  }
  else {
    local_58 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    __s = "4";
  }
  std::string::string(asStack_28,__s);
  std::string::string(asStack_20,"");
  std::string::string(asStack_18,"");
  std::string::string(asStack_10,"");
  TGALogMgr::LogAD(local_58,asStack_28,asStack_20,2,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

