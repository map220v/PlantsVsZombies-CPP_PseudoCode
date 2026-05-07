// Class: ZombieVanModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVanModule::StaticClassInit() */

void ZombieVanModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieVanModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04f3d85c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieVanModule::StaticGetClass() */

long * ZombieVanModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieVanModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieVanModule::ZombieVanModule() */

void __thiscall ZombieVanModule::ZombieVanModule(ZombieVanModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06a188a0;
  return;
}


/* ZombieVanModule::StaticNew() */

ZombieVanModule * ZombieVanModule::StaticNew(void)

{
  ZombieVanModule *this;
  
  this = ::operator_new(0x18);
  ZombieVanModule(this);
  return this;
}


/* ZombieVanModule::~ZombieVanModule() */

void __thiscall ZombieVanModule::~ZombieVanModule(ZombieVanModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06a188a0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ZombieVanModule::~ZombieVanModule() */

void __thiscall ZombieVanModule::~ZombieVanModule(ZombieVanModule *this)

{
  ~ZombieVanModule(this);
  AK::FreeHook(this);
  return;
}


/* ZombieVanModule::registerForEvents() */

void __thiscall ZombieVanModule::registerForEvents(ZombieVanModule *this)

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
            ((ReceivedDataCallback *)this,onGatherPlantlessPlantingRestrictions);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<ZombieVanModule,void(ZombieVanModule::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantlessPlantingRestrictions,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieVanModule::onGatherPlantlessPlantingRestrictions(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
ZombieVanModule::onGatherPlantlessPlantingRestrictions
          (ZombieVanModule *this,Point *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (6 < *(int *)param_1) {
    local_c = 0x4e;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

