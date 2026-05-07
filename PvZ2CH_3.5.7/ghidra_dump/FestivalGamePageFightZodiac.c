// Class: FestivalGamePageFightZodiac


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageFightZodiac::ShowErrorDialog() */

void FestivalGamePageFightZodiac::ShowErrorDialog(void)

{
  UIMessageBox *this;
  Image *pIVar1;
  long lVar2;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[CHRISTMAS_GOLDEN_EGG_CLOSED_TITLE]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this,awStack_20,awStack_28);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    lVar2 = UIMessageBox::GetButtonCancel(this);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_18);
    FUN_05476c50(auStack_18);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageFightZodiac::GetLayoutName() */

void __thiscall FestivalGamePageFightZodiac::GetLayoutName(FestivalGamePageFightZodiac *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFestivalGamePageFightZodiac");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* FestivalGamePageFightZodiac::OnCreate() */

char __thiscall FestivalGamePageFightZodiac::OnCreate(FestivalGamePageFightZodiac *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x348))(this);
  }
  return cVar1;
}


/* FestivalGamePageFightZodiac::~FestivalGamePageFightZodiac() */

void __thiscall
FestivalGamePageFightZodiac::~FestivalGamePageFightZodiac(FestivalGamePageFightZodiac *this)

{
  *(undefined ***)this = &PTR_GetClass_06720ad0;
  *(undefined **)(this + 0xd8) = &DAT_06720e38;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x140);
  UISingletonDialog<FestivalGamePageFightZodiac>::~UISingletonDialog
            ((UISingletonDialog<FestivalGamePageFightZodiac> *)this);
  return;
}


/* FestivalGamePageFightZodiac::~FestivalGamePageFightZodiac() */

void __thiscall
FestivalGamePageFightZodiac::~FestivalGamePageFightZodiac(FestivalGamePageFightZodiac *this)

{
  ~FestivalGamePageFightZodiac(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageFightZodiac::InitView() */

void __thiscall FestivalGamePageFightZodiac::InitView(FestivalGamePageFightZodiac *this)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_ActivityTime");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x138) = pUVar1;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalGamePageFightZodiac::showFestivalGameEntrance() */

UIFightZodiac * FestivalGamePageFightZodiac::showFestivalGameEntrance(void)

{
  UIFightZodiac *pUVar1;
  char cVar2;
  UIFightZodiac *pUVar3;
  
  pUVar1 = UISingletonDialog<UIFightZodiac>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UIFightZodiac>::m_pInstance == (UIFightZodiac *)0x0) {
    pUVar3 = ::operator_new(0x1b8);
    UIFightZodiac::UIFightZodiac(pUVar3);
    UISingletonDialog<UIFightZodiac>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UIFightZodiac>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UIFightZodiac>::m_pInstance != (UIFightZodiac *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UIFightZodiac>::m_pInstance + 0x18))();
      }
      UISingletonDialog<UIFightZodiac>::m_pInstance = (UIFightZodiac *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageFightZodiac::FestivalGamePageFightZodiac() */

void __thiscall
FestivalGamePageFightZodiac::FestivalGamePageFightZodiac(FestivalGamePageFightZodiac *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<FestivalGamePageFightZodiac>::UISingletonDialog
            ((UISingletonDialog<FestivalGamePageFightZodiac> *)this);
  this[0x131] = (FestivalGamePageFightZodiac)0x0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_06720ad0;
  *(undefined **)(this + 0xd8) = &DAT_06720e38;
  FUN_05478178(this + 0x140,&DAT_056f11a8,&local_20);
  nop();
  Sexy::Color::Color((Color *)(this + 0x148),1);
  *(undefined4 *)(this + 0x158) = 0x2a45;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<FestivalGamePageFightZodiac,void(FestivalGamePageFightZodiac::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageFightZodiac::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
FestivalGamePageFightZodiac::onNotifyRefreshActivityList
          (FestivalGamePageFightZodiac *this,bool param_1,set *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x131] != (FestivalGamePageFightZodiac)0x0)) {
    uVar2 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar3 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_18 = std::find<std::_Rb_tree_const_iterator<int>,int>(uVar2,uVar3);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      (**(code **)(*(long *)this + 0x340))(this);
    }
  }
  this[0x131] = (FestivalGamePageFightZodiac)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageFightZodiac::Update() */

void __thiscall FestivalGamePageFightZodiac::Update(FestivalGamePageFightZodiac *this)

{
  FestivalGamePageFightZodiac *pFVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  wstring awStack_90 [8];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  iVar2 = ActiveItem::GetLeftDays(aAStack_88);
  lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar3 = 0x15180 - (lVar3 + 0x1c200) % 0x15180;
  if (iVar2 < 1) {
    iVar2 = (int)(lVar3 / 0x3c);
    Sexy::StrFormat(L"%02d: %02d: %02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar2 + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar3 + iVar2 * -0x3c));
    FUN_054766c8(this + 0x140,awStack_90);
    FUN_05476c50(awStack_90);
  }
  else {
    pFVar1 = this + 0x140;
    FUN_05478178(awStack_90,L"[TOTAL_LOGIN_DAYS]",auStack_a0);
    TodReplaceNumberString(awStack_90,L"{DAY_COUNT}",iVar2);
    FUN_05476c50(awStack_90);
    nop();
    Sexy::StrFormat(L"%02d:%02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)((int)(lVar3 / 0x3c) + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c));
    FUN_054766c8(pFVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_0342e660(awStack_90,auStack_98,pFVar1);
    FUN_054766c8(pFVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_05476c50(auStack_98);
  }
  if (*(long *)(this + 0x138) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x138),this + 0x140);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageFightZodiac::ButtonDepress(int) */

void __thiscall
FestivalGamePageFightZodiac::ButtonDepress(FestivalGamePageFightZodiac *this,int param_1)

{
  char cVar1;
  int iVar2;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_b0 [2];
  pair<wchar_t_const,wchar_t> apStack_a8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f8) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03ac12f8(local_80);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      (**(code **)(*(long *)this + 0x350))(this);
    }
    else {
      this[0x131] = (FestivalGamePageFightZodiac)0x1;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a0);
      local_b0[1] = 1;
      local_b0[0] = *(wchar_t *)(this + 0x158);
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_a8,local_b0,local_b0 + 1)
      ;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_a0,
                 (pair *)apStack_a8);
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
      INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_a0,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_a0);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FestivalGamePageFightZodiac::ButtonDepress(int) */

void __thiscall
FestivalGamePageFightZodiac::ButtonDepress(FestivalGamePageFightZodiac *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

