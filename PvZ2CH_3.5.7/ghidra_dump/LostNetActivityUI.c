// Class: LostNetActivityUI


/* LostNetActivityUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
LostNetActivityUI::DrawAll(LostNetActivityUI *this,ModalFlags *param_1,Graphics *param_2)

{
  if (this[0x128] == (LostNetActivityUI)0x0) {
    return;
  }
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  return;
}


/* LostNetActivityUI::HideAllButtonAndAnims() */

void __thiscall LostNetActivityUI::HideAllButtonAndAnims(LostNetActivityUI *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x278);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
    (**(code **)(**(long **)(this + 0x278) + 0x188))(*(long **)(this + 0x278),1);
  }
  plVar1 = *(long **)(this + 0x280);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
    (**(code **)(**(long **)(this + 0x280) + 0x188))(*(long **)(this + 0x280),1);
  }
  return;
}


/* LostNetActivityUI::RecoverAllButtonAndAnims() */

void __thiscall LostNetActivityUI::RecoverAllButtonAndAnims(LostNetActivityUI *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x278);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
    (**(code **)(**(long **)(this + 0x278) + 0x188))(*(long **)(this + 0x278),0);
  }
  plVar1 = *(long **)(this + 0x280);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
    (**(code **)(**(long **)(this + 0x280) + 0x188))(*(long **)(this + 0x280),0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityUI::~LostNetActivityUI() */

void __thiscall LostNetActivityUI::~LostNetActivityUI(LostNetActivityUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_0697c850;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0697c510;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LostNet");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x288));
  FUN_05476c50(this + 0x178);
  FUN_05476c50(this + 0x170);
  FUN_05476c50(this + 0x168);
  FUN_05476c50(this + 0x160);
  FUN_05476c50(this + 0x158);
  FUN_05476c50(this + 0x150);
  FUN_05476c50(this + 0x148);
  FUN_05476c50(this + 0x140);
  FUN_05476c50(this + 0x138);
  FUN_05476c50(this + 0x130);
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LostNetActivityUI::~LostNetActivityUI() */

void __thiscall LostNetActivityUI::~LostNetActivityUI(LostNetActivityUI *this)

{
  ~LostNetActivityUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityUI::CheckAndPay() */

void __thiscall LostNetActivityUI::CheckAndPay(LostNetActivityUI *this)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  long lVar2;
  RtMixedPtrBase aRStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Magento::GetProduct((Magento *)&DAT_06b8b780,___stack_chk_guard);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x288),(RtWeakPtr *)aRStack_10);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_00);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    PurchaseBroker::RequestPayment(this_01,(string *)(lVar2 + 0x10),0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LostNetActivityUI::ButtonDepress(int) */

void __thiscall LostNetActivityUI::ButtonDepress(LostNetActivityUI *this,int param_1)

{
  if (param_1 == 0x65) {
    CheckAndPay(this);
    return;
  }
  if (param_1 == 0x66) {
    LawnApp::KillLostNetActivityUI(gLawnApp);
    return;
  }
  return;
}


/* non-virtual thunk to LostNetActivityUI::ButtonDepress(int) */

void __thiscall LostNetActivityUI::ButtonDepress(LostNetActivityUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityUI::UpdateTimeLabel() */

void __thiscall LostNetActivityUI::UpdateTimeLabel(LostNetActivityUI *this)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  LostNetActivityConfig *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LostNetActivityConfig *)LawnApp::GetLostNetActivityConfig(gLawnApp);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  cVar2 = LostNetActivityConfig::IsActivity(this_00);
  if (cVar2 == '\0') {
    TodStringTranslate(L"[ACTIVITY_CLOSED]");
    FUN_054766c8(this + 0x138,auStack_10);
    FUN_05476c50(auStack_10);
    plVar5 = *(long **)(this + 0x278);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x188))(plVar5,1);
    }
  }
  else {
    lVar4 = LostNetActivityConfig::GetTodaySec(this_00);
    iVar1 = (int)(lVar4 / 0x3c);
    Sexy::StrFormat(L"%02d:%02d:%02d",auStack_10,lVar4 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar1 + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar4 + iVar1 * -0x3c));
    FUN_054766c8(this + 0x138,auStack_10);
    FUN_05476c50(auStack_10);
    if ((this_02 != (PlayerInfo *)0x0) && (plVar5 = *(long **)(this + 0x278), plVar5 != (long *)0x0)
       ) {
      pcVar6 = *(code **)(*plVar5 + 0x188);
      bVar3 = PlayerInfo::CanBuyLostNetActivityToday(this_02);
      (*pcVar6)(plVar5,bVar3 ^ 1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityUI::LostNetActivityUI() */

void __thiscall LostNetActivityUI::LostNetActivityUI(LostNetActivityUI *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  this[0x128] = (LostNetActivityUI)0x0;
  *(undefined ***)this = &PTR_GetClass_0697c510;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_0697c850;
  FUN_05478178(this + 0x130,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x138,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x140,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x148,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x150,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x158,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x160,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x168,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x170,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x178,&DAT_056f11a8,(string *)&local_20);
  nop();
  Sexy::Insets::Insets((Insets *)(this + 0x180));
  Sexy::Insets::Insets((Insets *)(this + 400));
  Sexy::Insets::Insets((Insets *)(this + 0x1a0));
  Sexy::Insets::Insets((Insets *)(this + 0x1b0));
  Sexy::Insets::Insets((Insets *)(this + 0x1c0));
  Sexy::Insets::Insets((Insets *)(this + 0x1d0));
  Sexy::Insets::Insets((Insets *)(this + 0x1e0));
  Sexy::Insets::Insets((Insets *)(this + 0x1f0));
  Sexy::Insets::Insets((Insets *)(this + 0x200));
  Sexy::Insets::Insets((Insets *)(this + 0x210));
  Sexy::Insets::Insets((Insets *)(this + 0x220));
  Sexy::Insets::Insets((Insets *)(this + 0x230));
  Sexy::Insets::Insets((Insets *)(this + 0x240));
  Sexy::Insets::Insets((Insets *)(this + 0x250));
  Sexy::Color::Color((Color *)(this + 0x260));
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x288));
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_LostNet");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyOfflineBundle);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<MagentoProductProps*,Sexy::CBMemberTranslatorX<LostNetActivityUI,void(LostNetActivityUI::*)(MagentoProductProps*)>>
            ((MessageRouter *)puVar1,Message::ItemPurchasedFromStore,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityUI::Draw(Sexy::Graphics*) */

void __thiscall LostNetActivityUI::Draw(LostNetActivityUI *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  Insets aIStack_50 [16];
  Insets aIStack_40 [8];
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x128] != (LostNetActivityUI)0x0) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b800);
    PopingWidget::GetMainRect();
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    lVar3 = *(long *)(this + 0x270);
    if (lVar3 != 0) {
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1a0));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,lVar3,aIStack_40);
    }
    cVar1 = FUN_04be1bb8(this[0x115]);
    if (cVar1 == '\0') {
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x130,this + 0x250,uVar2,aIStack_40,3,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
      Sexy::Color::Color((Color *)aIStack_40,4);
      WriteWordInRect(param_1,this + 0x138,this + 0x250,uVar2,aIStack_40,4,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_HardShadow)
      ;
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x140,this + 400,uVar2,aIStack_40,5,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_HardShadow)
      ;
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x260));
      WriteWordInRect(param_1,this + 0x148,this + 0x1b0,uVar2,aIStack_40,5,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_HardShadow)
      ;
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x150,this + 0x1c0,uVar2,aIStack_40,5,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x158,this + 0x1d0,uVar2,aIStack_40,5,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline);
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x160,this + 0x1e0,uVar2,aIStack_40,5,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20_HardShadow)
      ;
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x168,this + 0x200,uVar2,aIStack_40,4,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline);
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x170,this + 0x210,uVar2,aIStack_40,5,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20_HardShadow)
      ;
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x178,this + 0x220,uVar2,aIStack_40,3,1);
      uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b758);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1f0));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
      FUN_05478178(aIStack_50,&DAT_056f11a8,auStack_58);
      uVar2 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,aIStack_50,this + 0x180,uVar2,aIStack_40,5,1);
      FUN_05476c50(aIStack_50);
      nop();
      FUN_05478178(aIStack_50,&DAT_056f11a8,auStack_58);
      uVar2 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,aIStack_50,(Insets *)(this + 0x1f0),uVar2,aIStack_40,5,1);
      FUN_05476c50(aIStack_50);
      nop();
      FUN_05478178(aIStack_50,&DAT_056f11a8,auStack_58);
      uVar2 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline);
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,aIStack_50,this + 0x1a0,uVar2,aIStack_40,5,1);
      FUN_05476c50(aIStack_50);
      nop();
    }
    else {
      if (*(long *)(this + 0x278) != 0) {
        PVZ2UIButton::GetImageNormal();
        uVar2 = local_38;
        Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x240));
        PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_50);
      }
      if (*(long *)(this + 0x280) != 0) {
        PVZ2UIButton::GetImageNormal();
        Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x230));
        PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,local_38,aIStack_50);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityUI::InitView() */

