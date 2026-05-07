// Class: TrainingItemWidget


/* TrainingItemWidget::TouchBegan(Sexy::Touch const&) */

void TrainingItemWidget::TouchBegan(Touch *param_1)

{
  if ((*(long *)(param_1 + 0xe0) != 0) && (*(char *)(*(long *)(param_1 + 0xe0) + 0x6c) != '\0')) {
    (**(code **)(*(long *)param_1 + 0x310))(param_1,1);
  }
  return;
}


/* TrainingItemWidget::~TrainingItemWidget() */

void __thiscall TrainingItemWidget::~TrainingItemWidget(TrainingItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06949bf0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06949f18;
  if (*(long **)(this + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x110) + 0x18))();
    *(undefined8 *)(this + 0x110) = 0;
  }
  std::string::~string((string *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TrainingItemWidget::~TrainingItemWidget() */

void __thiscall TrainingItemWidget::~TrainingItemWidget(TrainingItemWidget *this)

{
  ~TrainingItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* TrainingItemWidget::SetSellNum(int) */

void __thiscall TrainingItemWidget::SetSellNum(TrainingItemWidget *this,int param_1)

{
  int *piVar1;
  int local_4;
  
  local_4 = param_1;
  piVar1 = eastl::min_alt<int>(&local_4,(int *)(this + 0xf0));
  *(int *)(this + 0xf4) = *piVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingItemWidget::TrainingItemWidget(TrainingItemWidget::ShowMode) */

void __thiscall TrainingItemWidget::TrainingItemWidget(TrainingItemWidget *this,undefined4 param_2)

{
  undefined4 uVar1;
  PVZ2UIButton *pPVar2;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined4 uVar3;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_06949bf0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06949f18;
  Set8BytesTo0(this + 0xe8);
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0xffffffff;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x108) = param_2;
  *(undefined4 *)(this + 0xf8) = uVar3;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0xfc) = 0xbf800000;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar2 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar2,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar2;
  FUN_05476c50(awStack_78);
  nop();
  pPVar2 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b81488,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b81488,1);
  PVZ2UIButton::SetDialogStates(pPVar2,(PVZ2UIImage *)awStack_78,aPStack_40);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81488);
  uVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81488);
  uVar1 = SalesProgressBar::GetCurrentLevel(this_01);
  (**(code **)(**(long **)(this + 0xe0) + 0x198))(*(long **)(this + 0xe0),0,0,uVar3,uVar1);
  (**(code **)(**(long **)(this + 0xe0) + 0x158))(*(long **)(this + 0xe0),0);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingItemWidget::Draw(Sexy::Graphics*) */

void __thiscall TrainingItemWidget::Draw(TrainingItemWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  SeedPacketUtils *this_00;
  ProfileMgr *this_01;
  long lVar11;
  SysFont *pSVar12;
  SalesProgressBar *pSVar13;
  LotteryResultProgressBar *pLVar14;
  wchar_t *pwVar15;
  Image *pIVar16;
  int extraout_w1;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  int local_24 [3];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x100) == 0) {
    if (*(int *)(this + 0x108) != 2) {
      CachedUIResourcePtr<Sexy::Image>::GetId();
      GetImageOffset(&local_28,(RtId *)&local_18);
      Sexy::RtId::~RtId((RtId *)&local_18);
      local_24[0] = local_24[0] + 1;
      UIWidget::ConvertPSDImageOffsetToUISpace(&local_28,local_24,_FUN_04ade12c);
      pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81560);
      Sexy::Graphics::DrawImage(param_1,pIVar16,local_28,local_24[0]);
    }
    goto LAB_04addce0;
  }
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  SeedPacketUtils::DrawPacket
            (this_00,param_1,*(PacketRenderData **)(this + 0x100),false,-1,false,false);
  iVar6 = *(int *)(*(long *)(this + 0x100) + 0x2c);
  iVar8 = *(int *)(*(long *)(this + 0x100) + 0x34);
  iVar3 = FUN_04add240(0x19);
  Sexy::Color::Color((Color *)&local_38,1);
  FUN_05476574(auStack_40);
  switch(*(undefined4 *)(this + 0x108)) {
  case 0:
    uVar17 = (ulong)*(uint *)(this + 0xf0);
    pwVar15 = L"x%d";
    break;
  case 1:
    iVar7 = *(int *)(this + 0xf4);
    if (0 < iVar7) {
      Sexy::Color::Color((Color *)&local_18,2);
      iVar7 = *(int *)(this + 0xf4);
      local_38 = local_18;
      uStack_30 = uStack_10;
    }
    pwVar15 = L"%d";
    uVar17 = (ulong)(uint)(*(int *)(this + 0xf0) - iVar7);
    break;
  case 2:
  case 3:
    uVar17 = (ulong)*(uint *)(this + 0xf0);
    pwVar15 = L"%d";
    break;
  default:
    goto switchD_04addd2c_default;
  }
  Sexy::StrFormat(pwVar15,&local_18,uVar17);
  FUN_054766c8(auStack_40,&local_18);
  FUN_05476c50(&local_18);
