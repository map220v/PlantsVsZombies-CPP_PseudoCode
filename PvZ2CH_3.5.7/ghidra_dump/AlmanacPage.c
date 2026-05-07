// Class: AlmanacPage


/* AlmanacPage::ScrollTargetReached(Sexy::ScrollWidget*) */

void AlmanacPage::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AlmanacPage::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall AlmanacPage::ScrollTargetReached(AlmanacPage *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* AlmanacPage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void AlmanacPage::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to AlmanacPage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall AlmanacPage::ScrollTargetInterrupted(AlmanacPage *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* AlmanacPage::GetObjectType() const */

RtWeakPtr<Sexy::SoundResource> * AlmanacPage::GetObjectType(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0xf0));
  return in_x8;
}


/* AlmanacPage::~AlmanacPage() */

void __thiscall AlmanacPage::~AlmanacPage(AlmanacPage *this)

{
  *(undefined ***)this = &PTR_GetClass_06730ef0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06731230;
  *(undefined ***)(this + 0xe0) = &PTR__AlmanacPage_06731278;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to AlmanacPage::~AlmanacPage() */

void __thiscall AlmanacPage::~AlmanacPage(AlmanacPage *this)

{
  ~AlmanacPage(this + -0xe0);
  return;
}


/* AlmanacPage::~AlmanacPage() */

void __thiscall AlmanacPage::~AlmanacPage(AlmanacPage *this)

{
  ~AlmanacPage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AlmanacPage::~AlmanacPage() */

void __thiscall AlmanacPage::~AlmanacPage(AlmanacPage *this)

{
  ~AlmanacPage(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacPage::AlmanacPage(AlmanacWidget*, Sexy::RtWeakPtr<ObjectTypeDescriptor const>,
   Sexy::TRect<int>, bool) */

void __thiscall
AlmanacPage::AlmanacPage
          (AlmanacPage *this,undefined8 param_1,RtWeakPtr *param_3,TRect *param_4,undefined1 param_5
          )

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_01;
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  RtObject *pRVar11;
  Widget *pWVar12;
  PlayerInfo *pPVar13;
  long lVar14;
  PVZ2UIButton *pPVar15;
  bool *pbVar16;
  MagentoProductProps *pMVar17;
  undefined8 uVar18;
  SalesProgressBar *this_02;
  undefined *puVar19;
  string *psVar20;
  long *plVar21;
  code *pcVar22;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_c0 [8];
  RtMixedPtrBase aRStack_b8 [8];
  string asStack_b0 [8];
  int local_a8 [2];
  int local_a0;
  int local_98 [2];
  int local_90;
  int local_88 [2];
  int local_80;
  int local_78 [2];
  int local_70;
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  long local_8;
  
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0);
  local_8 = ___stack_chk_guard;
  this_01 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06730ef0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06731230;
  *(undefined ***)(this + 0xe0) = &PTR__AlmanacPage_06731278;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_01)
  ;
  *(undefined8 *)(this + 0xe8) = param_1;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_4);
  *(undefined8 *)(this + 0x100) = 0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_3);
  iVar4 = FUN_03b4642c(0x16);
  iVar5 = FUN_03b4642c(0xf);
  iVar6 = FUN_03b4642c(0x2c);
  iVar8 = *(int *)(this + 0x50);
  iVar7 = FUN_03b4642c(0x139);
  Sexy::Insets::Insets((Insets *)local_a8,iVar4,iVar5,iVar8 - iVar6,iVar7);
  pRVar11 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  bVar1 = Sexy::RtObject::IsA<PlantType>(pRVar11);
  if (!bVar1) {
    pRVar11 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar3 = Sexy::RtObject::IsA<ZombieType>(pRVar11);
    if (bVar3) {
      Sexy::Insets::Insets((Insets *)local_78,(Insets *)local_a8);
      local_70 = FUN_03b4642c(0x100);
      local_78[0] = (local_a8[0] + local_a0) - local_70;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)this_00);
      pWVar12 = ::operator_new(0x110);
      PVZ2UIAlmanacObjectDisplayer::PVZ2UIAlmanacObjectDisplayer
                ((PVZ2UIAlmanacObjectDisplayer *)pWVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_40
                );
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      (**(code **)(*(long *)pWVar12 + 0x1a0))(pWVar12,(Insets *)local_78);
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar12);
      Sexy::Insets::Insets((Insets *)&local_40,(Insets *)local_a8);
      iVar8 = FUN_03b4642c(0x106);
      local_38 = local_38 - iVar8;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_88,(RtWeakPtrBase *)this_00);
      pWVar12 = ::operator_new(0x100);
      PVZ2UIAlmanacInfoDisplayer::PVZ2UIAlmanacInfoDisplayer
                ((PVZ2UIAlmanacInfoDisplayer *)pWVar12,(RtWeakPtr<Sexy::SoundResource> *)local_88,
                 param_5,0,bVar1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
      (**(code **)(*(long *)pWVar12 + 0x1a0))(pWVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar12);
    }
    goto LAB_03b48430;
  }
  Sexy::Insets::Insets((Insets *)local_98,(Insets *)local_a8);
  local_90 = FUN_03b4642c(0x100);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)this_00);
  pWVar12 = ::operator_new(0x110);
  PVZ2UIAlmanacObjectDisplayer::PVZ2UIAlmanacObjectDisplayer
            ((PVZ2UIAlmanacObjectDisplayer *)pWVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  (**(code **)(*(long *)pWVar12 + 0x1a0))(pWVar12,(Insets *)local_98);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar12);
  Sexy::Insets::Insets((Insets *)local_88,(Insets *)local_a8);
  iVar8 = FUN_03b4642c(0x106);
  local_88[0] = local_88[0] + iVar8;
  local_80 = local_80 - iVar8;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)this_00);
  pWVar12 = ::operator_new(0x100);
  psVar20 = (string *)0x0;
  PVZ2UIAlmanacInfoDisplayer::PVZ2UIAlmanacInfoDisplayer
            ((PVZ2UIAlmanacInfoDisplayer *)pWVar12,(RtWeakPtr<Sexy::SoundResource> *)&local_40,
             param_5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  (**(code **)(*(long *)pWVar12 + 0x1a0))(pWVar12,(Insets *)local_88);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar12);
  pPVar13 = (PlayerInfo *)ProfileUtils::Profile();
  lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  cVar2 = PlayerInfo::GetIsPlantUnlocked(pPVar13,(string *)(lVar14 + 8));
  if (cVar2 != '\0') goto LAB_03b48430;
  FUN_05476574();
  std::string::string(asStack_b0,"iOS PvZ2 Coins Plants");
  std::string::string((string *)local_78,"Plants");
  std::string::string((string *)&local_40,"plant");
  lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Magento::FindStoreProduct
            ((Magento *)asStack_b0,(string *)local_78,(string *)&local_40,(string *)(lVar14 + 8),
             psVar20);
  std::string::~string((string *)&local_40);
  nop();
  std::string::~string((string *)local_78);
  nop();
  std::string::~string(asStack_b0);
  nop();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_b8);
  iVar8 = 3;
  if (cVar2 == '\0') {
    iVar8 = 4;
  }
  FUN_05478178((string *)local_78,&DAT_056f11a8,asStack_b0);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar15 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar15,iVar8,(ButtonListener *)(this + 0xd8),(wstring *)local_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar15;
  FUN_05476c50((string *)local_78);
  nop();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_b8);
  if (cVar2 == '\0') {
    TodStringTranslate(L"[ALMANAC_PLANT_VIEW_ON_MAP]");
    FUN_054766c8(auStack_c0,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
    FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_40);
    pPVar15 = *(PVZ2UIButton **)(this + 0x100);
    uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
    PVZ2UIButton::AddText(pPVar15,auStack_c0,uVar18,0);
    pPVar15 = *(PVZ2UIButton **)(this + 0x100);
    plVar21 = *(long **)(pPVar15 + 0x158);
    if (plVar21 == (long *)0x0) {
      lVar14 = *(long *)(pPVar15 + 0x150);
      iVar8 = 0;
      if (lVar14 != 0) {
        FUN_05477b24((RtWeakPtr<Sexy::SoundResource> *)&local_40,auStack_c0);
        iVar8 = Sexy::PrimeTypeface::StringWidth(lVar14,(RtWeakPtr<Sexy::SoundResource> *)&local_40)
        ;
        iVar4 = FUN_03b4642c(0x28);
        iVar8 = iVar8 + iVar4;
        FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_40);
        pPVar15 = *(PVZ2UIButton **)(this + 0x100);
      }
    }
    else {
      iVar8 = (**(code **)(*plVar21 + 0x80))(plVar21,auStack_c0);
      iVar4 = FUN_03b4642c(0x28);
      pPVar15 = *(PVZ2UIButton **)(this + 0x100);
      iVar8 = iVar8 + iVar4;
    }
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06acb690,3);
    puVar19 = &DAT_06acb308;
  }
  else {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)aRStack_b8);
    pPVar13 = (PlayerInfo *)ProfileUtils::Profile();
    lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    if (0 < *(int *)(lVar14 + 0x90)) {
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      PlayerInfo::GetPlantPieceCount(pPVar13,(string *)(lVar14 + 0x80),false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    }
    pbVar16 = (bool *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    MagentoProductProps::GetLocalizedPriceString(pbVar16);
    pMVar17 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    iVar8 = MagentoProductProps::GetPurchaseType(pMVar17);
    if (iVar8 == 0) {
      lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb000);
LAB_03b487a8:
      if (lVar14 == 0) goto LAB_03b48988;
      pMVar17 = (MagentoProductProps *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      iVar8 = MagentoProductProps::GetPurchaseType(pMVar17);
      if (iVar8 == 0) {
        pPVar15 = *(PVZ2UIButton **)(this + 0x100);
        TodStringTranslate(L"[PLANT_OBTAIN]");
        uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
        PVZ2UIButton::AddText(pPVar15,(RtWeakPtr<Sexy::SoundResource> *)&local_40,uVar18,0);
        FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_40);
      }
      else {
        pPVar15 = *(PVZ2UIButton **)(this + 0x100);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,lVar14,1);
        PVZ2UIButton::AddImage(pPVar15,(RtWeakPtr<Sexy::SoundResource> *)&local_40,0);
        pPVar15 = *(PVZ2UIButton **)(this + 0x100);
        uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
        PVZ2UIButton::AddText(pPVar15,(string *)local_78,uVar18,0);
      }
    }
    else {
      if (iVar8 == 2) {
        lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb118);
        goto LAB_03b487a8;
      }
