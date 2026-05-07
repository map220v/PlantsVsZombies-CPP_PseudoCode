// Class: UIGeneralPlantChipsExchange


/* UIGeneralPlantChipsExchange::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIGeneralPlantChipsExchange::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIGeneralPlantChipsExchange::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIGeneralPlantChipsExchange::ScrollTargetReached
          (UIGeneralPlantChipsExchange *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIGeneralPlantChipsExchange::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIGeneralPlantChipsExchange::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIGeneralPlantChipsExchange::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIGeneralPlantChipsExchange::ScrollTargetInterrupted
          (UIGeneralPlantChipsExchange *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGeneralPlantChipsExchange::GetLayoutName() */

void __thiscall UIGeneralPlantChipsExchange::GetLayoutName(UIGeneralPlantChipsExchange *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIGeneralPlantChipsExchange");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIGeneralPlantChipsExchange::SelectPlant(std::string const&) */

void __thiscall
UIGeneralPlantChipsExchange::SelectPlant(UIGeneralPlantChipsExchange *this,string *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  thunk_FUN_05475e00(this + 0x158);
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x168);
    uVar2 = FUN_039b5db8(uVar4,*(undefined8 *)(this + 0x170));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_039b5dc4(uVar4,uVar3);
    GeneralPlantChipsExchangeCard::SelectCard((GeneralPlantChipsExchangeCard *)*puVar1,param_1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGeneralPlantChipsExchange::Refresh() */

void __thiscall UIGeneralPlantChipsExchange::Refresh(UIGeneralPlantChipsExchange *this)

{
  UIWidgetText *pUVar1;
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x148) < 1) {
    *(undefined4 *)(this + 0x148) = 1;
  }
  else if (*(int *)(this + 0x14c) < *(int *)(this + 0x148)) {
    *(int *)(this + 0x148) = *(int *)(this + 0x14c);
  }
  std::string::string(asStack_20,"UIText_Number");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  FUN_05478178(awStack_18,L"[GENERAL_PLANT_CHIPS_EXCHANGE_NUMBER]",auStack_28);
  TodReplaceNumberString(awStack_18,L"{NUM}",*(int *)(this + 0x148));
  PuzzleTip::SetTip(pUVar1,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIGeneralPlantChipsExchange::SliderVal(int, double) */

void UIGeneralPlantChipsExchange::SliderVal(int param_1,double param_2)

{
  UIGeneralPlantChipsExchange *this;
  
  this = (UIGeneralPlantChipsExchange *)(ulong)(uint)param_1;
  *(int *)(this + 0x148) = (int)((double)*(int *)(this + 0x14c) * param_2 + 1.0);
  Refresh(this);
  return;
}


/* non-virtual thunk to UIGeneralPlantChipsExchange::SliderVal(int, double) */

void __thiscall
UIGeneralPlantChipsExchange::SliderVal(UIGeneralPlantChipsExchange *this,int param_1,double param_2)

{
  SliderVal((int)this + -0x140,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGeneralPlantChipsExchange::ButtonDepress(int) */

void __thiscall
UIGeneralPlantChipsExchange::ButtonDepress(UIGeneralPlantChipsExchange *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  UIMessageBox *pUVar4;
  wchar_t *pwVar5;
  Image *pIVar6;
  long lVar7;
  ValueInuptEditor *this_01;
  NameMapperBase *this_02;
  wstring awStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  string asStack_68 [40];
  wstring awStack_40 [8];
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x16) {
    this_01 = ::operator_new(0x110);
    ValueInuptEditor::ValueInuptEditor(this_01);
    lVar7 = gLawnApp;
    iVar3 = FUN_039b637c(0x140);
    iVar2 = FUN_039b637c(0xe6);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,(*(int *)(lVar7 + 0xd4) - iVar3) / 2,(*(int *)(lVar7 + 0xd8) - iVar2) / 2,
               iVar3,iVar2);
    ValueInuptEditor::Init(this_01);
    UIUtil::ShowDialog((Widget *)this_01);
    FUN_039b62c4(afStack_38,this,this_01);
    LevelEditorSunMoneyEditor::SetOnConfirmText((LevelEditorSunMoneyEditor *)this_01,afStack_38);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  }
  else if (param_1 == 0xb) {
    cVar1 = FUN_0547419c((string *)(this + 0x158));
    if (cVar1 == '\0') {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::GetCurrentProfile(this_00);
      if ((0 < *(int *)(this + 0x148)) && (*(int *)(this + 0x148) <= *(int *)(this + 0x14c))) {
        pUVar4 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        UIMessageBox::SetShowType(pUVar4,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        FUN_05478178((wstring *)asStack_68,L"[GENERAL_PLANT_CHIPS_EXCHANGE]",awStack_70);
        TodReplaceNumberString((wstring *)asStack_68,L"{NUM1}",*(int *)(this + 0x148));
        FUN_05476c50((wstring *)asStack_68);
        nop();
        TodReplaceNumberString(awStack_78,L"{NUM2}",*(int *)(this + 0x148));
        FUN_054766c8(awStack_78,(wstring *)asStack_68);
        FUN_05476c50((wstring *)asStack_68);
        GetGameItemInfo(*(int *)(this + 0x150),0x7fffffff,0);
        TodReplaceString(awStack_78,L"{NAME1}",awStack_40);
        FUN_054766c8(awStack_78,awStack_70);
        FUN_05476c50(awStack_70);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_68);
        this_02 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        iVar3 = NameMapperBase::GetIdForName(this_02,(string *)(this + 0x158));
        GetGameItemInfo(iVar3,0x7fffffff,0);
        TodReplaceString(awStack_78,L"{NAME2}",awStack_40);
        FUN_054766c8(awStack_78,awStack_70);
        FUN_05476c50(awStack_70);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_68);
        UIMessageBox::SetMessage(pUVar4,awStack_78,awStack_88);
        std::string::string(asStack_68,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar6 = (Image *)StringHelper::ToImage(asStack_68,false);
        UIMessageBox::SetBackground(pUVar4,pIVar6);
        std::string::~string(asStack_68);
        nop();
        lVar7 = UIMessageBox::GetButtonOK(pUVar4);
        thunk_FUN_05477b9c(lVar7 + 0xd8,awStack_80);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,ExchangeConfirm);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<UIGeneralPlantChipsExchange,void(UIGeneralPlantChipsExchange::*)(UIMessageBox*,int)>
                  ((Delegate2<UIMessageBox*,int> *)afStack_38,(wstring *)asStack_68);
        UIMessageBox::SetCallback(pUVar4,(Delegate2<UIMessageBox*,int> *)afStack_38);
        FUN_05476c50(awStack_78);
        FUN_05476c50(awStack_80);
        FUN_05476c50(awStack_88);
        goto LAB_039b70d4;
      }
      pUVar4 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar4 == (UIMessageBox *)0x0) goto LAB_039b70d4;
      UIMessageBox::SetShowType(pUVar4,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      pwVar5 = L"[ENTER_VALID_VALUE]";
    }
    else {
      pUVar4 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar4 == (UIMessageBox *)0x0) goto LAB_039b70d4;
      UIMessageBox::SetShowType(pUVar4,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      pwVar5 = L"[SELECT_PLANT_FIRST]";
    }
    TodStringTranslate(pwVar5);
    UIMessageBox::SetMessage(pUVar4,awStack_70,awStack_80);
    std::string::string(asStack_68,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar6 = (Image *)StringHelper::ToImage(asStack_68,false);
    UIMessageBox::SetBackground(pUVar4,pIVar6);
    std::string::~string(asStack_68);
    nop();
    lVar7 = UIMessageBox::GetButtonCancel(pUVar4);
    thunk_FUN_05477b9c(lVar7 + 0xd8,awStack_78);
    FUN_05476c50(awStack_70);
    FUN_05476c50(awStack_78);
    FUN_05476c50(awStack_80);
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UIGeneralPlantChipsExchange>::CloseDialog();
  }
LAB_039b70d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIGeneralPlantChipsExchange::ButtonDepress(int) */

void __thiscall
UIGeneralPlantChipsExchange::ButtonDepress(UIGeneralPlantChipsExchange *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIGeneralPlantChipsExchange::UIGeneralPlantChipsExchange() */

void __thiscall
UIGeneralPlantChipsExchange::UIGeneralPlantChipsExchange(UIGeneralPlantChipsExchange *this)

{
  UISingletonDialog<UIGeneralPlantChipsExchange>::UISingletonDialog
            ((UISingletonDialog<UIGeneralPlantChipsExchange> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0x140));
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined ***)this = &PTR_GetClass_066e8e20;
  *(undefined **)(this + 0xd8) = &DAT_066e9188;
  *(undefined ***)(this + 0x138) = &PTR__UIGeneralPlantChipsExchange_066e91d0;
  *(undefined ***)(this + 0x140) = &PTR_SliderVal_066e9218;
  *(undefined4 *)(this + 0x14c) = 0;
  Set8BytesTo0(this + 0x158);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  return;
}


/* UIGeneralPlantChipsExchange::~UIGeneralPlantChipsExchange() */

void __thiscall
UIGeneralPlantChipsExchange::~UIGeneralPlantChipsExchange(UIGeneralPlantChipsExchange *this)

{
  *(undefined ***)this = &PTR_GetClass_066e8e20;
  *(undefined **)(this + 0xd8) = &DAT_066e9188;
  *(undefined ***)(this + 0x138) = &PTR__UIGeneralPlantChipsExchange_066e91d0;
  *(undefined ***)(this + 0x140) = &PTR_SliderVal_066e9218;
  std::vector<GeneralPlantChipsExchangeCard*,std::allocator<GeneralPlantChipsExchangeCard*>>::
  ~vector((vector<GeneralPlantChipsExchangeCard*,std::allocator<GeneralPlantChipsExchangeCard*>> *)
          (this + 0x168));
  std::string::~string((string *)(this + 0x158));
  UISingletonDialog<UIGeneralPlantChipsExchange>::~UISingletonDialog
            ((UISingletonDialog<UIGeneralPlantChipsExchange> *)this);
  return;
}


/* non-virtual thunk to UIGeneralPlantChipsExchange::~UIGeneralPlantChipsExchange() */

void __thiscall
UIGeneralPlantChipsExchange::~UIGeneralPlantChipsExchange(UIGeneralPlantChipsExchange *this)

{
  ~UIGeneralPlantChipsExchange(this + -0x138);
  return;
}


/* UIGeneralPlantChipsExchange::~UIGeneralPlantChipsExchange() */

void __thiscall
UIGeneralPlantChipsExchange::~UIGeneralPlantChipsExchange(UIGeneralPlantChipsExchange *this)

{
  ~UIGeneralPlantChipsExchange(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIGeneralPlantChipsExchange::~UIGeneralPlantChipsExchange() */

void __thiscall
UIGeneralPlantChipsExchange::~UIGeneralPlantChipsExchange(UIGeneralPlantChipsExchange *this)

{
  ~UIGeneralPlantChipsExchange(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGeneralPlantChipsExchange::ExchangePlantChips() */

void __thiscall UIGeneralPlantChipsExchange::ExchangePlantChips(UIGeneralPlantChipsExchange *this)

{
  undefined8 uVar1;
  NameMapperBase *this_00;
  DNetwork *this_01;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2744];
  string asStack_230 [552];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"iid");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x150));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"q");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x148));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"si");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  this_00 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  local_d48[0] = NameMapperBase::GetIdForName(this_00,(string *)(this + 0x158));
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_039b6320(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_230,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* UIGeneralPlantChipsExchange::ExchangeConfirm(UIMessageBox*, int) */

void __thiscall
UIGeneralPlantChipsExchange::ExchangeConfirm
          (UIGeneralPlantChipsExchange *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  ExchangePlantChips(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGeneralPlantChipsExchange::InitView(std::string const&) */

void __thiscall
UIGeneralPlantChipsExchange::InitView(UIGeneralPlantChipsExchange *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *pNVar12;
  undefined8 uVar13;
  Widget *pWVar14;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  ulong uVar15;
  GeneralPlantChipsExchangeCard *pGVar16;
  string *psVar17;
  UIMessageBox *this_04;
  UIWidgetText *this_05;
  Image *pIVar18;
  Image *pIVar19;
  Slider *pSVar20;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  GeneralPlantChipsExchangeCard *local_48;
  wstring awStack_40 [16];
  RtName aRStack_30 [4];
  int local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar3 = PlayerInfo::GetMaterialNum(this_01,param_1);
  *(undefined4 *)(this + 0x14c) = uVar3;
  pNVar12 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  cVar1 = NameMapperBase::ContainsName(pNVar12,param_1);
  if ((cVar1 == '\0') || (*(int *)(this + 0x14c) < 1)) {
    this_04 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_04 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_04,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUY_MYSTERY_SHOP_NOT_ENOUGH_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_04,awStack_40,(wstring *)&local_48);
      std::string::string((string *)&local_20,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar18 = (Image *)StringHelper::ToImage((string *)&local_20,false);
      UIMessageBox::SetBackground(this_04,pIVar18);
      std::string::~string((string *)&local_20);
      nop();
      lVar22 = UIMessageBox::GetButtonCancel(this_04);
      thunk_FUN_05477b9c(lVar22 + 0xd8,aRStack_30);
      FUN_05476c50(aRStack_30);
      FUN_05476c50(awStack_40);
      FUN_05476c50((wstring *)&local_48);
    }
    UISingletonDialog<UIGeneralPlantChipsExchange>::CloseDialog();
  }
  else {
    pNVar12 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    uVar3 = NameMapperBase::GetIdForName(pNVar12,param_1);
    *(undefined4 *)(this + 0x150) = uVar3;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    bVar2 = std::operator==(param_1,"mat_general_plant_chips");
    if (bVar2) {
      uVar13 = Sexy::LazySingleton<PVZDB>::GetInstance();
      Sexy::ToWString(param_1);
      Sexy::RtName::RtName(aRStack_30,awStack_40);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>((RtWeakPtr *)&local_48,uVar13,5,aRStack_30);
      Sexy::RtName::~RtName(aRStack_30);
      FUN_05476c50(awStack_40);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_48);
      if (bVar2) {
        uVar23 = 0;
        while( true ) {
          lVar22 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          uVar15 = FUN_039b5d90(*(undefined8 *)(lVar22 + 0x18),*(undefined8 *)(lVar22 + 0x20));
          if (uVar15 <= uVar23) break;
          lVar22 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
          psVar17 = (string *)FUN_039b5d9c(*(undefined8 *)(lVar22 + 0x18),uVar23);
          std::vector<std::string,std::allocator<std::string>>::push_back
                    ((vector<std::string,std::allocator<std::string>> *)&local_20,psVar17);
          uVar23 = uVar23 + 1;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    }
    else {
      bVar2 = std::operator==(param_1,"mat_universal_plant_chips");
      if (bVar2) {
        uVar23 = 0;
        Magento::GetPlantLevelUp((Magento *)0x1);
        while( true ) {
          lVar22 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_40);
          uVar15 = FUN_039b5da4(*(undefined8 *)(lVar22 + 0x60),*(undefined8 *)(lVar22 + 0x68));
          if (uVar15 <= uVar23) break;
          psVar17 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          lVar22 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_40);
          pRVar21 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_039b5db0(*(undefined8 *)(lVar22 + 0x60),uVar23);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar21);
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar17);
          cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
          if ((cVar1 != '\0') &&
             (lVar22 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30),
             *(char *)(lVar22 + 0x30) != '\0')) {
            lVar22 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_40);
            pRVar21 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      FUN_039b5db0(*(undefined8 *)(lVar22 + 0x60),uVar23);
            lVar22 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar21);
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)&local_20,
                       (string *)(lVar22 + 0x80));
          }
          uVar23 = uVar23 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_40)
        ;
      }
    }
    std::string::string((string *)aRStack_30,"Widget_Content");
    iVar8 = 0;
    pWVar14 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)aRStack_30);
    std::string::~string((string *)aRStack_30);
    nop();
    this_02 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
    iVar4 = FUN_039b637c(0);
    Sexy::Insets::Insets
              ((Insets *)awStack_40,iVar4,iVar4,*(int *)(pWVar14 + 0x50),*(int *)(pWVar14 + 0x54));
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,(Insets *)awStack_40);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
    this_03 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_03);
    (**(code **)(*(long *)this_03 + 0x198))
              (this_03,0,0,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
    iVar4 = FUN_039b637c(0x14);
    iVar5 = FUN_039b637c(10);
    iVar6 = FUN_039b637c(100);
    iVar7 = FUN_039b637c(0x3c);
    for (uVar23 = 0; uVar15 = FUN_039b5d90(local_20,local_18), uVar23 < uVar15; uVar23 = uVar23 + 1)
    {
      pGVar16 = ::operator_new(0xf8);
      GeneralPlantChipsExchangeCard::GeneralPlantChipsExchangeCard(pGVar16);
      iVar8 = (int)uVar23;
      local_48 = pGVar16;
      Sexy::Insets::Insets
                ((Insets *)aRStack_30,(iVar6 + iVar4) * (iVar8 % 3),(iVar7 + iVar5) * (iVar8 / 3),
                 iVar6,iVar7);
      (**(code **)(*(long *)local_48 + 0x1a0))(local_48,(string *)aRStack_30);
      (**(code **)(*(long *)this_03 + 0x60))(this_03,local_48);
      pGVar16 = local_48;
      psVar17 = (string *)FUN_039b5d9c(local_20,uVar23);
      GeneralPlantChipsExchangeCard::InitView(pGVar16,iVar8,psVar17,this);
      std::vector<GeneralPlantChipsExchangeCard*,std::allocator<GeneralPlantChipsExchangeCard*>>::
      push_back((vector<GeneralPlantChipsExchangeCard*,std::allocator<GeneralPlantChipsExchangeCard*>>
                 *)(this + 0x168),&local_48);
      psVar17 = (string *)FUN_039b5d9c(local_20,uVar23);
      cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,psVar17);
      if ((cVar1 == '\0') && (bVar2 = std::operator==(param_1,"mat_universal_plant_chips"), bVar2))
      {
        (**(code **)(*(long *)local_48 + 0x188))(local_48,1);
      }
      iVar8 = iVar6 + local_2c + iVar4;
    }
    lVar22 = *(long *)this_02;
    *(int *)(this_03 + 0x54) = iVar8;
    (**(code **)(lVar22 + 0x60))(this_02,this_03);
    (**(code **)(*(long *)pWVar14 + 0x60))(pWVar14,this_02);
    std::string::string((string *)&local_48,"UIText_Max");
    this_05 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_48);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x14c));
    UIWidgetText::SetString(this_05,(string *)aRStack_30);
    std::string::~string((string *)aRStack_30);
    std::string::~string((string *)&local_48);
    nop();
    std::string::string((string *)aRStack_30,"Widget_Slider");
    pWVar14 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)aRStack_30);
    std::string::~string((string *)aRStack_30);
    nop();
    pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abfca0);
    pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abff28);
    pSVar20 = ::operator_new(0x188);
    Sexy::Slider::Slider(pSVar20,pIVar18,pIVar19,1,(SliderListener *)(this + 0x140));
    *(Slider **)(this + 0x160) = pSVar20;
    pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abfcf0);
    iVar8 = FUN_039b637c(3);
    Sexy::Slider::SetFillImage(pSVar20,pIVar18,iVar8);
    (**(code **)(**(long **)(this + 0x160) + 0x310))(0,*(long **)(this + 0x160));
    uVar3 = FUN_039b637c(4);
    FUN_039b5d70(*(long *)(this + 0x160) + 0x184,uVar3);
    Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x160),1);
    Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x160),-8.0);
    Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x160),true);
    pSVar20 = *(Slider **)(this + 0x160);
    iVar8 = FUN_039b637c(2);
    Sexy::Point::Point((Point *)aRStack_30,iVar8,iVar8);
    Sexy::Slider::SetKnobShadowOffsets(pSVar20,(string *)aRStack_30);
    plVar24 = *(long **)(this + 0x160);
    uVar3 = FUN_039b637c(0x50);
    uVar9 = FUN_039b637c(0);
    uVar10 = FUN_039b637c(0xf0);
    uVar11 = FUN_039b637c(0x32);
    (**(code **)(*plVar24 + 0x198))(plVar24,uVar3,uVar9,uVar10,uVar11);
    (**(code **)(*(long *)pWVar14 + 0x60))(pWVar14,*(undefined8 *)(this + 0x160));
    Refresh(this);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

