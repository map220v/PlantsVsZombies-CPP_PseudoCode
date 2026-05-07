// Class: ActionBossChallenge


/* ActionBossChallenge::~ActionBossChallenge() */

void __thiscall ActionBossChallenge::~ActionBossChallenge(ActionBossChallenge *this)

{
  *(undefined ***)this = &PTR_GetClass_06858fc0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionBossChallenge::~ActionBossChallenge() */

void __thiscall ActionBossChallenge::~ActionBossChallenge(ActionBossChallenge *this)

{
  ~ActionBossChallenge(this);
  AK::FreeHook(this);
  return;
}


/* ActionBossChallenge::Start() */

void __thiscall ActionBossChallenge::Start(ActionBossChallenge *this)

{
  char cVar1;
  
  cVar1 = BossChallenge::IsOpened();
  if (cVar1 != '\0') {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 != '\0') {
      BossChallenge::ShowDialog();
      return;
    }
  }
  this[9] = (ActionBossChallenge)0x1;
  return;
}


/* ActionBossChallenge::Update() */

void __thiscall ActionBossChallenge::Update(ActionBossChallenge *this)

{
  long lVar1;
  
  lVar1 = BossChallenge::GetSingletonPtr();
  if (lVar1 != 0) {
    return;
  }
  this[9] = (ActionBossChallenge)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionBossChallenge::End() */

void ActionBossChallenge::End(void)

{
  LuaFunctionCallback *pLVar1;
  bool bStack_31;
  string asStack_30 [8];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  long lStack_8;
  
  bStack_31 = false;
  uStack_28 = 0;
  uStack_20 = 0;
  lStack_8 = ___stack_chk_guard;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&uStack_28)
  ;
  std::string::string(asStack_30,"luaBossChallengeDlg:Close");
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Execute(pLVar1,asStack_30,0,&bStack_31);
  Lua::LuaFunctionCallback::End(pLVar1);
  std::string::~string(asStack_30);
  nop();
  Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&uStack_28);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionBossChallenge::StaticGetClass() */

long * ActionBossChallenge::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionBossChallenge",uVar2,StaticNew);
  return sClass;
}


/* ActionBossChallenge::GetClass() const */

long * ActionBossChallenge::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionBossChallenge",uVar2,StaticNew);
  return sClass;
}


/* ActionBossChallenge::ActionBossChallenge() */

void __thiscall ActionBossChallenge::ActionBossChallenge(ActionBossChallenge *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06858fc0;
  return;
}


/* ActionBossChallenge::StaticNew() */

ActionBossChallenge * ActionBossChallenge::StaticNew(void)

{
  ActionBossChallenge *this;
  
  this = ::operator_new(0x18);
  ActionBossChallenge(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionBossChallenge::CreateIfNeed(bool&) */

void ActionBossChallenge::CreateIfNeed(bool *param_1)

{
  char cVar1;
  wchar16 *pwVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  ActionBossChallenge *this_00;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar4 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_10,pLVar4,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if ((cVar1 != '\0') && (cVar1 = BossChallenge::IsOpened(), cVar1 != '\0')) {
      std::string::string(asStack_10,"egypt3");
      this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar3);
      std::string::~string(asStack_10);
      nop();
      if (cVar1 != '\0') {
        this_00 = ::operator_new(0x18);
        *(undefined8 *)this_00 = 0;
        this_00[8] = (ActionBossChallenge)0x0;
        this_00[9] = (ActionBossChallenge)0x0;
        this_00[10] = (ActionBossChallenge)0x0;
        *(undefined4 *)(this_00 + 0xc) = 0;
        *(undefined4 *)(this_00 + 0x10) = 0;
        ActionBossChallenge(this_00);
        goto LAB_0455bbac;
      }
    }
  }
  this_00 = (ActionBossChallenge *)0x0;
LAB_0455bbac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

