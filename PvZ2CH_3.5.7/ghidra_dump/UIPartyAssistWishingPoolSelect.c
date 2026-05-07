// Class: UIPartyAssistWishingPoolSelect


/* UIPartyAssistWishingPoolSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIPartyAssistWishingPoolSelect::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPartyAssistWishingPoolSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIPartyAssistWishingPoolSelect::ScrollTargetReached
          (UIPartyAssistWishingPoolSelect *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIPartyAssistWishingPoolSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIPartyAssistWishingPoolSelect::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPartyAssistWishingPoolSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*)
    */

void __thiscall
UIPartyAssistWishingPoolSelect::ScrollTargetInterrupted
          (UIPartyAssistWishingPoolSelect *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssistWishingPoolSelect::GetLayoutName() */

void __thiscall UIPartyAssistWishingPoolSelect::GetLayoutName(UIPartyAssistWishingPoolSelect *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPartyAssistWishingPoolSelect");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssistWishingPoolSelect::GoToPresentShop(UIMessageBox*, int) */

void __thiscall
UIPartyAssistWishingPoolSelect::GoToPresentShop
          (UIPartyAssistWishingPoolSelect *this,UIMessageBox *param_1,int param_2)

{
  Dialog *this_00;
  UITabControl *this_01;
  UITabContent *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    this_00 = (Dialog *)UISingletonDialog<UIPartyAssist>::GetSingletonPtr();
    std::string::string(asStack_10,"UITabControl_0");
    this_01 = UI::Dialog::GetWidget<UITabControl>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pUVar1 = (UITabContent *)UITabControl::GetTab(this_01,3);
    UITabControl::SetTabSelected(this_01,pUVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPartyAssistWishingPoolSelect::UIPartyAssistWishingPoolSelect() */

void __thiscall
UIPartyAssistWishingPoolSelect::UIPartyAssistWishingPoolSelect(UIPartyAssistWishingPoolSelect *this)

{
  UISingletonDialog<UIPartyAssistWishingPoolSelect>::UISingletonDialog
            ((UISingletonDialog<UIPartyAssistWishingPoolSelect> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069f0820;
  *(undefined **)(this + 0xd8) = &DAT_069f0b80;
  *(undefined ***)(this + 0x138) = &PTR__UIPartyAssistWishingPoolSelect_069f0bc8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  return;
}


/* UIPartyAssistWishingPoolSelect::~UIPartyAssistWishingPoolSelect() */

void __thiscall
UIPartyAssistWishingPoolSelect::~UIPartyAssistWishingPoolSelect
          (UIPartyAssistWishingPoolSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_069f0820;
  *(undefined **)(this + 0xd8) = &DAT_069f0b80;
  *(undefined ***)(this + 0x138) = &PTR__UIPartyAssistWishingPoolSelect_069f0bc8;
  std::vector<PartyAssistWishingPoolSelectLine*,std::allocator<PartyAssistWishingPoolSelectLine*>>::
  ~vector((vector<PartyAssistWishingPoolSelectLine*,std::allocator<PartyAssistWishingPoolSelectLine*>>
           *)(this + 0x140));
  UISingletonDialog<UIPartyAssistWishingPoolSelect>::~UISingletonDialog
            ((UISingletonDialog<UIPartyAssistWishingPoolSelect> *)this);
  return;
}


/* non-virtual thunk to UIPartyAssistWishingPoolSelect::~UIPartyAssistWishingPoolSelect() */

void __thiscall
UIPartyAssistWishingPoolSelect::~UIPartyAssistWishingPoolSelect
          (UIPartyAssistWishingPoolSelect *this)

{
  ~UIPartyAssistWishingPoolSelect(this + -0x138);
  return;
}


/* UIPartyAssistWishingPoolSelect::~UIPartyAssistWishingPoolSelect() */

void __thiscall
UIPartyAssistWishingPoolSelect::~UIPartyAssistWishingPoolSelect
          (UIPartyAssistWishingPoolSelect *this)

{
  ~UIPartyAssistWishingPoolSelect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPartyAssistWishingPoolSelect::~UIPartyAssistWishingPoolSelect() */

void __thiscall
UIPartyAssistWishingPoolSelect::~UIPartyAssistWishingPoolSelect
          (UIPartyAssistWishingPoolSelect *this)

{
  ~UIPartyAssistWishingPoolSelect(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssistWishingPoolSelect::InitView() */

void __thiscall UIPartyAssistWishingPoolSelect::InitView(UIPartyAssistWishingPoolSelect *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PartyAssistMainData *pPVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  PartyAssistWishingPoolSelectLine *pPVar6;
  vector *pvVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  PartyAssistWishingPoolSelectLine *local_138;
  string asStack_130 [16];
  undefined8 local_120;
  undefined8 local_118;
  PartyAssistMainData aPStack_108 [56];
  vector avStack_d0 [200];
  long local_8;
  
  iVar10 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
  pPVar4 = (PartyAssistMainData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  PartyAssistMainData::PartyAssistMainData(aPStack_108,pPVar4);
  std::
  vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
  ::vector((vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
            *)&local_120,avStack_d0);
  std::string::string(asStack_130,"UIImage_Background");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_130);
  std::string::~string(asStack_130);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_04ea3948(0xf);
  iVar3 = FUN_04ea3948(0x1e);
  Sexy::Insets::Insets
            ((Insets *)asStack_130,iVar2,iVar2,*(int *)(pUVar5 + 0x50) - iVar3,
             *(int *)(pUVar5 + 0x54));
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,asStack_130);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  iVar2 = FUN_04ea3948(10);
  uVar1 = *(undefined4 *)(this_02 + 0x50);
  iVar3 = FUN_04ea3948(0x50);
  uVar9 = 0;
  while( true ) {
    iVar10 = iVar10 + iVar2 + iVar3;
    uVar8 = FUN_04ea2414(local_120,local_118);
    if (uVar8 <= uVar9) break;
    pPVar6 = ::operator_new(0x110);
    memset(pPVar6,0,0x110);
    PartyAssistWishingPoolSelectLine::PartyAssistWishingPoolSelectLine(pPVar6);
    local_138 = pPVar6;
    (**(code **)(*(long *)pPVar6 + 0x198))(pPVar6,0,iVar10 - (iVar2 + iVar3),uVar1,iVar3);
    pPVar6 = local_138;
    pvVar7 = (vector *)FUN_04ea2444(local_120,uVar9);
    PartyAssistWishingPoolSelectLine::InitView(pPVar6,(int)uVar9,pvVar7);
    (**(code **)(*(long *)this_02 + 0x60))(this_02,local_138);
    std::vector<PartyAssistWishingPoolSelectLine*,std::allocator<PartyAssistWishingPoolSelectLine*>>
    ::push_back((vector<PartyAssistWishingPoolSelectLine*,std::allocator<PartyAssistWishingPoolSelectLine*>>
                 *)(this + 0x140),&local_138);
    uVar9 = uVar9 + 1;
  }
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_01);
  std::
  vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
  ::~vector((vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
             *)&local_120);
  PartyAssistMainData::~PartyAssistMainData(aPStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPartyAssistWishingPoolSelect::OnCreate() */

void __thiscall UIPartyAssistWishingPoolSelect::OnCreate(UIPartyAssistWishingPoolSelect *this)

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
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* UIPartyAssistWishingPoolSelect::SelectLottery() */

void __thiscall UIPartyAssistWishingPoolSelect::SelectLottery(UIPartyAssistWishingPoolSelect *this)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PartyAssistMainData *pPVar7;
  uint *puVar8;
  string *this_01;
  char *pcVar9;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  vector *pvVar10;
  int *piVar11;
  undefined4 *puVar12;
  long lVar13;
  TGALogMgr *this_04;
  DNetwork *this_05;
  UIMessageBox *pUVar14;
  Image *pIVar15;
  vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *pvVar16;
  size_t __n;
  ulong uVar17;
  undefined8 uVar18;
  string asStack_11c8 [8];
  undefined8 local_11c0;
  undefined8 local_11b8;
  undefined8 local_11a8 [3];
  undefined8 local_1190 [3];
  undefined8 local_1178 [3];
  int local_1160;
  undefined4 uStack_115c;
  function<bool(Sexy::Touch_const&)> afStack_1148 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1128 [48];
  string asStack_10f8 [8];
  undefined1 auStack_10f0 [8];
  string asStack_10e8 [24];
  undefined1 auStack_10d0 [8];
  PartyAssistMainData aPStack_10c8 [24];
  int local_10b0;
  undefined8 local_10a8;
  vector avStack_1090 [200];
  undefined1 auStack_fc8 [16];
  undefined1 auStack_fb8 [352];
  Delegate2<UIMessageBox*,int> aDStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [2952];
  string asStack_160 [344];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar17 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_11c0);
  do {
    uVar18 = *(undefined8 *)(this + 0x140);
    uVar6 = FUN_04ea2450(uVar18,*(undefined8 *)(this + 0x148));
    if (uVar6 <= uVar17) {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
      pPVar7 = (PartyAssistMainData *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_end(this_00);
      PartyAssistMainData::PartyAssistMainData(aPStack_10c8,pPVar7);
      puVar8 = (uint *)FUN_04ea2364(local_10a8,(long)local_10b0);
      uVar1 = *puVar8;
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_1128);
      uVar2 = operator|(0x10,8);
      FUN_05462470(auStack_fc8,uVar2);
      uVar17 = FUN_04ea1d9c(local_11c0,local_11b8);
      if (2 < uVar17) {
        uVar18 = FUN_054603b8(auStack_fb8,&DAT_05593308);
        puVar12 = (undefined4 *)FUN_04ea2364(local_11c0,0);
        uVar18 = FUN_0546065c(uVar18,*puVar12);
        uVar18 = FUN_054603b8(uVar18,&DAT_05593348);
        puVar12 = (undefined4 *)FUN_04ea2364(local_11c0,1);
        uVar18 = FUN_0546065c(uVar18,*puVar12);
        uVar18 = FUN_054603b8(uVar18,&DAT_05593348);
        puVar12 = (undefined4 *)FUN_04ea2364(local_11c0,2);
        uVar18 = FUN_0546065c(uVar18,*puVar12);
        FUN_054603b8(uVar18,&DAT_05593350);
      }
      std::string::string(asStack_10f8,"selectGift");
      uVar18 = std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_1128,asStack_10f8);
      FUN_05462824(asStack_ce8,auStack_fc8);
      FUN_05474278(uVar18,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_10f8);
      nop();
      pvVar16 = (vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)
                &local_1160;
      std::string::string(asStack_10f8,"ecn");
      this_01 = (string *)
                std::
                map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                              *)amStack_1128,asStack_10f8);
      DString::DString((DString *)asStack_ce8,uVar1);
      pcVar9 = (char *)DString::c_str((DString *)asStack_ce8);
      std::string::append(this_01,pcVar9,(size_t)pvVar16);
      DString::~DString((DString *)asStack_ce8);
      std::string::~string(asStack_10f8);
      nop();
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
      iVar3 = PlayerInfo::GetMaterialNum(this_03,0x5b2d);
      if (iVar3 < (int)uVar1) {
        pUVar14 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar14 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar14,6);
          TodStringTranslate(L"[REVIVE_TIP]");
          std::string::string(asStack_ce8,"[PARTY_ASSIST_TICKETS_NOT_ENOUGH]");
          StringHelper::ToStringValue(asStack_ce8);
          std::string::~string(asStack_ce8);
          nop();
          UIMessageBox::SetMessage(pUVar14,(wstring *)asStack_10f8,(wstring *)&local_1160);
          std::string::string(asStack_ce8,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
          pIVar15 = (Image *)StringHelper::ToImage(asStack_ce8,false);
          UIMessageBox::SetBackground(pUVar14,pIVar15);
          std::string::~string(asStack_ce8);
          nop();
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,GoToPresentShop);
          Sexy::Delegate2<UIMessageBox*,int>::
          Delegate2<UIPartyAssistWishingPoolSelect,void(UIPartyAssistWishingPoolSelect::*)(UIMessageBox*,int)>
                    (aDStack_e58,asStack_ce8);
          UIMessageBox::SetCallback(pUVar14,aDStack_e58);
          UISingletonDialog<UIPartyAssistWishingPoolSelect>::CloseDialog();
          FUN_05476c50(asStack_10f8);
          FUN_05476c50((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)
                       &local_1160);
        }
      }
      else {
        TGASecretStore::TGASecretStore((TGASecretStore *)asStack_10f8);
        FUN_05462470(aDStack_e58,uVar2);
        pvVar16 = (vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)
                  &local_1160;
        std::string::string(asStack_ce8,"");
        FUN_05462980(aDStack_e58,asStack_ce8);
        std::string::~string(asStack_ce8);
        nop();
        DString::DString((DString *)asStack_ce8,1);
        pcVar9 = (char *)DString::c_str((DString *)asStack_ce8);
        std::string::append(asStack_10f8,pcVar9,(size_t)pvVar16);
        DString::~DString((DString *)asStack_ce8);
        uVar4 = PlayerInfo::GetMaterialNum(this_03,0x5b2d);
        __n = (size_t)uVar1;
        Sexy::StrFormat("%d,-%d,%d",asStack_ce8,(ulong)uVar4,__n,(ulong)(uVar4 - uVar1));
        FUN_05474278(auStack_10f0,asStack_ce8);
        std::string::~string(asStack_ce8);
        DString::DString((DString *)asStack_ce8,local_10b0);
        pcVar9 = (char *)DString::c_str((DString *)asStack_ce8);
        std::string::append(asStack_10e8,pcVar9,__n);
        DString::~DString((DString *)asStack_ce8);
        std::
        vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
        ::vector((vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
                  *)local_11a8,avStack_1090);
        pvVar10 = (vector *)FUN_04ea2444(local_11a8[0],0);
        std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>::vector
                  ((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)
                   local_1190,pvVar10);
        pvVar10 = (vector *)FUN_04ea2444(local_11a8[0],1);
        std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>::vector
                  ((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)
                   local_1178,pvVar10);
        pvVar10 = (vector *)FUN_04ea2444(local_11a8[0],2);
        std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>::vector
                  ((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)
                   &local_1160,pvVar10);
        piVar11 = (int *)FUN_04ea2364(local_11c0,0);
        puVar12 = (undefined4 *)FUN_04ea2464(local_1190[0],(long)*piVar11);
        uVar18 = FUN_0546065c(auStack_e48,*puVar12);
        uVar18 = FUN_054603b8(uVar18,&DAT_05593348);
        piVar11 = (int *)FUN_04ea2364(local_11c0,0);
        lVar13 = FUN_04ea2464(local_1190[0],(long)*piVar11);
        uVar18 = FUN_0546065c(uVar18,*(undefined4 *)(lVar13 + 4));
        uVar18 = FUN_054603b8(uVar18,&DAT_05594620);
        piVar11 = (int *)FUN_04ea2364(local_11c0,1);
        puVar12 = (undefined4 *)FUN_04ea2464(local_1178[0],(long)*piVar11);
        uVar18 = FUN_0546065c(uVar18,*puVar12);
        uVar18 = FUN_054603b8(uVar18,&DAT_05593348);
        piVar11 = (int *)FUN_04ea2364(local_11c0,1);
        lVar13 = FUN_04ea2464(local_1178[0],(long)*piVar11);
        uVar18 = FUN_0546065c(uVar18,*(undefined4 *)(lVar13 + 4));
        uVar18 = FUN_054603b8(uVar18,&DAT_05594620);
        piVar11 = (int *)FUN_04ea2364(local_11c0,2);
        puVar12 = (undefined4 *)FUN_04ea2464(CONCAT44(uStack_115c,local_1160),(long)*piVar11);
        uVar18 = FUN_0546065c(uVar18,*puVar12);
        uVar18 = FUN_054603b8(uVar18,&DAT_05593348);
        piVar11 = (int *)FUN_04ea2364(local_11c0,2);
        lVar13 = FUN_04ea2464(CONCAT44(uStack_115c,local_1160),(long)*piVar11);
        uVar18 = FUN_0546065c(uVar18,*(undefined4 *)(lVar13 + 4));
        FUN_054603b8(uVar18,&DAT_05594620);
        FUN_05462824(asStack_ce8,aDStack_e58);
        FUN_05474278(auStack_10d0,asStack_ce8);
        std::string::~string(asStack_ce8);
        this_04 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogPartyAssistData(this_04,(TGAPartyAssistData *)asStack_10f8);
        this_05 = (DNetwork *)DSingleton<DNetwork>::getInstance();
        _PacketId::_PacketId((_PacketId *)asStack_ce8);
        FUN_04ea37d8(afStack_1148,this);
        std::string::string(asStack_11c8,"[NET_CONNECTING]");
        DNetwork::requestMsg
                  (this_05,asStack_160,(map *)amStack_1128,30.0,(function *)afStack_1148,true,true,
                   asStack_11c8,0);
        std::string::~string(asStack_11c8);
        nop();
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_1148);
        _PacketId::~_PacketId((_PacketId *)asStack_ce8);
        std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>::~vector
                  ((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)
                   &local_1160);
        std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>::~vector
                  ((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)
                   local_1178);
        std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>::~vector
                  ((vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>> *)
                   local_1190);
        std::
        vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
        ::~vector((vector<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>,std::allocator<std::vector<PartyAssistWishBonusInfo,std::allocator<PartyAssistWishBonusInfo>>>>
                   *)local_11a8);
        FUN_054617bc(aDStack_e58);
        DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_10f8);
      }
      FUN_054617bc(auStack_fc8);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_1128);
      PartyAssistMainData::~PartyAssistMainData(aPStack_10c8);
LAB_04eadc2c:
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_11c0);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = (undefined8 *)FUN_04ea245c(uVar18,uVar17);
    local_1160 = PartyAssistWishingPoolSelectLine::GetSelectItemIndex
                           ((PartyAssistWishingPoolSelectLine *)*puVar5);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_11c0,&local_1160);
    if (local_1160 == -1) {
      pUVar14 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar14 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar14,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        TodStringTranslate(L"[PARTY_ASSIST_PLEASE_SET_WISH_FIRST]");
        UIMessageBox::SetMessage(pUVar14,(wstring *)aPStack_10c8,(wstring *)amStack_1128);
        std::string::string(asStack_ce8,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar15 = (Image *)StringHelper::ToImage(asStack_ce8,false);
        UIMessageBox::SetBackground(pUVar14,pIVar15);
        std::string::~string(asStack_ce8);
        nop();
        lVar13 = UIMessageBox::GetButtonCancel(pUVar14);
        thunk_FUN_05477b9c(lVar13 + 0xd8,asStack_10f8);
        FUN_05476c50((wstring *)aPStack_10c8);
        FUN_05476c50(asStack_10f8);
        FUN_05476c50((wstring *)amStack_1128);
      }
      goto LAB_04eadc2c;
    }
    uVar17 = uVar17 + 1;
  } while( true );
}


/* UIPartyAssistWishingPoolSelect::ButtonDepress(int) */

void __thiscall
UIPartyAssistWishingPoolSelect::ButtonDepress(UIPartyAssistWishingPoolSelect *this,int param_1)

{
  if (param_1 == 0x58) {
    UISingletonDialog<UIPartyAssistWishingPoolSelect>::CloseDialog();
    return;
  }
  if (param_1 == 0x29a) {
    SelectLottery(this);
    return;
  }
  return;
}


/* non-virtual thunk to UIPartyAssistWishingPoolSelect::ButtonDepress(int) */

void __thiscall
UIPartyAssistWishingPoolSelect::ButtonDepress(UIPartyAssistWishingPoolSelect *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

