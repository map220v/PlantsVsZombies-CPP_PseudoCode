// Class: ZombieItemWidget


/* ZombieItemWidget::SetType(std::string const&) */

void ZombieItemWidget::SetType(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0xe8);
  return;
}


/* ZombieItemWidget::~ZombieItemWidget() */

void __thiscall ZombieItemWidget::~ZombieItemWidget(ZombieItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06949f60;
  FUN_05476c50(this + 0x100);
  std::string::~string((string *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ZombieItemWidget::~ZombieItemWidget() */

void __thiscall ZombieItemWidget::~ZombieItemWidget(ZombieItemWidget *this)

{
  ~ZombieItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* ZombieItemWidget::Resize(int, int, int, int) */

void __thiscall
ZombieItemWidget::Resize(ZombieItemWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar3 = *(int *)(this + 0x50);
  iVar1 = *(int *)(this + 0xdc);
  iVar2 = FUN_04add240(2);
  *(int *)(this + 0xd4) = (iVar3 - iVar1) + iVar2;
  iVar3 = FUN_04add240(2);
  *(int *)(this + 0xd8) = -iVar3;
  return;
}


/* ZombieItemWidget::SetTrainingCampZombieDlg(TrainingCampZombieDlg*) */

void __thiscall
ZombieItemWidget::SetTrainingCampZombieDlg(ZombieItemWidget *this,TrainingCampZombieDlg *param_1)

{
  *(TrainingCampZombieDlg **)(this + 0x110) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieItemWidget::ZombieItemWidget(std::string const&) */

void __thiscall ZombieItemWidget::ZombieItemWidget(ZombieItemWidget *this,string *param_1)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *pLVar3;
  SalesProgressBar *pSVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06949f60;
  Sexy::Insets::Insets((Insets *)(this + 0xd4));
  Set8BytesTo0(this + 0xe8);
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  this[0xfc] = (ZombieItemWidget)0x0;
  FUN_05476574(this + 0x100);
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  this[0x59] = (ZombieItemWidget)0x0;
  pLVar3 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81588);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar3);
  pSVar4 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81588);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar4);
  Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar1,iVar2);
  *(undefined8 *)(this + 0xd4) = local_18;
  *(undefined8 *)(this + 0xdc) = uStack_10;
  SetType((string *)this);
  pLVar3 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b813a8);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar3);
  pSVar4 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b813a8);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar4);
  Resize(this,0,0,iVar1,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieItemWidget::Draw(Sexy::Graphics*) */

void __thiscall ZombieItemWidget::Draw(ZombieItemWidget *this,Graphics *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Image *pIVar9;
  SeedPacketUtils *this_00;
  SalesProgressBar *pSVar10;
  LotteryResultProgressBar *pLVar11;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  GraphicsAutoState aGStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0xfc] != (ZombieItemWidget)0x0) || (cVar3 = FUN_0547419c(this + 0xe8), cVar3 != '\0')) {
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets((Insets *)aGStack_18,0x9b,0x9b,0x9b,0xfa);
    Sexy::Graphics::SetColor(param_1,(Color *)aGStack_18);
  }
  pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b813a8);
  Sexy::Graphics::DrawImage(param_1,pIVar9,0,0);
  if (*(long *)(this + 0x108) == 0) {
    cVar3 = FUN_054765e8(this + 0x100);
    if (cVar3 == '\0') {
      iVar4 = FUN_04add240(0);
      Sexy::Insets::Insets(aIStack_28,iVar4,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      uVar2 = PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline;
      Sexy::Insets::Insets((Insets *)aGStack_18,0xff,0x52,0x52,0xff);
      WriteWordInRect(param_1,this + 0x100,aIStack_28,uVar2,(Insets *)aGStack_18,5,1);
    }
  }
  else {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_18,param_1);
    iVar4 = *(int *)(*(long *)(this + 0x108) + 0x34);
    *(float *)(param_1 + 0x10) =
         *(float *)(param_1 + 0x10) - (float)*(int *)(*(long *)(this + 0x108) + 0x30);
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) - (float)iVar4;
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    SeedPacketUtils::DrawPacket
              (this_00,param_1,*(PacketRenderData **)(this + 0x108),false,-1,false,false);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,false);
    if (this[0xfc] == (ZombieItemWidget)0x0) {
      FUN_05476574(auStack_30);
      uVar1 = *(uint *)(this + 0xf0);
      if (0 < (int)uVar1) {
        iVar4 = FUN_04add240(10);
        Sexy::StrFormat(L"x%d",aGStack_18,(ulong)uVar1);
        FUN_054766c8(auStack_30,aGStack_18);
        FUN_05476c50(aGStack_18);
        iVar5 = FUN_04add240(0x1e);
        Sexy::Insets::Insets(aIStack_28,iVar4,iVar4,*(int *)(this + 0x50),iVar5);
        uVar2 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
        Sexy::Color::Color((Color *)aGStack_18,1);
        WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aGStack_18,0,1);
      }
      if (0 < *(int *)(this + 0xf4)) {
        iVar6 = FUN_04add240(5);
        iVar4 = *(int *)(this + 0x54);
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81380);
        iVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
        iVar5 = FUN_04add240(5);
        iVar5 = (iVar4 - iVar7) - iVar5;
        pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81380);
        Sexy::Graphics::DrawImage(param_1,pIVar9,iVar6,iVar5);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81500);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar7 = FUN_04add240(5);
        pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81500);
        Sexy::Graphics::DrawImage(param_1,pIVar9,(iVar4 - iVar6) - iVar7,iVar5);
        iVar4 = *(int *)(this + 0x50);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81500);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar7 = FUN_04add240(10);
        Sexy::StrFormat(L"%d",aGStack_18,(ulong)*(uint *)(this + 0xf4));
        FUN_054766c8(auStack_30,aGStack_18);
        FUN_05476c50(aGStack_18);
        pSVar10 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81380);
        iVar8 = SalesProgressBar::GetCurrentLevel(pSVar10);
        Sexy::Insets::Insets(aIStack_28,0,iVar5,(iVar4 - iVar6) - iVar7,iVar8);
        uVar2 = PrimeText_Game::Typeface_FZCuYuan_19_Outline;
        Sexy::Color::Color((Color *)aGStack_18,1);
        WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aGStack_18,1,1);
      }
      FUN_05476c50(auStack_30);
    }
    else {
      iVar4 = FUN_04add240(10);
      iVar5 = FUN_04add240(0x14);
      Sexy::Insets::Insets(aIStack_28,iVar4,0,*(int *)(this + 0x50) - iVar5,*(int *)(this + 0x54));
      uVar2 = PrimeText_Game::Typeface_CafeteriaBlack_19_ThickOutline;
      Sexy::Insets::Insets((Insets *)aGStack_18,0xff,0x52,0x52,0xff);
      WriteWordInRect(param_1,this + 0x100,aIStack_28,uVar2,aGStack_18,5,1);
    }
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b81588);
    Sexy::Graphics::DrawImage(param_1,pIVar9,*(int *)(this + 0xd4),*(int *)(this + 0xd8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieItemWidget::Update() */

void __thiscall ZombieItemWidget::Update(ZombieItemWidget *this)

{
  ZombieItemWidget ZVar1;
  char cVar2;
  int iVar3;
  SeedPacketUtils *this_00;
  undefined8 uVar4;
  ProfileMgr *this_01;
  long lVar5;
  SysFont *this_02;
  string *psVar6;
  PVPManager *this_03;
  int iVar7;
  RtMixedPtrBase aRStack_40 [8];
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_28 [12];
  undefined4 local_1c;
  long local_8;
  
  *(undefined8 *)(this + 0x108) = 0;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  this[0xfc] = (ZombieItemWidget)0x0;
  cVar2 = FUN_0547419c((string *)(this + 0xe8));
  if (cVar2 == '\0') {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    iVar7 = -1;
    uVar4 = SeedPacketUtils::GetZombiePacketRenderData
                      (this_00,(string *)(this + 0xe8),(string *)&PVPManager::PacketsZombieBigPrefix
                       ,-1);
    *(undefined8 *)(this + 0x108) = uVar4;
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(this_01);
    iVar3 = FUN_04add1b0(*(undefined4 *)(lVar5 + 0x1100));
    if (iVar3 != 5) {
      this_02 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      psVar6 = (string *)Sexy::SysFont::CreateImageFont(this_02);
      TrainingCamp::GetTrainingData(psVar6);
      cVar2 = TrainingData::IsValid();
      if (cVar2 != '\0') {
        *(undefined4 *)(this + 0xf0) = local_1c;
      }
      FUN_05476f98(this + 0x100);
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
      ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(psVar6);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
      if (cVar2 != '\0') {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        *(undefined4 *)(this + 0xf4) = *(undefined4 *)(lVar5 + 0x14);
        *(undefined4 *)(this + 0xf8) = 0;
        this_03 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        iVar3 = PVPManager::GetHomeLevel(this_03);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        ZVar1 = (ZombieItemWidget)(iVar3 < *(int *)(lVar5 + 0x20));
        this[0xfc] = ZVar1;
        if ((bool)ZVar1) {
          std::string::string(asStack_38,"[PVP_SEEDPACKET_LOCKED]");
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          StringHelper::ReplaceNumberString
                    ((StringHelper *)asStack_38,(string *)L"{NUMBER}",
                     (wchar_t *)(ulong)*(uint *)(lVar5 + 0x20),iVar7);
          FUN_054766c8(this + 0x100,auStack_30);
          FUN_05476c50(auStack_30);
          std::string::~string(asStack_38);
          nop();
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieItemWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall ZombieItemWidget::TouchBegan(ZombieItemWidget *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ProfileMgr *this_00;
  long lVar8;
  string *psVar9;
  SysFont *this_01;
  TrainingCamp *pTVar10;
  TrainingInfoDlg *pTVar11;
  RtMixedPtrBase aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar8 = ProfileMgr::GetCurrentProfile(this_00);
  iVar5 = FUN_04add1b0(*(undefined4 *)(lVar8 + 0x1100));
  if (iVar5 == 5) {
    TrainingCampZombieDlg::onTutorialTrainZombieClick(*(TrainingCampZombieDlg **)(this + 0x110));
  }
  else {
    iVar5 = *(int *)(param_1 + 0x10);
    iVar6 = FUN_04add240(5);
    iVar1 = *(int *)(this + 0xd4);
    iVar2 = *(int *)(this + 0xd8);
    iVar3 = *(int *)(param_1 + 0x14);
    iVar7 = FUN_04add240(10);
    Sexy::Insets::Insets
              (aIStack_18,iVar1 - iVar6,iVar2 - iVar6,iVar7 + *(int *)(this + 0xdc),
               iVar7 + *(int *)(this + 0xe0));
    cVar4 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,iVar5,iVar3);
    if (cVar4 == '\0') {
      if (this[0xfc] == (ZombieItemWidget)0x0) {
        this_01 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        pTVar10 = (TrainingCamp *)Sexy::SysFont::CreateImageFont(this_01);
        TrainingCamp::SetTraining(pTVar10,this + 0xe8,1);
      }
    }
    else {
      psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar9);
      cVar4 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
      if (cVar4 != '\0') {
        pTVar11 = (TrainingInfoDlg *)UISingletonDialog<TrainingInfoDlg>::ShowDialog();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
        TrainingInfoDlg::SetType(pTVar11,aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

