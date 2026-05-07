// Class: CardGameDeckButton


/* CardGameDeckButton::SetIndex(int) */

void __thiscall CardGameDeckButton::SetIndex(CardGameDeckButton *this,int param_1)

{
  *(int *)(this + 0x2fc) = param_1;
  return;
}


/* CardGameDeckButton::~CardGameDeckButton() */

void __thiscall CardGameDeckButton::~CardGameDeckButton(CardGameDeckButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069da450;
  *(undefined ***)(this + 0x198) = &PTR__CardGameDeckButton_069da7a8;
  FUN_05476c50(this + 0x328);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to CardGameDeckButton::~CardGameDeckButton() */

void __thiscall CardGameDeckButton::~CardGameDeckButton(CardGameDeckButton *this)

{
  ~CardGameDeckButton(this + -0x198);
  return;
}


/* CardGameDeckButton::~CardGameDeckButton() */

void __thiscall CardGameDeckButton::~CardGameDeckButton(CardGameDeckButton *this)

{
  ~CardGameDeckButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGameDeckButton::~CardGameDeckButton() */

void __thiscall CardGameDeckButton::~CardGameDeckButton(CardGameDeckButton *this)

{
  ~CardGameDeckButton(this + -0x198);
  return;
}


/* CardGameDeckButton::SetSelect(bool) */

void __thiscall CardGameDeckButton::SetSelect(CardGameDeckButton *this,bool param_1)

{
  this[0x300] = (CardGameDeckButton)param_1;
  return;
}


/* CardGameDeckButton::IsSelected() const */

CardGameDeckButton __thiscall CardGameDeckButton::IsSelected(CardGameDeckButton *this)

{
  return this[0x300];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameDeckButton::InitView() */

void __thiscall CardGameDeckButton::InitView(CardGameDeckButton *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_CARD_GAME_CHOOSE_DECK_BG_%d",asStack_28,(ulong)*(uint *)(this + 0x2fc));
  uVar5 = StringHelper::ToImage(asStack_28,false);
  *(undefined8 *)(this + 0x308) = uVar5;
  std::string::string((string *)&local_18,"IMAGE_UI_DIALOG_ASSET_SPEECH_BUBBLE_BG");
  uVar5 = StringHelper::ToImage((string *)&local_18,false);
  *(undefined8 *)(this + 0x310) = uVar5;
  std::string::~string((string *)&local_18);
  nop();
  if (*(int *)(this + 0x2fc) == 0) {
    iVar2 = FUN_04e28ddc(0x14);
    iVar1 = *(int *)(this + 0x54);
    iVar3 = FUN_04e28ddc(0x3c);
    iVar4 = FUN_04e28ddc(0x1e);
    Sexy::Insets::Insets((Insets *)&local_18,*(int *)(this + 0x50),iVar1 - iVar2,iVar3,iVar4);
    *(undefined8 *)(this + 0x318) = local_18;
    *(undefined8 *)(this + 800) = uStack_10;
  }
  else {
    iVar2 = FUN_04e28ddc(0x3c);
    iVar3 = FUN_04e28ddc(0x14);
    iVar1 = *(int *)(this + 0x54);
    iVar4 = FUN_04e28ddc(0x1e);
    Sexy::Insets::Insets((Insets *)&local_18,-iVar2,iVar1 - iVar3,iVar2,iVar4);
    *(undefined8 *)(this + 0x318) = local_18;
    *(undefined8 *)(this + 800) = uStack_10;
  }
  Sexy::StrFormat("[CARD_GAME_CHOOSE_DECK_DESC_%d]",asStack_20,(ulong)*(uint *)(this + 0x2fc));
  StringHelper::ToStringValue(asStack_20);
  FUN_054766c8(this + 0x328,(string *)&local_18);
  FUN_05476c50((string *)&local_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameDeckButton::CardGameDeckButton(int, Sexy::ButtonListener*) */

void __thiscall
CardGameDeckButton::CardGameDeckButton(CardGameDeckButton *this,int param_1,ButtonListener *param_2)

{
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color((Color *)&local_18,1);
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,awStack_20,(Color *)&local_18);
  FUN_05476c50(awStack_20);
  nop();
  *(undefined ***)this = &PTR_GetClass_069da450;
  *(undefined ***)(this + 0x198) = &PTR__CardGameDeckButton_069da7a8;
  Sexy::Insets::Insets((Insets *)(this + 0x318));
  FUN_05476574(this + 0x328);
  *(undefined4 *)(this + 0x2fc) = 0;
  this[0x300] = (CardGameDeckButton)0x0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  *(undefined8 *)(this + 0x318) = local_18;
  *(undefined8 *)(this + 800) = uStack_10;
  FUN_054772c4(this + 0x328,&DAT_056f11a8);
  this[0x59] = (CardGameDeckButton)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameDeckButton::Draw(Sexy::Graphics*) */

void __thiscall CardGameDeckButton::Draw(CardGameDeckButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *pSVar6;
  undefined8 uVar7;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0x308) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x308),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (this[0x300] != (CardGameDeckButton)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9e9d0);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9ea08);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    pSVar6 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9ea08);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar6);
    iVar3 = *(int *)(this + 0x50);
    iVar4 = *(int *)(this + 0x54);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9ea08);
    Sexy::Graphics::DrawImage(param_1,pIVar5,(iVar3 - iVar1) / 2,(iVar4 - iVar2) / 2,iVar1,iVar2);
    if (*(LotteryResultProgressBar **)(this + 0x310) != (LotteryResultProgressBar *)0x0) {
      iVar3 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x310));
      pSVar6 = *(SalesProgressBar **)(this + 0x310);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar6);
      Sexy::Insets::Insets(aIStack_18,0,0,iVar3,iVar4);
      Sexy::Graphics::DrawImageMirror
                (param_1,(Image *)pSVar6,(TRect *)aIStack_18,(TRect *)(this + 0x318),
                 *(int *)(this + 0x2fc) == 1);
    }
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x328,this + 0x318,uVar7,(Color *)aIStack_18,5,1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

