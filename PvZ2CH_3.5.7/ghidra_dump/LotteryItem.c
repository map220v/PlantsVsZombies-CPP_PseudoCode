// Class: LotteryItem


/* LotteryItem::KillTip() */

void __thiscall LotteryItem::KillTip(LotteryItem *this)

{
  if (*(long *)(this + 0x340) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x340));
    *(undefined8 *)(this + 0x340) = 0;
  }
  return;
}


/* LotteryItem::GetIndex() */

undefined4 __thiscall LotteryItem::GetIndex(LotteryItem *this)

{
  return *(undefined4 *)(this + 0x358);
}


/* LotteryItem::GetBonusId() */

undefined4 __thiscall LotteryItem::GetBonusId(LotteryItem *this)

{
  return *(undefined4 *)(this + 0x35c);
}


/* LotteryItem::GetQuantity() */

undefined4 __thiscall LotteryItem::GetQuantity(LotteryItem *this)

{
  return *(undefined4 *)(this + 0x360);
}


/* LotteryItem::IsPlantPieces() */

LotteryItem __thiscall LotteryItem::IsPlantPieces(LotteryItem *this)

{
  return this[0x32c];
}


/* LotteryItem::GetBonusImagePtr() */

RtWeakPtr<Sexy::SoundResource> * LotteryItem::GetBonusImagePtr(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x338));
  return in_x8;
}


/* LotteryItem::GetBonusName() */

undefined8 LotteryItem::GetBonusName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* LotteryItem::GetBonusDes() */

undefined8 LotteryItem::GetBonusDes(void)

{
  undefined8 in_x8;
  
  FUN_05477b24();
  return in_x8;
}


/* LotteryItem::ButtonDepress(int) */

void LotteryItem::ButtonDepress(int param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(long *)(uVar1 + 0x340) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(uVar1 + 0x340));
    *(undefined8 *)(uVar1 + 0x340) = 0;
  }
  return;
}


/* non-virtual thunk to LotteryItem::ButtonDepress(int) */

void __thiscall LotteryItem::ButtonDepress(LotteryItem *this,int param_1)

{
  ButtonDepress((int)this + -0x300);
  return;
}


/* LotteryItem::ButtonMouseLeave(int) */

void LotteryItem::ButtonMouseLeave(int param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(long *)(uVar1 + 0x340) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(uVar1 + 0x340));
    *(undefined8 *)(uVar1 + 0x340) = 0;
  }
  return;
}


/* non-virtual thunk to LotteryItem::ButtonMouseLeave(int) */

void __thiscall LotteryItem::ButtonMouseLeave(LotteryItem *this,int param_1)

{
  ButtonMouseLeave((int)this + -0x300);
  return;
}


/* LotteryItem::~LotteryItem() */

void __thiscall LotteryItem::~LotteryItem(LotteryItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06978880;
  *(undefined ***)(this + 0x198) = &PTR__LotteryItem_06978bf0;
  *(undefined **)(this + 0x300) = &DAT_06978c18;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x350);
  std::string::~string((string *)(this + 0x348));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x338));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x330));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to LotteryItem::~LotteryItem() */

void __thiscall LotteryItem::~LotteryItem(LotteryItem *this)

{
  ~LotteryItem(this + -0x198);
  return;
}


/* LotteryItem::~LotteryItem() */

void __thiscall LotteryItem::~LotteryItem(LotteryItem *this)

{
  ~LotteryItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LotteryItem::~LotteryItem() */

void __thiscall LotteryItem::~LotteryItem(LotteryItem *this)

{
  ~LotteryItem(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryItem::LotteryItem(int) */

void __thiscall LotteryItem::LotteryItem(LotteryItem *this,int param_1)

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
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined ***)this = &PTR_GetClass_06978880;
  *(undefined ***)(this + 0x198) = &PTR__LotteryItem_06978bf0;
  *(undefined **)(this + 0x300) = &DAT_06978c18;
  Sexy::Insets::Insets((Insets *)(this + 0x30c));
  Sexy::Insets::Insets((Insets *)(this + 0x31c));
  this[0x32c] = (LotteryItem)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x330));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x338));
  *(undefined8 *)(this + 0x340) = 0;
  std::string::string((string *)(this + 0x348),"");
  nop();
  FUN_05478178(this + 0x350,&DAT_056f11a8,aCStack_18);
  nop();
  LotteryItemInfo::LotteryItemInfo((LotteryItemInfo *)(this + 0x358));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryItem::ButtonPress(int) */

