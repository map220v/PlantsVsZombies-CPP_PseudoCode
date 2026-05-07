// Class: LevelEditorSunMoneyEditor


/* LevelEditorSunMoneyEditor::SetOnConfirmText(std::function<void (std::string const&)>) */

void __thiscall
LevelEditorSunMoneyEditor::SetOnConfirmText(LevelEditorSunMoneyEditor *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0xf0),param_2);
  return;
}


/* LevelEditorSunMoneyEditor::EditWidgetText(int, std::wstring const&) */

int LevelEditorSunMoneyEditor::EditWidgetText(int param_1,wstring *param_2)

{
  return param_1;
}


/* non-virtual thunk to LevelEditorSunMoneyEditor::EditWidgetText(int, std::wstring const&) */

void __thiscall
LevelEditorSunMoneyEditor::EditWidgetText
          (LevelEditorSunMoneyEditor *this,int param_1,wstring *param_2)

{
  EditWidgetText((int)this + -0xe0,(wstring *)(ulong)(uint)param_1);
  return;
}


/* LevelEditorSunMoneyEditor::~LevelEditorSunMoneyEditor() */

void __thiscall
LevelEditorSunMoneyEditor::~LevelEditorSunMoneyEditor(LevelEditorSunMoneyEditor *this)

{
  *(undefined ***)this = &PTR_GetClass_06963a50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06963d80;
  *(undefined **)(this + 0xe0) = &DAT_06963dc8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorSunMoneyEditor::~LevelEditorSunMoneyEditor() */

void __thiscall
LevelEditorSunMoneyEditor::~LevelEditorSunMoneyEditor(LevelEditorSunMoneyEditor *this)

{
  ~LevelEditorSunMoneyEditor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSunMoneyEditor::CheckMoneyFormat() */

void __thiscall LevelEditorSunMoneyEditor::CheckMoneyFormat(LevelEditorSunMoneyEditor *this)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0xe8) + 0x310))(asStack_10,*(long **)(this + 0xe8));
  uVar3 = 0;
  do {
    uVar2 = FUN_05474184(asStack_10);
    if (uVar2 <= uVar3) {
      uVar4 = 1;
      goto LAB_04b4cfc4;
    }
    pbVar1 = (byte *)FUN_05474ee8(asStack_10,uVar3);
    uVar3 = uVar3 + 1;
  } while (*pbVar1 - 0x30 < 10);
  uVar4 = 0;
LAB_04b4cfc4:
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* LevelEditorSunMoneyEditor::LevelEditorSunMoneyEditor() */

void __thiscall
LevelEditorSunMoneyEditor::LevelEditorSunMoneyEditor(LevelEditorSunMoneyEditor *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::EditListener::EditListener((EditListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06963a50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06963d80;
  *(undefined **)(this + 0xe0) = &DAT_06963dc8;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xf0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSunMoneyEditor::ButtonDepress(int) */

void __thiscall
LevelEditorSunMoneyEditor::ButtonDepress(LevelEditorSunMoneyEditor *this,int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f) {
    cVar2 = CheckMoneyFormat(this);
    if (cVar2 != '\0') {
      (**(code **)(**(long **)(this + 0xe8) + 0x310))(asStack_10,*(long **)(this + 0xe8));
      iVar3 = StringHelper::ToInt(asStack_10);
      iVar1 = *(int *)(this + 0x110);
      std::string::~string(asStack_10);
      if (iVar3 <= iVar1) {
        (**(code **)(**(long **)(this + 0xe8) + 0x310))(asStack_10,*(long **)(this + 0xe8));
        std::function<void(std::string_const&)>::operator()
                  ((function<void(std::string_const&)> *)(this + 0xf0),asStack_10);
        std::string::~string(asStack_10);
      }
    }
  }
  else if (param_1 == 6) {
    UIUtil::CloseDialog((Widget *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorSunMoneyEditor::ButtonDepress(int) */

void __thiscall
LevelEditorSunMoneyEditor::ButtonDepress(LevelEditorSunMoneyEditor *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSunMoneyEditor::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorSunMoneyEditor::Draw(LevelEditorSunMoneyEditor *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85f70);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  TodStringTranslate(L"[LEVEL_EDITOR_SUN_MONEY_SET]");
  iVar1 = FUN_04b4c0a8(0);
  iVar2 = FUN_04b4c0a8(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSunMoneyEditor::Init() */

void __thiscall LevelEditorSunMoneyEditor::Init(LevelEditorSunMoneyEditor *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  EditWidget *this_00;
  undefined8 uVar5;
  PVZ2UIButton *pPVar6;
  long *plVar7;
  code *pcVar8;
  string asStack_78 [56];
  DString aDStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x180);
  Sexy::EditWidget::EditWidget(this_00,1,(EditListener *)(this + 0xe0));
  *(EditWidget **)(this + 0xe8) = this_00;
  pcVar8 = *(code **)(*(long *)this_00 + 0x330);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar8)(this_00,uVar5,0);
  plVar7 = *(long **)(this + 0xe8);
  uVar1 = FUN_04b4c0a8(0x4b);
  uVar2 = FUN_04b4c0a8(0x7d);
  uVar3 = FUN_04b4c0a8(0x15e);
  uVar4 = FUN_04b4c0a8(0x50);
  (**(code **)(*plVar7 + 0x198))(plVar7,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  plVar7 = *(long **)(this + 0xe8);
  pcVar8 = *(code **)(*plVar7 + 0x318);
  DString::DString(aDStack_40,*(int *)(this + 0x114));
  DString::operator_cast_to_string(aDStack_40);
  (*pcVar8)(plVar7,asStack_78);
  std::string::~string(asStack_78);
  DString::~DString(aDStack_40);
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)aDStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,0x1f,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)aDStack_40);
  FUN_05476c50(asStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b85e18,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aDStack_40,&DAT_06b85f98,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aDStack_40);
  uVar1 = FUN_04b4c0a8(0x3c);
  uVar2 = FUN_04b4c0a8(0xfa);
  uVar3 = FUN_04b4c0a8(0x82);
  (**(code **)(*(long *)pPVar6 + 0x198))(pPVar6,uVar1,uVar2,uVar3,uVar1);
  pcVar8 = *(code **)(*(long *)pPVar6 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
  (*pcVar8)(pPVar6,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,pPVar6);
  TodStringTranslate(L"[BUTTON_CANCEL]");
  Sexy::Color::Color((Color *)aDStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,6,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)aDStack_40);
  FUN_05476c50(asStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b85e18,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aDStack_40,&DAT_06b85e18,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aDStack_40);
  uVar1 = FUN_04b4c0a8(300);
  uVar2 = FUN_04b4c0a8(0xfa);
  uVar3 = FUN_04b4c0a8(0x82);
  uVar4 = FUN_04b4c0a8(0x3c);
  (**(code **)(*(long *)pPVar6 + 0x198))(pPVar6,uVar1,uVar2,uVar3,uVar4);
  pcVar8 = *(code **)(*(long *)pPVar6 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
  (*pcVar8)(pPVar6,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,pPVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

