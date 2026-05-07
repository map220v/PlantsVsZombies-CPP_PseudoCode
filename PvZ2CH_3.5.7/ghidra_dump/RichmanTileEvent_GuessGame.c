// Class: RichmanTileEvent_GuessGame


/* RichmanTileEvent_GuessGame::PostEventMessage() */

void RichmanTileEvent_GuessGame::PostEventMessage(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* RichmanTileEvent_GuessGame::GetGuessGameBet() const */

undefined4 __thiscall RichmanTileEvent_GuessGame::GetGuessGameBet(RichmanTileEvent_GuessGame *this)

{
  return *(undefined4 *)(this + 0x80);
}


/* RichmanTileEvent_GuessGame::SetGuessGameResult(GuessResult) */

void __thiscall
RichmanTileEvent_GuessGame::SetGuessGameResult(RichmanTileEvent_GuessGame *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x84) = param_2;
  return;
}


/* RichmanTileEvent_GuessGame::GetGuessGameResult() const */

undefined4 __thiscall
RichmanTileEvent_GuessGame::GetGuessGameResult(RichmanTileEvent_GuessGame *this)

{
  return *(undefined4 *)(this + 0x84);
}


/* RichmanTileEvent_GuessGame::OnCloseBtnCallback() */

void RichmanTileEvent_GuessGame::OnCloseBtnCallback(void)

{
  if (UISingletonDialog<GuessGamePanel>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<GuessGamePanel>::m_pInstance + 0x318))();
    UISingletonDialog<GuessGamePanel>::m_pInstance = (long *)0x0;
  }
  return;
}


/* RichmanTileEvent_GuessGame::OnEnterBtn_2() */

void __thiscall RichmanTileEvent_GuessGame::OnEnterBtn_2(RichmanTileEvent_GuessGame *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  *(undefined4 *)(this + 0x80) = 2;
  UISingletonDialog<GuessGamePanel>::ShowDialog();
  return;
}


/* RichmanTileEvent_GuessGame::OnEnterBtn_20() */

