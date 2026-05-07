// Class: GenericFestivalPage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GenericFestivalPage::GetLayoutName() */

void __thiscall GenericFestivalPage::GetLayoutName(GenericFestivalPage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIGenericFestivalPage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* GenericFestivalPage::~GenericFestivalPage() */

void __thiscall GenericFestivalPage::~GenericFestivalPage(GenericFestivalPage *this)

{
  *(undefined ***)this = &PTR_GetClass_06722c30;
  *(undefined **)(this + 0xd8) = &DAT_06722f80;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<GenericFestivalPage>::~UISingletonDialog
            ((UISingletonDialog<GenericFestivalPage> *)this);
  return;
}


/* GenericFestivalPage::~GenericFestivalPage() */

void __thiscall GenericFestivalPage::~GenericFestivalPage(GenericFestivalPage *this)

{
  ~GenericFestivalPage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GenericFestivalPage::setData(int, bool) */

void __thiscall GenericFestivalPage::setData(GenericFestivalPage *this,int param_1,bool param_2)

{
  UIWidgetImage *this_00;
  string asStack_10 [8];
  long local_8;
  
  this[0x138] = (GenericFestivalPage)param_2;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x134) = param_1;
  if (param_1 == 0x2a4f) {
    std::string::string(asStack_10,"UImage_Bg");
    this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (this_00 != (UIWidgetImage *)0x0) {
      std::string::string(asStack_10,"IMAGE_UI_FESTIVALCENTER_FESTIVAL_CALLOFWISH");
      UIWidgetImage::SetImage(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GenericFestivalPage::Update() */

void __thiscall GenericFestivalPage::Update(GenericFestivalPage *this)

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
    TimeUtil::GetTimeCountdown(3,*(int *)(this + 0x134));
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


/* GenericFestivalPage::doAction() */

void __thiscall GenericFestivalPage::doAction(GenericFestivalPage *this)

{
  if (*(int *)(this + 0x134) != 0x2a4f) {
    return;
  }
  UISingletonDialog<UICallofWish>::ShowDialog();
  return;
}


/* GenericFestivalPage::GenericFestivalPage() */

void __thiscall GenericFestivalPage::GenericFestivalPage(GenericFestivalPage *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<GenericFestivalPage>::UISingletonDialog
            ((UISingletonDialog<GenericFestivalPage> *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined ***)this = &PTR_GetClass_06722c30;
  *(undefined **)(this + 0xd8) = &DAT_06722f80;
  this[0x138] = (GenericFestivalPage)0x0;
  this[0x139] = (GenericFestivalPage)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<GenericFestivalPage,void(GenericFestivalPage::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GenericFestivalPage::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
GenericFestivalPage::onNotifyRefreshActivityList
          (GenericFestivalPage *this,bool param_1,set *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x139] != (GenericFestivalPage)0x0)) {
    uVar2 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar3 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_18 = std::find<std::_Rb_tree_const_iterator<int>,int>(uVar2,uVar3,this + 0x134);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      doAction(this);
    }
  }
  this[0x139] = (GenericFestivalPage)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GenericFestivalPage::ButtonDepress(int) */

void __thiscall GenericFestivalPage::ButtonDepress(GenericFestivalPage *this,int param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_2c;
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xc9) {
    if (this[0x138] == (GenericFestivalPage)0x0) {
      doAction(this);
    }
    else {
      this[0x139] = (GenericFestivalPage)0x1;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      local_2c = L'\x01';
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                (apStack_28,(wchar_t *)(this + 0x134),&local_2c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
                 (pair *)apStack_28);
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
      INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GenericFestivalPage::ButtonDepress(int) */

void __thiscall GenericFestivalPage::ButtonDepress(GenericFestivalPage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

