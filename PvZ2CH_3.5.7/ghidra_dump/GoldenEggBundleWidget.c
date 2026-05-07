// Class: GoldenEggBundleWidget


/* GoldenEggBundleWidget::~GoldenEggBundleWidget() */

void __thiscall GoldenEggBundleWidget::~GoldenEggBundleWidget(GoldenEggBundleWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066fdc90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066fdfb8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GoldenEggBundleWidget::~GoldenEggBundleWidget() */

void __thiscall GoldenEggBundleWidget::~GoldenEggBundleWidget(GoldenEggBundleWidget *this)

{
  ~GoldenEggBundleWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggBundleWidget::Init(int, int) */

void __thiscall GoldenEggBundleWidget::Init(GoldenEggBundleWidget *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PVZ2UIButton *this_00;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  code *pcVar8;
  undefined1 auStack_90 [8];
  wstring awStack_88 [8];
  wstring awStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  *(int *)(this + 0xe0) = param_1;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe4) = param_2;
  FUN_05476574(awStack_88);
  iVar6 = *(int *)(this + 0xe0);
  if (iVar6 == 0) {
    FUN_05478178(awStack_80,L"[SECRET_BUY_STR]",auStack_90);
    iVar6 = 6;
  }
  else if (iVar6 == 1) {
    FUN_05478178(awStack_80,L"[SECRET_BUY_STR]",auStack_90);
    iVar6 = 0x1e;
  }
  else if (iVar6 == 2) {
    FUN_05478178(awStack_80,L"[SECRET_BUY_STR]",auStack_90);
    iVar6 = 0x44;
  }
  else {
    if (iVar6 != 3) goto LAB_03a190b8;
    FUN_05478178(awStack_80,L"[SECRET_BUY_STR]",auStack_90);
    iVar6 = 0x80;
  }
  TodReplaceNumberString(awStack_80,L"{NUMBER}",iVar6);
  TodStringTranslate((wstring *)aPStack_78);
  FUN_054766c8(awStack_88,aPStack_40);
  FUN_05476c50(aPStack_40);
  FUN_05476c50((wstring *)aPStack_78);
  FUN_05476c50(awStack_80);
  nop();
LAB_03a190b8:
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x70,(ButtonListener *)(this + 0xd8),awStack_88,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = this_00;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac31c0,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ac30b0,3);
  PVZ2UIButton::SetDialogStates(this_00,aPStack_78,aPStack_40);
  plVar7 = *(long **)(this + 0xf0);
  iVar1 = FUN_03a18de0(0x3c);
  iVar6 = *(int *)(this + 0x50);
  uVar2 = FUN_03a18de0(0xff);
  uVar3 = FUN_03a18de0(0x78);
  uVar4 = FUN_03a18de0(0x32);
  (**(code **)(*plVar7 + 0x198))(plVar7,iVar6 / 2 - iVar1,uVar2,uVar3,uVar4);
  plVar7 = *(long **)(this + 0xf0);
  pcVar8 = *(code **)(*plVar7 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
  (*pcVar8)(plVar7,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  if (*(int *)(this + 0xe4) < 1) {
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
  }
  FUN_05476c50(awStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggBundleWidget::ButtonDepress(int) */

void __thiscall GoldenEggBundleWidget::ButtonDepress(GoldenEggBundleWidget *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *pPVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x70) {
    iVar1 = *(int *)(this + 0xe0);
    if (iVar1 == 0) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.SmashGoldenEggs6");
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
        __s = "com.popcap.ios.chs.PVZ2.SmashGoldenEggs30";
      }
      else if (iVar1 == 2) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.SmashGoldenEggs68";
      }
      else {
        if (iVar1 != 3) goto LAB_03a1a668;
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.SmashGoldenEggs128";
      }
      std::string::string(asStack_10,__s);
      PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
LAB_03a1a668:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GoldenEggBundleWidget::ButtonDepress(int) */

void __thiscall GoldenEggBundleWidget::ButtonDepress(GoldenEggBundleWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggBundleWidget::OnBuyGoldenEgg(int) */

void __thiscall GoldenEggBundleWidget::OnBuyGoldenEgg(GoldenEggBundleWidget *this,int param_1)

{
  int iVar1;
  UIFestivalGoldenEgg *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  TGALogMgr *this_03;
  string *__n;
  string asStack_58 [8];
  string asStack_50 [32];
  undefined1 auStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == param_1) {
    iVar1 = *(int *)(this + 0xe4);
    *(int *)(this + 0xe4) = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
    }
    this_00 = (UIFestivalGoldenEgg *)UISingletonDialog<UIFestivalGoldenEgg>::GetSingletonPtr();
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    __n = asStack_58;
    std::string::string(asStack_50,"mat_festival_golden_egg_hammer");
    iVar1 = PlayerInfo::GetMaterialNum(this_02,asStack_50);
    UIFestivalGoldenEgg::SetCurrentHammer(this_00,iVar1);
    std::string::~string(asStack_50);
    nop();
    TGATourismOctoberData::TGATourismOctoberData((TGATourismOctoberData *)asStack_50);
    std::string::append(asStack_50,"4",(size_t)__n);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xec));
    FUN_05474278(auStack_30,asStack_58);
    std::string::~string(asStack_58);
    std::string::append(asStack_28,"1",(size_t)__n);
    this_03 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogGoldenEgg(this_03,(TGAGoldenEgg *)asStack_50);
    TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)asStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggBundleWidget::Draw(Sexy::Graphics*) */

void __thiscall GoldenEggBundleWidget::Draw(GoldenEggBundleWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  Image *pIVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [8];
  wstring awStack_40 [8];
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2ed0);
  Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3300);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac32c8);
  iVar3 = *(int *)(this + 0xe0);
  if (iVar3 == 1) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2e58);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2e08);
  }
  else if (iVar3 == 2) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2ef8);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2ea8);
  }
  else if (iVar3 == 3) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2f50);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2f28);
  }
  iVar3 = *(int *)(pIVar5 + 0x38);
  iVar1 = FUN_03a18de0(0x28);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,(*(int *)(this + 0x50) - iVar3) / 2,iVar1 - *(int *)(pIVar5 + 0x3c) / 2,
             iVar3,*(int *)(pIVar5 + 0x3c));
  iVar3 = *(int *)(pIVar6 + 0x3c);
  iVar1 = *(int *)(pIVar6 + 0x38);
  iVar2 = FUN_03a18de0(0x23);
  Sexy::Graphics::DrawImage
            (param_1,pIVar6,(*(int *)(this + 0x50) - (int)(float)iVar1) / 2,
             (*(int *)(this + 0x54) - (int)(float)iVar3) / 2 - iVar2,(int)(float)iVar1,
             (int)(float)iVar3);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3328);
  iVar3 = FUN_03a18de0(10);
  iVar1 = FUN_03a18de0(0xd7);
  iVar2 = FUN_03a18de0(0x28);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar3,iVar1,iVar2,iVar2);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe8));
  Sexy::ToWString(asStack_38);
  iVar3 = FUN_03a18de0(0x37);
  iVar1 = FUN_03a18de0(0xd7);
  iVar2 = FUN_03a18de0(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar3,iVar1,iVar2,iVar2);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aCStack_18,3,0);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac31f0);
  iVar3 = FUN_03a18de0(0x6e);
  iVar1 = FUN_03a18de0(0xd7);
  iVar2 = FUN_03a18de0(0x28);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar3,iVar1,iVar2,iVar2);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xec));
  Sexy::ToWString(asStack_38);
  iVar3 = FUN_03a18de0(0x96);
  iVar1 = FUN_03a18de0(0xd7);
  iVar2 = FUN_03a18de0(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar3,iVar1,iVar2,iVar2);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aCStack_18,3,0);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2e80);
  iVar3 = FUN_03a18de0(0x8c);
  iVar1 = FUN_03a18de0(0xaa);
  iVar2 = FUN_03a18de0(0x26);
  iVar4 = FUN_03a18de0(0x24);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar3,iVar1,iVar2,iVar4);
  FUN_05478178(awStack_40,L"[RECHARGEBUNDLE_BUY_TIMES]",auStack_48);
  TodReplaceNumberString(awStack_40,L"{NUMBER}",*(int *)(this + 0xe4));
  TodStringTranslate((wstring *)asStack_38);
  iVar3 = FUN_03a18de0(0x1e);
  Sexy::Insets::Insets(aIStack_28,0,*(int *)(this + 0x54) - iVar3,*(int *)(this + 0x50),iVar3);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aCStack_18,5,0);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  FUN_05476c50(awStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldenEggBundleWidget::GoldenEggBundleWidget() */

void __thiscall GoldenEggBundleWidget::GoldenEggBundleWidget(GoldenEggBundleWidget *this)

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
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_066fdc90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066fdfb8;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyGoldenEgg);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<GoldenEggBundleWidget,void(GoldenEggBundleWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyGoldenEgg,&local_40);
  return;
}

