// Class: NoviceSevenDaysTaskPassLevelPVPListener


/* NoviceSevenDaysTaskPassLevelPVPListener::~NoviceSevenDaysTaskPassLevelPVPListener() */

void __thiscall
NoviceSevenDaysTaskPassLevelPVPListener::~NoviceSevenDaysTaskPassLevelPVPListener
          (NoviceSevenDaysTaskPassLevelPVPListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670ea70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NoviceSevenDaysTaskPassLevelPVPListener::~NoviceSevenDaysTaskPassLevelPVPListener() */

void __thiscall
NoviceSevenDaysTaskPassLevelPVPListener::~NoviceSevenDaysTaskPassLevelPVPListener
          (NoviceSevenDaysTaskPassLevelPVPListener *this)

{
  ~NoviceSevenDaysTaskPassLevelPVPListener(this);
  AK::FreeHook(this);
  return;
}


/* NoviceSevenDaysTaskPassLevelPVPListener::NoviceSevenDaysTaskPassLevelPVPListener() */

void __thiscall
NoviceSevenDaysTaskPassLevelPVPListener::NoviceSevenDaysTaskPassLevelPVPListener
          (NoviceSevenDaysTaskPassLevelPVPListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670ea70;
  return;
}


/* NoviceSevenDaysTaskPassLevelPVPListener::StaticNew() */

NoviceSevenDaysTaskPassLevelPVPListener * NoviceSevenDaysTaskPassLevelPVPListener::StaticNew(void)

{
  NoviceSevenDaysTaskPassLevelPVPListener *this;
  
  this = ::operator_new(0x18);
  NoviceSevenDaysTaskPassLevelPVPListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskPassLevelPVPListener::StaticClassInit() */

void NoviceSevenDaysTaskPassLevelPVPListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NoviceSevenDaysTaskPassLevelPVPListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a84bb4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysTaskPassLevelPVPListener::StaticGetClass() */

long * NoviceSevenDaysTaskPassLevelPVPListener::StaticGetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskPassLevelPVPListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskPassLevelPVPListener::GetClass() const */

long * NoviceSevenDaysTaskPassLevelPVPListener::GetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskPassLevelPVPListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskPassLevelPVPListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
NoviceSevenDaysTaskPassLevelPVPListener::onLevelEnded
          (NoviceSevenDaysTaskPassLevelPVPListener *this,LevelDefinitionForTask *param_1)

{
  RtObject *this_00;
  NoviceSevenDaysTaskWorldLevelData *pNVar1;
  
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
  pNVar1 = Sexy::RtObject::Cast<NoviceSevenDaysTaskWorldLevelData>(this_00);
  if (((pNVar1 != (NoviceSevenDaysTaskWorldLevelData *)0x0) &&
      (param_1[0xf] != (LevelDefinitionForTask)0x0)) &&
     ((pNVar1[0x8e] == (NoviceSevenDaysTaskWorldLevelData)0x0 ||
      (param_1[0x21] != (LevelDefinitionForTask)0x0)))) {
    (**(code **)(*(long *)this + 0x58))(this,1);
  }
  return;
}


/* NoviceSevenDaysTaskPassLevelPVPListener::RegisterListener(GeneralTask*) */

void __thiscall
NoviceSevenDaysTaskPassLevelPVPListener::RegisterListener
          (NoviceSevenDaysTaskPassLevelPVPListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<NoviceSevenDaysTaskPassLevelPVPListener,void(NoviceSevenDaysTaskPassLevelPVPListener::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[8] = (NoviceSevenDaysTaskPassLevelPVPListener)0x1;
  return;
}

