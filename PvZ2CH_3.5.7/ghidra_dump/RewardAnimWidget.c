// Class: RewardAnimWidget


/* RewardAnimWidget::~RewardAnimWidget() */

void __thiscall RewardAnimWidget::~RewardAnimWidget(RewardAnimWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06802160;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06802480;
  if (*(long **)(this + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe0) + 0x18))();
    *(undefined8 *)(this + 0xe0) = 0;
  }
  if (*(long **)(this + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x118) + 0x18))();
    *(undefined8 *)(this + 0x118) = 0;
  }
  Sexy::PACommand::~PACommand((PACommand *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RewardAnimWidget::~RewardAnimWidget() */

void __thiscall RewardAnimWidget::~RewardAnimWidget(RewardAnimWidget *this)

{
  ~RewardAnimWidget(this);
  AK::FreeHook(this);
  return;
}


/* RewardAnimWidget::AnimUpdate() */

void __thiscall RewardAnimWidget::AnimUpdate(RewardAnimWidget *this)

{
  if (*(StandaloneEffect **)(this + 0xe0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xe0));
    return;
  }
  return;
}


/* RewardAnimWidget::AnimDraw(Sexy::Graphics*) */

void __thiscall RewardAnimWidget::AnimDraw(RewardAnimWidget *this,Graphics *param_1)

{
  if (*(StandaloneEffect **)(this + 0xe0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xe0),param_1);
    return;
  }
  return;
}


/* RewardAnimWidget::SetValid(bool) */

void __thiscall RewardAnimWidget::SetValid(RewardAnimWidget *this,bool param_1)

{
  this[0x111] = (RewardAnimWidget)param_1;
  (**(code **)(*(long *)this + 0x158))(this,param_1);
  return;
}


/* RewardAnimWidget::IsPause() */

bool __thiscall RewardAnimWidget::IsPause(RewardAnimWidget *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(this + 0x10c);
  fVar3 = *(float *)(this + 0x108);
  fVar2 = (float)PVZ_T();
  return fVar2 <= fVar1 + fVar3;
}


/* RewardAnimWidget::Update() */

void __thiscall RewardAnimWidget::Update(RewardAnimWidget *this)

{
  char cVar1;
  
  cVar1 = IsPause(this);
  if (cVar1 != '\0') {
    return;
  }
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  AnimUpdate(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RewardAnimWidget::CreateAnim() */

void __thiscall RewardAnimWidget::CreateAnim(RewardAnimWidget *this)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  StandaloneEffect *this_00;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0xe0) = pEVar1;
  std::string::string(asStack_10,"POPANIM_EFFECTS_GACHA_BACK_LIGHT");
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig
            (*(Effect_PopAnim **)(this + 0xe0),(PopAnim *)pRVar2,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xe0),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0xe0),true);
  pEVar1 = *(Effect_PopAnim **)(this + 0xe0);
  std::string::string(asStack_10,"anim");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  this_00 = *(StandaloneEffect **)(this + 0xe0);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)asStack_10,(float)(*(int *)(this + 0x50) / 2),
             (float)(*(int *)(this + 0x54) / 2));
  StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)asStack_10,900000);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RewardAnimWidget::RewardAnimWidget(RewardItem&, float) */

