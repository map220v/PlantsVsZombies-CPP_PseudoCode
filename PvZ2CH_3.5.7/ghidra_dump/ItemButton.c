// Class: ItemButton


/* ItemButton::~ItemButton() */

void __thiscall ItemButton::~ItemButton(ItemButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06801ac0;
  *(undefined ***)(this + 0x198) = &PTR__ItemButton_06801e18;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::PACommand::~PACommand((PACommand *)(this + 0x300));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to ItemButton::~ItemButton() */

void __thiscall ItemButton::~ItemButton(ItemButton *this)

{
  ~ItemButton(this + -0x198);
  return;
}


/* ItemButton::~ItemButton() */

void __thiscall ItemButton::~ItemButton(ItemButton *this)

{
  ~ItemButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ItemButton::~ItemButton() */

void __thiscall ItemButton::~ItemButton(ItemButton *this)

{
  ~ItemButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ItemButton::GetRewardName(std::string&, std::string const&) */

void __thiscall ItemButton::GetRewardName(ItemButton *this,string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  Magento *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  ulong uVar5;
  wchar_t *pwVar6;
  string *extraout_x1;
  ulong uVar7;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  Sexy aSStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  this_00 = (Magento *)FUN_05475d88(asStack_30,param_1);
  Magento::GetPlantLevelUp(this_00);
  uVar5 = 0;
  do {
    uVar7 = uVar5;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    uVar5 = FUN_041cb3a4(*(undefined8 *)(lVar4 + 0x60),*(undefined8 *)(lVar4 + 0x68));
    if (uVar5 <= uVar7) goto LAB_041cb920;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_041cb3b0(*(undefined8 *)(lVar4 + 0x60),uVar7);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    cVar1 = std::operator==((string *)(lVar4 + 0x80),asStack_30);
    uVar5 = uVar7 + 1;
  } while (cVar1 == '\0');
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_041cb3b0(*(undefined8 *)(lVar4 + 0x60),uVar7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
  TodStringTranslate(awStack_18);
  FUN_054766c8();
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string((string *)aSStack_20);
LAB_041cb920:
  FUN_05475ffc(asStack_10,this,0,0xb);
  bVar2 = std::operator==(asStack_10,"plantpiece_");
  std::string::~string(asStack_10);
  if (bVar2) {
    pwVar6 = L"[PIECE]";
  }
  else {
    FUN_05475ffc(asStack_10,this,0,0xc);
    bVar2 = std::operator==(asStack_10,"avatarpiece_");
    std::string::~string(asStack_10);
    if (!bVar2) goto LAB_041cb988;
    pwVar6 = L"[AVATAR_PIECE]";
  }
  TodStringTranslate(pwVar6);
  thunk_FUN_05477668();
  FUN_05476c50(asStack_10);
LAB_041cb988:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ItemButton::ItemButton(int, Sexy::ButtonListener*, RewardItem&, bool, bool, bool) */

void __thiscall
ItemButton::ItemButton
          (ItemButton *this,int param_1,ButtonListener *param_2,RewardItem *param_3,bool param_4,
          bool param_5,bool param_6)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *this_00;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,param_2,(wstring *)aPStack_78,(Color *)aPStack_40);
  FUN_05476c50(aPStack_78);
  nop();
  this[0x2fa] = (ItemButton)param_4;
  this[0x2fb] = (ItemButton)param_5;
  *(undefined ***)this = &PTR_GetClass_06801ac0;
  *(undefined ***)(this + 0x198) = &PTR__ItemButton_06801e18;
  this[0x2fc] = (ItemButton)param_6;
  RewardItem::RewardItem((RewardItem *)(this + 0x300),param_3);
  this[0x324] = (ItemButton)0x1;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1928);
  if (param_6) {
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1a20);
  }
  else if (param_5) {
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af19a0);
  }
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
  PVZ2UIButton::Resize((PVZ2UIButton *)this,0,0,(int)(float)iVar1,(int)(float)iVar2);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,this_00,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,this_00,1);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this,aPStack_78,aPStack_40);
  if (param_4) {
    fVar4 = (float)PVZ_T();
    *(float *)(this + 800) = fVar4 + (float)param_1 * 1.2;
  }
  else {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 800) = uVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x041cd0a0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ItemButton::DrawFlag(Sexy::Graphics*) */

