// Class: UIFestivalGoldenEggEntrance


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEggEntrance::GetLayoutName() */

void __thiscall UIFestivalGoldenEggEntrance::GetLayoutName(UIFestivalGoldenEggEntrance *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIGoldenEggEntrance");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIFestivalGoldenEggEntrance::UIFestivalGoldenEggEntrance() */

void __thiscall
UIFestivalGoldenEggEntrance::UIFestivalGoldenEggEntrance(UIFestivalGoldenEggEntrance *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIFestivalGoldenEggEntrance>::UISingletonDialog
            ((UISingletonDialog<UIFestivalGoldenEggEntrance> *)this);
  this[0x131] = (UIFestivalGoldenEggEntrance)0x0;
  *(undefined ***)this = &PTR_GetClass_066fceb0;
  *(undefined **)(this + 0xd8) = &DAT_066fd200;
  FestivalGoldenEggData::FestivalGoldenEggData((FestivalGoldenEggData *)(this + 0x138));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIFestivalGoldenEggEntrance,void(UIFestivalGoldenEggEntrance::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* UIFestivalGoldenEggEntrance::~UIFestivalGoldenEggEntrance() */

void __thiscall
UIFestivalGoldenEggEntrance::~UIFestivalGoldenEggEntrance(UIFestivalGoldenEggEntrance *this)

{
  *(undefined ***)this = &PTR_GetClass_066fceb0;
  *(undefined **)(this + 0xd8) = &DAT_066fd200;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FestivalGoldenEggData::~FestivalGoldenEggData((FestivalGoldenEggData *)(this + 0x138));
  UISingletonDialog<UIFestivalGoldenEggEntrance>::~UISingletonDialog
            ((UISingletonDialog<UIFestivalGoldenEggEntrance> *)this);
  return;
}


/* UIFestivalGoldenEggEntrance::~UIFestivalGoldenEggEntrance() */

void __thiscall
UIFestivalGoldenEggEntrance::~UIFestivalGoldenEggEntrance(UIFestivalGoldenEggEntrance *this)

{
  ~UIFestivalGoldenEggEntrance(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEggEntrance::ResetConfirm(UIMessageBox*, int) */

void __thiscall
UIFestivalGoldenEggEntrance::ResetConfirm
          (UIFestivalGoldenEggEntrance *this,UIMessageBox *param_1,int param_2)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2544];
  string asStack_2f8 [752];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"i");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    local_d48[0] = 4;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_03a18bb8(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_2f8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEggEntrance::RefreshData() */

void __thiscall UIFestivalGoldenEggEntrance::RefreshData(UIFestivalGoldenEggEntrance *this)

{
  char cVar1;
  int iVar2;
  UIWidgetText *this_00;
  long lVar3;
  PVZ2UIButton *pPVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a17a88(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x138)), cVar1 != '\0'))
  {
    std::string::string(asStack_a0,"UIText_Hammer");
    uVar7 = 0;
    this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_a0);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x14c));
    std::operator+("X",asStack_98);
    UIWidgetText::SetString(this_00,asStack_90);
    std::string::~string(asStack_90);
    std::string::~string(asStack_98);
    std::string::~string(asStack_a0);
    nop();
    lVar3 = FUN_03a17a94(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158));
    if (lVar3 != 0) {
      do {
        Sexy::StrFormat("UIButton_Egg%d",asStack_90,(ulong)((int)uVar7 + 1));
        pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_90);
        std::string::~string(asStack_90);
        if (pPVar4 != (PVZ2UIButton *)0x0) {
          piVar5 = (int *)FUN_03a17aa0(*(undefined8 *)(this + 0x150),uVar7);
          (**(code **)(*(long *)pPVar4 + 0x188))(pPVar4,*piVar5 == 0);
        }
        uVar7 = uVar7 + 1;
        uVar6 = FUN_03a17a94(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158));
      } while (uVar7 < uVar6);
    }
    std::string::string(asStack_90,"UIButton_Reset");
    pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_90);
    std::string::~string(asStack_90);
    nop();
    if (*(int *)(this + 0x1f8) == 0) {
      (**(code **)(*(long *)pPVar4 + 0x188))(pPVar4,1);
    }
    else {
      (**(code **)(*(long *)pPVar4 + 0x188))(pPVar4,0);
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEggEntrance::OnCreate() */

void __thiscall UIFestivalGoldenEggEntrance::OnCreate(UIFestivalGoldenEggEntrance *this)

{
  uint uVar1;
  UIWidgetBackground *pUVar2;
  TGALogMgr *this_00;
  size_t __n;
  string asStack_58 [8];
  string asStack_50 [24];
  undefined1 auStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_50,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  uVar1 = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  __n = (size_t)uVar1;
  *(uint *)(pUVar2 + 0x48) = uVar1;
  RefreshData(this);
  TGATourismOctoberData::TGATourismOctoberData((TGATourismOctoberData *)asStack_50);
  std::string::append(asStack_50,"1",__n);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x14c));
  FUN_05474278(auStack_38,asStack_58);
  std::string::~string(asStack_58);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogGoldenEgg(this_00,(TGAGoldenEgg *)asStack_50);
  TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEggEntrance::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UIFestivalGoldenEggEntrance::onNotifyRefreshActivityList
          (UIFestivalGoldenEggEntrance *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x131] != (UIFestivalGoldenEggEntrance)0x0) && (param_1)) {
    local_1c = 0x2a59;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      this[0x131] = (UIFestivalGoldenEggEntrance)0x0;
      RefreshData(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEggEntrance::ButtonDepress(int) */

void __thiscall
UIFestivalGoldenEggEntrance::ButtonDepress(UIFestivalGoldenEggEntrance *this,int param_1)

{
  int iVar1;
  FestivalGoldenEggManager *this_00;
  int *piVar2;
  UIFestivalGoldenEggSelect *this_01;
  UIMessageBox *this_02;
  Image *pIVar3;
  UIFestivalGoldenEgg *this_03;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x2c) {
LAB_03a1f760:
    iVar1 = param_1 / 0xb + -1;
    piVar2 = (int *)FUN_03a17aa0(*(undefined8 *)(this + 0x150),(long)iVar1);
    if (*piVar2 == 0) goto LAB_03a1f72c;
    piVar2 = (int *)FUN_03a17aa0(*(undefined8 *)(this + 0x168),(long)iVar1);
    if (*piVar2 != 0) {
      this_03 = (UIFestivalGoldenEgg *)UISingletonDialog<UIFestivalGoldenEgg>::ShowDialog();
      UIFestivalGoldenEgg::Init(this_03,iVar1);
      UISingletonDialog<UIFestivalGoldenEggEntrance>::CloseDialog();
      goto LAB_03a1f72c;
    }
    this_01 = (UIFestivalGoldenEggSelect *)
              UISingletonDialog<UIFestivalGoldenEggSelect>::ShowDialog();
    UIFestivalGoldenEggSelect::Init(this_01,iVar1);
  }
  else {
    if (param_1 < 0x2d) {
      if (((param_1 != 0x16) && (param_1 != 0x21)) && (param_1 != 0xb)) goto LAB_03a1f72c;
      goto LAB_03a1f760;
    }
    if (param_1 != 0x58) {
      if (0x58 < param_1) {
        if (param_1 == 99) {
          this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
          if (this_02 != (UIMessageBox *)0x0) {
            UIMessageBox::SetShowType(this_02,6);
            TodStringTranslate(L"[REVIVE_TIP]");
            TodStringTranslate(L"[ARE_YOU_SURE]");
            UIMessageBox::SetMessage(this_02,awStack_58,awStack_60);
            std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
            pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
            UIMessageBox::SetBackground(this_02,pIVar3);
            std::string::~string(asStack_50);
            nop();
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,ResetConfirm);
            Sexy::Delegate2<UIMessageBox*,int>::
            Delegate2<UIFestivalGoldenEggEntrance,void(UIFestivalGoldenEggEntrance::*)(UIMessageBox*,int)>
                      (aDStack_38,asStack_50);
            UIMessageBox::SetCallback(this_02,aDStack_38);
            FUN_05476c50(awStack_58);
            FUN_05476c50(awStack_60);
          }
        }
        else if (param_1 == 0x6f) {
          this_00 = (FestivalGoldenEggManager *)
                    Sexy::LazySingleton<FestivalGoldenEggManager>::GetInstance();
          FestivalGoldenEggManager::showDescriptionWidget(this_00);
        }
        goto LAB_03a1f72c;
      }
      if (param_1 != 0x37) goto LAB_03a1f72c;
      goto LAB_03a1f760;
    }
  }
  UISingletonDialog<UIFestivalGoldenEggEntrance>::CloseDialog();
LAB_03a1f72c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to UIFestivalGoldenEggEntrance::ButtonDepress(int) */

void __thiscall
UIFestivalGoldenEggEntrance::ButtonDepress(UIFestivalGoldenEggEntrance *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

