// Class: WorldLevelPackageRewardBannerWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageRewardBannerWidget::InitView() */

void __thiscall
WorldLevelPackageRewardBannerWidget::InitView(WorldLevelPackageRewardBannerWidget *this)

{
  char *__s;
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == 0x5a64) {
    __s = "IMAGE_UI_WORLD_LEVEL_PACKAGE_BANNER_GENE";
  }
  else {
    __s = "IMAGE_UI_WORLD_LEVEL_PACKAGE_BANNER_PLANT";
  }
  pcVar1 = *(code **)(*(long *)this + 0x318);
  std::string::string(asStack_10,__s);
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldLevelPackageRewardBannerWidget::~WorldLevelPackageRewardBannerWidget() */

void __thiscall
WorldLevelPackageRewardBannerWidget::~WorldLevelPackageRewardBannerWidget
          (WorldLevelPackageRewardBannerWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06869640;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* WorldLevelPackageRewardBannerWidget::~WorldLevelPackageRewardBannerWidget() */

void __thiscall
WorldLevelPackageRewardBannerWidget::~WorldLevelPackageRewardBannerWidget
          (WorldLevelPackageRewardBannerWidget *this)

{
  ~WorldLevelPackageRewardBannerWidget(this);
  AK::FreeHook(this);
  return;
}


/* WorldLevelPackageRewardBannerWidget::WorldLevelPackageRewardBannerWidget(int) */

void __thiscall
WorldLevelPackageRewardBannerWidget::WorldLevelPackageRewardBannerWidget
          (WorldLevelPackageRewardBannerWidget *this,int param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(int *)(this + 0xe0) = param_1;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_06869640;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageRewardBannerWidget::Draw(Sexy::Graphics*) */

void __thiscall
WorldLevelPackageRewardBannerWidget::Draw
          (WorldLevelPackageRewardBannerWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xd8) != 0) {
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xd8));
    this_00 = *(SalesProgressBar **)(this + 0xd8);
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

