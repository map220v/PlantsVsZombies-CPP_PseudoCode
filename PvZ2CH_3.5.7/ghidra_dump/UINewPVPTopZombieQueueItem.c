// Class: UINewPVPTopZombieQueueItem


/* UINewPVPTopZombieQueueItem::~UINewPVPTopZombieQueueItem() */

void __thiscall
UINewPVPTopZombieQueueItem::~UINewPVPTopZombieQueueItem(UINewPVPTopZombieQueueItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0664eb90;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPTopZombieQueueItem_0664ed30;
  std::string::~string((string *)(this + 0x168));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to UINewPVPTopZombieQueueItem::~UINewPVPTopZombieQueueItem() */

void __thiscall
UINewPVPTopZombieQueueItem::~UINewPVPTopZombieQueueItem(UINewPVPTopZombieQueueItem *this)

{
  ~UINewPVPTopZombieQueueItem(this + -0x10);
  return;
}


/* UINewPVPTopZombieQueueItem::~UINewPVPTopZombieQueueItem() */

void __thiscall
UINewPVPTopZombieQueueItem::~UINewPVPTopZombieQueueItem(UINewPVPTopZombieQueueItem *this)

{
  ~UINewPVPTopZombieQueueItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPTopZombieQueueItem::~UINewPVPTopZombieQueueItem() */

void __thiscall
UINewPVPTopZombieQueueItem::~UINewPVPTopZombieQueueItem(UINewPVPTopZombieQueueItem *this)

{
  ~UINewPVPTopZombieQueueItem(this + -0x10);
  return;
}


/* UINewPVPTopZombieQueueItem::setTypeName(std::string) */

void UINewPVPTopZombieQueueItem::setTypeName(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0x168);
  return;
}


/* UINewPVPTopZombieQueueItem::setEmpty() */

void __thiscall UINewPVPTopZombieQueueItem::setEmpty(UINewPVPTopZombieQueueItem *this)

{
  size_t in_x2;
  
  std::string::append((string *)(this + 0x168),"",in_x2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueueItem::UINewPVPTopZombieQueueItem() */

void __thiscall
UINewPVPTopZombieQueueItem::UINewPVPTopZombieQueueItem(UINewPVPTopZombieQueueItem *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0664eb90;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPTopZombieQueueItem_0664ed30;
  std::string::string((string *)(this + 0x168),"");
  nop();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x170) = 1;
  *(undefined4 *)(this + 0x178) = 0xffffffff;
  *(undefined4 *)(this + 0x174) = 0x3f800000;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPTopZombieQueueItem::StaticNew() */

UINewPVPTopZombieQueueItem * UINewPVPTopZombieQueueItem::StaticNew(void)

{
  UINewPVPTopZombieQueueItem *this;
  
  this = ::operator_new(0x180);
  UINewPVPTopZombieQueueItem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueueItem::StaticClassInit() */

void UINewPVPTopZombieQueueItem::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"UINewPVPTopZombieQueueItem");
    (*pcVar2)(plVar1,asStack_10,FUN_0351f06c,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPTopZombieQueueItem::StaticGetClass() */

long * UINewPVPTopZombieQueueItem::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UINewPVPTopZombieQueueItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPTopZombieQueueItem::GetClass() const */

long * UINewPVPTopZombieQueueItem::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UINewPVPTopZombieQueueItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueueItem::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPTopZombieQueueItem::Draw(UINewPVPTopZombieQueueItem *this,Graphics *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  long lVar8;
  LotteryResultProgressBar *pLVar9;
  ResourceInfo *pRVar10;
  SalesProgressBar *this_02;
  float fVar11;
  float fVar12;
  float fVar13;
  GraphicsAutoState aGStack_48 [8];
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  cVar3 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar3 != '\0') {
    cVar3 = FUN_0547419c((string *)(this + 0x168));
    if (cVar3 == '\0') {
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
      UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      std::string::string((string *)&local_18,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
      this_01 = (RtWeakPtr *)
                SeedPacketUtils::GetZombiePacketRenderData
                          (this_00,(string *)(this + 0x168),(string *)&local_18,
                           *(int *)(this + 0x178));
      std::string::~string((string *)&local_18);
      nop();
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar4) {
        fVar13 = *(float *)(this + 0x174);
        Sexy::Insets::Insets((Insets *)&local_38,(Insets *)(this_01 + 0x20));
        Sexy::Insets::Insets
                  ((Insets *)&local_28,(int)((float)*(int *)(this_01 + 0x30) * fVar13),
                   (int)((float)*(int *)(this_01 + 0x34) * fVar13),
                   (int)((float)(int)local_30 * fVar13),(int)((float)local_30._4_4_ * fVar13));
        iVar5 = FUN_0351d4b4(*(undefined4 *)(this + 0x3c));
        iVar6 = FUN_0351e4e8(10);
        local_28 = CONCAT44((int)((float)(iVar5 - uStack_20._4_4_) - fVar13 * (float)iVar6),
                            (undefined4)local_28);
        pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
        Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,(TRect *)&local_28,(TRect *)&local_38);
        local_38 = *(undefined8 *)(this_01 + 8);
        uVar1 = *(undefined8 *)(this_01 + 0x10);
        fVar13 = fVar13 * 0.8;
        local_30._0_4_ = (int)uVar1;
        local_30._4_4_ = (int)((ulong)uVar1 >> 0x20);
        fVar11 = (float)(int)local_30;
        fVar12 = (float)local_30._4_4_;
        local_30 = uVar1;
        Sexy::Insets::Insets
                  ((Insets *)&local_18,(int)((float)*(int *)(this_01 + 0x18) * fVar13),
                   (int)((float)*(int *)(this_01 + 0x1c) * fVar13),(int)(fVar11 * fVar13),
                   (int)(fVar12 * fVar13));
        local_28 = local_18;
        uStack_20 = uStack_10;
        iVar5 = FUN_0351d4b4(*(undefined4 *)(this + 0x3c));
        iVar6 = FUN_0351e4e8(0x14);
        local_28 = CONCAT44((int)((float)(iVar5 - uStack_20._4_4_) - fVar13 * (float)iVar6),
                            (undefined4)local_28);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar8 + 0x48));
        Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,(TRect *)&local_28,(TRect *)&local_38);
      }
      Sexy::StrFormat("IMAGE_UI_PACKETS_LEVEL_%d",asStack_40,(ulong)*(uint *)(this + 0x170));
      StringHelper::ToImage(asStack_40,false);
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_38,(RtWeakPtrBase *)&local_18);
      Sexy::RtId::~RtId((RtId *)&local_18);
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_38);
      if (bVar4) {
        Sexy::Insets::Insets((Insets *)&local_18);
        Sexy::Point::Point((Point *)&local_28);
        iVar5 = FUN_0351d4a8(*(undefined4 *)(this + 0x38));
        pLVar9 = (LotteryResultProgressBar *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
        local_28 = (ulong)(uint)(int)((float)iVar5 - *(float *)(this + 0x174) * (float)iVar6);
        pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_38);
        uVar2 = local_28;
        iVar5 = local_28._4_4_;
        pLVar9 = (LotteryResultProgressBar *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
        fVar12 = *(float *)(this + 0x174);
        this_02 = (SalesProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        iVar7 = SalesProgressBar::GetCurrentLevel(this_02);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar10,(int)uVar2,iVar5,(int)((float)iVar6 * fVar12),
                   (int)((float)iVar7 * *(float *)(this + 0x174)));
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      std::string::~string(asStack_40);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPTopZombieQueueItem::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPTopZombieQueueItem::Draw(UINewPVPTopZombieQueueItem *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

