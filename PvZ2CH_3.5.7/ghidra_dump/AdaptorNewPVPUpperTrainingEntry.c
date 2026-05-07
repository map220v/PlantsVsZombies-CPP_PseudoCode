// Class: AdaptorNewPVPUpperTrainingEntry


/* AdaptorNewPVPUpperTrainingEntry::~AdaptorNewPVPUpperTrainingEntry() */

void __thiscall
AdaptorNewPVPUpperTrainingEntry::~AdaptorNewPVPUpperTrainingEntry
          (AdaptorNewPVPUpperTrainingEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_06649870;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06649be8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06649c30;
  AdaptorNewPVPTrainingEntry::~AdaptorNewPVPTrainingEntry((AdaptorNewPVPTrainingEntry *)this);
  return;
}


/* AdaptorNewPVPUpperTrainingEntry::~AdaptorNewPVPUpperTrainingEntry() */

void __thiscall
AdaptorNewPVPUpperTrainingEntry::~AdaptorNewPVPUpperTrainingEntry
          (AdaptorNewPVPUpperTrainingEntry *this)

{
  ~AdaptorNewPVPUpperTrainingEntry(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPUpperTrainingEntry::StaticClassInit() */

void AdaptorNewPVPUpperTrainingEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPVPUpperTrainingEntry");
    (*pcVar2)(plVar1,asStack_10,FUN_034bd6d0,0x158,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPUpperTrainingEntry::StaticGetClass() */

long * AdaptorNewPVPUpperTrainingEntry::StaticGetClass(void)

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
  uVar2 = AdaptorNewPVPTrainingEntry::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPVPUpperTrainingEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPUpperTrainingEntry::GetClass() const */

long * AdaptorNewPVPUpperTrainingEntry::GetClass(void)

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
  uVar2 = AdaptorNewPVPTrainingEntry::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPVPUpperTrainingEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPUpperTrainingEntry::onLinkToUIViewCreated() */

void __thiscall
AdaptorNewPVPUpperTrainingEntry::onLinkToUIViewCreated(AdaptorNewPVPUpperTrainingEntry *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AdaptorNewPVPTrainingEntry::onLinkToUIViewCreated((AdaptorNewPVPTrainingEntry *)this);
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetTrainingProgressBar");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,0);
  std::string::string(asStack_10,"TrainingPacketButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x188))(pHVar1,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPUpperTrainingEntry::AdaptorNewPVPUpperTrainingEntry() */

void __thiscall
AdaptorNewPVPUpperTrainingEntry::AdaptorNewPVPUpperTrainingEntry
          (AdaptorNewPVPUpperTrainingEntry *this)

{
  AdaptorNewPVPTrainingEntry::AdaptorNewPVPTrainingEntry((AdaptorNewPVPTrainingEntry *)this);
  *(undefined ***)this = &PTR_GetClass_06649870;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06649be8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06649c30;
  return;
}


/* AdaptorNewPVPUpperTrainingEntry::StaticNew() */

AdaptorNewPVPUpperTrainingEntry * AdaptorNewPVPUpperTrainingEntry::StaticNew(void)

{
  AdaptorNewPVPUpperTrainingEntry *this;
  
  this = ::operator_new(0x158);
  AdaptorNewPVPUpperTrainingEntry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPUpperTrainingEntry::select(bool) */

void __thiscall
AdaptorNewPVPUpperTrainingEntry::select(AdaptorNewPVPUpperTrainingEntry *this,bool param_1)

{
  undefined *this_00;
  char cVar1;
  bool bVar2;
  HotUIFile *this_01;
  HotUISeedPacketList *this_02;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_01 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"HotUIWidgetTrainingPacket");
  this_02 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((((this_02 != (HotUISeedPacketList *)0x0) &&
       (cVar1 = FUN_034ad854(this_02[0x211]), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*(long *)this_02 + 0x360))(this_02), cVar1 != '\0')) &&
     (HotUIWidgetTrainingPacket::SetSelected((HotUIWidgetTrainingPacket *)this_02,true),
     this_00 = gMessageRouter, param_1)) {
    bVar2 = (bool)(**(code **)(*(long *)this + 0x358))(this);
    MessageRouter::Post<bool,int,bool,bool,int,bool>
              ((MessageRouter *)this_00,Message::NotifyTraingingPacketSelected,bVar2,
               *(int *)(this + 0x128),true);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

