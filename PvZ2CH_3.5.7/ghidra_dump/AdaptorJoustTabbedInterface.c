// Class: AdaptorJoustTabbedInterface


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTabbedInterface::StaticClassInit() */

void AdaptorJoustTabbedInterface::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustTabbedInterface");
    (*pcVar2)(plVar1,asStack_10,FUN_0366f2b0,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustTabbedInterface::StaticGetClass() */

long * AdaptorJoustTabbedInterface::StaticGetClass(void)

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
  uVar2 = AdaptorTabbedInterface::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustTabbedInterface",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustTabbedInterface::GetClass() const */

long * AdaptorJoustTabbedInterface::GetClass(void)

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
  uVar2 = AdaptorTabbedInterface::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustTabbedInterface",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTabbedInterface::onLoadUIView() */

void __thiscall AdaptorJoustTabbedInterface::onLoadUIView(AdaptorJoustTabbedInterface *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"JoustTabbedInterface");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustTabbedInterface::AdaptorJoustTabbedInterface() */

void __thiscall
AdaptorJoustTabbedInterface::AdaptorJoustTabbedInterface(AdaptorJoustTabbedInterface *this)

{
  AdaptorTabbedInterface::AdaptorTabbedInterface((AdaptorTabbedInterface *)this);
  *(undefined ***)this = &PTR_GetClass_066788f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06678c50;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06678c98;
  return;
}


/* AdaptorJoustTabbedInterface::StaticNew() */

AdaptorJoustTabbedInterface * AdaptorJoustTabbedInterface::StaticNew(void)

{
  AdaptorJoustTabbedInterface *this;
  
  this = ::operator_new(0x198);
  AdaptorJoustTabbedInterface(this);
  return this;
}


/* AdaptorJoustTabbedInterface::~AdaptorJoustTabbedInterface() */

void __thiscall
AdaptorJoustTabbedInterface::~AdaptorJoustTabbedInterface(AdaptorJoustTabbedInterface *this)

{
  *(undefined ***)this = &PTR_GetClass_066788f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06678c50;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06678c98;
  AdaptorTabbedInterface::~AdaptorTabbedInterface((AdaptorTabbedInterface *)this);
  return;
}


/* AdaptorJoustTabbedInterface::~AdaptorJoustTabbedInterface() */

void __thiscall
AdaptorJoustTabbedInterface::~AdaptorJoustTabbedInterface(AdaptorJoustTabbedInterface *this)

{
  ~AdaptorJoustTabbedInterface(this);
  AK::FreeHook(this);
  return;
}

