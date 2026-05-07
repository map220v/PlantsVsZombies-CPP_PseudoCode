// Class: PurchaseConfirmUI


/* PurchaseConfirmUI::SetConfirmCallback(Sexy::Delegate1<MagentoProductProps*>) */

void __thiscall PurchaseConfirmUI::SetConfirmCallback(PurchaseConfirmUI *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x108),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseConfirmUI::~PurchaseConfirmUI() */

void __thiscall PurchaseConfirmUI::~PurchaseConfirmUI(PurchaseConfirmUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06929b78;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06929850;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseConfirmUI::~PurchaseConfirmUI() */

void __thiscall PurchaseConfirmUI::~PurchaseConfirmUI(PurchaseConfirmUI *this)

{
  ~PurchaseConfirmUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseConfirmUI::InitView() */

void __thiscall PurchaseConfirmUI::InitView(PurchaseConfirmUI *this)

{
  RtMixedPtrBase *this_00;
  wstring *pwVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  PVZ2UIButton *pPVar11;
  MagentoProductProps *this_01;
  long lVar12;
  string *extraout_x1;
  float fVar13;
  wstring awStack_90 [8];
  int local_88 [2];
  int local_80;
  Sexy aSStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtMixedPtrBase *)(this + 0xe0);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar8 = *(int *)(this + 0x50);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b767d0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar7 = *(int *)(this + 0x54);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b767d0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b767d0);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b767d0);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets((Insets *)&local_40,iVar8 - iVar3 >> 1,iVar7 - iVar4 >> 1,iVar5,iVar6);
  *(undefined8 *)(this + 0xe8) = local_40;
  *(undefined8 *)(this + 0xf0) = uStack_38;
  iVar3 = FUN_049dbaec(0);
  iVar8 = *(int *)(this + 0xec);
  iVar7 = *(int *)(this + 0xf4);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76780);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76780);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76780);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets
            ((Insets *)local_88,iVar3,(int)((float)(iVar8 + iVar7) - (float)iVar4 * 0.7),iVar5,iVar6
            );
  iVar8 = *(int *)(this + 0xf0);
  iVar7 = FUN_049dbaec(0x14);
  local_88[0] = *(int *)(this + 0xe8) + ((iVar8 + local_80 * -2) - iVar7) / 2;
  FUN_05478178(aSStack_78,L"[EXIT_BUTTON]",awStack_90);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,0,(ButtonListener *)(this + 0xd8),(wstring *)aSStack_78,(Color *)&local_40);
  FUN_05476c50(aSStack_78);
  nop();
  (**(code **)(*(long *)pPVar11 + 0x1a0))(pPVar11,(Insets *)local_88);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aSStack_78,&DAT_06b76780,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b76780,1);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)aSStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar11);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76780);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar7 = FUN_049dbaec(0x14);
  local_88[0] = local_88[0] + iVar8 + iVar7;
  FUN_05478178(aSStack_78,L"[PAY_CONFIRM_BUTTON]",awStack_90);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,1,(ButtonListener *)(this + 0xd8),(wstring *)aSStack_78,(Color *)&local_40);
  FUN_05476c50(aSStack_78);
  nop();
  (**(code **)(*(long *)pPVar11 + 0x1a0))(pPVar11,(Insets *)local_88);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aSStack_78,&DAT_06b767a8,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b767a8,1);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)aSStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar11);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar2 != '\0') {
    pwVar1 = (wstring *)(this + 0x100);
    this_01 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar13 = (float)MagentoProductProps::GetPriceInUSD(this_01,false);
    Sexy::StrFormat(L"￥%.2f",(Insets *)&local_40,(double)fVar13);
    FUN_054766c8(this + 0xf8,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString(aSStack_78,extraout_x1);
    TodStringTranslate((wstring *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    std::string::~string((string *)aSStack_78);
    TodStringTranslate(L"[PAY_CONFIRM_DESC]");
    TodReplaceString((wstring *)aSStack_78,L"{NAME}",awStack_90);
    FUN_054766c8(pwVar1,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    FUN_05476c50(aSStack_78);
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    TodReplaceNumberString(pwVar1,L"{NUMBER}",*(int *)(lVar12 + 0x90));
    FUN_054766c8(pwVar1,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    FUN_05476c50(awStack_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseConfirmUI::PurchaseConfirmUI(Sexy::RtWeakPtr<MagentoProductProps>) */

void __thiscall PurchaseConfirmUI::PurchaseConfirmUI(PurchaseConfirmUI *this,RtWeakPtrBase *param_2)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06929850;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06929b78;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0xe0),param_2);
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  FUN_05476574(this + 0xf8);
  FUN_05476574(this + 0x100);
  Sexy::Delegate1<MagentoProductProps*>::Delegate1((DummyInit *)(this + 0x108));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseConfirmUI::ShowUI(Sexy::RtWeakPtr<MagentoProductProps>,
   Sexy::Delegate1<MagentoProductProps*>) */

void PurchaseConfirmUI::ShowUI(RtWeakPtrBase *param_1,Delegate1 *param_2)

{
  char *pcVar1;
  Widget *pWVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  Delegate1<MagentoProductProps*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,param_1);
  pWVar2 = ::operator_new(0x138);
  PurchaseConfirmUI((PurchaseConfirmUI *)pWVar2,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::Delegate1<MagentoProductProps*>::Delegate1(aDStack_38,param_2);
  SetConfirmCallback((PurchaseConfirmUI *)pWVar2,aDStack_38);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),pWVar2);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),pWVar2);
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),pWVar2);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),pWVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pWVar2);
}


