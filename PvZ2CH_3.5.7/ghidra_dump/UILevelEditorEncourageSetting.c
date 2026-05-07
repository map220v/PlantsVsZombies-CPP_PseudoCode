// Class: UILevelEditorEncourageSetting


/* UILevelEditorEncourageSetting::CheckboxChecked(int, bool) */

void __thiscall
UILevelEditorEncourageSetting::CheckboxChecked
          (UILevelEditorEncourageSetting *this,int param_1,bool param_2)

{
  if (param_1 == 1) {
    this[0x140] = (UILevelEditorEncourageSetting)param_2;
    return;
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      return;
    }
    this[0x142] = (UILevelEditorEncourageSetting)param_2;
    return;
  }
  this[0x141] = (UILevelEditorEncourageSetting)param_2;
  return;
}


/* non-virtual thunk to UILevelEditorEncourageSetting::CheckboxChecked(int, bool) */

void __thiscall
UILevelEditorEncourageSetting::CheckboxChecked
          (UILevelEditorEncourageSetting *this,int param_1,bool param_2)

{
  CheckboxChecked(this + -0x138,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILevelEditorEncourageSetting::GetLayoutName() */

void __thiscall UILevelEditorEncourageSetting::GetLayoutName(UILevelEditorEncourageSetting *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILevelEditorEncourageSetting");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UILevelEditorEncourageSetting::~UILevelEditorEncourageSetting() */

void __thiscall
UILevelEditorEncourageSetting::~UILevelEditorEncourageSetting(UILevelEditorEncourageSetting *this)

{
  *(undefined ***)this = &PTR_GetClass_06796290;
  *(undefined **)(this + 0xd8) = &DAT_067965e8;
  *(undefined **)(this + 0x138) = &DAT_06796630;
  UISingletonDialog<UILevelEditorEncourageSetting>::~UISingletonDialog
            ((UISingletonDialog<UILevelEditorEncourageSetting> *)this);
  return;
}


/* UILevelEditorEncourageSetting::~UILevelEditorEncourageSetting() */

void __thiscall
UILevelEditorEncourageSetting::~UILevelEditorEncourageSetting(UILevelEditorEncourageSetting *this)

{
  ~UILevelEditorEncourageSetting(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILevelEditorEncourageSetting::DisableSunmoneySetting() */

void __thiscall
UILevelEditorEncourageSetting::DisableSunmoneySetting(UILevelEditorEncourageSetting *this)

{
  UIWidgetText *pUVar1;
  Widget *pWVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Disable1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Widget_Item1");
  pWVar2 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pWVar2 + 0x158))(pWVar2,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILevelEditorEncourageSetting::ButtonDepress(int) */

void __thiscall
UILevelEditorEncourageSetting::ButtonDepress(UILevelEditorEncourageSetting *this,int param_1)

{
  CustomLevelMgr *pCVar1;
  
  if (param_1 == 0xb) {
    pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
    CustomLevelMgr::SetCanBuySunmoney(pCVar1,(bool)this[0x140]);
    pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
    CustomLevelMgr::SetCanBuyPlantfood(pCVar1,(bool)this[0x141]);
    pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
    CustomLevelMgr::SetCanBuyMower(pCVar1,(bool)this[0x142]);
    UISingletonDialog<UILevelEditorEncourageSetting>::CloseDialog();
    return;
  }
  if (param_1 == 0x58) {
    UISingletonDialog<UILevelEditorEncourageSetting>::CloseDialog();
    return;
  }
  return;
}


/* non-virtual thunk to UILevelEditorEncourageSetting::ButtonDepress(int) */

void __thiscall
UILevelEditorEncourageSetting::ButtonDepress(UILevelEditorEncourageSetting *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILevelEditorEncourageSetting::InitView() */

void __thiscall UILevelEditorEncourageSetting::InitView(UILevelEditorEncourageSetting *this)

{
  CheckboxListener *pCVar1;
  UILevelEditorEncourageSetting UVar2;
  char cVar3;
  int iVar4;
  CustomLevelMgr *pCVar5;
  Widget *pWVar6;
  Image *pIVar7;
  Image *pIVar8;
  Checkbox *pCVar9;
  UIWidgetText *pUVar10;
  long lVar11;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  LevelEditor *this_02;
  string asStack_10 [8];
  long local_8;
  
  pCVar1 = (CheckboxListener *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  UVar2 = (UILevelEditorEncourageSetting)CustomLevelMgr::GetCanBuySunmoney(pCVar5);
  this[0x140] = UVar2;
  pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  UVar2 = (UILevelEditorEncourageSetting)CustomLevelMgr::GetCanBuyPlantfood(pCVar5);
  this[0x141] = UVar2;
  pCVar5 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  UVar2 = (UILevelEditorEncourageSetting)CustomLevelMgr::GetCanBuyMower(pCVar5);
  this[0x142] = UVar2;
  std::string::string(asStack_10,"Widget_Item1");
  pWVar6 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2450);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2688);
  pCVar9 = ::operator_new(0x148);
  Sexy::Checkbox::Checkbox(pCVar9,pIVar7,pIVar8,1,pCVar1);
  (**(code **)(*(long *)pCVar9 + 0x310))(pCVar9,this[0x140],0);
  (**(code **)(*(long *)pCVar9 + 0x198))
            (pCVar9,0,0,*(undefined4 *)(pWVar6 + 0x50),*(undefined4 *)(pWVar6 + 0x54));
  (**(code **)(*(long *)pWVar6 + 0x60))(pWVar6,pCVar9);
  std::string::string(asStack_10,"Widget_Item2");
  pWVar6 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2450);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2688);
  pCVar9 = ::operator_new(0x148);
  Sexy::Checkbox::Checkbox(pCVar9,pIVar7,pIVar8,2,pCVar1);
  (**(code **)(*(long *)pCVar9 + 0x310))(pCVar9,this[0x141],0);
  (**(code **)(*(long *)pCVar9 + 0x198))
            (pCVar9,0,0,*(undefined4 *)(pWVar6 + 0x50),*(undefined4 *)(pWVar6 + 0x54));
  (**(code **)(*(long *)pWVar6 + 0x60))(pWVar6,pCVar9);
  std::string::string(asStack_10,"Widget_Item3");
  pWVar6 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2450);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2688);
  pCVar9 = ::operator_new(0x148);
  Sexy::Checkbox::Checkbox(pCVar9,pIVar7,pIVar8,3,pCVar1);
  (**(code **)(*(long *)pCVar9 + 0x310))(pCVar9,this[0x142],0);
  (**(code **)(*(long *)pCVar9 + 0x198))
            (pCVar9,0,0,*(undefined4 *)(pWVar6 + 0x50),*(undefined4 *)(pWVar6 + 0x54));
  (**(code **)(*(long *)pWVar6 + 0x60))(pWVar6,pCVar9);
  std::string::string(asStack_10,"UIText_Disable1");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Disable2");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Disable3");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pUVar10 + 0x158))(pUVar10,0);
  std::string::~string(asStack_10);
  nop();
  lVar11 = Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  iVar4 = FUN_03f102f0(*(undefined4 *)(lVar11 + 0x30c));
  if (iVar4 == 1) {
    DisableSunmoneySetting(this);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"encourageSetting");
  cVar3 = PlayerInfo::GetPlayerFlagInfo(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar3 == '\0') {
    std::string::string(asStack_10,"encourageSetting");
    PlayerInfo::SetPlayerFlagInfo(this_01,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    this_02 = (LevelEditor *)UISingletonDialog<LevelEditor>::GetSingletonPtr();
    if (this_02 != (LevelEditor *)0x0) {
      LevelEditor::CloseEncourageTanhao(this_02);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILevelEditorEncourageSetting::OnCreate() */

void __thiscall UILevelEditorEncourageSetting::OnCreate(UILevelEditorEncourageSetting *this)

{
  undefined4 uVar1;
  UIWidgetBackground *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar2 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* UILevelEditorEncourageSetting::UILevelEditorEncourageSetting() */

void __thiscall
UILevelEditorEncourageSetting::UILevelEditorEncourageSetting(UILevelEditorEncourageSetting *this)

{
  UISingletonDialog<UILevelEditorEncourageSetting>::UISingletonDialog
            ((UISingletonDialog<UILevelEditorEncourageSetting> *)this);
  Sexy::CheckboxListener::CheckboxListener((CheckboxListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06796290;
  *(undefined **)(this + 0xd8) = &DAT_067965e8;
  *(undefined **)(this + 0x138) = &DAT_06796630;
  return;
}