void __thiscall ItemButton::DrawFlag(ItemButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x2fa] != (ItemButton)0x0) {
    fVar6 = (float)PVZ_T();
    if ((fVar6 <= *(float *)(this + 800)) || (this[0x324] == (ItemButton)0x0)) {
      fVar6 = 1.0;
    }
    else {
      fVar8 = *(float *)(this + 800) + 1.2;
      fVar6 = (float)PVZ_T();
      if (fVar6 <= fVar8) {
        auVar7 = PVZ_T();
        local_10 = 0x3fe66666;
        local_c = 0x3f800000;
        fVar6 = CurveLerp<float>(auVar7,fVar8,auVar7._0_4_,&local_10,&local_c,3);
      }
      else {
        this[0x324] = (ItemButton)0x0;
        fVar6 = 1.0;
      }
    }
    fVar8 = (float)PVZ_T();
    if (*(float *)(this + 800) < fVar8) {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af19c8);
      iVar1 = *(int *)(this + 0x50);
      this_00 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af19c8);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
      iVar2 = *(int *)(this + 0x54);
      this_01 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af19c8);
      iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
      TodDrawImageCenterScaledF
                (param_1,pIVar5,(float)((iVar1 - iVar3) / 2),(float)((iVar2 - iVar4) / 2),fVar6,
                 fVar6);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ItemButton::DrawReward(Sexy::Graphics*) */

void __thiscall ItemButton::DrawReward(ItemButton *this,Graphics *param_1)

{
  ItemButton *this_00;
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  string *psVar8;
  undefined8 uVar9;
  SeedPacketUtils *this_01;
  ResourceInfo *pRVar10;
  Image *pIVar11;
  long lVar12;
  char *pcVar13;
  long extraout_x0;
  PlantAccessoryMgr *pPVar14;
  long extraout_x0_00;
  long extraout_x0_01;
  wchar_t *pwVar15;
  string *psVar16;
  LotteryResultProgressBar *this_02;
  wstring awStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  RtMixedPtrBase aRStack_40 [8];
  wstring awStack_38 [8];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = this + 0x300;
  FUN_05476574(awStack_78);
  psVar16 = (string *)0xc;
  FUN_05475ffc(asStack_30,this_00,0);
  bVar3 = std::operator==(asStack_30,"plant_piece_");
  std::string::~string(asStack_30);
  if (bVar3) {
    FUN_05475d88(asStack_48,this_00);
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar8);
    cVar4 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
    if (cVar4 == '\0') {
      this_02 = (LotteryResultProgressBar *)0x0;
    }
    else {
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
      ;
      pcVar13 = (char *)FUN_0547429c(lVar12 + 0x60);
      CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                ((CachedUIResourcePtr<Sexy::Image> *)asStack_30,pcVar13);
      this_02 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      nop();
      GetRewardName(this_00,(string *)(extraout_x0 + 0x98),psVar16);
      FUN_054766c8(awStack_78,awStack_38);
      FUN_05476c50(awStack_38);
      CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
                ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    std::string::~string(asStack_48);
LAB_041cdd6c:
    TodStringTranslate(L"[CONSUMPTION_COUNT_REWARD]");
    TodReplaceString(awStack_38,L"{NAME}",awStack_78);
    FUN_054766c8(awStack_78,asStack_30);
    FUN_05476c50(asStack_30);
    FUN_05476c50(awStack_38);
    TodReplaceNumberString(awStack_78,L"{COUNT}",*(int *)(this + 0x310));
    FUN_054766c8(awStack_78,asStack_30);
    FUN_05476c50(asStack_30);
  }
  else {
    FUN_05475ffc(asStack_30,this_00,0,6);
    bVar3 = std::operator==(asStack_30,"plant_");
    std::string::~string(asStack_30);
    if (bVar3) {
      this_02 = (LotteryResultProgressBar *)0x0;
      FUN_05475ffc(asStack_48,this_00,6,0xffffffffffffffff);
      this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      lVar12 = SeedPacketUtils::GetPlantPacketRenderData(this_01,asStack_48,-1,-1,-1);
      iVar7 = *(int *)(lVar12 + 0x18) + (*(int *)(this + 0x50) - *(int *)(lVar12 + 0x10)) / 2;
      iVar1 = *(int *)(lVar12 + 0x1c) + (*(int *)(this + 0x54) - *(int *)(lVar12 + 0x14)) / 2;
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar12 + 0x170));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,iVar7,iVar1,(TRect *)(lVar12 + 8));
      Sexy::StrFormat("IMAGE_UI_CONSUMPTION_REWARD_LEVEL_%d",(string *)aRStack_40,
                      (ulong)*(uint *)(this + 0x314));
      pcVar13 = (char *)FUN_0547429c((string *)aRStack_40);
      CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                ((CachedUIResourcePtr<Sexy::Image> *)asStack_30,pcVar13);
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
      iVar5 = FUN_041cb504(0x1e);
      uVar2 = iVar7 - iVar5;
      psVar16 = (string *)(ulong)uVar2;
      iVar7 = FUN_041cb504(0x19);
      Sexy::Graphics::DrawImage(param_1,pIVar11,uVar2,iVar1 - iVar7);
      GetRewardName(this_00,asStack_48,psVar16);
      FUN_054766c8(awStack_78,awStack_38);
      FUN_05476c50(awStack_38);
      CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
                ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
      std::string::~string((string *)aRStack_40);
      std::string::~string(asStack_48);
      goto LAB_041cdd6c;
    }
    FUN_05475ffc(asStack_30,this_00,0,0xb);
    bVar3 = std::operator==(asStack_30,"plantpiece_");
    std::string::~string(asStack_30);
    psVar16 = asStack_30;
    if (bVar3) {
      FUN_05475ffc(asStack_60,this_00,0xb,0xffffffffffffffff);
      bVar3 = std::operator!=(asStack_60,"");
      if (!bVar3) goto LAB_041ce0f0;
      std::string::string(asStack_58,"plant_piece_");
      nop();
      FUN_05475d88(asStack_50,asStack_60);
      FUN_031dcc6c(asStack_48,asStack_58,asStack_50);
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar8);
      cVar4 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
      if (cVar4 != '\0') {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        pcVar13 = (char *)FUN_0547429c(lVar12 + 0x60);
        CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                  ((CachedUIResourcePtr<Sexy::Image> *)asStack_30,pcVar13);
        this_02 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        nop();
        lVar12 = extraout_x0_00;
        goto LAB_041ce41c;
      }
