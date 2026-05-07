// Class: UITheaterDiceShopItem


/* UITheaterDiceShopItem::~UITheaterDiceShopItem() */

void __thiscall UITheaterDiceShopItem::~UITheaterDiceShopItem(UITheaterDiceShopItem *this)

{
  *(undefined ***)this = &PTR_GetClass_067152a0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UITheaterDiceShopItem::~UITheaterDiceShopItem() */

void __thiscall UITheaterDiceShopItem::~UITheaterDiceShopItem(UITheaterDiceShopItem *this)

{
  ~UITheaterDiceShopItem(this);
  AK::FreeHook(this);
  return;
}


/* UITheaterDiceShopItem::UITheaterDiceShopItem(Sexy::ButtonListener*) */

void __thiscall
UITheaterDiceShopItem::UITheaterDiceShopItem(UITheaterDiceShopItem *this,ButtonListener *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(ButtonListener **)(this + 0xd8) = param_1;
  *(undefined ***)this = &PTR_GetClass_067152a0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITheaterDiceShopItem::SetIndex(int) */

void __thiscall UITheaterDiceShopItem::SetIndex(UITheaterDiceShopItem *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PVZ2UIButton *this_00;
  undefined8 uVar5;
  int iVar6;
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
  iVar6 = *(int *)(this + 0xd4);
  if (iVar6 == 1) {
    iVar8 = 0xc9;
    FUN_05478178(awStack_78,L"[PLANTTRIAL_BUY_BUTTON_NAME_1]",auStack_88);
    iVar6 = 1;
  }
  else if (iVar6 == 2) {
    iVar8 = 0xca;
    FUN_05478178(awStack_78,L"[PLANTTRIAL_BUY_BUTTON_NAME_1]",auStack_88);
    iVar6 = 0xc;
  }
  else if (iVar6 == 3) {
    iVar8 = 0xcb;
    FUN_05478178(awStack_78,L"[PLANTTRIAL_BUY_BUTTON_NAME_1]",auStack_88);
    iVar6 = 0x58;
  }
  else if (iVar6 == 4) {
    iVar8 = 0xcc;
    FUN_05478178(awStack_78,L"[PLANTTRIAL_BUY_BUTTON_NAME_1]",auStack_88);
    iVar6 = 0xa8;
  }
  else {
    if (iVar6 != 5) {
      iVar8 = 0;
      goto LAB_03ab6238;
    }
    iVar8 = 0xcd;
    FUN_05478178(awStack_78,L"[PLANTTRIAL_BUY_BUTTON_NAME_1]",auStack_88);
    iVar6 = 0xf8;
  }
  TodReplaceNumberString(awStack_78,L"{NUMBER}",iVar6);
  FUN_054766c8(awStack_80,aCStack_40);
  FUN_05476c50(aCStack_40);
  FUN_05476c50(awStack_78);
  nop();
LAB_03ab6238:
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
  Sexy::Color::Color(aCStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(this_00,iVar8,*(ButtonListener **)(this + 0xd8),awStack_78,aCStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac7898,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aCStack_40,&DAT_06ac7868,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aCStack_40);
  PVZ2UIButton::SetLabelText(this_00,awStack_80);
  pcVar7 = *(code **)(*(long *)this_00 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  (*pcVar7)(this_00,uVar5);
  uVar1 = FUN_03ab60a0(0x41);
  uVar2 = FUN_03ab60a0(0xbe);
  uVar3 = FUN_03ab60a0(0x96);
  uVar4 = FUN_03ab60a0(0x34);
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
/* UITheaterDiceShopItem::Draw(Sexy::Graphics*) */

void __thiscall UITheaterDiceShopItem::Draw(UITheaterDiceShopItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *extraout_x1_06;
  string *extraout_x1_07;
  string *extraout_x1_08;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(this + 0xd4);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 1) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7a08);
    iVar1 = FUN_03ab60a0(0x5c);
    iVar2 = FUN_03ab60a0(0x23);
    iVar3 = FUN_03ab60a0(100);
    iVar4 = FUN_03ab60a0(0x1e);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    iVar1 = FUN_03ab60a0(0xf);
    iVar2 = FUN_03ab60a0(0x46);
    iVar3 = FUN_03ab60a0(0xff);
    iVar4 = FUN_03ab60a0(0xb4);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac75c8);
    Draw9SliceImage(param_1,aIStack_18,uVar6);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7930);
    iVar1 = FUN_03ab60a0(0x23);
    iVar2 = FUN_03ab60a0(0x69);
    iVar3 = FUN_03ab60a0(0x5a);
    iVar4 = FUN_03ab60a0(0x46);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7840);
    iVar1 = FUN_03ab60a0(0x2d);
    iVar2 = FUN_03ab60a0(0x73);
    iVar3 = FUN_03ab60a0(0x3c);
    iVar4 = FUN_03ab60a0(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    std::string::string(asStack_38,"X1000");
    Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_01);
    iVar1 = FUN_03ab60a0(0x2d);
    iVar2 = FUN_03ab60a0(0x94);
    iVar3 = FUN_03ab60a0(100);
    iVar4 = FUN_03ab60a0(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
    nop();
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7930);
    iVar1 = FUN_03ab60a0(0x91);
    iVar2 = FUN_03ab60a0(0x69);
    iVar3 = FUN_03ab60a0(0x5a);
    iVar4 = FUN_03ab60a0(0x46);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac75f8);
    iVar1 = FUN_03ab60a0(0x9b);
    iVar2 = FUN_03ab60a0(0x73);
    iVar3 = FUN_03ab60a0(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
    std::string::string(asStack_38,"X1");
    Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_02);
    iVar1 = FUN_03ab60a0(0xb5);
    iVar2 = FUN_03ab60a0(0x94);
    iVar3 = FUN_03ab60a0(0x5a);
    iVar4 = FUN_03ab60a0(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
    Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
    nop();
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7980);
    iVar1 = FUN_03ab60a0(0xb4);
    iVar2 = FUN_03ab60a0(0x5a);
    iVar3 = FUN_03ab60a0(0x32);
    iVar4 = FUN_03ab60a0(0x3c);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
    nop();
  }
  else {
    if (iVar1 == 2) {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac75a0);
      iVar1 = FUN_03ab60a0(0x5c);
      iVar2 = FUN_03ab60a0(0x23);
      iVar3 = FUN_03ab60a0(100);
      iVar4 = FUN_03ab60a0(0x1e);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      iVar1 = FUN_03ab60a0(0xf);
      iVar2 = FUN_03ab60a0(0x46);
      iVar3 = FUN_03ab60a0(0xff);
      iVar4 = FUN_03ab60a0(0xb4);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac75c8);
      Draw9SliceImage(param_1,aIStack_18,uVar6);
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7930);
      iVar1 = FUN_03ab60a0(0x23);
      iVar2 = FUN_03ab60a0(0x69);
      iVar3 = FUN_03ab60a0(0x5a);
      iVar4 = FUN_03ab60a0(0x46);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7840);
      iVar1 = FUN_03ab60a0(0x2d);
      iVar2 = FUN_03ab60a0(0x73);
      iVar3 = FUN_03ab60a0(0x3c);
      iVar4 = FUN_03ab60a0(0x32);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      std::string::string(asStack_38,"X15000");
      Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_03);
      iVar1 = FUN_03ab60a0(0x2d);
      iVar2 = FUN_03ab60a0(0x94);
      iVar3 = FUN_03ab60a0(100);
      iVar4 = FUN_03ab60a0(0x1e);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
      uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
      Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
      WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
      FUN_05476c50(auStack_30);
      std::string::~string(asStack_38);
      nop();
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7930);
      iVar1 = FUN_03ab60a0(0x91);
      iVar2 = FUN_03ab60a0(0x69);
      iVar3 = FUN_03ab60a0(0x5a);
      iVar4 = FUN_03ab60a0(0x46);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac75f8);
      iVar1 = FUN_03ab60a0(0x9b);
      iVar2 = FUN_03ab60a0(0x73);
      iVar3 = FUN_03ab60a0(0x32);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
      std::string::string(asStack_38,"X15");
      Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_04);
      iVar1 = FUN_03ab60a0(0xb5);
      iVar2 = FUN_03ab60a0(0x94);
      iVar3 = FUN_03ab60a0(0x5a);
      iVar4 = FUN_03ab60a0(0x1e);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
      uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
      Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
      WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
      FUN_05476c50(auStack_30);
      std::string::~string(asStack_38);
      nop();
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7980);
      iVar1 = FUN_03ab60a0(0xb4);
      iVar2 = FUN_03ab60a0(0x5a);
      iVar3 = FUN_03ab60a0(0x32);
      iVar4 = FUN_03ab60a0(0x3c);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      nop();
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac77c8;
    }
    else if (iVar1 == 3) {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac79e0);
      iVar1 = FUN_03ab60a0(0x5c);
      iVar2 = FUN_03ab60a0(0x23);
      iVar3 = FUN_03ab60a0(100);
      iVar4 = FUN_03ab60a0(0x1e);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      iVar1 = FUN_03ab60a0(0xf);
      iVar2 = FUN_03ab60a0(0x46);
      iVar3 = FUN_03ab60a0(0xff);
      iVar4 = FUN_03ab60a0(0xb4);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac75c8);
      Draw9SliceImage(param_1,aIStack_18,uVar6);
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7930);
      iVar1 = FUN_03ab60a0(0x23);
      iVar2 = FUN_03ab60a0(0x69);
      iVar3 = FUN_03ab60a0(0x5a);
      iVar4 = FUN_03ab60a0(0x46);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7840);
      iVar1 = FUN_03ab60a0(0x2d);
      iVar2 = FUN_03ab60a0(0x73);
      iVar3 = FUN_03ab60a0(0x3c);
      iVar4 = FUN_03ab60a0(0x32);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      std::string::string(asStack_38,"X190000");
      Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_05);
      iVar1 = FUN_03ab60a0(0x2d);
      iVar2 = FUN_03ab60a0(0x94);
      iVar3 = FUN_03ab60a0(100);
      iVar4 = FUN_03ab60a0(0x1e);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
      uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
      Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
      WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
      FUN_05476c50(auStack_30);
      std::string::~string(asStack_38);
      nop();
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7930);
      iVar1 = FUN_03ab60a0(0x87);
      iVar2 = FUN_03ab60a0(0x69);
      iVar3 = FUN_03ab60a0(0x5a);
      iVar4 = FUN_03ab60a0(0x46);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac75f8);
      iVar1 = FUN_03ab60a0(0x91);
      iVar2 = FUN_03ab60a0(0x73);
      iVar3 = FUN_03ab60a0(0x32);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
      std::string::string(asStack_38,"X190");
      Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_06);
      iVar1 = FUN_03ab60a0(0xb5);
      iVar2 = FUN_03ab60a0(0x94);
      iVar3 = FUN_03ab60a0(0x5a);
      iVar4 = FUN_03ab60a0(0x1e);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
      uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
      Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
      WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
      FUN_05476c50(auStack_30);
      std::string::~string(asStack_38);
      nop();
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7980);
      iVar1 = FUN_03ab60a0(0xb4);
      iVar2 = FUN_03ab60a0(0x5a);
      iVar3 = FUN_03ab60a0(0x32);
      iVar4 = FUN_03ab60a0(0x3c);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      nop();
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7628;
    }
    else if (iVar1 == 4) {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7650);
      iVar1 = FUN_03ab60a0(0x5c);
      iVar2 = FUN_03ab60a0(0x23);
      iVar3 = FUN_03ab60a0(100);
      iVar4 = FUN_03ab60a0(0x1e);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      iVar1 = FUN_03ab60a0(0xf);
      iVar2 = FUN_03ab60a0(0x46);
      iVar3 = FUN_03ab60a0(0xff);
      iVar4 = FUN_03ab60a0(0xb4);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac75c8);
      Draw9SliceImage(param_1,aIStack_18,uVar6);
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7930);
      iVar1 = FUN_03ab60a0(0x23);
      iVar2 = FUN_03ab60a0(0x69);
      iVar3 = FUN_03ab60a0(0x5a);
      iVar4 = FUN_03ab60a0(0x46);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7840);
      iVar1 = FUN_03ab60a0(0x2d);
      iVar2 = FUN_03ab60a0(0x73);
      iVar3 = FUN_03ab60a0(0x3c);
      iVar4 = FUN_03ab60a0(0x32);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      std::string::string(asStack_38,"X456000");
      Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_07);
      iVar1 = FUN_03ab60a0(0x2d);
      iVar2 = FUN_03ab60a0(0x94);
      iVar3 = FUN_03ab60a0(100);
      iVar4 = FUN_03ab60a0(0x1e);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
      uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
      Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
      WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
      FUN_05476c50(auStack_30);
      std::string::~string(asStack_38);
      nop();
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7930);
      iVar1 = FUN_03ab60a0(0x87);
      iVar2 = FUN_03ab60a0(0x69);
      iVar3 = FUN_03ab60a0(0x5a);
      iVar4 = FUN_03ab60a0(0x46);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac75f8);
      iVar1 = FUN_03ab60a0(0x91);
      iVar2 = FUN_03ab60a0(0x73);
      iVar3 = FUN_03ab60a0(0x32);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
      std::string::string(asStack_38,"X456");
      Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_08);
      iVar1 = FUN_03ab60a0(0xb5);
      iVar2 = FUN_03ab60a0(0x94);
      iVar3 = FUN_03ab60a0(0x5a);
      iVar4 = FUN_03ab60a0(0x1e);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
      uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
      Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
      WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
      FUN_05476c50(auStack_30);
      std::string::~string(asStack_38);
      nop();
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7980);
      iVar1 = FUN_03ab60a0(0xb4);
      iVar2 = FUN_03ab60a0(0x5a);
      iVar3 = FUN_03ab60a0(0x32);
      iVar4 = FUN_03ab60a0(0x3c);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      nop();
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac78e8;
    }
    else {
      if (iVar1 != 5) {
        nop();
        goto LAB_03ab8aec;
      }
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7790);
      iVar1 = FUN_03ab60a0(0x5c);
      iVar2 = FUN_03ab60a0(0x23);
      iVar3 = FUN_03ab60a0(100);
      iVar4 = FUN_03ab60a0(0x1e);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      iVar1 = FUN_03ab60a0(0xf);
      iVar2 = FUN_03ab60a0(0x46);
      iVar3 = FUN_03ab60a0(0xff);
      iVar4 = FUN_03ab60a0(0xb4);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac75c8);
      Draw9SliceImage(param_1,aIStack_18,uVar6);
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7930);
      iVar1 = FUN_03ab60a0(0x23);
      iVar2 = FUN_03ab60a0(0x69);
      iVar3 = FUN_03ab60a0(0x5a);
      iVar4 = FUN_03ab60a0(0x46);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7840);
      iVar1 = FUN_03ab60a0(0x2d);
      iVar2 = FUN_03ab60a0(0x73);
      iVar3 = FUN_03ab60a0(0x3c);
      iVar4 = FUN_03ab60a0(0x32);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      std::string::string(asStack_38,"X800000");
      Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1);
      iVar1 = FUN_03ab60a0(0x2d);
      iVar2 = FUN_03ab60a0(0x94);
      iVar3 = FUN_03ab60a0(100);
      iVar4 = FUN_03ab60a0(0x1e);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
      uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
      Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
      WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
      FUN_05476c50(auStack_30);
      std::string::~string(asStack_38);
      nop();
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7930);
      iVar1 = FUN_03ab60a0(0x87);
      iVar2 = FUN_03ab60a0(0x69);
      iVar3 = FUN_03ab60a0(0x5a);
      iVar4 = FUN_03ab60a0(0x46);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac75f8);
      iVar1 = FUN_03ab60a0(0x91);
      iVar2 = FUN_03ab60a0(0x73);
      iVar3 = FUN_03ab60a0(0x32);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
      std::string::string(asStack_38,"X800");
      Sexy::ToSexyString((Sexy *)asStack_38,extraout_x1_00);
      iVar1 = FUN_03ab60a0(0xb5);
      iVar2 = FUN_03ab60a0(0x94);
      iVar3 = FUN_03ab60a0(0x5a);
      iVar4 = FUN_03ab60a0(0x1e);
      Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
      uVar6 = PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline;
      Sexy::Insets::Insets(aIStack_28,3,0xa9,0xf4,0xff);
      WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,2,1);
      FUN_05476c50(auStack_30);
      std::string::~string(asStack_38);
      nop();
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7980);
      iVar1 = FUN_03ab60a0(0xb4);
      iVar2 = FUN_03ab60a0(0x5a);
      iVar3 = FUN_03ab60a0(0x32);
      iVar4 = FUN_03ab60a0(0x3c);
      Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
      nop();
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac78c0;
    }
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    iVar1 = FUN_03ab60a0(0xcd);
    iVar2 = FUN_03ab60a0(0xb4);
    iVar3 = FUN_03ab60a0(0x3c);
    iVar4 = FUN_03ab60a0(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
  }
LAB_03ab8aec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

