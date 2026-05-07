// Class: UIRankAvatarSelect


/* UIRankAvatarSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIRankAvatarSelect::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIRankAvatarSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIRankAvatarSelect::ScrollTargetReached(UIRankAvatarSelect *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIRankAvatarSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIRankAvatarSelect::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIRankAvatarSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIRankAvatarSelect::ScrollTargetInterrupted(UIRankAvatarSelect *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRankAvatarSelect::GetLayoutName() */

void __thiscall UIRankAvatarSelect::GetLayoutName(UIRankAvatarSelect *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIRankAvatarSelect");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRankAvatarSelect::UpdateContent(int) */

void __thiscall UIRankAvatarSelect::UpdateContent(UIRankAvatarSelect *this,int param_1)

{
  byte bVar1;
  int iVar2;
  UIWidgetText *pUVar3;
  UIWidgetImage *this_00;
  Image *pIVar4;
  PVZ2UIButton *pPVar5;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string asStack_48 [8];
  string asStack_40 [8];
  int local_38 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_38,"season_title");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_38);
  std::string::~string((string *)local_38);
  nop();
  if (pUVar3 != (UIWidgetText *)0x0) {
    Sexy::StrFormat("[RANK_AVATAR_CONTENT_TITLE_%d]",asStack_40,(ulong)(uint)param_1);
    StringHelper::ToStringValue(asStack_40);
    PuzzleTip::SetTip(pUVar3,(string *)local_38);
    FUN_05476c50((string *)local_38);
    std::string::~string(asStack_40);
  }
  std::string::string((string *)local_38,"season_content");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_38);
  std::string::~string((string *)local_38);
  nop();
  if (pUVar3 != (UIWidgetText *)0x0) {
    Sexy::StrFormat("[RANK_AVATAR_CONTENT_CONTENT_%d]",asStack_40,(ulong)(uint)param_1);
    StringHelper::ToStringValue(asStack_40);
    PuzzleTip::SetTip(pUVar3,(string *)local_38);
    FUN_05476c50((string *)local_38);
    std::string::~string(asStack_40);
  }
  std::string::string((string *)local_38,"rank_avatar_img");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_38);
  std::string::~string((string *)local_38);
  nop();
  if (this_00 != (UIWidgetImage *)0x0) {
    GetGameItemInfo(param_1,0x7fffffff,0);
    std::string::string(asStack_48,"");
    nop();
    if (local_38[0] != 0) {
      std::operator+(asStack_18,"_DISPLAY");
      FUN_05474278(asStack_48,asStack_40);
      std::string::~string(asStack_40);
    }
    pIVar4 = (Image *)StringHelper::ToImage(asStack_48,false);
    UIWidgetImage::SetImage(this_00,pIVar4);
    std::string::~string(asStack_48);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  }
  std::string::string((string *)local_38,"UIButton_0");
  pPVar5 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_38);
  std::string::~string((string *)local_38);
  nop();
  if (pPVar5 != (PVZ2UIButton *)0x0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    iVar2 = PlayerInfo::GetCurrentRankAvatar(this_02);
    bVar1 = 1;
    if (iVar2 != param_1) {
      bVar1 = PlayerInfo::IsUnlockRankAvatar(this_02,param_1);
      bVar1 = bVar1 ^ 1;
    }
    (**(code **)(*(long *)pPVar5 + 0x188))(pPVar5,bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRankAvatarSelect::OnClickRankWidget(int) */

void __thiscall UIRankAvatarSelect::OnClickRankWidget(UIRankAvatarSelect *this,int param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  *(int *)(this + 0x158) = param_1;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x140));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x140));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar4 = *plVar3;
    iVar2 = FUN_033aa480(*(undefined4 *)(lVar4 + 0x308));
    if (param_1 != iVar2) {
      FUN_033aa54c(lVar4 + 800);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  UpdateContent(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRankAvatarSelect::UIRankAvatarSelect() */

void __thiscall UIRankAvatarSelect::UIRankAvatarSelect(UIRankAvatarSelect *this)

{
  UISingletonDialog<UIRankAvatarSelect>::UISingletonDialog
            ((UISingletonDialog<UIRankAvatarSelect> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06614e30;
  *(undefined **)(this + 0xd8) = &DAT_06615190;
  *(undefined ***)(this + 0x138) = &PTR__UIRankAvatarSelect_066151d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  *(undefined4 *)(this + 0x158) = 0;
  return;
}


/* UIRankAvatarSelect::~UIRankAvatarSelect() */

void __thiscall UIRankAvatarSelect::~UIRankAvatarSelect(UIRankAvatarSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_06614e30;
  *(undefined **)(this + 0xd8) = &DAT_06615190;
  *(undefined ***)(this + 0x138) = &PTR__UIRankAvatarSelect_066151d8;
  std::vector<RankAvatarWidget*,std::allocator<RankAvatarWidget*>>::~vector
            ((vector<RankAvatarWidget*,std::allocator<RankAvatarWidget*>> *)(this + 0x140));
  UISingletonDialog<UIRankAvatarSelect>::~UISingletonDialog
            ((UISingletonDialog<UIRankAvatarSelect> *)this);
  return;
}


/* non-virtual thunk to UIRankAvatarSelect::~UIRankAvatarSelect() */

void __thiscall UIRankAvatarSelect::~UIRankAvatarSelect(UIRankAvatarSelect *this)

{
  ~UIRankAvatarSelect(this + -0x138);
  return;
}


/* UIRankAvatarSelect::~UIRankAvatarSelect() */

void __thiscall UIRankAvatarSelect::~UIRankAvatarSelect(UIRankAvatarSelect *this)

{
  ~UIRankAvatarSelect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIRankAvatarSelect::~UIRankAvatarSelect() */

void __thiscall UIRankAvatarSelect::~UIRankAvatarSelect(UIRankAvatarSelect *this)

{
  ~UIRankAvatarSelect(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRankAvatarSelect::CreateRankWidgets(Sexy::Widget*, std::vector<int, std::allocator<int> >, int)
    */

void UIRankAvatarSelect::CreateRankWidgets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1_00,
               ReceivedDataCallback *param_1,long *param_3,undefined8 *param_4,int param_5)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PVZ2UIScrollingWidget *this;
  Image *pIVar9;
  Image *pIVar10;
  Widget *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  int *piVar11;
  RankAvatarWidget *pRVar12;
  uint uVar13;
  long lVar14;
  RankAvatarWidget *local_78;
  Insets aIStack_70 [16];
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1_00);
  if (param_3 != (long *)0x0) {
    iVar4 = FUN_033aa804(0xf);
    iVar5 = FUN_033aa804(10);
    iVar6 = FUN_033aa444((int)param_3[10]);
    iVar7 = FUN_033aa448(*(undefined4 *)((long)param_3 + 0x54));
    iVar8 = FUN_033aa484(*param_4,param_4[1]);
    if (iVar8 != 0) {
      iVar2 = (iVar6 + iVar4 * -3) / 2;
      this = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this,(ScrollWidgetListener *)(param_1 + 0x138));
      iVar5 = (int)((float)iVar2 * 0.41666666) + iVar5;
      Sexy::Insets::Insets(aIStack_70,0,0,iVar6,iVar7);
      (**(code **)(*(long *)this + 0x1a0))(this,aIStack_70);
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this,2);
      pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9caa0);
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9ca68);
      Sexy::ScrollWidget::EnableIndicators((ScrollWidget *)this,pIVar9,pIVar10);
      (**(code **)(*param_3 + 0x60))(param_3,this);
      this_00 = ::operator_new(0xd8);
      Sexy::Widget::Widget(this_00);
      (**(code **)(*(long *)this_00 + 0x198))
                (this_00,0,0,iVar6,iVar4 + iVar5 * (int)((float)iVar8 * 0.5));
      (**(code **)(*(long *)this + 0x60))(this,this_00);
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      if (0 < iVar8) {
        lVar14 = 0;
        do {
          uVar13 = (uint)lVar14;
          Sexy::Insets::Insets
                    (aIStack_60,iVar4 + (uVar13 & 1) * (iVar4 + iVar2),
                     iVar4 + iVar5 * ((int)uVar13 >> 1),iVar2,(int)((float)iVar2 * 0.41666666));
          piVar11 = (int *)FUN_033aa4c4(*param_4,lVar14);
          iVar6 = *piVar11;
          pRVar12 = ::operator_new(0x358);
          RankAvatarWidget::RankAvatarWidget(pRVar12,param_5 + uVar13,iVar6);
          local_78 = pRVar12;
          (**(code **)(*(long *)pRVar12 + 0x1a0))(pRVar12,aIStack_60);
          (**(code **)(*(long *)local_78 + 0x350))(local_78);
          local_78[0x59] = (RankAvatarWidget)0x0;
          FUN_033aa54c(local_78 + 800);
          pRVar12 = local_78;
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    (param_1,OnClickRankWidget);
          Sexy::Delegate1<int>::Delegate1<UIRankAvatarSelect,void(UIRankAvatarSelect::*)(int)>
                    (aDStack_38,aCStack_50);
          ComboBoxItem::SetClickFunc((ComboBoxItem *)pRVar12,aDStack_38);
          lVar1 = lVar14 + 1;
          piVar11 = (int *)FUN_033aa4c4(*param_4,lVar14);
          bVar3 = PlayerInfo::IsUnlockRankAvatar(this_02,*piVar11);
          FUN_033aa478((ComboBoxItem *)(local_78 + 0x2c8),bVar3 ^ 1);
          (**(code **)(*(long *)this_00 + 0x60))(this_00,local_78);
          std::vector<RankAvatarWidget*,std::allocator<RankAvatarWidget*>>::push_back
                    ((vector<RankAvatarWidget*,std::allocator<RankAvatarWidget*>> *)param_1_00,
                     &local_78);
          lVar14 = lVar1;
        } while ((int)lVar1 < iVar8);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRankAvatarSelect::InitView() */

void __thiscall UIRankAvatarSelect::InitView(UIRankAvatarSelect *this)

{
  bool bVar1;
  UIWidgetImage *pUVar2;
  undefined8 uVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<int,std::allocator<int>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_20,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_20);
  std::string::~string((string *)local_20);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar2,true);
  std::string::string((string *)local_20,"selectContainer");
  uVar3 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_20);
  std::string::~string((string *)local_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)RankAvatarMapper::GetInstance();
  auVar6 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_58,auVar6._8_8_);
  local_58 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::begin(auVar6._0_8_);
  while( true ) {
    local_20[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)auVar6._0_8_);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)local_20);
    if (!bVar1) break;
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_58);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_50,(int *)(lVar4 + 8));
    FUN_033aa494((exception_ptr *)&local_58);
  }
  std::vector<int,std::allocator<int>>::vector(avStack_38,(vector *)avStack_50);
  CreateRankWidgets((string *)local_20,this,uVar3,avStack_38,0x13ec);
  std::vector<RankAvatarWidget*,std::allocator<RankAvatarWidget*>>::operator=
            ((vector<RankAvatarWidget*,std::allocator<RankAvatarWidget*>> *)(this + 0x140),
             (vector *)local_20);
  std::vector<RankAvatarWidget*,std::allocator<RankAvatarWidget*>>::~vector
            ((vector<RankAvatarWidget*,std::allocator<RankAvatarWidget*>> *)local_20);
  std::vector<int,std::allocator<int>>::~vector(avStack_38);
  puVar5 = (undefined8 *)FUN_033aa548(*(undefined8 *)(this + 0x140));
  if ((RankAvatarWidget *)*puVar5 != (RankAvatarWidget *)0x0) {
    RankAvatarWidget::Select((RankAvatarWidget *)*puVar5);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRankAvatarSelect::OnCreate() */

undefined4 __thiscall UIRankAvatarSelect::OnCreate(UIRankAvatarSelect *this)

{
  undefined4 uVar1;
  
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRankAvatarSelect::ChangeRankAvatar() */

void __thiscall UIRankAvatarSelect::ChangeRankAvatar(UIRankAvatarSelect *this)

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
  DString aDStack_ce8 [2480];
  string asStack_338 [816];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"bgid");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,*(int *)(this + 0x158));
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_033aa7a8(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_338,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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


/* UIRankAvatarSelect::ButtonDepress(int) */

void __thiscall UIRankAvatarSelect::ButtonDepress(UIRankAvatarSelect *this,int param_1)

{
  if (param_1 == 5000) {
    UISingletonDialog<UIRankAvatarSelect>::CloseDialog();
    return;
  }
  if (param_1 == 0x1389) {
    ChangeRankAvatar(this);
    return;
  }
  return;
}


/* non-virtual thunk to UIRankAvatarSelect::ButtonDepress(int) */

void __thiscall UIRankAvatarSelect::ButtonDepress(UIRankAvatarSelect *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

