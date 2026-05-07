// Class: HotUIMultiImage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIMultiImage::StaticClassInit() */

void HotUIMultiImage::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIMultiImage");
    (*pcVar2)(plVar1,asStack_10,FUN_03648550,0x2b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIMultiImage::StaticGetClass() */

long * HotUIMultiImage::StaticGetClass(void)

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
  uVar2 = HotUIImage::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIMultiImage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIMultiImage::onDraw(Sexy::Graphics*) */

void __thiscall HotUIMultiImage::onDraw(HotUIMultiImage *this,Graphics *param_1)

{
  ulong uVar1;
  HotUIZPSMeterProperties *pHVar2;
  DynamicPadding *extraout_x1;
  undefined1 auStack_60 [16];
  RtWeakPtr aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_03648278(*(undefined8 *)(this + 0x298),*(undefined8 *)(this + 0x2a0));
  if (2 < uVar1) {
    pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
    HotUIHelpers::GetInsetsFromDynamicPadding((HotUIHelpers *)(pHVar2 + 0x150),extraout_x1);
    UIImageDrawInfo::UIImageDrawInfo
              ((UIImageDrawInfo *)aRStack_50,this + 0x298,*(undefined4 *)(pHVar2 + 0x128),
               *(undefined4 *)(pHVar2 + 300),auStack_60);
    HotUIImage::drawImageHelper((HotUIImage *)this,param_1,(UIImageDrawInfo *)aRStack_50);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIMultiImage::getContentBounds() */

void HotUIMultiImage::getContentBounds(void)

{
  int iVar1;
  int iVar2;
  HotUIWidget *in_x0;
  HotUIZPSMeterProperties *pHVar3;
  ulong uVar4;
  int *piVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  SalesProgressBar *pSVar7;
  LotteryResultProgressBar *pLVar8;
  undefined8 uVar9;
  int *in_x8;
  undefined8 uVar10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIWidget::getContentBounds();
  pHVar3 = HotUIWidget::getProps<HotUIZPSMeterProperties>(in_x0);
  iVar1 = *(int *)(pHVar3 + 0x128);
  if (iVar1 == 5) {
    uVar10 = *(undefined8 *)(in_x0 + 0x298);
    uVar4 = FUN_03648278(uVar10,*(undefined8 *)(in_x0 + 0x2a0));
    if (2 < uVar4) {
      if (*(int *)(pHVar3 + 0x20) == 2) {
        local_c = 0;
        piVar5 = eastl::min_alt<int>(&local_c,in_x8);
        *in_x8 = *piVar5;
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(uVar10,0);
        pLVar8 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(*(undefined8 *)(in_x0 + 0x298),1);
        pLVar8 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(*(undefined8 *)(in_x0 + 0x298),2);
        pLVar8 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        local_c = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
        local_c = iVar1 + iVar2 + local_c;
        piVar5 = eastl::max_alt<int>(&local_c,in_x8);
        in_x8[2] = *piVar5;
      }
      if (*(int *)(pHVar3 + 0x30) == 2) {
        local_c = 0;
        piVar5 = eastl::min_alt<int>(&local_c,in_x8 + 1);
        uVar10 = *(undefined8 *)(in_x0 + 0x298);
        in_x8[1] = *piVar5;
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(uVar10,0);
        pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        local_c = SalesProgressBar::GetCurrentLevel(pSVar7);
        piVar5 = eastl::max_alt<int>(&local_c,in_x8 + 3);
        in_x8[3] = *piVar5;
      }
    }
    goto LAB_03648a50;
  }
  if (iVar1 == 6) {
    uVar10 = *(undefined8 *)(in_x0 + 0x298);
    uVar4 = FUN_03648278(uVar10,*(undefined8 *)(in_x0 + 0x2a0));
    if (uVar4 < 3) goto LAB_03648a50;
    if (*(int *)(pHVar3 + 0x20) == 2) {
      local_c = 0;
      piVar5 = eastl::min_alt<int>(&local_c,in_x8);
      *in_x8 = *piVar5;
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(uVar10,0);
      pLVar8 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      local_c = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
      piVar5 = eastl::max_alt<int>(&local_c,in_x8);
      in_x8[2] = *piVar5;
    }
    if (*(int *)(pHVar3 + 0x30) != 2) goto LAB_03648a50;
    local_c = 0;
    piVar5 = eastl::min_alt<int>(&local_c,in_x8 + 1);
    uVar10 = *(undefined8 *)(in_x0 + 0x298);
    in_x8[1] = *piVar5;
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(uVar10,0);
    pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    iVar1 = SalesProgressBar::GetCurrentLevel(pSVar7);
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(*(undefined8 *)(in_x0 + 0x298),1);
    pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar7);
    iVar1 = iVar1 + iVar2;
    uVar9 = 2;
    uVar10 = *(undefined8 *)(in_x0 + 0x298);
  }
  else {
    if (iVar1 != 4) goto LAB_03648a50;
    uVar10 = *(undefined8 *)(in_x0 + 0x298);
    uVar4 = FUN_03648278(uVar10,*(undefined8 *)(in_x0 + 0x2a0));
    if (uVar4 < 9) goto LAB_03648a50;
    if (*(int *)(pHVar3 + 0x20) == 2) {
      local_c = 0;
      piVar5 = eastl::min_alt<int>(&local_c,in_x8);
      *in_x8 = *piVar5;
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(uVar10,0);
      pLVar8 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(*(undefined8 *)(in_x0 + 0x298),1);
      pLVar8 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(*(undefined8 *)(in_x0 + 0x298),2);
      pLVar8 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      local_c = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
      local_c = iVar1 + iVar2 + local_c;
      piVar5 = eastl::max_alt<int>(&local_c,in_x8);
      in_x8[2] = *piVar5;
    }
    if (*(int *)(pHVar3 + 0x30) != 2) goto LAB_03648a50;
    local_c = 0;
    piVar5 = eastl::min_alt<int>(&local_c,in_x8 + 1);
    uVar10 = *(undefined8 *)(in_x0 + 0x298);
    in_x8[1] = *piVar5;
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(uVar10,0);
    pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    iVar1 = SalesProgressBar::GetCurrentLevel(pSVar7);
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(*(undefined8 *)(in_x0 + 0x298),3);
    pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar7);
    iVar1 = iVar1 + iVar2;
    uVar10 = *(undefined8 *)(in_x0 + 0x298);
    uVar9 = 6;
  }
  pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(uVar10,uVar9);
  pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
  local_c = SalesProgressBar::GetCurrentLevel(pSVar7);
  local_c = iVar1 + local_c;
  piVar5 = eastl::max_alt<int>(&local_c,in_x8 + 3);
  in_x8[3] = *piVar5;
LAB_03648a50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIMultiImage::getImageWidthForResizeData() */

ulong __thiscall HotUIMultiImage::getImageWidthForResizeData(HotUIMultiImage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HotUIZPSMeterProperties *pHVar4;
  ulong uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  LotteryResultProgressBar *pLVar7;
  undefined8 uVar8;
  
  pHVar4 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  iVar1 = *(int *)(pHVar4 + 0x128);
  if (iVar1 != 5) {
    if (iVar1 == 6) {
      uVar8 = *(undefined8 *)(this + 0x298);
      uVar5 = FUN_03648278(uVar8,*(undefined8 *)(this + 0x2a0));
      if (2 < uVar5) {
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(uVar8,0);
        pLVar7 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        uVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
        return uVar5;
      }
    }
    else if (iVar1 == 4) {
      uVar8 = *(undefined8 *)(this + 0x298);
      uVar5 = FUN_03648278(uVar8,*(undefined8 *)(this + 0x2a0));
      if (8 < uVar5) goto LAB_03648e50;
    }
    return 0;
  }
  uVar8 = *(undefined8 *)(this + 0x298);
  uVar5 = FUN_03648278(uVar8,*(undefined8 *)(this + 0x2a0));
  if (uVar5 < 3) {
    return 0;
  }
LAB_03648e50:
  pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(uVar8,0);
  pLVar7 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(*(undefined8 *)(this + 0x298),1);
  pLVar7 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(*(undefined8 *)(this + 0x298),2);
  pLVar7 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  return (ulong)(uint)(iVar1 + iVar2 + iVar3);
}


/* HotUIMultiImage::getImageHeightForResizeData() */

ulong __thiscall HotUIMultiImage::getImageHeightForResizeData(HotUIMultiImage *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HotUIZPSMeterProperties *pHVar4;
  ulong uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  SalesProgressBar *pSVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  pHVar4 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  iVar1 = *(int *)(pHVar4 + 0x128);
  if (iVar1 == 5) {
    uVar9 = *(undefined8 *)(this + 0x298);
    uVar8 = 0;
    uVar5 = FUN_03648278(uVar9,*(undefined8 *)(this + 0x2a0));
    if (2 < uVar5) {
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(uVar9,0);
      pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      uVar5 = SalesProgressBar::GetCurrentLevel(pSVar7);
      return uVar5;
    }
  }
  else if (iVar1 == 6) {
    uVar9 = *(undefined8 *)(this + 0x298);
    uVar8 = 0;
    uVar5 = FUN_03648278(uVar9,*(undefined8 *)(this + 0x2a0));
    if (2 < uVar5) {
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(uVar9,0);
      pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      iVar1 = SalesProgressBar::GetCurrentLevel(pSVar7);
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(*(undefined8 *)(this + 0x298),1);
      pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      iVar2 = SalesProgressBar::GetCurrentLevel(pSVar7);
      pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(*(undefined8 *)(this + 0x298),2);
      pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
      iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
      uVar8 = (ulong)(uint)(iVar1 + iVar2 + iVar3);
    }
  }
  else {
    uVar8 = 0;
    if (iVar1 == 4) {
      uVar9 = *(undefined8 *)(this + 0x298);
      uVar5 = FUN_03648278(uVar9,*(undefined8 *)(this + 0x2a0));
      if (8 < uVar5) {
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(uVar9,0);
        pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        iVar1 = SalesProgressBar::GetCurrentLevel(pSVar7);
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(*(undefined8 *)(this + 0x298),3);
        pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        iVar2 = SalesProgressBar::GetCurrentLevel(pSVar7);
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03648284(*(undefined8 *)(this + 0x298),6);
        pSVar7 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
        uVar8 = (ulong)(uint)(iVar1 + iVar2 + iVar3);
      }
    }
  }
  return uVar8;
}


/* HotUIMultiImage::HotUIMultiImage() */

void __thiscall HotUIMultiImage::HotUIMultiImage(HotUIMultiImage *this)

{
  HotUIImage::HotUIImage((HotUIImage *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_0666fc60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x280));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x298));
  return;
}


