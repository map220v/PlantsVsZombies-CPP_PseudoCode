// Class: LevelEditorWaveEventSelect


/* LevelEditorWaveEventSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void LevelEditorWaveEventSelect::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorWaveEventSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorWaveEventSelect::ScrollTargetReached
          (LevelEditorWaveEventSelect *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* LevelEditorWaveEventSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LevelEditorWaveEventSelect::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorWaveEventSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorWaveEventSelect::ScrollTargetInterrupted
          (LevelEditorWaveEventSelect *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* LevelEditorWaveEventSelect::~LevelEditorWaveEventSelect() */

void __thiscall
LevelEditorWaveEventSelect::~LevelEditorWaveEventSelect(LevelEditorWaveEventSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_06968250;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06968588;
  *(undefined ***)(this + 0xe0) = &PTR__LevelEditorWaveEventSelect_069685d0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to LevelEditorWaveEventSelect::~LevelEditorWaveEventSelect() */

void __thiscall
LevelEditorWaveEventSelect::~LevelEditorWaveEventSelect(LevelEditorWaveEventSelect *this)

{
  ~LevelEditorWaveEventSelect(this + -0xe0);
  return;
}


/* LevelEditorWaveEventSelect::~LevelEditorWaveEventSelect() */

void __thiscall
LevelEditorWaveEventSelect::~LevelEditorWaveEventSelect(LevelEditorWaveEventSelect *this)

{
  ~LevelEditorWaveEventSelect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LevelEditorWaveEventSelect::~LevelEditorWaveEventSelect() */

void __thiscall
LevelEditorWaveEventSelect::~LevelEditorWaveEventSelect(LevelEditorWaveEventSelect *this)

{
  ~LevelEditorWaveEventSelect(this + -0xe0);
  return;
}


/* LevelEditorWaveEventSelect::LevelEditorWaveEventSelect() */

void __thiscall
LevelEditorWaveEventSelect::LevelEditorWaveEventSelect(LevelEditorWaveEventSelect *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06968250;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06968588;
  *(undefined ***)(this + 0xe0) = &PTR__LevelEditorWaveEventSelect_069685d0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xe8));
  *(undefined8 *)(this + 0x108) = 0;
  return;
}


/* LevelEditorWaveEventSelect::ButtonDepress(int) */

void __thiscall
LevelEditorWaveEventSelect::ButtonDepress(LevelEditorWaveEventSelect *this,int param_1)

{
  if (8 < param_1 - 0x16U) {
    return;
  }
  std::function<void(int)>::operator()((function<void(int)> *)(this + 0xe8),param_1);
  return;
}


/* non-virtual thunk to LevelEditorWaveEventSelect::ButtonDepress(int) */

