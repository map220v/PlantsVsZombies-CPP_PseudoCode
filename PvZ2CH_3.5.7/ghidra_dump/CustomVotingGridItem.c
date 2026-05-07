// Class: CustomVotingGridItem


/* CustomVotingGridItem::~CustomVotingGridItem() */

void __thiscall CustomVotingGridItem::~CustomVotingGridItem(CustomVotingGridItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06707b30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06707e58;
  LimitGroupBuyGridItem::~LimitGroupBuyGridItem((LimitGroupBuyGridItem *)this);
  return;
}


/* CustomVotingGridItem::~CustomVotingGridItem() */

void __thiscall CustomVotingGridItem::~CustomVotingGridItem(CustomVotingGridItem *this)

{
  ~CustomVotingGridItem(this);
  AK::FreeHook(this);
  return;
}


/* CustomVotingGridItem::CustomVotingGridItem() */

void __thiscall CustomVotingGridItem::CustomVotingGridItem(CustomVotingGridItem *this)

{
  LimitGroupBuyGridItem::LimitGroupBuyGridItem((LimitGroupBuyGridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06707b30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06707e58;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomVotingGridItem::Init(CustomVotingItemData const&) */

void __thiscall CustomVotingGridItem::Init(CustomVotingGridItem *this,CustomVotingItemData *param_1)

{
  int iVar1;
  undefined1 auStack_38 [8];
  wstring awStack_30 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_20 = *(undefined4 *)param_1;
  local_8 = ___stack_chk_guard;
  local_1c = 1;
  local_18 = 4;
  local_10 = 10;
  local_14 = 0xffffffff;
  LimitGroupBuyGridItem::LoadData((LimitGroupBuyGridItem *)this,(LimitGroupBuyItemInfo *)&local_20);
  iVar1 = FUN_03a48870(10);
  *(int *)(this + 0x15c) = *(int *)(this + 0x15c) + iVar1;
  iVar1 = FUN_03a48870(5);
  *(int *)(this + 0x164) = *(int *)(this + 0x164) + iVar1;
  FUN_05476574(a_Stack_28);
  FUN_054766c8(this + 0x138,a_Stack_28);
  FUN_05476c50(a_Stack_28);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_28);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x130),(RtWeakPtr *)a_Stack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
  FUN_05478178(awStack_30,L"[VOTE_NUMBER]",auStack_38);
  TodReplaceNumberString(awStack_30,L"{NUM}",*(int *)(param_1 + 4));
  FUN_054766c8(this + 0x150,a_Stack_28);
  FUN_05476c50(a_Stack_28);
  FUN_05476c50(awStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomVotingGridItem::ButtonDepress(int) */

void __thiscall CustomVotingGridItem::ButtonDepress(CustomVotingGridItem *this,int param_1)

{
  int iVar1;
  UICustomVoting *this_00;
  TinyRewardDisplayUI *this_01;
  UIMessageBox *this_02;
  Image *pIVar2;
  long lVar3;
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  wstring awStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 3) {
    this_00 = (UICustomVoting *)UISingletonDialog<UICustomVoting>::GetSingletonPtr();
    if ((this_00 == (UICustomVoting *)0x0) ||
       (iVar1 = UICustomVoting::GetTickets(this_00), iVar1 < 1)) {
      this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_02 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_02,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[VOTE_NO_TICKETS]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_02,awStack_40,awStack_48);
        std::string::string((string *)awStack_30,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar2 = (Image *)StringHelper::ToImage((string *)awStack_30,false);
        UIMessageBox::SetBackground(this_02,pIVar2);
        std::string::~string((string *)awStack_30);
        nop();
        lVar3 = UIMessageBox::GetButtonCancel(this_02);
        thunk_FUN_05477b9c(lVar3 + 0xd8,awStack_38);
        FUN_05476c50(awStack_38);
        FUN_05476c50(awStack_40);
        FUN_05476c50(awStack_48);
      }
    }
    else {
      iVar1 = *(int *)(this + 0xe0);
      FUN_05478178(awStack_38,&DAT_056f11a8,awStack_48);
      FUN_05478178(awStack_30,&DAT_056f11a8,awStack_40);
      this_01 = (TinyRewardDisplayUI *)
                TinyRewardDisplayUI::ShowDialog(iVar1,1,awStack_38,awStack_30);
      FUN_05476c50(awStack_30);
      nop();
      FUN_05476c50(awStack_38);
      nop();
      FUN_03a4875c(afStack_28,this);
      TinyRewardDisplayUI::SetCallBack(this_01,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      TodStringTranslate(L"[HINT_CONFIRM]");
      TodStringTranslate(L"[VOTE_HINT_CONFIRM]");
      TinyRewardDisplayUI::SetTextLabel(this_01,awStack_38,awStack_30);
      FUN_05476c50(awStack_30);
      FUN_05476c50(awStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CustomVotingGridItem::ButtonDepress(int) */

void __thiscall CustomVotingGridItem::ButtonDepress(CustomVotingGridItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomVotingGridItem::VoteConfirm() */

void __thiscall CustomVotingGridItem::VoteConfirm(CustomVotingGridItem *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2040];
  string asStack_4f0 [1256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"pid");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a48814(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_4f0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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

