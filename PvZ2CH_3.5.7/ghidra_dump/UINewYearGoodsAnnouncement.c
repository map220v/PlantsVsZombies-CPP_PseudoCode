// Class: UINewYearGoodsAnnouncement


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoodsAnnouncement::GetLayoutName() */

void __thiscall UINewYearGoodsAnnouncement::GetLayoutName(UINewYearGoodsAnnouncement *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewYearGoodsAnnouncement");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewYearGoodsAnnouncement::~UINewYearGoodsAnnouncement() */

void __thiscall
UINewYearGoodsAnnouncement::~UINewYearGoodsAnnouncement(UINewYearGoodsAnnouncement *this)

{
  *(undefined ***)this = &PTR_GetClass_066e44b0;
  *(undefined **)(this + 0xd8) = &DAT_066e4800;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<UINewYearGoodsAnnouncement>::~UISingletonDialog
            ((UISingletonDialog<UINewYearGoodsAnnouncement> *)this);
  return;
}


/* UINewYearGoodsAnnouncement::~UINewYearGoodsAnnouncement() */

void __thiscall
UINewYearGoodsAnnouncement::~UINewYearGoodsAnnouncement(UINewYearGoodsAnnouncement *this)

{
  ~UINewYearGoodsAnnouncement(this);
  AK::FreeHook(this);
  return;
}


/* UINewYearGoodsAnnouncement::UINewYearGoodsAnnouncement() */

void __thiscall
UINewYearGoodsAnnouncement::UINewYearGoodsAnnouncement(UINewYearGoodsAnnouncement *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UINewYearGoodsAnnouncement>::UISingletonDialog
            ((UISingletonDialog<UINewYearGoodsAnnouncement> *)this);
  *(undefined ***)this = &PTR_GetClass_066e44b0;
  *(undefined **)(this + 0xd8) = &DAT_066e4800;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UINewYearGoodsAnnouncement,void(UINewYearGoodsAnnouncement::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoodsAnnouncement::ButtonDepress(int) */

void __thiscall
UINewYearGoodsAnnouncement::ButtonDepress(UINewYearGoodsAnnouncement *this,int param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x21) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    local_30[1] = 1;
    local_30[0] = L'⩬';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
               (pair *)apStack_28);
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UINewYearGoodsAnnouncement>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewYearGoodsAnnouncement::ButtonDepress(int) */

void __thiscall
UINewYearGoodsAnnouncement::ButtonDepress(UINewYearGoodsAnnouncement *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoodsAnnouncement::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UINewYearGoodsAnnouncement::OnNotifyRefreshActivityList
          (UINewYearGoodsAnnouncement *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_9c = 0x2a6c;
    local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_039a549c(local_80);
      if ((cVar2 != '\0') && (local_70 != '\0')) {
        UISingletonDialog<UINewYearGoods>::ShowDialog();
        UISingletonDialog<UINewYearGoodsAnnouncement>::CloseDialog();
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

