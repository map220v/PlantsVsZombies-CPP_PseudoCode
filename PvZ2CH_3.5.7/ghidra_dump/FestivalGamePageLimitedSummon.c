// Class: FestivalGamePageLimitedSummon


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageLimitedSummon::GetLayoutName() */

void __thiscall FestivalGamePageLimitedSummon::GetLayoutName(FestivalGamePageLimitedSummon *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"FestivalGamePageLimitedSummon");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* FestivalGamePageLimitedSummon::~FestivalGamePageLimitedSummon() */

void __thiscall
FestivalGamePageLimitedSummon::~FestivalGamePageLimitedSummon(FestivalGamePageLimitedSummon *this)

{
  *(undefined ***)this = &PTR_GetClass_06721220;
  *(undefined **)(this + 0xd8) = &DAT_06721570;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<FestivalGamePageLimitedSummon>::~UISingletonDialog
            ((UISingletonDialog<FestivalGamePageLimitedSummon> *)this);
  return;
}


/* FestivalGamePageLimitedSummon::~FestivalGamePageLimitedSummon() */

void __thiscall
FestivalGamePageLimitedSummon::~FestivalGamePageLimitedSummon(FestivalGamePageLimitedSummon *this)

{
  ~FestivalGamePageLimitedSummon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageLimitedSummon::Update() */

void __thiscall FestivalGamePageLimitedSummon::Update(FestivalGamePageLimitedSummon *this)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  std::string::string(asStack_10,"UIText_ActivityTime");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    TimeUtil::GetTimeCountdown(3,0x2a66);
    TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,0);
    PuzzleTip::SetTip(pUVar1,asStack_10);
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalGamePageLimitedSummon::FestivalGamePageLimitedSummon() */

void __thiscall
FestivalGamePageLimitedSummon::FestivalGamePageLimitedSummon(FestivalGamePageLimitedSummon *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<FestivalGamePageLimitedSummon>::UISingletonDialog
            ((UISingletonDialog<FestivalGamePageLimitedSummon> *)this);
  this[0x131] = (FestivalGamePageLimitedSummon)0x0;
  *(undefined ***)this = &PTR_GetClass_06721220;
  *(undefined **)(this + 0xd8) = &DAT_06721570;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<FestivalGamePageLimitedSummon,void(FestivalGamePageLimitedSummon::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageLimitedSummon::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
FestivalGamePageLimitedSummon::onNotifyRefreshActivityList
          (FestivalGamePageLimitedSummon *this,bool param_1,set *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x131] != (FestivalGamePageLimitedSummon)0x0)) {
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
      UISingletonDialog<UILimitedSummon>::ShowDialog();
    }
  }
  this[0x131] = (FestivalGamePageLimitedSummon)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageLimitedSummon::ButtonDepress(int) */

void __thiscall
FestivalGamePageLimitedSummon::ButtonDepress(FestivalGamePageLimitedSummon *this,int param_1)

{
  char cVar1;
  int iVar2;
  UIMessageBox *this_00;
  Image *pIVar3;
  long lVar4;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  wchar_t local_b8 [2];
  wchar_t local_b0 [2];
  pair<wchar_t_const,wchar_t> apStack_a8 [8];
  string asStack_a0 [24];
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
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_00,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[CHRISTMAS_GOLDEN_EGG_CLOSED_TITLE]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_00,(wstring *)local_b0,(wstring *)local_b8);
        std::string::string(asStack_a0,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_a0,false);
        UIMessageBox::SetBackground(this_00,pIVar3);
        std::string::~string(asStack_a0);
        nop();
        lVar4 = UIMessageBox::GetButtonCancel(this_00);
        thunk_FUN_05477b9c(lVar4 + 0xd8,apStack_a8);
        FUN_05476c50(apStack_a8);
        FUN_05476c50((wstring *)local_b0);
        FUN_05476c50((wstring *)local_b8);
      }
    }
    else {
      this[0x131] = (FestivalGamePageLimitedSummon)0x1;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_a0);
      local_b0[0] = L'\x01';
      local_b8[0] = L'⩦';
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_a8,local_b8,local_b0);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_a0,
                 (pair *)apStack_a8);
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
      INetworkMsgProcess::RequestActivityList(this_02,(vector *)asStack_a0,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_a0);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FestivalGamePageLimitedSummon::ButtonDepress(int) */

void __thiscall
FestivalGamePageLimitedSummon::ButtonDepress(FestivalGamePageLimitedSummon *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageLimitedSummon::OnCreate() */

void __thiscall FestivalGamePageLimitedSummon::OnCreate(FestivalGamePageLimitedSummon *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  UIWidgetImage *this_00;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  ActiveItem aAStack_1a0 [8];
  undefined4 local_198;
  char local_188;
  LimitedSummonData aLStack_120 [276];
  ActivityTypeID aAStack_c [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_03ac12f8(local_198);
    if ((cVar2 != '\0') && (local_188 != '\0')) {
      LimitedSummonData::LimitedSummonData(aLStack_120);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_1a0,(RtObject *)aLStack_120);
      if (cVar2 != '\0') {
        std::string::string(asStack_1b8,"UImage_icon");
        this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_1b8);
        std::to_string<ActivityTypeID>(aAStack_c);
        std::operator+("IMAGE_UI_FESTIVALCENTER_FESTIVAL_GAME_LIMITED_SUMMON_",asStack_1b0);
        UIWidgetImage::SetImage(this_00,asStack_1a8);
        std::string::~string(asStack_1a8);
        std::string::~string(asStack_1b0);
        std::string::~string(asStack_1b8);
        nop();
      }
      LimitedSummonData::~LimitedSummonData(aLStack_120);
    }
    ActiveItem::~ActiveItem(aAStack_1a0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

