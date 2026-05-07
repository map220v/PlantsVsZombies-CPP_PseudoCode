// Class: TreasurePavilionBundle


/* TreasurePavilionBundle::~TreasurePavilionBundle() */

void __thiscall TreasurePavilionBundle::~TreasurePavilionBundle(TreasurePavilionBundle *this)

{
  *(undefined ***)this = &PTR_GetClass_06645d50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06646078;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TreasurePavilionBundle::~TreasurePavilionBundle() */

void __thiscall TreasurePavilionBundle::~TreasurePavilionBundle(TreasurePavilionBundle *this)

{
  ~TreasurePavilionBundle(this);
  AK::FreeHook(this);
  return;
}


/* TreasurePavilionBundle::Draw(Sexy::Graphics*) */

void __thiscall TreasurePavilionBundle::Draw(TreasurePavilionBundle *this,Graphics *param_1)

{
  if (*(Image **)(this + 0xe8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xe8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasurePavilionBundle::ButtonDepress(int) */

void __thiscall TreasurePavilionBundle::ButtonDepress(TreasurePavilionBundle *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *pPVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xc9) {
    iVar1 = *(int *)(this + 0xe0);
    if (iVar1 == 0) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.JuBaoPavilion30");
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
        __s = "com.popcap.ios.chs.PVZ2.JuBaoPavilion98";
      }
      else if (iVar1 == 2) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.JuBaoPavilion328";
      }
      else {
        if (iVar1 != 3) goto LAB_034a2808;
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.JuBaoPavilion648";
      }
      std::string::string(asStack_10,__s);
      PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
LAB_034a2808:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to TreasurePavilionBundle::ButtonDepress(int) */

void __thiscall TreasurePavilionBundle::ButtonDepress(TreasurePavilionBundle *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* TreasurePavilionBundle::OnBuyTreasurePavilion(int) */

void __thiscall
TreasurePavilionBundle::OnBuyTreasurePavilion(TreasurePavilionBundle *this,int param_1)

{
  UITreasurePavilion *this_00;
  
  if (*(int *)(this + 0xe0) != param_1) {
    return;
  }
  this_00 = (UITreasurePavilion *)UISingletonDialog<UITreasurePavilion>::GetSingletonPtr();
  UITreasurePavilion::Refresh(this_00);
  return;
}


/* TreasurePavilionBundle::TreasurePavilionBundle() */

void __thiscall TreasurePavilionBundle::TreasurePavilionBundle(TreasurePavilionBundle *this)

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
  *(undefined ***)this = &PTR_GetClass_06645d50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06646078;
  *(undefined8 *)(this + 0xf0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyTreasurePavilion);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<TreasurePavilionBundle,void(TreasurePavilionBundle::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyTreasurePavilion,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasurePavilionBundle::InitView(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&, int) */

void __thiscall
TreasurePavilionBundle::InitView
          (TreasurePavilionBundle *this,int param_1,vector *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int *piVar11;
  ulong uVar12;
  Image *pIVar13;
  UIWidgetImage *this_00;
  PVZ2UIButton *pPVar14;
  ulong uVar15;
  long *plVar16;
  code *pcVar17;
  undefined1 auStack_98 [8];
  wstring awStack_90 [8];
  int local_88 [4];
  wstring awStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe4) = param_3;
  *(int *)(this + 0xe0) = param_1;
  Sexy::StrFormat("IMAGE_UI_TREASUREPAVILION_BUNDLE%d",(string *)local_40,(ulong)(param_1 + 1));
  uVar10 = StringHelper::ToImage((string *)local_40,false);
  *(undefined8 *)(this + 0xe8) = uVar10;
  std::string::~string((string *)local_40);
  iVar2 = FUN_034a1d14(0x2d);
  iVar3 = FUN_034a1d14(0x23);
  iVar4 = FUN_034a1d14(0xaa);
  iVar1 = *(int *)(this + 0x50);
  uVar15 = 0;
  iVar5 = iVar3;
  while( true ) {
    uVar10 = *(undefined8 *)param_2;
    uVar12 = FUN_034a17c4(uVar10,*(undefined8 *)(param_2 + 8));
    if (uVar12 <= uVar15) break;
    piVar11 = (int *)FUN_034a1804(uVar10,uVar15);
    plVar16 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar11,piVar11[1],false);
    (**(code **)(*plVar16 + 0x198))(plVar16,iVar5,iVar4,iVar2,iVar2);
    (**(code **)(*(long *)this + 0x60))(this,plVar16);
    uVar15 = uVar15 + 1;
    iVar5 = iVar5 + ((iVar1 + iVar3 * -2) - iVar2);
  }
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3060);
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00,pIVar13);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_034a1d14(0x14);
  uVar6 = FUN_034a1d14(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,(iVar1 - iVar3) - iVar2 / 2,iVar4 - iVar5,uVar6,uVar6);
  local_40[0] = 2;
  UIWidgetImage::SetImageType(this_00,(string *)local_40,0.0);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  local_88[0] = 0x1e;
  local_88[1] = 0x62;
  local_88[2] = 0x148;
  local_88[3] = 0x288;
  FUN_05478178(awStack_90,L"[MONTHLY_CARD_PRICE]",auStack_98);
  TodReplaceNumberString(awStack_90,L"{NUM}",local_88[*(int *)(this + 0xe0)]);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar14,0xc9,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar14;
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_90);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa31c0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06aa3288,3);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  plVar16 = *(long **)(this + 0xf0);
  uVar6 = FUN_034a1d14(0x1c);
  uVar7 = FUN_034a1d14(0xe6);
  uVar8 = FUN_034a1d14(0x78);
  uVar9 = FUN_034a1d14(0x32);
  (**(code **)(*plVar16 + 0x198))(plVar16,uVar6,uVar7,uVar8,uVar9);
  plVar16 = *(long **)(this + 0xf0);
  pcVar17 = *(code **)(*plVar16 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface
                     (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  (*pcVar17)(plVar16,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

