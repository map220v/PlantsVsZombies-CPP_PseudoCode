// Class: LevelEditorZombieWaveEditor


/* LevelEditorZombieWaveEditor::GetMaxPageIndex() */

int __thiscall LevelEditorZombieWaveEditor::GetMaxPageIndex(LevelEditorZombieWaveEditor *this)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = FUN_04b53514(*(undefined8 *)(this + 0xf8),*(undefined8 *)(this + 0x100));
  iVar3 = (int)(uVar2 / 5);
  if (uVar2 != (uVar2 / 5) * 5) {
    iVar3 = iVar3 + 1;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}


/* LevelEditorZombieWaveEditor::ChangeCurrentPage(int) */

void __thiscall
LevelEditorZombieWaveEditor::ChangeCurrentPage(LevelEditorZombieWaveEditor *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  
  iVar2 = GetMaxPageIndex(this);
  plVar11 = *(long **)(this + 0xe8);
  if ((param_1 == iVar2) && (param_1 == 0)) {
    uVar10 = 1;
    *(undefined4 *)(this + 0xe0) = 0;
LAB_04b5555c:
    (**(code **)(*plVar11 + 0x188))(plVar11,uVar10);
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
  }
  else {
    if (param_1 < 1) {
      uVar10 = 1;
      *(undefined4 *)(this + 0xe0) = 0;
    }
    else {
      uVar10 = 0;
      if (iVar2 <= param_1) {
        *(int *)(this + 0xe0) = iVar2;
        goto LAB_04b5555c;
      }
      *(int *)(this + 0xe0) = param_1;
    }
    (**(code **)(*plVar11 + 0x188))(plVar11,uVar10);
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),0);
  }
  iVar3 = FUN_04b54f08(5);
  iVar2 = FUN_04b54f08(500);
  iVar4 = FUN_04b54f08(0x50);
  iVar4 = iVar2 + iVar3 * -2 + iVar4 * -5;
  iVar2 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  uVar12 = 0;
  while( true ) {
    uVar10 = *(undefined8 *)(this + 0xf8);
    iVar4 = (int)uVar12;
    uVar8 = FUN_04b53514(uVar10,*(undefined8 *)(this + 0x100));
    if (uVar8 <= uVar12) break;
    iVar1 = *(int *)(this + 0xe0);
    iVar7 = iVar1 * 5;
    if ((iVar4 < iVar7) || (iVar7 + 5 <= iVar4)) {
      puVar9 = (undefined8 *)FUN_04b53520(uVar10,uVar12);
      plVar11 = (long *)*puVar9;
      iVar4 = FUN_04b54f08(0x50);
      uVar5 = FUN_04b54f08(0);
      uVar6 = FUN_04b54f08(0x19f);
      (**(code **)(*plVar11 + 0x198))(plVar11,-iVar4,uVar5,iVar4,uVar6);
      puVar9 = (undefined8 *)FUN_04b53520(*(undefined8 *)(this + 0xf8),uVar12);
      (**(code **)(*(long *)*puVar9 + 0x158))((long *)*puVar9,0);
      uVar12 = uVar12 + 1;
    }
    else {
      puVar9 = (undefined8 *)FUN_04b53520(uVar10,uVar12);
      plVar11 = (long *)*puVar9;
      iVar7 = FUN_04b54f08(0x50);
      uVar5 = FUN_04b54f08(0);
      uVar6 = FUN_04b54f08(0x19f);
      (**(code **)(*plVar11 + 0x198))
                (plVar11,iVar3 + (iVar7 + (iVar2 >> 2)) * (iVar4 + iVar1 * -5),uVar5,iVar7,uVar6);
      puVar9 = (undefined8 *)FUN_04b53520(*(undefined8 *)(this + 0xf8),uVar12);
      (**(code **)(*(long *)*puVar9 + 0x158))((long *)*puVar9,1);
      uVar12 = uVar12 + 1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieWaveEditor::ButtonDepress(int) */

void __thiscall
LevelEditorZombieWaveEditor::ButtonDepress(LevelEditorZombieWaveEditor *this,int param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  long lVar4;
  CustomLevelMgr *pCVar5;
  UIMessageBox *this_00;
  LevelEditorSliderWidget *this_01;
  undefined8 uVar6;
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0x10:
    ChangeCurrentPage(this,*(int *)(this + 0xe0) + -1);
    break;
  case 0x11:
    ChangeCurrentPage(this,*(int *)(this + 0xe0) + 1);
    break;
  case 0x12:
    this_01 = ::operator_new(0x138);
    LevelEditorSliderWidget::LevelEditorSliderWidget(this_01);
    lVar4 = gLawnApp;
    iVar1 = FUN_04b54f08(0x168);
    iVar2 = FUN_04b54f08(0xfa);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,(*(int *)(lVar4 + 0xd4) - iVar1) / 2,(*(int *)(lVar4 + 0xd8) - iVar2) / 2,
               iVar1,iVar2);
    TodStringTranslate(L"[LEVEL_EDITOR_ALL_ZOMBIE_LEVEL]");
    LevelEditorSliderWidget::SetTitle((wstring *)this_01);
    FUN_05476c50(asStack_30);
    TodStringTranslate(L"[LEVEL_EDITOR_ALL_ZOMBIE_LEVEL]");
    LevelEditorSliderWidget::SetDescription((wstring *)this_01);
    FUN_05476c50(asStack_30);
    FUN_04b536a4(this_01 + 0xe8);
    FUN_04b53698(this_01 + 0xec);
    FUN_04b536b0(this_01 + 0xf0);
    (**(code **)(*(long *)this_01 + 800))(this_01);
    uVar6 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_01,true);
    FUN_04b54e50(afStack_28,this,uVar6);
    LevelEditorConveyorSeedPacket::SetChangeGlobalLevelCallback
              ((LevelEditorConveyorSeedPacket *)this_01,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    break;
  case 0x13:
    pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::AddRandomZombies(pCVar5);
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    goto joined_r0x04b5e5f8;
  case 0x14:
    pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::RemoveAllZombies(pCVar5);
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
joined_r0x04b5e5f8:
    if (this_00 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_00,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[SETTING_SUCCESS]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_00,awStack_40,awStack_48);
      std::string::string(asStack_30,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage(asStack_30,false);
      UIMessageBox::SetBackground(this_00,pIVar3);
      std::string::~string(asStack_30);
      nop();
      lVar4 = UIMessageBox::GetButtonCancel(this_00);
      thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_38);
      FUN_05476c50(auStack_38);
      FUN_05476c50(awStack_40);
      FUN_05476c50(awStack_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorZombieWaveEditor::ButtonDepress(int) */

void __thiscall
LevelEditorZombieWaveEditor::ButtonDepress(LevelEditorZombieWaveEditor *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LevelEditorZombieWaveEditor::LevelEditorZombieWaveEditor() */

void __thiscall
LevelEditorZombieWaveEditor::LevelEditorZombieWaveEditor(LevelEditorZombieWaveEditor *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069656b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069659e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  return;
}


/* LevelEditorZombieWaveEditor::~LevelEditorZombieWaveEditor() */

void __thiscall
LevelEditorZombieWaveEditor::~LevelEditorZombieWaveEditor(LevelEditorZombieWaveEditor *this)

{
  *(undefined ***)this = &PTR_GetClass_069656b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069659e0;
  std::vector<LevelEditorWaveDisplay*,std::allocator<LevelEditorWaveDisplay*>>::~vector
            ((vector<LevelEditorWaveDisplay*,std::allocator<LevelEditorWaveDisplay*>> *)
             (this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorZombieWaveEditor::~LevelEditorZombieWaveEditor() */

void __thiscall
LevelEditorZombieWaveEditor::~LevelEditorZombieWaveEditor(LevelEditorZombieWaveEditor *this)

{
  ~LevelEditorZombieWaveEditor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorZombieWaveEditor::Init() */

void __thiscall LevelEditorZombieWaveEditor::Init(LevelEditorZombieWaveEditor *this)

{
  ButtonListener *pBVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  Widget *this_00;
  LevelEditorWaveDisplay *this_01;
  PVZ2UIButton *pPVar7;
  int iVar8;
  long *plVar9;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  LevelEditorWaveDisplay *local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  uVar2 = FUN_04b54f08(0x96);
  uVar3 = FUN_04b54f08(5);
  uVar4 = FUN_04b54f08(500);
  uVar5 = FUN_04b54f08(0x19f);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  iVar8 = 0;
  do {
    this_01 = ::operator_new(0x128);
    LevelEditorWaveDisplay::LevelEditorWaveDisplay(this_01);
    local_40[0] = this_01;
    iVar6 = FUN_04b54f08(0x50);
    uVar2 = FUN_04b54f08(0);
    uVar3 = FUN_04b54f08(0x19f);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,-iVar6,uVar2,iVar6,uVar3);
    iVar6 = iVar8 + 1;
    (**(code **)(*(long *)local_40[0] + 0x318))(local_40[0],iVar8);
    (**(code **)(*(long *)this_00 + 0x60))(this_00,local_40[0]);
    (**(code **)(*(long *)local_40[0] + 0x158))(local_40[0],0);
    std::vector<LevelEditorWaveDisplay*,std::allocator<LevelEditorWaveDisplay*>>::push_back
              ((vector<LevelEditorWaveDisplay*,std::allocator<LevelEditorWaveDisplay*>> *)
               (this + 0xf8),local_40);
    iVar8 = iVar6;
  } while (iVar6 != 10);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x10,pBVar1,awStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar7;
  FUN_05476c50(awStack_78);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86290,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b86290,2);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  plVar9 = *(long **)(this + 0xe8);
  uVar2 = FUN_04b54f08(0x82);
  uVar3 = FUN_04b54f08(0xaf);
  uVar4 = FUN_04b54f08(0x14);
  uVar5 = FUN_04b54f08(0x3c);
  (**(code **)(*plVar9 + 0x198))(plVar9,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x11,pBVar1,awStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar7;
  FUN_05476c50(awStack_78);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b864e0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b864e0,2);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  plVar9 = *(long **)(this + 0xf0);
  uVar2 = FUN_04b54f08(0x294);
  uVar3 = FUN_04b54f08(0xaf);
  uVar4 = FUN_04b54f08(0x14);
  uVar5 = FUN_04b54f08(0x3c);
  (**(code **)(*plVar9 + 0x198))(plVar9,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x12,pBVar1,awStack_78,(Color *)local_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86638,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b86638,2);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  uVar2 = FUN_04b54f08(0xf);
  uVar3 = FUN_04b54f08(100);
  uVar4 = FUN_04b54f08(0x26);
  (**(code **)(*(long *)pPVar7 + 0x198))(pPVar7,uVar2,uVar3,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,pPVar7);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x13,pBVar1,awStack_78,(Color *)local_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86488,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b86488,2);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  uVar2 = FUN_04b54f08(0xf);
  uVar3 = FUN_04b54f08(200);
  uVar4 = FUN_04b54f08(100);
  uVar5 = FUN_04b54f08(0x26);
  (**(code **)(*(long *)pPVar7 + 0x198))(pPVar7,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,pPVar7);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x14,pBVar1,awStack_78,(Color *)local_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b865e0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b865e0,2);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  uVar2 = FUN_04b54f08(0xf);
  uVar3 = FUN_04b54f08(300);
  uVar4 = FUN_04b54f08(100);
  uVar5 = FUN_04b54f08(0x26);
  (**(code **)(*(long *)pPVar7 + 0x198))(pPVar7,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,pPVar7);
  ChangeCurrentPage(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

