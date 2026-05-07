// Class: UIBagItemBox


/* UIBagItemBox::SetCallBack(Sexy::Delegate2<UIBagItemBox*, int>) */

void __thiscall UIBagItemBox::SetCallBack(UIBagItemBox *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1d8),param_2);
  return;
}


/* UIBagItemBox::OnCreate() */

UIBagItemBox __thiscall UIBagItemBox::OnCreate(UIBagItemBox *this)

{
  UIBagItemBox UVar1;
  UIBagItemBox UVar2;
  
  UVar2 = (UIBagItemBox)UI::Dialog::CreateFromLayout((Dialog *)this);
  if ((UVar2 != (UIBagItemBox)0x0) && (UVar1 = this[0x130], UVar1 != (UIBagItemBox)0x0)) {
    UI::Dialog::AttachLawnApp((Dialog *)this);
    return UVar1;
  }
  return UVar2;
}


/* UIBagItemBox::OnClose() */

void __thiscall UIBagItemBox::OnClose(UIBagItemBox *this)

{
  UI::Dialog::DetachLawnApp((Dialog *)this);
  this[0x128] = (UIBagItemBox)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::GetLayoutName() */

void __thiscall UIBagItemBox::GetLayoutName(UIBagItemBox *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"uibagitembox");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIBagItemBox::~UIBagItemBox() */

void __thiscall UIBagItemBox::~UIBagItemBox(UIBagItemBox *this)

{
  *(undefined ***)this = &PTR_GetClass_069c1980;
  *(undefined **)(this + 0xd8) = &DAT_069c1cd0;
  FUN_05476c50(this + 0x250);
  FUN_05476c50(this + 0x248);
  FUN_05476c50(this + 0x240);
  FUN_05476c50(this + 0x238);
  FUN_05476c50(this + 0x230);
  FUN_05476c50(this + 0x228);
  FUN_05476c50(this + 0x220);
  FUN_05476c50(this + 0x218);
  FUN_05476c50(this + 0x210);
  UISingletonDialog<UIBagItemBox>::~UISingletonDialog((UISingletonDialog<UIBagItemBox> *)this);
  return;
}


/* UIBagItemBox::~UIBagItemBox() */

void __thiscall UIBagItemBox::~UIBagItemBox(UIBagItemBox *this)

{
  ~UIBagItemBox(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::GetItemBoxTitle(int) */

void UIBagItemBox::GetItemBoxTitle(int param_1)

{
  int in_w1;
  int local_38 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  GetGameItemInfo(in_w1,0x7fffffff,0);
  if (local_38[0] != 0) {
    thunk_FUN_05477b9c();
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIBagItemBox::SetCallBack(UIBagItemBox::ShowType, Sexy::Delegate2<UIBagItemBox*, int>) */

void __thiscall UIBagItemBox::SetCallBack(UIBagItemBox *this,int param_2,Delegate2 *param_3)

{
  if (param_2 == 1) {
    Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
              ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x148),param_3);
    return;
  }
  if (param_2 != 2) {
    if (param_2 != 4) {
      return;
    }
    Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
              ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1a8),param_3);
    return;
  }
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x178),param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::InitRects(int) */

void __thiscall UIBagItemBox::InitRects(UIBagItemBox *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  UIWidgetImage *pUVar6;
  int iVar7;
  int iVar8;
  UIBagItemBox *pUVar9;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"UIImage_0");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"item_bg");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  iVar3 = *(int *)(pUVar6 + 0x4c);
  iVar7 = *(int *)(pUVar5 + 0x4c);
  iVar1 = *(int *)(pUVar5 + 0x48);
  iVar4 = *(int *)(pUVar6 + 0x54);
  iVar8 = *(int *)(pUVar6 + 0x48);
  iVar2 = FUN_04dbc730(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar8 + iVar1,(iVar3 + iVar7 + iVar4) - iVar2,
             *(int *)(pUVar6 + 0x50),iVar2);
  *(undefined8 *)(this + 600) = local_18;
  *(undefined8 *)(this + 0x260) = uStack_10;
  std::string::string((string *)&local_18,"item_desc_bg");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  iVar3 = FUN_04dbc730(10);
  iVar1 = iVar3 * -2;
  iVar7 = *(int *)(pUVar6 + 0x4c) + *(int *)(pUVar5 + 0x4c) + iVar3;
  iVar3 = *(int *)(pUVar6 + 0x48) + *(int *)(pUVar5 + 0x48) + iVar3;
  iVar4 = FUN_04dbc730(0x23);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar7,iVar1 + *(int *)(pUVar6 + 0x50),iVar4);
  *(undefined8 *)(this + 0x268) = local_18;
  *(undefined8 *)(this + 0x270) = uStack_10;
  if (param_1 == 3) {
    if (*(int *)(this + 0x140) == 0xf231) {
      Sexy::Insets::Insets
                ((Insets *)&local_18,iVar3,iVar7 + iVar4,iVar1 + *(int *)(pUVar6 + 0x50),iVar4 * 5);
      iVar2 = *(int *)(pUVar6 + 0x50);
      *(undefined8 *)(this + 0x298) = local_18;
      *(undefined8 *)(this + 0x2a0) = uStack_10;
      iVar8 = (int)((double)iVar4 * 4.4) + iVar7;
      Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar8,iVar1 + iVar2,iVar4);
      *(undefined8 *)(this + 0x2a8) = local_18;
      *(undefined8 *)(this + 0x2b0) = uStack_10;
      iVar2 = FUN_04dbc730(0x69);
      Sexy::Insets::Insets
                ((Insets *)&local_18,iVar2 + iVar3,iVar8,iVar1 + *(int *)(pUVar6 + 0x50),iVar4);
      iVar8 = *(int *)(pUVar6 + 0x50);
      pUVar9 = this + 0x2b8;
      iVar7 = iVar7 + iVar4 * 5;
    }
    else {
      iVar2 = iVar4 * 2;
      Sexy::Insets::Insets
                ((Insets *)&local_18,iVar3,iVar7 + iVar4,iVar1 + *(int *)(pUVar6 + 0x50),iVar2);
      iVar8 = *(int *)(pUVar6 + 0x50);
      pUVar9 = this + 0x298;
      iVar7 = iVar7 + iVar4 + iVar2;
      iVar4 = iVar2;
    }
  }
  else {
    if (param_1 == 4) {
      iVar8 = iVar4 * 2;
      iVar2 = iVar7 + iVar4 + iVar8;
      Sexy::Insets::Insets
                ((Insets *)&local_18,iVar3,iVar7 + iVar4,iVar1 + *(int *)(pUVar6 + 0x50),iVar8);
      iVar7 = *(int *)(pUVar6 + 0x50);
      *(undefined8 *)(this + 0x288) = local_18;
      *(undefined8 *)(this + 0x290) = uStack_10;
      Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar2,iVar1 + iVar7,iVar4);
      iVar7 = *(int *)(pUVar6 + 0x50);
    }
    else {
      iVar2 = iVar7 + iVar4 + iVar4 * 2;
      Sexy::Insets::Insets
                ((Insets *)&local_18,iVar3,iVar7 + iVar4,iVar1 + *(int *)(pUVar6 + 0x50),iVar4 * 2);
      iVar7 = *(int *)(pUVar6 + 0x50);
      *(undefined8 *)(this + 0x288) = local_18;
      *(undefined8 *)(this + 0x290) = uStack_10;
      Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar2,iVar1 + iVar7,iVar4);
      iVar7 = *(int *)(pUVar6 + 0x50);
      iVar8 = iVar4;
    }
    *(undefined8 *)(this + 0x278) = local_18;
    *(undefined8 *)(this + 0x280) = uStack_10;
    Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar2 + iVar4,iVar1 + iVar7,iVar8);
    iVar8 = *(int *)(pUVar6 + 0x50);
    pUVar9 = this + 0x298;
    iVar7 = iVar2 + iVar4 + iVar4;
  }
  *(undefined8 *)pUVar9 = local_18;
  *(undefined8 *)(pUVar9 + 8) = uStack_10;
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar7,iVar1 + iVar8,iVar4);
  *(undefined8 *)(this + 0x2c8) = local_18;
  *(undefined8 *)(this + 0x2d0) = uStack_10;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::GetAvatarSpecification(int) */

