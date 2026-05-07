// Class: HotUIWidgetPlantSeedPacket


/* HotUIWidgetPlantSeedPacket::CanDrawLocked() */

bool __thiscall HotUIWidgetPlantSeedPacket::CanDrawLocked(HotUIWidgetPlantSeedPacket *this)

{
  return *(int *)(this + 0x224) < 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetPlantSeedPacket::StaticClassInit() */

void HotUIWidgetPlantSeedPacket::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetPlantSeedPacket");
    (*pcVar2)(plVar1,asStack_10,FUN_033bef3c,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetPlantSeedPacket::StaticGetClass() */

long * HotUIWidgetPlantSeedPacket::StaticGetClass(void)

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
  uVar2 = HotUIWidgetSeedPacket::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetPlantSeedPacket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetPlantSeedPacket::HotUIWidgetPlantSeedPacket() */

void __thiscall
HotUIWidgetPlantSeedPacket::HotUIWidgetPlantSeedPacket(HotUIWidgetPlantSeedPacket *this)

{
  HotUIWidgetSeedPacket::HotUIWidgetSeedPacket((HotUIWidgetSeedPacket *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_06616de0;
  return;
}


/* HotUIWidgetPlantSeedPacket::StaticNew() */

HotUIWidgetPlantSeedPacket * HotUIWidgetPlantSeedPacket::StaticNew(void)

{
  HotUIWidgetPlantSeedPacket *this;
  
  this = ::operator_new(0x248);
  HotUIWidgetPlantSeedPacket(this);
  return this;
}


/* HotUIWidgetPlantSeedPacket::drawPlantFavoriteIcon(Sexy::Graphics*) */

void __thiscall
HotUIWidgetPlantSeedPacket::drawPlantFavoriteIcon
          (HotUIWidgetPlantSeedPacket *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar5;
  float fVar6;
  float fVar7;
  
  if (0 < *(int *)(this + 0x230)) {
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9df20);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    fVar6 = *(float *)(this + 0x240);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9df20);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar1 = *(int *)(this + 0x50);
    fVar7 = *(float *)(this + 0x240);
    iVar2 = *(int *)(this + 0x54);
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9df20);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,(iVar1 - (int)((float)iVar3 * fVar6)) / 2,
               iVar2 - (int)((float)iVar4 * fVar7),(int)((float)iVar3 * fVar6),
               (int)((float)iVar4 * fVar7));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetPlantSeedPacket::drawPacket(Sexy::Graphics*) */

void __thiscall
HotUIWidgetPlantSeedPacket::drawPacket(HotUIWidgetPlantSeedPacket *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  SeedPacketUtils *this_02;
  PacketRenderData *pPVar7;
  DeviceImage *pDVar8;
  Image *pIVar9;
  CachedUIResourcePtr<Sexy::Image> *this_03;
  float fVar10;
  float fVar11;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x214) == -1) goto LAB_033c5988;
  cVar2 = FUN_033bd364(this[0x220]);
  if (cVar2 != '\0') {
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets(aIStack_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  }
  pIVar9 = *(Image **)(this + 0x238);
  if (pIVar9 == (Image *)0x0) {
    this_02 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    iVar6 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar6);
    pPVar7 = (PacketRenderData *)
             SeedPacketUtils::GetPlantPacketRenderData(this_02,(string *)aIStack_18,-1,-1,-1);
    std::string::~string((string *)aIStack_18);
    pDVar8 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_02,pPVar7,0,0);
    *(DeviceImage **)(this + 0x238) = pDVar8;
    SeedPacketUtils::DrawPacketToDeviceImage(this_02,pDVar8,pPVar7,(bool)this[0x211],-1,true,true);
    pIVar9 = *(Image **)(this + 0x238);
    if (pIVar9 != (Image *)0x0) goto LAB_033c58b8;
  }
  else {
LAB_033c58b8:
    Sexy::Graphics::DrawImage(param_1,pIVar9,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  Sexy::Graphics::SetColorizeImages(param_1,false);
  if (*(int *)(this + 0x224) < 1) {
    if (0 < *(int *)(this + 0x22c)) {
      this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9dd28;
      goto LAB_033c58f4;
    }
    if (0 < *(int *)(this + 0x228)) {
      this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9db08;
      goto LAB_033c58f4;
    }
  }
  else {
    this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9dbb8;
LAB_033c58f4:
    this_00 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_03);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    fVar10 = *(float *)(this + 0x240);
    this_01 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_03);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar6 = *(int *)(this + 0x50);
    fVar11 = *(float *)(this + 0x240);
    iVar5 = FUN_033be204(5);
    iVar1 = *(int *)(this + 0x54);
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_03);
    Sexy::Graphics::DrawImage
              (param_1,pIVar9,(iVar6 - (int)((float)iVar3 * fVar10)) - iVar5,
               (iVar1 - (int)((float)iVar4 * fVar11)) - iVar5,(int)((float)iVar3 * fVar10),
               (int)((float)iVar4 * fVar11));
  }
  drawPlantFavoriteIcon(this,param_1);
LAB_033c5988:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* HotUIWidgetPlantSeedPacket::~HotUIWidgetPlantSeedPacket() */

void __thiscall
HotUIWidgetPlantSeedPacket::~HotUIWidgetPlantSeedPacket(HotUIWidgetPlantSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_06616de0;
  HotUIWidgetSeedPacket::~HotUIWidgetSeedPacket((HotUIWidgetSeedPacket *)this);
  return;
}


/* HotUIWidgetPlantSeedPacket::~HotUIWidgetPlantSeedPacket() */

void __thiscall
HotUIWidgetPlantSeedPacket::~HotUIWidgetPlantSeedPacket(HotUIWidgetPlantSeedPacket *this)

{
  ~HotUIWidgetPlantSeedPacket(this);
  AK::FreeHook(this);
  return;
}

