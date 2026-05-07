// Class: PenntGiftBoxItem


/* PenntGiftBoxItem::requestReward(UIMessageBox*, int) */

void __thiscall
PenntGiftBoxItem::requestReward(PenntGiftBoxItem *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  (**(code **)(*(long *)this + 0x328))();
  return;
}


/* PenntGiftBoxItem::PenntGiftBoxItem() */

void __thiscall PenntGiftBoxItem::PenntGiftBoxItem(PenntGiftBoxItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069e90f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069e9430;
  PennyGiftBoxGrowData::PennyGiftBoxGrowData((PennyGiftBoxGrowData *)(this + 0xe8));
  this[0x150] = (PenntGiftBoxItem)0x0;
  FUN_05476574(this + 0x158);
  *(undefined8 *)(this + 0x160) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenntGiftBoxItem::ButtonDepress(int) */

void __thiscall PenntGiftBoxItem::ButtonDepress(PenntGiftBoxItem *this,int param_1)

{
  int iVar1;
  UIPenntGiftBoxItemInfo *this_00;
  PennyGiftBoxManager *this_01;
  long lVar2;
  UIMessageBox *pUVar3;
  Image *pIVar4;
  float fVar5;
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    this_01 = (PennyGiftBoxManager *)Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    fVar5 = (float)PennyGiftBoxManager::GetDiscount(this_01);
    iVar1 = *(int *)(this + 0xe8);
    lVar2 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    if (*(int *)(lVar2 + 200) < (int)(fVar5 * (float)iVar1)) {
      pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      UIMessageBox::SetShowType(pUVar3,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[PENNY_GIFT_BUY_ENOUGH]");
      UIMessageBox::SetMessage(pUVar3,awStack_58,awStack_68);
      std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar4 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
      UIMessageBox::SetBackground(pUVar3,pIVar4);
      std::string::~string((string *)awStack_50);
      nop();
      lVar2 = UIMessageBox::GetButtonOK(pUVar3);
      thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,gotoBuyToken);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<PenntGiftBoxItem,void(PenntGiftBoxItem::*)(UIMessageBox*,int)>
                (aDStack_38,(string *)awStack_50);
      UIMessageBox::SetCallback(pUVar3,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(auStack_60);
      FUN_05476c50(awStack_68);
    }
    else {
      pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      UIMessageBox::SetShowType(pUVar3,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      FUN_05478178(awStack_50,L"[PENNY_GIFT_BUY_PENNY_GIFT]",auStack_70);
      TodReplaceNumberString(awStack_50,L"{NUM}",(int)(fVar5 * (float)iVar1));
      FUN_05476c50(awStack_50);
      nop();
      UIMessageBox::SetMessage(pUVar3,awStack_58,awStack_68);
      std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar4 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
      UIMessageBox::SetBackground(pUVar3,pIVar4);
      std::string::~string((string *)awStack_50);
      nop();
      lVar2 = UIMessageBox::GetButtonOK(pUVar3);
      thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,requestReward);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<PenntGiftBoxItem,void(PenntGiftBoxItem::*)(UIMessageBox*,int)>
                (aDStack_38,awStack_50);
      UIMessageBox::SetCallback(pUVar3,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(auStack_60);
      FUN_05476c50(awStack_68);
    }
  }
  else if (param_1 == 1) {
    this_00 = (UIPenntGiftBoxItemInfo *)UISingletonDialog<UIPenntGiftBoxItemInfo>::ShowDialog();
    UIPenntGiftBoxItemInfo::InitView(this_00,(PennyGiftBoxGrowData *)(this + 0xe8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PenntGiftBoxItem::ButtonDepress(int) */

void __thiscall PenntGiftBoxItem::ButtonDepress(PenntGiftBoxItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenntGiftBoxItem::Draw(Sexy::Graphics*) */

void __thiscall PenntGiftBoxItem::Draw(PenntGiftBoxItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04e790b0(0);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba0a68);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  iVar1 = FUN_04e790b0(0x1e);
  iVar2 = FUN_04e790b0(0x4b);
  iVar3 = FUN_04e790b0(0x2d);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba0328);
  DrawAdaptiveImage(param_1,aIStack_18,uVar5);
  iVar1 = FUN_04e790b0(0x32);
  iVar2 = FUN_04e790b0(0x57);
  iVar3 = FUN_04e790b0(0x50);
  iVar4 = FUN_04e790b0(0x19);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x158,aIStack_28,uVar5,aIStack_18,5,1);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba0740);
  iVar1 = FUN_04e790b0(0x3c);
  iVar2 = FUN_04e790b0(0x55);
  iVar3 = FUN_04e790b0(0x28);
  iVar4 = FUN_04e790b0(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PenntGiftBoxItem::~PenntGiftBoxItem() */

void __thiscall PenntGiftBoxItem::~PenntGiftBoxItem(PenntGiftBoxItem *this)

{
  *(undefined ***)this = &PTR_GetClass_069e90f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069e9430;
  FUN_05476c50(this + 0x158);
  PennyGiftBoxGrowData::~PennyGiftBoxGrowData((PennyGiftBoxGrowData *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PenntGiftBoxItem::~PenntGiftBoxItem() */

void __thiscall PenntGiftBoxItem::~PenntGiftBoxItem(PenntGiftBoxItem *this)

{
  ~PenntGiftBoxItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenntGiftBoxItem::InitView(int, PennyGiftBoxGrowData const&) */

void __thiscall
PenntGiftBoxItem::InitView(PenntGiftBoxItem *this,int param_1,PennyGiftBoxGrowData *param_2)

{
  PennyGiftBoxGrowData PVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long *plVar9;
  PennyGiftBoxManager *this_00;
  PVZ2UIButton *pPVar10;
  undefined8 uVar11;
  code *pcVar12;
  float fVar13;
  undefined1 auStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  PennyGiftBoxGrowData::operator=((PennyGiftBoxGrowData *)(this + 0xe8),param_2);
  Sexy::StrFormat("%d",asStack_78,(ulong)*(uint *)param_2);
  Sexy::ToWString(asStack_78);
  FUN_054766c8(this + 0x158,asStack_40);
  FUN_05476c50(asStack_40);
  std::string::~string(asStack_78);
  piVar8 = (int *)FUN_04e76e4c(*(undefined8 *)(param_2 + 8),0);
  plVar9 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,piVar8[1],true);
  uVar2 = FUN_04e790b0(0x28);
  uVar3 = FUN_04e790b0(0x1e);
  uVar4 = FUN_04e790b0(0x32);
  (**(code **)(*plVar9 + 0x198))(plVar9,uVar2,uVar3,uVar4,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,plVar9);
  this_00 = (PennyGiftBoxManager *)Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  fVar13 = (float)PennyGiftBoxManager::GetDiscount(this_00);
  Sexy::StrFormat("%d",asStack_40,(ulong)(uint)(int)(fVar13 * (float)*(int *)param_2));
  Sexy::ToWString(asStack_40);
  std::string::~string(asStack_40);
  FUN_05478178(asStack_78,&DAT_056f11a8,asStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,0,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)asStack_40);
  FUN_05476c50(asStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ba04f0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ba0490,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  uVar2 = FUN_04e790b0(0x19);
  uVar3 = FUN_04e790b0(0x69);
  uVar4 = FUN_04e790b0(0x50);
  uVar5 = FUN_04e790b0(0x28);
  (**(code **)(*(long *)pPVar10 + 0x198))(pPVar10,uVar2,uVar3,uVar4,uVar5);
  pcVar12 = *(code **)(*(long *)pPVar10 + 800);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  (*pcVar12)(pPVar10,uVar11);
  std::string::string(asStack_80,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_PENNY_GIFT_TOKEN");
  uVar11 = StringHelper::ToImage(asStack_80,false);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar11,9);
  iVar6 = FUN_04e790b0(0x50);
  iVar7 = FUN_04e790b0(0x28);
  Sexy::Insets::Insets((Insets *)asStack_78,0,0,iVar6,iVar7);
  PVZ2UIButton::AddTextWithIcon
            ((PVZ2UIButton *)0x3e800000,pPVar10,auStack_88,asStack_40,1,asStack_78,0xffffffff);
  std::string::~string(asStack_80);
  nop();
  (**(code **)(*(long *)this + 0x60))(this,pPVar10);
  PVar1 = param_2[0x20];
  *(PVZ2UIButton **)(this + 0x160) = pPVar10;
  if (PVar1 != (PennyGiftBoxGrowData)0x0) {
    (**(code **)(*(long *)pPVar10 + 0x188))(pPVar10,1);
  }
  FUN_05478178(asStack_78,&DAT_056f11a8,asStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,1,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)asStack_40);
  FUN_05476c50(asStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ba0598,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ba0a40,2);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  uVar2 = FUN_04e790b0(100);
  uVar3 = FUN_04e790b0(0);
  uVar4 = FUN_04e790b0(0x1e);
  (**(code **)(*(long *)pPVar10 + 0x198))(pPVar10,uVar2,uVar3,uVar4,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,pPVar10);
  FUN_05476c50(auStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PenntGiftBoxItem::RequestReward() */

void __thiscall PenntGiftBoxItem::RequestReward(PenntGiftBoxItem *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3176];
  string asStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
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
  FUN_04e78e88(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_80,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* PenntGiftBoxItem::gotoBuyToken(UIMessageBox*, int) */

void __thiscall
PenntGiftBoxItem::gotoBuyToken(PenntGiftBoxItem *this,UIMessageBox *param_1,int param_2)

{
  UIPennyGiftBox *this_00;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  this_00 = (UIPennyGiftBox *)UISingletonDialog<UIPennyGiftBox>::GetSingletonPtr();
  UIPennyGiftBox::SetCurrentTab(this_00,3);
  return;
}

