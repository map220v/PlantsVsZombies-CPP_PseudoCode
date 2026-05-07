// Class: LotteryPanelData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanelData::updateMaterialUI() */

void __thiscall LotteryPanelData::updateMaterialUI(LotteryPanelData *this)

{
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d/%d",awStack_18,(ulong)*(uint *)(this + 0x38),(ulong)*(uint *)(this + 0x30));
  TodReplaceString((wstring *)(this + 0x10),L"{COUNT}",awStack_18);
  FUN_054766c8(awStack_18,auStack_10);
  FUN_05476c50(auStack_10);
  if (*(long *)(this + 0x78) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x78),awStack_18);
  }
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanelData::UpdateSpecialBonusUI() */

void __thiscall LotteryPanelData::UpdateSpecialBonusUI(LotteryPanelData *this)

{
  char cVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  char *pcVar4;
  undefined8 uVar5;
  string *extraout_x1;
  string *extraout_x1_00;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar3,*(int *)(this + 0xac));
  if (cVar1 == '\0') {
    pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,*(int *)(this + 0xac));
    if (cVar1 == '\0') {
      pNVar3 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar3,*(int *)(this + 0xac));
      if (cVar1 == '\0') goto LAB_04b926c4;
      iVar2 = MaterialItemMapper::GetInstance();
      goto LAB_04b9275c;
    }
    iVar2 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    Sexy::StringToUpper(aSStack_20,extraout_x1);
    uVar5 = FUN_0547429c(asStack_10);
    pcVar4 = "POPANIM_UI_BOSSCHALLENGE_EFFECT_SPECIAL_BONUS_AVATAR_%s";
  }
  else {
    iVar2 = PlantChipNameMapperServerID::GetInstance();
LAB_04b9275c:
    NameMapperBase::GetNameForId(iVar2);
    Sexy::StringToUpper(aSStack_20,extraout_x1_00);
    uVar5 = FUN_0547429c(asStack_10);
    pcVar4 = "POPANIM_UI_BOSSCHALLENGE_EFFECT_SPECIAL_BONUS_%s";
  }
  Sexy::StrFormat(pcVar4,asStack_18,uVar5);
  std::string::~string(asStack_10);
  UIWidgetAnim::SetAnimRig(*(UIWidgetAnim **)(this + 0x88),asStack_18);
  std::string::~string(asStack_18);
  std::string::~string((string *)aSStack_20);
LAB_04b926c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanelData::getLotteryItemSize() */

void __thiscall LotteryPanelData::getLotteryItemSize(LotteryPanelData *this)

