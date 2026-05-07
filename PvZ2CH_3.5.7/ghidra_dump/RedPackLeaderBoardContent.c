// Class: RedPackLeaderBoardContent


/* RedPackLeaderBoardContent::~RedPackLeaderBoardContent() */

void __thiscall
RedPackLeaderBoardContent::~RedPackLeaderBoardContent(RedPackLeaderBoardContent *this)

{
  *(undefined ***)this = &PTR_GetClass_068000f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06800410;
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RedPackLeaderBoardContent::~RedPackLeaderBoardContent() */

void __thiscall
RedPackLeaderBoardContent::~RedPackLeaderBoardContent(RedPackLeaderBoardContent *this)

{
  ~RedPackLeaderBoardContent(this);
  AK::FreeHook(this);
  return;
}


/* RedPackLeaderBoardContent::RedPackLeaderBoardContent(int, std::wstring const&, std::wstring
   const&) */

void __thiscall
RedPackLeaderBoardContent::RedPackLeaderBoardContent
          (RedPackLeaderBoardContent *this,int param_1,wstring *param_2,wstring *param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(int *)(this + 0xe0) = param_1;
  *(undefined ***)this = &PTR_GetClass_068000f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06800410;
  FUN_05477b24(this + 0xe8,param_2);
  FUN_05477b24(this + 0xf0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackLeaderBoardContent::Draw(Sexy::Graphics*) */

void __thiscall RedPackLeaderBoardContent::Draw(RedPackLeaderBoardContent *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  int local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0ca0);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  iVar1 = FUN_041bd038(0xfffffff6);
  iVar2 = FUN_041bd038(200);
  Sexy::Insets::Insets((Insets *)&local_28,iVar1,0,iVar2,*(int *)(this + 0x54) / 2);
  TodStringTranslate(L"[REDPACK_LEADERBOARD_RANK]");
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar3,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  local_28 = FUN_041bd038(0x96);
  TodStringTranslate(L"[REDPACK_LEADERBOARD_NAME]");
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar3,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  local_28 = FUN_041bd038(0x136);
  TodStringTranslate(L"[REDPACK_LEADERBOARD_SCORE]");
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar3,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  local_28 = FUN_041bd038(0xfffffff6);
  local_24 = *(int *)(this + 0x54) / 2;
  Sexy::StrFormat(L"%d",auStack_30,(ulong)*(uint *)(this + 0xe0));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar3,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  local_28 = FUN_041bd038(0x96);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,this + 0xe8,(Insets *)&local_28,uVar3,aIStack_18,5,1);
  local_28 = FUN_041bd038(0x136);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,this + 0xf0,(Insets *)&local_28,uVar3,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

