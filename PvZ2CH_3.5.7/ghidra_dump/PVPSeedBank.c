// Class: PVPSeedBank


/* PVPSeedBank::RefreshPackets() */

void __thiscall PVPSeedBank::RefreshPackets(PVPSeedBank *this)

{
  (**(code **)(*(long *)this + 0x1f0))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBank::AddPacket(Sexy::RtWeakPtr<UIWidget>) */

void __thiscall PVPSeedBank::AddPacket(PVPSeedBank *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  SeedBankNew::addPacket((SeedBankNew *)this,aRStack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSeedBank::~PVPSeedBank() */

void __thiscall PVPSeedBank::~PVPSeedBank(PVPSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_069484b0;
  *(undefined ***)(this + 0x10) = &PTR__PVPSeedBank_069486b8;
  SeedBankNew::~SeedBankNew((SeedBankNew *)this);
  return;
}


/* non-virtual thunk to PVPSeedBank::~PVPSeedBank() */

void __thiscall PVPSeedBank::~PVPSeedBank(PVPSeedBank *this)

{
  ~PVPSeedBank(this + -0x10);
  return;
}


/* PVPSeedBank::~PVPSeedBank() */

void __thiscall PVPSeedBank::~PVPSeedBank(PVPSeedBank *this)

{
  ~PVPSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVPSeedBank::~PVPSeedBank() */

void __thiscall PVPSeedBank::~PVPSeedBank(PVPSeedBank *this)

{
  ~PVPSeedBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBank::StaticClassInit() */

void PVPSeedBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVPSeedBank");
    (*pcVar2)(plVar1,asStack_10,FUN_04ab6e90,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSeedBank::StaticGetClass() */

long * PVPSeedBank::StaticGetClass(void)

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
  uVar2 = SeedBankNew::StaticGetClass();
  (*pcVar3)(plVar1,"PVPSeedBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPSeedBank::GetClass() const */

long * PVPSeedBank::GetClass(void)

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
  uVar2 = SeedBankNew::StaticGetClass();
  (*pcVar3)(plVar1,"PVPSeedBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPSeedBank::isPageBegin() */

bool __thiscall PVPSeedBank::isPageBegin(PVPSeedBank *this)

{
  return *(int *)(this + 0x1ec) < 1;
}


/* PVPSeedBank::isPageEnd() */

bool __thiscall PVPSeedBank::isPageEnd(PVPSeedBank *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(this + 0x1f0) != 0) {
    iVar1 = (int)((byte)this[0x199] - 1) / *(int *)(this + 0x1f0);
  }
  return *(int *)(this + 0x1ec) == iVar1;
}


/* PVPSeedBank::PVPSeedBank() */

void __thiscall PVPSeedBank::PVPSeedBank(PVPSeedBank *this)

{
  SeedBankNew::SeedBankNew((SeedBankNew *)this);
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined ***)this = &PTR_GetClass_069484b0;
  *(undefined ***)(this + 0x10) = &PTR__PVPSeedBank_069486b8;
  *(undefined4 *)(this + 0x1f0) = 9;
  Sexy::Insets::Insets((Insets *)(this + 500));
  Sexy::Insets::Insets((Insets *)(this + 0x204));
  *(undefined8 *)(this + 0x218) = 0;
  return;
}


/* PVPSeedBank::StaticNew() */

PVPSeedBank * PVPSeedBank::StaticNew(void)

{
  PVPSeedBank *this;
  
  this = ::operator_new(0x220);
  PVPSeedBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBank::setPacketPositions() */

void __thiscall PVPSeedBank::setPacketPositions(PVPSeedBank *this)

{
  uint uVar1;
  PVPSeedBank PVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  UIWidget *pUVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVar2 = this[0x199];
  if ((byte)PVar2 != 0) {
    iVar3 = *(int *)(this + 0x1f0) * *(int *)(this + 0x1ec);
    uVar1 = *(int *)(this + 0x1f0) + iVar3;
    if (uVar1 != (byte)PVar2 && (int)(uint)(byte)PVar2 <= (int)uVar1) {
      uVar1 = (uint)(byte)PVar2;
    }
    UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,0);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    iVar4 = FUN_04ab67b8(*(undefined4 *)(lVar7 + 0x3c));
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    iVar5 = FUN_04ab67ac(*(undefined4 *)(lVar7 + 0x38));
    iVar6 = FUN_04ab67c8(0);
    uVar11 = (uint)(byte)this[0x199];
    if (this[0x199] != (PVPSeedBank)0x0) {
      iVar10 = 0;
      iVar12 = iVar6;
      do {
        while ((UINewPVPTopZombieQueue::gettItem((UINewPVPTopZombieQueue *)this,iVar10),
               (int)uVar1 <= iVar10 || (iVar10 < iVar3))) {
          pUVar9 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          iVar10 = iVar10 + 1;
          UIWidget::SetVisible(pUVar9,false);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          uVar11 = (uint)(byte)this[0x199];
          if ((int)(uint)(byte)this[0x199] <= iVar10) goto LAB_04ab6b2c;
        }
        uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar12,(float)iVar6);
        UIWidget::SetPositionOffset(local_10,local_c,uVar8);
        if (this[0x1c2] == (PVPSeedBank)0x0) {
          iVar12 = iVar12 + iVar5;
        }
        else {
          iVar6 = iVar6 + iVar4;
        }
        iVar10 = iVar10 + 1;
        pUVar9 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        UIWidget::SetVisible(pUVar9,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        uVar11 = (uint)(byte)this[0x199];
      } while (iVar10 < (int)(uint)(byte)this[0x199]);
    }
LAB_04ab6b2c:
    iVar3 = *(int *)(this + 0x1f0);
    if (this[0x1c2] == (PVPSeedBank)0x0) {
      iVar6 = FUN_04ab67c8(5);
      iVar6 = iVar3 * iVar5 + iVar6;
      *(int *)(this + 0x204) = iVar6;
      if (iVar3 < (int)uVar11) {
        iVar6 = iVar6 + *(int *)(this + 0x20c);
      }
      FUN_04ab67b0(this + 0x38,iVar6);
    }
    else {
      iVar6 = FUN_04ab67c8(5);
      iVar6 = iVar3 * iVar4 + iVar6;
      *(int *)(this + 0x208) = iVar6;
      if (iVar3 < (int)uVar11) {
        iVar6 = iVar6 + *(int *)(this + 0x210);
      }
      FUN_04ab67bc(this + 0x3c,iVar6);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBank::getButtonAt(int, int) */

void __thiscall PVPSeedBank::getButtonAt(PVPSeedBank *this,int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int local_28;
  int local_24;
  int local_18;
  int iStack_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(this + 500));
  _local_18 = CONCAT44(iStack_14 + local_24,local_18 + local_28);
  cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)&local_18,param_1,param_2);
  if (cVar1 == '\0') {
    local_10 = *(undefined8 *)(this + 0x20c);
    _local_18 = CONCAT44(local_24 + (int)((ulong)*(undefined8 *)(this + 0x204) >> 0x20),
                         local_28 + (int)*(undefined8 *)(this + 0x204));
    cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)&local_18,param_1,param_2);
    if ((cVar1 == '\0') || (cVar1 = isPageEnd(this), cVar1 != '\0')) {
      bVar2 = 0;
    }
    else {
      bVar2 = 2;
    }
  }
  else {
    bVar2 = isPageBegin(this);
    bVar2 = bVar2 ^ 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* PVPSeedBank::IsMouseOver(int, int) */

bool __thiscall PVPSeedBank::IsMouseOver(PVPSeedBank *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = UIWidget::IsVisible((UIWidget *)this);
  bVar1 = false;
  if (cVar2 != '\0') {
    iVar3 = getButtonAt(this,param_1,param_2);
    bVar1 = iVar3 != 0;
  }
  return bVar1;
}


/* PVPSeedBank::OnTouch(Sexy::Touch const&) */

undefined4 __thiscall PVPSeedBank::OnTouch(PVPSeedBank *this,Touch *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 3) {
    lVar3 = *(long *)(this + 0x218);
    lVar2 = *(long *)param_1;
    *(undefined8 *)(this + 0x218) = 0;
    if (lVar3 == lVar2) {
      iVar1 = getButtonAt(this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) +
                               *(int *)(param_1 + 0x10),
                          *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + *(int *)(param_1 + 0x14));
      if (iVar1 == 1) {
        pcVar4 = *(code **)(*(long *)this + 0x1f0);
        *(int *)(this + 0x1ec) = *(int *)(this + 0x1ec) + -1;
        (*pcVar4)(this);
        return 1;
      }
      if (iVar1 == 2) {
        pcVar4 = *(code **)(*(long *)this + 0x1f0);
        *(int *)(this + 0x1ec) = *(int *)(this + 0x1ec) + 1;
        (*pcVar4)(this);
        return 1;
      }
    }
  }
  else {
    if (iVar1 == 4) {
      *(undefined8 *)(this + 0x218) = 0;
      return 0;
    }
    if (((iVar1 == 0) && (*(long *)(this + 0x218) == 0)) &&
       (iVar1 = getButtonAt(this,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) +
                                 *(int *)(param_1 + 0x10),
                            *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + *(int *)(param_1 + 0x14))
       , iVar1 != 0)) {
      *(undefined8 *)(this + 0x218) = *(undefined8 *)param_1;
      return 1;
    }
  }
  return 0;
}


/* PVPSeedBank::initialize(unsigned char) */

void PVPSeedBank::initialize(uchar param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *pSVar6;
  code *pcVar7;
  
  plVar4 = (long *)(ulong)param_1;
  *(undefined4 *)((long)plVar4 + 0x1ec) = 0;
  if (*(char *)((long)plVar4 + 0x1c2) == '\0') {
    pLVar5 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b807f0);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    iVar2 = FUN_04ab67c8(10);
    *(undefined4 *)(plVar4 + 0x3f) = 0;
    *(int *)((long)plVar4 + 500) = -iVar2 - iVar1;
  }
  else {
    *(undefined4 *)((long)plVar4 + 500) = 0;
    pSVar6 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b807f0);
    iVar1 = SalesProgressBar::GetCurrentLevel(pSVar6);
    *(int *)(plVar4 + 0x3f) = -iVar1;
  }
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b807f0);
  uVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  *(undefined4 *)((long)plVar4 + 0x1fc) = uVar3;
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b807f0);
  uVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
  *(undefined4 *)(plVar4 + 0x40) = uVar3;
  pcVar7 = *(code **)(*plVar4 + 0x1f0);
  *(undefined8 *)((long)plVar4 + 0x204) = *(undefined8 *)((long)plVar4 + 500);
  *(undefined8 *)((long)plVar4 + 0x20c) = *(undefined8 *)((long)plVar4 + 0x1fc);
  (*pcVar7)(plVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBank::Draw(Sexy::Graphics*) */

void __thiscall PVPSeedBank::Draw(PVPSeedBank *this,Graphics *param_1)

{
  char cVar1;
  Image *pIVar2;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = isPageBegin(this);
  if (cVar1 == '\0') {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b807f0);
    Sexy::Graphics::DrawImageRotated
              (param_1,pIVar2,*(int *)(this + 500),*(int *)(this + 0x1f8),3.1415927410125732,
               (TRect *)0x0);
  }
  cVar1 = isPageEnd(this);
  if (cVar1 == '\0') {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b807f0);
    Sexy::Graphics::DrawImage(param_1,pIVar2,*(int *)(this + 0x204),*(int *)(this + 0x208));
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVPSeedBank::Draw(Sexy::Graphics*) */

void __thiscall PVPSeedBank::Draw(PVPSeedBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

