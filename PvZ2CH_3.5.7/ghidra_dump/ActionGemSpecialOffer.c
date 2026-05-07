// Class: ActionGemSpecialOffer


/* ActionGemSpecialOffer::OnGemSpecialOfferEnd() */

void __thiscall ActionGemSpecialOffer::OnGemSpecialOfferEnd(ActionGemSpecialOffer *this)

{
  this[9] = (ActionGemSpecialOffer)0x1;
  return;
}


/* ActionGemSpecialOffer::~ActionGemSpecialOffer() */

void __thiscall ActionGemSpecialOffer::~ActionGemSpecialOffer(ActionGemSpecialOffer *this)

{
  *(undefined ***)this = &PTR_GetClass_06859c40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionGemSpecialOffer::~ActionGemSpecialOffer() */

void __thiscall ActionGemSpecialOffer::~ActionGemSpecialOffer(ActionGemSpecialOffer *this)

{
  ~ActionGemSpecialOffer(this);
  AK::FreeHook(this);
  return;
}


/* ActionGemSpecialOffer::StaticGetClass() */

long * ActionGemSpecialOffer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionGemSpecialOffer",uVar2,StaticNew);
  return sClass;
}


/* ActionGemSpecialOffer::GetClass() const */

long * ActionGemSpecialOffer::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionGemSpecialOffer",uVar2,StaticNew);
  return sClass;
}


/* ActionGemSpecialOffer::ActionGemSpecialOffer() */

void __thiscall ActionGemSpecialOffer::ActionGemSpecialOffer(ActionGemSpecialOffer *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859c40;
  return;
}


/* ActionGemSpecialOffer::StaticNew() */

ActionGemSpecialOffer * ActionGemSpecialOffer::StaticNew(void)

{
  ActionGemSpecialOffer *this;
  
  this = ::operator_new(0x18);
  ActionGemSpecialOffer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionGemSpecialOffer::Start() */

void __thiscall ActionGemSpecialOffer::Start(ActionGemSpecialOffer *this)

{
  char cVar1;
  int iVar2;
  GemOfferMgr *this_00;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 != '\0') {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      ActiveItem::~ActiveItem(aAStack_88);
      LawnApp::SetSpecialGemOffer(gLawnApp,true);
      this_00 = (GemOfferMgr *)Sexy::LazySingleton<GemOfferMgr>::GetInstance();
      GemOfferMgr::RefreshActivity(this_00);
      OnGemSpecialOfferEnd(this);
      goto LAB_0455f1b8;
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  this[9] = (ActionGemSpecialOffer)0x1;
LAB_0455f1b8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionGemSpecialOffer::CreateIfNeed(bool&) */

void ActionGemSpecialOffer::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  wchar16 *pwVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ActionGemSpecialOffer *this_01;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pLVar4 = aLStack_98;
  local_8 = ___stack_chk_guard;
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_90,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_90,pLVar4,in_x3,in_x4);
  std::string::~string(asStack_90);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      ActiveItem::~ActiveItem(aAStack_88);
      if (local_70 != '\0') {
        this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
        if (this_00 != (PlayerInfo *)0x0) {
          std::string::string(asStack_90,"GemSpecialOffer");
          cVar1 = PlayerInfo::IsFirstPopToday(this_00,asStack_90);
          std::string::~string(asStack_90);
          nop();
          if (cVar1 == '\0') goto LAB_04560aa0;
        }
        this_01 = ::operator_new(0x18);
        *(undefined8 *)this_01 = 0;
        this_01[8] = (ActionGemSpecialOffer)0x0;
        this_01[9] = (ActionGemSpecialOffer)0x0;
        this_01[10] = (ActionGemSpecialOffer)0x0;
        *(undefined4 *)(this_01 + 0xc) = 0;
        *(undefined4 *)(this_01 + 0x10) = 0;
        ActionGemSpecialOffer(this_01);
        goto LAB_04560aa4;
      }
    }
  }
LAB_04560aa0:
  this_01 = (ActionGemSpecialOffer *)0x0;
LAB_04560aa4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}

