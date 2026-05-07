// Class: DailySignRewardContent


/* DailySignRewardContent::onDailySignRewardReceived(int) */

void __thiscall
DailySignRewardContent::onDailySignRewardReceived(DailySignRewardContent *this,int param_1)

{
  if (*(int *)(this + 0x130) == param_1) {
    this[0x138] = (DailySignRewardContent)0x1;
    if (*(long *)(this + 0xf8) != 0) {
      (**(code **)(*(long *)this + 0x68))();
      if (*(long **)(this + 0xf8) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0xf8) + 0x18))();
      }
      *(undefined8 *)(this + 0xf8) = 0;
      return;
    }
  }
  return;
}


/* DailySignRewardContent::Resize(int, int, int, int) */

void __thiscall
DailySignRewardContent::Resize
          (DailySignRewardContent *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0xf8);
  *(undefined4 *)(this + 300) = *(undefined4 *)(this + 0x50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,0,0,param_3,param_4);
  }
  return;
}


/* DailySignRewardContent::Update() */

void __thiscall DailySignRewardContent::Update(DailySignRewardContent *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(StandaloneEffect **)(this + 0x100) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x100));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardContent::~DailySignRewardContent() */

void __thiscall DailySignRewardContent::~DailySignRewardContent(DailySignRewardContent *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06932f60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06933280;
  if (*(long **)(this + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x100) + 0x18))();
    *(undefined8 *)(this + 0x100) = 0;
  }
  this_00 = gLawnApp;
  if (this[0x13c] != (DailySignRewardContent)0x0) {
    std::string::string(asStack_10,"Effects_SignReward");
    LawnApp::DeleteGroup(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x148));
  FUN_05476c50(this + 0x120);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailySignRewardContent::~DailySignRewardContent() */

void __thiscall DailySignRewardContent::~DailySignRewardContent(DailySignRewardContent *this)

