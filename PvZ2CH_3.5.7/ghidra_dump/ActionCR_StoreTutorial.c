// Class: ActionCR_StoreTutorial


/* ActionCR_StoreTutorial::~ActionCR_StoreTutorial() */

void __thiscall ActionCR_StoreTutorial::~ActionCR_StoreTutorial(ActionCR_StoreTutorial *this)

{
  *(undefined ***)this = &PTR_GetClass_068596c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionCR_StoreTutorial::~ActionCR_StoreTutorial() */

void __thiscall ActionCR_StoreTutorial::~ActionCR_StoreTutorial(ActionCR_StoreTutorial *this)

{
  ~ActionCR_StoreTutorial(this);
  AK::FreeHook(this);
  return;
}


/* ActionCR_StoreTutorial::onNarrationFinished() */

void ActionCR_StoreTutorial::onNarrationFinished(void)

{
  long *plVar1;
  
  plVar1 = (long *)LawnApp::GetWorldMap(gLawnApp);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x338))(plVar1,0x33);
  }
  return;
}


/* ActionCR_StoreTutorial::StaticGetClass() */

long * ActionCR_StoreTutorial::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionCR_StoreTutorial",uVar2,StaticNew);
  return sClass;
}


/* ActionCR_StoreTutorial::GetClass() const */

long * ActionCR_StoreTutorial::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionCR_StoreTutorial",uVar2,StaticNew);
  return sClass;
}


/* ActionCR_StoreTutorial::OnLuaNotify(std::string const&) */

void __thiscall ActionCR_StoreTutorial::OnLuaNotify(ActionCR_StoreTutorial *this,string *param_1)

{
  bool bVar1;
  WorldMap *this_00;
  
  bVar1 = std::operator==(param_1,"dave_shop_btn_press");
  if (bVar1) {
    this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::ForceTutorialToFinish(this_00);
    this[9] = (ActionCR_StoreTutorial)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionCR_StoreTutorial::Start() */

void __thiscall ActionCR_StoreTutorial::Start(ActionCR_StoreTutorial *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  if (pCVar1 != (CrazyNPCManager *)0x0) {
    std::string::string(asStack_60,"CR_STORE");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<ActionCR_StoreTutorial,void(ActionCR_StoreTutorial::*)()>
              (aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionCR_StoreTutorial::ActionCR_StoreTutorial() */

void __thiscall ActionCR_StoreTutorial::ActionCR_StoreTutorial(ActionCR_StoreTutorial *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068596c0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<ActionCR_StoreTutorial,void(ActionCR_StoreTutorial::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify,&local_40);
  return;
}


/* ActionCR_StoreTutorial::StaticNew() */

ActionCR_StoreTutorial * ActionCR_StoreTutorial::StaticNew(void)

{
  ActionCR_StoreTutorial *this;
  
  this = ::operator_new(0x18);
  ActionCR_StoreTutorial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionCR_StoreTutorial::CreateIfNeed(bool&) */

void ActionCR_StoreTutorial::CreateIfNeed(bool *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  Dialog *this_01;
  long lVar4;
  ActionCR_StoreTutorial *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    RiftUtils::GetCurrentRiftWorld((RiftUtils *)0x0);
    bVar1 = std::operator!=(asStack_10,"");
    std::string::~string(asStack_10);
    if (!bVar1) {
      this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
      if (((this_00 != (PlayerInfo *)0x0) &&
          (iVar3 = FUN_0454b274(*(undefined4 *)(this_00 + 0x40)), iVar3 == 0)) &&
         (cVar2 = PlayerInfo::PlayerHasCompletedTutorial(this_00,0x33), cVar2 == '\0')) {
        std::string::string(asStack_10,"egypt10");
        iVar3 = PlayerInfo::GetWorldMapEventStatus(this_00,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if ((2 < iVar3) &&
           (this_01 = (Dialog *)Lua::CUIDialog::GetDialog("DaveShopBtn"), this_01 != (Dialog *)0x0))
        {
          std::string::string(asStack_10,"UIButton_DaveShop");
          lVar4 = UI::Dialog::GetWidget(this_01,asStack_10);
          std::string::~string(asStack_10);
          nop();
          if ((lVar4 != 0) && (*(char *)(lVar4 + 0x6c) != '\0')) {
            *param_1 = true;
            this_02 = ::operator_new(0x18);
            ActionCR_StoreTutorial(this_02);
            goto LAB_0455a574;
          }
        }
      }
    }
  }
  this_02 = (ActionCR_StoreTutorial *)0x0;
LAB_0455a574:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_02);
}