void UIBagItemBox::GetAvatarSpecification(int param_1)

{
  char cVar1;
  bool bVar2;
  NameMapperBase *pNVar3;
  undefined8 uVar4;
  uint in_w1;
  string *extraout_x1;
  undefined1 auVar5 [16];
  Sexy aSStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
  if (cVar1 == '\0') {
    pNVar3 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
    if (cVar1 != '\0') {
      NewAvatar::GetAvatarInfoByAvatarPieceId(in_w1);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
      if ((bVar2) &&
         (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18), cVar1 != '\0')) {
        auVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        Sexy::UTF8StringToWString((Sexy *)(auVar5._0_8_ + 0x50),auVar5._8_8_);
        TodStringTranslate(awStack_10);
        FUN_05476c50(awStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        goto LAB_04dbcd4c;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    FUN_05476574();
  }
  else {
    NewAvatar::Common_GetPlantNameByAvatarPieceID((NewAvatar *)(ulong)in_w1,(int)aSStack_28);
    Sexy::StringToUpper(aSStack_28,extraout_x1);
    uVar4 = FUN_0547429c(asStack_20);
    Sexy::StrFormat("[STORE_PRODUCT_AVATAR_%s]",(string *)aRStack_18,uVar4);
    Sexy::ToWString((string *)aRStack_18);
    TodStringTranslate(awStack_10);
    FUN_05476c50(awStack_10);
    std::string::~string((string *)aRStack_18);
    std::string::~string(asStack_20);
    std::string::~string((string *)aSStack_28);
  }
LAB_04dbcd4c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::SetShowType(int) */

void __thiscall UIBagItemBox::SetShowType(UIBagItemBox *this,int param_1)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_1");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,param_1 & 1);
  std::string::string(asStack_10,"UIButton_2");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,(uint)param_1 >> 2 & 1);
  std::string::string(asStack_10,"UIButton_3");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,(uint)param_1 >> 1 & 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::SetButtonDialogStates(UIBagItemBox::ShowType, PVZ2UIImage const&, PVZ2UIImage
   const&) */

void __thiscall
UIBagItemBox::SetButtonDialogStates
          (UIBagItemBox *this,int param_2,PVZ2UIImage *param_3,PVZ2UIImage *param_4)

{
  PVZ2UIButton *this_00;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    __s = "UIButton_1";
  }
  else if (param_2 == 2) {
    __s = "UIButton_2";
  }
  else {
    if (param_2 != 4) goto LAB_04dbcfec;
    __s = "UIButton_3";
  }
  std::string::string(asStack_10,__s);
  this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (PVZ2UIButton *)0x0) {
    PVZ2UIButton::SetDialogStates(this_00,param_3,param_4);
  }
LAB_04dbcfec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::SetButtonDialog(UIBagItemBox::ShowType, PVZ2UIImage const&, PVZ2UIImage const&,
   std::string) */

void __thiscall
UIBagItemBox::SetButtonDialog
          (UIBagItemBox *this,string *param_2,PVZ2UIImage *param_3,PVZ2UIImage *param_4,
          Sexy *param_5)

{
  PVZ2UIButton *pPVar1;
  int iVar2;
  char *__s;
  string *extraout_x1;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  iVar2 = (int)param_2;
  local_8 = ___stack_chk_guard;
  if (iVar2 == 1) {
    __s = "UIButton_1";
  }
  else if (iVar2 == 4) {
    __s = "UIButton_2";
  }
  else {
    if (iVar2 != 2) goto LAB_04dbd0fc;
    __s = "UIButton_3";
  }
  std::string::string((string *)awStack_10,__s);
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
  *(PVZ2UIButton **)(this + 0x138) = pPVar1;
  std::string::~string((string *)awStack_10);
  nop();
  param_2 = extraout_x1;
LAB_04dbd0fc:
  if (*(long *)(this + 0x138) != 0) {
    Sexy::StringToWString(param_5,param_2);
    TodStringTranslate(awStack_10);
    FUN_05476c50(awStack_10);
    PVZ2UIButton::SetLabelText(*(PVZ2UIButton **)(this + 0x138),awStack_18);
    PVZ2UIButton::SetDialogStates(*(PVZ2UIButton **)(this + 0x138),param_3,param_4);
    FUN_05476c50(awStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::SetButtonTitle(UIBagItemBox::ShowType, std::string) */

void __thiscall UIBagItemBox::SetButtonTitle(UIBagItemBox *this,int param_2,Sexy *param_3)

{
  PVZ2UIButton *pPVar1;
  char *__s;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    __s = "UIButton_1";
  }
  else if (param_2 == 4) {
    __s = "UIButton_2";
  }
  else {
    if (param_2 != 2) goto LAB_04dbd248;
    __s = "UIButton_3";
  }
  std::string::string((string *)awStack_10,__s);
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
  *(PVZ2UIButton **)(this + 0x138) = pPVar1;
  std::string::~string((string *)awStack_10);
  nop();
LAB_04dbd248:
  if (*(string **)(this + 0x138) != (string *)0x0) {
    Sexy::StringToWString(param_3,*(string **)(this + 0x138));
    TodStringTranslate(awStack_10);
    FUN_05476c50(awStack_10);
    PVZ2UIButton::SetLabelText(*(PVZ2UIButton **)(this + 0x138),awStack_18);
    FUN_05476c50(awStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIBagItemBox::ButtonDepress(int) */

void __thiscall UIBagItemBox::ButtonDepress(UIBagItemBox *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  long *plVar2;
  int extraout_w1;
  
  if (param_1 == 0) {
    UISingletonDialog<UIBagItemBox>::CloseDialog();
    return;
  }
  iVar1 = FUN_04dbc578(*(undefined8 *)(this + 0x1e0),*(undefined8 *)(this + 0x1f0));
  if (iVar1 != 0) {
    if (*(int *)(this + 0x140) != 0xf231) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(this + 0x1d8),(char *)this);
      return;
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    PlayerInfo::GetCollection(this_01,0xf231);
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
    (**(code **)(*plVar2 + 0x218))(plVar2,0xf231,extraout_w1 != 1);
  }
  return;
}


/* non-virtual thunk to UIBagItemBox::ButtonDepress(int) */

void __thiscall UIBagItemBox::ButtonDepress(UIBagItemBox *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::GetPlantGotWay(std::string) */

void UIBagItemBox::GetPlantGotWay(undefined8 param_1,undefined8 param_2,string *param_3)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  long lVar4;
  ulong uVar5;
  string *extraout_x1;
  ulong uVar6;
  undefined1 auVar7 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Plant Level Up");
  Magento::GetStore((Magento *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  uVar6 = 0;
  do {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    uVar5 = FUN_04dbc5a0(*(undefined8 *)(lVar4 + 0x60),*(undefined8 *)(lVar4 + 0x68));
    if (uVar5 <= uVar6) {
LAB_04dbd4ec:
      TodStringTranslate(L"[NEW_AVATAR_SOURCE_ACTIVITY]");
LAB_04dbd4fc:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    pRVar3 = (RtWeakPtrBase *)FUN_04dbc5ac(*(undefined8 *)(lVar4 + 0x60),uVar6);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    FUN_05475d88(asStack_18,lVar4 + 0x80);
    cVar1 = std::operator==(asStack_18,param_3);
    if (cVar1 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      bVar2 = std::operator!=((string *)(lVar4 + 0xe8),"");
      if (bVar2) {
        auVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        Sexy::UTF8StringToWString((Sexy *)(auVar7._0_8_ + 0xe8),auVar7._8_8_);
        TodStringTranslate((wstring *)asStack_10);
        FUN_05476c50(asStack_10);
        std::string::~string(asStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        goto LAB_04dbd4fc;
      }
      std::string::~string(asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      goto LAB_04dbd4ec;
    }
    std::string::~string(asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    uVar6 = uVar6 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::GetAvatarGotWay(int) */

void UIBagItemBox::GetAvatarGotWay(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  NameMapperBase *pNVar4;
  RtWeakPtrBase *pRVar5;
  long lVar6;
  ulong uVar7;
  int in_w1;
  string *extraout_x1;
  ulong uVar8;
  undefined1 auVar9 [16];
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar4,in_w1);
  if (cVar1 == '\0') {
    pNVar4 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,in_w1);
    if (cVar1 != '\0') {
      NewAvatar::GetAvatarInfoByAvatarPieceId(in_w1);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_18);
      if ((bVar2) &&
         (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_18), cVar1 != '\0')) {
        auVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
        Sexy::UTF8StringToWString((Sexy *)(auVar9._0_8_ + 0x58),auVar9._8_8_);
        TodStringTranslate((wstring *)asStack_10);
        FUN_05476c50((wstring *)asStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
        ;
        goto LAB_04dbd6e4;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    }
  }
  else {
    iVar3 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    std::string::string(asStack_10,"Avatars");
    Magento::GetStore((Magento *)asStack_10,extraout_x1);
    std::string::~string(asStack_10);
    nop();
    uVar8 = 0;
    while( true ) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      uVar7 = FUN_04dbc5a0(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
      if (uVar7 <= uVar8) break;
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      pRVar5 = (RtWeakPtrBase *)FUN_04dbc5ac(*(undefined8 *)(lVar6 + 0x60),uVar8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar5);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      FUN_05475d88(asStack_18,lVar6 + 0x80);
      cVar1 = std::operator==(asStack_18,asStack_30);
      if (cVar1 != '\0') {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        bVar2 = std::operator!=((string *)(lVar6 + 0xe8),"");
        if (!bVar2) {
          std::string::~string(asStack_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          std::string::~string(asStack_30);
          goto LAB_04dbd6d4;
        }
        auVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        Sexy::UTF8StringToWString((Sexy *)(auVar9._0_8_ + 0xe8),auVar9._8_8_);
        TodStringTranslate((wstring *)asStack_10);
        FUN_05476c50(asStack_10);
        std::string::~string(asStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        std::string::~string(asStack_30);
        goto LAB_04dbd6e4;
      }
      std::string::~string(asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar8 = uVar8 + 1;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    std::string::~string(asStack_30);
  }
LAB_04dbd6d4:
  TodStringTranslate(L"[NEW_AVATAR_SOURCE_ACTIVITY]");
LAB_04dbd6e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::GetAccessoryGotWay(std::string) */

void UIBagItemBox::GetAccessoryGotWay(undefined8 param_1,undefined8 param_2,string *param_3)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  long lVar4;
  ulong uVar5;
  string *extraout_x1;
  ulong uVar6;
  undefined1 auVar7 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PvZ2 Accessories");
  Magento::GetStore((Magento *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  uVar6 = 0;
  do {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    uVar5 = FUN_04dbc5a0(*(undefined8 *)(lVar4 + 0x60),*(undefined8 *)(lVar4 + 0x68));
    if (uVar5 <= uVar6) {
LAB_04dbd924:
      TodStringTranslate(L"[NEW_AVATAR_SOURCE_ACTIVITY]");
LAB_04dbd934:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    pRVar3 = (RtWeakPtrBase *)FUN_04dbc5ac(*(undefined8 *)(lVar4 + 0x60),uVar6);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    FUN_05475d88(asStack_18,lVar4 + 0x80);
    cVar1 = std::operator==(asStack_18,param_3);
    if (cVar1 != '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      bVar2 = std::operator!=((string *)(lVar4 + 0xe8),"");
      if (bVar2) {
        auVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        Sexy::UTF8StringToWString((Sexy *)(auVar7._0_8_ + 0xe8),auVar7._8_8_);
        TodStringTranslate((wstring *)asStack_10);
        FUN_05476c50(asStack_10);
        std::string::~string(asStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        goto LAB_04dbd934;
      }
      std::string::~string(asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      goto LAB_04dbd924;
    }
    std::string::~string(asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    uVar6 = uVar6 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::UIBagItemBox() */

void __thiscall UIBagItemBox::UIBagItemBox(UIBagItemBox *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIBagItemBox>::UISingletonDialog((UISingletonDialog<UIBagItemBox> *)this);
  this[0x131] = (UIBagItemBox)0x1;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_069c1980;
  *(undefined **)(this + 0xd8) = &DAT_069c1cd0;
  Sexy::Delegate2<UIBagItemBox*,int>::Delegate2((DummyInit *)(this + 0x148));
  Sexy::Delegate2<UIBagItemBox*,int>::Delegate2((DummyInit *)(this + 0x178));
  Sexy::Delegate2<UIBagItemBox*,int>::Delegate2((DummyInit *)(this + 0x1a8));
  Sexy::Delegate2<UIBagItemBox*,int>::Delegate2((DummyInit *)(this + 0x1d8));
  FUN_05476574(this + 0x210);
  FUN_05476574(this + 0x218);
  FUN_05476574(this + 0x220);
  FUN_05476574(this + 0x228);
  FUN_05476574(this + 0x230);
  FUN_05476574(this + 0x238);
  FUN_05476574(this + 0x240);
  FUN_05476574(this + 0x248);
  FUN_05476574(this + 0x250);
  Sexy::Insets::Insets((Insets *)(this + 600));
  Sexy::Insets::Insets((Insets *)(this + 0x268));
  Sexy::Insets::Insets((Insets *)(this + 0x278));
  Sexy::Insets::Insets((Insets *)(this + 0x288));
  Sexy::Insets::Insets((Insets *)(this + 0x298));
  Sexy::Insets::Insets((Insets *)(this + 0x2a8));
  Sexy::Insets::Insets((Insets *)(this + 0x2b8));
  Sexy::Insets::Insets((Insets *)(this + 0x2c8));
  Sexy::Delegate2<UIBagItemBox*,int>::Delegate2(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1d8),(Delegate2 *)aDStack_38);
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x208) = 0xffffffff;
  FUN_054772c4(this + 0x210,&DAT_056f11a8);
  FUN_054772c4(this + 0x218,&DAT_056f11a8);
  FUN_054772c4(this + 0x220,&DAT_056f11a8);
  FUN_054772c4(this + 0x228,&DAT_056f11a8);
  FUN_054772c4(this + 0x230,&DAT_056f11a8);
  FUN_054772c4(this + 0x238,&DAT_056f11a8);
  FUN_054772c4(this + 0x250,&DAT_056f11a8);
  FUN_054772c4(this + 0x240,&DAT_056f11a8);
  FUN_054772c4(this + 0x248,&DAT_056f11a8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCollectionStateSwitch);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<UIBagItemBox,void(UIBagItemBox::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NotifyEquipCollection,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall UIBagItemBox::DrawAll(UIBagItemBox *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  undefined8 uVar2;
  Image *pIVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar4;
  int iVar5;
  int iVar6;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
  iVar1 = FUN_04dbc730(0xf);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_2,this + 0x218,this + 600,uVar2,aCStack_18,5,1);
  if (*(int *)(this + 0x208) == 3) {
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color(aCStack_18,0x26,0x65,7);
    WriteWordInRect(param_2,this + 0x220,this + 0x268,uVar2,aCStack_18,5,1);
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9a100);
    Sexy::Graphics::DrawImage
              (param_2,pIVar3,*(int *)(this + 0x268),iVar1 + *(int *)(this + 0x26c),
               *(int *)(this + 0x270),*(int *)(this + 0x274) + iVar1 * -2);
    if (*(int *)(this + 0x140) == 0xf231) {
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      Sexy::Color::Color(aCStack_18,0x66,0x37,0);
      WriteWordInRect(param_2,this + 0x238,this + 0x298,uVar2,aCStack_18,0,1);
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      uVar4 = PlayerInfo::GetCollection(this_01,0xf231);
      iVar1 = (int)(uVar4 >> 0x20);
      if (iVar1 == 1) {
        uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
        Sexy::Color::Color(aCStack_18,0x66,0x37,0);
        WriteWordInRect(param_2,this + 0x240,this + 0x2a8,uVar2,aCStack_18,0,uVar4 >> 0x20);
        uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
        Sexy::Color::Color(aCStack_18,6,0x89,0xd8);
        WriteWordInRect(param_2,this + 0x248,this + 0x2b8,uVar2,aCStack_18,0,uVar4 >> 0x20);
      }
      else {
        if (iVar1 == 2) {
          uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
          Sexy::Color::Color(aCStack_18,0x66,0x37,0);
          WriteWordInRect(param_2,this + 0x240,this + 0x2a8,uVar2,aCStack_18,0,1);
          uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
          iVar1 = 0x9e;
          iVar5 = 0xe;
          iVar6 = 0xec;
        }
        else {
          if (iVar1 != 3) goto LAB_04dbdf04;
          uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
          Sexy::Color::Color(aCStack_18,0x66,0x37,0);
          WriteWordInRect(param_2,this + 0x240,this + 0x2a8,uVar2,aCStack_18,0,1);
          uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
          iVar1 = 0xf0;
          iVar5 = 0x9f;
          iVar6 = 0;
        }
        Sexy::Color::Color(aCStack_18,iVar1,iVar5,iVar6);
        WriteWordInRect(param_2,this + 0x248,this + 0x2b8,uVar2,aCStack_18,0,1);
      }
      goto LAB_04dbdf04;
    }
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_18,0x66,0x37,0);
  }
  else {
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color(aCStack_18,0x26,0x65,7);
    WriteWordInRect(param_2,this + 0x220,this + 0x268,uVar2,aCStack_18,5,1);
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9a100);
    Sexy::Graphics::DrawImage
              (param_2,pIVar3,*(int *)(this + 0x268),iVar1 + *(int *)(this + 0x26c),
               *(int *)(this + 0x270),iVar1 * -2 + *(int *)(this + 0x274));
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_18,0x66,0x37,0);
    WriteWordInRect(param_2,this + 0x230,this + 0x288,uVar2,aCStack_18,0,1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color(aCStack_18,0x26,0x65,7);
    WriteWordInRect(param_2,this + 0x228,this + 0x278,uVar2,aCStack_18,5,1);
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9a100);
    Sexy::Graphics::DrawImage
              (param_2,pIVar3,*(int *)(this + 0x278),iVar1 + *(int *)(this + 0x27c),
               *(int *)(this + 0x280),iVar1 * -2 + *(int *)(this + 0x284));
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color(aCStack_18,0x66,0x37,0);
  }
  WriteWordInRect(param_2,this + 0x238,this + 0x298,uVar2,aCStack_18,0,1);
LAB_04dbdf04:
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,0x66,0x37,0);
  WriteWordInRect(param_2,this + 0x250,this + 0x2c8,uVar2,aCStack_18,0,1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::InitTitleAndDesc(int, int) */

void __thiscall UIBagItemBox::InitTitleAndDesc(UIBagItemBox *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  TrialCardManager *this_00;
  char *__s;
  RenaissanceChallengeNewManager *this_01;
  NameMapperBase *this_02;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  wchar_t *pwVar4;
  int extraout_w1;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *extraout_x1_06;
  string *extraout_x1_07;
  string *extraout_x1_08;
  string *extraout_x1_09;
  string *extraout_x1_10;
  string *extraout_x1_11;
  string *extraout_x1_12;
  string *extraout_x1_13;
  string *extraout_x1_14;
  Sexy *this_05;
  string *this_06;
  undefined1 auVar5 [12];
  Sexy *local_68;
  undefined1 auStack_58 [8];
  Sexy aSStack_50 [8];
  Sexy aSStack_48 [8];
  Sexy aSStack_40 [8];
  Sexy aSStack_38 [8];
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    TodStringTranslate(L"[UI_BAG_PIECE_PLANT_TITLE]");
    FUN_054766c8(this + 0x220,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    TodStringTranslate(L"[UI_BAG_PIECE_PLANT_TITLE2]");
    FUN_054766c8(this + 0x228,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    iVar1 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar1);
    Sexy::StringToUpper(aSStack_48,extraout_x1);
    uVar3 = FUN_0547429c((string *)&local_18);
    Sexy::StrFormat("[%s_DESCRIPTION_HEADER]",aSStack_40,uVar3);
    std::string::~string((string *)&local_18);
    Sexy::StringToUpper(aSStack_48,extraout_x1_00);
    uVar3 = FUN_0547429c((string *)&local_18);
    Sexy::StrFormat("[%s]",aSStack_38,uVar3);
    std::string::~string((string *)&local_18);
    Sexy::StringToWString(aSStack_40,extraout_x1_01);
    TodStringTranslate(awStack_20);
    FUN_054766c8(this + 0x230,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50(awStack_20);
    FUN_05478178(awStack_20,L"[UI_BAG_PLANT_PIECE_DESC]",aSStack_50);
    Sexy::StringToWString(aSStack_38,extraout_x1_02);
    TodStringTranslate(awStack_30);
    TodReplaceString(awStack_20,L"{DESC}",awStack_28);
    FUN_054766c8(this + 0x238,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50(awStack_28);
    FUN_05476c50(awStack_30);
    FUN_05476c50(awStack_20);
    nop();
    FUN_05478178(awStack_20,L"[UI_BAG_PIECE_WAY]",aSStack_50);
    FUN_05475d88(awStack_30,aSStack_48);
    GetPlantGotWay(awStack_28,this,awStack_30);
    TodReplaceString(awStack_20,L"{DESC}",awStack_28);
    FUN_054766c8(this + 0x250,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50(awStack_28);
    std::string::~string((string *)awStack_30);
LAB_04dbe4b0:
    local_68 = aSStack_38;
    this_06 = (string *)aSStack_40;
    this_05 = aSStack_48;
    FUN_05476c50(awStack_20);
    nop();
LAB_04dbe4c4:
    std::string::~string((string *)local_68);
    std::string::~string(this_06);
    std::string::~string((string *)this_05);
    goto LAB_04dbe27c;
  }
  if (param_1 == 1) {
    TodStringTranslate(L"[UI_BAG_PIECE_AVATAR_TITLE]");
    FUN_054766c8(this + 0x220,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    TodStringTranslate(L"[UI_BAG_PIECE_AVATAR_TITLE2]");
    FUN_054766c8(this + 0x228,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    NewAvatar::Common_GetPlantNameByAvatarPieceID((NewAvatar *)(ulong)(uint)param_2,extraout_w1);
    Sexy::StringToUpper(aSStack_40,extraout_x1_07);
    uVar3 = FUN_0547429c((string *)&local_18);
    Sexy::StrFormat("[%s]",aSStack_38,uVar3);
    std::string::~string((string *)&local_18);
    GetAvatarSpecification((int)this);
    FUN_054766c8(this + 0x230,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    FUN_05478178(awStack_20,L"[UI_BAG_AVATAR_PIECE_DESC]",aSStack_48);
    Sexy::StringToWString(aSStack_38,extraout_x1_08);
    TodStringTranslate(awStack_30);
    TodReplaceString(awStack_20,L"{DESC}",awStack_28);
    FUN_054766c8(this + 0x238,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50(awStack_28);
    FUN_05476c50(awStack_30);
    FUN_05476c50(awStack_20);
    nop();
    FUN_05478178(awStack_20,L"[UI_BAG_PIECE_WAY]",awStack_30);
    GetAvatarGotWay((int)this);
    TodReplaceString(awStack_20,L"{DESC}",awStack_28);
    FUN_054766c8(this + 0x250,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50(awStack_28);
    FUN_05476c50(awStack_20);
    nop();
    std::string::~string((string *)aSStack_38);
    std::string::~string((string *)aSStack_40);
    goto LAB_04dbe27c;
  }
  if (param_1 == 2) {
    this_05 = aSStack_50;
    TodStringTranslate(L"[UI_BAG_PIECE_ACCESSORY_TITLE]");
    this_06 = (string *)aSStack_48;
    local_68 = aSStack_40;
    FUN_054766c8(this + 0x220,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    TodStringTranslate(L"[UI_BAG_PIECE_ACCESSORY_TITLE2]");
    FUN_054766c8(this + 0x228,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    iVar1 = PlantAccessoryPieceMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar1);
    Sexy::StringToUpper(this_05,extraout_x1_09);
    __s = (char *)FUN_0547429c((string *)&local_18);
    std::string::string(this_06,__s);
    nop();
    std::string::~string((string *)&local_18);
    uVar3 = FUN_0547429c(this_06);
    Sexy::StrFormat("[%s_BOOST_DES]",local_68,uVar3);
    Sexy::StringToUpper(this_05,extraout_x1_10);
    uVar3 = FUN_0547429c((string *)&local_18);
    Sexy::StrFormat("[%s]",aSStack_38,uVar3);
    std::string::~string((string *)&local_18);
    Sexy::StringToWString(local_68,extraout_x1_11);
    TodStringTranslate(awStack_20);
    FUN_054766c8(this + 0x230,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50(awStack_20);
    FUN_05478178(awStack_20,L"[UI_BAG_ACCESSORY_PIECE_DESC]",auStack_58);
    Sexy::StringToWString(aSStack_38,extraout_x1_12);
    TodStringTranslate(awStack_30);
    TodReplaceString(awStack_20,L"{DESC}",awStack_28);
    FUN_054766c8(this + 0x238,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50(awStack_28);
    FUN_05476c50(awStack_30);
    FUN_05476c50(awStack_20);
    nop();
    FUN_05478178(awStack_20,L"[UI_BAG_PIECE_WAY]",auStack_58);
    FUN_05475d88(awStack_30,this_05);
    GetAccessoryGotWay(awStack_28,this,awStack_30);
    TodReplaceString(awStack_20,L"{DESC}",awStack_28);
    FUN_054766c8(this + 0x250,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50(awStack_28);
    std::string::~string((string *)awStack_30);
    FUN_05476c50(awStack_20);
    nop();
    std::string::~string((string *)aSStack_38);
    goto LAB_04dbe4c4;
  }
  if (param_1 != 3) {
    if (param_1 == 4) {
      TodStringTranslate(L"[UI_BAG_PIECE_ITEM_TITLE]");
      FUN_054766c8(this + 0x220,&local_18);
      FUN_05476c50(&local_18);
      this_00 = (TrialCardManager *)Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
      TrialCardManager::GetTrialCardUse(this_00,param_2);
      FUN_054766c8(this + 0x230,&local_18);
      FUN_05476c50(&local_18);
      iVar1 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
      TrialCardManager::GetTrialCardGetWay(iVar1);
      FUN_054766c8(this + 0x238,&local_18);
      FUN_05476c50(&local_18);
    }
    goto LAB_04dbe27c;
  }
  if (param_2 != 0xf231) {
    if (param_2 == 0x5ae3) {
      this_01 = (RenaissanceChallengeNewManager *)
                Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
      uVar2 = RenaissanceChallengeNewManager::GetResourceId(this_01);
      if (0 < (int)uVar2) {
        this_02 = (NameMapperBase *)MaterialItemMapper::GetInstance();
        Sexy::StrFormat("mat_renaissance_challenge_statue_%",(string *)&local_18,(ulong)uVar2);
        NameMapperBase::GetIdForName(this_02,(string *)&local_18);
        std::string::~string((string *)&local_18);
      }
    }
    TodStringTranslate(L"[UI_BAG_PIECE_ITEM_TITLE]");
    FUN_054766c8(this + 0x220,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    iVar1 = MaterialItemMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar1);
    Sexy::StringToUpper(aSStack_48,extraout_x1_03);
    uVar3 = FUN_0547429c((string *)&local_18);
    Sexy::StrFormat("[%s_USE]",aSStack_40,uVar3);
    std::string::~string((string *)&local_18);
    Sexy::StringToUpper(aSStack_48,extraout_x1_04);
    uVar3 = FUN_0547429c((string *)&local_18);
    Sexy::StrFormat("[%s_GOT_WAY]",aSStack_38,uVar3);
    std::string::~string((string *)&local_18);
    FUN_05478178(awStack_20,L"[UI_BAG_MATERIAL_DESC]",aSStack_50);
    Sexy::StringToWString(aSStack_40,extraout_x1_05);
    TodStringTranslate(awStack_30);
    TodReplaceString(awStack_20,L"{DESC}",awStack_28);
    FUN_054766c8(this + 0x238,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50(awStack_28);
    FUN_05476c50(awStack_30);
    FUN_05476c50(awStack_20);
    nop();
    FUN_05478178(awStack_20,L"[UI_BAG_PIECE_WAY]",aSStack_50);
    Sexy::StringToWString(aSStack_38,extraout_x1_06);
    TodStringTranslate(awStack_30);
    TodReplaceString(awStack_20,L"{DESC}",awStack_28);
    FUN_054766c8(this + 0x250,(string *)&local_18);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50(awStack_28);
    FUN_05476c50(awStack_30);
    goto LAB_04dbe4b0;
  }
  CollectionUtils::GetPlayerCollectionName(0xf231);
  FUN_054766c8(this + 0x220,(string *)&local_18);
  FUN_05476c50((string *)&local_18);
  iVar1 = CollectionMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  Sexy::StringToUpper(aSStack_40,extraout_x1_13);
  uVar3 = FUN_0547429c((string *)&local_18);
  Sexy::StrFormat("[%s_GOT_WAY]",aSStack_38,uVar3);
  std::string::~string((string *)&local_18);
  CollectionUtils::GetPlayerCollectionDescription(0xf231);
  FUN_054766c8(this + 0x238,(string *)&local_18);
  FUN_05476c50((string *)&local_18);
  FUN_05478178(awStack_20,L"[UI_BAG_PIECE_WAY]",aSStack_48);
  Sexy::StringToWString(aSStack_38,extraout_x1_14);
  TodStringTranslate(awStack_30);
  TodReplaceString(awStack_20,L"{DESC}",awStack_28);
  FUN_054766c8(this + 0x250,(string *)&local_18);
  FUN_05476c50((string *)&local_18);
  FUN_05476c50(awStack_28);
  FUN_05476c50(awStack_30);
  FUN_05476c50(awStack_20);
  nop();
  TodStringTranslate(L"[UI_BAG_MATERIAL_RARE]");
  FUN_054766c8(this + 0x240,(string *)&local_18);
  FUN_05476c50((string *)&local_18);
  this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
  auVar5 = PlayerInfo::GetCollection(this_04,0xf231);
  local_10 = auVar5._8_4_;
  local_18 = auVar5._0_4_;
  local_14 = auVar5._4_4_;
  if (local_14 == 1) {
    pwVar4 = L"[RARE1]";
LAB_04dbed14:
    TodStringTranslate(pwVar4);
    FUN_054766c8(this + 0x248,awStack_20);
    FUN_05476c50(awStack_20);
  }
  else {
    if (local_14 == 2) {
      pwVar4 = L"[RARE2]";
      goto LAB_04dbed14;
    }
    if (local_14 == 3) {
      pwVar4 = L"[RARE3]";
      goto LAB_04dbed14;
    }
  }
  std::string::~string((string *)aSStack_38);
  std::string::~string((string *)aSStack_40);
LAB_04dbe27c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::InitButtons(int) */

void __thiscall UIBagItemBox::InitButtons(UIBagItemBox *this,int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 uVar3;
  undefined8 uVar4;
  char *__s;
  undefined1 auVar5 [12];
  string asStack_110 [8];
  undefined4 local_108;
  undefined4 local_104;
  int local_100;
  PVZ2UIImage aPStack_f8 [56];
  string asStack_c0 [56];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    SetShowType(this,5);
    std::string::string(asStack_c0,"[UI_BAG_PLANT_LEVELUP]");
    SetButtonTitle(this,1,asStack_c0);
    std::string::~string(asStack_c0);
    nop();
    std::string::string(asStack_c0,"[UI_BAG_TRANS_GENOSIS]");
    uVar4 = 4;
LAB_04dbee34:
    SetButtonTitle(this,uVar4,asStack_c0);
    std::string::~string(asStack_c0);
    nop();
  }
  else {
    if (param_1 == 1) {
      SetShowType(this,5);
      std::string::string(asStack_c0,"[UI_BAG_AVATAR_EXCHANGE]");
      SetButtonTitle(this,1,asStack_c0);
      std::string::~string(asStack_c0);
      nop();
      std::string::string(asStack_c0,"[UI_BAG_TRANS_GENOSIS]");
      uVar3 = 4;
    }
    else {
      if (param_1 != 2) {
        if (param_1 == 3) {
          if (*(int *)(this + 0x140) == 0xf231) {
            SetShowType(this,2);
            this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
            auVar5 = PlayerInfo::GetCollection(this_01,0xf231);
            local_100 = auVar5._8_4_;
            local_108 = auVar5._0_4_;
            local_104 = auVar5._4_4_;
            if (local_100 == 1) {
              std::string::string(asStack_c0,"[UNEQUIP]");
              SetButtonTitle(this,2,asStack_c0);
              std::string::~string(asStack_c0);
              nop();
              PVZ2UIImage::PVZ2UIImage(aPStack_f8,&DAT_06b9a0d0,3);
              PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_c0,&DAT_06b9a1d8,3);
              std::string::string(asStack_110,"[UNEQUIP]");
              SetButtonDialog(this,2,aPStack_f8,asStack_c0,asStack_110);
              std::string::~string(asStack_110);
              nop();
            }
            else {
              PVZ2UIImage::PVZ2UIImage(aPStack_f8,&DAT_06b9a1b0,3);
              PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_c0,&DAT_06b9a080,3);
              std::string::string(asStack_110,"[EQUIP]");
              SetButtonDialog(this,2,aPStack_f8,(PVZ2UIImage *)asStack_c0,asStack_110);
              std::string::~string(asStack_110);
              nop();
            }
            goto LAB_04dbeda8;
          }
          SetShowType(this,2);
          if (*(int *)(this + 0x140) == 0x5b2d) {
            iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
            ActivityManager::GetActiveItem(iVar2);
            cVar1 = FUN_04dbc594(local_80);
            if ((cVar1 == '\0') || (local_70 == '\0')) {
              __s = "[UI_BAG_PARTY_ASSIST_EXCHANGE]";
            }
            else {
              __s = "[UI_BAG_ITEM_USE]";
            }
            std::string::string(asStack_c0,__s);
            SetButtonTitle(this,2,asStack_c0);
            std::string::~string(asStack_c0);
            nop();
            ActiveItem::~ActiveItem(aAStack_88);
            goto LAB_04dbeda8;
          }
        }
        else {
          if (param_1 != 4) goto LAB_04dbeda8;
          SetShowType(this,2);
        }
        std::string::string(asStack_c0,"[UI_BAG_ITEM_USE]");
        uVar4 = 2;
        goto LAB_04dbee34;
      }
      SetShowType(this,2);
      std::string::string(asStack_c0,"[UI_BAG_ACCESSORY_EXCHANGE]");
      uVar3 = 2;
    }
    SetButtonTitle(this,uVar3,asStack_c0);
    std::string::~string(asStack_c0);
    nop();
  }
LAB_04dbeda8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UIBagItemBox::OnCollectionStateSwitch(int, int) */

void UIBagItemBox::OnCollectionStateSwitch(int param_1,int param_2)

{
  PVZ2UIButton::ClearButton(*(PVZ2UIButton **)((UIBagItemBox *)(ulong)(uint)param_1 + 0x138));
  InitButtons((UIBagItemBox *)(ulong)(uint)param_1,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBagItemBox::InitView(int, int, int) */

void __thiscall UIBagItemBox::InitView(UIBagItemBox *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UIWidgetImage *pUVar4;
  UIWidgetText *pUVar5;
  long *plVar6;
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x208) = param_1;
  *(int *)(this + 0x140) = param_2;
  *(int *)(this + 0x20c) = param_3;
  std::string::string(asStack_18,"UIImage_0");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar4,true);
  GetItemBoxTitle((int)this);
  FUN_054766c8(this + 0x210,asStack_18);
  FUN_05476c50(asStack_18);
  std::string::string(asStack_18,"title");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar5 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar5,this + 0x210);
  }
  plVar6 = (long *)UIRewardFrame::CreateUIRewardFrame(param_2,0,false);
  std::string::string(asStack_18,"item_bg");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  iVar2 = FUN_04dbc730(0xf);
  iVar1 = *(int *)(pUVar4 + 0x50) + iVar2 * -2;
  iVar3 = FUN_04dbc730(10);
  Sexy::Insets::Insets((Insets *)asStack_18,iVar2,iVar3 + iVar2,iVar1,iVar1);
  (**(code **)(*plVar6 + 0x1a0))(plVar6,asStack_18);
  (**(code **)(*(long *)pUVar4 + 0x60))(pUVar4,plVar6);
  TodStringTranslate(L"[UI_BAG_ITEM_COUNT]");
  TodReplaceNumberString(awStack_28,L"{NUMS}",param_3);
  FUN_054766c8(this + 0x218,auStack_20);
  FUN_05476c50(auStack_20);
  FUN_05476c50(awStack_28);
  InitTitleAndDesc(this,param_1,param_2);
  InitButtons(this,param_1);
  InitRects(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

