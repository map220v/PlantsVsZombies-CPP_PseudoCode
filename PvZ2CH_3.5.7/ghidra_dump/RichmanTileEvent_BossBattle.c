// Class: RichmanTileEvent_BossBattle


/* RichmanTileEvent_BossBattle::PostEventMessage() */

void RichmanTileEvent_BossBattle::PostEventMessage(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEvent_BossBattle::GetBossBattleDescription(std::string) */

void RichmanTileEvent_BossBattle::GetBossBattleDescription(undefined8 param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(param_1,L"[RICHMAN_BOSS_BATTLE_DESCRIPTION_1]",auStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEvent_BossBattle::ShowEntryUI(std::wstring) */

void __thiscall
RichmanTileEvent_BossBattle::ShowEntryUI(RichmanTileEvent_BossBattle *this,wstring *param_2)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_50,L"[RICHMAN_BOSS_BATTLE_TITLE]",auStack_58);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,param_2);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(auStack_58,L"[RICHMAN_BOSS_BATTLE_ESCAPE_BTN]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEscapeBtn);
  Sexy::Delegate0::Delegate0<RichmanTileEvent_BossBattle,void(RichmanTileEvent_BossBattle::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[RICHMAN_BOSS_BATTLE_ENTER_BTN]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEnterBtn);
  Sexy::Delegate0::Delegate0<RichmanTileEvent_BossBattle,void(RichmanTileEvent_BossBattle::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEvent_BossBattle::ExecuteEvent() */

void __thiscall RichmanTileEvent_BossBattle::ExecuteEvent(RichmanTileEvent_BossBattle *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  RichmanTileEventManager *this_00;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_04c456f4();
  *(undefined4 *)(this + 0x80) = uVar1;
  uVar2 = FUN_04c45630(*(undefined8 *)(this + 0x68));
  thunk_FUN_05475e00(this + 0x88,uVar2);
  FUN_05475d88(asStack_18,this + 0x88);
  GetBossBattleDescription(auStack_10,this,asStack_18);
  FUN_054766c8(this + 0x90,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  FUN_05477b24(auStack_10,this + 0x90);
  ShowEntryUI(this,auStack_10);
  FUN_05476c50(auStack_10);
  this_00 = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  RichmanTileEventManager::SetEventNeedChecked(this_00,true);
  RichmanTileEventBase::ExecuteEvent((RichmanTileEventBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichmanTileEvent_BossBattle::ExecuteEventPost() */

void RichmanTileEvent_BossBattle::ExecuteEventPost(void)

{
  RichmanTileEventManager *this;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  RichmanTileEventManager::SetEventNeedChecked(this,false);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* RichmanTileEvent_BossBattle::OnEscapeBtn() */

void RichmanTileEvent_BossBattle::OnEscapeBtn(void)

{
  RichmanTileEventManager *this;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  RichmanTileEventManager::ExecuteEventPost(this);
  return;
}


/* RichmanTileEvent_BossBattle::OnEnterBtn() */

void __thiscall RichmanTileEvent_BossBattle::OnEnterBtn(RichmanTileEvent_BossBattle *this)

{
  RichmanTileEventManager *this_00;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b90c28,this + 0x88,0xffffffff,1,1,0);
  this_00 = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  RichmanTileEventManager::SetEventNeedChecked(this_00,true);
  return;
}


/* RichmanTileEvent_BossBattle::~RichmanTileEvent_BossBattle() */

void __thiscall
RichmanTileEvent_BossBattle::~RichmanTileEvent_BossBattle(RichmanTileEvent_BossBattle *this)

{
  *(undefined ***)this = &PTR__RichmanTileEvent_BossBattle_06987f80;
  FUN_05476c50(this + 0x90);
  std::string::~string((string *)(this + 0x88));
  RichmanTileEventBase::~RichmanTileEventBase((RichmanTileEventBase *)this);
  return;
}


/* RichmanTileEvent_BossBattle::~RichmanTileEvent_BossBattle() */

void __thiscall
RichmanTileEvent_BossBattle::~RichmanTileEvent_BossBattle(RichmanTileEvent_BossBattle *this)

{
  ~RichmanTileEvent_BossBattle(this);
  AK::FreeHook(this);
  return;
}


/* RichmanTileEvent_BossBattle::RichmanTileEvent_BossBattle(RichmanTileEventConfig&) */

void __thiscall
RichmanTileEvent_BossBattle::RichmanTileEvent_BossBattle
          (RichmanTileEvent_BossBattle *this,RichmanTileEventConfig *param_1)

{
  size_t in_x2;
  
  RichmanTileEventBase::RichmanTileEventBase((RichmanTileEventBase *)this,param_1);
  *(undefined ***)this = &PTR__RichmanTileEvent_BossBattle_06987f80;
  Set8BytesTo0((string *)(this + 0x88));
  FUN_05476574(this + 0x90);
  *(undefined4 *)(this + 0x80) = 0;
  std::string::append((string *)(this + 0x88),"",in_x2);
  FUN_054772c4(this + 0x90,&DAT_056f11a8);
  return;
}