{
  ~DailySignRewardContent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardContent::Draw(Sexy::Graphics*) */

void __thiscall DailySignRewardContent::Draw(DailySignRewardContent *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  undefined8 uVar13;
  ProfileMgr *this_00;
  PlayerInfo *pPVar14;
  ResourceInfo *pRVar15;
  SeedPacketUtils *this_01;
  RtWeakPtr *pRVar16;
  long lVar17;
  Image *pIVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (this[0x13a] != (DailySignRewardContent)0x0) {
    iVar3 = FUN_04a3aff4(10);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa00);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar12);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa68);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa00);
    Sexy::Graphics::DrawImage(param_1,pIVar18,0,iVar3 - (iVar4 - iVar5) / 2);
  }
  if (*(long *)(this + 0xe8) != 0) {
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa00);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe8));
    iVar5 = FUN_04a3aff4(10);
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xe8),(iVar3 - iVar4) / 2,iVar5);
  }
  cVar1 = FUN_0547419c((string *)(this + 0x148));
  if (cVar1 == '\0') {
    this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    pRVar16 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_01,(string *)(this + 0x148));
    iVar3 = *(int *)(this + 300);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a930);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    fVar19 = *(float *)(this + 0x140);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa68);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a930);
    iVar10 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar4 = *(int *)(pRVar16 + 0x28);
    iVar5 = *(int *)(pRVar16 + 0x2c);
    fVar21 = *(float *)(this + 0x140);
    iVar6 = *(int *)(pRVar16 + 0x10);
    iVar7 = *(int *)(pRVar16 + 0x14);
    fVar20 = (float)(int)(((float)iVar3 - fVar19 * (float)iVar8) * 0.5);
    pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar16 + 0x170);
    fVar19 = (float)(int)((float)iVar9 - fVar21 * (float)iVar10);
    Sexy::Insets::Insets
              ((Insets *)aCStack_18,
               (int)(fVar20 + *(float *)(this + 0x140) * (float)*(int *)(pRVar16 + 0x30)),
               (int)(fVar19 + *(float *)(this + 0x140) * (float)*(int *)(pRVar16 + 0x34)),
               (int)((float)iVar4 * fVar21),(int)((float)iVar5 * fVar21));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar15,(TRect *)aCStack_18,(TRect *)(pRVar16 + 0x20));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar16);
    if (bVar2) {
      lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar16);
      pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar17 + 0x48));
      Sexy::Insets::Insets
                ((Insets *)aCStack_18,
                 (int)(fVar20 + *(float *)(this + 0x140) * (float)*(int *)(pRVar16 + 0x18)),
                 (int)(fVar19 + *(float *)(this + 0x140) * (float)*(int *)(pRVar16 + 0x1c)),
                 (int)((float)iVar6 * fVar21),(int)((float)iVar7 * fVar21));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar15,(TRect *)aCStack_18,(TRect *)(pRVar16 + 8))
      ;
    }
  }
  else if (*(LotteryResultProgressBar **)(this + 0xe0) != (LotteryResultProgressBar *)0x0) {
    iVar3 = *(int *)(this + 300);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe0));
    fVar19 = *(float *)(this + 0x140);
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa68);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
    iVar6 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xe0));
    fVar21 = *(float *)(this + 0x140);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe0));
    pSVar12 = *(SalesProgressBar **)(this + 0xe0);
    fVar20 = *(float *)(this + 0x140);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pSVar12,(int)(((float)iVar3 - fVar19 * (float)iVar4) * 0.5),
               (int)((float)iVar5 - fVar21 * (float)iVar6),(int)((float)iVar7 * fVar20),
               (int)((float)iVar8 * *(float *)(this + 0x140)));
  }
  if (this[0x150] != (DailySignRewardContent)0x0) {
    pRVar16 = (RtWeakPtr *)(this + 0x118);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar16);
    if (bVar2) {
      pLVar11 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa00);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      pLVar11 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar16);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar16);
      iVar5 = FUN_04a3aff4(0x66);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar15,(iVar3 - iVar4) / 2,iVar5);
    }
  }
  if (*(StandaloneEffect **)(this + 0x100) == (StandaloneEffect *)0x0) {
    if (this[0x138] != (DailySignRewardContent)0x0) {
      iVar4 = FUN_04a3aff4(0x2b);
      pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa38);
      iVar3 = *(int *)(this + 300);
      pLVar11 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa38);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      Sexy::Graphics::DrawImage(param_1,pIVar18,(iVar3 - iVar5) / 2,iVar4);
    }
  }
  else {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x100),param_1);
  }
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  iVar4 = FUN_04a3aff4(10);
  iVar5 = FUN_04a3aff4(0xe);
  iVar6 = FUN_04a3aff4(0x14);
  iVar3 = *(int *)(this + 0x50);
  FUN_05477b24(auStack_20,this + 0x120);
  Sexy::Color::Color(aCStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)iVar4,(float)iVar5,(float)(iVar3 - iVar6),uVar13,param_1,
             auStack_20,1,aCStack_18,0);
  FUN_05476c50(auStack_20);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar14 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this[0x150] != (DailySignRewardContent)0x0) &&
     (cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar14,4), cVar1 != '\0')) {
    pIVar18 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ad20);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa00);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe8));
    iVar5 = FUN_04a3aff4(10);
    Sexy::Graphics::DrawImage(param_1,pIVar18,(iVar3 - iVar4) / 2,iVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardContent::InitView() */

void __thiscall DailySignRewardContent::InitView(DailySignRewardContent *this)

{
  DailySignRewardContent *pDVar1;
  DailySignRewardContent DVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar7;
  int *piVar8;
  undefined8 uVar9;
  NameMapperBase *pNVar10;
  string *psVar11;
  long lVar12;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar13;
  ulong uVar14;
  Effect_PopAnim *pEVar15;
  ResourceInfo *pRVar16;
  RtWeakPtrBase *pRVar17;
  ulong uVar18;
  wchar_t *pwVar19;
  bool extraout_w1;
  bool extraout_w1_00;
  bool extraout_w1_01;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  StandaloneEffect *this_02;
  string *local_78;
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  Sexy aSStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  pDVar1 = this + 0x120;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pvVar7 = (vector *)PlayerInfo::GetDailySignRewardSheet(this_01);
  std::vector<SignRewardContent,std::allocator<SignRewardContent>>::vector
            ((vector<SignRewardContent,std::allocator<SignRewardContent>> *)local_20,pvVar7);
  Set8BytesTo0(asStack_70);
  piVar8 = (int *)FUN_04a3ad68(local_20[0],(long)*(int *)(this + 0x130));
  iVar5 = *piVar8;
  Sexy::StrFormat("IMAGE_UI_SIGNREWARD_NUM_%d",asStack_68,(ulong)(uint)piVar8[1]);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),(RtWeakPtr *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  *(undefined8 *)(this + 0xe0) = 0;
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa68);
  *(undefined8 *)(this + 0xe8) = uVar9;
  FUN_054772c4(pDVar1,&DAT_056f11a8);
  pNVar10 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar3 = NameMapperBase::ContainsId(pNVar10,iVar5);
  if (cVar3 == '\0') {
    pNVar10 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar3 = NameMapperBase::ContainsId(pNVar10,iVar5);
    if (cVar3 == '\0') {
      pNVar10 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
      cVar3 = NameMapperBase::ContainsId(pNVar10,iVar5);
      if (cVar3 != '\0') goto LAB_04a3e680;
      pNVar10 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar3 = NameMapperBase::ContainsId(pNVar10,iVar5);
      if (cVar3 != '\0') {
        this[0x150] = (DailySignRewardContent)0x1;
        uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a790);
        *(undefined8 *)(this + 0xe8) = uVar9;
        iVar5 = AvatarChipNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar5);
        FUN_05474278(asStack_70,aRStack_28);
        std::string::~string((string *)aRStack_28);
        FUN_05475d88(asStack_60,asStack_70);
        FUN_031f5e7c(aRStack_58,"avatar_piece_",asStack_60);
        psVar11 = (string *)
                  Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar11);
        psVar11 = gLawnApp;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
        LawnApp::GetUIImageFromStringId(psVar11);
        pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_48);
        *(ResourceInfo **)(this + 0xe0) = pRVar16;
        Magento::GetPlantPieceProductsData((Magento *)0x1,extraout_w1_01);
        uVar14 = 0;
        do {
          uVar18 = uVar14;
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
          uVar14 = FUN_04a3ad88(*(undefined8 *)(lVar12 + 0x60),*(undefined8 *)(lVar12 + 0x68));
          if (uVar14 <= uVar18) goto LAB_04a3e828;
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
          pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_04a3ad94(*(undefined8 *)(lVar12 + 0x60),uVar18);
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
          cVar3 = std::operator==((string *)(lVar12 + 0x80),asStack_70);
          uVar14 = uVar18 + 1;
        } while (cVar3 == '\0');
        goto LAB_04a3eb94;
      }
      pNVar10 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      cVar3 = NameMapperBase::ContainsId(pNVar10,iVar5);
      if (cVar3 == '\0') {
        OtherServerNameMapper::GetInstance();
        cVar3 = FUN_04a3ad30(iVar5);
        if (cVar3 == '\0') {
          OtherServerNameMapper::GetInstance();
          cVar3 = FUN_04a3ad20(iVar5);
          if (cVar3 == '\0') {
            OtherServerNameMapper::GetInstance();
            cVar3 = FUN_04a3ad10(iVar5);
            if (cVar3 == '\0') {
              if (iVar5 - 0x59dfU < 5) {
                this[0x150] = (DailySignRewardContent)0x1;
                uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa68);
                *(undefined8 *)(this + 0xe8) = uVar9;
                if (iVar5 == 0x59df) {
                  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a908);
                  *(undefined8 *)(this + 0xe0) = uVar9;
                  pwVar19 = L"[MAT_NUTRIENT_0]";
                }
                else if (iVar5 == 0x59e0) {
                  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ab90);
                  *(undefined8 *)(this + 0xe0) = uVar9;
                  pwVar19 = L"[MAT_NUTRIENT_1]";
                }
                else if (iVar5 == 0x59e1) {
                  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aef8);
                  *(undefined8 *)(this + 0xe0) = uVar9;
                  pwVar19 = L"[MAT_NUTRIENT_2]";
                }
                else if (iVar5 == 0x59e2) {
                  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b130);
                  *(undefined8 *)(this + 0xe0) = uVar9;
                  pwVar19 = L"[MAT_NUTRIENT_3]";
                }
                else {
                  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a998);
                  *(undefined8 *)(this + 0xe0) = uVar9;
                  pwVar19 = L"[MAT_NUTRIENT_4]";
                }
                TodStringTranslate(pwVar19);
                FUN_054766c8(pDVar1,aRStack_28);
                FUN_05476c50(aRStack_28);
                *(undefined4 *)(this + 0x140) = 0x3f19999a;
              }
              else {
                if (iVar5 == 0x5a00) {
                  this[0x150] = (DailySignRewardContent)0x1;
                  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a790);
                  *(undefined8 *)(this + 0xe8) = uVar9;
                  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7abb8);
                  *(undefined8 *)(this + 0xe0) = uVar9;
                  pwVar19 = L"[NORMAL_LOGIN_CHEST]";
                }
                else {
                  if (iVar5 != 0x5a01) {
                    pNVar10 = (NameMapperBase *)MaterialItemMapper::GetInstance();
                    cVar3 = NameMapperBase::ContainsId(pNVar10,iVar5);
                    if (cVar3 == '\0') goto LAB_04a3e688;
                    this[0x150] = (DailySignRewardContent)0x1;
                    uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa68);
                    *(undefined8 *)(this + 0xe8) = uVar9;
                    iVar5 = MaterialItemMapper::GetInstance();
                    NameMapperBase::GetNameForId(iVar5);
                    Sexy::StringToUpper(aSStack_38,extraout_x1_03);
                    std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",(string *)aRStack_30);
                    uVar9 = StringHelper::ToImage((string *)aRStack_28,false);
                    *(undefined8 *)(this + 0xe0) = uVar9;
                    std::string::~string((string *)aRStack_28);
                    std::string::~string((string *)aRStack_30);
                    std::string::string((string *)aRStack_30,"[");
                    nop();
                    Sexy::Upper(aSStack_38,extraout_x1_04);
                    thunk_FUN_054757c0((string *)aRStack_30,aRStack_28);
                    std::string::~string((string *)aRStack_28);
                    FUN_05475ad8((string *)aRStack_30,&DAT_05593350);
                    StringHelper::ToStringValue((string *)aRStack_30);
                    FUN_054766c8(pDVar1,aRStack_28);
                    FUN_05476c50(aRStack_28);
                    std::string::~string((string *)aRStack_30);
                    std::string::~string((string *)aSStack_38);
                    goto LAB_04a3e680;
                  }
                  this[0x150] = (DailySignRewardContent)0x1;
                  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a790);
                  *(undefined8 *)(this + 0xe8) = uVar9;
                  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a8d0);
                  *(undefined8 *)(this + 0xe0) = uVar9;
                  pwVar19 = L"[LEGEND_LOGIN_CHEST]";
                }
                TodStringTranslate(pwVar19);
                FUN_054766c8(pDVar1,aRStack_28);
                FUN_05476c50(aRStack_28);
                *(undefined4 *)(this + 0x140) = 0x3ecccccd;
              }
              goto LAB_04a3e680;
            }
            this[0x150] = (DailySignRewardContent)0x1;
            uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ae18);
            *(undefined8 *)(this + 0xe0) = uVar9;
            uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa68);
            *(undefined8 *)(this + 0xe8) = uVar9;
            pwVar19 = L"[COIN_STORE]";
          }
          else {
            this[0x150] = (DailySignRewardContent)0x1;
            uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7adc8);
            *(undefined8 *)(this + 0xe0) = uVar9;
            uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a790);
            *(undefined8 *)(this + 0xe8) = uVar9;
            pwVar19 = L"[GEM_STORE]";
          }
        }
        else {
          this[0x150] = (DailySignRewardContent)0x1;
          uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa68);
          *(undefined8 *)(this + 0xe8) = uVar9;
          if (iVar5 == 0x961) {
            uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b078);
            *(undefined8 *)(this + 0xe0) = uVar9;
            pwVar19 = L"[BONUS_KEY_EGYPT_SHORT]";
          }
          else if (iVar5 == 0x962) {
            uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7afd8);
            *(undefined8 *)(this + 0xe0) = uVar9;
            pwVar19 = L"[BONUS_KEY_PIRATE_SHORT]";
          }
          else if (iVar5 == 0x963) {
            uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ab50);
            *(undefined8 *)(this + 0xe0) = uVar9;
            pwVar19 = L"[BONUS_KEY_COWBOY_SHORT]";
          }
          else if (iVar5 == 0x964) {
            uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ae80);
            *(undefined8 *)(this + 0xe0) = uVar9;
            pwVar19 = L"[BONUS_KEY_KONGFU_SHORT]";
          }
          else if (iVar5 == 0x965) {
            uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ad50);
            *(undefined8 *)(this + 0xe0) = uVar9;
            pwVar19 = L"[BONUS_KEY_FUTURE_SHORT]";
          }
          else if (iVar5 == 0x966) {
            uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b000);
            *(undefined8 *)(this + 0xe0) = uVar9;
            pwVar19 = L"[BONUS_KEY_DARK_SHORT]";
          }
          else if (iVar5 == 0x967) {
            uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b0a8);
            *(undefined8 *)(this + 0xe0) = uVar9;
            pwVar19 = L"[BONUS_KEY_BEACH_SHORT]";
          }
          else {
            if (iVar5 != 0x968) goto LAB_04a3e680;
            uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b0a8);
            *(undefined8 *)(this + 0xe0) = uVar9;
            pwVar19 = L"[BONUS_KEY_ICEAGE_SHORT]";
          }
        }
        TodStringTranslate(pwVar19);
        FUN_054766c8(pDVar1,aRStack_28);
        FUN_05476c50(aRStack_28);
        goto LAB_04a3e680;
      }
      this[0x150] = (DailySignRewardContent)0x1;
      uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a790);
      *(undefined8 *)(this + 0xe8) = uVar9;
      iVar5 = PlantAccessoryPieceMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar5);
      std::operator+(asStack_60,"_piece");
      psVar11 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar11);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
      ;
      uVar9 = StringHelper::ToImage((string *)(lVar12 + 0x60),false);
      *(undefined8 *)(this + 0xe0) = uVar9;
      std::string::string((string *)aRStack_28,"PvZ2 Accessories");
      Magento::GetStore((Magento *)aRStack_28,extraout_x1);
      std::string::~string((string *)aRStack_28);
      nop();
      uVar14 = 0;
      while( true ) {
        local_78 = asStack_60;
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
        uVar18 = FUN_04a3ad88(*(undefined8 *)(lVar12 + 0x60),*(undefined8 *)(lVar12 + 0x68));
        if (uVar18 <= uVar14) break;
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
        pRVar17 = (RtWeakPtrBase *)FUN_04a3ad94(*(undefined8 *)(lVar12 + 0x60),uVar14);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,pRVar17);
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        cVar3 = std::operator==(local_78,(string *)(lVar12 + 0x80));
        if (cVar3 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
          MagentoProductProps::GetLocalizedShortDescription();
          Sexy::UTF8StringToWString(aSStack_38,extraout_x1_02);
          TodStringTranslate((wstring *)aRStack_30);
          FUN_054766c8(pDVar1,aRStack_28);
          FUN_05476c50(aRStack_28);
          FUN_05476c50((wstring *)aRStack_30);
          std::string::~string((string *)aSStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          break;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        uVar14 = uVar14 + 1;
      }
      *(undefined4 *)(this + 0x140) = 0x3f4ccccd;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
    }
    else {
      this[0x150] = (DailySignRewardContent)0x1;
      uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a790);
      *(undefined8 *)(this + 0xe8) = uVar9;
      iVar5 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar5);
      FUN_05474278(asStack_70,aRStack_28);
      std::string::~string((string *)aRStack_28);
      FUN_05475d88(asStack_60,asStack_70);
      FUN_031f5e7c(aRStack_58,"plant_piece_",asStack_60);
      thunk_FUN_05475e00(this + 0x148,asStack_70);
      psVar11 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar11);
      psVar11 = gLawnApp;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
      LawnApp::GetUIImageFromStringId(psVar11);
      pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_48);
      *(ResourceInfo **)(this + 0xe0) = pRVar16;
      Magento::GetPlantPieceProductsData((Magento *)0x0,extraout_w1_00);
      uVar14 = 0;
      do {
        uVar18 = uVar14;
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        uVar14 = FUN_04a3ad88(*(undefined8 *)(lVar12 + 0x60),*(undefined8 *)(lVar12 + 0x68));
        if (uVar14 <= uVar18) goto LAB_04a3e828;
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_04a3ad94(*(undefined8 *)(lVar12 + 0x60),uVar18);
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
        cVar3 = std::operator==((string *)(lVar12 + 0x80),asStack_70);
        uVar14 = uVar18 + 1;
      } while (cVar3 == '\0');
