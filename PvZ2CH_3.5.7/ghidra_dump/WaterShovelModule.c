// Class: WaterShovelModule


/* WaterShovelModule::onPlantCreate(Plant*) */

void __thiscall WaterShovelModule::onPlantCreate(WaterShovelModule *this,Plant *param_1)

{
  if (param_1 != (Plant *)0x0) {
    Plant::SetInPvz1SleepAction(param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaterShovelModule::StaticClassInit() */

void WaterShovelModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaterShovelModule");
    (*pcVar2)(plVar1,asStack_10,FUN_038d353c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaterShovelModule::StaticGetClass() */

long * WaterShovelModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"WaterShovelModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaterShovelModule::~WaterShovelModule() */

void __thiscall WaterShovelModule::~WaterShovelModule(WaterShovelModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066ba8e0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* WaterShovelModule::~WaterShovelModule() */

void __thiscall WaterShovelModule::~WaterShovelModule(WaterShovelModule *this)

{
  ~WaterShovelModule(this);
  AK::FreeHook(this);
  return;
}


/* WaterShovelModule::WaterShovelModule() */

void __thiscall WaterShovelModule::WaterShovelModule(WaterShovelModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066ba8e0;
  return;
}


/* WaterShovelModule::StaticNew() */

WaterShovelModule * WaterShovelModule::StaticNew(void)

{
  WaterShovelModule *this;
  
  this = ::operator_new(0x18);
  WaterShovelModule(this);
  return this;
}


/* WaterShovelModule::registerForEvents() */

void __thiscall WaterShovelModule::registerForEvents(WaterShovelModule *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantCreate);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<WaterShovelModule,void(WaterShovelModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaterShovelModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall WaterShovelModule::AddResourceRequirements(WaterShovelModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ZombieArchmageGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"WaterShovelAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

