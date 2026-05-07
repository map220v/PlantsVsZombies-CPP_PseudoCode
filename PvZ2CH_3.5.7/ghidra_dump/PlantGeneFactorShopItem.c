// Class: PlantGeneFactorShopItem


/* PlantGeneFactorShopItem::~PlantGeneFactorShopItem() */

void __thiscall PlantGeneFactorShopItem::~PlantGeneFactorShopItem(PlantGeneFactorShopItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0669ff60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a0288;
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantGeneFactorShopItem::~PlantGeneFactorShopItem() */

void __thiscall PlantGeneFactorShopItem::~PlantGeneFactorShopItem(PlantGeneFactorShopItem *this)

{
  ~PlantGeneFactorShopItem(this);
  AK::FreeHook(this);
  return;
}


/* PlantGeneFactorShopItem::PlantGeneFactorShopItem() */

void __thiscall PlantGeneFactorShopItem::PlantGeneFactorShopItem(PlantGeneFactorShopItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0669ff60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066a0288;
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneFactorShopItem::InitView(int) */

void __thiscall PlantGeneFactorShopItem::InitView(PlantGeneFactorShopItem *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PVZ2UIButton *this_00;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_88 [8];
  string asStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  Sexy::StrFormat("[GENE_FACTOR_BUNDLE%d]",asStack_80,(ulong)(param_1 + 1));
  Sexy::ToWString(asStack_80);
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0xe8,aPStack_40);
  FUN_05476c50(aPStack_40);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  Sexy::StrFormat("[GENE_FACTOR_BUNDLE%d_DES]",asStack_80,(ulong)(*(int *)(this + 0xe0) + 1));
  Sexy::ToWString(asStack_80);
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0xf0,aPStack_40);
  FUN_05476c50(aPStack_40);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  FUN_05478178(asStack_80,L"[MONTHLY_CARD_PRICE]",auStack_88);
  TodReplaceNumberString((wstring *)asStack_80,L"{NUM}",*(int *)(&DAT_05751ad0 + (long)param_1 * 4))
  ;
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x16,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  FUN_05476c50(asStack_80);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ab2758,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ab29e8,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar1 = FUN_03800484(0x28);
  uVar2 = FUN_03800484(0xe9);
  uVar3 = FUN_03800484(0x78);
  uVar4 = FUN_03800484(0x32);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  pcVar6 = *(code **)(*(long *)this_00 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
  (*pcVar6)(this_00,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneFactorShopItem::ButtonDepress(int) */

void __thiscall PlantGeneFactorShopItem::ButtonDepress(PlantGeneFactorShopItem *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x16) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_00);
    Sexy::StrFormat("com.popcap.ios.chs.PVZ2.GeneCultivate%d",asStack_10,
                    (ulong)*(uint *)(&DAT_05751ad0 + (long)*(int *)(this + 0xe0) * 4));
    PurchaseBroker::RequestPayment(this_01,asStack_10,0);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantGeneFactorShopItem::ButtonDepress(int) */

void __thiscall PlantGeneFactorShopItem::ButtonDepress(PlantGeneFactorShopItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGeneFactorShopItem::Draw(Sexy::Graphics*) */

void __thiscall PlantGeneFactorShopItem::Draw(PlantGeneFactorShopItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  long lVar7;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2670);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2d68);
  iVar1 = FUN_03800484(0x19);
  iVar2 = FUN_03800484(0x32);
  iVar3 = FUN_03800484(0x96);
  iVar4 = FUN_03800484(0x8c);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar4);
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 0) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2ab8;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab28e8;
    if ((((iVar1 != 1) && (this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2648, iVar1 != 2))
        && (this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2968, iVar1 != 3)) &&
       (this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab26b0, iVar1 != 4)) {
      if (iVar1 != 5) goto LAB_03808000;
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab2a38;
    }
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar2 = FUN_03800484(100);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar1 = *(int *)(lVar7 + 0x38);
  iVar3 = FUN_03800484(0x78);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2 - iVar1 / 2,iVar3 - *(int *)(lVar7 + 0x3c) / 2);
LAB_03808000:
  iVar1 = FUN_03800484(0x46);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),iVar1);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar5,aIStack_18,5,1);
  iVar1 = FUN_03800484(0);
  iVar2 = FUN_03800484(0xbe);
  iVar3 = FUN_03800484(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)aIStack_18,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar5,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