LAB_04a3eb94:
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04a3ad94(*(undefined8 *)(lVar12 + 0x60),uVar18)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
      MagentoProductProps::GetLocalizedShortDescription();
      Sexy::UTF8StringToWString(aSStack_38,extraout_x1_01);
      TodStringTranslate((wstring *)aRStack_30);
      FUN_054766c8(pDVar1,aRStack_28);
      FUN_05476c50(aRStack_28);
      FUN_05476c50((wstring *)aRStack_30);
      std::string::~string((string *)aSStack_38);
LAB_04a3e828:
      *(undefined4 *)(this + 0x140) = 0x3f19999a;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
    }
    local_78 = asStack_60;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
    std::string::~string((string *)aRStack_58);
    std::string::~string(local_78);
    DVar2 = this[0x13c];
  }
  else {
    uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a790);
    *(undefined8 *)(this + 0xe8) = uVar9;
    iVar5 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar5);
    FUN_05474278(asStack_70,aRStack_28);
    std::string::~string((string *)aRStack_28);
    psVar11 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar11);
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    FUN_05475ffc(asStack_50,lVar12 + 0x20,0xe,0xffffffffffffffff);
    uVar9 = FUN_0547429c(asStack_50);
    Sexy::StrFormat("%s%s",asStack_48,"IMAGE_UI_PACKETS_",uVar9);
    uVar9 = StringHelper::ToImage(asStack_48,false);
    *(undefined8 *)(this + 0xe0) = uVar9;
    Magento::GetPlantPieceProductsData((Magento *)0x0,extraout_w1);
    uVar14 = 0;
    do {
      uVar18 = uVar14;
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      uVar14 = FUN_04a3ad88(*(undefined8 *)(lVar12 + 0x60),*(undefined8 *)(lVar12 + 0x68));
      if (uVar14 <= uVar18) goto LAB_04a3e660;
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04a3ad94(*(undefined8 *)(lVar12 + 0x60),uVar18)
      ;
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
      cVar3 = std::operator==((string *)(lVar12 + 0x80),asStack_70);
      uVar14 = uVar18 + 1;
    } while (cVar3 == '\0');
    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04a3ad94(*(undefined8 *)(lVar12 + 0x60),uVar18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString(aSStack_38,extraout_x1_00);
    TodStringTranslate((wstring *)aRStack_30);
    FUN_054766c8(pDVar1,aRStack_28);
    FUN_05476c50(aRStack_28);
    FUN_05476c50((wstring *)aRStack_30);
    std::string::~string((string *)aSStack_38);
LAB_04a3e660:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
LAB_04a3e680:
    DVar2 = this[0x13c];
  }
  if (DVar2 != (DailySignRewardContent)0x0) {
    pEVar15 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0x100) = pEVar15;
    std::string::string((string *)aRStack_28,"POPANIM_EFFECTS_SIGNREWARD_GET");
    GetPAMByName((string *)aRStack_28);
    std::string::~string((string *)aRStack_28);
    nop();
    pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0x100),(PopAnim *)pRVar16,(RtClass *)0x0);
    LawnApp::GetPlatformName();
    bVar4 = std::operator==((string *)aRStack_28,"ipad3");
    std::string::~string((string *)aRStack_28);
    if (bVar4) {
      iVar5 = FUN_04a3aff4(0x73);
      this_02 = *(StandaloneEffect **)(this + 0x100);
      uVar9 = 0xbe;
    }
    else {
      iVar5 = FUN_04a3aff4(0x73);
      this_02 = *(StandaloneEffect **)(this + 0x100);
      uVar9 = 0xdc;
    }
    iVar6 = FUN_04a3aff4(uVar9);
    Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_28,(float)iVar5,(float)iVar6);
    StandaloneEffect::SetScreenSpaceOrigin(this_02,(SexyVector2 *)aRStack_28,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x100),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x100),true);
    pEVar15 = *(Effect_PopAnim **)(this + 0x100);
    std::string::string((string *)aRStack_28,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar15,aRStack_28,0);
    std::string::~string((string *)aRStack_28);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