LAB_03b48988:
      pPVar15 = *(PVZ2UIButton **)(this + 0x100);
      uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
      PVZ2UIButton::AddText(pPVar15,(string *)local_78,uVar18,0);
      pPVar15 = *(PVZ2UIButton **)(this + 0x100);
      FUN_05478178((RtWeakPtr<Sexy::SoundResource> *)&local_40,&DAT_05701860,asStack_b0);
      uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
      PVZ2UIButton::AddText(pPVar15,(RtWeakPtr<Sexy::SoundResource> *)&local_40,uVar18,0);
      FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)&local_40);
      nop();
    }
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
    iVar8 = FUN_03b4642c(100);
    FUN_05476c50((string *)local_78);
    pPVar15 = *(PVZ2UIButton **)(this + 0x100);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06acb260,3);
    puVar19 = &DAT_06acb398;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,puVar19,3);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)local_78,(PVZ2UIImage *)&local_40);
  plVar21 = *(long **)(this + 0x100);
  iVar4 = local_90 - iVar8;
  pcVar22 = *(code **)(*plVar21 + 0x198);
  uVar9 = FUN_03b4642c(0xfa);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acb260);
  uVar10 = SalesProgressBar::GetCurrentLevel(this_02);
  (*pcVar22)(plVar21,local_98[0] + iVar4 / 2,uVar9,iVar8,uVar10);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x100));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
  FUN_05476c50(auStack_c0);
