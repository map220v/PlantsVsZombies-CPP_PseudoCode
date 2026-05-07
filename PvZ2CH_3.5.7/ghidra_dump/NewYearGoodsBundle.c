// Class: NewYearGoodsBundle


/* NewYearGoodsBundle::OnBuyNewYearGoods(int) */

void __thiscall NewYearGoodsBundle::OnBuyNewYearGoods(NewYearGoodsBundle *this,int param_1)

{
  int iVar1;
  long *plVar2;
  
  if ((((*(int *)(this + 0xe0) == param_1) &&
       (iVar1 = *(int *)(this + 0xe4), *(int *)(this + 0xe4) = iVar1 + -1, iVar1 + -1 < 1)) &&
      (plVar2 = *(long **)(this + 0xf0), plVar2 != (long *)0x0)) &&
     (((**(code **)(*plVar2 + 0x188))(plVar2,1), *(int *)(this + 0xe4) < 1 &&
      (*(long *)(this + 0xf0) != 0)))) {
    (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
    return;
  }
  return;
}


/* NewYearGoodsBundle::~NewYearGoodsBundle() */

void __thiscall NewYearGoodsBundle::~NewYearGoodsBundle(NewYearGoodsBundle *this)

{
  *(undefined ***)this = &PTR_GetClass_066e4850;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e4b78;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewYearGoodsBundle::~NewYearGoodsBundle() */

void __thiscall NewYearGoodsBundle::~NewYearGoodsBundle(NewYearGoodsBundle *this)

{
  ~NewYearGoodsBundle(this);
  AK::FreeHook(this);
  return;
}


/* NewYearGoodsBundle::NewYearGoodsBundle() */

void __thiscall NewYearGoodsBundle::NewYearGoodsBundle(NewYearGoodsBundle *this)

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
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_066e4850;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e4b78;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyNewYearGoods);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<NewYearGoodsBundle,void(NewYearGoodsBundle::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyNewYearGoods,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearGoodsBundle::Draw(Sexy::Graphics*) */

void __thiscall NewYearGoodsBundle::Draw(NewYearGoodsBundle *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Image *pIVar5;
  undefined1 auStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Image **)(this + 0xe8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xe8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  TodStringTranslate(L"[SECRET_MIDDLE_STR]");
  iVar1 = FUN_039a5cb0(0xbe);
  iVar2 = FUN_039a5cb0(0x19);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color(aCStack_18,0,0x46,0x48);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar4,aCStack_18,2,1);
  FUN_05476c50(auStack_30);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf0b0);
  iVar1 = FUN_039a5cb0(0x6e);
  iVar2 = FUN_039a5cb0(0xd7);
  iVar3 = FUN_039a5cb0(0x32);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
  FUN_05478178(awStack_38,L"[PLANTBUNDLE_LIMITED_BUY]",auStack_40);
  TodReplaceNumberString(awStack_38,L"{NUMBER}",*(int *)(this + 0xe4));
  iVar1 = FUN_039a5cb0(0x148);
  iVar2 = FUN_039a5cb0(0x14);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Color::Color(aCStack_18,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar4,aCStack_18,5,1);
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
/* NewYearGoodsBundle::InitView(int) */

void __thiscall NewYearGoodsBundle::InitView(NewYearGoodsBundle *this,int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *this_00;
  PVZ2UIButton *pPVar9;
  int *piVar10;
  code *pcVar11;
  long *plVar12;
  undefined1 auStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  Sexy::StrFormat("IMAGE_UI_NEWYEARGOODS_BUNDLE%d",asStack_40,(ulong)(param_1 + 1));
  uVar7 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0xe8) = uVar7;
  std::string::~string(asStack_40);
  lVar8 = UISingletonDialog<UINewYearGoods>::GetSingletonPtr();
  this_00 = (vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)
            FUN_039a54ac(*(undefined8 *)(lVar8 + 0x158),(long)param_1);
  cVar2 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty(this_00);
  if (cVar2 == '\0') {
    piVar10 = (int *)FUN_039a54bc(*(undefined8 *)this_00,0);
    plVar12 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar10,piVar10[1],true);
    uVar3 = FUN_039a5cb0(0x19);
    uVar4 = FUN_039a5cb0(0xd7);
    uVar5 = FUN_039a5cb0(0x32);
    (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar4,uVar5,uVar5);
    (**(code **)(*(long *)this + 0x60))(this,plVar12);
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x21,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abf088,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06abf088,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar12 = *(long **)(this + 0xf8);
  uVar3 = FUN_039a5cb0(0x6e);
  uVar4 = FUN_039a5cb0(0xd7);
  uVar5 = FUN_039a5cb0(0x32);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar4,uVar5,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  FUN_05478178(awStack_80,L"[MONTHLY_CARD_PRICE]",auStack_88);
  TodReplaceNumberString(awStack_80,L"{NUM}",*(int *)(&DAT_05751eb0 + (long)param_1 * 4));
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x16,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar9;
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abf238,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06abf320,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar12 = *(long **)(this + 0xf0);
  uVar3 = FUN_039a5cb0(0x26);
  uVar4 = FUN_039a5cb0(0x113);
  uVar5 = FUN_039a5cb0(0x6e);
  uVar6 = FUN_039a5cb0(0x37);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar4,uVar5,uVar6);
  plVar12 = *(long **)(this + 0xf0);
  pcVar11 = *(code **)(*plVar12 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
  (*pcVar11)(plVar12,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  iVar1 = *(int *)(this_00 + 0x30);
  *(int *)(this + 0xe4) = iVar1;
  if (iVar1 < 1) {
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
    (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewYearGoodsBundle::ButtonDepress(int) */

void __thiscall NewYearGoodsBundle::ButtonDepress(NewYearGoodsBundle *this,int param_1)

{
  UINewYearGoodsSelect *this_00;
  
  if ((param_1 != 0x21) && (param_1 != 0x16)) {
    return;
  }
  this_00 = (UINewYearGoodsSelect *)UISingletonDialog<UINewYearGoodsSelect>::ShowDialog();
  UINewYearGoodsSelect::InitView(this_00,*(int *)(this + 0xe0));
  return;
}


/* non-virtual thunk to NewYearGoodsBundle::ButtonDepress(int) */

void __thiscall NewYearGoodsBundle::ButtonDepress(NewYearGoodsBundle *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

