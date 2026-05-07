// Class: LimitLotteryItem


/* LimitLotteryItem::SetAlreadyGet(bool) */

void __thiscall LimitLotteryItem::SetAlreadyGet(LimitLotteryItem *this,bool param_1)

{
  this[0x328] = (LimitLotteryItem)param_1;
  return;
}


/* LimitLotteryItem::KillTip() */

void __thiscall LimitLotteryItem::KillTip(LimitLotteryItem *this)

{
  if (*(long *)(this + 0x350) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x350));
    *(undefined8 *)(this + 0x350) = 0;
  }
  return;
}


/* LimitLotteryItem::ButtonDepress(int) */

void LimitLotteryItem::ButtonDepress(int param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(long *)(uVar1 + 0x350) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(uVar1 + 0x350));
    *(undefined8 *)(uVar1 + 0x350) = 0;
  }
  return;
}


/* non-virtual thunk to LimitLotteryItem::ButtonDepress(int) */

void __thiscall LimitLotteryItem::ButtonDepress(LimitLotteryItem *this,int param_1)

{
  ButtonDepress((int)this + -0x300);
  return;
}


/* LimitLotteryItem::ButtonMouseLeave(int) */

void LimitLotteryItem::ButtonMouseLeave(int param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(long *)(uVar1 + 0x350) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(uVar1 + 0x350));
    *(undefined8 *)(uVar1 + 0x350) = 0;
  }
  return;
}


/* non-virtual thunk to LimitLotteryItem::ButtonMouseLeave(int) */

void __thiscall LimitLotteryItem::ButtonMouseLeave(LimitLotteryItem *this,int param_1)

{
  ButtonMouseLeave((int)this + -0x300);
  return;
}


/* LimitLotteryItem::GetBonusName() */

undefined8 LimitLotteryItem::GetBonusName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* LimitLotteryItem::GetBonusDes() */

undefined8 LimitLotteryItem::GetBonusDes(void)

{
  undefined8 in_x8;
  
  FUN_05477b24();
  return in_x8;
}


/* LimitLotteryItem::~LimitLotteryItem() */

void __thiscall LimitLotteryItem::~LimitLotteryItem(LimitLotteryItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066ddff0;
  *(undefined ***)(this + 0x198) = &PTR__LimitLotteryItem_066de360;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_066de388;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x348);
  std::string::~string((string *)(this + 0x340));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x338));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x330));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to LimitLotteryItem::~LimitLotteryItem() */

void __thiscall LimitLotteryItem::~LimitLotteryItem(LimitLotteryItem *this)

{
  ~LimitLotteryItem(this + -0x198);
  return;
}


/* LimitLotteryItem::~LimitLotteryItem() */

void __thiscall LimitLotteryItem::~LimitLotteryItem(LimitLotteryItem *this)

{
  ~LimitLotteryItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LimitLotteryItem::~LimitLotteryItem() */

void __thiscall LimitLotteryItem::~LimitLotteryItem(LimitLotteryItem *this)

{
  ~LimitLotteryItem(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryItem::LimitLotteryItem(int) */

void __thiscall LimitLotteryItem::LimitLotteryItem(LimitLotteryItem *this,int param_1)

{
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_066ddff0;
  *(undefined ***)(this + 0x198) = &PTR__LimitLotteryItem_066de360;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_066de388;
  Sexy::Insets::Insets((Insets *)(this + 0x308));
  Sexy::Insets::Insets((Insets *)(this + 0x318));
  *(undefined4 *)(this + 0x32c) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x330));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x338));
  std::string::string((string *)(this + 0x340),"");
  nop();
  FUN_05478178(this + 0x348,&DAT_056f11a8,aCStack_18);
  nop();
  *(undefined8 *)(this + 0x350) = 0;
  LotteryItemInfo::LotteryItemInfo((LotteryItemInfo *)(this + 0x358));
  this[0x328] = (LimitLotteryItem)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryItem::Draw(Sexy::Graphics*) */