LAB_03b48430:
  puVar19 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onItemPurchasedFromStore);
  uStack_f8 = CONCAT44(uStack_34,local_38);
  local_100 = local_40;
  local_f0 = local_30;
  MessageRouter::
  Subscribe<MagentoProductProps*,Sexy::CBMemberTranslatorX<AlmanacPage,void(AlmanacPage::*)(MagentoProductProps*)>>
            ((MessageRouter *)puVar19,Message::ItemPurchasedFromStore,&local_100);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacPage::onUseGemFinish(bool const&) */

void __thiscall AlmanacPage::onUseGemFinish(AlmanacPage *this,bool *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  undefined *puVar2;
  MagentoProductProps *this_01;
  NewPVPMgr *this_02;
  int *piVar3;
  float fVar4;
  int local_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  }
  else {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8);
    this_01 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar4 = (float)MagentoProductProps::GetPriceInUSD(this_01,true);
    local_14 = (int)fVar4;
    this_02 = (NewPVPMgr *)ProfileUtils::Profile();
    local_10[0] = NewPVPMgr::GetSeasonEndTime(this_02);
    piVar3 = eastl::min_alt<int>(&local_14,(int *)local_10);
    puVar2 = gMessageRouter;
    iVar1 = *piVar3;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)this_00);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
              ((MessageRouter *)puVar2,Message::PlantUnlockFragment,
               (RtWeakPtr<Sexy::SoundResource> *)local_10,iVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    puVar2 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)this_00);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
              ((MessageRouter *)puVar2,Message::ItemPurchaseInfo2,
               (RtWeakPtr<Sexy::SoundResource> *)local_10,"Map|PvE_Worldunlock",iVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlmanacPage::ButtonPress(int) */

void AlmanacPage::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Buy_Press");
  return;
}