{
  int iVar1;
  int iVar2;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x28));
  iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x28));
  Sexy::FastCurve::SetOutRange(local_10,(float)iVar1,(float)iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* LotteryPanelData::updateLuckUI(bool) */

void __thiscall LotteryPanelData::updateLuckUI(LotteryPanelData *this,bool param_1)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (*(int *)(this + 0x44) != 0) {
    fVar1 = (float)(*(int *)(this + 0x40) + 1) / (float)*(int *)(this + 0x44);
  }
  LuckyProgressUtil::SetProgerss(*(LuckyProgressUtil **)(this + 0x80),fVar1,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanelData::GetLotteryItem(int) */

void __thiscall LotteryPanelData::GetLotteryItem(LotteryPanelData *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xd0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xd0));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar4 = 0;
LAB_04b946a8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar2 = UISummeryLotteryItem::GetItemID((UISummeryLotteryItem *)*puVar3);
    if (iVar2 == param_1) {
      uVar4 = *puVar3;
      goto LAB_04b946a8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* LotteryPanelData::LotteryPanelData() */

void __thiscall LotteryPanelData::LotteryPanelData(LotteryPanelData *this)

{
  Set8BytesTo0(this + 8);
  FUN_05476574(this + 0x10);
  FUN_05476574(this + 0x18);
  Set8BytesTo0(this + 0x20);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x44) = 1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  S2C_ICloud_IDCount::S2C_ICloud_IDCount((S2C_ICloud_IDCount *)(this + 0x98));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  *(undefined4 *)this = 0x296d;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanelData::initLotteryItemPosition() */

void __thiscall LotteryPanelData::initLotteryItemPosition(LotteryPanelData *this)

{
  vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *this_00;
  int iVar1;
  float fVar2;
  float fVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  FastCurve aFStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04b9259c(0x1c);
  fVar2 = (float)iVar1;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,fVar2,fVar2);
  fVar3 = (float)getLotteryItemSize(this);
  iVar1 = FUN_04b9259c(3);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar1,(float)iVar1);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::clear(this_00);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (this_00,(SexyVector2 *)&local_20);
  Sexy::FastCurve::SetOutRange(aFStack_10,fVar3 + local_20 + local_18,local_1c);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (this_00,(SexyVector2 *)aFStack_10);
  Sexy::FastCurve::SetOutRange(aFStack_10,local_20 + (fVar3 + local_18) * 2.0,local_1c);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (this_00,(SexyVector2 *)aFStack_10);
  Sexy::FastCurve::SetOutRange(aFStack_10,local_20 + (fVar3 + local_18) * 3.0,local_1c);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (this_00,(SexyVector2 *)aFStack_10);
  Sexy::FastCurve::SetOutRange
            (aFStack_10,local_20 + (fVar3 + local_18) * 3.0,fVar2 + local_1c + local_14);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (this_00,(SexyVector2 *)aFStack_10);
  Sexy::FastCurve::SetOutRange
            (aFStack_10,local_20 + (fVar3 + local_18) * 3.0,local_1c + (fVar2 + local_14) * 2.0);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (this_00,(SexyVector2 *)aFStack_10);
  Sexy::FastCurve::SetOutRange
            (aFStack_10,local_20 + (fVar3 + local_18) * 3.0,local_1c + (fVar2 + local_14) * 3.0);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (this_00,(SexyVector2 *)aFStack_10);
  Sexy::FastCurve::SetOutRange
            (aFStack_10,local_20 + (fVar3 + local_18) * 2.0,local_1c + (fVar2 + local_14) * 3.0);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (this_00,(SexyVector2 *)aFStack_10);
  Sexy::FastCurve::SetOutRange
            (aFStack_10,fVar3 + local_20 + local_18,local_1c + (fVar2 + local_14) * 3.0);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (this_00,(SexyVector2 *)aFStack_10);
  Sexy::FastCurve::SetOutRange(aFStack_10,local_20,local_1c + (fVar2 + local_14) * 3.0);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (this_00,(SexyVector2 *)aFStack_10);
  Sexy::FastCurve::SetOutRange(aFStack_10,local_20,local_1c + (fVar2 + local_14) * 2.0);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (this_00,(SexyVector2 *)aFStack_10);
  Sexy::FastCurve::SetOutRange(aFStack_10,local_20,fVar2 + local_1c + local_14);
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
            (this_00,(SexyVector2 *)aFStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanelData::InitLotteryItemUI() */

void LotteryPanelData::InitLotteryItemUI(void)

{
  undefined4 uVar1;
  LotteryPanelData *in_x0;
  ulong uVar2;
  float *pfVar3;
  ulong uVar4;
  UISummeryLotteryItem *pUVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float in_s1;
  float fVar11;
  float fVar12;
  UISummeryLotteryItem *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  initLotteryItemPosition(in_x0);
  fVar10 = (float)getLotteryItemSize(in_x0);
  uVar9 = *(undefined8 *)(in_x0 + 0xe8);
  uVar2 = FUN_04b91f78(uVar9,*(undefined8 *)(in_x0 + 0xf0));
  if (uVar2 != 0) {
    do {
      pfVar3 = (float *)FUN_04b91f84(uVar9,uVar7);
      uVar8 = *(undefined8 *)(in_x0 + 0xb8);
      fVar11 = *pfVar3;
      fVar12 = pfVar3[1];
      uVar4 = FUN_04b91f8c(uVar8,*(undefined8 *)(in_x0 + 0xc0));
      if (uVar7 < uVar4) {
        lVar6 = FUN_04b91fb4(uVar8,uVar7);
        pUVar5 = ::operator_new(0x358);
        UISummeryLotteryItem::UISummeryLotteryItem
                  (pUVar5,*(int *)(lVar6 + 0x14),*(int *)(lVar6 + 0x18));
        local_10 = pUVar5;
        UISummeryLotteryItem::Setbackground(pUVar5,*(Image **)(in_x0 + 0x28));
        (**(code **)(*(long *)local_10 + 0x198))
                  (local_10,(int)fVar11,(int)fVar12,(int)fVar10,(int)in_s1);
        (**(code **)(**(long **)(in_x0 + 0x60) + 0x60))(*(long **)(in_x0 + 0x60),local_10);
        std::vector<UISummeryLotteryItem*,std::allocator<UISummeryLotteryItem*>>::push_back
                  ((vector<UISummeryLotteryItem*,std::allocator<UISummeryLotteryItem*>> *)
                   (in_x0 + 0xd0),&local_10);
        uVar9 = *(undefined8 *)(in_x0 + 0xe8);
        uVar2 = FUN_04b91f78(uVar9,*(undefined8 *)(in_x0 + 0xf0));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  pUVar5 = ::operator_new(0x358);
  UISummeryLotteryItem::UISummeryLotteryItem(pUVar5,*(int *)(in_x0 + 0xac),*(int *)(in_x0 + 0xb0));
  UISummeryLotteryItem::Setbackground(pUVar5,*(Image **)(in_x0 + 0x28));
  uVar1 = FUN_04b9259c(0xf);
  (**(code **)(*(long *)pUVar5 + 0x198))(pUVar5,uVar1,uVar1,(int)fVar10,(int)in_s1);
  UISummeryLotteryItem::SetTransparent(pUVar5,true);
  (**(code **)(**(long **)(in_x0 + 0x70) + 0x60))(*(long **)(in_x0 + 0x70),pUVar5);
  UpdateSpecialBonusUI(in_x0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryPanelData::initSelectFrame() */

void __thiscall LotteryPanelData::initSelectFrame(LotteryPanelData *this)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  LotterySelectFrame *this_00;
  ulong uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x90) == 0) {
    this_00 = ::operator_new(0x158);
    LotterySelectFrame::LotterySelectFrame(this_00);
    *(LotterySelectFrame **)(this + 0x90) = this_00;
    (**(code **)(**(long **)(this + 0x60) + 0x60))(*(long **)(this + 0x60));
  }
  uVar5 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar1 = FUN_04b91f78(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
  if (uVar1 != 0) {
    do {
      uVar2 = FUN_04b91f8c(*(undefined8 *)(this + 0xb8),*(undefined8 *)(this + 0xc0));
      if (uVar5 < uVar2) {
        LotterySelectFrame::Item::Item((Item *)&local_30);
        puVar3 = (undefined8 *)FUN_04b91f84(*(undefined8 *)(this + 0xe8),uVar5);
        local_28 = *puVar3;
        lVar4 = FUN_04b91fb4(*(undefined8 *)(this + 0xb8),uVar5);
        local_30 = *(undefined4 *)(lVar4 + 0x14);
        local_2c = *(undefined4 *)(lVar4 + 0x18);
        std::vector<LotterySelectFrame::Item,std::allocator<LotterySelectFrame::Item>>::push_back
                  ((vector<LotterySelectFrame::Item,std::allocator<LotterySelectFrame::Item>> *)
                   avStack_20,(Item *)&local_30);
        uVar1 = FUN_04b91f78(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  LotterySelectFrame::SetItemPool(*(LotterySelectFrame **)(this + 0x90),(vector *)avStack_20);
  std::vector<LotterySelectFrame::Item,std::allocator<LotterySelectFrame::Item>>::~vector
            ((vector<LotterySelectFrame::Item,std::allocator<LotterySelectFrame::Item>> *)avStack_20
            );
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LotteryPanelData::~LotteryPanelData() */

void __thiscall LotteryPanelData::~LotteryPanelData(LotteryPanelData *this)

{
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0xe8));
  std::vector<UISummeryLotteryItem*,std::allocator<UISummeryLotteryItem*>>::~vector
            ((vector<UISummeryLotteryItem*,std::allocator<UISummeryLotteryItem*>> *)(this + 0xd0));
  std::vector<S2C_ICloud_IDCount,std::allocator<S2C_ICloud_IDCount>>::~vector
            ((vector<S2C_ICloud_IDCount,std::allocator<S2C_ICloud_IDCount>> *)(this + 0xb8));
  S2C_ICloud_IDCount::~S2C_ICloud_IDCount((S2C_ICloud_IDCount *)(this + 0x98));
  std::string::~string((string *)(this + 0x20));
  FUN_05476c50(this + 0x18);
  FUN_05476c50(this + 0x10);
  std::string::~string((string *)(this + 8));
  return;
}

