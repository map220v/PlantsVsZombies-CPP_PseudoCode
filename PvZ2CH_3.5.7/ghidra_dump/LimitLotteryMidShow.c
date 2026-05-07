// Class: LimitLotteryMidShow


/* LimitLotteryMidShow::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
LimitLotteryMidShow::DrawAll(LimitLotteryMidShow *this,ModalFlags *param_1,Graphics *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  uVar4 = *(undefined8 *)(this + 0xe0);
  uVar1 = FUN_03989284(uVar4,*(undefined8 *)(this + 0xe8));
  if (((ulong)(long)*(int *)(this + 0xd8) <= uVar1) && (0 < *(int *)(this + 0xd8))) {
    lVar5 = 0;
    while( true ) {
      puVar2 = (undefined8 *)FUN_0398925c(uVar4,lVar5);
      (**(code **)(*(long *)*puVar2 + 0x158))((long *)*puVar2,1);
      iVar3 = (int)lVar5;
      lVar5 = lVar5 + 1;
      if (*(int *)(this + 0xd8) <= iVar3 + 1) break;
      uVar4 = *(undefined8 *)(this + 0xe0);
    }
  }
  return;
}


/* LimitLotteryMidShow::Clear() */

void __thiscall LimitLotteryMidShow::Clear(LimitLotteryMidShow *this)

{
  (**(code **)(*(long *)this + 0x80))(this,1,0);
  return;
}


/* LimitLotteryMidShow::InitView() */

void __thiscall LimitLotteryMidShow::InitView(LimitLotteryMidShow *this)

{
  std::vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>>::clear
            ((vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>> *)(this + 0xe0));
  Clear(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryMidShow::SetChildVisible(bool) */

void __thiscall LimitLotteryMidShow::SetChildVisible(LimitLotteryMidShow *this,bool param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xe0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x158))((long *)*puVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryMidShow::LimitLotteryMidShow() */

void __thiscall LimitLotteryMidShow::LimitLotteryMidShow(LimitLotteryMidShow *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_066dea80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  return;
}


/* LimitLotteryMidShow::~LimitLotteryMidShow() */

void __thiscall LimitLotteryMidShow::~LimitLotteryMidShow(LimitLotteryMidShow *this)

{
  *(undefined ***)this = &PTR_GetClass_066dea80;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<LimitLotteryItemInfo,std::allocator<LimitLotteryItemInfo>>::~vector
            ((vector<LimitLotteryItemInfo,std::allocator<LimitLotteryItemInfo>> *)(this + 0xf8));
  std::vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>>::~vector
            ((vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LimitLotteryMidShow::~LimitLotteryMidShow() */

void __thiscall LimitLotteryMidShow::~LimitLotteryMidShow(LimitLotteryMidShow *this)

{
  ~LimitLotteryMidShow(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryMidShow::SetBonus(std::vector<LotteryBonus, std::allocator<LotteryBonus> >&) */

void __thiscall LimitLotteryMidShow::SetBonus(LimitLotteryMidShow *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  float *pfVar5;
  int *piVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  LimitLotteryItem *pLVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  LimitLotteryItem *local_38;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = FUN_03989200(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xd4) = uVar4;
  SetChildVisible(this,false);
  std::vector<LimitLotteryItemInfo,std::allocator<LimitLotteryItemInfo>>::clear
            ((vector<LimitLotteryItemInfo,std::allocator<LimitLotteryItemInfo>> *)(this + 0xf8));
  local_30 = std::ceil((float)(*(int *)(this + 0xd4) + -1) * 0.33333334);
  local_20[0] = 0x3f800000;
  pfVar5 = eastl::max_alt<float>((float *)&local_30,(float *)local_20);
  iVar13 = *(int *)(this + 0x54);
  iVar15 = *(int *)(this + 0x50);
  iVar10 = (int)*pfVar5;
  local_4c = 0;
  if (iVar10 != 0) {
    local_4c = iVar13 / iVar10;
  }
  local_50 = iVar15 / 3;
  piVar6 = eastl::min_alt<int>(&local_50,&local_4c);
  iVar1 = *piVar6;
  if (iVar10 == 1) {
    iVar13 = iVar13 - iVar1;
    iVar15 = (iVar15 + iVar1 * -3) / 2;
  }
  else {
    iVar13 = iVar13 - iVar1 * iVar10;
    iVar15 = 0;
    if (iVar10 + -1 != 0) {
      iVar15 = iVar13 / (iVar10 + -1);
    }
  }
  uVar11 = 0;
  iVar10 = FUN_0398a1f8(0);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while( true ) {
    iVar2 = (int)uVar11;
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (!bVar3) break;
    puVar7 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    if (iVar2 < *(int *)(this + 0xd4)) {
      local_2c = *puVar7;
      local_28 = puVar7[1];
      local_30 = iVar2;
      std::vector<LimitLotteryItemInfo,std::allocator<LimitLotteryItemInfo>>::push_back
                ((vector<LimitLotteryItemInfo,std::allocator<LimitLotteryItemInfo>> *)(this + 0xf8),
                 (LimitLotteryItemInfo *)&local_30);
      uVar14 = *(undefined8 *)(this + 0xe0);
      uVar8 = FUN_03989284(uVar14,*(undefined8 *)(this + 0xe8));
      if (uVar8 <= uVar11) {
        pLVar12 = ::operator_new(0x368);
        LimitLotteryItem::LimitLotteryItem(pLVar12,iVar2 + 0xa0);
        local_38 = pLVar12;
        std::vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>>::push_back
                  ((vector<LimitLotteryItem*,std::allocator<LimitLotteryItem*>> *)(this + 0xe0),
                   &local_38);
        (**(code **)(*(long *)this + 0x60))(this,local_38);
        Sexy::Insets::Insets
                  ((Insets *)local_20,iVar10 + (iVar2 % 3) * (iVar1 + iVar15),
                   iVar13 / 2 + iVar1 * (iVar2 / 3),iVar1,iVar1);
        (**(code **)(*(long *)local_38 + 0x1a0))
                  (local_38,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                            local_20);
        (**(code **)(*(long *)local_38 + 0x158))(local_38,0);
        uVar14 = *(undefined8 *)(this + 0xe0);
      }
      puVar9 = (undefined8 *)FUN_0398925c(uVar14,uVar11);
      pLVar12 = (LimitLotteryItem *)*puVar9;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      LimitLotteryItem::SetlotteryInfo(pLVar12,(LimitLotteryItemInfo *)&local_30,(vector *)local_20)
      ;
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
    }
    uVar11 = uVar11 + 1;
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