/* PurchaseConfirmUI::Close() */

void __thiscall PurchaseConfirmUI::Close(PurchaseConfirmUI *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
  (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c],this);
  Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],(Widget *)this);
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,this);
  return;
}


/* PurchaseConfirmUI::ButtonDepress(int) */

void __thiscall PurchaseConfirmUI::ButtonDepress(PurchaseConfirmUI *this,int param_1)

{
  int iVar1;
  ResourceInfo *pRVar2;
  
  if (param_1 != 0) {
    if (param_1 != 1) {
      return;
    }
    iVar1 = FUN_049dbad4(*(undefined8 *)(this + 0x110),*(undefined8 *)(this + 0x120));
    if (iVar1 != 0) {
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xe0));
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x108),(SexyURL *)pRVar2);
    }
  }
  Close(this);
  return;
}


/* non-virtual thunk to PurchaseConfirmUI::ButtonDepress(int) */

void __thiscall PurchaseConfirmUI::ButtonDepress(PurchaseConfirmUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseConfirmUI::Draw(Sexy::Graphics*) */

void __thiscall PurchaseConfirmUI::Draw(PurchaseConfirmUI *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Image *pIVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar8 = *(int *)(this + 0xec);
  iVar1 = *(int *)(this + 0xe8);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b767d0);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b767d0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b767d0);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar1,iVar8,iVar3,iVar4);
  iVar3 = *(int *)(this + 0xf0);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76800);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar4 = *(int *)(this + 0xf4);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76800);
  iVar1 = iVar1 + (iVar3 - iVar5 >> 1);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar12);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76800);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76800);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76800);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar1,iVar8 + (iVar4 - iVar3 >> 1),iVar5,iVar6);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76800);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76870);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar5 = FUN_049dbaec(0x1e);
  iVar8 = *(int *)(this + 0xec);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76870);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76870);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76870);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar1 + (iVar3 - iVar4 >> 1),iVar5 + iVar8,iVar6,iVar7);
  iVar3 = *(int *)(this + 0xe8);
  iVar4 = FUN_049dbaec(0x3c);
  iVar1 = iVar5 + iVar8 + iVar4;
  Sexy::Insets::Insets(aIStack_28,iVar3,iVar1,*(int *)(this + 0xf0),iVar4);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_28;
  Sexy::Insets::Insets(aIStack_18,0x4a,0x3c,0,0xff);
  WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar2,aIStack_18,5,1);
  iVar8 = FUN_049dbaec(0x3c);
  Sexy::Insets::Insets(aIStack_28,iVar3,iVar1 + iVar8,*(int *)(this + 0xf0),iVar8);
  uVar2 = PrimeText_Game::Typeface_FZCuYuan_24;
  Sexy::Insets::Insets(aIStack_18,0x4a,0x3c,0,0xff);
  WriteWordInRect(param_1,this + 0x100,aIStack_28,uVar2,aIStack_18,5,1);
  iVar4 = FUN_049dbaec(0x32);
  iVar1 = *(int *)(this + 0xec);
  iVar8 = *(int *)(this + 0xe8);
  iVar3 = *(int *)(this + 0xf4);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76898);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
  iVar6 = FUN_049dbaec(0x3c);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76898);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76898);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b76898);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,iVar4 + iVar8,((iVar1 + iVar3) - iVar5) - iVar6,iVar7,iVar9);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

