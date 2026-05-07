// Class: GoldenEggBackgroundWidget


/* GoldenEggBackgroundWidget::Resize(Sexy::TRect<int> const&) */

void __thiscall GoldenEggBackgroundWidget::Resize(GoldenEggBackgroundWidget *this,TRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x138) = uVar1;
  *(undefined4 *)(this + 0x13c) = uVar2;
  *(undefined4 *)(this + 0x140) = uVar3;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggBackgroundWidget::~GoldenEggBackgroundWidget() */

void __thiscall
GoldenEggBackgroundWidget::~GoldenEggBackgroundWidget(GoldenEggBackgroundWidget *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0697d8a0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Christmas");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0x130);
  FUN_05476c50(this + 0x128);
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x118);
  FUN_05476c50(this + 0x110);
  FUN_05476c50(this + 0x108);
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf8);
  FUN_05476c50(this + 0xf0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldenEggBackgroundWidget::~GoldenEggBackgroundWidget() */

void __thiscall
GoldenEggBackgroundWidget::~GoldenEggBackgroundWidget(GoldenEggBackgroundWidget *this)

{
  ~GoldenEggBackgroundWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggBackgroundWidget::GoldenEggBackgroundWidget() */

void __thiscall
GoldenEggBackgroundWidget::GoldenEggBackgroundWidget(GoldenEggBackgroundWidget *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  this[0xd1] = (GoldenEggBackgroundWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_0697d8a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  FUN_05476574(this + 0xf0);
  FUN_05476574(this + 0xf8);
  FUN_05476574(this + 0x100);
  FUN_05476574(this + 0x108);
  FUN_05476574(this + 0x110);
  FUN_05476574(this + 0x118);
  FUN_05476574(this + 0x120);
  FUN_05476574(this + 0x128);
  FUN_05476574(this + 0x130);
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  Sexy::Insets::Insets((Insets *)(this + 0x178));
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  Sexy::Insets::Insets((Insets *)(this + 0x198));
  Sexy::Insets::Insets((Insets *)(this + 0x1a8));
  Sexy::Insets::Insets((Insets *)(this + 0x1b8));
  Sexy::Insets::Insets((Insets *)(this + 0x1c8));
  Sexy::Insets::Insets((Insets *)(this + 0x1d8));
  Sexy::Insets::Insets((Insets *)(this + 0x1e8));
  Sexy::Insets::Insets((Insets *)(this + 0x1f8));
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Christmas");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggBackgroundWidget::InitView() */

void __thiscall GoldenEggBackgroundWidget::InitView(GoldenEggBackgroundWidget *this)

{
  wstring *pwVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  string *psVar6;
  LotteryResultProgressBar *this_03;
  SalesProgressBar *this_04;
  PlayerInfo *this_05;
  long lVar7;
  undefined8 uVar8;
  Effect_PopAnim *pEVar9;
  ResourceInfo *pRVar10;
  ulong uVar11;
  StandaloneEffect *this_06;
  string asStack_68 [8];
  RtMixedPtrBase aRStack_60 [8];
  Insets local_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  Set8BytesTo0(asStack_68);
  if (this_01 != (PlayerInfo *)0x0) {
    iVar3 = PlayerInfo::GetGoldenEggsObjectId(this_01);
    this_02 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(this_02,iVar3);
    if (cVar2 == '\0') {
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar6);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    }
    else {
      iVar3 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar3);
      std::operator+("plant_piece_",(string *)aRStack_60);
      FUN_05474278(asStack_68,(string *)&local_58);
      std::string::~string((string *)&local_58);
      std::string::~string((string *)aRStack_60);
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar6);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    }
    if (cVar2 != '\0') {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      lVar7 = StringHelper::ToImage((string *)(lVar7 + 0x60),false);
      if (lVar7 == 0) {
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xd8));
      }
      else {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0xd8),(RtId *)&local_58);
        Sexy::RtId::~RtId((RtId *)&local_58);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  iVar3 = FUN_04beab84(0x14);
  this_03 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c258);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_03);
  this_04 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c258);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_04);
  Sexy::Insets::Insets(&local_58,(int)((double)iVar3 * 1.4),(int)((double)iVar3 * 1.4),iVar4,iVar5);
  *(ulong *)(this + 0x148) = CONCAT71(uStack_57,local_58);
  *(undefined8 *)(this + 0x150) = uStack_50;
  iVar3 = FUN_04beab84(0x14);
  Sexy::Insets::Insets
            (&local_58,iVar3 * 5 + *(int *)(this + 0x148),*(int *)(this + 0x14c),iVar3 << 1,
             *(int *)(this + 0x154));
  *(ulong *)(this + 0x158) = CONCAT71(uStack_57,local_58);
  *(undefined8 *)(this + 0x160) = uStack_50;
  iVar3 = FUN_04beab84(0x14);
  Sexy::Insets::Insets
            (&local_58,(int)((double)*(int *)(this + 0x148) + (double)iVar3 * 7.3),
             *(int *)(this + 0x14c),iVar3 * 5,*(int *)(this + 0x154));
  *(ulong *)(this + 0x168) = CONCAT71(uStack_57,local_58);
  *(undefined8 *)(this + 0x170) = uStack_50;
  iVar3 = FUN_04beab84(0x14);
  Sexy::Insets::Insets
            (&local_58,(int)((double)*(int *)(this + 0x148) + (double)iVar3 * 17.5),
             *(int *)(this + 0x14c),iVar3 << 1,*(int *)(this + 0x154));
  *(ulong *)(this + 0x178) = CONCAT71(uStack_57,local_58);
  *(undefined8 *)(this + 0x180) = uStack_50;
  iVar3 = FUN_04beab84(0x14);
  Sexy::Insets::Insets
            (&local_58,(int)((double)*(int *)(this + 0x148) + (double)iVar3 * 24.8),
             *(int *)(this + 0x14c),iVar3 << 1,iVar3 << 1);
  *(ulong *)(this + 0x1b8) = CONCAT71(uStack_57,local_58);
  *(undefined8 *)(this + 0x1c0) = uStack_50;
  iVar3 = FUN_04beab84(0x14);
  Sexy::Insets::Insets
            (&local_58,(int)((double)*(int *)(this + 0x148) + (double)iVar3 * 21.5),
             (int)((double)*(int *)(this + 0x14c) + (double)iVar3 * 15.0),iVar3 << 1,iVar3 << 1);
  *(ulong *)(this + 0x1c8) = CONCAT71(uStack_57,local_58);
  *(undefined8 *)(this + 0x1d0) = uStack_50;
  iVar3 = FUN_04beab84(0x14);
  Sexy::Insets::Insets
            (&local_58,(int)((double)*(int *)(this + 0x148) + (double)iVar3 * 24.5),
             iVar3 * 0xd + *(int *)(this + 0x14c),iVar3 * 2,*(int *)(this + 0x154));
  *(ulong *)(this + 0x1f8) = CONCAT71(uStack_57,local_58);
  *(undefined8 *)(this + 0x200) = uStack_50;
  iVar3 = FUN_04beab84(0x14);
  Sexy::Insets::Insets
            (&local_58,(int)((double)*(int *)(this + 0x148) + (double)iVar3 * 7.2),
             (int)((double)*(int *)(this + 0x14c) + (double)iVar3 * 15.2),iVar3 << 1,
             *(int *)(this + 0x154));
  *(ulong *)(this + 0x188) = CONCAT71(uStack_57,local_58);
  *(undefined8 *)(this + 400) = uStack_50;
  iVar3 = FUN_04beab84(0x14);
  Sexy::Insets::Insets
            (&local_58,(int)((double)*(int *)(this + 0x148) + (double)iVar3 * 11.2),
             (int)((double)*(int *)(this + 0x14c) + (double)iVar3 * 15.2),iVar3 << 1,
             *(int *)(this + 0x154));
  *(ulong *)(this + 0x198) = CONCAT71(uStack_57,local_58);
  *(undefined8 *)(this + 0x1a0) = uStack_50;
  iVar3 = FUN_04beab84(0x14);
  Sexy::Insets::Insets
            (&local_58,(int)((double)*(int *)(this + 0x148) + (double)iVar3 * 23.5),
             (int)((double)*(int *)(this + 0x14c) + (double)iVar3 * 15.2),iVar3 << 1,
             *(int *)(this + 0x154));
  *(ulong *)(this + 0x1d8) = CONCAT71(uStack_57,local_58);
  *(undefined8 *)(this + 0x1e0) = uStack_50;
  iVar3 = FUN_04beab84(0x14);
  Sexy::Insets::Insets
            (&local_58,(int)((double)*(int *)(this + 0x148) + (double)iVar3 * 0.6),
             (int)((double)*(int *)(this + 0x14c) + (double)iVar3 * 16.4),iVar3 * 0xe,
             (int)((double)*(int *)(this + 0x154) * 1.2));
  *(ulong *)(this + 0x1a8) = CONCAT71(uStack_57,local_58);
  *(undefined8 *)(this + 0x1b0) = uStack_50;
  iVar3 = FUN_04beab84(0x14);
  Sexy::Insets::Insets
            (&local_58,(int)((double)*(int *)(this + 0x148) + (double)iVar3 * 23.5),
             iVar3 * 0x11 + *(int *)(this + 0x14c),iVar3 << 1,*(int *)(this + 0x154));
  *(ulong *)(this + 0x1e8) = CONCAT71(uStack_57,local_58);
  *(undefined8 *)(this + 0x1f0) = uStack_50;
  this_05 = (PlayerInfo *)LawnApp::GetActivityConfig();
  *(PlayerInfo **)(this + 0x208) = this_05;
  if ((this_05 != (PlayerInfo *)0x0) && (this_01 != (PlayerInfo *)0x0)) {
    lVar7 = PlayerInfo::GetNewTotalRechargeRewardStatus(this_05);
    uVar8 = ActivityConfig::DateMKTime((ActivityConfig *)this_05,*(int *)(lVar7 + 4));
    *(undefined8 *)(this + 0xe0) = uVar8;
    PlayerInfo::GetGoldenEggInfo();
    GoldenEggInfo::~GoldenEggInfo((GoldenEggInfo *)&local_58);
    if (local_58 != (Insets)0x0) {
      uVar11 = PlayerInfo::GetGoldenEggLastRefreshTime(this_01);
      *(ulong *)(this + 0xe8) = uVar11 & 0xffffffff;
    }
    pwVar1 = (wstring *)(this + 0x110);
    TodStringTranslate(L"[CHRISTMAS_GOLDEN_EGG_HAMMERS_INFO]");
    iVar3 = GridItemEgg::getState(*(GridItemEgg **)(this + 0x208));
    TodReplaceNumberString((wstring *)aRStack_60,L"{RMB}",iVar3);
    FUN_054766c8(pwVar1,&local_58);
    FUN_05476c50(&local_58);
    FUN_05476c50((wstring *)aRStack_60);
    iVar3 = ActivityConfig::GetGoldenEggRewardHammerQuantity(*(ActivityConfig **)(this + 0x208));
    TodReplaceNumberString(pwVar1,L"{HAMMERS}",iVar3);
    FUN_054766c8(pwVar1,&local_58);
    FUN_05476c50(&local_58);
  }
  pEVar9 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x210) = pEVar9;
  std::string::string((string *)&local_58,"POPANIM_EFFECTS_CHRISTMAS_REWARD");
  GetPAMByName((string *)&local_58);
  std::string::~string((string *)&local_58);
  nop();
  pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_60);
  pEVar9 = *(Effect_PopAnim **)(this + 0x210);
  *(float *)(pRVar10 + 0x28) = (float)*(int *)(gLawnApp + 0xd8) * 0.0007864583;
  Effect_PopAnim::CreatePopAnimRig(pEVar9,(PopAnim *)pRVar10,(RtClass *)0x0);
  this_06 = *(StandaloneEffect **)(this + 0x210);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_58,(float)(*(int *)(this + 0x1b8) + *(int *)(this + 0x1c0) / 2),
             (float)(*(int *)(this + 0x1bc) + *(int *)(this + 0x1c4) / 2));
  StandaloneEffect::SetScreenSpaceOrigin(this_06,(SexyVector2 *)&local_58,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x210),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x210),true);
  pEVar9 = *(Effect_PopAnim **)(this + 0x210);
  std::string::string((string *)&local_58,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar9,&local_58,0);
  std::string::~string((string *)&local_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggBackgroundWidget::ResetRewardImage() */

void __thiscall GoldenEggBackgroundWidget::ResetRewardImage(GoldenEggBackgroundWidget *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar3;
  NameMapperBase *this_02;
  string *psVar4;
  long lVar5;
  string asStack_20 [8];
  RtMixedPtrBase aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    uVar3 = PlayerInfo::GetGoldenEggLastRefreshTime(this_01);
    *(ulong *)(this + 0xe8) = uVar3 & 0xffffffff;
    iVar2 = PlayerInfo::GetGoldenEggsObjectId(this_01);
    this_02 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(this_02,iVar2);
    if (cVar1 != '\0') {
      iVar2 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      std::operator+("plant_piece_",asStack_10);
      std::string::~string(asStack_10);
      psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar4);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
      if (cVar1 != '\0') {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x60),false);
        if (lVar5 == 0) {
          Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0xd8));
        }
        else {
          Sexy::BaseResource::GetRtId();
          Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                    ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0xd8),(RtId *)asStack_10);
          Sexy::RtId::~RtId((RtId *)asStack_10);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      std::string::~string(asStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldenEggBackgroundWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
GoldenEggBackgroundWidget::DrawAll
          (GoldenEggBackgroundWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  
  cVar1 = FUN_04bea9f4(this[0xd1]);
  if (cVar1 == '\0') {
    return;
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggBackgroundWidget::Draw(Sexy::Graphics*) */

void __thiscall GoldenEggBackgroundWidget::Draw(GoldenEggBackgroundWidget *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  Image *pIVar3;
  undefined8 uVar4;
  ResourceInfo *pRVar5;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04bea9f4(this[0xd1]);
  if (cVar1 != '\0') {
    nop();
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c3b0);
    Sexy::Graphics::DrawImage(param_1,pIVar3,0,0);
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8c258);
    Sexy::Graphics::DrawImage(param_1,pIVar3,*(int *)(this + 0x148),*(int *)(this + 0x14c));
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x128,this + 0x1f8,uVar4,aCStack_18,3,1);
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x100,this + 0x188,uVar4,aCStack_18,5,1);
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x108,this + 0x198,uVar4,aCStack_18,5,1);
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x118,this + 0x1d8,uVar4,aCStack_18,5,1);
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Shaded);
    Sexy::Color::Color(aCStack_18,0x3a,0x37,10);
    WriteWordInRect(param_1,this + 0x110,this + 0x1a8,uVar4,aCStack_18,3,1);
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x120,this + 0x1e8,uVar4,aCStack_18,3,1);
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x130,this + 0x178,uVar4,aCStack_18,3,1);
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0xf0,this + 0x158,uVar4,aCStack_18,3,1);
    uVar4 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0xf8,this + 0x168,uVar4,aCStack_18,3,1);
    if (*(StandaloneEffect **)(this + 0x210) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x210),param_1);
    }
    this_00 = (RtWeakPtr *)(this + 0xd8);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar5,*(int *)(this + 0x1b8),*(int *)(this + 0x1bc),
                 *(int *)(this + 0x1c0),*(int *)(this + 0x1c4));
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar5,*(int *)(this + 0x1c8),*(int *)(this + 0x1cc),
                 *(int *)(this + 0x1d0),*(int *)(this + 0x1d4));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggBackgroundWidget::Update() */