LAB_041ce24c:
      this_02 = (LotteryResultProgressBar *)0x0;
LAB_041ce254:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      std::string::~string(asStack_48);
      std::string::~string(asStack_50);
      std::string::~string(asStack_58);
LAB_041ce0f8:
      std::string::~string(asStack_60);
      goto LAB_041cdd6c;
    }
    FUN_05475ffc(asStack_30,this_00,0,0xc);
    bVar3 = std::operator==(asStack_30,"avatarpiece_");
    std::string::~string(asStack_30);
    if (bVar3) {
      FUN_05475ffc(asStack_60,this_00,0xc,0xffffffffffffffff);
      bVar3 = std::operator!=(asStack_60,"");
      if (bVar3) {
        std::string::string(asStack_58,"avatar_piece_");
        nop();
        FUN_05475d88(asStack_50,asStack_60);
        FUN_031dcc6c(asStack_48,asStack_58,asStack_50);
        psVar8 = (string *)
                 Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar8);
        cVar4 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
        if (cVar4 == '\0') goto LAB_041ce24c;
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        pcVar13 = (char *)FUN_0547429c(lVar12 + 0x60);
        CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                  ((CachedUIResourcePtr<Sexy::Image> *)asStack_30,pcVar13);
        this_02 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        nop();
        lVar12 = extraout_x0_01;
LAB_041ce41c:
        GetRewardName(this_00,(string *)(lVar12 + 0x98),psVar16);
        FUN_054766c8(awStack_78,awStack_38);
        FUN_05476c50(awStack_38);
        CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
                  ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
        goto LAB_041ce254;
      }
