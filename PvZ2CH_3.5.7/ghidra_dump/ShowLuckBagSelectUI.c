// Class: ShowLuckBagSelectUI


/* ShowLuckBagSelectUI::ShowLuckBagSelectUI() */

void __thiscall ShowLuckBagSelectUI::ShowLuckBagSelectUI(ShowLuckBagSelectUI *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06717760;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06717a88;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  return;
}


/* ShowLuckBagSelectUI::~ShowLuckBagSelectUI() */

void __thiscall ShowLuckBagSelectUI::~ShowLuckBagSelectUI(ShowLuckBagSelectUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06717760;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06717a88;
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ShowLuckBagSelectUI::~ShowLuckBagSelectUI() */

void __thiscall ShowLuckBagSelectUI::~ShowLuckBagSelectUI(ShowLuckBagSelectUI *this)

{
  ~ShowLuckBagSelectUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowLuckBagSelectUI::InitView(std::vector<LotteryBonus, std::allocator<LotteryBonus> > const&) */

void __thiscall ShowLuckBagSelectUI::InitView(ShowLuckBagSelectUI *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LuckBagSelectItem *this_00;
  LotteryBonus *pLVar7;
  ulong uVar8;
  PVZ2UIButton *pPVar9;
  undefined8 uVar10;
  ulong uVar11;
  code *pcVar12;
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::operator=
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0xe0),param_1);
  this[0x59] = (ShowLuckBagSelectUI)0x0;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar2 = FUN_03abb658(0x1c2);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_03abb658(0xb4);
  iVar6 = *(int *)(this + 0x54);
  uVar11 = 0;
  while( true ) {
    uVar8 = FUN_03abac24(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar8 <= uVar11) break;
    iVar4 = FUN_03abb658(0x6e);
    iVar5 = FUN_03abb658(100);
    Sexy::Insets::Insets
              (aIStack_40,(iVar1 - iVar2) / 2 + ((uint)uVar11 & 3) * iVar4,
               (iVar6 - iVar3) / 2 + iVar4 * ((int)(uint)uVar11 >> 2),iVar5,iVar5);
    this_00 = ::operator_new(0x108);
    LuckBagSelectItem::LuckBagSelectItem(this_00,(LuckBagSelectRow *)0x0);
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
    pLVar7 = (LotteryBonus *)FUN_03abac44(*(undefined8 *)param_1,uVar11);
    LuckBagSelectItem::init(this_00,pLVar7);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    uVar11 = uVar11 + 1;
  }
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x72,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac7aa8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ac7e48,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar12 = *(code **)(*(long *)pPVar9 + 0x1a0);
  iVar6 = FUN_03abb658(0x78);
  iVar2 = FUN_03abb658(0x87);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = FUN_03abb658(0x2d);
  Sexy::Insets::Insets(aIStack_40,(*(int *)(this + 0x50) - iVar6) / 3,iVar2 + iVar1 / 2,iVar6,iVar3)
  ;
  (*pcVar12)(pPVar9,aIStack_40);
  pcVar12 = *(code **)(*(long *)pPVar9 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar12)(pPVar9,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  TodStringTranslate(L"[BUTTON_CANCEL]");
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x73,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac7aa8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ac7e48,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar12 = *(code **)(*(long *)pPVar9 + 0x1a0);
  iVar6 = FUN_03abb658(0x78);
  iVar2 = FUN_03abb658(0x87);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = FUN_03abb658(0x2d);
  Sexy::Insets::Insets
            (aIStack_40,((*(int *)(this + 0x50) - iVar6) * 2) / 3,iVar2 + iVar1 / 2,iVar6,iVar3);
  (*pcVar12)(pPVar9,aIStack_40);
  pcVar12 = *(code **)(*(long *)pPVar9 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar12)(pPVar9,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowLuckBagSelectUI::SelectOK() */

void __thiscall ShowLuckBagSelectUI::SelectOK(ShowLuckBagSelectUI *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  DNetwork *this_00;
  ulong uVar6;
  string asStack_eb0 [8];
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [1792];
  string asStack_5e8 [1504];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_e88);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_e58,uVar1);
  FUN_054603b8(auStack_e48,&DAT_05593308);
  lVar2 = FUN_03abac24(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  if (lVar2 != 0) {
    do {
      FUN_054603b8(auStack_e48,&DAT_05593310);
      uVar3 = FUN_054603b8(auStack_e48,&DAT_05594050);
      puVar4 = (undefined4 *)FUN_03abac38(*(undefined8 *)(this + 0xe0),uVar6);
      uVar3 = FUN_0546065c(uVar3,*puVar4);
      FUN_054603b8(uVar3,&DAT_05593348);
      uVar3 = FUN_054603b8(auStack_e48,&DAT_055e3dc8);
      lVar2 = FUN_03abac38(*(undefined8 *)(this + 0xe0),uVar6);
      uVar3 = FUN_0546065c(uVar3,*(undefined4 *)(lVar2 + 4));
      FUN_054603b8(uVar3,&DAT_05593348);
      uVar3 = FUN_054603b8(auStack_e48,&DAT_055e3dd0);
      lVar2 = FUN_03abac38(*(undefined8 *)(this + 0xe0),uVar6);
      FUN_0546065c(uVar3,*(undefined4 *)(lVar2 + 8));
      FUN_054603b8(auStack_e48,&DAT_05593340);
      uVar5 = FUN_03abac24(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
      if (uVar6 != uVar5 - 1) {
        FUN_054603b8(auStack_e48,&DAT_05593348);
        uVar5 = FUN_03abac24(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  FUN_054603b8(auStack_e48,&DAT_05593350);
  std::string::string(asStack_eb0,"sl");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  FUN_05462824(asStack_ce8,auStack_e58);
  FUN_05474278(uVar3,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03abb5a0(afStack_ea8,this);
  std::string::string(asStack_eb0,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_5e8,(map *)amStack_e88,30.0,(function *)afStack_ea8,true,true,
             asStack_eb0,0);
  std::string::~string(asStack_eb0);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  FUN_054617bc(auStack_e58);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_e88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShowLuckBagSelectUI::ButtonDepress(int) */

void __thiscall ShowLuckBagSelectUI::ButtonDepress(ShowLuckBagSelectUI *this,int param_1)

{
  PlantAccessoryUI *this_00;
  
  if (param_1 == 0x72) {
    SelectOK(this);
    return;
  }
  if (param_1 == 0x73) {
    this_00 = (PlantAccessoryUI *)UISingletonDialog<UILuckBagSelect>::GetSingletonPtr();
    PlantAccessoryUI::CloseAccessorySuperPacket(this_00);
    return;
  }
  return;
}


/* non-virtual thunk to ShowLuckBagSelectUI::ButtonDepress(int) */

void __thiscall ShowLuckBagSelectUI::ButtonDepress(ShowLuckBagSelectUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowLuckBagSelectUI::Draw(Sexy::Graphics*) */

void __thiscall ShowLuckBagSelectUI::Draw(ShowLuckBagSelectUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03abb658(600);
  iVar2 = FUN_03abb658(400);
  Sexy::Insets::Insets
            (aIStack_18,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar2);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7e20);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  TodStringTranslate(L"[LUCKBAG_CONFIRM]");
  iVar1 = FUN_03abb658(600);
  iVar2 = FUN_03abb658(0x17c);
  iVar3 = FUN_03abb658(0x32);
  Sexy::Insets::Insets
            (aIStack_28,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar3);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar4,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[LUCKBAG_CONFIRM_CONTENT]");
  iVar1 = FUN_03abb658(500);
  iVar2 = FUN_03abb658(0x104);
  iVar3 = FUN_03abb658(0x32);
  Sexy::Insets::Insets
            (aIStack_28,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar3);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar4,aIStack_18,0,1);
  FUN_05476c50(auStack_30);
  iVar1 = FUN_03abb658(500);
  iVar2 = FUN_03abb658(200);
  iVar3 = FUN_03abb658(0xe6);
  Sexy::Insets::Insets
            (aIStack_18,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar3);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7df8);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

