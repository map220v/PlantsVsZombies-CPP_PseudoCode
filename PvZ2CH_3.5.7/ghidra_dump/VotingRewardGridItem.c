// Class: VotingRewardGridItem


/* VotingRewardGridItem::~VotingRewardGridItem() */

void __thiscall VotingRewardGridItem::~VotingRewardGridItem(VotingRewardGridItem *this)

{
  *(undefined ***)this = &PTR_GetClass_067073f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06707718;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* VotingRewardGridItem::~VotingRewardGridItem() */

void __thiscall VotingRewardGridItem::~VotingRewardGridItem(VotingRewardGridItem *this)

{
  ~VotingRewardGridItem(this);
  AK::FreeHook(this);
  return;
}


/* VotingRewardGridItem::VotingRewardGridItem() */

void __thiscall VotingRewardGridItem::VotingRewardGridItem(VotingRewardGridItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_067073f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06707718;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VotingRewardGridItem::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
VotingRewardGridItem::DrawAll(VotingRewardGridItem *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  FUN_05478178(awStack_38,L"[VOTE_NEED]",auStack_40);
  TodReplaceNumberString(awStack_38,L"{NUM}",*(int *)(this + 0xec));
  iVar2 = FUN_03a48870(0x43);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = FUN_03a48870(0x14);
  Sexy::Insets::Insets(aIStack_18,0,iVar1 - iVar2,*(int *)(this + 0x50),iVar3);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_28,0x42,0x25,0);
  WriteWordInRect(param_2,auStack_30,aIStack_18,uVar4,aCStack_28,2,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_38);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VotingRewardGridItem::InitView(CustomVotingItemData const&, int) */

void __thiscall
VotingRewardGridItem::InitView(VotingRewardGridItem *this,CustomVotingItemData *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PuzzleTip *pPVar8;
  undefined8 uVar9;
  long *plVar10;
  PVZ2UIButton *pPVar11;
  code *pcVar12;
  Insets aIStack_88 [16];
  PVZ2UIImage aPStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  uVar9 = *(undefined8 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(int *)(this + 0xe0) = param_2;
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xe4) = uVar9;
  *(undefined8 *)(this + 0xec) = uVar1;
  iVar2 = FUN_03a48870(10);
  iVar3 = FUN_03a48870(0x14);
  Sexy::Insets::Insets
            (aIStack_88,iVar2,iVar2,*(int *)(this + 0x50) - iVar3,*(int *)(this + 0x50) - iVar3);
  pPVar8 = (PuzzleTip *)
           UIRewardFrame::CreateUIRewardFrame(*(int *)param_1,*(int *)(param_1 + 4),true);
  (**(code **)(*(long *)pPVar8 + 0x1a0))(pPVar8,aIStack_88);
  PuzzleTip::SetDrawJustification(pPVar8,1);
  (**(code **)(*(long *)this + 0x60))(this,pPVar8);
  plVar10 = *(long **)(this + 0xf8);
  if (plVar10 == (long *)0x0) {
    TodStringTranslate(L"[PLANT_OBTAIN]");
    Sexy::Color::Color((Color *)aIStack_40,1);
    pPVar11 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar11,0x28,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,
               (Color *)aIStack_40);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar11;
    FUN_05476c50(aPStack_78);
    plVar10 = *(long **)(this + 0xf8);
    if (plVar10 == (long *)0x0) goto LAB_03a48f40;
  }
  pcVar12 = *(code **)(*plVar10 + 0x1a0);
  iVar4 = FUN_03a48870(10);
  iVar5 = FUN_03a48870(0x28);
  iVar2 = *(int *)(this + 0x54);
  iVar6 = FUN_03a48870(0x14);
  iVar3 = *(int *)(this + 0x50);
  iVar7 = FUN_03a48870(0x23);
  Sexy::Insets::Insets(aIStack_40,iVar4,iVar2 - iVar5,iVar3 - iVar6,iVar7);
  (*pcVar12)(plVar10,aIStack_40);
  pPVar11 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac51c8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ac5258,3);
  PVZ2UIButton::SetDialogStates(pPVar11,aPStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0xf8);
  pcVar12 = *(code **)(*plVar10 + 800);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  (*pcVar12)(plVar10,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  if (param_1[0xc] != (CustomVotingItemData)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
    pPVar11 = *(PVZ2UIButton **)(this + 0xf8);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(pPVar11,(wstring *)aIStack_40);
    FUN_05476c50(aIStack_40);
  }
LAB_03a48f40:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VotingRewardGridItem::ObtainReward() */

void __thiscall VotingRewardGridItem::ObtainReward(VotingRewardGridItem *this)

{
  undefined8 uVar1;
  string *this_00;
  DNetwork *this_01;
  string *__n;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1720];
  string asStack_630 [1576];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"ai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a3e;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  __n = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"1",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"i");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a487b8(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_630,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VotingRewardGridItem::ButtonDepress(int) */

void __thiscall VotingRewardGridItem::ButtonDepress(VotingRewardGridItem *this,int param_1)

{
  int iVar1;
  UICustomVoting *this_00;
  UIMessageBox *this_01;
  Image *pIVar2;
  long lVar3;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x28) {
    this_00 = (UICustomVoting *)UISingletonDialog<UICustomVoting>::GetSingletonPtr();
    if ((this_00 == (UICustomVoting *)0x0) ||
       (iVar1 = UICustomVoting::GetVotedTickets(this_00), iVar1 < *(int *)(this + 0xec))) {
      this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_01 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_01,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[NO_CONDITIONS]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_01,awStack_20,awStack_28);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(this_01,pIVar2);
        std::string::~string(asStack_10);
        nop();
        lVar3 = UIMessageBox::GetButtonCancel(this_01);
        thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_18);
        FUN_05476c50(auStack_18);
        FUN_05476c50(awStack_20);
        FUN_05476c50(awStack_28);
      }
    }
    else {
      ObtainReward(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VotingRewardGridItem::ButtonDepress(int) */

void __thiscall VotingRewardGridItem::ButtonDepress(VotingRewardGridItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VotingRewardGridItem::Draw(Sexy::Graphics*) */

void __thiscall VotingRewardGridItem::Draw(VotingRewardGridItem *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5308);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