void __thiscall LostNetActivityUI::InitView(LostNetActivityUI *this)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *pSVar13;
  LostNetActivityConfig *this_00;
  PVZ2UIButton *pPVar14;
  undefined8 uVar15;
  string *psVar16;
  long lVar17;
  string *extraout_x1;
  string *extraout_x1_00;
  int iVar18;
  long *plVar19;
  code *pcVar20;
  Sexy aSStack_b8 [8];
  RtWeakPtr aRStack_b0 [8];
  int local_a8 [4];
  int local_98;
  int local_94;
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  int local_80;
  wstring awStack_78 [4];
  int local_74;
  int local_6c;
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  this[0x59] = (LostNetActivityUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b800);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b800);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar18 = (int)((float)iVar4 * 0.95);
  iVar4 = *(int *)(this + 0x54) - iVar18 >> 1;
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x50) - (int)((float)iVar3 * 0.95) >> 1,iVar4,
             (int)((float)iVar3 * 0.95),iVar18);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  this_00 = (LostNetActivityConfig *)LawnApp::GetLostNetActivityConfig(gLawnApp);
  PopingWidget::GetMainRect();
  iVar5 = FUN_04be1c34(0x14);
  PopingWidget::GetMainRect();
  iVar6 = FUN_04be1c34(0x50);
  PopingWidget::GetMainRect();
  iVar3 = local_80;
  iVar7 = FUN_04be1c34(0xffffff97);
  PopingWidget::GetMainRect();
  iVar8 = FUN_04be1c34(0xffffff8d);
  Sexy::Insets::Insets
            ((Insets *)&local_40,local_a8[0] + iVar5,local_94 + iVar6,iVar3 + iVar7,local_6c + iVar8
            );
  *(undefined8 *)(this + 0x180) = local_40;
  *(undefined8 *)(this + 0x188) = local_38;
  iVar5 = *(int *)(this + 0x18c);
  iVar6 = *(int *)(this + 0x184);
  iVar3 = *(int *)(this + 0x180) + (*(int *)(this + 0x188) >> 1);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b8e8);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b8e8);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar9 = FUN_04be1c34(5);
  iVar10 = FUN_04be1c34(0xffffffd3);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(iVar3 - (int)((float)iVar7 * 3.8) / 2) - iVar9,
             ((iVar4 + iVar18) - (int)((double)iVar8 * 0.8)) + iVar10,(int)((float)iVar7 * 3.8),
             (int)((double)iVar8 * 0.8));
  *(undefined8 *)(this + 0x240) = local_40;
  *(undefined8 *)(this + 0x248) = local_38;
  FUN_05478178(awStack_78,L"[NEXT_STEP]",aRStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar14,0x65,(ButtonListener *)(this + 0x120),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x278) = pPVar14;
  FUN_05476c50(awStack_78);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0x278);
  if (pPVar14 != (PVZ2UIButton *)0x0) {
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8b8e8,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8b840,3);
    PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
    (**(code **)(**(long **)(this + 0x278) + 0x1a0))(*(long **)(this + 0x278),this + 0x240);
    lVar17 = *(long *)(this + 0x278);
    TodStringTranslate(L"[LOST_NETWORK_ACTIVE_BUY_BUTTON]");
    TodReplaceNumberString(awStack_78,L"{COST}",*(int *)(this_00 + 0xc));
    FUN_054766c8(lVar17 + 0xd8,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    FUN_05476c50(awStack_78);
    plVar19 = *(long **)(this + 0x278);
    pcVar20 = *(code **)(*plVar19 + 800);
    uVar15 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline);
    (*pcVar20)(plVar19,uVar15);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x278));
  }
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b7d8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b7d8);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar8 = FUN_04be1c34(0xffffffa1);
  PopingWidget::GetMainRect();
  iVar9 = FUN_04be1c34(0x5a);
  Sexy::Insets::Insets
            ((Insets *)&local_40,((local_98 + local_80) - iVar4 / 2) + iVar8,
             (local_74 - iVar7 / 2) + iVar9,iVar4,iVar7);
  pPVar14 = *(PVZ2UIButton **)(this + 0x280);
  *(undefined8 *)(this + 0x230) = local_40;
  *(undefined8 *)(this + 0x238) = local_38;
  if (pPVar14 == (PVZ2UIButton *)0x0) {
    FUN_05478178(awStack_78,&DAT_056f11a8,aRStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar14 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar14,0x66,(ButtonListener *)(this + 0x120),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x280) = pPVar14;
    FUN_05476c50(awStack_78);
    nop();
    pPVar14 = *(PVZ2UIButton **)(this + 0x280);
    if (pPVar14 == (PVZ2UIButton *)0x0) goto LAB_04be2d70;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8b7d8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8b948,3);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x280) + 0x1a0))(*(long **)(this + 0x280),this + 0x230);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x280));