void __thiscall GoldenEggBackgroundWidget::Update(GoldenEggBackgroundWidget *this)

{
  GoldenEggBackgroundWidget *pGVar1;
  uint uVar2;
  LawnApp *this_00;
  char cVar3;
  bool bVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  ulong uVar5;
  int *piVar6;
  wchar_t *pwVar7;
  GoldenEggUI *this_03;
  NetworkMgr *this_04;
  long *plVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 local_80;
  undefined8 local_78;
  vector<int,std::allocator<int>> avStack_70 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  local_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_04bea9f4(this[0xd1]);
  if (cVar3 == '\0') goto LAB_04beff50;
  pGVar1 = this + 0xf0;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x210));
  FUN_054772c4(pGVar1,&DAT_056f11a8);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if ((this_02 == (PlayerInfo *)0x0) || (*(long *)(this + 0x208) == 0)) goto LAB_04beff50;
  PlayerInfo::GetGoldenEggsStat();
  uVar5 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (uVar5 == 0) {
    FUN_054772c4(pGVar1,&DAT_05700290);
    pwVar7 = L"[PLANT_ADVENTURE_UNCONNECTED]";
LAB_04bf027c:
    TodStringTranslate(pwVar7);
    FUN_054766c8(this + 0xf8,local_58);
    FUN_05476c50(local_58);
  }
  else {
    cVar3 = ActivityConfig::IsGoldenEggActived(*(ActivityConfig **)(this + 0x208));
    this_00 = gLawnApp;
    if (cVar3 == '\0') {
LAB_04bf02a0:
      pwVar7 = L"[ACTIVITY_CLOSED]";
      goto LAB_04bf027c;
    }
    uVar12 = *(undefined8 *)(this + 0xe0);
    if ((uint)uVar12 <= (uint)uVar5) goto LAB_04bf02a0;
    if ((gLawnApp != (LawnApp *)0x0) &&
       (cVar3 = LawnApp::IsGoldenEggUIValid(gLawnApp), cVar3 != '\0')) {
      this_03 = (GoldenEggUI *)LawnApp::GetGoldenEggUI(this_00);
      cVar3 = GoldenEggUI::IsConnecting(this_03);
      if (cVar3 == '\0') {
        PlayerInfo::GetGoldenEggInfo();
        if (local_58[0] ==
            (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             )0x0) {
          GoldenEggInfo::~GoldenEggInfo((GoldenEggInfo *)local_58);
        }
        else {
          lVar10 = *(long *)(this + 0xe8);
          GoldenEggInfo::~GoldenEggInfo((GoldenEggInfo *)local_58);
          if ((long)((uVar5 & 0xffffffff) / 0x15180) <= lVar10 / 0x15180) goto LAB_04bf0018;
        }
        this_04 = (NetworkMgr *)NetworkMgr::Instance();
        plVar8 = (long *)NetworkMgr::GetNewNetWorkProcess(this_04);
        if (*(code **)(*plVar8 + 0x2a8) != INetworkMsgProcess::ICloudRequestGetGoldenEggStat) {
          (**(code **)(*plVar8 + 0x2a8))(plVar8,2);
        }
      }
    }
LAB_04bf0018:
    uVar2 = (uint)uVar12 - (uint)uVar5;
    uVar5 = (ulong)uVar2;
    uVar11 = 0;
    Sexy::StrFormat(L"%d",local_58,uVar5 / 0x15180);
    FUN_054766c8(pGVar1,local_58);
    FUN_05476c50(local_58);
    iVar9 = (int)(uVar5 / 0x3c);
    Sexy::StrFormat(L"%02d:%02d:%02d",local_58,
                    (ulong)(uint)((int)(uVar5 / 0xe10) + (int)((uVar5 / 0xe10) / 0x18) * -0x18),
                    (ulong)(uint)(iVar9 + (int)((uVar5 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uVar2 + iVar9 * -0x3c));
    FUN_054766c8(this + 0xf8,local_58);
    FUN_05476c50(local_58);
    Sexy::StrFormat(L"%d",local_58,1);
    FUN_054766c8(this + 0x100,local_58);
    FUN_05476c50(local_58);
    uVar5 = ActivityConfig::GetGoldenEggEggOpenGemCost(*(ActivityConfig **)(this + 0x208));
    Sexy::StrFormat(L"%d",local_58,uVar5 & 0xffffffff);
    FUN_054766c8(this + 0x108,local_58);
    FUN_05476c50(local_58);
    uVar5 = PlayerInfo::GetGoldenEggDailyReward(this_02);
    Sexy::StrFormat(L"%d",local_58,uVar5 & 0xffffffff);
    FUN_054766c8(this + 0x118,local_58);
    FUN_05476c50(local_58);
    uVar5 = PlayerInfo::GetGoldenEggHammers(this_02);
    Sexy::StrFormat(L"%d",local_58,uVar5 & 0xffffffff);
    FUN_054766c8(this + 0x120,local_58);
    FUN_05476c50(local_58);
    uVar5 = PlayerInfo::GetGoldenEggHammersLeft(this_02);
    Sexy::StrFormat(L"%d",local_58,uVar5 & 0xffffffff);
    FUN_054766c8(this + 0x128,local_58);
    FUN_05476c50(local_58);
    PlayerInfo::GetGoldenEggsStat();
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(local_58);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(local_58);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar4)
    {
      piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      if (*piVar6 == 1) {
        uVar11 = uVar11 + 1;
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_80);
    }
    Sexy::StrFormat(L"%d",(__normal_iterator *)&local_78,(ulong)uVar11);
    FUN_054766c8(this + 0x130,(__normal_iterator *)&local_78);
    FUN_05476c50((__normal_iterator *)&local_78);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_58);
  }
  std::vector<int,std::allocator<int>>::~vector(avStack_70);
LAB_04beff50:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

