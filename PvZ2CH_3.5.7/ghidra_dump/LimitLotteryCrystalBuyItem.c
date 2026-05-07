// Class: LimitLotteryCrystalBuyItem


/* LimitLotteryCrystalBuyItem::~LimitLotteryCrystalBuyItem() */

void __thiscall
LimitLotteryCrystalBuyItem::~LimitLotteryCrystalBuyItem(LimitLotteryCrystalBuyItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066df120;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LimitLotteryCrystalBuyItem::~LimitLotteryCrystalBuyItem() */

void __thiscall
LimitLotteryCrystalBuyItem::~LimitLotteryCrystalBuyItem(LimitLotteryCrystalBuyItem *this)

{
  ~LimitLotteryCrystalBuyItem(this);
  AK::FreeHook(this);
  return;
}


/* LimitLotteryCrystalBuyItem::LimitLotteryCrystalBuyItem(Sexy::ButtonListener*) */

void __thiscall
LimitLotteryCrystalBuyItem::LimitLotteryCrystalBuyItem
          (LimitLotteryCrystalBuyItem *this,ButtonListener *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(ButtonListener **)(this + 0xd8) = param_1;
  *(undefined ***)this = &PTR_GetClass_066df120;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryCrystalBuyItem::SetIndex(int) */

void __thiscall LimitLotteryCrystalBuyItem::SetIndex(LimitLotteryCrystalBuyItem *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PVZ2UIButton *this_00;
  undefined8 uVar5;
  wchar_t *pwVar6;
  code *pcVar7;
  int iVar8;
  undefined1 auStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  Color aCStack_40 [56];
  long local_8;
  
  *(int *)(this + 0xd4) = param_1;
  local_8 = ___stack_chk_guard;
  FUN_05476574(awStack_80);
  iVar8 = *(int *)(this + 0xd4);
  if (iVar8 == 1) {
    pwVar6 = L"[LIMIT_LOTTERY_PACKETS_SMALL]";
    iVar8 = 0xc9;
  }
  else if (iVar8 == 2) {
    pwVar6 = L"[LIMIT_LOTTERY_PACKETS_BIG]";
    iVar8 = 0xca;
  }
  else {
    if (iVar8 != 3) {
      iVar8 = 0;
      goto LAB_0398ab6c;
    }
    pwVar6 = L"[LIMIT_LOTTERY_PACKETS_SUPER_BIG]";
    iVar8 = 0xcb;
  }
  TodStringTranslate(pwVar6);
  FUN_054766c8(awStack_80,aCStack_40);
  FUN_05476c50(aCStack_40);
LAB_0398ab6c:
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
  Sexy::Color::Color(aCStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(this_00,iVar8,*(ButtonListener **)(this + 0xd8),awStack_78,aCStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abe5c8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aCStack_40,&DAT_06abe7c0,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aCStack_40);
  PVZ2UIButton::SetLabelText(this_00,awStack_80);
  pcVar7 = *(code **)(*(long *)this_00 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  (*pcVar7)(this_00,uVar5);
  uVar1 = FUN_0398a1f8(0x41);
  uVar2 = FUN_0398a1f8(0xbe);
  uVar3 = FUN_0398a1f8(0x96);
  uVar4 = FUN_0398a1f8(0x34);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  FUN_05476c50(awStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryCrystalBuyItem::Draw(Sexy::Graphics*) */

void __thiscall LimitLotteryCrystalBuyItem::Draw(LimitLotteryCrystalBuyItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(this + 0xd4);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe350);
    iVar1 = FUN_0398a1f8(0x5c);
    iVar2 = FUN_0398a1f8(0x23);
    iVar3 = FUN_0398a1f8(100);
    iVar4 = FUN_0398a1f8(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    iVar1 = FUN_0398a1f8(0xf);
    iVar2 = FUN_0398a1f8(0x46);
    iVar3 = FUN_0398a1f8(0xff);
    iVar4 = FUN_0398a1f8(0xb4);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe930);
    Draw9SliceImage(param_1,aIStack_18,uVar6);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe6e0);
    iVar1 = FUN_0398a1f8(0x23);
    iVar2 = FUN_0398a1f8(0x69);
    iVar3 = FUN_0398a1f8(0x5a);
    iVar4 = FUN_0398a1f8(0x46);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe3c8);
    iVar1 = FUN_0398a1f8(0x2d);
    iVar2 = FUN_0398a1f8(0x73);
    iVar3 = FUN_0398a1f8(0x3c);
    iVar4 = FUN_0398a1f8(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    std::string::string(asStack_38,"X6000");
    Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1);
    iVar1 = FUN_0398a1f8(0x37);
    iVar2 = FUN_0398a1f8(0x94);
    iVar3 = FUN_0398a1f8(0x5a);
    iVar4 = FUN_0398a1f8(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
    nop();
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe6e0);
    iVar1 = FUN_0398a1f8(0x91);
    iVar2 = FUN_0398a1f8(0x69);
    iVar3 = FUN_0398a1f8(0x5a);
    iVar4 = FUN_0398a1f8(0x46);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe5f0);
    iVar1 = FUN_0398a1f8(0x9b);
    iVar2 = FUN_0398a1f8(0x73);
    iVar3 = FUN_0398a1f8(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
    std::string::string(asStack_38,"X60");
    Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_00);
    iVar1 = FUN_0398a1f8(0xb5);
    iVar2 = FUN_0398a1f8(0x94);
    iVar3 = FUN_0398a1f8(0x5a);
    iVar4 = FUN_0398a1f8(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
  }
  else if (iVar1 == 2) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe490);
    iVar1 = FUN_0398a1f8(0x5c);
    iVar2 = FUN_0398a1f8(0x23);
    iVar3 = FUN_0398a1f8(100);
    iVar4 = FUN_0398a1f8(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    iVar1 = FUN_0398a1f8(0xf);
    iVar2 = FUN_0398a1f8(0x46);
    iVar3 = FUN_0398a1f8(0xff);
    iVar4 = FUN_0398a1f8(0xb4);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe930);
    Draw9SliceImage(param_1,aIStack_18,uVar6);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe6e0);
    iVar1 = FUN_0398a1f8(0x23);
    iVar2 = FUN_0398a1f8(0x69);
    iVar3 = FUN_0398a1f8(0x5a);
    iVar4 = FUN_0398a1f8(0x46);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe3c8);
    iVar1 = FUN_0398a1f8(0x2d);
    iVar2 = FUN_0398a1f8(0x73);
    iVar3 = FUN_0398a1f8(0x3c);
    iVar4 = FUN_0398a1f8(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    std::string::string(asStack_38,"X30000");
    Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_01);
    iVar1 = FUN_0398a1f8(0x37);
    iVar2 = FUN_0398a1f8(0x94);
    iVar3 = FUN_0398a1f8(0x5a);
    iVar4 = FUN_0398a1f8(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
    nop();
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe6e0);
    iVar1 = FUN_0398a1f8(0x91);
    iVar2 = FUN_0398a1f8(0x69);
    iVar3 = FUN_0398a1f8(0x5a);
    iVar4 = FUN_0398a1f8(0x46);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe5f0);
    iVar1 = FUN_0398a1f8(0x9b);
    iVar2 = FUN_0398a1f8(0x73);
    iVar3 = FUN_0398a1f8(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
    std::string::string(asStack_38,"X300");
    Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_02);
    iVar1 = FUN_0398a1f8(0xb5);
    iVar2 = FUN_0398a1f8(0x94);
    iVar3 = FUN_0398a1f8(0x5a);
    iVar4 = FUN_0398a1f8(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
  }
  else {
    if (iVar1 != 3) goto LAB_0398f844;
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe8f0);
    iVar1 = FUN_0398a1f8(0x5c);
    iVar2 = FUN_0398a1f8(0x23);
    iVar3 = FUN_0398a1f8(100);
    iVar4 = FUN_0398a1f8(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    iVar1 = FUN_0398a1f8(0xf);
    iVar2 = FUN_0398a1f8(0x46);
    iVar3 = FUN_0398a1f8(0xff);
    iVar4 = FUN_0398a1f8(0xb4);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe930);
    Draw9SliceImage(param_1,aIStack_18,uVar6);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe6e0);
    iVar1 = FUN_0398a1f8(0x23);
    iVar2 = FUN_0398a1f8(0x69);
    iVar3 = FUN_0398a1f8(0x5a);
    iVar4 = FUN_0398a1f8(0x46);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe3c8);
    iVar1 = FUN_0398a1f8(0x2d);
    iVar2 = FUN_0398a1f8(0x73);
    iVar3 = FUN_0398a1f8(0x3c);
    iVar4 = FUN_0398a1f8(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    std::string::string(asStack_38,"X396000");
    Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_03);
    iVar1 = FUN_0398a1f8(0x2d);
    iVar2 = FUN_0398a1f8(0x94);
    iVar3 = FUN_0398a1f8(100);
    iVar4 = FUN_0398a1f8(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
    nop();
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe6e0);
    iVar1 = FUN_0398a1f8(0x87);
    iVar2 = FUN_0398a1f8(0x69);
    iVar3 = FUN_0398a1f8(0x5a);
    iVar4 = FUN_0398a1f8(0x46);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe5f0);
    iVar1 = FUN_0398a1f8(0x91);
    iVar2 = FUN_0398a1f8(0x73);
    iVar3 = FUN_0398a1f8(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
    std::string::string(asStack_38,"X3960");
    Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_04);
    iVar1 = FUN_0398a1f8(0xb5);
    iVar2 = FUN_0398a1f8(0x94);
    iVar3 = FUN_0398a1f8(0x5a);
    iVar4 = FUN_0398a1f8(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
  }
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  nop();
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe730);
  iVar1 = FUN_0398a1f8(0xb4);
  iVar2 = FUN_0398a1f8(0x5a);
  iVar3 = FUN_0398a1f8(0x32);
  iVar4 = FUN_0398a1f8(0x3c);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
LAB_0398f844:
  nop();
  if (*(int *)(this + 0xd4) - 2U < 2) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe520);
    iVar1 = FUN_0398a1f8(0xd7);
    iVar2 = FUN_0398a1f8(0xb4);
    iVar3 = FUN_0398a1f8(0x3c);
    iVar4 = FUN_0398a1f8(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

