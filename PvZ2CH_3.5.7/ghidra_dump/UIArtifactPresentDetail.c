// Class: UIArtifactPresentDetail


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactPresentDetail::OnCreate() */

void __thiscall UIArtifactPresentDetail::OnCreate(UIArtifactPresentDetail *this)

{
  Widget *pWVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIImage_BG");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIArtifactPresentDetail::ButtonPress(int) */

int UIArtifactPresentDetail::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UIArtifactPresentDetail::ButtonPress(int) */

void __thiscall UIArtifactPresentDetail::ButtonPress(UIArtifactPresentDetail *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactPresentDetail::GetLayoutName() */

void __thiscall UIArtifactPresentDetail::GetLayoutName(UIArtifactPresentDetail *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIArtifactPresentDetail");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIArtifactPresentDetail::~UIArtifactPresentDetail() */

void __thiscall UIArtifactPresentDetail::~UIArtifactPresentDetail(UIArtifactPresentDetail *this)

{
  *(undefined ***)this = &PTR_GetClass_0677af40;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677b290;
  std::string::~string((string *)(this + 0x138));
  UISingletonDialog<UIArtifactPresentDetail>::~UISingletonDialog
            ((UISingletonDialog<UIArtifactPresentDetail> *)this);
  return;
}


/* UIArtifactPresentDetail::~UIArtifactPresentDetail() */

void __thiscall UIArtifactPresentDetail::~UIArtifactPresentDetail(UIArtifactPresentDetail *this)

{
  ~UIArtifactPresentDetail(this);
  AK::FreeHook(this);
  return;
}


/* UIArtifactPresentDetail::UIArtifactPresentDetail() */

void __thiscall UIArtifactPresentDetail::UIArtifactPresentDetail(UIArtifactPresentDetail *this)

{
  undefined **__n;
  
  UISingletonDialog<UIArtifactPresentDetail>::UISingletonDialog
            ((UISingletonDialog<UIArtifactPresentDetail> *)this);
  __n = &PTR_GetClass_0677af40;
  *(undefined ***)this = &PTR_GetClass_0677af40;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677b290;
  Set8BytesTo0((string *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  *(undefined4 *)(this + 0x150) = 0;
  std::string::append((string *)(this + 0x138),"",(size_t)__n);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactPresentDetail::Close() */

void __thiscall UIArtifactPresentDetail::Close(UIArtifactPresentDetail *this)

{
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Widget_ArtifactFrame");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x80))(plVar1,1,0);
  }
  UISingletonDialog<UIArtifactPresentDetail>::CloseDialog();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactPresentDetail::DlgChildWidgetSetIgnoreMouseInput(UI::Dialog*, std::string const&,
   std::vector<std::string, std::allocator<std::string > > const&) */

void __thiscall
UIArtifactPresentDetail::DlgChildWidgetSetIgnoreMouseInput
          (UIArtifactPresentDetail *this,Dialog *param_1,string *param_2,vector *param_3)

{
  bool bVar1;
  Widget *pWVar2;
  string *psVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Dialog *)0x0) &&
     (pWVar2 = (Widget *)UI::Dialog::GetWidget(param_1,param_2), pWVar2 != (Widget *)0x0)) {
    local_18 = FUN_03dc6068(*(undefined8 *)param_3);
    local_10 = FUN_03dc60b8(*(undefined8 *)(param_3 + 8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      plVar4 = (long *)UI::Dialog::GetChildWidget(pWVar2,psVar3);
      (**(code **)(*plVar4 + 0x90))(plVar4,1);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIArtifactPresentDetail::InitView(int, int) */

void __thiscall
UIArtifactPresentDetail::InitView(UIArtifactPresentDetail *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ArtifactPresentMgr *pAVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  UIWidgetText *pUVar8;
  UIWidgetImage *pUVar9;
  Image *pIVar10;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  int iVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  Sexy aSStack_30 [8];
  Sexy aSStack_28 [8];
  Sexy aSStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = ___stack_chk_guard;
  std::string::string(asStack_18,"Widget_ArtifactFrame");
  iVar11 = (int)lVar6;
  UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  *(int *)(this + 0x150) = param_2;
  pAVar4 = (ArtifactPresentMgr *)Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
  ArtifactPresentMgr::GetTargetTypeName(pAVar4,param_2);
  FUN_05474278((string *)(this + 0x138),asStack_18);
  std::string::~string(asStack_18);
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString((string *)(this + 0x138));
  Sexy::RtName::RtName((RtName *)asStack_18,(wstring *)aSStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_68,uVar5,0x86,asStack_18);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  FUN_05476c50(aSStack_20);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  if (*(char *)(lVar6 + 0x120) == '\0') {
    std::string::string(asStack_18,"UIImage_ArtifactFrame");
    pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"IMAGE_UI_BUNDLE_ARTIFACT_PRESENT_ARTIFACT_NO_PEDESTAL");
    pIVar10 = (Image *)StringHelper::ToImage(asStack_18,true);
    std::string::~string(asStack_18);
    nop();
    UIWidgetImage::SetImage(pUVar9,pIVar10);
  }
  iVar3 = Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
  uVar1 = param_2 + 1;
  uVar7 = ArtifactPresentMgr::GetTargetPrice(iVar3);
  std::string::string(asStack_18,"[REAL_MONEY_FORMAT]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_18,(string *)L"{NUMBER}",(wchar_t *)(uVar7 & 0xffffffff),iVar11
            );
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Price_Discount");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  PuzzleTip::SetTip(pUVar8,auStack_60);
  (**(code **)(*(long *)pUVar8 + 0x90))(pUVar8,1);
  pAVar4 = (ArtifactPresentMgr *)Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
  ArtifactPresentMgr::GetTargetShortDes(pAVar4,param_2);
  std::string::string(asStack_18,"UIText_Title_Text");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  PuzzleTip::SetTip(pUVar8,auStack_58);
  std::string::string(asStack_18,"UIImage_Banner");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (uVar1 == 4) {
    uVar7 = 1;
  }
  else {
    uVar2 = uVar1;
    if (uVar1 == 5) {
      uVar2 = 2;
    }
    uVar7 = (ulong)uVar2;
  }
  Sexy::StrFormat("IMAGE_UI_BUNDLE_ARTIFACT_PRESENT_BANNER_%d",asStack_50,uVar7);
  UIWidgetImage::SetImage(pUVar9,asStack_50);
  std::string::string(asStack_18,"UIImage_Show");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  Sexy::StrFormat("IMAGE_UI_BUNDLE_ARTIFACT_PRESENT_ARTIFACT_SHOW_%d",asStack_48,(ulong)uVar1);
  UIWidgetImage::SetImage(pUVar9,asStack_48);
  std::string::string(asStack_18,"UIImage_Artifact");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  pAVar4 = (ArtifactPresentMgr *)Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
  ArtifactPresentMgr::GetTargetTypeName(pAVar4,param_2);
  Sexy::StringToUpper(aSStack_20,extraout_x1);
  uVar5 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("IMAGE_UI_ARTIFACT_%s",asStack_40,uVar5);
  std::string::~string(asStack_18);
  std::string::~string((string *)aSStack_20);
  UIWidgetImage::SetImage(pUVar9,asStack_40);
  pAVar4 = (ArtifactPresentMgr *)Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
  ArtifactPresentMgr::GetTargetTypeName(pAVar4,param_2);
  std::string::string(asStack_18,"UIText_ArtifactName");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  uVar5 = FUN_0547429c(asStack_38);
  Sexy::StrFormat("[%s]",aSStack_30,uVar5);
  Sexy::StringToUpper(aSStack_30,extraout_x1_00);
  Sexy::UTF8StringToWString(aSStack_28,extraout_x1_01);
  TodStringTranslate((wstring *)aSStack_20);
  FUN_054766c8(auStack_58,asStack_18);
  FUN_05476c50(asStack_18);
  FUN_05476c50(aSStack_20);
  std::string::~string((string *)aSStack_28);
  std::string::~string((string *)aSStack_30);
  PuzzleTip::SetTip(pUVar8,auStack_58);
  std::string::string(asStack_18,"UIImage_Flag");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar9 + 0x90))(pUVar9,1);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  FUN_05476c50(auStack_58);
  FUN_05476c50(auStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIArtifactPresentDetail::ButtonDepress(int) */

void __thiscall UIArtifactPresentDetail::ButtonDepress(UIArtifactPresentDetail *this,int param_1)

{
  ArtifactPresentMgr *this_00;
  
  if (param_1 != 0) {
    if (param_1 != 10) {
      return;
    }
    this_00 = (ArtifactPresentMgr *)Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
    ArtifactPresentMgr::BuyOffer(this_00,*(int *)(this + 0x150));
  }
  Close(this);
  return;
}


/* non-virtual thunk to UIArtifactPresentDetail::ButtonDepress(int) */

void __thiscall UIArtifactPresentDetail::ButtonDepress(UIArtifactPresentDetail *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

