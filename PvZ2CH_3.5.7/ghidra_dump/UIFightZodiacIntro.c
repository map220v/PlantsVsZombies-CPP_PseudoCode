// Class: UIFightZodiacIntro


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiacIntro::GetLayoutName() */

void __thiscall UIFightZodiacIntro::GetLayoutName(UIFightZodiacIntro *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFightZodiacIntro");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIFightZodiacIntro::closeDescriptionWidget() */

void __thiscall UIFightZodiacIntro::closeDescriptionWidget(UIFightZodiacIntro *this)

{
  if (*(long *)(this + 0x138) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x138))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x138));
    *(undefined8 *)(this + 0x138) = 0;
  }
  return;
}


/* UIFightZodiacIntro::~UIFightZodiacIntro() */

void __thiscall UIFightZodiacIntro::~UIFightZodiacIntro(UIFightZodiacIntro *this)

{
  *(undefined ***)this = &PTR_GetClass_066eff90;
  *(undefined **)(this + 0xd8) = &DAT_066f02e0;
  UISingletonDialog<UIFightZodiacIntro>::~UISingletonDialog
            ((UISingletonDialog<UIFightZodiacIntro> *)this);
  return;
}


/* UIFightZodiacIntro::~UIFightZodiacIntro() */

void __thiscall UIFightZodiacIntro::~UIFightZodiacIntro(UIFightZodiacIntro *this)

{
  ~UIFightZodiacIntro(this);
  AK::FreeHook(this);
  return;
}


/* UIFightZodiacIntro::UIFightZodiacIntro() */

void __thiscall UIFightZodiacIntro::UIFightZodiacIntro(UIFightZodiacIntro *this)

{
  UISingletonDialog<UIFightZodiacIntro>::UISingletonDialog
            ((UISingletonDialog<UIFightZodiacIntro> *)this);
  *(undefined ***)this = &PTR_GetClass_066eff90;
  *(undefined **)(this + 0xd8) = &DAT_066f02e0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiacIntro::OnCreate() */

void __thiscall UIFightZodiacIntro::OnCreate(UIFightZodiacIntro *this)

{
  bool bVar1;
  UIWidgetBackground *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  *(undefined8 *)(this + 0x138) = 0;
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  bVar1 = local_8 == ___stack_chk_guard;
  *(int *)(pUVar2 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiacIntro::showDescriptionWidget() */

void __thiscall UIFightZodiacIntro::showDescriptionWidget(UIFightZodiacIntro *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x138) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x138) = this_00;
    TodStringTranslate(L"[FIGHT_ZODIAC_DESCRIPTION]");
    TodStringTranslate(L"[FIGHT_ZODIAC_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x138);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UIFightZodiacIntro,void(UIFightZodiacIntro::*)()>
              (aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x138));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiacIntro::ButtonDepress(int) */

void __thiscall UIFightZodiacIntro::ButtonDepress(UIFightZodiacIntro *this,int param_1)

{
  TGALogMgr *pTVar1;
  undefined4 local_8c;
  TGAPlantWarsData aTStack_88 [64];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x2a) {
    showDescriptionWidget(this);
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UIFightZodiacIntro>::CloseDialog();
  }
  else if (param_1 == 10) {
    UISingletonDialog<UIFightZodiacIntro>::CloseDialog();
    UISingletonDialog<UIFightZodiac>::ShowDialog();
    TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
    local_8c = 1;
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_8c);
    FUN_05474278(aTStack_88,asStack_48);
    std::string::~string(asStack_48);
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogPurchaseData::TGALogPurchaseData
              ((TGALogPurchaseData *)asStack_48,(TGALogPurchaseData *)aTStack_88);
    TGALogMgr::LogFightZodiac(pTVar1,asStack_48);
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
    TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIFightZodiacIntro::ButtonDepress(int) */

void __thiscall UIFightZodiacIntro::ButtonDepress(UIFightZodiacIntro *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