switchD_04addd2c_default:
  iVar4 = FUN_04add240(10);
  iVar7 = *(int *)(this + 0x50);
  iVar5 = FUN_04add240(0x1e);
  Sexy::Insets::Insets((Insets *)&local_28,0,(iVar8 + iVar6) - iVar3,iVar7 - iVar4,iVar5);
  uVar1 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_38);
  WriteWordInRect(param_1,auStack_40,(Insets *)&local_28,uVar1,(Insets *)&local_18,1,1);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar11 = ProfileMgr::GetCurrentProfile(this_01);
  iVar6 = FUN_04add1b0(*(undefined4 *)(lVar11 + 0x1100));
  if ((iVar6 != 5) && (*(int *)(this + 0x108) != 3)) {
    if ((*(int *)(this + 0x108) == 0) &&
       ((fVar19 = *(float *)(this + 0xf8), fVar18 = (float)PVZ_T(), fVar18 <= fVar19 &&
        (0.0 < *(float *)(this + 0xfc))))) {
      pSVar12 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      lVar11 = Sexy::SysFont::CreateImageFont(pSVar12);
      cVar2 = FUN_04add1c0(*(undefined1 *)(lVar11 + 0x29));
      if (cVar2 == '\0') {
        pSVar12 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        lVar11 = Sexy::SysFont::CreateImageFont(pSVar12);
        cVar2 = FUN_04add1bc(*(undefined1 *)(lVar11 + 0x28));
        if (cVar2 != '\0') goto LAB_04addddc;
        fVar19 = *(float *)(this + 0xf8);
        fVar18 = (float)PVZ_EOT();
        if (fVar19 == fVar18) {
          fVar19 = 0.0;
        }
        else {
          fVar18 = (float)PVZ_T();
          fVar19 = fVar19 - fVar18;
        }
        iVar3 = FUN_04add240(5);
        iVar6 = *(int *)(this + 0x54);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81410);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar8 = FUN_04add240(5);
        iVar8 = (iVar6 - iVar7) - iVar8;
        pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81410);
        Sexy::Graphics::DrawImage(param_1,pIVar16,iVar3,iVar8);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81410);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b814d0);
        iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81410);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b814d0);
        iVar5 = SalesProgressBar::GetCurrentLevel(pSVar13);
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b814d0);
        iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
        fVar18 = *(float *)(this + 0xfc);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b814d0);
        iVar10 = SalesProgressBar::GetCurrentLevel(pSVar13);
        pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b814d0);
        Sexy::Graphics::DrawImage
                  (param_1,pIVar16,iVar3 + (iVar6 - iVar7) / 2,iVar8 + (iVar4 - iVar5) / 2,
                   (int)((fVar19 / fVar18) * (float)iVar9),iVar10);
        StringHelper::ToTimeString((StringHelper *)0x2,fVar19,extraout_w1);
        FUN_054766c8(auStack_40,(Insets *)&local_18);
        FUN_05476c50((Insets *)&local_18);
        iVar3 = FUN_04add240(5);
        iVar6 = *(int *)(this + 0x54);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81410);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar8 = FUN_04add240(8);
        iVar8 = (iVar6 - iVar7) - iVar8;
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81410);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      }
      else {
LAB_04addddc:
        std::string::string((string *)&local_28,"[PVP_TRAINING_PAUSE]");
        StringHelper::ToStringValue((string *)&local_28);
        FUN_054766c8(auStack_40,(Insets *)&local_18);
        FUN_05476c50((Insets *)&local_18);
        std::string::~string((string *)&local_28);
        nop();
        iVar3 = FUN_04add240(5);
        iVar6 = *(int *)(this + 0x54);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81410);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar8 = FUN_04add240(5);
        iVar8 = (iVar6 - iVar7) - iVar8;
        pLVar14 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81410);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
      }
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81410);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
      Sexy::Insets::Insets((Insets *)&local_28,iVar3,iVar8,iVar6,iVar7);
      uVar1 = PrimeText_Game::Typeface_FZCuYuan_16;
      Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_38);
      WriteWordInRect(param_1,auStack_40,(Insets *)&local_28,uVar1,(Insets *)&local_18,2,1);
    }
    if (*(StandaloneEffect **)(this + 0x110) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x110),param_1);
    }
  }
  FUN_05476c50(auStack_40);