void LotteryItem::ButtonPress(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  long lVar5;
  LotteryItemTipUI *this_01;
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
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a8e0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this);
  iVar6 = (int)((float)iVar2 + (float)iVar2);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a8e0);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  lVar5 = plVar4[10];
  iVar3 = FUN_04bbb930(5);
  Sexy::Insets::Insets
            (aIStack_18,local_20 + ((int)lVar5 - iVar6) / 2,
             (local_1c - (int)((float)iVar2 * 0.5)) + iVar3,iVar6,(int)((float)iVar2 * 0.5));
  lVar5 = plVar4[0x68];
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
    LotteryItemTipUI::LotteryItemTipUI(this_01);
    uVar1 = *(uint *)(this_01 + 0x60);
    plVar4[0x68] = (long)this_01;
    *(uint *)(this_01 + 0x60) = uVar1 | 0x10;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),plVar4[0x68]);
    lVar5 = plVar4[0x68];
  }
  PuzzleTip::SetTip(lVar5,plVar4 + 0x6a);
  (**(code **)(*(long *)plVar4[0x68] + 0x1a0))((long *)plVar4[0x68],aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LotteryItem::ButtonPress(int) */

void __thiscall LotteryItem::ButtonPress(LotteryItem *this,int param_1)

{
  ButtonPress((int)this + -0x300);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryItem::Draw(Sexy::Graphics*) */

void __thiscall LotteryItem::Draw(LotteryItem *this,Graphics *param_1)

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
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a260);
  Sexy::Graphics::DrawImage(param_1,pIVar10,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x330));
  if (pRVar11 != (ResourceInfo *)0x0) {
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x330));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar11,*(int *)(this + 0x30c),*(int *)(this + 0x310),
               *(int *)(this + 0x314),*(int *)(this + 0x318));
  }
  if (this[0x32c] != (LotteryItem)0x0) {
    bVar3 = std::operator!=("",(string *)(this + 0x348));
    if (bVar3) {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      this_01 = (RtWeakPtr *)
                SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x348));
      fVar17 = ((float)*(int *)(this + 0x324) * 0.9) / (float)*(int *)(this_01 + 0x28);
      fVar16 = ((float)*(int *)(this + 0x328) * 0.9) / (float)*(int *)(this_01 + 0x2c);
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
      GetImageOffset(&local_38,(RtId *)aCStack_18);
      Sexy::RtId::~RtId((RtId *)aCStack_18);
      UIWidget::ConvertPSDImageOffsetToUISpace(&local_38,&local_34,1536.0);
      Sexy::Insets::Insets
                (aIStack_28,
                 (int)((float)*(int *)(this + 0x31c) + (float)*(int *)(this_01 + 0x30) * fVar17),
                 (int)((float)*(int *)(this + 800) + (float)*(int *)(this_01 + 0x34) * fVar16),
                 (int)(fVar17 * (float)*(int *)(this_01 + 0x28)),
                 (int)(fVar16 * (float)*(int *)(this_01 + 0x2c)));
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar11,(TRect *)aIStack_28,(TRect *)(this_01 + 0x20));
      Sexy::Insets::Insets
                ((Insets *)aCStack_18,
                 (int)((float)*(int *)(this + 0x31c) + (float)*(int *)(this_01 + 0x18) * fVar17),
                 (int)((float)*(int *)(this + 800) + (float)*(int *)(this_01 + 0x1c) * fVar16),
                 (int)(fVar17 * (float)*(int *)(this_01 + 0x10)),
                 (int)(fVar16 * (float)*(int *)(this_01 + 0x14)));
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar3) {
        lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar15 + 0x48));
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar11,(TRect *)aCStack_18,(TRect *)(this_01 + 8));
      }
      goto LAB_04bbe004;
    }
  }
  pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x338));
  if (pRVar11 != (ResourceInfo *)0x0) {
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x338));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar11,*(int *)(this + 0x31c),*(int *)(this + 800),
               *(int *)(this + 0x324),*(int *)(this + 0x328));
  }
