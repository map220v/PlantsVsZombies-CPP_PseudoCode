// Class: AutumnHarvestBundleWidget


/* AutumnHarvestBundleWidget::~AutumnHarvestBundleWidget() */

void __thiscall
AutumnHarvestBundleWidget::~AutumnHarvestBundleWidget(AutumnHarvestBundleWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069f6420;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f6748;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AutumnHarvestBundleWidget::~AutumnHarvestBundleWidget() */

void __thiscall
AutumnHarvestBundleWidget::~AutumnHarvestBundleWidget(AutumnHarvestBundleWidget *this)

{
  ~AutumnHarvestBundleWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestBundleWidget::InitView(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo>
   > const&, int) */

void __thiscall
AutumnHarvestBundleWidget::InitView
          (AutumnHarvestBundleWidget *this,int param_1,vector *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong uVar9;
  PVZ2UIButton *pPVar10;
  long *plVar11;
  ulong uVar12;
  code *pcVar13;
  undefined1 auStack_a0 [8];
  wstring awStack_98 [8];
  int local_90 [6];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe4) = param_3;
  *(int *)(this + 0xe0) = param_1;
  Sexy::StrFormat("IMAGE_UI_AUTUMNHARVEST_BUNDLE%d",asStack_40,(ulong)(param_1 + 1));
  uVar7 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0xe8) = uVar7;
  std::string::~string(asStack_40);
  uVar1 = FUN_04ebda84(0x2d);
  iVar2 = FUN_04ebda84(7);
  iVar3 = FUN_04ebda84(0x37);
  uVar4 = FUN_04ebda84(0xa0);
  uVar12 = 0;
  while( true ) {
    iVar2 = iVar2 + iVar3;
    uVar7 = *(undefined8 *)param_2;
    uVar9 = FUN_04ebc1cc(uVar7,*(undefined8 *)(param_2 + 8));
    if (uVar9 <= uVar12) break;
    piVar8 = (int *)FUN_04ebc28c(uVar7,uVar12);
    plVar11 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar8,piVar8[1],false);
    (**(code **)(*plVar11 + 0x198))(plVar11,iVar2,uVar4,uVar1,uVar1);
    (**(code **)(*(long *)this + 0x60))(this,plVar11);
    uVar12 = uVar12 + 1;
  }
  local_90[0] = 6;
  local_90[2] = 0x62;
  local_90[4] = 0x44;
  local_90[1] = 0x1e;
  local_90[3] = 0x2d;
  FUN_05478178(awStack_98,L"[MONTHLY_CARD_PRICE]",auStack_a0);
  TodReplaceNumberString(awStack_98,L"{NUM}",local_90[*(int *)(this + 0xe0)]);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,0x59,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar10;
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_98);
  nop();
  pPVar10 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba2520,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ba2438,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar11 = *(long **)(this + 0xf0);
  uVar1 = FUN_04ebda84(0x1e);
  uVar4 = FUN_04ebda84(0xe3);
  uVar5 = FUN_04ebda84(0x78);
  uVar6 = FUN_04ebda84(0x2d);
  (**(code **)(*plVar11 + 0x198))(plVar11,uVar1,uVar4,uVar5,uVar6);
  plVar11 = *(long **)(this + 0xf0);
  pcVar13 = *(code **)(*plVar11 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  (*pcVar13)(plVar11,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  if (*(int *)(this + 0xe4) < 1) {
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestBundleWidget::Draw(Sexy::Graphics*) */

void __thiscall AutumnHarvestBundleWidget::Draw(AutumnHarvestBundleWidget *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
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
  if (*(uint *)(this + 0xe4) < 99) {
    FUN_05478178(awStack_38,L"[SECRET_BUY_LEFT_STR]",auStack_40);
    TodReplaceNumberString(awStack_38,L"{NUMBER}",*(int *)(this + 0xe4));
    iVar1 = FUN_04ebda84(0x1e);
    Sexy::Insets::Insets(aIStack_28,0,*(int *)(this + 0x54) - iVar1,*(int *)(this + 0x50),iVar1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    Sexy::Color::Color(aCStack_18,2);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50(awStack_38);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestBundleWidget::ButtonDepress(int) */

void __thiscall
AutumnHarvestBundleWidget::ButtonDepress(AutumnHarvestBundleWidget *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *pPVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x59) {
    iVar1 = *(int *)(this + 0xe0);
    if (iVar1 == 0) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.HarvestBattle6");
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
        __s = "com.popcap.ios.chs.PVZ2.HarvestBattle30";
      }
      else if (iVar1 == 2) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.HarvestBattle98";
      }
      else if (iVar1 == 3) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.HarvestBattle45";
      }
      else {
        if (iVar1 != 4) goto LAB_04ebf4c0;
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.HarvestBattle68";
      }
      std::string::string(asStack_10,__s);
      PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
LAB_04ebf4c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AutumnHarvestBundleWidget::ButtonDepress(int) */

void __thiscall
AutumnHarvestBundleWidget::ButtonDepress(AutumnHarvestBundleWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AutumnHarvestBundleWidget::OnBuyAutumnHarvest(int) */

void __thiscall
AutumnHarvestBundleWidget::OnBuyAutumnHarvest(AutumnHarvestBundleWidget *this,int param_1)

{
  int iVar1;
  UIAutumnHarvest *this_00;
  
  if (*(int *)(this + 0xe0) != param_1) {
    return;
  }
  iVar1 = *(int *)(this + 0xe4);
  *(int *)(this + 0xe4) = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
  }
  this_00 = (UIAutumnHarvest *)UISingletonDialog<UIAutumnHarvest>::GetSingletonPtr();
  UIAutumnHarvest::UpdateMaterial(this_00);
  return;
}


/* AutumnHarvestBundleWidget::AutumnHarvestBundleWidget() */

void __thiscall
AutumnHarvestBundleWidget::AutumnHarvestBundleWidget(AutumnHarvestBundleWidget *this)

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
  *(undefined ***)this = &PTR_GetClass_069f6420;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f6748;
  *(undefined8 *)(this + 0xf0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyAutumnHarvest);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<AutumnHarvestBundleWidget,void(AutumnHarvestBundleWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyAutumnHarvest,&local_40);
  return;
}