LAB_041ce0f0:
      this_02 = (LotteryResultProgressBar *)0x0;
      goto LAB_041ce0f8;
    }
    FUN_05475ffc(asStack_30,this_00,0,0xd);
    bVar3 = std::operator==(asStack_30,"avatar_piece_");
    std::string::~string(asStack_30);
    if (bVar3) goto LAB_041cde20;
    FUN_05475ffc(asStack_30,this_00,0,0x10);
    bVar3 = std::operator==(asStack_30,"accessory_piece_");
    std::string::~string(asStack_30);
    if (bVar3) {
LAB_041ce44c:
      FUN_05475ffc(asStack_70,this_00,0xf,0xffffffffffffffff);
      bVar3 = std::operator!=(asStack_70,"");
      if (bVar3) {
        FUN_05475d88(asStack_68,asStack_70);
        std::string::string(asStack_60,"_piece");
        nop();
        FUN_031dcc6c(asStack_58,asStack_68,asStack_60);
        psVar16 = (string *)
                  Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar16);
        cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_50);
        if (cVar4 == '\0') {
          this_02 = (LotteryResultProgressBar *)0x0;
        }
        else {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
          pcVar13 = (char *)FUN_0547429c(lVar12 + 0x60);
          CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
                    ((CachedUIResourcePtr<Sexy::Image> *)asStack_30,pcVar13);
          this_02 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
          pPVar14 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
          PlantAccessoryMgr::GetAccessoryDisplayName(pPVar14,asStack_70);
          TodStringTranslate(L"[PIECE]");
          std::operator+((wstring *)asStack_48,(wstring *)aRStack_40);
          FUN_054766c8(awStack_78,awStack_38);
          FUN_05476c50(awStack_38);
          FUN_05476c50((wstring *)aRStack_40);
          FUN_05476c50((wstring *)asStack_48);
          CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
                    ((CachedUIResourcePtr<Sexy::Image> *)asStack_30);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50)
        ;
        std::string::~string(asStack_58);
        std::string::~string(asStack_60);
        std::string::~string(asStack_68);
      }
      else {
        this_02 = (LotteryResultProgressBar *)0x0;
      }
      std::string::~string(asStack_70);
      goto LAB_041cdd6c;
    }
    FUN_05475ffc(asStack_30,this_00,0,10);
    bVar3 = std::operator==(asStack_30,"accessory_");
    std::string::~string(asStack_30);
    if (bVar3) {
      FUN_05475ffc((string *)awStack_38,this_00,10,0xffffffffffffffff);
      psVar16 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      this_02 = (LotteryResultProgressBar *)PlantAccessoryMgr::GetAccessoryDisplayImage(psVar16);
      pPVar14 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      PlantAccessoryMgr::GetAccessoryDisplayName(pPVar14,(string *)awStack_38);
      thunk_FUN_05477b9c(awStack_78,asStack_30);
      FUN_05476c50(asStack_30);
      std::string::~string((string *)awStack_38);
      goto LAB_041cdd6c;
    }
    FUN_05475ffc(asStack_30,this_00,0,0xf);
    bVar3 = std::operator==(asStack_30,"accessorypiece_");
    std::string::~string(asStack_30);
    if (bVar3) goto LAB_041ce44c;
    bVar3 = std::operator==((string *)this_00,"coin");
    if (bVar3) {
      this_02 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1b10);
      TodStringTranslate(L"[CONSUMPTION_COIN_REWARD]");
      iVar7 = *(int *)(this + 0x310);
      pwVar15 = L"{COIN}";
    }
    else {
      bVar3 = std::operator==((string *)this_00,"gem");
      if (!bVar3) goto LAB_041cde20;
      this_02 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1d80);
      TodStringTranslate(L"[CONSUMPTION_GEM_REWARD]");
      iVar7 = *(int *)(this + 0x310);
      pwVar15 = L"{GEM}";
    }
    TodReplaceNumberString(awStack_38,pwVar15,iVar7);
    FUN_054766c8(awStack_78,asStack_30);
    FUN_05476c50(asStack_30);
    FUN_05476c50(awStack_38);
  }
  if (this_02 != (LotteryResultProgressBar *)0x0) {
    iVar7 = *(int *)(this + 0x50);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    iVar1 = *(int *)(this + 0x54);
    iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_02);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_02,(iVar7 - iVar5) / 2,(iVar1 - iVar6) / 2);
  }
LAB_041cde20:
  iVar7 = 0;
  if ((this[0x2fb] != (ItemButton)0x0) && (this[0x2fc] == (ItemButton)0x0)) {
    iVar7 = FUN_041cb504(0xf);
  }
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  iVar5 = FUN_041cb504(0xc);
  iVar1 = *(int *)(this + 0x50);
  FUN_05477b24(awStack_38,awStack_78);
  Sexy::Color::Color((Color *)asStack_30,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)(iVar5 + iVar7),(float)iVar1,uVar9,param_1,awStack_38,1,
             asStack_30,0);
  FUN_05476c50(awStack_38);
  FUN_05476c50(awStack_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ItemButton::Draw(Sexy::Graphics*) */

void __thiscall ItemButton::Draw(ItemButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *this_00;
  undefined8 uVar7;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  if (this[0x2fc] == (ItemButton)0x0) {
    iVar2 = 0;
    if (this[0x2fb] != (ItemButton)0x0) {
      iVar2 = FUN_041cb504(0xfffffff1);
    }
  }
  else {
    iVar2 = FUN_041cb504(6);
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1e50);
  iVar1 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af1e50);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar4 = FUN_041cb504(0x1e);
  Sexy::Graphics::DrawImage
            (param_1,pIVar6,(iVar1 - iVar3) / 2,(*(int *)(this + 0x54) - iVar4) + iVar2);
  DrawReward(this,param_1);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  iVar4 = FUN_041cb504(0x17);
  iVar5 = FUN_041cb504(0x20);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = *(int *)(this + 0x50);
  Sexy::StrFormat(L"%d",auStack_20,(ulong)*(uint *)(this + 0x318));
  Sexy::Color::Color(aCStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)iVar4,(float)((iVar1 - iVar5) + iVar2),(float)iVar3,uVar7,
             param_1,auStack_20,1,aCStack_18,0);
  FUN_05476c50(auStack_20);
  DrawFlag(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

