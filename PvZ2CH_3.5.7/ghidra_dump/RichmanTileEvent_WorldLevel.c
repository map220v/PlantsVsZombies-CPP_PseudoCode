// Class: RichmanTileEvent_WorldLevel


/* RichmanTileEvent_WorldLevel::PostEventMessage() */

void RichmanTileEvent_WorldLevel::PostEventMessage(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEvent_WorldLevel::ShowEntryUI() */

void __thiscall RichmanTileEvent_WorldLevel::ShowEntryUI(RichmanTileEvent_WorldLevel *this)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,L"[RICHMAN_WORLDLEVEL_TITLE]",auStack_68);
  FUN_05478178(awStack_50,L"[RICHMAN_WORLDLEVEL_DESCRIPTION]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[RICHMAN_WORLDLEVEL_ESCAPE_BTN]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEscapeBtn);
  Sexy::Delegate0::Delegate0<RichmanTileEvent_WorldLevel,void(RichmanTileEvent_WorldLevel::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[RICHMAN_WORLDLEVEL_ENTER_BTN]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEnterBtn);
  Sexy::Delegate0::Delegate0<RichmanTileEvent_WorldLevel,void(RichmanTileEvent_WorldLevel::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichmanTileEvent_WorldLevel::ExecuteEvent() */

void __thiscall RichmanTileEvent_WorldLevel::ExecuteEvent(RichmanTileEvent_WorldLevel *this)

{
  RichmanTileEventBase::ExecuteEvent((RichmanTileEventBase *)this);
  ShowEntryUI(this);
  return;
}


/* RichmanTileEvent_WorldLevel::ExecuteEventPost() */

void RichmanTileEvent_WorldLevel::ExecuteEventPost(void)

{
  RichmanTileEventManager *this;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  RichmanTileEventManager::SetEventNeedChecked(this,false);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* RichmanTileEvent_WorldLevel::OnEscapeBtn() */

void RichmanTileEvent_WorldLevel::OnEscapeBtn(void)

{
  RichmanTileEventManager *this;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  RichmanTileEventManager::ExecuteEventPost(this);
  return;
}


/* RichmanTileEvent_WorldLevel::OnEnterBtn() */

void __thiscall RichmanTileEvent_WorldLevel::OnEnterBtn(RichmanTileEvent_WorldLevel *this)

{
  GameStateMgr *pGVar1;
  undefined8 uVar2;
  RichmanTileEventManager *this_00;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  pGVar1 = gGameStateMgr;
  uVar2 = FUN_04c45630(*(undefined8 *)(this + 0x68),0);
  GameStateMgr::StartLevel(pGVar1,&DAT_06b90c28,uVar2,0xffffffff,1,1,0);
  this_00 = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  RichmanTileEventManager::SetEventNeedChecked(this_00,true);
  return;
}


/* RichmanTileEvent_WorldLevel::~RichmanTileEvent_WorldLevel() */

void __thiscall
RichmanTileEvent_WorldLevel::~RichmanTileEvent_WorldLevel(RichmanTileEvent_WorldLevel *this)

{
  *(undefined ***)this = &PTR__RichmanTileEvent_WorldLevel_06987fc0;
  RichmanTileEventBase::~RichmanTileEventBase((RichmanTileEventBase *)this);
  return;
}


/* RichmanTileEvent_WorldLevel::~RichmanTileEvent_WorldLevel() */

void __thiscall
RichmanTileEvent_WorldLevel::~RichmanTileEvent_WorldLevel(RichmanTileEvent_WorldLevel *this)

{
  ~RichmanTileEvent_WorldLevel(this);
  AK::FreeHook(this);
  return;
}


/* RichmanTileEvent_WorldLevel::RichmanTileEvent_WorldLevel(RichmanTileEventConfig&) */

void __thiscall
RichmanTileEvent_WorldLevel::RichmanTileEvent_WorldLevel
          (RichmanTileEvent_WorldLevel *this,RichmanTileEventConfig *param_1)

{
  RichmanTileEventBase::RichmanTileEventBase((RichmanTileEventBase *)this,param_1);
  *(undefined ***)this = &PTR__RichmanTileEvent_WorldLevel_06987fc0;
  return;
}

