// Class: DiscountShopCommonWidgetNew


/* DiscountShopCommonWidgetNew::~DiscountShopCommonWidgetNew() */

void __thiscall
DiscountShopCommonWidgetNew::~DiscountShopCommonWidgetNew(DiscountShopCommonWidgetNew *this)

{
  *(undefined ***)this = &PTR_GetClass_0698b360;
  CommonRewardItemWidget::~CommonRewardItemWidget((CommonRewardItemWidget *)this);
  return;
}


/* DiscountShopCommonWidgetNew::~DiscountShopCommonWidgetNew() */

void __thiscall
DiscountShopCommonWidgetNew::~DiscountShopCommonWidgetNew(DiscountShopCommonWidgetNew *this)

{
  ~DiscountShopCommonWidgetNew(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopCommonWidgetNew::SetDiscount(int) */

void DiscountShopCommonWidgetNew::SetDiscount(int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_FESTIVALCENTER_DISCOUNT_DISCOUNT_%d",asStack_10);
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)((ulong)(uint)param_1 + 0x180) = uVar1;
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DiscountShopCommonWidgetNew::DiscountShopCommonWidgetNew() */

void __thiscall
DiscountShopCommonWidgetNew::DiscountShopCommonWidgetNew(DiscountShopCommonWidgetNew *this)

{
  CommonRewardItemWidget::CommonRewardItemWidget((CommonRewardItemWidget *)this);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR_GetClass_0698b360;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopCommonWidgetNew::init() */

void __thiscall DiscountShopCommonWidgetNew::init(DiscountShopCommonWidgetNew *this)

{
  int iVar1;
  string *psVar2;
  long lVar3;
  undefined8 uVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CommonRewardItemWidget::init((CommonRewardItemWidget *)this);
  iVar1 = PlantChipNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  if (*(int *)(lVar3 + 0xd0) == 0) {
    uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b91f20);
    *(undefined8 *)(this + 0x188) = uVar4;
  }
  else {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    if (*(int *)(lVar3 + 0xd0) == 1) {
      uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b91fd0);
      *(undefined8 *)(this + 0x188) = uVar4;
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      if (*(int *)(lVar3 + 0xd0) == 2) {
        uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92060);
        *(undefined8 *)(this + 0x188) = uVar4;
      }
      else {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        if (*(int *)(lVar3 + 0xd0) == 3) {
          uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92090);
          *(undefined8 *)(this + 0x188) = uVar4;
        }
        else {
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          if (*(int *)(lVar3 + 0xd0) == 4) {
            uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92108);
            *(undefined8 *)(this + 0x188) = uVar4;
          }
        }
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DiscountShopCommonWidgetNew::Draw(Sexy::Graphics*) */

void __thiscall
DiscountShopCommonWidgetNew::Draw(DiscountShopCommonWidgetNew *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar8;
  long lVar9;
  Image *pIVar10;
  string *extraout_x1;
  float fVar11;
  float fVar12;
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
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  Sexy::Graphics::DrawImage
            (param_1,*(Image **)(this + 0x188),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar2 = FUN_04c53650(10);
  iVar4 = *(int *)(this + 0x54);
  iVar3 = FUN_04c53650(0x32);
  Sexy::Insets::Insets((Insets *)&local_28,0,iVar2 + iVar4 / 2,*(int *)(this + 0x50),iVar3);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,this + 0x100,(Insets *)&local_28,uVar7,(Insets *)&local_18,5,1);
  iVar4 = FUN_04c53650(0x50);
  iVar2 = FUN_04c53650(0x14);
  Sexy::Insets::Insets((Insets *)&local_18,(*(int *)(this + 0x50) - iVar4) / 2,iVar2,iVar4,iVar4);
  *(undefined8 *)(this + 0xec) = local_18;
  *(undefined8 *)(this + 0xf4) = uStack_10;
  if (*(int *)(this + 0x128) == 2) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x130));
    fVar12 = ((float)*(int *)(this + 0xf4) * 0.9) / (float)*(int *)(this_01 + 0x28);
    fVar11 = ((float)*(int *)(this + 0xf8) * 0.9) / (float)*(int *)(this_01 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
    GetImageOffset(aSStack_40,(Insets *)&local_18);
    Sexy::RtId::~RtId((RtId *)&local_18);
    UIWidget::ConvertPSDImageOffsetToUISpace((int *)aSStack_40,&iStack_3c,1536.0);
    Sexy::Insets::Insets
              ((Insets *)&local_38,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_01 + 0x30) * fVar12),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_01 + 0x34) * fVar11),
               (int)(fVar12 * (float)*(int *)(this_01 + 0x28)),
               (int)(fVar11 * (float)*(int *)(this_01 + 0x2c)));
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    iVar4 = FUN_04c53650(0x14);
    Sexy::Insets::Insets((Insets *)&local_18,local_38,local_34 + iVar4,local_30,local_2c);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)&local_18,(TRect *)(this_01 + 0x20));
    Sexy::Insets::Insets
              ((Insets *)&local_28,
               (int)((float)*(int *)(this + 0xec) + (float)*(int *)(this_01 + 0x18) * fVar12),
               (int)((float)*(int *)(this + 0xf0) + (float)*(int *)(this_01 + 0x1c) * fVar11),
               (int)(fVar12 * (float)*(int *)(this_01 + 0x10)),
               (int)(fVar11 * (float)*(int *)(this_01 + 0x14)));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar1) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar9 + 0x48));
      iVar4 = FUN_04c53650(0x14);
      Sexy::Insets::Insets((Insets *)&local_18,local_28,local_24 + iVar4,local_20,local_1c);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)&local_18,(TRect *)(this_01 + 8));
    }
  }
  else if (*(long *)(this + 0x108) != 0) {
    iVar4 = FUN_04c53650(0x14);
    Sexy::Insets::Insets
              ((Insets *)&local_18,*(int *)(this + 0xec),iVar4 + *(int *)(this + 0xf0),
               *(int *)(this + 0xf4),*(int *)(this + 0xf8));
    DrawAdaptiveImage(param_1,(Insets *)&local_18,*(undefined8 *)(this + 0x108));
  }
  iVar2 = FUN_04c53650(0x5d);
  iVar3 = FUN_04c53650(0x41);
  iVar4 = *(int *)(this + 0x54);
  iVar5 = FUN_04c53650(0x19);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(*(int *)(this + 0x50) - iVar2) / 2,iVar4 - iVar3,iVar2,iVar5);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b91d50);
  Draw3SliceImage(param_1,(Insets *)&local_18,uVar7);
  pIVar10 = *(Image **)(this + 0x120);
  if (pIVar10 != (Image *)0x0) {
    iVar2 = FUN_04c53650(0x53);
    iVar3 = FUN_04c53650(0x41);
    iVar4 = *(int *)(this + 0x54);
    iVar5 = FUN_04c53650(0x19);
    Sexy::Graphics::DrawImage
              (param_1,pIVar10,(*(int *)(this + 0x50) - iVar2) / 2,iVar4 - iVar3,iVar5,iVar5);
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe4));
  Sexy::ToSexyString(aSStack_40,extraout_x1);
  iVar2 = FUN_04c53650(0x3f);
  iVar4 = *(int *)(this + 0x54);
  iVar3 = FUN_04c53650(0x19);
  Sexy::Insets::Insets((Insets *)&local_28,0,iVar4 - iVar2,*(int *)(this + 0x50),iVar3);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,&local_38,(Insets *)&local_28,uVar7,(Insets *)&local_18,5,1);
  FUN_05476c50(&local_38);
  std::string::~string((string *)aSStack_40);
  pIVar10 = *(Image **)(this + 0x180);
  if (pIVar10 != (Image *)0x0) {
    iVar3 = FUN_04c53650(0x32);
    iVar4 = *(int *)(this + 0x50);
    iVar5 = FUN_04c53650(0x28);
    iVar2 = *(int *)(this + 0x54);
    iVar6 = FUN_04c53650(0x2d);
    Sexy::Graphics::DrawImage(param_1,pIVar10,iVar4 - iVar3,iVar2 - iVar5,iVar3,iVar6);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