/* HotUIMultiImage::StaticNew() */

HotUIMultiImage * HotUIMultiImage::StaticNew(void)

{
  HotUIMultiImage *this;
  
  this = ::operator_new(0x2b0);
  HotUIMultiImage(this);
  return this;
}


/* HotUIMultiImage::~HotUIMultiImage() */

void __thiscall HotUIMultiImage::~HotUIMultiImage(HotUIMultiImage *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0666fc60;
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x298));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x280));
  HotUIImage::~HotUIImage((HotUIImage *)this);
  return;
}


/* HotUIMultiImage::~HotUIMultiImage() */

void __thiscall HotUIMultiImage::~HotUIMultiImage(HotUIMultiImage *this)

{
  ~HotUIMultiImage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIMultiImage::onInitializeWidget() */

void __thiscall HotUIMultiImage::onInitializeWidget(HotUIMultiImage *this)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::clear
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0x298));
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x280);
    uVar1 = FUN_0364825c(uVar3,*(undefined8 *)(this + 0x288));
    if (uVar1 <= uVar2) break;
    auVar4 = FUN_03648270(uVar3,uVar2);
    HotUIHelpers::GetImageFromStringId(auVar4._0_8_,auVar4._8_8_);
    std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
    push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
              (this + 0x298),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar2 = uVar2 + 1;
  }
  HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIMultiImage::onProcessStringReplaceMap(std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > > const&) */

void __thiscall HotUIMultiImage::onProcessStringReplaceMap(HotUIMultiImage *this,map *param_1)

{
  HotUIZPSMeterProperties *pHVar1;
  string *psVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x280));
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(pHVar1 + 0x1a0);
    uVar3 = FUN_0364825c(uVar5,*(undefined8 *)(pHVar1 + 0x1a8));
    if (uVar3 <= uVar4) break;
    psVar2 = (string *)FUN_03648268(uVar5,uVar4);
    psVar2 = (string *)
             HotUIWidget::processStringReplaceMapHelper((HotUIWidget *)this,psVar2,param_1);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x280),psVar2);
    uVar4 = uVar4 + 1;
  }
  return;
}