void __thiscall
LevelEditorWaveEventSelect::ButtonDepress(LevelEditorWaveEventSelect *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventSelect::TriggerTutorial() */

void __thiscall LevelEditorWaveEventSelect::TriggerTutorial(LevelEditorWaveEventSelect *this)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  long lVar3;
  undefined8 uVar4;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04b534f4(*(undefined4 *)(lVar3 + 0x40));
  if ((iVar1 == 0x3c) && (*(long *)(this + 0x108) != 0)) {
    LawnApp::KillGameMaskUI(gLawnApp);
    uVar4 = *(undefined8 *)(this + 0x108);
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_13]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(uVar4,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
    lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar1 = FUN_04b54f08(300);
    uVar2 = FUN_04b54f08(0xffffff60);
    FUN_04b536c8(lVar3 + 0x114,-iVar1,uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventSelect::Init() */

void __thiscall LevelEditorWaveEventSelect::Init(LevelEditorWaveEventSelect *this)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ProfileMgr *this_00;
  long lVar11;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  undefined8 uVar12;
  PVZ2UIButton *this_03;
  UIWidgetText *this_04;
  code *pcVar13;
  ulong uVar14;
  ulong local_80;
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar11 = ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_04b534f4(*(undefined4 *)(lVar11 + 0x40));
  iVar3 = FUN_04b54f08(0x46);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe0));
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  uVar4 = FUN_04b54f08(10);
  uVar5 = FUN_04b54f08(0x46);
  iVar6 = FUN_04b54f08(100);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,uVar4,uVar5,*(undefined4 *)(this + 0x50),*(int *)(this + 0x54) - iVar6);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  uVar14 = 0;
  do {
    while( true ) {
      uVar1 = uVar14 + 1;
      local_80 = uVar1;
      std::to_string<unsigned_long>(&local_80);
      std::operator+("IMAGE_UI_LEVELEDITOR_EVENT_INDEX_",asStack_78);
      uVar12 = StringHelper::ToImage(asStack_40,false);
      std::string::~string(asStack_40);
      std::string::~string(asStack_78);
      FUN_05478178(asStack_78,&DAT_056f11a8,&local_80);
      Sexy::Color::Color((Color *)asStack_40,1);
      this_03 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (this_03,(uint)uVar14 + 0x16,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,
                 (Color *)asStack_40);
      FUN_05476c50(asStack_78);
      nop();
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,uVar12,9);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar12,9);
      PVZ2UIButton::SetDialogStates(this_03,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
      iVar6 = FUN_04b54f08(0x41);
      iVar7 = FUN_04b54f08(0x1e);
      iVar8 = FUN_04b54f08(0x32);
      (**(code **)(*(long *)this_03 + 0x198))
                (this_03,iVar6 + ((uint)uVar14 & 3) * (iVar7 + iVar3),
                 (iVar3 + iVar8) * (int)(uVar14 >> 2),iVar3,iVar3);
      pcVar13 = *(code **)(*(long *)this_03 + 800);
      uVar12 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
      (*pcVar13)(this_03,uVar12);
      (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
      Sexy::StrFormat(L"[LEVEL_EDITOR_WAVE_EVENT_BTN_%d]",asStack_40,uVar1);
      TodStringTranslate((wstring *)asStack_40);
      FUN_05476c50(asStack_40);
      this_04 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(this_04,(wstring *)asStack_78);
      pcVar13 = *(code **)(*(long *)this_04 + 0x170);
      Sexy::Color::Color((Color *)asStack_40,0x66,0x37,0);
      (*pcVar13)(this_04,0,asStack_40);
      UIWidgetText::SetFontIndex(this_04,5);
      FUN_04b53680(this_04 + 0xe0);
      iVar9 = FUN_04b54f08(0xf);
      iVar6 = *(int *)(this_03 + 0x4c);
      iVar7 = *(int *)(this_03 + 0x48);
      iVar8 = *(int *)(this_03 + 0x54);
      iVar10 = FUN_04b54f08(0x1e);
      (**(code **)(*(long *)this_04 + 0x198))
                (this_04,iVar7 - iVar9,iVar6 + iVar8,iVar10 + *(int *)(this_03 + 0x50),iVar10);
      (**(code **)(*(long *)this_02 + 0x60))(this_02,this_04);
      *(int *)(this_02 + 0x54) = *(int *)(this_04 + 0x4c) + *(int *)(this_04 + 0x54);
      if ((uVar14 != 0) || (iVar2 != 0x3c)) break;
      *(PVZ2UIButton **)(this + 0x108) = this_03;
      FUN_05476c50(asStack_78);
      uVar14 = uVar1;
    }
    FUN_05476c50(asStack_78);
    uVar14 = uVar1;
  } while (uVar1 != 9);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LevelEditorWaveEventSelect::SetSelectEvent(std::function<void (int)>) */

void __thiscall
LevelEditorWaveEventSelect::SetSelectEvent(LevelEditorWaveEventSelect *this,function *param_2)

{
  std::function<void(int)>::operator=((function<void(int)> *)(this + 0xe8),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventSelect::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorWaveEventSelect::Draw(LevelEditorWaveEventSelect *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86240);
  Draw9SliceImage(param_1,aIStack_18,uVar2);
  TodStringTranslate(L"[LEVEL_EDITOR_WAVE_EVENT_SELECT]");
  iVar1 = FUN_04b54f08(0x46);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),iVar1);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