LAB_04bbe004:
  if (1 < *(int *)(this + 0x360)) {
    Sexy::StrFormat(L"%d",auStack_40);
    iVar8 = *(int *)(this + 0x324);
    iVar9 = *(int *)(this + 0x31c);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a7e0);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar1 = *(int *)(this + 0x328);
    iVar2 = *(int *)(this + 800);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a7e0);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar13);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a7e0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a7e0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
    Sexy::Insets::Insets
              ((Insets *)&local_38,iVar9 + (iVar8 - iVar4) / 2,(iVar2 + iVar1) - iVar5,iVar6,iVar7);
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a7e0);
    Sexy::Graphics::DrawImage(param_1,pIVar10,local_38,local_34);
    iVar8 = FUN_04bbb930(10);
    iVar9 = FUN_04bbb930(0x14);
    Sexy::Insets::Insets
              (aIStack_28,local_38 - iVar8,local_34 - iVar8,local_30 + iVar9,iVar9 + local_2c);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_40,aIStack_28,uVar14,aCStack_18,5,1);
    FUN_05476c50(auStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotteryItem::SetlotteryInfo(LotteryItemInfo&, int) */

void __thiscall LotteryItem::SetlotteryInfo(LotteryItem *this,LotteryItemInfo *param_1,int param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  RtWeakPtr<PowerPropertySheet> *this_01;
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  string *psVar9;
  PlantAccessoryMgr *this_02;
  long lVar10;
  size_t __n;
  string asStack_80 [8];
  string asStack_78 [8];
  int local_70;
  int local_6c;
  undefined1 auStack_60 [16];
  string asStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  int local_20;
  size_t local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)param_1;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x330);
  *(undefined4 *)(this + 0x360) = *(undefined4 *)(param_1 + 8);
  __n = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  this_01 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x338);
  *(undefined4 *)(this + 0x35c) = uVar1;
  *(undefined4 *)(this + 0x358) = uVar2;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  this[0x32c] = (LotteryItem)0x0;
  std::string::append((string *)(this + 0x348),"",__n);
  iVar4 = FUN_04bbb930(3);
  iVar5 = FUN_04bbb930(6);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4,iVar4,*(int *)(this + 0x50) - iVar5,
             *(int *)(this + 0x54) - iVar5);
  *(undefined8 *)(this + 0x30c) = local_40;
  *(undefined8 *)(this + 0x314) = uStack_38;
  iVar6 = FUN_04bbb930(3);
  iVar4 = *(int *)(this + 0x30c);
  iVar5 = *(int *)(this + 0x310);
  iVar7 = FUN_04bbb930(6);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar6 + iVar4,iVar6 + iVar5,*(int *)(this + 0x314) - iVar7,
             *(int *)(this + 0x318) - iVar7);
  iVar4 = *(int *)(this + 0x35c);
  *(undefined8 *)(this + 0x31c) = local_40;
  *(undefined8 *)(this + 0x324) = uStack_38;
  if (iVar4 == 0xfad) {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8a028);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8aa28);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    pwVar8 = L"[COIN_STORE]";
  }
  else {
    if (iVar4 == 0x1394) {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8a2f8);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      GetDollImage(param_2);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      TodStringTranslate(L"[GEILIVABLE_LOTTERY_SPECIAL_BONUS]");
      FUN_054766c8(this + 0x350,
                   (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
      FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
      goto LAB_04bc1308;
    }
    if (iVar4 != 0xbc0) {
      GetGameItemInfo(iVar4,0x7fffffff,0);
      if (local_70 != 0) {
        if (local_6c == 8) {
          lVar10 = StringHelper::ToImage(asStack_50,false);
          if (lVar10 == 0) {
            iVar4 = 1;
            Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
          }
          else {
            iVar4 = 1;
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)this_01,(RtId *)&local_40);
            Sexy::RtId::~RtId((RtId *)&local_40);
          }
        }
        else if (local_6c == 0x20) {
          iVar4 = PlantAccessoryPieceMapper::GetInstance();
          NameMapperBase::GetNameForId(iVar4);
          this_02 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
          PlantAccessoryMgr::GetAccessoryUIInfo(this_02,asStack_80);
          iVar4 = local_20 + 1;
          lVar10 = StringHelper::ToImage(asStack_50,false);
          if (lVar10 == 0) {
            Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
          }
          else {
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)this_01,(RtId *)asStack_78);
            Sexy::RtId::~RtId((RtId *)asStack_78);
          }
          TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_40);
          std::string::~string(asStack_80);
        }
        else if (local_6c == 2) {
          this[0x32c] = (LotteryItem)0x1;
          iVar4 = 0;
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          iVar5 = PlantChipNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar5);
          psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
          cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_40);
          if (cVar3 != '\0') {
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            iVar4 = *(int *)(lVar10 + 0xd0);
          }
          thunk_FUN_05475e00((string *)(this + 0x348),auStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          std::string::~string(asStack_78);
        }
        else {
          iVar4 = 0;
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        }
        GetFrameImageByRare(iVar4);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        thunk_FUN_05477b9c(this + 0x350,auStack_48);
        Sexy::StrFormat(L" x %d",(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                                 &local_40,(ulong)*(uint *)(this + 0x360));
        thunk_FUN_05477668(this + 0x350,
                           (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                           &local_40);
        FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
      }
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_70);
      goto LAB_04bc1308;
    }
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8a958);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8a560);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_01,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    pwVar8 = L"[GEM_STORE]";
  }
  TodStringTranslate(pwVar8);
  FUN_054766c8(this + 0x350,
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  Sexy::StrFormat(L" x %d",(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                           &local_40,(ulong)*(uint *)(this + 0x360));
  thunk_FUN_05477668(this + 0x350,
                     (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
  FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_40);
LAB_04bc1308:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