void __thiscall LimitLotteryItem::Draw(LimitLotteryItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Image *pIVar10;
  ResourceInfo *pRVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *pSVar13;
  undefined8 uVar14;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  long lVar15;
  CachedUIResourcePtr<Sexy::Image> *this_02;
  float fVar16;
  float fVar17;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe548);
  Sexy::Graphics::DrawImage(param_1,pIVar10,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x330));
  if (pRVar11 != (ResourceInfo *)0x0) {
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x330));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar11,*(int *)(this + 0x308),*(int *)(this + 0x30c),
               *(int *)(this + 0x310),*(int *)(this + 0x314));
  }
  iVar8 = *(int *)(this + 0x32c);
  if (iVar8 == 2) {
    bVar3 = std::operator!=("",(string *)(this + 0x340));
    if (!bVar3) {
      iVar8 = *(int *)(this + 0x32c);
      goto LAB_039905e0;
    }
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x340));
    fVar17 = ((float)*(int *)(this + 800) * 0.9) / (float)*(int *)(this_01 + 0x28);
    fVar16 = ((float)*(int *)(this + 0x324) * 0.9) / (float)*(int *)(this_01 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
    GetImageOffset(&local_38,(RtId *)aCStack_18);
    Sexy::RtId::~RtId((RtId *)aCStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace(&local_38,&local_34,1536.0);
    Sexy::Insets::Insets
              (aIStack_28,
               (int)((float)*(int *)(this + 0x318) + (float)*(int *)(this_01 + 0x30) * fVar17),
               (int)((float)*(int *)(this + 0x31c) + (float)*(int *)(this_01 + 0x34) * fVar16),
               (int)(fVar17 * (float)*(int *)(this_01 + 0x28)),
               (int)(fVar16 * (float)*(int *)(this_01 + 0x2c)));
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar11,(TRect *)aIStack_28,(TRect *)(this_01 + 0x20));
    Sexy::Insets::Insets
              ((Insets *)aCStack_18,
               (int)((float)*(int *)(this + 0x318) + (float)*(int *)(this_01 + 0x18) * fVar17),
               (int)((float)*(int *)(this + 0x31c) + (float)*(int *)(this_01 + 0x1c) * fVar16),
               (int)(fVar17 * (float)*(int *)(this_01 + 0x10)),
               (int)(fVar16 * (float)*(int *)(this_01 + 0x14)));
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar3) {
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar15 + 0x48));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar11,(TRect *)aCStack_18,(TRect *)(this_01 + 8))
      ;
    }
  }
  else {
LAB_039905e0:
    if ((iVar8 - 7U < 2) && (bVar3 = std::operator!=("",(string *)(this + 0x340)), bVar3)) {
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x338));
      if (pRVar11 != (ResourceInfo *)0x0) {
        Sexy::Insets::Insets
                  ((Insets *)aCStack_18,*(int *)(this + 0x318),*(int *)(this + 0x31c),
                   *(int *)(this + 800),*(int *)(this + 0x324));
        pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x338));
        DrawAdaptiveImage(param_1,(Insets *)aCStack_18,pRVar11);
      }
    }
    else {
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x338));
      if (pRVar11 != (ResourceInfo *)0x0) {
        pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x338));
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar11,*(int *)(this + 0x318),*(int *)(this + 0x31c),
                   *(int *)(this + 800),*(int *)(this + 0x324));
      }
    }
  }
  if (*(int *)(this + 0x360) < 2) goto LAB_03990788;
  Sexy::StrFormat(L"%d",auStack_40);
  if (*(int *)(this + 0x32c) == 1) {
    if (*(int *)(this + 0x360) == 2) {
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abeb58;
    }
    else {
      if (*(int *)(this + 0x360) != 3) goto LAB_03990780;
      this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe708;
    }
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
    pLVar12 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pSVar13 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
    Sexy::Graphics::DrawImage(param_1,pIVar10,0,0,iVar8,iVar9);
  }
  else {
    iVar8 = *(int *)(this + 800);
    iVar9 = *(int *)(this + 0x318);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe878);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar1 = *(int *)(this + 0x324);
    iVar2 = *(int *)(this + 0x31c);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe878);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar13);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe878);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe878);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
    Sexy::Insets::Insets
              ((Insets *)&local_38,iVar9 + (iVar8 - iVar4) / 2,(iVar2 + iVar1) - iVar5,iVar6,iVar7);
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe878);
    Sexy::Graphics::DrawImage(param_1,pIVar10,local_38,local_34);
    iVar8 = FUN_0398a1f8(10);
    iVar9 = FUN_0398a1f8(0x14);
    Sexy::Insets::Insets
              (aIStack_28,local_38 - iVar8,local_34 - iVar8,local_30 + iVar9,iVar9 + local_2c);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_40,aIStack_28,uVar14,aCStack_18,5,1);
  }