void __thiscall RichmanTileEvent_GuessGame::OnEnterBtn_20(RichmanTileEvent_GuessGame *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  *(undefined4 *)(this + 0x80) = 0x14;
  UISingletonDialog<GuessGamePanel>::ShowDialog();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEvent_GuessGame::ShowEntryUI(int) */

void __thiscall
RichmanTileEvent_GuessGame::ShowEntryUI(RichmanTileEvent_GuessGame *this,int param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  long *plVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,L"[RICHMAN_GUESS_GAME_TITLE]",auStack_68);
  FUN_05478178(awStack_50,L"[RICHMAN_GUESS_GAME_DESC]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[RICHMAN_GUESS_GAME_BTN_2]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEnterBtn_2);
  Sexy::Delegate0::Delegate0<RichmanTileEvent_GuessGame,void(RichmanTileEvent_GuessGame::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[RICHMAN_GUESS_GAME_BTN_20]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEnterBtn_20);
  Sexy::Delegate0::Delegate0<RichmanTileEvent_GuessGame,void(RichmanTileEvent_GuessGame::*)()>
            (aDStack_38,awStack_50);
  plVar2 = (long *)PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (param_1 < 0x14) {
    (**(code **)(*plVar2 + 0x188))(plVar2,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEvent_GuessGame::ShowEscapeUI() */

void __thiscall RichmanTileEvent_GuessGame::ShowEscapeUI(RichmanTileEvent_GuessGame *this)

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
  FUN_05478178(awStack_58,L"[RICHMAN_GUESS_GAME_TITLE]",auStack_68);
  FUN_05478178(awStack_50,L"[RICHMAN_GUESS_GAME_ESCAPE]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[RICHMAN_GUESS_GAME_BTN_ESCAPE]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEscapeBtn);
  Sexy::Delegate0::Delegate0<RichmanTileEvent_GuessGame,void(RichmanTileEvent_GuessGame::*)()>
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEvent_GuessGame::ExecuteEvent() */

void __thiscall RichmanTileEvent_GuessGame::ExecuteEvent(RichmanTileEvent_GuessGame *this)

{
  int iVar1;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RichmanTileEventBase::ExecuteEvent((RichmanTileEventBase *)this);
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_10,"mat_richman_coin");
  iVar1 = PlayerInfo::GetMaterialNum(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (iVar1 < 2) {
    ShowEscapeUI(this);
  }
  else {
    ShowEntryUI(this,iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RichmanTileEvent_GuessGame::OnEscapeBtn() */

void RichmanTileEvent_GuessGame::OnEscapeBtn(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::TileEvent_GuessGame_Post,0,-1);
  return;
}


/* RichmanTileEvent_GuessGame::~RichmanTileEvent_GuessGame() */

void __thiscall
RichmanTileEvent_GuessGame::~RichmanTileEvent_GuessGame(RichmanTileEvent_GuessGame *this)

{
  *(undefined ***)this = &PTR__RichmanTileEvent_GuessGame_06988000;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RichmanTileEventBase::~RichmanTileEventBase((RichmanTileEventBase *)this);
  return;
}


/* RichmanTileEvent_GuessGame::~RichmanTileEvent_GuessGame() */

void __thiscall
RichmanTileEvent_GuessGame::~RichmanTileEvent_GuessGame(RichmanTileEvent_GuessGame *this)

{
  ~RichmanTileEvent_GuessGame(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEvent_GuessGame::RichmanTileEvent_GuessGame(RichmanTileEventConfig&) */

void __thiscall
RichmanTileEvent_GuessGame::RichmanTileEvent_GuessGame
          (RichmanTileEvent_GuessGame *this,RichmanTileEventConfig *param_1)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RichmanTileEventBase::RichmanTileEventBase((RichmanTileEventBase *)this,param_1);
  *(undefined4 *)(this + 0x84) = 2;
  *(undefined ***)this = &PTR__RichmanTileEvent_GuessGame_06988000;
  *(undefined4 *)(this + 0x80) = 0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCloseBtnCallback);
  Sexy::Delegate0::Delegate0<RichmanTileEvent_GuessGame,void(RichmanTileEvent_GuessGame::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ResultClosed,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichmanTileEvent_GuessGame::ExecuteEventPost() */

void __thiscall RichmanTileEvent_GuessGame::ExecuteEventPost(RichmanTileEvent_GuessGame *this)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  PlayerInfo *this_00;
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_01;
  vector *pvVar4;
  undefined4 *puVar5;
  ulong uVar6;
  CommonUIManager *this_02;
  long lVar7;
  ulong uVar8;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::TileEvent_GuessGame_Post,*(int *)(this + 0x80)
             ,*(int *)(this + 0x84));
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  this_01 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  pvVar4 = (vector *)
           eastl::
           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           ::get_allocator(this_01);
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)&local_20,pvVar4);
  iVar3 = *(int *)(this + 0x84);
  if (iVar3 == 1) {
    uVar8 = 0;
    while( true ) {
      uVar2 = local_20;
      uVar6 = FUN_04c4561c(local_20,local_18);
      if (uVar6 <= uVar8) break;
      local_40 = 0;
      puVar5 = (undefined4 *)FUN_04c45628(uVar2,uVar8);
      local_48 = *puVar5;
      local_44 = puVar5[1];
      std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
                ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_38,
                 (LotteryBonus *)&local_48);
      uVar8 = uVar8 + 1;
    }
    this_02 = (CommonUIManager *)Sexy::LazySingleton<CommonUIManager>::GetInstance();
    CommonUIManager::ShowBonusRedPachet(this_02,(vector *)avStack_38);
    iVar3 = *(int *)(this + 0x84);
  }
  if (iVar3 == 2) {
    std::string::string((string *)&local_48,"mat_richman_coin");
    iVar3 = PlayerInfo::GetMaterialNum(this_00,(string *)&local_48);
    std::string::~string((string *)&local_48);
    nop();
    lVar7 = FUN_04c4561c(local_20,local_18);
    if (lVar7 != 0) {
      lVar7 = FUN_04c45628(local_20,0);
      iVar1 = *(int *)(lVar7 + 4);
      std::string::string((string *)&local_48,"mat_richman_coin");
      PlayerInfo::SetMaterialNum(this_00,(string *)&local_48,iVar3 + iVar1);
      std::string::~string((string *)&local_48);
      nop();
    }
  }
  std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::~vector
            ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)&local_20);
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