void __thiscall
RewardAnimWidget::RewardAnimWidget(RewardAnimWidget *this,RewardItem *param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_06802160;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06802480;
  RewardItem::RewardItem((RewardItem *)(this + 0xe8),param_1);
  uVar2 = PVZ_T();
  *(undefined8 *)(this + 0x118) = 0;
  this[0x110] = (RewardAnimWidget)0x1;
  this[0x111] = (RewardAnimWidget)0x1;
  *(undefined4 *)(this + 0x108) = uVar2;
  *(float *)(this + 0x10c) = param_2;
  iVar1 = FUN_041cb504(0x96);
  Sexy::Widget::Resize((Widget *)this,0,0,iVar1,iVar1);
  CreateAnim(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RewardAnimWidget::DrawReward(Sexy::Graphics*) */

void __thiscall RewardAnimWidget::DrawReward(RewardAnimWidget *this,Graphics *param_1)

{
  ItemButton *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  string *psVar7;
  SeedPacketUtils *this_01;
  ResourceInfo *pRVar8;
  long lVar9;
  char *pcVar10;
  LotteryResultProgressBar *this_02;
  long extraout_x0;
  undefined8 uVar11;
  PrimeText_PotentialText *pPVar12;
  long extraout_x0_00;
  long extraout_x0_01;
  long extraout_x0_02;
  PlantAccessoryMgr *pPVar13;
  string *psVar14;
  PrimeTextWidget *pPVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  string *local_90;
  undefined1 auStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  RtMixedPtrBase aRStack_40 [8];
  undefined4 local_38 [2];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x110] == (RewardAnimWidget)0x0) {
    fVar16 = 1.0;
  }
  else {
    fVar16 = *(float *)(this + 0x10c);
    fVar20 = *(float *)(this + 0x108);
    fVar19 = fVar16 + fVar20 + 1.5;
    fVar17 = (float)PVZ_T();
    if (fVar17 <= fVar19) {
      uVar18 = PVZ_T();
      local_38[0] = 0;
      local_30[0] = 0x3f800000;
      fVar16 = CurveLerp<float>(fVar16 + fVar20,fVar19,uVar18,local_38,local_30,3);
    }
    else {
      this[0x110] = (RewardAnimWidget)0x0;
      fVar16 = 1.0;
    }
  }
  this_00 = (ItemButton *)(this + 0xe8);
  FUN_05476574(auStack_78);
  psVar14 = (string *)0xc;
  FUN_05475ffc((string *)local_30,this_00,0);
  bVar1 = std::operator==((string *)local_30,"plant_piece_");
  std::string::~string((string *)local_30);
  if (bVar1) {
    FUN_05475d88(asStack_48,this_00);
    psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar7);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
    if (cVar2 == '\0') {
LAB_041ce7e8:
      this_02 = (LotteryResultProgressBar *)0x0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      std::string::~string(asStack_48);
    }
    else {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      pcVar10 = (char *)FUN_0547429c(lVar9 + 0x60);
      CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                ((CachedUIResourcePtr<Sexy::Image> *)local_30,pcVar10);
      this_02 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      nop();
      lVar9 = extraout_x0;
LAB_041cead8:
      ItemButton::GetRewardName(this_00,(string *)(lVar9 + 0x98),psVar14);
      FUN_054766c8(auStack_78,local_38);
      FUN_05476c50(local_38);
      CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
                ((CachedUIResourcePtr<Sexy::Image> *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      std::string::~string(asStack_48);
    }
LAB_041ce7f8:
    if (this_02 != (LotteryResultProgressBar *)0x0) {
      iVar5 = *(int *)(this + 0x50);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_02);
      iVar6 = *(int *)(this + 0x54);
      iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_02);
      TodDrawImageCenterScaledF
                (param_1,(Image *)this_02,(float)((iVar5 - iVar3) / 2),(float)((iVar6 - iVar4) / 2),
                 fVar16,fVar16);
    }
  }
  else {
    FUN_05475ffc((string *)local_30,this_00,0,6);
    bVar1 = std::operator==((string *)local_30,"plant_");
    std::string::~string((string *)local_30);
    if (!bVar1) {
      FUN_05475ffc((string *)local_30,this_00,0,0xb);
      bVar1 = std::operator==((string *)local_30,"plantpiece_");
      std::string::~string((string *)local_30);
      if (bVar1) {
        this_02 = (LotteryResultProgressBar *)0x0;
        FUN_05475ffc(asStack_60,this_00,0xb,0xffffffffffffffff);
        bVar1 = std::operator!=(asStack_60,"");
        if (bVar1) {
          std::string::string(asStack_58,"plant_piece_");
          nop();
          FUN_05475d88(asStack_50,asStack_60);
          FUN_031dcc6c(asStack_48,asStack_58,asStack_50);
          psVar14 = (string *)
                    Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
          ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar14);
          cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
          if (cVar2 != '\0') {
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            pcVar10 = (char *)FUN_0547429c(lVar9 + 0x60);
            CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                      ((CachedUIResourcePtr<Sexy::Image> *)local_30,pcVar10);
            this_02 = (LotteryResultProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            nop();
            lVar9 = extraout_x0_01;
LAB_041cef20:
            local_90 = (string *)local_38;
            ItemButton::GetRewardName(this_00,(string *)(lVar9 + 0x98),local_90);
            FUN_054766c8(auStack_78,local_90);
            FUN_05476c50(local_90);
            CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
                      ((CachedUIResourcePtr<Sexy::Image> *)local_30);
          }
LAB_041cebec:
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          std::string::~string(asStack_48);
          std::string::~string(asStack_50);
          std::string::~string(asStack_58);
        }
      }
      else {
        FUN_05475ffc((string *)local_30,this_00,0,0xc);
        bVar1 = std::operator==((string *)local_30,"avatarpiece_");
        std::string::~string((string *)local_30);
        if (!bVar1) {
          psVar14 = (string *)0xd;
          FUN_05475ffc((string *)local_30,this_00,0);
          bVar1 = std::operator==((string *)local_30,"avatar_piece_");
          std::string::~string((string *)local_30);
          if (bVar1) {
            FUN_05475d88(asStack_48,this_00);
            psVar7 = (string *)
                     Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
            ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar7);
            cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
            if (cVar2 != '\0') {
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
              pcVar10 = (char *)FUN_0547429c(lVar9 + 0x60);
              CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                        ((CachedUIResourcePtr<Sexy::Image> *)local_30,pcVar10);
              this_02 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)local_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
              nop();
              lVar9 = extraout_x0_00;
              goto LAB_041cead8;
            }
            goto LAB_041ce7e8;
          }
          FUN_05475ffc((string *)local_30,this_00,0,0x10);
          bVar1 = std::operator==((string *)local_30,"accessory_piece_");
          std::string::~string((string *)local_30);
          if (bVar1) {
            this_02 = (LotteryResultProgressBar *)0x0;
            FUN_05475ffc(asStack_60,this_00,0xf,0xffffffffffffffff);
            FUN_05475d88(asStack_58,this_00);
            psVar14 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
            ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar14);
            cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_50);
            if (cVar2 != '\0') {
              lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
              pcVar10 = (char *)FUN_0547429c(lVar9 + 0x60);
              CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                        ((CachedUIResourcePtr<Sexy::Image> *)local_30,pcVar10);
              this_02 = (LotteryResultProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)local_30);
              pPVar13 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
              PlantAccessoryMgr::GetAccessoryDisplayName(pPVar13,asStack_60);
              TodStringTranslate(L"[PIECE]");
              std::operator+((wstring *)asStack_48,(wstring *)aRStack_40);
              FUN_054766c8(auStack_78,local_38);
              FUN_05476c50(local_38);
              FUN_05476c50((wstring *)aRStack_40);
              FUN_05476c50((wstring *)asStack_48);
              CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
                        ((CachedUIResourcePtr<Sexy::Image> *)local_30);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
            std::string::~string(asStack_58);
            std::string::~string(asStack_60);
          }
          else {
            FUN_05475ffc((string *)local_30,this_00,0,10);
            bVar1 = std::operator==((string *)local_30,"accessory_");
            std::string::~string((string *)local_30);
            if (bVar1) {
              FUN_05475ffc((string *)local_38,this_00,10,0xffffffffffffffff);
              psVar14 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
              this_02 = (LotteryResultProgressBar *)
                        PlantAccessoryMgr::GetAccessoryDisplayImage(psVar14);
              pPVar13 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
              PlantAccessoryMgr::GetAccessoryDisplayName(pPVar13,(string *)local_38);
              thunk_FUN_05477b9c(auStack_78,(string *)local_30);
              FUN_05476c50((string *)local_30);
              std::string::~string((string *)local_38);
            }
            else {
              FUN_05475ffc((string *)local_30,this_00,0,0xf);
              bVar1 = std::operator==((string *)local_30,"accessorypiece_");
              std::string::~string((string *)local_30);
              if (bVar1) {
                this_02 = (LotteryResultProgressBar *)0x0;
                FUN_05475ffc(asStack_70,this_00,0xf,0xffffffffffffffff);
                bVar1 = std::operator!=(asStack_70,"");
                if (bVar1) {
                  FUN_05475d88(asStack_68,asStack_70);
                  std::string::string(asStack_60,"_piece");
                  nop();
                  FUN_031dcc6c(asStack_58,asStack_68,asStack_60);
                  psVar14 = (string *)
                            Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::
                            GetInstancePtr();
                  ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar14);
                  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_50);
                  if (cVar2 != '\0') {
                    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
                    pcVar10 = (char *)FUN_0547429c(lVar9 + 0x60);
                    CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                              ((CachedUIResourcePtr<Sexy::Image> *)local_30,pcVar10);
                    this_02 = (LotteryResultProgressBar *)
                              CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)local_30);
                    pPVar13 = (PlantAccessoryMgr *)
                              Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
                    PlantAccessoryMgr::GetAccessoryDisplayName(pPVar13,asStack_70);
                    TodStringTranslate(L"[PIECE]");
                    std::operator+((wstring *)asStack_48,(wstring *)aRStack_40);
                    FUN_054766c8(auStack_78,local_38);
                    FUN_05476c50(local_38);
                    FUN_05476c50((wstring *)aRStack_40);
                    FUN_05476c50((wstring *)asStack_48);
                    CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
                              ((CachedUIResourcePtr<Sexy::Image> *)local_30);
                  }
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
                  std::string::~string(asStack_58);
                  std::string::~string(asStack_60);
                  std::string::~string(asStack_68);
                }
                std::string::~string(asStack_70);
              }
              else {
                bVar1 = std::operator==((string *)this_00,"coin");
                if (bVar1) {
                  this_02 = (LotteryResultProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1b10);
                }
                else {
                  bVar1 = std::operator==((string *)this_00,"gem");
                  if (!bVar1) goto LAB_041ce84c;
                  this_02 = (LotteryResultProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1d80);
                }
              }
            }
          }
          goto LAB_041ce7f8;
        }
        this_02 = (LotteryResultProgressBar *)0x0;
        FUN_05475ffc(asStack_60,this_00,0xc,0xffffffffffffffff);
        bVar1 = std::operator!=(asStack_60,"");
        if (bVar1) {
          std::string::string(asStack_58,"avatar_piece_");
          nop();
          FUN_05475d88(asStack_50,asStack_60);
          FUN_031dcc6c(asStack_48,asStack_58,asStack_50);
          psVar14 = (string *)
                    Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
          ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar14);
          cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
          if (cVar2 != '\0') {
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            pcVar10 = (char *)FUN_0547429c(lVar9 + 0x60);
            CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                      ((CachedUIResourcePtr<Sexy::Image> *)local_30,pcVar10);
            this_02 = (LotteryResultProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            nop();
            lVar9 = extraout_x0_02;
            goto LAB_041cef20;
          }
          goto LAB_041cebec;
        }
      }
      std::string::~string(asStack_60);
      goto LAB_041ce7f8;
    }
    FUN_05475ffc((string *)aRStack_40,this_00,6,0xffffffffffffffff);
    this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    lVar9 = SeedPacketUtils::GetPlantPacketRenderData(this_01,(string *)aRStack_40,-1,-1,-1);
    Sexy::Insets::Insets
              ((Insets *)local_30,(*(int *)(this + 0x50) - *(int *)(lVar9 + 0x10)) / 2,
               (*(int *)(this + 0x54) - *(int *)(lVar9 + 0x14)) / 2,
               (int)(fVar16 * (float)*(int *)(lVar9 + 0x10)),
               (int)(fVar16 * (float)*(int *)(lVar9 + 0x14)));
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x170));
    psVar14 = (string *)local_30;
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)local_30,(TRect *)(lVar9 + 8));
    ItemButton::GetRewardName(this_00,(string *)aRStack_40,psVar14);
    FUN_054766c8(auStack_78,local_38);
    FUN_05476c50(local_38);
    std::string::~string((string *)aRStack_40);
  }