LAB_03990780:
  FUN_05476c50(auStack_40);
LAB_03990788:
  if (this[0x328] != (LimitLotteryItem)0x0) {
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe878);
    Sexy::Graphics::DrawImage(param_1,pIVar10,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe4f8);
    Sexy::Graphics::DrawImage(param_1,pIVar10,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryItem::ButtonPress(int) */

void LimitLotteryItem::ButtonPress(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  long lVar5;
  LimitLotteryItemTipUI *this_01;
  int iVar6;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  plVar4 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  (**(code **)(*plVar4 + 0xd0))(&local_20);
  this = (LotteryResultProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe378);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
  iVar6 = (int)((float)iVar2 + (float)iVar2);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abe378);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  lVar5 = plVar4[10];
  iVar3 = FUN_0398a1f8(5);
  Sexy::Insets::Insets
            (aIStack_18,local_20 + ((int)lVar5 - iVar6) / 2,
             (local_1c - (int)((float)iVar2 * 0.5)) + iVar3,iVar6,(int)((float)iVar2 * 0.5));
  lVar5 = plVar4[0x6a];
  if (lVar5 == 0) {
    this_01 = ::operator_new(0xe0);
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)(this_01 + 8) = 0;
    *(undefined8 *)(this_01 + 0x10) = 0;
    *(undefined8 *)(this_01 + 0x18) = 0;
    *(undefined8 *)(this_01 + 0x20) = 0;
    *(undefined8 *)(this_01 + 0x28) = 0;
    *(undefined8 *)(this_01 + 0x30) = 0;
    *(undefined8 *)(this_01 + 0x38) = 0;
    *(undefined8 *)(this_01 + 0x40) = 0;
    *(undefined8 *)(this_01 + 0x48) = 0;
    *(undefined8 *)(this_01 + 0x50) = 0;
    *(undefined8 *)(this_01 + 0x58) = 0;
    *(undefined8 *)(this_01 + 0x60) = 0;
    *(undefined8 *)(this_01 + 0x68) = 0;
    *(undefined8 *)(this_01 + 0x70) = 0;
    *(undefined8 *)(this_01 + 0x78) = 0;
    *(undefined8 *)(this_01 + 0x80) = 0;
    *(undefined8 *)(this_01 + 0x88) = 0;
    *(undefined8 *)(this_01 + 0x90) = 0;
    *(undefined8 *)(this_01 + 0x98) = 0;
    *(undefined8 *)(this_01 + 0xa0) = 0;
    *(undefined8 *)(this_01 + 0xa8) = 0;
    *(undefined8 *)(this_01 + 0xb0) = 0;
    *(undefined8 *)(this_01 + 0xb8) = 0;
    *(undefined8 *)(this_01 + 0xc0) = 0;
    *(undefined8 *)(this_01 + 200) = 0;
    *(undefined8 *)(this_01 + 0xd0) = 0;
    *(undefined8 *)(this_01 + 0xd8) = 0;
    LimitLotteryItemTipUI::LimitLotteryItemTipUI(this_01);
    uVar1 = *(uint *)(this_01 + 0x60);
    plVar4[0x6a] = (long)this_01;
    *(uint *)(this_01 + 0x60) = uVar1 | 0x10;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),plVar4[0x6a]);
    lVar5 = plVar4[0x6a];
  }
  PuzzleTip::SetTip(lVar5,plVar4 + 0x69);
  (**(code **)(*(long *)plVar4[0x6a] + 0x1a0))((long *)plVar4[0x6a],aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LimitLotteryItem::ButtonPress(int) */

void __thiscall LimitLotteryItem::ButtonPress(LimitLotteryItem *this,int param_1)

{
  ButtonPress((int)this + -0x300);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryItem::SetlotteryInfo(LimitLotteryItemInfo&, std::vector<int, std::allocator<int> >
   const&) */

void __thiscall
LimitLotteryItem::SetlotteryInfo
          (LimitLotteryItem *this,LimitLotteryItemInfo *param_1,vector *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  RtWeakPtr<PowerPropertySheet> *this_01;
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  wchar_t *pwVar9;
  PlantAccessoryMgr *this_02;
  string *psVar10;
  int *piVar11;
  undefined4 uVar12;
  size_t __n;
  string asStack_88 [8];
  wstring awStack_80 [8];
  undefined8 local_78;
  int local_70;
  int local_6c;
  undefined1 auStack_60 [16];
  string asStack_50 [8];
  wstring awStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  int local_20;
  size_t local_8;
  
  uVar12 = *(undefined4 *)(param_1 + 4);
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x330);
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x360) = *(undefined4 *)(param_1 + 8);
  __n = ___stack_chk_guard;
  this_01 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x338);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x35c) = uVar12;
  *(undefined4 *)(this + 0x358) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::string::append((string *)(this + 0x340),"",__n);
  iVar4 = FUN_0398a1f8(3);
  iVar5 = FUN_0398a1f8(6);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4,iVar4,*(int *)(this + 0x50) - iVar5,
             *(int *)(this + 0x54) - iVar5);
  *(undefined8 *)(this + 0x308) = local_40;
  *(undefined8 *)(this + 0x310) = uStack_38;
  iVar6 = FUN_0398a1f8(3);
  iVar4 = *(int *)(this + 0x308);
  iVar5 = *(int *)(this + 0x30c);
  iVar7 = FUN_0398a1f8(6);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar6 + iVar4,iVar6 + iVar5,*(int *)(this + 0x310) - iVar7,
             *(int *)(this + 0x314) - iVar7);
  iVar4 = *(int *)(this + 0x35c);
  *(undefined8 *)(this + 0x318) = local_40;
  *(undefined8 *)(this + 800) = uStack_38;
  if (iVar4 == 0xfad) {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06abe3a0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06abeb80);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    pwVar9 = L"[COIN_STORE]";
    uVar12 = 10;
  }
  else if (iVar4 == 0x59fd) {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06abe570);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06abeaa8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    pwVar9 = L"[CUP]";
    uVar12 = 0xb;
  }
  else {
    if (iVar4 != 0xbc0) {
      GetGameItemInfo(iVar4,0x7fffffff,0);
      if (local_70 != 0) {
        if (local_6c == 8) {
          *(undefined4 *)(this + 0x32c) = 4;
          iVar4 = AvatarChipNameMapperServerID::GetInstance();
LAB_039944b4:
          iVar5 = 0;
          NameMapperBase::GetNameForId(iVar4);
          psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_78);
          if (cVar2 != '\0') {
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
            iVar5 = *(int *)(lVar8 + 0xd0);
          }
          lVar8 = StringHelper::ToImage(asStack_50,false);
          if (lVar8 == 0) {
            Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
          }
          else {
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)this_01,(RtId *)&local_40);
            Sexy::RtId::~RtId((RtId *)&local_40);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
          std::string::~string((string *)awStack_80);
        }
        else if (local_6c < 9) {
          if (local_6c == 2) {
            iVar5 = 0;
            *(undefined4 *)(this + 0x32c) = 2;
            iVar4 = PlantChipNameMapperServerID::GetInstance();
            NameMapperBase::GetNameForId(iVar4);
            psVar10 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
            cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_40);
            if (cVar2 != '\0') {
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
              iVar5 = *(int *)(lVar8 + 0xd0);
            }
            thunk_FUN_05475e00((string *)(this + 0x340),auStack_60);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            std::string::~string((string *)&local_78);
          }
          else {
            if (local_6c == 4) {
              *(undefined4 *)(this + 0x32c) = 3;
              iVar4 = AvatarNameMapperServerID::GetInstance();
              goto LAB_039944b4;
            }
            if (local_6c != 1) goto LAB_039943a8;
            *(undefined4 *)(this + 0x32c) = 1;
            iVar5 = 0;
            iVar4 = PlantNameMapperServerID::GetInstance();
            NameMapperBase::GetNameForId(iVar4);
            psVar10 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
            cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)awStack_80);
            if (cVar2 != '\0') {
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_80);
              iVar5 = *(int *)(lVar8 + 0xd0);
            }
            lVar8 = StringHelper::ToImage(asStack_50,false);
            if (lVar8 == 0) {
              Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
            }
            else {
              Sexy::BaseResource::GetRtId();
              Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                        ((RtWeakPtr<CthulhuPropertySheet> *)this_01,(RtId *)&local_40);
              Sexy::RtId::~RtId((RtId *)&local_40);
            }
            local_78 = FUN_0398deac(*(undefined8 *)param_2);
            local_40 = FUN_0398defc(*(undefined8 *)(param_2 + 8));
            while (bVar3 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_78,(__normal_iterator *)&local_40)
                  , bVar3) {
              piVar11 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                         ((exception_ptr *)&local_78);
              if (*piVar11 == *(int *)(param_1 + 4)) {
                this[0x328] = (LimitLotteryItem)0x1;
                break;
              }
              eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                        ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_78);
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_80);
            std::string::~string(asStack_88);
          }
        }
        else if (local_6c == 0x20) {
          *(undefined4 *)(this + 0x32c) = 6;
          iVar4 = PlantAccessoryPieceMapper::GetInstance();
LAB_03994324:
          NameMapperBase::GetNameForId(iVar4);
          this_02 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
          PlantAccessoryMgr::GetAccessoryUIInfo(this_02,(string *)awStack_80);
          iVar5 = local_20 + 1;
          lVar8 = StringHelper::ToImage(asStack_50,false);
          if (lVar8 == 0) {
            Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
          }
          else {
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)this_01,(RtId *)&local_78);
            Sexy::RtId::~RtId((RtId *)&local_78);
          }
          TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_40);
          std::string::~string((string *)awStack_80);
        }
        else if (local_6c < 0x21) {
          if (local_6c == 0x10) {
            *(undefined4 *)(this + 0x32c) = 5;
            iVar4 = PlantAccessoryInfoMapper::GetInstance();
            goto LAB_03994324;
          }
LAB_039943a8:
          iVar5 = 0;
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        }
        else if (local_6c == 0x1000) {
          *(undefined4 *)(this + 0x32c) = 7;
          lVar8 = NewAvatar::GetAvatarTinyImage(*(int *)(this + 0x35c));
          if (lVar8 == 0) {
            iVar5 = 0;
            Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
          }
          else {
LAB_039940f0:
            iVar5 = 0;
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)this_01,(RtId *)&local_40);
            Sexy::RtId::~RtId((RtId *)&local_40);
          }
        }
        else {
          if (local_6c != 0x2000) goto LAB_039943a8;
          *(undefined4 *)(this + 0x32c) = 8;
          lVar8 = NewAvatar::GetNewAvatarPieceImage(*(int *)(this + 0x35c));
          if (lVar8 != 0) goto LAB_039940f0;
          iVar5 = 0;
          Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
        }
        if (local_6c == 1) {
          LimitLotGetFrameImageByRare(iVar5);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          FUN_05478178(awStack_80,L"[LEVEL_OF_PLANT]",asStack_88);
          TodReplaceNumberString(awStack_80,L"{PLANT_LEVEL}",*(int *)(this + 0x360));
          std::operator+((wstring *)&local_78,awStack_48);
          FUN_054766c8(this + 0x348,
                       (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
          FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
          FUN_05476c50((wstring *)&local_78);
          FUN_05476c50(awStack_80);
          nop();
        }
        else {
          LimitLotGetFrameImageByRare(iVar5);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          thunk_FUN_05477b9c(this + 0x348,awStack_48);
          Sexy::StrFormat(L" x %d",(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *
                                   )&local_40,(ulong)*(uint *)(this + 0x360));
          thunk_FUN_05477668(this + 0x348,
                             (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             &local_40);
          FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
        }
      }
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_70);
      goto LAB_03994220;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06abeaf8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06abe768);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    pwVar9 = L"[GEM_STORE]";
    uVar12 = 9;
  }
  *(undefined4 *)(this + 0x32c) = uVar12;
  TodStringTranslate(pwVar9);
  FUN_054766c8(this + 0x348,
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  Sexy::StrFormat(L" x %d",(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                           &local_40,(ulong)*(uint *)(this + 0x360));
  thunk_FUN_05477668(this + 0x348,
                     (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
LAB_03994220:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

