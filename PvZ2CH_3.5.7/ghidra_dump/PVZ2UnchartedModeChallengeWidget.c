// Class: PVZ2UnchartedModeChallengeWidget


/* PVZ2UnchartedModeChallengeWidget::ButtonDepress(int) */

int PVZ2UnchartedModeChallengeWidget::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to PVZ2UnchartedModeChallengeWidget::ButtonDepress(int) */

void __thiscall
PVZ2UnchartedModeChallengeWidget::ButtonDepress(PVZ2UnchartedModeChallengeWidget *this,int param_1)

{
  ButtonDepress((int)this + -0x300);
  return;
}


/* PVZ2UnchartedModeChallengeWidget::SetStarState(bool) */

void __thiscall
PVZ2UnchartedModeChallengeWidget::SetStarState(PVZ2UnchartedModeChallengeWidget *this,bool param_1)

{
  this[0x331] = (PVZ2UnchartedModeChallengeWidget)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeChallengeWidget::Draw(Sexy::Graphics*) */

void __thiscall
PVZ2UnchartedModeChallengeWidget::Draw(PVZ2UnchartedModeChallengeWidget *this,Graphics *param_1)

{
  PVZ2UnchartedModeChallengeWidget PVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *this_00;
  undefined8 uVar7;
  char *pcVar8;
  string asStack_38 [8];
  string asStack_30 [8];
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_04df99bc(5);
  iVar2 = *(int *)(this + 0x54) + iVar4 * -2;
  cVar3 = CardGameUtils::IsInCardGameWorldMap();
  if (cVar3 == '\0') {
    PVZ2UnchartedModeUtils::GetCurrentWorldResourcePrefix((PVZ2UnchartedModeUtils *)0x0);
    Set8BytesTo0(asStack_30);
    PVar1 = this[0x331];
  }
  else {
    std::string::string(asStack_38,"IMAGE_UI_UNCHARTED_UNCHARTED_TALE");
    nop();
    Set8BytesTo0(asStack_30);
    PVar1 = this[0x331];
  }
  if (PVar1 == (PVZ2UnchartedModeChallengeWidget)0x0) {
    pcVar8 = "_HUD_WORLDMAP_STAR_BG";
  }
  else {
    pcVar8 = "_HUD_WORLDMAP_STAR";
  }
  std::operator+(asStack_38,pcVar8);
  FUN_05474278(asStack_30,asStack_18);
  std::string::~string(asStack_18);
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_30,false);
  Sexy::Insets::Insets(aIStack_28,iVar4,iVar4,iVar2,iVar2);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
  Sexy::Insets::Insets((Insets *)asStack_18,0,0,iVar5,iVar6);
  Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)aIStack_28,(TRect *)asStack_18);
  iVar5 = FUN_04df99bc(10);
  iVar5 = iVar4 + iVar2 + iVar5;
  Sexy::Insets::Insets(aIStack_28,iVar5,0,*(int *)(this + 0x50) - iVar5,*(int *)(this + 0x54));
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets((Insets *)asStack_18,0x57,0x37,0,0xff);
  WriteWordInRect(param_1,this + 0x310,aIStack_28,uVar7,asStack_18,3,1);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ2UnchartedModeChallengeWidget::~PVZ2UnchartedModeChallengeWidget() */

void __thiscall
PVZ2UnchartedModeChallengeWidget::~PVZ2UnchartedModeChallengeWidget
          (PVZ2UnchartedModeChallengeWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069d1480;
  *(undefined ***)(this + 0x198) = &PTR__PVZ2UnchartedModeChallengeWidget_069d17e0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069d1808;
  PVZ1ModeSelectLevelChallengeWidget::~PVZ1ModeSelectLevelChallengeWidget
            ((PVZ1ModeSelectLevelChallengeWidget *)this);
  return;
}


/* non-virtual thunk to PVZ2UnchartedModeChallengeWidget::~PVZ2UnchartedModeChallengeWidget() */

void __thiscall
PVZ2UnchartedModeChallengeWidget::~PVZ2UnchartedModeChallengeWidget
          (PVZ2UnchartedModeChallengeWidget *this)

{
  ~PVZ2UnchartedModeChallengeWidget(this + -0x198);
  return;
}


/* PVZ2UnchartedModeChallengeWidget::~PVZ2UnchartedModeChallengeWidget() */

void __thiscall
PVZ2UnchartedModeChallengeWidget::~PVZ2UnchartedModeChallengeWidget
          (PVZ2UnchartedModeChallengeWidget *this)

{
  ~PVZ2UnchartedModeChallengeWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ2UnchartedModeChallengeWidget::~PVZ2UnchartedModeChallengeWidget() */

void __thiscall
PVZ2UnchartedModeChallengeWidget::~PVZ2UnchartedModeChallengeWidget
          (PVZ2UnchartedModeChallengeWidget *this)

{
  ~PVZ2UnchartedModeChallengeWidget(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeChallengeWidget::PVZ2UnchartedModeChallengeWidget(int,
   std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >) */

void __thiscall
PVZ2UnchartedModeChallengeWidget::PVZ2UnchartedModeChallengeWidget
          (PVZ2UnchartedModeChallengeWidget *this,undefined4 param_1,vector *param_3)

{
  bool bVar1;
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector(avStack_20,param_3);
  PVZ1ModeSelectLevelChallengeWidget::PVZ1ModeSelectLevelChallengeWidget
            ((PVZ1ModeSelectLevelChallengeWidget *)this,param_1,avStack_20);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_20);
  bVar1 = local_8 == ___stack_chk_guard;
  this[0x331] = (PVZ2UnchartedModeChallengeWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_069d1480;
  *(undefined ***)(this + 0x198) = &PTR__PVZ2UnchartedModeChallengeWidget_069d17e0;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069d1808;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

