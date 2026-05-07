// Class: SecurityGourdPointOfLossModule


/* SecurityGourdPointOfLossModule::~SecurityGourdPointOfLossModule() */

void __thiscall
SecurityGourdPointOfLossModule::~SecurityGourdPointOfLossModule
          (SecurityGourdPointOfLossModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667cac0;
  PointOfLossModule::~PointOfLossModule((PointOfLossModule *)this);
  return;
}


/* SecurityGourdPointOfLossModule::~SecurityGourdPointOfLossModule() */

void __thiscall
SecurityGourdPointOfLossModule::~SecurityGourdPointOfLossModule
          (SecurityGourdPointOfLossModule *this)

{
  ~SecurityGourdPointOfLossModule(this);
  AK::FreeHook(this);
  return;
}


/* SecurityGourdPointOfLossModule::SecurityGourdPointOfLossModule() */

void __thiscall
SecurityGourdPointOfLossModule::SecurityGourdPointOfLossModule(SecurityGourdPointOfLossModule *this)

{
  PointOfLossModule::PointOfLossModule((PointOfLossModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667cac0;
  return;
}


/* SecurityGourdPointOfLossModule::StaticNew() */

SecurityGourdPointOfLossModule * SecurityGourdPointOfLossModule::StaticNew(void)

{
  SecurityGourdPointOfLossModule *this;
  
  this = ::operator_new(0x28);
  SecurityGourdPointOfLossModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdPointOfLossModule::StaticClassInit() */

void SecurityGourdPointOfLossModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SecurityGourdPointOfLossModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0368bb80,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SecurityGourdPointOfLossModule::StaticGetClass() */

long * SecurityGourdPointOfLossModule::StaticGetClass(void)

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
  uVar2 = PointOfLossModule::StaticGetClass();
  (*pcVar3)(plVar1,"SecurityGourdPointOfLossModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SecurityGourdPointOfLossModule::telemetryRecordCurrencyEvent(int) */

void __thiscall
SecurityGourdPointOfLossModule::telemetryRecordCurrencyEvent
          (SecurityGourdPointOfLossModule *this,int param_1)

{
  MessageRouter::Broadcast<int,int>
            ((MessageRouter *)gMessageRouter,Message::SecurityGourdsPurchased,param_1);
  return;
}


/* SecurityGourdPointOfLossModule::onAcceptGems() */

char __thiscall SecurityGourdPointOfLossModule::onAcceptGems(SecurityGourdPointOfLossModule *this)

{
  char cVar1;
  LevelModuleManager *this_00;
  
  cVar1 = PointOfLossModule::onAcceptGems((PointOfLossModule *)this);
  if (cVar1 != '\0') {
    this_00 = (LevelModuleManager *)
              FUN_0368b7d8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    LevelModuleManager::GetModuleByClass<SecurityGourdModule>(this_00);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdPointOfLossModule::onDecline() */

void __thiscall SecurityGourdPointOfLossModule::onDecline(SecurityGourdPointOfLossModule *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PointOfLossModule::onDecline((PointOfLossModule *)this);
  std::string::string(asStack_10,"Close");
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

