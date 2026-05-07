// Class: CommonUIManager


/* CommonUIManager::CloseBonus() */

void __thiscall CommonUIManager::CloseBonus(CommonUIManager *this)

{
  if (*(long *)(this + 8) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 8));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonUIManager::~CommonUIManager() */

void __thiscall CommonUIManager::~CommonUIManager(CommonUIManager *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__CommonUIManager_0698ca90;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NationalCenter");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::LazySingleton<CommonUIManager>::~LazySingleton((LazySingleton<CommonUIManager> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CommonUIManager::~CommonUIManager() */

void __thiscall CommonUIManager::~CommonUIManager(CommonUIManager *this)

{
  ~CommonUIManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonUIManager::CommonUIManager() */

void __thiscall CommonUIManager::CommonUIManager(CommonUIManager *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<CommonUIManager>::LazySingleton((LazySingleton<CommonUIManager> *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__CommonUIManager_0698ca90;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NationalCenter");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CommonUIManager::OnCheatingCheckCallback(UIMessageBox*, int) */

void CommonUIManager::OnCheatingCheckCallback(UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  Android::Device::ExitApp();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonUIManager::ShowCheatingCheckWarning(int) */

void __thiscall CommonUIManager::ShowCheatingCheckWarning(CommonUIManager *this,int param_1)

{
  uint uVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  long lVar3;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,4);
    TodStringTranslate(L"[PVZ2_CHEATING_CHECK_TITLE]");
    uVar1 = param_1;
    if (4 < param_1) {
      uVar1 = 4;
    }
    Sexy::StrFormat(L"[PVZ2_CHEATING_WARNING_%d]",awStack_50,(ulong)uVar1);
    TodStringTranslate(awStack_50);
    FUN_05476c50(awStack_50);
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar2 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar2);
    std::string::~string((string *)awStack_50);
    nop();
    TodStringTranslate(L"[BUTTON_OK]");
    lVar3 = UIMessageBox::GetButtonCancel(this_00);
    thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_58);
    if (3 < param_1) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnCheatingCheckCallback);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<CommonUIManager,void(CommonUIManager::*)(UIMessageBox*,int)>(aDStack_38,awStack_50);
      UIMessageBox::SetCallback(this_00,aDStack_38);
    }
    FUN_05476c50(auStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonUIManager::ShowBonus(std::vector<LotteryBonus, std::allocator<LotteryBonus> > const&,
   std::vector<LotteryBonus, std::allocator<LotteryBonus> > const&, Sexy::Delegate0) */

void __thiscall
CommonUIManager::ShowBonus(CommonUIManager *this,vector *param_1,vector *param_2,Delegate0 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  CommonBonusUI *pCVar3;
  long lVar4;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 8) == 0) {
    pCVar3 = ::operator_new(0x250);
    CommonBonusUI::CommonBonusUI(pCVar3);
    *(CommonBonusUI **)(this + 8) = pCVar3;
    CommonBonusUI::SetAward(pCVar3,param_1);
    CommonBonusUI::SetChestAward(*(CommonBonusUI **)(this + 8),param_2);
    pCVar3 = *(CommonBonusUI **)(this + 8);
    Sexy::Delegate0::Delegate0(aDStack_38,param_4);
    CommonBonusUI::SetSubmitDelegate(pCVar3,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 8));
  }
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 8));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 8));
  lVar4 = *(long *)(this + 8);
  if (lVar4 != 0) {
    uVar2 = operator|(0x10,0x20);
    uVar2 = operator|(uVar2,0x1000);
    uVar1 = operator|(uVar2,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e99999a,lVar4,uVar1);
    (**(code **)(**(long **)(this + 8) + 0x310))(*(long **)(this + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonUIManager::ShowBonusRedPachet(std::vector<LotteryBonus, std::allocator<LotteryBonus> >
   const&) */

void __thiscall CommonUIManager::ShowBonusRedPachet(CommonUIManager *this,vector *param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  GAME_ITEM_INFO aGStack_38 [8];
  int local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  local_a0 = FUN_04c5b144(*(undefined8 *)param_1);
  local_98 = FUN_04c5b194(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    ProfileChangeItemAmount(*piVar3,piVar3[1],false);
    local_90 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          amStack_68,(int *)aGStack_38);
    local_88 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_68);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_90,(rbtree_iterator *)&local_88);
    if (bVar1) {
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_90);
      *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + local_30;
    }
    else {
      piVar3 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_68,(int *)aGStack_38);
      *piVar3 = local_30;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_80,(int *)aGStack_38);
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_a0);
  }
  UIRedPacketResult::create((map *)amStack_68,(vector *)avStack_80,true);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_80);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

