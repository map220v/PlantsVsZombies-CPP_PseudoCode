// Class: PVPLabItem


/* PVPLabItem::~PVPLabItem() */

void __thiscall PVPLabItem::~PVPLabItem(PVPLabItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06950620;
  *(undefined ***)(this + 0x198) = &PTR__PVPLabItem_06950978;
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to PVPLabItem::~PVPLabItem() */

void __thiscall PVPLabItem::~PVPLabItem(PVPLabItem *this)

{
  ~PVPLabItem(this + -0x198);
  return;
}


/* PVPLabItem::~PVPLabItem() */

void __thiscall PVPLabItem::~PVPLabItem(PVPLabItem *this)

{
  ~PVPLabItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVPLabItem::~PVPLabItem() */

void __thiscall PVPLabItem::~PVPLabItem(PVPLabItem *this)

{
  ~PVPLabItem(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPLabItem::PVPLabItem(Sexy::Image*) */

void __thiscall PVPLabItem::PVPLabItem(PVPLabItem *this,Image *param_1)

{
  bool bVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,0,(ButtonListener *)0x0,awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  bVar1 = local_8 == ___stack_chk_guard;
  *(Image **)(this + 0x300) = param_1;
  *(undefined4 *)(this + 0x30c) = 0;
  *(undefined ***)this = &PTR_GetClass_06950620;
  *(undefined ***)(this + 0x198) = &PTR__PVPLabItem_06950978;
  this[0x59] = (PVPLabItem)0x0;
  *(undefined4 *)(this + 0x308) = 0x3f800000;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPLabItem::Draw(Sexy::Graphics*) */

void __thiscall PVPLabItem::Draw(PVPLabItem *this,Graphics *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  LotteryResultProgressBar *pLVar9;
  AssetsManagerManifest *this_00;
  PVPLabData *pPVar10;
  Image *pIVar11;
  SalesProgressBar *this_01;
  INetworkMsgProcess *this_02;
  int extraout_w1;
  int extraout_w1_00;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82278);
  if ((byte)this[0x6e] < (pLVar9 != (LotteryResultProgressBar *)0x0)) {
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    fVar15 = *(float *)(this + 0x308);
    iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar9);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pLVar9,(*(int *)(this + 0x50) - (int)((float)iVar2 * fVar15)) / 2,
               (*(int *)(this + 0x54) - (int)((float)iVar3 * *(float *)(this + 0x308))) / 2,
               (int)((float)iVar2 * fVar15),(int)((float)iVar3 * *(float *)(this + 0x308)));
  }
  iVar13 = (int)((float)*(int *)(this + 0x50) * *(float *)(this + 0x308));
  iVar12 = (int)((float)*(int *)(this + 0x54) * *(float *)(this + 0x308));
  iVar2 = (*(int *)(this + 0x50) - iVar13) / 2;
  iVar3 = (*(int *)(this + 0x54) - iVar12) / 2;
  Sexy::Insets::Insets((Insets *)&local_38,iVar2,iVar3,iVar13,iVar12);
  if (*(Image **)(this + 0x300) != (Image *)0x0) {
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0x300),iVar2,iVar3,iVar13,iVar12);
  }
  this_00 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  pPVar10 = (PVPLabData *)AssetsManagerManifest::getAssets(this_00);
  uVar4 = PVPLabData::GetLabItemLevel(pPVar10,*(undefined4 *)(this + 0x30c));
  if (0 < (int)uVar4) {
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82218);
    iVar3 = local_38;
    iVar12 = FUN_04af50d0(0x14);
    iVar2 = local_34 - iVar12;
    Sexy::Graphics::DrawImage(param_1,pIVar11,iVar3 - iVar12,iVar2);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82218);
    iVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82218);
    iVar5 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar6 = FUN_04af50d0(10);
    Sexy::StrFormat(L"%d",auStack_40,(ulong)uVar4);
    Sexy::Insets::Insets(aIStack_28,iVar3 - iVar12,iVar2,iVar13,iVar5 - iVar6);
    uVar1 = PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_40,aIStack_28,uVar1,aCStack_18,5,1);
    FUN_05476c50(auStack_40);
  }
  iVar2 = FUN_04af4f84(*(undefined4 *)(pPVar10 + 0x30));
  if (iVar2 == *(int *)(this + 0x30c)) {
    fVar15 = (float)FUN_04af4f8c(*(undefined4 *)(pPVar10 + 0x38));
    fVar14 = (float)PVZ_EOT();
    if (fVar15 != fVar14) {
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b822c8);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      fVar16 = *(float *)(this + 0x308);
      iVar12 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar9);
      fVar17 = *(float *)(this + 0x308);
      iVar13 = (int)((float)local_34 + (float)local_2c * 0.5);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pLVar9,local_38,iVar13,(int)((float)iVar3 * fVar16),
                 (int)((float)iVar12 * fVar17));
      fVar15 = (float)FUN_04af4f8c(*(undefined4 *)(pPVar10 + 0x38));
      fVar14 = (float)PVZ_T();
      fVar15 = fVar15 - fVar14;
      iVar2 = extraout_w1;
      if (fVar15 <= 0.0) {
        uVar7 = FUN_04af4f84(*(undefined4 *)(pPVar10 + 0x30));
        uVar8 = FUN_04af4f88(*(undefined4 *)(pPVar10 + 0x34));
        PVPLabData::SetUpgradeItem(pPVar10,uVar7,uVar8,0xffffffff);
        this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
        INetworkMsgProcess::RequestPVPLabEnter(this_02);
        fVar15 = 0.0;
        iVar2 = extraout_w1_00;
      }
      StringHelper::ToTimeString((StringHelper *)0x0,fVar15,iVar2);
      Sexy::Insets::Insets
                (aIStack_28,local_38,iVar13,(int)((float)iVar3 * fVar16),
                 (int)((float)iVar12 * fVar17));
      uVar1 = PrimeText_Game::Typeface_FZCuYuan_26_Outline;
      Sexy::Color::Color(aCStack_18,1);
      WriteWordInRect(param_1,auStack_40,aIStack_28,uVar1,aCStack_18,5,1);
      FUN_05476c50(auStack_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