LAB_04addce0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingItemWidget::PlayFinishedEffect() */

void __thiscall TrainingItemWidget::PlayFinishedEffect(TrainingItemWidget *this)

{
  ResourceInfo *pRVar1;
  Effect_PopAnim *pEVar2;
  StandaloneEffect *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pEVar2 = *(Effect_PopAnim **)(this + 0x110);
  local_8 = ___stack_chk_guard;
  if (pEVar2 == (Effect_PopAnim *)0x0) {
    pEVar2 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x110) = pEVar2;
    std::string::string(asStack_18,"POPANIM_UI_PVP_INBATTLEANIM_WORD_EFFECT");
    GetPAMByName(asStack_18);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_10);
    Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar1,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    nop();
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x110),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x110),true);
    this_00 = *(StandaloneEffect **)(this + 0x110);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)asStack_10,(float)(*(int *)(this + 0x50) >> 1),
               (float)(*(int *)(this + 0x54) >> 1));
    StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)asStack_10,900000);
    pEVar2 = *(Effect_PopAnim **)(this + 0x110);
  }
  std::string::string(asStack_10,"idle1");
  Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TrainingItemWidget::ButtonDepress(int) */

void __thiscall TrainingItemWidget::ButtonDepress(TrainingItemWidget *this,int param_1)

{
  if (param_1 != 1) {
    return;
  }
  MessageRouter::Post<TrainingItemWidget*,TrainingItemWidget*>
            ((MessageRouter *)gMessageRouter,Message::TrainingItemReduceClicked,this);
  return;
}


/* non-virtual thunk to TrainingItemWidget::ButtonDepress(int) */

void __thiscall TrainingItemWidget::ButtonDepress(TrainingItemWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingItemWidget::Update() */

void __thiscall TrainingItemWidget::Update(TrainingItemWidget *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  SeedPacketUtils *this_00;
  long lVar4;
  ProfileMgr *this_01;
  long lVar5;
  SysFont *this_02;
  string *psVar6;
  code *pcVar7;
  long *plVar8;
  undefined4 uVar9;
  RtMixedPtrBase aRStack_30 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  long local_8;
  
  *(undefined8 *)(this + 0x100) = 0;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xf0) = 0;
  uVar9 = PVZ_EOT();
  *(undefined4 *)(this + 0xf8) = uVar9;
  (**(code **)(**(long **)(this + 0xe0) + 0x158))(*(long **)(this + 0xe0),0);
  *(undefined4 *)(this + 0xfc) = 0xbf800000;
  cVar1 = FUN_0547419c((string *)(this + 0xe8));
  if (cVar1 == '\0') {
    if (*(StandaloneEffect **)(this + 0x110) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x110));
    }
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    lVar4 = SeedPacketUtils::GetZombiePacketRenderData
                      (this_00,(string *)(this + 0xe8),(string *)&PVPManager::PacketsZombiePrefix,-1
                      );
    *(long *)(this + 0x100) = lVar4;
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(this_01);
    iVar2 = FUN_04add1b0(*(undefined4 *)(lVar5 + 0x1100));
    if (iVar2 == 5) {
      uVar9 = FUN_04add1c4(*(undefined4 *)(*(long *)(this + 0x118) + 0x1d0));
      *(undefined4 *)(this + 0xf0) = uVar9;
    }
    else {
      iVar2 = *(int *)(this + 0x108);
      if (iVar2 == 3) {
        *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0x10c);
      }
      else {
        plVar8 = *(long **)(this + 0xe0);
        *(int *)(plVar8 + 9) = *(int *)(this + 0x50) - (int)plVar8[10];
        iVar3 = FUN_04add240(10);
        pcVar7 = *(code **)(*plVar8 + 0x158);
        *(int *)((long)plVar8 + 0x4c) = *(int *)(lVar4 + 0x34) - iVar3;
        (*pcVar7)(plVar8,iVar2 != 2);
        this_02 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        psVar6 = (string *)Sexy::SysFont::CreateImageFont(this_02);
        TrainingCamp::GetTrainingData(psVar6);
        cVar1 = TrainingData::IsValid();
        if (cVar1 != '\0') {
          if (*(int *)(this + 0x108) != 0) {
            local_1c = local_20;
          }
          *(undefined4 *)(this + 0xf0) = local_1c;
          *(undefined4 *)(this + 0xf8) = local_14;
          psVar6 = (string *)
                   Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
          ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(psVar6);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
          if ((cVar1 != '\0') && (0.0 < local_18)) {
            lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            *(undefined4 *)(this + 0xfc) = *(undefined4 *)(lVar4 + 0x1c);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        }
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_28);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

