// Class: UIPlantCultivate


/* UIPlantCultivate::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIPlantCultivate::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPlantCultivate::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIPlantCultivate::ScrollTargetReached(UIPlantCultivate *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIPlantCultivate::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIPlantCultivate::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPlantCultivate::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIPlantCultivate::ScrollTargetInterrupted(UIPlantCultivate *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::GetLayoutName() */

void __thiscall UIPlantCultivate::GetLayoutName(UIPlantCultivate *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPlantCultivate");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPlantCultivate::closeDescriptionWidget() */

void __thiscall UIPlantCultivate::closeDescriptionWidget(UIPlantCultivate *this)

{
  if (*(long *)(this + 0x140) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x140))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x140));
    *(undefined8 *)(this + 0x140) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::~UIPlantCultivate() */

void __thiscall UIPlantCultivate::~UIPlantCultivate(UIPlantCultivate *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x138) = &PTR__UIPlantCultivate_0663fc38;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0663f890;
  *(undefined **)(this + 0xd8) = &DAT_0663fbf0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UIPlantCultivate>::~UISingletonDialog
            ((UISingletonDialog<UIPlantCultivate> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIPlantCultivate::~UIPlantCultivate() */

void __thiscall UIPlantCultivate::~UIPlantCultivate(UIPlantCultivate *this)

{
  ~UIPlantCultivate(this + -0x138);
  return;
}


/* UIPlantCultivate::~UIPlantCultivate() */

void __thiscall UIPlantCultivate::~UIPlantCultivate(UIPlantCultivate *this)

{
  ~UIPlantCultivate(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPlantCultivate::~UIPlantCultivate() */

void __thiscall UIPlantCultivate::~UIPlantCultivate(UIPlantCultivate *this)

{
  ~UIPlantCultivate(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::showDescriptionWidget() */

void __thiscall UIPlantCultivate::showDescriptionWidget(UIPlantCultivate *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x140) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x140) = this_00;
    TodStringTranslate(L"[PLANT_CULTIVATE_DESCRIPTION]");
    TodStringTranslate(L"[PLANT_CULTIVATE_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x140);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UIPlantCultivate,void(UIPlantCultivate::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x140));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::UIPlantCultivate() */

void __thiscall UIPlantCultivate::UIPlantCultivate(UIPlantCultivate *this)

{
  undefined *puVar1;
  LawnApp *this_00;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIPlantCultivate>::UISingletonDialog
            ((UISingletonDialog<UIPlantCultivate> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)(this + 0x138) = &PTR__UIPlantCultivate_0663fc38;
  *(undefined ***)this = &PTR_GetClass_0663f890;
  *(undefined **)(this + 0xd8) = &DAT_0663fbf0;
  this_00 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuyPlantCultivate);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UIPlantCultivate,void(UIPlantCultivate::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyPlantCultivate,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::Update() */

void __thiscall UIPlantCultivate::Update(UIPlantCultivate *this)

{
  UIWidgetText *pUVar1;
  PlantCultivateManager *this_00;
  long lVar2;
  long lVar3;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  std::string::string(asStack_18,"UIText_TaskTimer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  this_00 = (PlantCultivateManager *)Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  lVar2 = PlantCultivateManager::GetOutTime(this_00);
  lVar3 = LawnApp::GetRealServerTime(gLawnApp);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,(float)(lVar2 - lVar3),0);
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_BundleTimer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(3,0x2a77);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::RefreshTab1() */

void __thiscall UIPlantCultivate::RefreshTab1(UIPlantCultivate *this)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  UIWidgetImage *pUVar6;
  UIWidgetImage *pUVar7;
  UIWidgetText *pUVar8;
  PVZ2UIButton *pPVar9;
  PlantCultivateManager *pPVar10;
  char *__s;
  float fVar11;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  uVar1 = *(uint *)(lVar5 + 0x38);
  lVar5 = Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  uVar2 = *(uint *)(lVar5 + 0x3c);
  std::string::string(asStack_10,"UIImage_Progress_Fill1");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Progress_Bar1");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  fVar11 = (float)NEON_fminnm((float)(int)uVar1 / (float)(int)uVar2,0x3f800000);
  *(int *)(pUVar6 + 0x50) = (int)(fVar11 * (float)*(int *)(pUVar7 + 0x50));
  std::string::string(asStack_10,"UIText_Progress_Text");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::StrFormat("%d/%d",asStack_18,(ulong)uVar1,(ulong)uVar2);
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar8,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::string(asStack_10,"UIButton_Reward");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar9 + 0x188))(pPVar9,1);
  pPVar10 = (PlantCultivateManager *)Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  bVar3 = PlantCultivateManager::HasObtained(pPVar10);
  if (bVar3 < ((int)uVar2 <= (int)uVar1)) {
    (**(code **)(*(long *)pPVar9 + 0x188))(pPVar9,0);
  }
  std::string::string(asStack_10,"UIImage_Pot");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((int)uVar1 < 0x19) {
    __s = "IMAGE_UI_PLANTCULTIVATE_POT1";
  }
  else if ((int)uVar1 < 0x32) {
    __s = "IMAGE_UI_PLANTCULTIVATE_POT2";
  }
  else if ((int)uVar1 < 0x4b) {
    __s = "IMAGE_UI_PLANTCULTIVATE_POT3";
  }
  else {
    __s = "IMAGE_UI_PLANTCULTIVATE_POT4";
  }
  std::string::string(asStack_10,__s);
  UIWidgetImage::SetImage(pUVar6,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pPVar10 = (PlantCultivateManager *)Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  cVar4 = PlantCultivateManager::IsOutTime(pPVar10);
  if (cVar4 != '\0') {
    pPVar10 = (PlantCultivateManager *)Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
    bVar3 = PlantCultivateManager::HasObtained(pPVar10);
    if (bVar3 < ((int)uVar1 < (int)uVar2)) {
      *(undefined4 *)(pPVar9 + 0xd4) = 0x16;
      (**(code **)(*(long *)pPVar9 + 0x188))(pPVar9,0);
    }
    else {
      *(undefined4 *)(pPVar9 + 0xd4) = 0xb;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::InitTab1() */

void __thiscall UIPlantCultivate::InitTab1(UIPlantCultivate *this)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  UIWidgetImage *pUVar6;
  UIWidgetImage *pUVar7;
  UIWidgetText *pUVar8;
  PVZ2UIButton *pPVar9;
  PlantCultivateManager *pPVar10;
  char *__s;
  float fVar11;
  string asStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar5 = Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  uVar1 = *(uint *)(lVar5 + 0x38);
  lVar5 = Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  uVar2 = *(uint *)(lVar5 + 0x3c);
  std::string::string(asStack_10,"UIImage_Progress_Fill1");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Progress_Bar1");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  fVar11 = (float)NEON_fminnm((float)(int)uVar1 / (float)(int)uVar2,0x3f800000);
  *(int *)(pUVar6 + 0x50) = (int)(fVar11 * (float)*(int *)(pUVar7 + 0x50));
  std::string::string(asStack_10,"UIText_Progress_Text");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::StrFormat("%d/%d",asStack_18,(ulong)uVar1,(ulong)uVar2);
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar8,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::string(asStack_10,"UIButton_Reward");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar9 + 0x188))(pPVar9,1);
  pPVar10 = (PlantCultivateManager *)Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  bVar3 = PlantCultivateManager::HasObtained(pPVar10);
  if (bVar3 < ((int)uVar2 <= (int)uVar1)) {
    (**(code **)(*(long *)pPVar9 + 0x188))(pPVar9,0);
  }
  std::string::string(asStack_10,"UIImage_Pot");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((int)uVar1 < 0x19) {
    __s = "IMAGE_UI_PLANTCULTIVATE_POT1";
  }
  else if ((int)uVar1 < 0x32) {
    __s = "IMAGE_UI_PLANTCULTIVATE_POT2";
  }
  else if ((int)uVar1 < 0x4b) {
    __s = "IMAGE_UI_PLANTCULTIVATE_POT3";
  }
  else {
    __s = "IMAGE_UI_PLANTCULTIVATE_POT4";
  }
  std::string::string(asStack_10,__s);
  UIWidgetImage::SetImage(pUVar6,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pPVar10 = (PlantCultivateManager *)Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  cVar4 = PlantCultivateManager::IsOutTime(pPVar10);
  if (cVar4 != '\0') {
    pPVar10 = (PlantCultivateManager *)Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
    bVar3 = PlantCultivateManager::HasObtained(pPVar10);
    if (bVar3 < ((int)uVar1 < (int)uVar2)) {
      *(undefined4 *)(pPVar9 + 0xd4) = 0x16;
      (**(code **)(*(long *)pPVar9 + 0x188))(pPVar9,0);
    }
    else {
      *(undefined4 *)(pPVar9 + 0xd4) = 0xb;
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::RefreshTab3() */

void __thiscall UIPlantCultivate::RefreshTab3(UIPlantCultivate *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  UIWidgetText *pUVar4;
  UIWidgetText *pUVar5;
  PVZ2UIButton *pPVar6;
  PlantCultivateManager *this_00;
  undefined1 auStack_50 [8];
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  string asStack_38 [40];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  iVar1 = *(int *)(lVar3 + 0x68);
  std::string::string(asStack_38,"UIText_BundleDescription");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"UIText_BundleLimit");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"UIButton_Bundle");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  this_00 = (PlantCultivateManager *)Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  iVar2 = PlantCultivateManager::GetSelectPlantID(this_00);
  FUN_05478178(awStack_40,L"[PLANT_CULTIVATE_BUNDLE_DESCRIPTION]",auStack_50);
  GetGameItemInfo(iVar2,0x7fffffff,0);
  TodReplaceString(awStack_40,L"{NAME}",awStack_10);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
  FUN_05476c50(awStack_40);
  nop();
  TodReplaceNumberString(awStack_48,L"{NUM}",10);
  FUN_054766c8(awStack_48,asStack_38);
  FUN_05476c50(asStack_38);
  PuzzleTip::SetTip(pUVar4,awStack_48);
  FUN_05478178(awStack_40,L"[PLANT_CULTIVATE_BUNDLE_LIMIT]",auStack_50);
  TodReplaceNumberString(awStack_40,L"{NUM}",iVar1);
  PuzzleTip::SetTip(pUVar5,asStack_38);
  FUN_05476c50(asStack_38);
  FUN_05476c50(awStack_40);
  nop();
  if (iVar1 < 1) {
    (**(code **)(*(long *)pPVar6 + 0x188))(pPVar6,1);
  }
  FUN_05476c50(awStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::InitTab3() */

void __thiscall UIPlantCultivate::InitTab3(UIPlantCultivate *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  UIWidgetText *pUVar4;
  UIWidgetText *pUVar5;
  PVZ2UIButton *pPVar6;
  PlantCultivateManager *this_00;
  undefined1 auStack_50 [8];
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  string asStack_38 [40];
  wstring awStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  iVar1 = *(int *)(lVar3 + 0x68);
  std::string::string(asStack_38,"UIText_BundleDescription");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"UIText_BundleLimit");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"UIButton_Bundle");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  this_00 = (PlantCultivateManager *)Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  iVar2 = PlantCultivateManager::GetSelectPlantID(this_00);
  FUN_05478178(awStack_40,L"[PLANT_CULTIVATE_BUNDLE_DESCRIPTION]",auStack_50);
  GetGameItemInfo(iVar2,0x7fffffff,0);
  TodReplaceString(awStack_40,L"{NAME}",awStack_10);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
  FUN_05476c50(awStack_40);
  nop();
  TodReplaceNumberString(awStack_48,L"{NUM}",10);
  FUN_054766c8(awStack_48,asStack_38);
  FUN_05476c50(asStack_38);
  PuzzleTip::SetTip(pUVar4,awStack_48);
  FUN_05478178(awStack_40,L"[PLANT_CULTIVATE_BUNDLE_LIMIT]",auStack_50);
  TodReplaceNumberString(awStack_40,L"{NUM}",iVar1);
  PuzzleTip::SetTip(pUVar5,asStack_38);
  FUN_05476c50(asStack_38);
  FUN_05476c50(awStack_40);
  nop();
  if (iVar1 < 1) {
    (**(code **)(*(long *)pPVar6 + 0x188))(pPVar6,1);
  }
  FUN_05476c50(awStack_48);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPlantCultivate::onBuyPlantCultivate(int) */

void UIPlantCultivate::onBuyPlantCultivate(int param_1)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  *(int *)(lVar1 + 0x68) = *(int *)(lVar1 + 0x68) + -1;
  RefreshTab3((UIPlantCultivate *)(ulong)(uint)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::InitTab2() */

void __thiscall UIPlantCultivate::InitTab2(UIPlantCultivate *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  PlantCultivateTaskWidget *this_02;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"UIImage_BG2");
  iVar9 = 0;
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar1 = FUN_03480788(0);
  Sexy::Insets::Insets(aIStack_30,iVar1,iVar1,*(int *)(pUVar5 + 0x50),*(int *)(pUVar5 + 0x54));
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_30);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar2 = FUN_03480788(0xf);
  iVar1 = *(int *)(this_01 + 0x50);
  iVar3 = FUN_03480788(0x78);
  iVar4 = Sexy::LazySingleton<PlantCultivateTaskManager>::GetInstancePtr();
  HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar4 + 8,true);
  uVar10 = 0;
  iVar4 = iVar2;
  while( true ) {
    uVar7 = FUN_0347f92c(local_20,local_18);
    if (uVar7 <= uVar10) break;
    this_02 = ::operator_new(0x168);
    PlantCultivateTaskWidget::PlantCultivateTaskWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar2,iVar4,iVar1 + iVar2 * -2,iVar3);
    puVar6 = (undefined8 *)FUN_0347f938(local_20,uVar10);
    (**(code **)(*(long *)this_02 + 0x318))(this_02,*puVar6);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    iVar9 = *(int *)(this_02 + 0x4c) + *(int *)(this_02 + 0x54);
    uVar10 = uVar10 + 1;
    iVar4 = iVar4 + iVar2 + iVar3;
  }
  lVar8 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar2 + iVar9;
  (**(code **)(lVar8 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_00);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::InitView() */

void __thiscall UIPlantCultivate::InitView(UIPlantCultivate *this)

{
  byte bVar1;
  UITabControl *this_00;
  PlantCultivateManager *this_01;
  long lVar2;
  TGALogMgr *this_02;
  size_t __n;
  string asStack_48 [8];
  string asStack_40 [16];
  undefined1 auStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InitTab1(this);
  std::string::string(asStack_40,"UITabControl_0");
  this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  this_01 = (PlantCultivateManager *)Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  bVar1 = PlantCultivateManager::IsOutTime(this_01);
  __n = (size_t)bVar1;
  if (bVar1 == 0) {
    UITabControl::SetTabVisible(this_00,3,false);
    InitTab2(this);
  }
  else {
    __n = 0;
    UITabControl::SetTabVisible(this_00,2,false);
    InitTab3(this);
  }
  TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)asStack_40);
  std::string::append(asStack_40,"1",__n);
  lVar2 = Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 0x38));
  FUN_05474278(auStack_30,asStack_48);
  std::string::~string(asStack_48);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogAnniversaryNurturingData(this_02,(TGAAnniversaryNurturingData *)asStack_40);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::OnCreate() */

void __thiscall UIPlantCultivate::OnCreate(UIPlantCultivate *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::GetCultivateReward() */

void __thiscall UIPlantCultivate::GetCultivateReward(UIPlantCultivate *this)

{
  string *this_00;
  DNetwork *this_01;
  string *__n;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2896];
  string asStack_198 [400];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"0",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_034806d0(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_198,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::ButtonDepress(int) */

void __thiscall UIPlantCultivate::ButtonDepress(UIPlantCultivate *this,int param_1)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar3;
  UIMessageBox *pUVar4;
  Image *pIVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PurchaseBroker *this_03;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xb) {
    GetCultivateReward(this);
  }
  else if (param_1 == 0x16) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    lVar3 = Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
    iVar1 = *(int *)(lVar3 + 0x44);
    iVar2 = PlayerInfo::GetNumGems(this_01,false);
    if (iVar2 < iVar1) {
      pUVar4 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar4 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar4,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        TodStringTranslate(L"[GEM_NOT_ENOUGH_DIALOG_TITLE]");
        UIMessageBox::SetMessage(pUVar4,awStack_58,awStack_68);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar5 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar4,pIVar5);
        std::string::~string(asStack_50);
        nop();
        lVar3 = UIMessageBox::GetButtonCancel(pUVar4);
        thunk_FUN_05477b9c(lVar3 + 0xd8,awStack_60);
        FUN_05476c50(awStack_58);
        FUN_05476c50(awStack_60);
        FUN_05476c50(awStack_68);
      }
    }
    else {
      pUVar4 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar4 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar4,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[PLANT_CULTIVATE_GEM_EXCHANGE]");
        lVar3 = Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
        TodReplaceNumberString((wstring *)asStack_50,L"{NUM}",*(int *)(lVar3 + 0x44));
        FUN_05476c50((wstring *)asStack_50);
        UIMessageBox::SetMessage(pUVar4,awStack_58,awStack_60);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar5 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(pUVar4,pIVar5);
        std::string::~string(asStack_50);
        nop();
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,GemExchangeCultivate);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<UIPlantCultivate,void(UIPlantCultivate::*)(UIMessageBox*,int)>
                  (aDStack_38,(wstring *)asStack_50);
        UIMessageBox::SetCallback(pUVar4,aDStack_38);
        FUN_05476c50(awStack_58);
        FUN_05476c50(awStack_60);
      }
    }
  }
  else if (param_1 == 0x21) {
    this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_03 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_02);
    std::string::string(asStack_50,"com.popcap.ios.chs.PVZ2.PlantCultivate20");
    PurchaseBroker::RequestPayment(this_03,asStack_50,0);
    std::string::~string(asStack_50);
    nop();
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UIPlantCultivate>::CloseDialog();
  }
  else if (param_1 == 0xc) {
    showDescriptionWidget(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIPlantCultivate::ButtonDepress(int) */

void __thiscall UIPlantCultivate::ButtonDepress(UIPlantCultivate *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantCultivate::GemExchangeCultivate(UIMessageBox*, int) */

void __thiscall
UIPlantCultivate::GemExchangeCultivate(UIPlantCultivate *this,UIMessageBox *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2904];
  string asStack_190 [392];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"gem_num");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    lVar2 = Sexy::LazySingleton<PlantCultivateManager>::GetInstancePtr();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 0x44));
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_0348072c(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_190,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