LAB_04a3e688:
  std::string::~string(asStack_68);
  std::string::~string(asStack_70);
  std::vector<SignRewardContent,std::allocator<SignRewardContent>>::~vector
            ((vector<SignRewardContent,std::allocator<SignRewardContent>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignRewardContent::DailySignRewardContent(int, bool, bool, bool, bool) */

void __thiscall
DailySignRewardContent::DailySignRewardContent
          (DailySignRewardContent *this,int param_1,bool param_2,bool param_3,bool param_4,
          bool param_5)

{
  undefined *puVar1;
  LawnApp *this_00;
  DailySignRewardContent DVar2;
  byte bVar3;
  ProfileMgr *this_01;
  long lVar4;
  _func_void *extraout_x1;
  undefined **__n;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  __n = &PTR_GetClass_06932f60;
  *(undefined ***)this = &PTR_GetClass_06932f60;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06933280;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  FUN_05476574(this + 0x120);
  *(int *)(this + 0x130) = param_1;
  this[0x138] = (DailySignRewardContent)param_2;
  this[0x139] = (DailySignRewardContent)param_3;
  this[0x13a] = (DailySignRewardContent)param_4;
  this[0x13b] = (DailySignRewardContent)param_5;
  Set8BytesTo0((string *)(this + 0x148));
  this[0x150] = (DailySignRewardContent)0x0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_20,extraout_x1);
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x118),(RtId *)&local_20);
  Sexy::RtId::~RtId((RtId *)&local_20);
  this[0x13c] = (DailySignRewardContent)0x0;
  *(undefined4 *)(this + 300) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)(this + 0x140) = 0x3f800000;
  std::string::append((string *)(this + 0x148),"",(size_t)__n);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(this_01);
  if (this[0x13a] == (DailySignRewardContent)0x0) {
    DVar2 = this[0x13c];
  }
  else {
    bVar3 = FUN_04a3ad44(*(undefined1 *)(lVar4 + 0xa98));
    DVar2 = (DailySignRewardContent)(bVar3 ^ 1);
    this[0x13c] = DVar2;
  }
  this_00 = gLawnApp;
  if (DVar2 != (DailySignRewardContent)0x0) {
    std::string::string((string *)&local_20,"Effects_SignReward");
    LawnApp::LoadGroup(this_00,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
  }
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDailySignRewardReceived);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<DailySignRewardContent,void(DailySignRewardContent::*)(int)>>
            ((MessageRouter *)puVar1,Message::DailySignRewardReceived,&local_50);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

