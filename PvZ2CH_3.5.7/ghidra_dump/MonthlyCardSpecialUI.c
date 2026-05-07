// Class: MonthlyCardSpecialUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardSpecialUI::GetLayoutName() */

void __thiscall MonthlyCardSpecialUI::GetLayoutName(MonthlyCardSpecialUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"MonthlyCardSpecial");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardSpecialUI::UpdateTimeCountDown() */

void __thiscall MonthlyCardSpecialUI::UpdateTimeCountDown(MonthlyCardSpecialUI *this)

{
  long lVar1;
  undefined1 auVar2 [12];
  undefined1 auStack_10 [8];
  long local_8;
  
  lVar1 = *(long *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  auVar2 = LawnApp::GetRealServerTime(gLawnApp);
  StringHelper::ToTimeString((StringHelper *)0x3,(float)(lVar1 - auVar2._0_8_),auVar2._8_4_);
  if (*(long *)(this + 0x138) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x138),auStack_10);
  }
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MonthlyCardSpecialUI::Update() */

void __thiscall MonthlyCardSpecialUI::Update(MonthlyCardSpecialUI *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimeCountDown(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardSpecialUI::ButtonDepress(int) */

void __thiscall MonthlyCardSpecialUI::ButtonDepress(MonthlyCardSpecialUI *this,int param_1)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1000) {
    UISingletonDialog<MonthlyCardSpecialUI>::CloseDialog();
  }
  else if (param_1 == 0x3e9) {
    UISingletonDialog<MonthlyCardSpecialUI>::CloseDialog();
    std::string::string(asStack_10,"OpenMonthlyCardUI");
    Cpp2Lua(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  else if ((param_1 == 0x3ea) &&
          (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
          this_00 != (UIMessageBox *)0x0)) {
    UIMessageBox::SetShowType(this_00,4);
    TodStringTranslate(L"[MONTHLY_CARD_SPECIAL_TIPS_TITLE]");
    TodStringTranslate(L"[MONTHLY_CARD_SPECIAL_TIPS]");
    UIMessageBox::SetMessage(this_00,awStack_18,awStack_20);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_10);
    nop();
    TodStringTranslate(L"[BUTTON_OK]");
    lVar2 = UIMessageBox::GetButtonCancel(this_00);
    thunk_FUN_05477b9c(lVar2 + 0xd8,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to MonthlyCardSpecialUI::ButtonDepress(int) */

void __thiscall MonthlyCardSpecialUI::ButtonDepress(MonthlyCardSpecialUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* MonthlyCardSpecialUI::MonthlyCardSpecialUI() */

void __thiscall MonthlyCardSpecialUI::MonthlyCardSpecialUI(MonthlyCardSpecialUI *this)

{
  undefined *puVar1;
  float fVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<MonthlyCardSpecialUI>::UISingletonDialog
            ((UISingletonDialog<MonthlyCardSpecialUI> *)this);
  *(undefined ***)this = &PTR_GetClass_069c0220;
  *(undefined **)(this + 0xd8) = &DAT_069c0570;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  *(undefined8 *)(this + 0x138) = 0;
  std::vector<MonthlyCardItemWidget*,std::allocator<MonthlyCardItemWidget*>>::clear
            ((vector<MonthlyCardItemWidget*,std::allocator<MonthlyCardItemWidget*>> *)(this + 0x148)
            );
  fVar2 = (float)PVZ_EOT();
  *(long *)(this + 0x140) = (long)fVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<MonthlyCardSpecialUI,void(MonthlyCardSpecialUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* MonthlyCardSpecialUI::~MonthlyCardSpecialUI() */

void __thiscall MonthlyCardSpecialUI::~MonthlyCardSpecialUI(MonthlyCardSpecialUI *this)

{
  *(undefined ***)this = &PTR_GetClass_069c0220;
  *(undefined **)(this + 0xd8) = &DAT_069c0570;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<MonthlyCardItemWidget*,std::allocator<MonthlyCardItemWidget*>>::~vector
            ((vector<MonthlyCardItemWidget*,std::allocator<MonthlyCardItemWidget*>> *)(this + 0x148)
            );
  UISingletonDialog<MonthlyCardSpecialUI>::~UISingletonDialog
            ((UISingletonDialog<MonthlyCardSpecialUI> *)this);
  return;
}


/* MonthlyCardSpecialUI::~MonthlyCardSpecialUI() */

void __thiscall MonthlyCardSpecialUI::~MonthlyCardSpecialUI(MonthlyCardSpecialUI *this)

{
  ~MonthlyCardSpecialUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardSpecialUI::UpdateUI(MonthlyCardSpecialData const&) */

void __thiscall
MonthlyCardSpecialUI::UpdateUI(MonthlyCardSpecialUI *this,MonthlyCardSpecialData *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  MonthlyCardItemWidget *pMVar4;
  undefined8 uVar5;
  MonthlyCardSpecialData aMStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x148);
    uVar2 = FUN_04db4858(uVar5,*(undefined8 *)(this + 0x150));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_04db4864(uVar5,uVar3);
    pMVar4 = (MonthlyCardItemWidget *)*puVar1;
    MonthlyCardSpecialData::MonthlyCardSpecialData(aMStack_38,param_1);
    MonthlyCardItemWidget::UpdateUI(pMVar4,aMStack_38);
    MonthlyCardSpecialData::~MonthlyCardSpecialData(aMStack_38);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardSpecialUI::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
MonthlyCardSpecialUI::OnNotifyRefreshActivityList
          (MonthlyCardSpecialUI *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8 [6];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_c4 = 0x2a3f;
    local_c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_c4);
    local_b8[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_c0,(rbtree_iterator *)local_b8);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      MonthlyCardSpecialData::MonthlyCardSpecialData((MonthlyCardSpecialData *)local_b8);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)local_b8);
      if (cVar2 != '\0') {
        UpdateUI(this,(MonthlyCardSpecialData *)local_b8);
      }
      MonthlyCardSpecialData::~MonthlyCardSpecialData((MonthlyCardSpecialData *)local_b8);
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardSpecialUI::InitView() */

void __thiscall MonthlyCardSpecialUI::InitView(MonthlyCardSpecialUI *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UIWidgetImage *pUVar10;
  long lVar11;
  UIWidgetText *pUVar12;
  long lVar13;
  undefined8 uVar14;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  MonthlyCardSpecialData *pMVar15;
  MonthlyCardItemWidget *pMVar16;
  char *__s;
  TGALogMgr *pTVar17;
  string *__n;
  code *pcVar18;
  int iVar19;
  MonthlyCardItemWidget *local_80 [3];
  MonthlyCardSpecialData aMStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"Background_0");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  (**(code **)(*(long *)pUVar10 + 0x198))
            (pUVar10,(*(int *)(gLawnApp + 0x724) - *(int *)(pUVar10 + 0x50)) / 2,
             *(undefined4 *)(pUVar10 + 0x4c),*(int *)(pUVar10 + 0x50),
             *(undefined4 *)(pUVar10 + 0x54));
  std::string::string(asStack_38,"ItemBackground");
  lVar11 = UI::Dialog::GetWidget((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"ActivityCountDown");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
  *(UIWidgetText **)(this + 0x138) = pUVar12;
  std::string::~string(asStack_38);
  nop();
  lVar13 = Sexy::LazySingleton<MonthlyCardSpecialManager>::GetInstance();
  uVar14 = FUN_04db46f4(*(undefined8 *)(lVar13 + 0x38));
  *(undefined8 *)(this + 0x140) = uVar14;
  iVar4 = FUN_04db4cd8(5);
  iVar5 = FUN_04db46ac(*(undefined4 *)(lVar11 + 0x50));
  iVar6 = FUN_04db46b0(*(undefined4 *)(lVar11 + 0x54));
  iVar7 = FUN_04db46a4(*(undefined4 *)(lVar11 + 0x48));
  iVar19 = *(int *)(pUVar10 + 0x48);
  iVar8 = FUN_04db46a8(*(undefined4 *)(lVar11 + 0x4c));
  uVar2 = iVar4 * -5 + iVar5;
  iVar5 = *(int *)(pUVar10 + 0x4c);
  __n = (string *)(ulong)(uVar2 + 3);
  uVar3 = uVar2 + 3;
  if (-1 < (int)uVar2) {
    uVar3 = uVar2;
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<MonthlyCardSpecialManager>::GetInstance();
  pMVar15 = (MonthlyCardSpecialData *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end(this_00);
  MonthlyCardSpecialData::MonthlyCardSpecialData(aMStack_68,pMVar15);
  iVar9 = FUN_04db486c(local_50,local_48);
  std::vector<MonthlyCardItemWidget*,std::allocator<MonthlyCardItemWidget*>>::clear
            ((vector<MonthlyCardItemWidget*,std::allocator<MonthlyCardItemWidget*>> *)(this + 0x148)
            );
  if (0 < iVar9) {
    iVar19 = iVar7 + iVar19 + iVar4;
    iVar7 = 0;
    do {
      pMVar16 = ::operator_new(0x128);
      MonthlyCardItemWidget::MonthlyCardItemWidget(pMVar16,this);
      local_80[0] = pMVar16;
      (**(code **)(*(long *)pMVar16 + 0x198))
                (pMVar16,iVar19,iVar8 + iVar5 + iVar4,(int)uVar3 >> 2,iVar6 + iVar4 * -2);
      pMVar16 = local_80[0];
      MonthlyCardSpecialData::MonthlyCardSpecialData
                ((MonthlyCardSpecialData *)asStack_38,aMStack_68);
      iVar1 = iVar7 + 1;
      __n = asStack_38;
      MonthlyCardItemWidget::InitView(pMVar16,iVar7);
      MonthlyCardSpecialData::~MonthlyCardSpecialData((MonthlyCardSpecialData *)asStack_38);
      pcVar18 = *(code **)(*(long *)this + 0x60);
      local_80[0][0x59] = (MonthlyCardItemWidget)0x0;
      (*pcVar18)(this,local_80[0]);
      std::vector<MonthlyCardItemWidget*,std::allocator<MonthlyCardItemWidget*>>::push_back
                ((vector<MonthlyCardItemWidget*,std::allocator<MonthlyCardItemWidget*>> *)
                 (this + 0x148),local_80);
      iVar19 = iVar19 + iVar4 + ((int)uVar3 >> 2);
      iVar7 = iVar1;
    } while (iVar1 != iVar9);
  }
  TGATenYearsData::TGATenYearsData((TGATenYearsData *)local_80);
  DString::DString((DString *)asStack_38,1);
  __s = (char *)DString::c_str((DString *)asStack_38);
  std::string::append((string *)local_80,__s,(size_t)__n);
  DString::~DString((DString *)asStack_38);
  pTVar17 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  DownloadUnit::DownloadUnit((DownloadUnit *)asStack_38,(DownloadUnit *)local_80);
  TGALogMgr::LogMonthlyCardSpecial(pTVar17,asStack_38);
  Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)asStack_38);
  Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)local_80);
  MonthlyCardSpecialData::~MonthlyCardSpecialData(aMStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MonthlyCardSpecialUI::OnCreate() */

undefined4 __thiscall MonthlyCardSpecialUI::OnCreate(MonthlyCardSpecialUI *this)

{
  undefined4 uVar1;
  
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return uVar1;
}

