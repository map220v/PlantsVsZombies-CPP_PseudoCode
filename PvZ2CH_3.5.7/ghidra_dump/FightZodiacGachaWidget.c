// Class: FightZodiacGachaWidget


/* FightZodiacGachaWidget::onBuyGacha(int) */

void __thiscall FightZodiacGachaWidget::onBuyGacha(FightZodiacGachaWidget *this,int param_1)

{
  if (*(int *)(this + 0xe0) != param_1) {
    return;
  }
  *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + -1;
  return;
}


/* FightZodiacGachaWidget::~FightZodiacGachaWidget() */

void __thiscall FightZodiacGachaWidget::~FightZodiacGachaWidget(FightZodiacGachaWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066f0740;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f0a68;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* FightZodiacGachaWidget::~FightZodiacGachaWidget() */

void __thiscall FightZodiacGachaWidget::~FightZodiacGachaWidget(FightZodiacGachaWidget *this)

{
  ~FightZodiacGachaWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FightZodiacGachaWidget::setIndex(int, int) */

void __thiscall
FightZodiacGachaWidget::setIndex(FightZodiacGachaWidget *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PVZ2UIButton *this_00;
  undefined8 uVar4;
  int iVar5;
  code *pcVar6;
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  *(int *)(this + 0xe0) = param_1;
  iVar5 = 6;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe4) = param_2;
  if (param_1 != 0) {
    if (param_1 == 1) {
      iVar5 = 1;
    }
    else if (param_1 == 2) {
      iVar5 = 0x1e;
    }
    else {
      iVar5 = 0x44;
      if (param_1 != 3) {
        iVar5 = 1;
      }
    }
  }
  TodStringTranslate(L"[PLANTTRIAL_BUY_BUTTON_NAME_1]");
  TodReplaceNumberString(awStack_80,L"{NUMBER}",iVar5);
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0xb4,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac0f58,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ac0fe8,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar6 = *(code **)(*(long *)this_00 + 0x1a0);
  iVar1 = FUN_039cbfd4(0x78);
  iVar2 = FUN_039cbfd4(0x50);
  iVar5 = *(int *)(this + 0x54);
  iVar3 = FUN_039cbfd4(0x2d);
  Sexy::Insets::Insets(aIStack_40,(*(int *)(this + 0x50) - iVar1) / 2,iVar5 - iVar2,iVar1,iVar3);
  (*pcVar6)(this_00,aIStack_40);
  pcVar6 = *(code **)(*(long *)this_00 + 800);
  uVar4 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
  (*pcVar6)(this_00,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FightZodiacGachaWidget::ButtonDepress(int) */

void __thiscall FightZodiacGachaWidget::ButtonDepress(FightZodiacGachaWidget *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *pPVar3;
  UIMessageBox *this_00;
  Image *pIVar4;
  long lVar5;
  char *__s;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xb4) {
    if (*(int *)(this + 0xe4) < 1) {
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_00,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[FIGHT_ZODIAC_LIMIT]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar4 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(this_00,pIVar4);
        std::string::~string(asStack_10);
        nop();
        lVar5 = UIMessageBox::GetButtonCancel(this_00);
        thunk_FUN_05477b9c(lVar5 + 0xd8,auStack_18);
        FUN_05476c50(auStack_18);
        FUN_05476c50(awStack_20);
        FUN_05476c50(awStack_28);
      }
    }
    else {
      iVar1 = *(int *)(this + 0xe0);
      if (iVar1 == 0) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.NewYearLionDance6");
        PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
        std::string::~string(asStack_10);
        nop();
      }
      else {
        if (iVar1 == 1) {
          p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar3 = (PurchaseBroker *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_rightmost(p_Var2);
          __s = "com.popcap.ios.chs.PVZ2.NewYearLionDance01";
        }
        else if (iVar1 == 2) {
          p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar3 = (PurchaseBroker *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_rightmost(p_Var2);
          __s = "com.popcap.ios.chs.PVZ2.NewYearLionDance30";
        }
        else {
          if (iVar1 != 3) goto LAB_039cd174;
          p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar3 = (PurchaseBroker *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_rightmost(p_Var2);
          __s = "com.popcap.ios.chs.PVZ2.NewYearLionDance68";
        }
        std::string::string(asStack_10,__s);
        PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
        std::string::~string(asStack_10);
        nop();
      }
    }
  }
LAB_039cd174:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FightZodiacGachaWidget::ButtonDepress(int) */

void __thiscall FightZodiacGachaWidget::ButtonDepress(FightZodiacGachaWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* FightZodiacGachaWidget::FightZodiacGachaWidget() */

void __thiscall FightZodiacGachaWidget::FightZodiacGachaWidget(FightZodiacGachaWidget *this)

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
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_066f0740;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066f0a68;
  *(undefined4 *)(this + 0xe4) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuyGacha);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<FightZodiacGachaWidget,void(FightZodiacGachaWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyLionDanceGacha,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FightZodiacGachaWidget::Draw(Sexy::Graphics*) */

void __thiscall FightZodiacGachaWidget::Draw(FightZodiacGachaWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Image *pIVar6;
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 0) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1058);
    Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac10a8;
    if ((iVar1 != 1) && (this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0d70, iVar1 != 2)) {
      if (iVar1 != 3) goto LAB_039d1f50;
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0d98;
    }
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
LAB_039d1f50:
  TodStringTranslate(L"[PLANTBUNDLE_LIMITED_BUY]");
  TodReplaceNumberString(awStack_38,L"{NUMBER}",*(int *)(this + 0xe4));
  iVar2 = FUN_039cbfd4(10);
  iVar3 = FUN_039cbfd4(0x28);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_039cbfd4(0x14);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar1 - iVar3,*(int *)(this + 0x50) - iVar4,iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_28,0,0x45);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,aCStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

