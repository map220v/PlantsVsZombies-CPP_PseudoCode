// Class: HotUIWidgetSeedPacket


/* HotUIWidgetSeedPacket::CanSelect() */

undefined8 HotUIWidgetSeedPacket::CanSelect(void)

{
  return 1;
}


/* HotUIWidgetSeedPacket::init() */

void __thiscall HotUIWidgetSeedPacket::init(HotUIWidgetSeedPacket *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x238);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    *(undefined8 *)(this + 0x238) = 0;
  }
  return;
}


/* HotUIWidgetSeedPacket::onDraw(Sexy::Graphics*) */

void __thiscall HotUIWidgetSeedPacket::onDraw(HotUIWidgetSeedPacket *this,Graphics *param_1)

{
  (**(code **)(*(long *)this + 0x370))();
  (**(code **)(*(long *)this + 0x380))(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetSeedPacket::StaticClassInit() */

void HotUIWidgetSeedPacket::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetSeedPacket");
    (*pcVar2)(plVar1,asStack_10,FUN_033bea28,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetSeedPacket::StaticGetClass() */

long * HotUIWidgetSeedPacket::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIWidgetSeedPacket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetSeedPacket::SetInfo(SeedPacketInfo const&) */

void __thiscall HotUIWidgetSeedPacket::SetInfo(HotUIWidgetSeedPacket *this,SeedPacketInfo *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = *(code **)(*(long *)this + 0x378);
  *(undefined8 *)(this + 0x214) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x21c) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x224) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x22c) = uVar1;
  (*pcVar2)();
  return;
}


/* HotUIWidgetSeedPacket::SetSelected(bool) */

void __thiscall HotUIWidgetSeedPacket::SetSelected(HotUIWidgetSeedPacket *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x238);
  this[0x211] = (HotUIWidgetSeedPacket)param_1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    *(undefined8 *)(this + 0x238) = 0;
  }
  return;
}


/* HotUIWidgetSeedPacket::onNotifyPlantPacketSelected(bool, int, bool, bool) */

void HotUIWidgetSeedPacket::onNotifyPlantPacketSelected
               (bool param_1,int param_2,bool param_3,bool param_4)

{
  char cVar1;
  HotUIWidgetSeedPacket *this;
  
  this = (HotUIWidgetSeedPacket *)(ulong)param_1;
  if (*(code **)(*(long *)this + 0x368) == CanSelect) {
    cVar1 = CanSelect();
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x368))();
  }
  if (((cVar1 != '\0') && (*(uint *)(this + 0x214) != (uint)param_3)) &&
     (cVar1 = FUN_033bd360(this[0x211]), cVar1 != '\0')) {
    SetSelected(this,false);
    return;
  }
  return;
}


/* HotUIWidgetSeedPacket::HotUIWidgetSeedPacket() */

void __thiscall HotUIWidgetSeedPacket::HotUIWidgetSeedPacket(HotUIWidgetSeedPacket *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  this[0x210] = (HotUIWidgetSeedPacket)0x0;
  this[0x211] = (HotUIWidgetSeedPacket)0x0;
  *(undefined ***)this = &PTR_GetWidgetClass_066169a0;
  SeedPacketInfo::SeedPacketInfo((SeedPacketInfo *)(this + 0x214));
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x240) = 0x3f800000;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyPlantPacketSelected);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,int,bool,bool,Sexy::CBMemberTranslatorX<HotUIWidgetSeedPacket,void(HotUIWidgetSeedPacket::*)(bool,int,bool,bool)>>
            ((MessageRouter *)puVar1,Message::NotifyPlantPacketSelected,&local_40);
  return;
}


/* HotUIWidgetSeedPacket::StaticNew() */

HotUIWidgetSeedPacket * HotUIWidgetSeedPacket::StaticNew(void)

{
  HotUIWidgetSeedPacket *this;
  
  this = ::operator_new(0x248);
  HotUIWidgetSeedPacket(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetSeedPacket::drawLocked(Sexy::Graphics*) */

void __thiscall HotUIWidgetSeedPacket::drawLocked(HotUIWidgetSeedPacket *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar3;
  int iVar4;
  Insets aIStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_033bd364(this[0x220]);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x360))(this), cVar1 != '\0')) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9df50);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar4 = (int)(*(float *)(this + 0x240) * 0.8 * (float)iVar2);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9df50);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar2 = (int)(*(float *)(this + 0x240) * 0.8 * (float)iVar2);
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9df50);
    Sexy::Graphics::DrawImage(param_1,pIVar3,local_10 - iVar4,local_c - iVar2,iVar4,iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetSeedPacket::~HotUIWidgetSeedPacket() */

void __thiscall HotUIWidgetSeedPacket::~HotUIWidgetSeedPacket(HotUIWidgetSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066169a0;
  if (*(long **)(this + 0x238) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x238) + 0x18))();
    *(undefined8 *)(this + 0x238) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIWidgetSeedPacket::~HotUIWidgetSeedPacket() */

void __thiscall HotUIWidgetSeedPacket::~HotUIWidgetSeedPacket(HotUIWidgetSeedPacket *this)

{
  ~HotUIWidgetSeedPacket(this);
  AK::FreeHook(this);
  return;
}

