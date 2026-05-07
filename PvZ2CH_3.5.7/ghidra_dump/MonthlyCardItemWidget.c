// Class: MonthlyCardItemWidget


/* MonthlyCardItemWidget::~MonthlyCardItemWidget() */

void __thiscall MonthlyCardItemWidget::~MonthlyCardItemWidget(MonthlyCardItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069bfeb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069c01d8;
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x118);
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* MonthlyCardItemWidget::~MonthlyCardItemWidget() */

void __thiscall MonthlyCardItemWidget::~MonthlyCardItemWidget(MonthlyCardItemWidget *this)

{
  ~MonthlyCardItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardItemWidget::MonthlyCardItemWidget(MonthlyCardSpecialUI*) */

void __thiscall
MonthlyCardItemWidget::MonthlyCardItemWidget
          (MonthlyCardItemWidget *this,MonthlyCardSpecialUI *param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069bfeb0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069c01d8;
  FUN_05476574(this + 0xf8);
  FUN_05476574(this + 0x100);
  FUN_05476574(this + 0x118);
  FUN_05476574(this + 0x120);
  *(undefined8 *)(this + 0xe0) = 0;
  *(MonthlyCardSpecialUI **)(this + 0xf0) = param_1;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  FUN_054772c4(this + 0xf8,&DAT_056f11a8);
  FUN_054772c4(this + 0x100,&DAT_056f11a8);
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  FUN_054772c4(this + 0x118,&DAT_056f11a8);
  TodStringTranslate(L"[MONTHLY_CARD_LINE]");
  FUN_054766c8(this + 0x120,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardItemWidget::InitView(int, MonthlyCardSpecialData) */

void __thiscall
MonthlyCardItemWidget::InitView(MonthlyCardItemWidget *this,uint param_1,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  PVZ2UIButton *pPVar5;
  long *plVar6;
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  local_8 = ___stack_chk_guard;
  *(uint *)(this + 0xe8) = param_1 + 100;
  *(uint *)(this + 0xec) = param_1;
  piVar4 = (int *)FUN_04db4850(uVar3);
  iVar2 = *piVar4;
  iVar1 = piVar4[1];
  TodStringTranslate(L"[MONTHLY_CARD_DAY_TRAIL]");
  TodReplaceNumberString(awStack_78,L"{NUM}",iVar2);
  FUN_054766c8(this + 0xf8,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  TodStringTranslate(L"[MONTHLY_CARD_BUY_TIMES]");
  TodReplaceNumberString(awStack_78,L"{NUM}",*(int *)(&DAT_05755ad0 + (long)(int)param_1 * 4));
  FUN_054766c8(this + 0x100,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  Sexy::StrFormat(L"[MONTHLY_CARD_ORIGINAL_PRICE%d]",awStack_78,(ulong)param_1);
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0x118,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  if ((int)param_1 < 1) {
    FUN_05478178(awStack_78,L"[MONTHLY_CARD_FREE_BUY]",awStack_80);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar5 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar5,*(int *)(this + 0xe8),(ButtonListener *)(this + 0xd8),awStack_78,
               (Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0xe0) = pPVar5;
    FUN_05476c50(awStack_78);
    nop();
  }
  else {
    Sexy::StrFormat("IMAGE_UI_FESTIVALCENTER_DISCOUNT_DISCOUNT_%d",asStack_40,
                    (ulong)*(uint *)(&DAT_05755ac0 + (long)(int)param_1 * 4));
    uVar3 = StringHelper::ToImage(asStack_40,false);
    *(undefined8 *)(this + 0x110) = uVar3;
    std::string::~string(asStack_40);
    TodStringTranslate(L"[MONTHLY_CARD_PRICE]");
    TodReplaceNumberString
              (awStack_80,L"{NUM}",*(int *)(&DAT_05755ab0 + (long)*(int *)(this + 0xec) * 4));
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar5 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar5,*(int *)(this + 0xe8),(ButtonListener *)(this + 0xd8),awStack_78,
               (Color *)asStack_40);
    *(PVZ2UIButton **)(this + 0xe0) = pPVar5;
    FUN_05476c50(awStack_78);
    FUN_05476c50(awStack_80);
  }
  pPVar5 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b99908,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b99ac8,3);
  PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar6 = *(long **)(this + 0xe0);
  *(undefined1 *)((long)plVar6 + 0x59) = 0;
  (**(code **)(*plVar6 + 0x188))(plVar6,iVar1 == 0);
  iVar1 = *(int *)(this + 0x50);
  iVar2 = FUN_04db4cd8(0x14);
  iVar2 = iVar2 + iVar1 / 2;
  (**(code **)(**(long **)(this + 0xe0) + 0x198))
            (*(long **)(this + 0xe0),(iVar1 - iVar2) / 2,*(int *)(this + 0x54) - iVar2 / 2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MonthlyCardItemWidget::UpdateUI(MonthlyCardSpecialData) */

void __thiscall MonthlyCardItemWidget::UpdateUI(MonthlyCardItemWidget *this,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_04db4850(*(undefined8 *)(param_2 + 0x18),(long)*(int *)(this + 0xec));
  plVar2 = *(long **)(this + 0xe0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,*(int *)(lVar1 + 4) == 0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardItemWidget::ButtonDepress(int) */

void __thiscall MonthlyCardItemWidget::ButtonDepress(MonthlyCardItemWidget *this,int param_1)

{
  undefined8 uVar1;
  string *psVar2;
  DNetwork *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  string *psVar3;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1720];
  string asStack_630 [1576];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe8) == param_1) {
    if (*(uint *)(this + 0xec) == 0) {
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_d18);
      std::string::string(asStack_d40,"ai");
      uVar1 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
      local_d48[0] = 0x2a3f;
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
      FUN_05474278(uVar1,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_d40);
      nop();
      psVar3 = asStack_d40;
      std::string::string(asStack_ce8,"t");
      psVar2 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_d18,asStack_ce8);
      std::string::append(psVar2,"0",(size_t)psVar3);
      std::string::~string(asStack_ce8);
      nop();
      psVar3 = asStack_d40;
      std::string::string(asStack_ce8,"i");
      psVar2 = (string *)
               std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                             *)amStack_d18,asStack_ce8);
      std::string::append(psVar2,"0",(size_t)psVar3);
      std::string::~string(asStack_ce8);
      nop();
      this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_04db4c7c(afStack_d38,this);
      std::string::string(asStack_d40,"[NET_CONNECTING]");
      DNetwork::requestMsg
                (this_00,asStack_630,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
    else {
      Sexy::StrFormat("com.popcap.ios.chs.PVZ2.MonthlyCardSpecial0%d",asStack_ce8,
                      (ulong)*(uint *)(this + 0xec));
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(this_01);
      PurchaseBroker::RequestPayment(this_02,asStack_ce8,0);
      std::string::~string(asStack_ce8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to MonthlyCardItemWidget::ButtonDepress(int) */

void __thiscall MonthlyCardItemWidget::ButtonDepress(MonthlyCardItemWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardItemWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
MonthlyCardItemWidget::DrawAll(MonthlyCardItemWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  LotteryResultProgressBar *pLVar12;
  undefined8 uVar13;
  Image *pIVar14;
  SalesProgressBar *pSVar15;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04db4cd8(0x28);
  iVar10 = *(int *)(this + 0x50);
  iVar1 = iVar10 + 7;
  if (-1 < iVar10) {
    iVar1 = iVar10;
  }
  iVar2 = *(int *)(this + 0x54) - (iVar1 >> 3);
  iVar4 = FUN_04db4cd8(0x19);
  iVar5 = FUN_04db4cd8(0xf);
  iVar11 = iVar10 + iVar5 * -2;
  iVar1 = iVar3 + iVar11;
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99bb8);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar7 = FUN_04db4cd8(10);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),iVar2);
  uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99a60);
  Draw9SliceImage(param_2,aIStack_18,uVar13);
  iVar8 = FUN_04db4cd8(5);
  Sexy::Insets::Insets(aIStack_28,0,iVar8,*(int *)(this + 0x50),iVar3);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_2,this + 0xf8,aIStack_28,uVar13,aIStack_18,5,1);
  pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99b90);
  Sexy::Graphics::DrawImage(param_2,pIVar14,iVar5,iVar3,iVar11,iVar11);
  pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99bb8);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99bb8);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99bb8);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar15);
  Sexy::Graphics::DrawImage(param_2,pIVar14,(iVar10 - iVar6) / 2,iVar7 + iVar3,iVar8,iVar9);
  pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99be0);
  Sexy::Graphics::DrawImage(param_2,pIVar14,iVar5,iVar1 - iVar4,iVar11,iVar4);
  Sexy::Insets::Insets(aIStack_28,iVar5,iVar1 - iVar4,iVar11,iVar4);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_2,this + 0x100,aIStack_28,uVar13,aIStack_18,5,1);
  if (0 < *(int *)(this + 0xec)) {
    Sexy::Insets::Insets(aIStack_28,iVar5,iVar1,iVar11,iVar4);
    uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_18,2);
    WriteWordInRect(param_2,this + 0x118,aIStack_28,uVar13,aIStack_18,5,1);
    Sexy::Insets::Insets(aIStack_28,iVar5,iVar1,iVar11,iVar4);
    uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_18,2);
    WriteWordInRect(param_2,this + 0x120,aIStack_28,uVar13,aIStack_18,5,1);
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (*(LotteryResultProgressBar **)(this + 0x110) != (LotteryResultProgressBar *)0x0) {
    iVar1 = *(int *)(this + 0x50);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x110))
    ;
    iVar3 = FUN_04db4cd8(10);
    iVar11 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x110));
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x110));
    pSVar15 = *(SalesProgressBar **)(this + 0x110);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar15);
    Sexy::Graphics::DrawImage
              (param_2,(Image *)pSVar15,(iVar1 - iVar10) + iVar3,iVar2 - iVar11,iVar4,iVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

