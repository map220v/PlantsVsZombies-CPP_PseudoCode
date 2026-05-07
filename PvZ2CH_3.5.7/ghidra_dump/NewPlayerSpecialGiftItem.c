// Class: NewPlayerSpecialGiftItem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerSpecialGiftItem::Refresh() */

void __thiscall NewPlayerSpecialGiftItem::Refresh(NewPlayerSpecialGiftItem *this)

{
  int *piVar1;
  wchar_t *pwVar2;
  PVZ2UIButton *pPVar3;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) < *(int *)(this + 0x140)) {
    piVar1 = (int *)FUN_03446a08(*(undefined8 *)(this + 0x128),(long)*(int *)(this + 0xe0));
    if ((*piVar1 == 1) && (*(int *)(this + 0x144) != 0)) {
      this[0xe4] = (NewPlayerSpecialGiftItem)0x1;
      (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),0);
      pPVar3 = *(PVZ2UIButton **)(this + 0xf0);
      TodStringTranslate(L"[BUTTON_ACCESSORY_LINK]");
      PVZ2UIButton::SetLabelText(pPVar3,awStack_10);
      FUN_05476c50(awStack_10);
      goto LAB_03447f6c;
    }
  }
  this[0xe4] = (NewPlayerSpecialGiftItem)0x0;
  (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
  piVar1 = (int *)FUN_03446a08(*(undefined8 *)(this + 0x128),(long)*(int *)(this + 0xe0));
  if (*piVar1 == 2) {
    pPVar3 = *(PVZ2UIButton **)(this + 0xf0);
    pwVar2 = L"[DAILY_ACHIEVEMENT_GOT]";
  }
  else {
    pPVar3 = *(PVZ2UIButton **)(this + 0xf0);
    pwVar2 = L"[BUTTON_ACCESSORY_LINK]";
  }
  TodStringTranslate(pwVar2);
  PVZ2UIButton::SetLabelText(pPVar3,awStack_10);
  FUN_05476c50(awStack_10);
LAB_03447f6c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerSpecialGiftItem::Draw(Sexy::Graphics*) */

void __thiscall NewPlayerSpecialGiftItem::Draw(NewPlayerSpecialGiftItem *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0aa8);
  Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar3 = FUN_03447a18(10);
  iVar4 = FUN_03447a18(0);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_03447a18(0x23);
  Sexy::Insets::Insets(aIStack_28,iVar3,iVar4,iVar1 - iVar3,iVar5);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_18;
  Sexy::Color::Color(aCStack_18,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar2,aCStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPlayerSpecialGiftItem::NewPlayerSpecialGiftItem() */

void __thiscall NewPlayerSpecialGiftItem::NewPlayerSpecialGiftItem(NewPlayerSpecialGiftItem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xe4] = (NewPlayerSpecialGiftItem)0x0;
  *(undefined ***)this = &PTR_GetClass_06633850;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06633b78;
  FUN_05476574(this + 0xe8);
  *(undefined8 *)(this + 0xf0) = 0;
  NewPlayerSpecialGiftData::NewPlayerSpecialGiftData((NewPlayerSpecialGiftData *)(this + 0xf8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<NewPlayerSpecialGiftItem,void(NewPlayerSpecialGiftItem::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* NewPlayerSpecialGiftItem::~NewPlayerSpecialGiftItem() */

void __thiscall NewPlayerSpecialGiftItem::~NewPlayerSpecialGiftItem(NewPlayerSpecialGiftItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06633850;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06633b78;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  NewPlayerSpecialGiftData::~NewPlayerSpecialGiftData((NewPlayerSpecialGiftData *)(this + 0xf8));
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewPlayerSpecialGiftItem::~NewPlayerSpecialGiftItem() */

void __thiscall NewPlayerSpecialGiftItem::~NewPlayerSpecialGiftItem(NewPlayerSpecialGiftItem *this)

{
  ~NewPlayerSpecialGiftItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerSpecialGiftItem::Init(int, bool, std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > const&, NewPlayerSpecialGiftData) */

void __thiscall
NewPlayerSpecialGiftItem::Init
          (NewPlayerSpecialGiftItem *this,int param_1,NewPlayerSpecialGiftItem param_2,
          undefined8 *param_3,NewPlayerSpecialGiftData *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  ulong uVar7;
  PVZ2UIButton *pPVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auStack_90 [8];
  wstring awStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NewPlayerSpecialGiftData::operator=((NewPlayerSpecialGiftData *)(this + 0xf8),param_5);
  this[0xe4] = param_2;
  *(int *)(this + 0xe0) = param_1;
  TodStringTranslate(L"[HAPPY_VASE_BREAKER_LOGIN]");
  uVar10 = 0;
  FUN_05478178(awStack_80,L"[THE_N_DAY]",auStack_90);
  TodReplaceNumberString(awStack_80,L"{NUM}",param_1 + 1);
  std::operator+(awStack_88,awStack_78);
  FUN_054766c8(this + 0xe8,aPStack_40);
  FUN_05476c50(aPStack_40);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  nop();
  FUN_05476c50(awStack_88);
  while( true ) {
    uVar12 = *param_3;
    uVar7 = FUN_03446990(uVar12,param_3[1]);
    if (uVar7 <= uVar10) break;
    piVar6 = (int *)FUN_034469cc(uVar12,uVar10);
    plVar11 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,piVar6[1],true);
    iVar1 = FUN_03447a18(10);
    iVar2 = FUN_03447a18(0x37);
    uVar3 = FUN_03447a18(0x28);
    uVar4 = FUN_03447a18(0x32);
    iVar9 = (int)uVar10;
    uVar10 = uVar10 + 1;
    (**(code **)(*plVar11 + 0x198))(plVar11,iVar1 + iVar2 * iVar9,uVar3,uVar4,uVar4);
    (**(code **)(*(long *)this + 0x60))(this,plVar11);
  }
  TodStringTranslate(L"[BUTTON_ACCESSORY_LINK]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar8,0x458,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar8;
  FUN_05476c50(awStack_78);
  pPVar8 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa0c40,5);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06aa0e28,5);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar11 = *(long **)(this + 0xf0);
  iVar2 = FUN_03447a18(0x5a);
  iVar1 = *(int *)(this + 0x50);
  uVar3 = FUN_03447a18(0x32);
  uVar4 = FUN_03447a18(0x50);
  uVar5 = FUN_03447a18(0x28);
  (**(code **)(*plVar11 + 0x198))(plVar11,iVar1 - iVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  Refresh(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerSpecialGiftItem::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
NewPlayerSpecialGiftItem::onNotifyRefreshActivityList
          (NewPlayerSpecialGiftItem *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar4 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar5 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_98 = std::find<std::_Rb_tree_const_iterator<int>,int>(uVar4,uVar5);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_03446770(local_80);
      if (((cVar2 != '\0') && (local_70 != '\0')) &&
         (cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0xf8)), cVar2 != '\0'
         )) {
        Refresh(this);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerSpecialGiftItem::ButtonDepress(int) */

void __thiscall NewPlayerSpecialGiftItem::ButtonDepress(NewPlayerSpecialGiftItem *this,int param_1)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [3032];
  string asStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x458) {
    __n = auStack_d48;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"gift_id");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,*(int *)(this + 0xe0));
    __s = (char *)DString::c_str(aDStack_ce8);
    std::string::append(this_00,__s,(size_t)__n);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_03447960(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_110,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewPlayerSpecialGiftItem::ButtonDepress(int) */

void __thiscall NewPlayerSpecialGiftItem::ButtonDepress(NewPlayerSpecialGiftItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

