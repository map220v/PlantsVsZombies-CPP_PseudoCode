// Class: HotUISeedPacket


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUISeedPacket::StaticClassInit() */

void HotUISeedPacket::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUISeedPacket");
    (*pcVar2)(plVar1,asStack_10,FUN_0364cc84,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUISeedPacket::StaticGetClass() */

long * HotUISeedPacket::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUISeedPacket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUISeedPacket::SetPacketConfig(HotUISeedPacketConfig const&) */

void __thiscall
HotUISeedPacket::SetPacketConfig(HotUISeedPacket *this,HotUISeedPacketConfig *param_1)

{
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar1;
  
  HotUISeedPacketConfig::operator=((HotUISeedPacketConfig *)(this + 0x210),param_1);
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  pPVar1 = (PacketRenderData *)
           SeedPacketUtils::GetPlantPacketRenderData(this_00,(string *)(this + 0x210),-1,-1,-1);
  PacketRenderData::operator=((PacketRenderData *)(this + 0x230),pPVar1);
  this[0x228] = (HotUISeedPacket)0x1;
  return;
}


/* HotUISeedPacket::onInitializeWidget() */

void __thiscall HotUISeedPacket::onInitializeWidget(HotUISeedPacket *this)

{
  HotUIZPSMeterProperties *pHVar1;
  
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  SetPacketConfig(this,(HotUISeedPacketConfig *)(pHVar1 + 0x128));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUISeedPacket::onDraw(Sexy::Graphics*) */

void __thiscall HotUISeedPacket::onDraw(HotUISeedPacket *this,Graphics *param_1)

{
  float *pfVar1;
  SeedPacketUtils *this_00;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x228] == (HotUISeedPacket)0x0) {
    return;
  }
  Sexy::Graphics::PushState(param_1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  Sexy::Graphics::SetColor(param_1,(Color *)(this + 0x3b0));
  local_10 = (float)*(int *)(this + 0x50) / (float)(*(int *)(this + 600) + *(int *)(this + 0x260));
  local_c = (float)*(int *)(this + 0x54) / (float)(*(int *)(this + 0x25c) + *(int *)(this + 0x264));
  pfVar1 = eastl::min_alt<float>(&local_10,&local_c);
  Sexy::Graphics::SetScale(param_1,*pfVar1,*pfVar1,0.0,0.0);
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  SeedPacketUtils::DrawPacket
            (this_00,param_1,(PacketRenderData *)(this + 0x230),false,-1,false,false);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Sexy::Graphics::PopState(param_1);
  return;
}


/* HotUISeedPacket::HotUISeedPacket() */

void __thiscall HotUISeedPacket::HotUISeedPacket(HotUISeedPacket *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_066712d0;
  HotUISeedPacketConfig::HotUISeedPacketConfig((HotUISeedPacketConfig *)(this + 0x210));
  this[0x228] = (HotUISeedPacket)0x0;
  PacketRenderData::PacketRenderData((PacketRenderData *)(this + 0x230));
  Sexy::Color::Color((Color *)(this + 0x3b0),1);
  return;
}


/* HotUISeedPacket::StaticNew() */

HotUISeedPacket * HotUISeedPacket::StaticNew(void)

{
  HotUISeedPacket *this;
  
  this = ::operator_new(0x3c0);
  HotUISeedPacket(this);
  return this;
}


/* HotUISeedPacket::~HotUISeedPacket() */

void __thiscall HotUISeedPacket::~HotUISeedPacket(HotUISeedPacket *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066712d0;
  PacketRenderData::~PacketRenderData((PacketRenderData *)(this + 0x230));
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)(this + 0x210));
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUISeedPacket::~HotUISeedPacket() */

void __thiscall HotUISeedPacket::~HotUISeedPacket(HotUISeedPacket *this)

{
  ~HotUISeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* HotUISeedPacket::SetPacketColor(Sexy::Color) */

void __thiscall HotUISeedPacket::SetPacketColor(HotUISeedPacket *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x3b0) = *param_2;
  *(undefined8 *)(this + 0x3b8) = uVar1;
  return;
}

