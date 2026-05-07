// Class: WorldLevelPackageRewardDetailWidget


/* WorldLevelPackageRewardDetailWidget::SetImage(std::string) */

void __thiscall
WorldLevelPackageRewardDetailWidget::SetImage
          (WorldLevelPackageRewardDetailWidget *this,string *param_2)

{
  undefined8 uVar1;
  
  uVar1 = StringHelper::ToImage(param_2,false);
  *(undefined8 *)(this + 0xd8) = uVar1;
  return;
}


/* WorldLevelPackageRewardDetailWidget::~WorldLevelPackageRewardDetailWidget() */

void __thiscall
WorldLevelPackageRewardDetailWidget::~WorldLevelPackageRewardDetailWidget
          (WorldLevelPackageRewardDetailWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06869ca0;
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* WorldLevelPackageRewardDetailWidget::~WorldLevelPackageRewardDetailWidget() */

void __thiscall
WorldLevelPackageRewardDetailWidget::~WorldLevelPackageRewardDetailWidget
          (WorldLevelPackageRewardDetailWidget *this)

{
  ~WorldLevelPackageRewardDetailWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageRewardDetailWidget::InitView() */

void __thiscall
WorldLevelPackageRewardDetailWidget::InitView(WorldLevelPackageRewardDetailWidget *this)

{
  char *__s;
  code *pcVar1;
  string asStack_38 [40];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == 0x5a64) {
    __s = "IMAGE_UI_WORLD_LEVEL_PACKAGE_DETAIL_GENE";
  }
  else {
    __s = "IMAGE_UI_WORLD_LEVEL_PACKAGE_DETAIL_PLANT";
  }
  pcVar1 = *(code **)(*(long *)this + 0x318);
  std::string::string(asStack_38,__s);
  (*pcVar1)(this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  GetGameItemInfo(*(int *)(this + 0xe0),0x7fffffff,0);
  thunk_FUN_05477b9c(this + 0xe8,auStack_10);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldLevelPackageRewardDetailWidget::WorldLevelPackageRewardDetailWidget(int) */

void __thiscall
WorldLevelPackageRewardDetailWidget::WorldLevelPackageRewardDetailWidget
          (WorldLevelPackageRewardDetailWidget *this,int param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06869ca0;
  FUN_05476574(this + 0xe8);
  *(int *)(this + 0xe0) = param_1;
  FUN_054772c4(this + 0xe8,&DAT_056f11a8);
  *(undefined8 *)(this + 0xd8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageRewardDetailWidget::Draw(Sexy::Graphics*) */

void __thiscall
WorldLevelPackageRewardDetailWidget::Draw
          (WorldLevelPackageRewardDetailWidget *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xd8) != 0) {
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xd8));
    this_00 = *(SalesProgressBar **)(this + 0xd8);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar3);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  iVar2 = FUN_045aaddc(0);
  iVar3 = FUN_045aaddc(0x3c);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar2,*(int *)(this + 0x50),iVar3);
  bVar1 = std::operator!=((wstring *)(this + 0xe8),L"");
  if (bVar1) {
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,(wstring *)(this + 0xe8),aIStack_28,uVar4,(Color *)aIStack_18,5,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

