// Class: AnniversaryTreasureJackPotImage


/* AnniversaryTreasureJackPotImage::TouchEnded(Sexy::Touch const&) */

void AnniversaryTreasureJackPotImage::TouchEnded(Touch *param_1)

{
  if (*(long *)(param_1 + 0xe0) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  return;
}


/* AnniversaryTreasureJackPotImage::~AnniversaryTreasureJackPotImage() */

void __thiscall
AnniversaryTreasureJackPotImage::~AnniversaryTreasureJackPotImage
          (AnniversaryTreasureJackPotImage *this)

{
  *(undefined ***)this = &PTR_GetClass_06708ca0;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AnniversaryTreasureJackPotImage::~AnniversaryTreasureJackPotImage() */

void __thiscall
AnniversaryTreasureJackPotImage::~AnniversaryTreasureJackPotImage
          (AnniversaryTreasureJackPotImage *this)

{
  ~AnniversaryTreasureJackPotImage(this);
  AK::FreeHook(this);
  return;
}


/* AnniversaryTreasureJackPotImage::AnniversaryTreasureJackPotImage() */

void __thiscall
AnniversaryTreasureJackPotImage::AnniversaryTreasureJackPotImage
          (AnniversaryTreasureJackPotImage *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06708ca0;
  FUN_05476574(this + 0xd8);
  *(undefined8 *)(this + 0xe0) = 0;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0xe8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureJackPotImage::InitBonus(std::pair<int, int> const&) */

void __thiscall
AnniversaryTreasureJackPotImage::InitBonus(AnniversaryTreasureJackPotImage *this,pair *param_1)

{
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  GAME_ITEM_INFO aGStack_38 [40];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::pair<int,int>::operator=((pair<int,int> *)(this + 0xe8),param_1);
  GetGameItemInfo(*(int *)param_1,0x7fffffff,0);
  thunk_FUN_05477b9c(this + 0xd8,auStack_10);
  Sexy::StrFormat("x%d",asStack_48,(ulong)*(uint *)(param_1 + 4));
  Sexy::ToWString(asStack_48);
  thunk_FUN_05477668(this + 0xd8,auStack_40);
  FUN_05476c50(auStack_40);
  std::string::~string(asStack_48);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureJackPotImage::TouchBegan(Sexy::Touch const&) */

void AnniversaryTreasureJackPotImage::TouchBegan(Touch *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  StoneLotteryItemTipUI *this_01;
  long lVar5;
  int iVar6;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0xd0))(&local_20);
  this = (LotteryResultProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5740);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
  iVar6 = (int)((float)iVar2 + (float)iVar2);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5740);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar4 = FUN_03a4d834(5);
  Sexy::Insets::Insets
            (aIStack_18,local_20 + (iVar2 - iVar6) / 2,
             (local_1c - (int)((float)iVar3 * 0.5)) + iVar4,iVar6,(int)((float)iVar3 * 0.5));
  lVar5 = *(long *)(param_1 + 0xe0);
  if (lVar5 == 0) {
    this_01 = ::operator_new(0xe8);
    memset(this_01,0,0xe8);
    StoneLotteryItemTipUI::StoneLotteryItemTipUI(this_01);
    uVar1 = *(uint *)(this_01 + 0x60);
    *(StoneLotteryItemTipUI **)(param_1 + 0xe0) = this_01;
    *(uint *)(this_01 + 0x60) = uVar1 | 0x10;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_01);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(param_1 + 0xe0));
    lVar5 = *(long *)(param_1 + 0xe0);
  }
  PuzzleTip::SetTip(lVar5,param_1 + 0xd8);
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x1a0))(*(long **)(param_1 + 0xe0),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnniversaryTreasureJackPotImage::Draw(Sexy::Graphics*) */

void __thiscall
AnniversaryTreasureJackPotImage::Draw(AnniversaryTreasureJackPotImage *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  NameMapperBase *this_00;
  SeedPacketUtils *this_01;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  string asStack_78 [8];
  int iStack_70;
  int iStack_6c;
  string asStack_68 [8];
  undefined1 auStack_60 [8];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  RtId aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  this_00 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this_00,*(int *)(this + 0xe8));
  if (cVar1 != '\0') {
    Sexy::Insets::Insets((Insets *)&local_58,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    iVar3 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_02 = (RtWeakPtr *)SeedPacketUtils::GetPlantPiecePacketRenderData(this_01,asStack_78);
    fVar8 = ((float)local_50 * 0.9) / (float)*(int *)(this_02 + 0x28);
    fVar7 = ((float)local_4c * 0.9) / (float)*(int *)(this_02 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_02 + 0x170));
    GetImageOffset(&iStack_70,aRStack_18);
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_70,&iStack_6c,1536.0);
    Sexy::Insets::Insets
              (aIStack_48,(int)((float)local_58 + (float)*(int *)(this_02 + 0x30) * fVar8),
               (int)((float)local_54 + (float)*(int *)(this_02 + 0x34) * fVar7),
               (int)(fVar8 * (float)*(int *)(this_02 + 0x28)),
               (int)(fVar7 * (float)*(int *)(this_02 + 0x2c)));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02 + 0x170);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar4,(TRect *)aIStack_48,(TRect *)(this_02 + 0x20))
    ;
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)local_58 + (float)*(int *)(this_02 + 0x18) * fVar8),
               (int)((float)local_54 + (float)*(int *)(this_02 + 0x1c) * fVar7),
               (int)(fVar8 * (float)*(int *)(this_02 + 0x10)),
               (int)(fVar7 * (float)*(int *)(this_02 + 0x14)));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
    if (bVar2) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar6 + 0x48));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar4,(TRect *)aIStack_38,(TRect *)(this_02 + 8));
    }
    Sexy::StrFormat("x%d",asStack_68,(ulong)*(uint *)(this + 0xec));
    Sexy::ToWString(asStack_68);
    Sexy::Insets::Insets
              (aIStack_28,0,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50),
               *(int *)(this + 0x54) / 2);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
    Sexy::Color::Color((Color *)aRStack_18,1);
    WriteWordInRect(param_1,auStack_60,aIStack_28,uVar5,aRStack_18,5,1);
    FUN_05476c50(auStack_60);
    std::string::~string(asStack_68);
    std::string::~string(asStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

