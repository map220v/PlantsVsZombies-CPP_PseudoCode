// Class: CornucopiaProgressTipsUI


/* CornucopiaProgressTipsUI::~CornucopiaProgressTipsUI() */

void __thiscall CornucopiaProgressTipsUI::~CornucopiaProgressTipsUI(CornucopiaProgressTipsUI *this)

{
  *(undefined ***)this = &PTR_GetClass_069e1940;
  TouchWidget::~TouchWidget((TouchWidget *)this);
  return;
}


/* CornucopiaProgressTipsUI::~CornucopiaProgressTipsUI() */

void __thiscall CornucopiaProgressTipsUI::~CornucopiaProgressTipsUI(CornucopiaProgressTipsUI *this)

{
  ~CornucopiaProgressTipsUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaProgressTipsUI::CornucopiaProgressTipsUI() */

void __thiscall CornucopiaProgressTipsUI::CornucopiaProgressTipsUI(CornucopiaProgressTipsUI *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TouchWidget::TouchWidget((TouchWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069e1940;
  std::string::string(asStack_10,"IMAGE_UI_GENERIC_TANHAO_INFO_BTN");
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xf0) = uVar1;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaProgressTipsUI::Draw(Sexy::Graphics*) */

void __thiscall CornucopiaProgressTipsUI::Draw(CornucopiaProgressTipsUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xf0) != 0) {
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf0));
    this_00 = *(SalesProgressBar **)(this + 0xf0);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

