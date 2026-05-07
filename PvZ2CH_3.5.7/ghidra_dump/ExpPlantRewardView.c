// Class: ExpPlantRewardView


/* ExpPlantRewardView::ButtonPress(int) */

int ExpPlantRewardView::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to ExpPlantRewardView::ButtonPress(int) */

void __thiscall ExpPlantRewardView::ButtonPress(ExpPlantRewardView *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExpPlantRewardView::~ExpPlantRewardView() */

void __thiscall ExpPlantRewardView::~ExpPlantRewardView(ExpPlantRewardView *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d00a0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066cfd70;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string((string *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ExpPlantRewardView::~ExpPlantRewardView() */

void __thiscall ExpPlantRewardView::~ExpPlantRewardView(ExpPlantRewardView *this)

{
  ~ExpPlantRewardView(this);
  AK::FreeHook(this);
  return;
}


/* ExpPlantRewardView::Draw(Sexy::Graphics*) */

void __thiscall ExpPlantRewardView::Draw(ExpPlantRewardView *this,Graphics *param_1)

{
  nop();
  if (*(Image **)(this + 0x108) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x108),*(int *)(this + 0x110),*(int *)(this + 0x114),
               *(int *)(this + 0x118),*(int *)(this + 0x11c));
  }
  if (*(Image **)(this + 0xf0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf0),*(int *)(this + 0xf8),*(int *)(this + 0xfc),
               *(int *)(this + 0x100),*(int *)(this + 0x104));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExpPlantRewardView::GetLevelIconString(int) */

void ExpPlantRewardView::GetLevelIconString(int param_1)

{
  long lVar1;
  int iVar2;
  undefined4 in_w1;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06abc1b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06abc1b8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06abc008,"IMAGE_UI_GENERIC_");
    __cxa_guard_release(&DAT_06abc1b8);
    __cxa_atexit(std::string::~string,&DAT_06abc008,&DAT_06a88000);
    nop();
  }
  switch(in_w1) {
  case 1:
    std::operator+((string *)&DAT_06abc008,"ICON_FRAME_GREEN");
    break;
  case 2:
    std::operator+((string *)&DAT_06abc008,"ICON_FRAME_BLUE");
    break;
  case 3:
    std::operator+((string *)&DAT_06abc008,"ICON_FRAME_PURPLE");
    break;
  case 4:
    std::operator+((string *)&DAT_06abc008,"ICON_FRAME_ORANGE");
    break;
  default:
    std::operator+((string *)&DAT_06abc008,"ICON_FRAME_WHITE");
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExpPlantRewardView::InitView() */

void __thiscall ExpPlantRewardView::InitView(ExpPlantRewardView *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *this_00;
  undefined8 uVar6;
  PVZ2UIButton *pPVar7;
  long *plVar8;
  code *pcVar9;
  undefined1 auStack_98 [8];
  string asStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  string asStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar1 = FUN_03943dd0(0xfe);
  iVar2 = FUN_03943dd0(0x78);
  iVar4 = *(int *)(this + 0x50);
  iVar5 = *(int *)(this + 0x54);
  iVar3 = FUN_03943dd0(0x9b);
  Sexy::Insets::Insets((Insets *)&local_88,iVar1,iVar2,iVar4 + iVar1 * -2,(iVar5 - iVar2) - iVar3);
  *(undefined8 *)(this + 0x128) = local_88;
  *(undefined8 *)(this + 0x130) = uStack_80;
  GetLevelIconString((int)this);
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_90,false);
  *(LotteryResultProgressBar **)(this + 0x108) = this_00;
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x108));
  Sexy::Insets::Insets
            ((Insets *)&local_40,
             *(int *)(this + 0x128) + (*(int *)(this + 0x130) - (int)(float)iVar4) / 2,
             *(int *)(this + 300) + (*(int *)(this + 0x134) - (int)(float)iVar5) / 2,
             (int)(float)iVar4,(int)(float)iVar5);
  *(undefined8 *)(this + 0x110) = local_40;
  *(undefined8 *)(this + 0x118) = uStack_38;
  Sexy::StringToUpper((Sexy *)(this + 0xe0),(string *)(this + 0x110));
  std::operator+((string *)&PlantHeadshot::PlantBigPrefix,asStack_78);
  uVar6 = StringHelper::ToImage((string *)&local_40,true);
  *(undefined8 *)(this + 0xf0) = uVar6;
  std::string::~string((string *)&local_40);
  std::string::~string(asStack_78);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf0));
  iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xf0));
  Sexy::Insets::Insets
            ((Insets *)&local_40,
             *(int *)(this + 0x110) + (*(int *)(this + 0x118) - (int)((float)iVar4 * 0.65)) / 2,
             *(int *)(this + 0x114) + (*(int *)(this + 0x11c) - (int)((float)iVar5 * 0.65)) / 2,
             (int)((float)iVar4 * 0.65),(int)((float)iVar5 * 0.65));
  *(undefined8 *)(this + 0xf8) = local_40;
  *(undefined8 *)(this + 0x100) = uStack_38;
  FUN_05478178(asStack_78,L"[EXP_PLANT_VIEW_OK]",auStack_98);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar7,0x68,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x120) = pPVar7;
  FUN_05476c50(asStack_78);
  nop();
  plVar8 = *(long **)(this + 0x120);
  pcVar9 = *(code **)(*plVar8 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  (*pcVar9)(plVar8,uVar6);
  pPVar7 = *(PVZ2UIButton **)(this + 0x120);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06abbe60,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06abc098,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  iVar4 = FUN_03943dd0(0xaa);
  iVar5 = FUN_03943dd0(0x46);
  (**(code **)(**(long **)(this + 0x120) + 0x198))
            (*(long **)(this + 0x120),*(int *)(this + 0x128) + (*(int *)(this + 0x130) - iVar4) / 2,
             (*(int *)(this + 300) + *(int *)(this + 0x134)) - iVar5 / 2,iVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExpPlantRewardView::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
ExpPlantRewardView::DrawAll(ExpPlantRewardView *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x128));
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbe88);
  Draw9SliceImage(param_2,aIStack_18,uVar4);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  iVar3 = FUN_03943dd0(10);
  iVar1 = *(int *)(this + 300);
  iVar2 = *(int *)(this + 0x50);
  TodStringTranslate(L"[EXP_PLANT_BUY_REWARD_TITLE]");
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)(iVar3 + iVar1),(float)iVar2,uVar4,param_2,auStack_20,1,
             aIStack_18,0);
  FUN_05476c50(auStack_20);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ExpPlantRewardView::ButtonDepress(int) */

void __thiscall ExpPlantRewardView::ButtonDepress(ExpPlantRewardView *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  if (param_1 != 0x68) {
    return;
  }
  LawnApp::KillExpPlantRewardView(gLawnApp);
  return;
}


/* non-virtual thunk to ExpPlantRewardView::ButtonDepress(int) */

void __thiscall ExpPlantRewardView::ButtonDepress(ExpPlantRewardView *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExpPlantRewardView::ExpPlantRewardView(std::string const&) */

void __thiscall ExpPlantRewardView::ExpPlantRewardView(ExpPlantRewardView *this,string *param_1)

{
  LawnApp *this_00;
  string *psVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066cfd70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d00a0;
  Set8BytesTo0(this + 0xe0);
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x110));
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  thunk_FUN_05475e00(this + 0xe0,param_1);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(lVar2 + 0xd0);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  InitView(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