/* non-virtual thunk to AlmanacPage::ButtonPress(int) */

void __thiscall AlmanacPage::ButtonPress(AlmanacPage *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacPage::ButtonDepress(int) */

void __thiscall AlmanacPage::ButtonDepress(AlmanacPage *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined *puVar1;
  LawnApp *pLVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  WorldDataManager *this_01;
  long lVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  PurchaseBroker *pPVar8;
  MagentoProductProps *pMVar9;
  PlayerInfo *this_02;
  int *piVar10;
  AlmanacPage *pAVar11;
  undefined8 uVar12;
  float fVar13;
  int local_24;
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Almanac_Buy_Release");
  if (param_1 != 3) {
    if (param_1 == 4) {
      this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
      lVar6 = WorldDataManager::FindEventByDataName(this_01,(string *)(lVar6 + 8));
      if (lVar6 != 0) {
        GameStateMgr::ShowWorldMapWithDestination(gGameStateMgr,lVar6,5,5);
        p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar8 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var7);
        PurchaseBroker::EndCartInstance(pPVar8);
      }
    }
    goto LAB_03b49640;
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8);
  pMVar9 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar13 = (float)MagentoProductProps::GetPriceInUSD(pMVar9,true);
  local_24 = (int)fVar13;
  this_02 = (PlayerInfo *)ProfileUtils::Profile();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (0 < *(int *)(lVar6 + 0x90)) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar3 = PlayerInfo::GetPlantPieceCount(this_02,(string *)(lVar6 + 0x80),true);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    local_20[0] = 0;
    local_24 = (int)((1.0 - (float)iVar3 / (float)*(int *)(lVar6 + 0x90)) * (float)(int)fVar13);
    piVar10 = eastl::max_alt<int>(&local_24,local_20);
    local_24 = *piVar10;
  }
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (*(int *)(lVar6 + 0x90) < 1) {
    pMVar9 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar3 = MagentoProductProps::GetPurchaseType(pMVar9);
    if (iVar3 == 1) {
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar8 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var7);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      PurchaseBroker::RequestPayment(pPVar8,(string *)(lVar6 + 0x10),0);
      goto LAB_03b49640;
    }
    if (iVar3 == 0) {
      iVar3 = PlayerInfo::GetNumGems(this_02,true);
      if (local_24 <= iVar3) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        iVar3 = *(int *)(lVar6 + 0x18);
        pAVar11 = ::operator_new(0x28);
        ICloudRequestCallbackFunction<AlmanacPage,bool>::ICloudRequestCallbackFunction
                  (pAVar11,(_func_void_bool_ptr *)this);
        PlayerInfo::SubtractGems
                  (this_02,1,iVar3,(ICloudRequestCallbackFunctionBase *)pAVar11,1,false);
        goto LAB_03b49640;
      }
      uVar12 = 2;
    }
    else {
      if (iVar3 != 2) goto LAB_03b49640;
      iVar4 = PlayerInfo::GetNumCoins(this_02,true);
      iVar3 = local_24;
      if ((local_24 <= iVar4) &&
         (iVar4 = PlayerInfo::SubtractCoins(this_02,local_24), puVar1 = gMessageRouter, -1 < iVar4))
      {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        FUN_05475d88((string *)local_20,lVar6 + 0x80);
        MessageRouter::Post<int,std::string_const&,int,std::string>
                  ((MessageRouter *)puVar1,Message::CoinUse,iVar3,(string *)local_20);
        std::string::~string((string *)local_20);
        goto LAB_03b497bc;
      }
      uVar12 = 0;
    }
    LawnApp::ShowGemStoreConfirm(gLawnApp,uVar12,1);
  }
  else {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar3 = PlayerInfo::GetPlantPieceCount(this_02,(string *)(lVar6 + 0x80),true);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pLVar2 = gLawnApp;
    puVar1 = gMessageRouter;
    if (iVar3 < *(int *)(lVar6 + 0x90)) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)this_00);
      LawnApp::ShowBuyPlantDialog(pLVar2,(RtWeakPtr<Sexy::SoundResource> *)local_20,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      goto LAB_03b49640;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)this_00);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
              ((MessageRouter *)puVar1,Message::PlantUnlockFragment,
               (RtWeakPtr<Sexy::SoundResource> *)local_20,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    puVar1 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)this_00);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
              ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,
               (RtWeakPtr<Sexy::SoundResource> *)local_20,"Map|PvE_Worldunlock",0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
LAB_03b497bc:
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    PlayerInfo::HandlePurchase(this_02,(string *)(lVar6 + 0x10),(vector *)local_20);
    std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
              ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)local_20);
  }
LAB_03b49640:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AlmanacPage::ButtonDepress(int) */

void __thiscall AlmanacPage::ButtonDepress(AlmanacPage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlmanacPage::onItemPurchasedFromStore(MagentoProductProps*) */

void __thiscall
AlmanacPage::onItemPurchasedFromStore(AlmanacPage *this,MagentoProductProps *param_1)

{
  ResourceInfo *pRVar1;
  char *pcVar2;
  CthulhuEyeballEffect *pCVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xf8));
  if (param_1 == (MagentoProductProps *)pRVar1) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Buy_Plant_Confirm");
    (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf8),(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    pCVar3 = *(CthulhuEyeballEffect **)(this + 0xe8);
    if (pCVar3 != (CthulhuEyeballEffect *)0x0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)(this + 0xf0));
      CthulhuEyeballEffect::SetCthulhuEasyButton(pCVar3,a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

