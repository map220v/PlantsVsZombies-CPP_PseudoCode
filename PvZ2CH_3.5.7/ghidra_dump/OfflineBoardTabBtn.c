// Class: OfflineBoardTabBtn


/* OfflineBoardTabBtn::~OfflineBoardTabBtn() */

void __thiscall OfflineBoardTabBtn::~OfflineBoardTabBtn(OfflineBoardTabBtn *this)

{
  *(undefined ***)this = &PTR_GetClass_06936100;
  UIWidgetRadio::~UIWidgetRadio((UIWidgetRadio *)this);
  return;
}


/* OfflineBoardTabBtn::~OfflineBoardTabBtn() */

void __thiscall OfflineBoardTabBtn::~OfflineBoardTabBtn(OfflineBoardTabBtn *this)

{
  ~OfflineBoardTabBtn(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineBoardTabBtn::OfflineBoardTabBtn(int, std::wstring const&) */

void __thiscall
OfflineBoardTabBtn::OfflineBoardTabBtn(OfflineBoardTabBtn *this,int param_1,wstring *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  wstring *__n;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_2;
  UIWidgetRadio::UIWidgetRadio((UIWidgetRadio *)this);
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined ***)this = &PTR_GetClass_06936100;
  std::string::append((string *)(this + 200),"OfflineBoardTabBtn",(size_t)__n);
  *(int *)(this + 0xd4) = param_1;
  thunk_FUN_05477b9c(this + 0xd8,param_2);
  this[0x59] = (OfflineBoardTabBtn)0x0;
  FUN_04a52928(this + 0x1ac);
  std::string::string(asStack_10,"IMAGE_UI_BOARD_BTN_MASK");
  uVar4 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0x1b8) = uVar4;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_UI_BOARD_BTN");
  uVar4 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xe8) = uVar4;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_UI_BOARD_BTN_S");
  uVar4 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0x100) = uVar4;
  std::string::~string(asStack_10);
  nop();
  if (*(LotteryResultProgressBar **)(this + 0xe8) != (LotteryResultProgressBar *)0x0) {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe8));
    iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xe8));
    iVar3 = FUN_04a52990();
    Sexy::Widget::Resize((Widget *)this,0,0,iVar1,iVar2 + iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfflineBoardTabBtn::Draw(Sexy::Graphics*) */

void __thiscall OfflineBoardTabBtn::Draw(OfflineBoardTabBtn *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = FUN_04a52990();
  Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xe8),0,iVar5);
  cVar4 = UIWidgetRadio::IsSelected((UIWidgetRadio *)this);
  if (cVar4 == '\0') {
    this_00 = *(SalesProgressBar **)(this + 0x1b8);
  }
  else {
    this_00 = *(SalesProgressBar **)(this + 0x100);
  }
  if (this_00 != (SalesProgressBar *)0x0) {
    lVar8 = *(long *)(this + 0xe8);
    iVar5 = *(int *)(this_00 + 0x38);
    iVar1 = *(int *)(lVar8 + 0x38);
    iVar6 = FUN_04a52990();
    iVar2 = *(int *)(lVar8 + 0x3c);
    iVar7 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)this_00,(iVar1 - iVar5) / 2,iVar6 + (iVar2 - iVar7) / 2);
  }
  cVar4 = FUN_054765e8(this + 0xd8);
  if (cVar4 == '\0') {
    iVar5 = FUN_04a52990();
    Sexy::Insets::Insets(aIStack_28,0,iVar5,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar5);
    uVar3 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
    Sexy::Insets::Insets(aIStack_18,0xff,0xf7,0xb5,0xff);
    WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar3,aIStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

