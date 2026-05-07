// Class: HotUIWidgetPacketContainer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetPacketContainer::StaticClassInit() */

void HotUIWidgetPacketContainer::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetPacketContainer");
    (*pcVar2)(plVar1,asStack_10,FUN_034bed90,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetPacketContainer::StaticGetClass() */

long * HotUIWidgetPacketContainer::StaticGetClass(void)

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
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetPacketContainer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetPacketContainer::HotUIWidgetPacketContainer() */

void __thiscall
HotUIWidgetPacketContainer::HotUIWidgetPacketContainer(HotUIWidgetPacketContainer *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_0664b800;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x230));
  return;
}


/* HotUIWidgetPacketContainer::StaticNew() */

HotUIWidgetPacketContainer * HotUIWidgetPacketContainer::StaticNew(void)

{
  HotUIWidgetPacketContainer *this;
  
  this = ::operator_new(0x248);
  HotUIWidgetPacketContainer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetPacketContainer::~HotUIWidgetPacketContainer() */

void __thiscall
HotUIWidgetPacketContainer::~HotUIWidgetPacketContainer(HotUIWidgetPacketContainer *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x230);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetWidgetClass_0664b800;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
      *plVar2 = 0;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::DeviceImage*,std::allocator<Sexy::DeviceImage*>>::~vector
            ((vector<Sexy::DeviceImage*,std::allocator<Sexy::DeviceImage*>> *)this_00);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x210));
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetPacketContainer::~HotUIWidgetPacketContainer() */

void __thiscall
HotUIWidgetPacketContainer::~HotUIWidgetPacketContainer(HotUIWidgetPacketContainer *this)

{
  ~HotUIWidgetPacketContainer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetPacketContainer::drawPacket(Sexy::Graphics*, std::string const&, Sexy::TRect<int>,
   int) */

void __thiscall
HotUIWidgetPacketContainer::drawPacket
          (HotUIWidgetPacketContainer *this,undefined8 param_1,string *param_2,int *param_4,
          int param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  SeedPacketUtils *pSVar4;
  PacketRenderData *pPVar5;
  undefined8 uVar6;
  ulong uVar7;
  DeviceImage *local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x230);
  local_8 = ___stack_chk_guard;
  uVar7 = (ulong)param_5;
  uVar1 = FUN_034b0540(uVar6,*(undefined8 *)(this + 0x238));
  if ((uVar1 <= uVar7) || (plVar2 = (long *)FUN_034b054c(uVar6,uVar7), *plVar2 == 0)) {
    local_20 = (DeviceImage *)0x0;
    if (*(int *)(this + 0x228) == 0) {
      pSVar4 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      pPVar5 = (PacketRenderData *)
               SeedPacketUtils::GetPlantPacketRenderData(pSVar4,param_2,-1,-1,-1);
      local_20 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar4,pPVar5,0,0);
      SeedPacketUtils::DrawPacketToDeviceImage(pSVar4,local_20,pPVar5,false,-1,false,false);
    }
    else {
      pSVar4 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      std::string::string((string *)aIStack_18,"");
      pPVar5 = (PacketRenderData *)
               SeedPacketUtils::GetZombiePacketRenderData(pSVar4,param_2,(string *)aIStack_18,-1);
      std::string::~string((string *)aIStack_18);
      nop();
      local_20 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar4,pPVar5,0,0);
      SeedPacketUtils::DrawPacketToDeviceImage(pSVar4,local_20,pPVar5,false,-1,false,false);
    }
    std::vector<Sexy::DeviceImage*,std::allocator<Sexy::DeviceImage*>>::push_back
              ((vector<Sexy::DeviceImage*,std::allocator<Sexy::DeviceImage*>> *)(this + 0x230),
               &local_20);
    plVar2 = (long *)FUN_034b054c(*(undefined8 *)(this + 0x230),uVar7);
    if (*plVar2 == 0) goto LAB_034f516c;
  }
  Sexy::Insets::Insets(aIStack_18,*param_4,param_4[1],param_4[2],param_4[3]);
  puVar3 = (undefined8 *)FUN_034b054c(*(undefined8 *)(this + 0x230),uVar7);
  DrawAdaptiveImage(param_1,aIStack_18,*puVar3);
LAB_034f516c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetPacketContainer::onDraw(Sexy::Graphics*) */

void __thiscall
HotUIWidgetPacketContainer::onDraw(HotUIWidgetPacketContainer *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  Insets aIStack_18 [16];
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x210);
  uVar5 = 0;
  iVar7 = 0;
  local_8 = ___stack_chk_guard;
  uVar4 = FUN_034b0554(uVar6,*(undefined8 *)(this + 0x218));
  iVar3 = FUN_034b7438(5);
  iVar1 = *(int *)(this + 0x54);
  iVar8 = (int)uVar4;
  iVar2 = 0;
  if (iVar8 != 0) {
    iVar2 = (*(int *)(this + 0x50) + (1 - iVar8) * iVar3) / iVar8;
  }
  while( true ) {
    if (uVar4 <= uVar5) break;
    uVar6 = FUN_034b0560(uVar6,uVar5);
    Sexy::Insets::Insets(aIStack_18,iVar7,0,iVar2,iVar1);
    drawPacket(this,param_1,uVar6,aIStack_18,uVar5 & 0xffffffff);
    iVar3 = FUN_034b7438(5);
    uVar6 = *(undefined8 *)(this + 0x210);
    iVar7 = iVar7 + iVar3 + iVar2;
    uVar4 = FUN_034b0554(uVar6,*(undefined8 *)(this + 0x218));
    uVar5 = uVar5 + 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetPacketContainer::AddPacket(int) */

void __thiscall HotUIWidgetPacketContainer::AddPacket(HotUIWidgetPacketContainer *this,int param_1)

{
  PlantNameMapperServerID *this_00;
  long lVar1;
  string asStack_20 [8];
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x228) == 0) {
    this_00 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this_00,param_1);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_18);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x210),
               (string *)(lVar1 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aSStack_18);
  }
  else {
    ServerZombieID::ServerZombieID(aSStack_18,param_1);
    ServerZombieID::ToString();
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x210),asStack_20);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