LAB_04be2d70:
  uVar11 = LostNetActivityConfig::GetCurrentBonus(this_00);
  *(undefined4 *)(this + 300) = uVar11;
  iVar4 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar4);
  psVar16 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar16);
  iVar8 = FUN_04be1c34(0x50);
  iVar4 = *(int *)(this + 0x180);
  iVar9 = FUN_04be1c34(0xcd);
  iVar7 = *(int *)(this + 0x184);
  iVar10 = FUN_04be1c34(0x78);
  iVar18 = FUN_04be1c34(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar8 + iVar4,iVar9 + iVar7,iVar10,iVar18);
  uVar1 = *(uint *)(this_00 + 0x14);
  *(undefined8 *)(this + 400) = local_40;
  *(undefined8 *)(this + 0x198) = local_38;
  Sexy::StrFormat(L"%d",(Insets *)&local_40,(ulong)uVar1);
  FUN_054766c8(this + 0x140,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar7 = FUN_04be1c34(300);
  iVar8 = FUN_04be1c34(0xd7);
  iVar4 = *(int *)(this + 0x184);
  iVar9 = FUN_04be1c34(0x50);
  Sexy::Insets::Insets((Insets *)&local_40,iVar3 - (iVar7 >> 1),iVar8 + iVar4,iVar7,iVar9);
  *(undefined8 *)(this + 0x1b0) = local_40;
  *(undefined8 *)(this + 0x1b8) = local_38;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_b0);
  psVar16 = extraout_x1;
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
    PlantType::GetRareColor();
    uVar1 = *(uint *)(this_00 + 0x18);
    *(undefined8 *)(this + 0x260) = local_40;
    *(undefined8 *)(this + 0x268) = local_38;
    Sexy::StrFormat("[LOST_NETWORK_ACTIVE_PLANT_LEVEL%d]",(string *)local_a8,(ulong)uVar1);
    Sexy::ToWString((string *)local_a8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_b0);
    Plant::GetFormattedNameString((Plant *)awStack_78,aRStack_88);
    TodReplaceString((wstring *)&local_98,L"{PLANT}",awStack_78);
    FUN_054766c8(this + 0x148,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    FUN_05476c50(awStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
    FUN_05476c50((wstring *)&local_98);
    std::string::~string((string *)local_a8);
    psVar16 = extraout_x1_00;
  }
  Sexy::StringToUpper(aSStack_b8,psVar16);
  std::operator+((string *)&PlantHeadshot::PlantBigPrefix,(string *)awStack_78);
  uVar15 = StringHelper::ToImage((string *)&local_40,true);
  *(undefined8 *)(this + 0x270) = uVar15;
  std::string::~string((string *)&local_40);
  std::string::~string((string *)awStack_78);
  pLVar12 = *(LotteryResultProgressBar **)(this + 0x270);
  if (pLVar12 != (LotteryResultProgressBar *)0x0) {
    iVar4 = FUN_04be1c34(100);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x270));
    iVar9 = (int)(((float)iVar4 / (float)iVar7) * (float)iVar8);
    iVar8 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x270));
    iVar8 = (int)(((float)iVar4 / (float)iVar7) * (float)iVar8);
    iVar4 = FUN_04be1c34(0xfffffffb);
    iVar7 = FUN_04be1c34(0xffffffd8);
    Sexy::Insets::Insets
              ((Insets *)&local_40,(iVar4 + iVar3) - (iVar9 >> 1),
               (iVar7 + iVar6 + (iVar5 >> 1)) - (iVar8 >> 1),iVar9,iVar8);
    *(undefined8 *)(this + 0x1a0) = local_40;
    *(undefined8 *)(this + 0x1a8) = local_38;
  }
  iVar5 = FUN_04be1c34(0x1d4);
  iVar3 = *(int *)(this + 0x180);
  iVar6 = FUN_04be1c34(0xcd);
  iVar4 = *(int *)(this + 0x184);
  iVar7 = FUN_04be1c34(0x78);
  iVar8 = FUN_04be1c34(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5 + iVar3,iVar6 + iVar4,iVar7,iVar8);
  uVar1 = *(uint *)(this_00 + 0x10);
  *(undefined8 *)(this + 0x1c0) = local_40;
  *(undefined8 *)(this + 0x1c8) = local_38;
  Sexy::StrFormat(L"%d",(Insets *)&local_40,(ulong)uVar1);
  FUN_054766c8(this + 0x150,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar5 = FUN_04be1c34(0x23f);
  iVar3 = *(int *)(this + 0x180);
  iVar6 = FUN_04be1c34(0x46);
  iVar4 = *(int *)(this + 0x184);
  iVar7 = FUN_04be1c34(0x8c);
  iVar8 = FUN_04be1c34(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5 + iVar3,iVar6 + iVar4,iVar7,iVar8);
  *(undefined8 *)(this + 0x1d0) = local_40;
  *(undefined8 *)(this + 0x1d8) = local_38;
  TodStringTranslate(L"[LOST_NETWORK_ACTIVE_BUBBLE_TITLE]");
  FUN_054766c8(this + 0x158,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar5 = FUN_04be1c34(0x249);
  iVar3 = *(int *)(this + 0x180);
  iVar6 = FUN_04be1c34(0x55);
  iVar4 = *(int *)(this + 0x184);
  iVar7 = FUN_04be1c34(0x96);
  iVar8 = FUN_04be1c34(0x5a);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5 + iVar3,iVar6 + iVar4,iVar7,iVar8);
  iVar3 = *(int *)(this_00 + 8);
  iVar4 = *(int *)(this_00 + 0xc);
  *(undefined8 *)(this + 0x1e0) = local_40;
  *(undefined8 *)(this + 0x1e8) = local_38;
  TodStringTranslate(L"[LOST_NETWORK_ACTIVE_BUBBLE_TEXT]");
  TodReplaceNumberString(awStack_78,L"{PERCENT}",(int)(((float)iVar3 / (float)iVar4) * 100.0 + 0.5))
  ;
  FUN_054766c8(this + 0x160,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_05476c50(awStack_78);
  iVar5 = FUN_04be1c34(0xc);
  iVar3 = *(int *)(this + 0x240);
  iVar6 = FUN_04be1c34(0xffffffa4);
  iVar4 = *(int *)(this + 0x244);
  iVar7 = FUN_04be1c34(0x18);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar5 + iVar3,iVar6 + iVar4,*(int *)(this + 0x248) - iVar7,
             *(int *)(this + 0x24c));
  *(undefined8 *)(this + 0x250) = local_40;
  *(undefined8 *)(this + 600) = local_38;
  TodStringTranslate(L"[LOST_NETWORK_ACTIVE_TIME_PRE]");
  FUN_054766c8(this + 0x130,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_054772c4(this + 0x138,&DAT_056f11a8);
  iVar6 = FUN_04be1c34(0x2d);
  iVar3 = *(int *)(this + 0x240);
  iVar7 = FUN_04be1c34(0xffffffd8);
  iVar4 = *(int *)(this + 0x244);
  iVar8 = FUN_04be1c34(0x5a);
  iVar5 = *(int *)(this + 0x248);
  iVar9 = FUN_04be1c34(0xe);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar6 + iVar3,iVar7 + iVar4,iVar5 - iVar8,
             *(int *)(this + 0x24c) - iVar9);
  *(undefined8 *)(this + 0x1f8) = local_38;
  *(undefined8 *)(this + 0x1f0) = local_40;
  Sexy::Insets::Insets
            ((Insets *)&local_40,(int)local_40,(int)((ulong)local_40 >> 0x20),
             (*(int *)(this + 0x1f8) << 1) / 5,*(int *)(this + 0x1fc));
  *(undefined8 *)(this + 0x200) = local_40;
  *(undefined8 *)(this + 0x208) = local_38;
  TodStringTranslate(L"[LOST_NETWORK_ACTIVE_OLD_COST_1]");
  FUN_054766c8(this + 0x168,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar3 = *(int *)(this + 0x1f0);
  iVar5 = (*(int *)(this + 0x1f8) << 1) / 5;
  iVar6 = FUN_04be1c34(0x14);
  iVar4 = *(int *)(this + 500);
  iVar7 = FUN_04be1c34(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(iVar5 + iVar3) - iVar6,iVar4 - iVar6,iVar5 + iVar7,
             iVar7 + *(int *)(this + 0x1fc));
  uVar1 = *(uint *)(this_00 + 8);
  *(undefined8 *)(this + 0x210) = local_40;
  *(undefined8 *)(this + 0x218) = local_38;
  Sexy::StrFormat(L"%d",(Insets *)&local_40,(ulong)uVar1);
  FUN_054766c8(this + 0x170,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(*(int *)(this + 0x1f8) << 2) / 5 + *(int *)(this + 0x1f0),
             *(int *)(this + 500),*(int *)(this + 0x1f8) / 5,*(int *)(this + 0x1fc));
  *(undefined8 *)(this + 0x220) = local_40;
  *(undefined8 *)(this + 0x228) = local_38;
  TodStringTranslate(L"[LOST_NETWORK_ACTIVE_OLD_COST_3]");
  FUN_054766c8(this + 0x178,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar3 = FUN_04be1c34(5);
  *(int *)(this + 0x1f0) = *(int *)(this + 0x1f0) + iVar3;
  iVar3 = FUN_04be1c34(10);
  *(int *)(this + 500) = *(int *)(this + 500) + iVar3;
  iVar3 = FUN_04be1c34(10);
  *(int *)(this + 0x1f8) = *(int *)(this + 0x1f8) - iVar3;
  iVar3 = FUN_04be1c34(0x14);
  pcVar20 = *(code **)(*(long *)this + 0x318);
  *(int *)(this + 0x1fc) = *(int *)(this + 0x1fc) - iVar3;
  (*pcVar20)(this);
  this[0x128] = (LostNetActivityUI)0x1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  std::string::~string((string *)aSStack_b8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityUI::OnPaid() */

void LostNetActivityUI::OnPaid(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar4;
  string *psVar5;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    lVar4 = LawnApp::GetLostNetActivityConfig(gLawnApp);
    FUN_04be1bbc(this_00 + 0x350,0);
    PlayerInfo::AddGems(this_00,*(int *)(lVar4 + 0x14),true);
    iVar3 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,asStack_18);
    if (cVar1 == '\0') {
      PlayerInfo::UnlockPlant(this_00,asStack_18,false);
      PlayerInfo::SetPlantStarLevel(this_00,asStack_18,*(int *)(lVar4 + 0x18),false,true);
    }
    else {
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
      bVar2 = (bool)Plant::GetPlantPieceCountByLevel(aRStack_10,*(undefined4 *)(lVar4 + 0x18));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      PlayerInfo::AddPlantPieceCount((string *)this_00,(int)asStack_18,bVar2);
    }
    PlayerInfo::AddCoins(this_00,*(int *)(lVar4 + 0x10));
    PlayerInfo::OnTodayLostNetActivityBought(this_00);
    FUN_04be1bbc(this_00 + 0x350,1);
    PlayerInfo::SAVE_PROFILE(this_00);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityUI::BuyOfflineBundleSuccess() */

void LostNetActivityUI::BuyOfflineBundleSuccess(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar4;
  string *psVar5;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    lVar4 = LawnApp::GetLostNetActivityConfig(gLawnApp);
    FUN_04be1bbc(this_00 + 0x350,0);
    PlayerInfo::AddGems(this_00,*(int *)(lVar4 + 0x14),true);
    iVar3 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,asStack_18);
    if (cVar1 == '\0') {
      PlayerInfo::UnlockPlant(this_00,asStack_18,false);
      PlayerInfo::SetPlantStarLevel(this_00,asStack_18,*(int *)(lVar4 + 0x18),false,true);
    }
    else {
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
      bVar2 = (bool)Plant::GetPlantPieceCountByLevel(aRStack_10,*(undefined4 *)(lVar4 + 0x18));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      PlayerInfo::AddPlantPieceCount((string *)this_00,(int)asStack_18,bVar2);
    }
    PlayerInfo::AddCoins(this_00,*(int *)(lVar4 + 0x10));
    PlayerInfo::OnTodayLostNetActivityBought(this_00);
    FUN_04be1bbc(this_00 + 0x350,1);
    PlayerInfo::SAVE_PROFILE(this_00);
    std::string::~string(asStack_18);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LostNetActivityUI::OnBuyOfflineBundle(MagentoProductProps*) */

void __thiscall
LostNetActivityUI::OnBuyOfflineBundle(LostNetActivityUI *this,MagentoProductProps *param_1)

{
  MagentoProductProps *pMVar1;
  
  pMVar1 = (MagentoProductProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x288))
  ;
  if (param_1 != pMVar1) {
    return;
  }
  BuyOfflineBundleSuccess();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityUI::UpdateBonus() */

void __thiscall LostNetActivityUI::UpdateBonus(LostNetActivityUI *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  LostNetActivityConfig *this_00;
  ProfileMgr *this_01;
  long lVar10;
  string *psVar11;
  undefined8 uVar12;
  string *extraout_x1;
  string *extraout_x1_00;
  int iVar13;
  LotteryResultProgressBar *this_02;
  Sexy aSStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  string asStack_38 [8];
  wstring awStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LostNetActivityConfig *)LawnApp::GetLostNetActivityConfig(gLawnApp);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar10 = ProfileMgr::GetCurrentProfile(this_01);
  if (((lVar10 != 0) &&
      (iVar6 = LostNetActivityConfig::GetCurrentBonus(this_00), iVar6 != *(int *)(this + 300))) &&
     (iVar6 != 0)) {
    *(int *)(this + 300) = iVar6;
    iVar6 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar6);
    psVar11 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar11);
    bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
    psVar11 = extraout_x1;
    if (bVar5) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      PlantType::GetRareColor();
      uVar2 = *(uint *)(this_00 + 0x18);
      *(undefined8 *)(this + 0x260) = local_18;
      *(undefined8 *)(this + 0x268) = uStack_10;
      Sexy::StrFormat("[LOST_NETWORK_ACTIVE_PLANT_LEVEL%d]",asStack_38,(ulong)uVar2);
      Sexy::ToWString(asStack_38);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_40);
      Plant::GetFormattedNameString((Plant *)asStack_20,aRStack_28);
      TodReplaceString(awStack_30,L"{PLANT}",(wstring *)asStack_20);
      FUN_054766c8(this + 0x148,&local_18);
      FUN_05476c50(&local_18);
      FUN_05476c50((wstring *)asStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      FUN_05476c50(awStack_30);
      std::string::~string(asStack_38);
      psVar11 = extraout_x1_00;
    }
    Sexy::StringToUpper(aSStack_48,psVar11);
    std::operator+((string *)&PlantHeadshot::PlantBigPrefix,asStack_20);
    uVar12 = StringHelper::ToImage((string *)&local_18,true);
    *(undefined8 *)(this + 0x270) = uVar12;
    std::string::~string((string *)&local_18);
    std::string::~string(asStack_20);
    this_02 = *(LotteryResultProgressBar **)(this + 0x270);
    if (this_02 != (LotteryResultProgressBar *)0x0) {
      iVar6 = *(int *)(this + 0x188);
      iVar1 = *(int *)(this + 0x18c);
      iVar3 = *(int *)(this + 0x180);
      iVar4 = *(int *)(this + 0x184);
      iVar7 = FUN_04be1c34(100);
      iVar8 = LotteryResultProgressBar::GetCurrentLevel(this_02);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x270));
      iVar13 = (int)(((float)iVar7 / (float)iVar8) * (float)iVar9);
      iVar9 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x270));
      iVar9 = (int)(((float)iVar7 / (float)iVar8) * (float)iVar9);
      iVar7 = FUN_04be1c34(0xfffffffb);
      iVar8 = FUN_04be1c34(0xffffffd8);
      Sexy::Insets::Insets
                ((Insets *)&local_18,(iVar7 + iVar3 + (iVar6 >> 1)) - (iVar13 >> 1),
                 (iVar8 + iVar4 + (iVar1 >> 1)) - (iVar9 >> 1),iVar13,iVar9);
      *(undefined8 *)(this + 0x1a0) = local_18;
      *(undefined8 *)(this + 0x1a8) = uStack_10;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    std::string::~string((string *)aSStack_48);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LostNetActivityUI::Update() */

void __thiscall LostNetActivityUI::Update(LostNetActivityUI *this)

{
  char cVar1;
  
  if (this[0x128] != (LostNetActivityUI)0x0) {
    PopingWidget::Update((PopingWidget *)this);
    cVar1 = FUN_04be1bb8(this[0x115]);
    if (cVar1 == '\0') {
      UpdateBonus(this);
      UpdateTimeLabel(this);
      return;
    }
  }
  return;
}

