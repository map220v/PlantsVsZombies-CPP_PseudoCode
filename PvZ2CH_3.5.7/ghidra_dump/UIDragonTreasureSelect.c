// Class: UIDragonTreasureSelect


/* UIDragonTreasureSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIDragonTreasureSelect::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIDragonTreasureSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIDragonTreasureSelect::ScrollTargetReached(UIDragonTreasureSelect *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIDragonTreasureSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIDragonTreasureSelect::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIDragonTreasureSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIDragonTreasureSelect::ScrollTargetInterrupted(UIDragonTreasureSelect *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasureSelect::GetLayoutName() */

void __thiscall UIDragonTreasureSelect::GetLayoutName(UIDragonTreasureSelect *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIDragonTreasureSelect");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIDragonTreasureSelect::UIDragonTreasureSelect() */

void __thiscall UIDragonTreasureSelect::UIDragonTreasureSelect(UIDragonTreasureSelect *this)

{
  UISingletonDialog<UIDragonTreasureSelect>::UISingletonDialog
            ((UISingletonDialog<UIDragonTreasureSelect> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06644970;
  *(undefined **)(this + 0xd8) = &DAT_06644cd0;
  *(undefined ***)(this + 0x138) = &PTR__UIDragonTreasureSelect_06644d18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  return;
}


/* UIDragonTreasureSelect::~UIDragonTreasureSelect() */

void __thiscall UIDragonTreasureSelect::~UIDragonTreasureSelect(UIDragonTreasureSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_06644970;
  *(undefined **)(this + 0xd8) = &DAT_06644cd0;
  *(undefined ***)(this + 0x138) = &PTR__UIDragonTreasureSelect_06644d18;
  std::vector<DragonTreasureSelectLine*,std::allocator<DragonTreasureSelectLine*>>::~vector
            ((vector<DragonTreasureSelectLine*,std::allocator<DragonTreasureSelectLine*>> *)
             (this + 0x140));
  UISingletonDialog<UIDragonTreasureSelect>::~UISingletonDialog
            ((UISingletonDialog<UIDragonTreasureSelect> *)this);
  return;
}


/* non-virtual thunk to UIDragonTreasureSelect::~UIDragonTreasureSelect() */

void __thiscall UIDragonTreasureSelect::~UIDragonTreasureSelect(UIDragonTreasureSelect *this)

{
  ~UIDragonTreasureSelect(this + -0x138);
  return;
}


/* UIDragonTreasureSelect::~UIDragonTreasureSelect() */

void __thiscall UIDragonTreasureSelect::~UIDragonTreasureSelect(UIDragonTreasureSelect *this)

{
  ~UIDragonTreasureSelect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIDragonTreasureSelect::~UIDragonTreasureSelect() */

void __thiscall UIDragonTreasureSelect::~UIDragonTreasureSelect(UIDragonTreasureSelect *this)

{
  ~UIDragonTreasureSelect(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasureSelect::SelectLottery() */

void __thiscall UIDragonTreasureSelect::SelectLottery(UIDragonTreasureSelect *this)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  DNetwork *this_00;
  TGALogMgr *this_01;
  UIMessageBox *this_02;
  Image *pIVar7;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *__n;
  ulong uVar8;
  undefined8 uVar9;
  wstring awStack_eb8 [8];
  string asStack_eb0 [8];
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [3088];
  string asStack_d8 [208];
  long local_8;
  
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_e58,uVar2);
  FUN_054603b8(auStack_e48,&DAT_05593308);
  do {
    uVar9 = *(undefined8 *)(this + 0x140);
    uVar6 = FUN_03499fec(uVar9,*(undefined8 *)(this + 0x148));
    if (uVar6 <= uVar8) {
      FUN_054603b8(auStack_e48,&DAT_05593350);
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_e88);
      std::string::string(asStack_eb0,"selectGift");
      uVar9 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_e88,asStack_eb0);
      FUN_05462824(asStack_ce8,auStack_e58);
      FUN_05474278(uVar9,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_eb0);
      nop();
      this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_0349ab80(afStack_ea8,this);
      std::string::string(asStack_eb0,"[NET_CONNECTING]");
      __n = amStack_e88;
      DNetwork::requestMsg
                (this_00,asStack_d8,(map *)amStack_e88,30.0,(function *)afStack_ea8,true,true,
                 asStack_eb0,0);
      std::string::~string(asStack_eb0);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
      _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      TGATourismOctoberData::TGATourismOctoberData((TGATourismOctoberData *)asStack_ce8);
      std::string::append(asStack_ce8,"2",(size_t)__n);
      this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogDragonTreasure(this_01,(TGADragonTreasureData *)asStack_ce8);
      TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)asStack_ce8);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_e88);
      FUN_054617bc(auStack_e58);
LAB_0349f42c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar4 = (undefined8 *)FUN_03499ff8(uVar9,uVar8);
    iVar3 = DragonTreasureSelectLine::GetSelectItemIndex((DragonTreasureSelectLine *)*puVar4);
    if (iVar3 == -1) {
      this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_02 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_02,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        TodStringTranslate(L"[PLEASE_SET_WISH_FIRST]");
        UIMessageBox::SetMessage(this_02,(wstring *)amStack_e88,awStack_eb8);
        std::string::string(asStack_ce8,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar7 = (Image *)StringHelper::ToImage(asStack_ce8,false);
        UIMessageBox::SetBackground(this_02,pIVar7);
        std::string::~string(asStack_ce8);
        nop();
        lVar5 = UIMessageBox::GetButtonCancel(this_02);
        thunk_FUN_05477b9c(lVar5 + 0xd8,asStack_eb0);
        FUN_05476c50((wstring *)amStack_e88);
        FUN_05476c50(asStack_eb0);
        FUN_05476c50(awStack_eb8);
      }
      FUN_054617bc(auStack_e58);
      goto LAB_0349f42c;
    }
    uVar9 = FUN_0546065c(auStack_e48,iVar3);
    lVar5 = FUN_03499fec(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
    puVar1 = &DAT_055923fe;
    if (uVar8 != lVar5 - 1U) {
      puVar1 = &DAT_05593348;
    }
    uVar8 = uVar8 + 1;
    FUN_054603b8(uVar9,puVar1);
  } while( true );
}


/* UIDragonTreasureSelect::ButtonDepress(int) */

void __thiscall UIDragonTreasureSelect::ButtonDepress(UIDragonTreasureSelect *this,int param_1)

{
  if (param_1 == 0x16) {
    SelectLottery(this);
    return;
  }
  if (param_1 == 0x58) {
    UISingletonDialog<UIDragonTreasureSelect>::CloseDialog();
    return;
  }
  return;
}


/* non-virtual thunk to UIDragonTreasureSelect::ButtonDepress(int) */

void __thiscall UIDragonTreasureSelect::ButtonDepress(UIDragonTreasureSelect *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasureSelect::InitView() */

void __thiscall UIDragonTreasureSelect::InitView(UIDragonTreasureSelect *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  DragonTreasureSelectLine *pDVar7;
  vector *pvVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  DragonTreasureSelectLine *local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = UISingletonDialog<UIDragonTreasure>::GetSingletonPtr();
  std::string::string(asStack_18,"UIImage_Background");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_0349abdc(0xf);
  iVar3 = FUN_0349abdc(0x1e);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar2,iVar2,*(int *)(pUVar6 + 0x50) - iVar3,
             *(int *)(pUVar6 + 0x54) - iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar3 = FUN_0349abdc(10);
  uVar1 = *(undefined4 *)(this_01 + 0x50);
  iVar4 = FUN_0349abdc(0x50);
  uVar11 = 0;
  iVar2 = 0;
  while( true ) {
    uVar9 = FUN_03499fb0(*(undefined8 *)(lVar5 + 400),*(undefined8 *)(lVar5 + 0x198));
    if (uVar9 <= uVar11) break;
    pDVar7 = ::operator_new(0x110);
    DragonTreasureSelectLine::DragonTreasureSelectLine(pDVar7);
    local_20 = pDVar7;
    (**(code **)(*(long *)pDVar7 + 0x198))(pDVar7,0,iVar2,uVar1,iVar4);
    pDVar7 = local_20;
    pvVar8 = (vector *)FUN_03499fe0(*(undefined8 *)(lVar5 + 400),uVar11);
    DragonTreasureSelectLine::InitView(pDVar7,(int)uVar11,pvVar8);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_20);
    std::vector<DragonTreasureSelectLine*,std::allocator<DragonTreasureSelectLine*>>::push_back
              ((vector<DragonTreasureSelectLine*,std::allocator<DragonTreasureSelectLine*>> *)
               (this + 0x140),&local_20);
    uVar11 = uVar11 + 1;
    iVar2 = iVar2 + iVar3 + iVar4;
  }
  pcVar10 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (int)uVar9 * (iVar3 + iVar4) - iVar3;
  (*pcVar10)(this_00,this_01);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasureSelect::OnCreate() */

void __thiscall UIDragonTreasureSelect::OnCreate(UIDragonTreasureSelect *this)

{
  UIWidgetBackground *pUVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  lVar2 = UISingletonDialog<UIDragonTreasure>::GetSingletonPtr();
  if (lVar2 != 0) {
    InitView(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 != 0);
}

