// Class: DiscountShopCommonWidget


/* DiscountShopCommonWidget::~DiscountShopCommonWidget() */

void __thiscall DiscountShopCommonWidget::~DiscountShopCommonWidget(DiscountShopCommonWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698a950;
  CommonRewardItemWidget::~CommonRewardItemWidget((CommonRewardItemWidget *)this);
  return;
}


/* DiscountShopCommonWidget::~DiscountShopCommonWidget() */

void __thiscall DiscountShopCommonWidget::~DiscountShopCommonWidget(DiscountShopCommonWidget *this)

{
  ~DiscountShopCommonWidget(this);
  AK::FreeHook(this);
  return;
}


/* DiscountShopCommonWidget::DiscountShopCommonWidget() */

void __thiscall DiscountShopCommonWidget::DiscountShopCommonWidget(DiscountShopCommonWidget *this)

{
  CommonRewardItemWidget::CommonRewardItemWidget((CommonRewardItemWidget *)this);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR_GetClass_0698a950;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopCommonWidget::Draw(Sexy::Graphics*) */

void __thiscall DiscountShopCommonWidget::Draw(DiscountShopCommonWidget *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Image *pIVar8;
  undefined8 uVar9;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar10;
  long lVar11;
  string *extraout_x1;
  float fVar12;
  float fVar13;
  Sexy aSStack_40 [4];
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b920b8);
  Sexy::Graphics::DrawImage(param_1,pIVar8,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar2 = FUN_04c53650(2);
  iVar3 = FUN_04c53650(0x32);
  Sexy::Insets::Insets((Insets *)&local_28,0,iVar2,*(int *)(this + 0x50),iVar3);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x100,(Insets *)&local_28,uVar9,aIStack_18,5,1);
  if (*(int *)(this + 0x128) == 2) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x130));
    fVar13 = ((float)*(int *)(this + 0xf4) * 0.9) / (float)*(int *)(this_01 + 0x28);
    fVar12 = ((float)*(int *)(this + 0xf8) * 0.9) / (float)*(int *)(this_01 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
    GetImageOffset(aSStack_40,aIStack_18);
    Sexy::RtId::~RtId((RtId *)aIStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace((int *)aSStack_40,&iStack_3c,1536.0);
    Sexy::Insets::Insets
              ((Insets *)&local_38,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_01 + 0x30) * fVar13),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_01 + 0x34) * fVar12),
               (int)(fVar13 * (float)*(int *)(this_01 + 0x28)),
               (int)(fVar12 * (float)*(int *)(this_01 + 0x2c)));
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    iVar2 = FUN_04c53650(0x14);
    Sexy::Insets::Insets(aIStack_18,local_38,local_34 + iVar2,local_30,local_2c);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar10,(TRect *)aIStack_18,(TRect *)(this_01 + 0x20));
    Sexy::Insets::Insets
              ((Insets *)&local_28,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_01 + 0x18) * fVar13),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_01 + 0x1c) * fVar12),
               (int)(fVar13 * (float)*(int *)(this_01 + 0x10)),
               (int)(fVar12 * (float)*(int *)(this_01 + 0x14)));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar1) {
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar11 + 0x48));
      iVar2 = FUN_04c53650(0x14);
      Sexy::Insets::Insets(aIStack_18,local_28,local_24 + iVar2,local_20,local_1c);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,(TRect *)aIStack_18,(TRect *)(this_01 + 8))
      ;
    }
  }
  else if (*(long *)(this + 0x108) != 0) {
    iVar2 = FUN_04c53650(0x14);
    Sexy::Insets::Insets
              (aIStack_18,*(int *)(this + 0xec),iVar2 + *(int *)(this + 0xf0),*(int *)(this + 0xf4),
               *(int *)(this + 0xf8));
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x108));
  }
  iVar3 = FUN_04c53650(0x14);
  iVar4 = FUN_04c53650(0x32);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_04c53650(0x4b);
  iVar6 = FUN_04c53650(0x19);
  Sexy::Insets::Insets(aIStack_18,iVar3,iVar2 - iVar4,iVar5,iVar6);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b921b0);
  Draw3SliceImage(param_1,aIStack_18,uVar9);
  pIVar8 = *(Image **)(this + 0x120);
  if (pIVar8 != (Image *)0x0) {
    iVar3 = FUN_04c53650(0x14);
    iVar4 = FUN_04c53650(0x32);
    iVar2 = *(int *)(this + 0x54);
    iVar5 = FUN_04c53650(0x19);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar3,iVar2 - iVar4,iVar5,iVar5);
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe4));
  Sexy::ToSexyString(aSStack_40,extraout_x1);
  iVar3 = FUN_04c53650(0x30);
  iVar2 = *(int *)(this + 0x54);
  iVar4 = FUN_04c53650(0x19);
  Sexy::Insets::Insets((Insets *)&local_28,0,iVar2 - iVar3,*(int *)(this + 0x50),iVar4);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,&local_38,(Insets *)&local_28,uVar9,aIStack_18,5,1);
  FUN_05476c50(&local_38);
  std::string::~string((string *)aSStack_40);
  pIVar8 = *(Image **)(this + 0x180);
  if (pIVar8 != (Image *)0x0) {
    iVar4 = FUN_04c53650(0x1e);
    iVar2 = *(int *)(this + 0x50);
    iVar5 = FUN_04c53650(0x28);
    iVar3 = *(int *)(this + 0x54);
    iVar6 = FUN_04c53650(0x32);
    iVar7 = FUN_04c53650(0x2d);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2 - iVar4,iVar3 - iVar5,iVar6,iVar7);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

