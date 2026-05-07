// Class: CarnivalPacket


/* CarnivalPacket::~CarnivalPacket() */

void __thiscall CarnivalPacket::~CarnivalPacket(CarnivalPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_066e70c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e73e8;
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CarnivalPacket::~CarnivalPacket() */

void __thiscall CarnivalPacket::~CarnivalPacket(CarnivalPacket *this)

{
  ~CarnivalPacket(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalPacket::InitView(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > const&)
    */

void __thiscall CarnivalPacket::InitView(CarnivalPacket *this,int param_1,vector *param_2)

{
  string *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  PVZ2UIButton *this_00;
  code *pcVar8;
  undefined1 auStack_90 [8];
  string asStack_88 [8];
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  string *local_8;
  
  *(int *)(this + 0xe0) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::UTF8StringToWString((Sexy *)(&DAT_06abf7c0 + (long)param_1 * 8),___stack_chk_guard);
  TodStringTranslate(awStack_78);
  FUN_054766c8(this + 0xe8,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  FUN_05478178(awStack_78,L"[TICKET_NUMBER]",auStack_80);
  lVar6 = FUN_039ab050(*(undefined8 *)param_2,0);
  TodReplaceNumberString(awStack_78,L"{NUM}",*(int *)(lVar6 + 4));
  FUN_054766c8(this + 0xf0,asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  Sexy::StrFormat("IMAGE_UI_CARNIVAL_PACKET%d",asStack_40,(ulong)(param_1 + 1));
  uVar7 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0xf8) = uVar7;
  std::string::~string(asStack_40);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0xb,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abf610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06abfc10,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar2 = FUN_039ac220(0x2d);
  uVar3 = FUN_039ac220(0xf5);
  uVar4 = FUN_039ac220(0x6e);
  uVar5 = FUN_039ac220(0x32);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar2,uVar3,uVar4,uVar5);
  psVar1 = Sexy::gSexyAppBase;
  std::string::string(asStack_88,"[MONTHLY_CARD_PRICE]");
  FUN_05478178(auStack_80,L"[MONTHLY_CARD_PRICE]",auStack_90);
  Sexy::SexyAppBase::GetString(psVar1,(wstring *)asStack_88);
  TodReplaceNumberString
            (awStack_78,L"{NUM}",*(int *)(&DAT_05751ed0 + (long)*(int *)(this + 0xe0) * 4));
  PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_40);
  FUN_05476c50(asStack_40);
  FUN_05476c50(awStack_78);
  FUN_05476c50(auStack_80);
  nop();
  std::string::~string(asStack_88);
  nop();
  pcVar8 = *(code **)(*(long *)this_00 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
  (*pcVar8)(this_00,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarnivalPacket::CarnivalPacket() */

void __thiscall CarnivalPacket::CarnivalPacket(CarnivalPacket *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066e70c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e73e8;
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalPacket::ButtonDepress(int) */

void __thiscall CarnivalPacket::ButtonDepress(CarnivalPacket *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xb) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_00);
    Sexy::StrFormat("com.popcap.ios.chs.PVZ2.HappyFiesta%d",asStack_10,
                    (ulong)*(uint *)(&DAT_05751ed0 + (long)*(int *)(this + 0xe0) * 4));
    PurchaseBroker::RequestPayment(this_01,asStack_10,0);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CarnivalPacket::ButtonDepress(int) */

void __thiscall CarnivalPacket::ButtonDepress(CarnivalPacket *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalPacket::Draw(Sexy::Graphics*) */

void __thiscall CarnivalPacket::Draw(CarnivalPacket *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Image *pIVar5;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf910);
  Draw3SliceImage(param_1,aIStack_18,uVar4);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abfc60);
  iVar1 = FUN_039ac220(0x19);
  iVar2 = FUN_039ac220(0x32);
  iVar3 = FUN_039ac220(0x96);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
  if (*(long *)(this + 0xf8) != 0) {
    iVar1 = FUN_039ac220(0x19);
    iVar2 = FUN_039ac220(0x32);
    iVar3 = FUN_039ac220(0x96);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf8));
  }
  iVar1 = FUN_039ac220(0);
  iVar2 = FUN_039ac220(0x37);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar4,aIStack_18,5,1);
  iVar1 = FUN_039ac220(0);
  iVar2 = FUN_039ac220(200);
  iVar3 = FUN_039ac220(0x2d);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)aIStack_18,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar4,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

