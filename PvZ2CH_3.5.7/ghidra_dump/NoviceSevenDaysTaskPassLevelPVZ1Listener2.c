// Class: NoviceSevenDaysTaskPassLevelPVZ1Listener2


/* NoviceSevenDaysTaskPassLevelPVZ1Listener2::~NoviceSevenDaysTaskPassLevelPVZ1Listener2() */

void __thiscall
NoviceSevenDaysTaskPassLevelPVZ1Listener2::~NoviceSevenDaysTaskPassLevelPVZ1Listener2
          (NoviceSevenDaysTaskPassLevelPVZ1Listener2 *this)

{
  *(undefined ***)this = &PTR_GetClass_0670ec70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NoviceSevenDaysTaskPassLevelPVZ1Listener2::~NoviceSevenDaysTaskPassLevelPVZ1Listener2() */

void __thiscall
NoviceSevenDaysTaskPassLevelPVZ1Listener2::~NoviceSevenDaysTaskPassLevelPVZ1Listener2
          (NoviceSevenDaysTaskPassLevelPVZ1Listener2 *this)

{
  ~NoviceSevenDaysTaskPassLevelPVZ1Listener2(this);
  AK::FreeHook(this);
  return;
}


/* NoviceSevenDaysTaskPassLevelPVZ1Listener2::NoviceSevenDaysTaskPassLevelPVZ1Listener2() */

void __thiscall
NoviceSevenDaysTaskPassLevelPVZ1Listener2::NoviceSevenDaysTaskPassLevelPVZ1Listener2
          (NoviceSevenDaysTaskPassLevelPVZ1Listener2 *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670ec70;
  return;
}


/* NoviceSevenDaysTaskPassLevelPVZ1Listener2::StaticNew() */

NoviceSevenDaysTaskPassLevelPVZ1Listener2 *
NoviceSevenDaysTaskPassLevelPVZ1Listener2::StaticNew(void)

{
  NoviceSevenDaysTaskPassLevelPVZ1Listener2 *this;
  
  this = ::operator_new(0x18);
  NoviceSevenDaysTaskPassLevelPVZ1Listener2(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskPassLevelPVZ1Listener2::StaticClassInit() */

void NoviceSevenDaysTaskPassLevelPVZ1Listener2::StaticClassInit(void)

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
    std::string::string(asStack_10,"NoviceSevenDaysTaskPassLevelPVZ1Listener2");
    (*pcVar2)(plVar1,asStack_10,FUN_03a85574,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysTaskPassLevelPVZ1Listener2::StaticGetClass() */

long * NoviceSevenDaysTaskPassLevelPVZ1Listener2::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskPassLevelPVZ1Listener2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskPassLevelPVZ1Listener2::GetClass() const */

long * NoviceSevenDaysTaskPassLevelPVZ1Listener2::GetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskPassLevelPVZ1Listener2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskPassLevelPVZ1Listener2::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
NoviceSevenDaysTaskPassLevelPVZ1Listener2::onLevelEnded
          (NoviceSevenDaysTaskPassLevelPVZ1Listener2 *this,LevelDefinitionForTask *param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  NoviceSevenDaysTaskWorldLevelData *pNVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pNVar3 = Sexy::RtObject::Cast<NoviceSevenDaysTaskWorldLevelData>(this_00);
    if (((pNVar3 != (NoviceSevenDaysTaskWorldLevelData *)0x0) &&
        (cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level(), cVar2 != '\0')) &&
       ((pNVar3[0x8e] == (NoviceSevenDaysTaskWorldLevelData)0x0 ||
        (param_1[0x21] != (LevelDefinitionForTask)0x0)))) {
      (**(code **)(*(long *)this + 0x58))(this,1);
      return;
    }
  }
  return;
}


/* NoviceSevenDaysTaskPassLevelPVZ1Listener2::RegisterListener(GeneralTask*) */

void __thiscall
NoviceSevenDaysTaskPassLevelPVZ1Listener2::RegisterListener
          (NoviceSevenDaysTaskPassLevelPVZ1Listener2 *this,GeneralTask *param_1)

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
  Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<NoviceSevenDaysTaskPassLevelPVZ1Listener2,void(NoviceSevenDaysTaskPassLevelPVZ1Listener2::*)(LevelDefinitionForTask*)>>
            ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_40);
  this[8] = (NoviceSevenDaysTaskPassLevelPVZ1Listener2)0x1;
  return;
}

