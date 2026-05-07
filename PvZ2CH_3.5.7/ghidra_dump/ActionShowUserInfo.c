// Class: ActionShowUserInfo


/* ActionShowUserInfo::End() */

void ActionShowUserInfo::End(void)

{
  if (UILimitedGacha::s_pWidgetHandler != (long *)0x0) {
    (**(code **)(*UILimitedGacha::s_pWidgetHandler + 0x348))();
  }
  return;
}


/* ActionShowUserInfo::Update() */

void __thiscall ActionShowUserInfo::Update(ActionShowUserInfo *this)

{
  if (UIUserInfo::s_pWidgetHandler != 0) {
    return;
  }
  this[9] = (ActionShowUserInfo)0x1;
  return;
}


/* ActionShowUserInfo::~ActionShowUserInfo() */

void __thiscall ActionShowUserInfo::~ActionShowUserInfo(ActionShowUserInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06859140;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionShowUserInfo::~ActionShowUserInfo() */

void __thiscall ActionShowUserInfo::~ActionShowUserInfo(ActionShowUserInfo *this)

{
  ~ActionShowUserInfo(this);
  AK::FreeHook(this);
  return;
}


/* ActionShowUserInfo::StaticGetClass() */

long * ActionShowUserInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowUserInfo",uVar2,StaticNew);
  return sClass;
}


/* ActionShowUserInfo::GetClass() const */

long * ActionShowUserInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionShowUserInfo",uVar2,StaticNew);
  return sClass;
}


/* ActionShowUserInfo::ActionShowUserInfo() */

void __thiscall ActionShowUserInfo::ActionShowUserInfo(ActionShowUserInfo *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859140;
  return;
}


/* ActionShowUserInfo::StaticNew() */

ActionShowUserInfo * ActionShowUserInfo::StaticNew(void)

{
  ActionShowUserInfo *this;
  
  this = ::operator_new(0x18);
  ActionShowUserInfo(this);
  return this;
}


/* ActionShowUserInfo::Start() */

void __thiscall ActionShowUserInfo::Start(ActionShowUserInfo *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = DSingleton<UserInfo>::getInstance();
  cVar1 = FUN_0454b2a8(*(undefined1 *)(lVar2 + 0x20));
  if (cVar1 != '\0') {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      UIUserInfo::create(true);
      return;
    }
  }
  this[9] = (ActionShowUserInfo)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowUserInfo::CreateIfNeed(bool&) */

void ActionShowUserInfo::CreateIfNeed(bool *param_1)

{
  char cVar1;
  wchar16 *pwVar2;
  long lVar3;
  ProfileMgr *this;
  PlayerInfo *pPVar4;
  ActionShowUserInfo *this_00;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar5 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_10,pLVar5,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      lVar3 = DSingleton<UserInfo>::getInstance();
      cVar1 = FUN_0454b2a8(*(undefined1 *)(lVar3 + 0x20));
      if (cVar1 != '\0') {
        std::string::string(asStack_10,"egypt3");
        this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
        cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar4);
        std::string::~string(asStack_10);
        nop();
        if (cVar1 != '\0') {
          this_00 = ::operator_new(0x18);
          *(undefined8 *)this_00 = 0;
          this_00[8] = (ActionShowUserInfo)0x0;
          this_00[9] = (ActionShowUserInfo)0x0;
          this_00[10] = (ActionShowUserInfo)0x0;
          *(undefined4 *)(this_00 + 0xc) = 0;
          *(undefined4 *)(this_00 + 0x10) = 0;
          ActionShowUserInfo(this_00);
          goto LAB_0455bcf4;
        }
      }
    }
  }
  this_00 = (ActionShowUserInfo *)0x0;
LAB_0455bcf4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