LAB_041ce84c:
  pPVar15 = *(PrimeTextWidget **)(this + 0x118);
  if (pPVar15 == (PrimeTextWidget *)0x0) {
    uVar11 = FUN_054766ec(auStack_78);
    Sexy::StrFormat(L"%ls x %d",aRStack_40,uVar11,(ulong)*(uint *)(this + 0xf8));
    uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    iVar3 = FUN_041cb504(0x32);
    iVar5 = *(int *)(this + 0x50);
    iVar6 = *(int *)(this + 0x54);
    FUN_05477b24(local_38,aRStack_40);
    Sexy::Color::Color((Color *)local_30,2);
    pPVar12 = (PrimeText_PotentialText *)
              Sexy::BuildPotentialText_Paragraph
                        ((float)iVar3,(float)iVar3,(float)iVar5,(float)iVar6,uVar11,local_38,0,1,
                         (string *)local_30);
    pPVar15 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar15,pPVar12);
    *(PrimeTextWidget **)(this + 0x118) = pPVar15;
    FUN_05476c50(local_38);
    FUN_05476c50(aRStack_40);
    pPVar15 = *(PrimeTextWidget **)(this + 0x118);
    if (pPVar15 == (PrimeTextWidget *)0x0) goto LAB_041ce8bc;
  }
  iVar5 = FUN_041cb504(0x3c);
  iVar6 = FUN_041cb504(0x32);
  iVar3 = FUN_041cb504(100);
  Sexy::PrimeTextWidget::SetPosition
            (pPVar15,(int)((float)iVar5 * fVar16 - (float)iVar6),
             (int)((float)iVar3 - fVar16 * (float)iVar6));
  Sexy::PrimeTextWidget::SetScale(*(PrimeTextWidget **)(this + 0x118),fVar16,fVar16);
  (**(code **)(**(long **)(this + 0x118) + 0x128))(*(long **)(this + 0x118),param_1);
LAB_041ce8bc:
  FUN_05476c50(auStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RewardAnimWidget::Draw(Sexy::Graphics*) */

void __thiscall RewardAnimWidget::Draw(RewardAnimWidget *this,Graphics *param_1)

{
  char cVar1;
  
  cVar1 = IsPause(this);
  if (cVar1 != '\0') {
    return;
  }
  nop();
  AnimDraw(this,param_1);
  DrawReward(this,param_1);
  return;
}

