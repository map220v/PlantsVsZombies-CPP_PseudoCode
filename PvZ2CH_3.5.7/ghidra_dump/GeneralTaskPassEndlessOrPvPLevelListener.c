// Class: GeneralTaskPassEndlessOrPvPLevelListener


/* GeneralTaskPassEndlessOrPvPLevelListener::onFinishEndlessLevel(bool) */

void __thiscall
GeneralTaskPassEndlessOrPvPLevelListener::onFinishEndlessLevel
          (GeneralTaskPassEndlessOrPvPLevelListener *this,bool param_1)

{
  if (param_1) {
    (**(code **)(*(long *)this + 0x58))(this,1);
  }
  return;
}


/* GeneralTaskPassEndlessOrPvPLevelListener::onPassLevel(bool, bool, int) */

void GeneralTaskPassEndlessOrPvPLevelListener::onPassLevel(bool param_1,bool param_2,int param_3)

{
  char cVar1;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if ((cVar1 != '\0') && (param_2)) {
    (**(code **)(*(long *)(ulong)param_1 + 0x58))((long *)(ulong)param_1,1);
  }
  return;
}


/* GeneralTaskPassEndlessOrPvPLevelListener::~GeneralTaskPassEndlessOrPvPLevelListener() */

void __thiscall
GeneralTaskPassEndlessOrPvPLevelListener::~GeneralTaskPassEndlessOrPvPLevelListener
          (GeneralTaskPassEndlessOrPvPLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_067110f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskPassEndlessOrPvPLevelListener::~GeneralTaskPassEndlessOrPvPLevelListener() */

void __thiscall
GeneralTaskPassEndlessOrPvPLevelListener::~GeneralTaskPassEndlessOrPvPLevelListener
          (GeneralTaskPassEndlessOrPvPLevelListener *this)

{
  ~GeneralTaskPassEndlessOrPvPLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskPassEndlessOrPvPLevelListener::GeneralTaskPassEndlessOrPvPLevelListener() */

void __thiscall
GeneralTaskPassEndlessOrPvPLevelListener::GeneralTaskPassEndlessOrPvPLevelListener
          (GeneralTaskPassEndlessOrPvPLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_067110f0;
  return;
}


/* GeneralTaskPassEndlessOrPvPLevelListener::StaticNew() */

GeneralTaskPassEndlessOrPvPLevelListener * GeneralTaskPassEndlessOrPvPLevelListener::StaticNew(void)

{
  GeneralTaskPassEndlessOrPvPLevelListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskPassEndlessOrPvPLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPassEndlessOrPvPLevelListener::StaticClassInit() */

void GeneralTaskPassEndlessOrPvPLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskPassEndlessOrPvPLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a90764,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskPassEndlessOrPvPLevelListener::StaticGetClass() */

long * GeneralTaskPassEndlessOrPvPLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPassEndlessOrPvPLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPassEndlessOrPvPLevelListener::GetClass() const */

long * GeneralTaskPassEndlessOrPvPLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPassEndlessOrPvPLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPassEndlessOrPvPLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskPassEndlessOrPvPLevelListener::RegisterListener
          (GeneralTaskPassEndlessOrPvPLevelListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFinishEndlessLevel);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<GeneralTaskPassEndlessOrPvPLevelListener,void(GeneralTaskPassEndlessOrPvPLevelListener::*)(bool)>>
            ((MessageRouter *)puVar1,Message::FinishEndlessLevel,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPassLevel);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<bool,bool,int,Sexy::CBMemberTranslatorX<GeneralTaskPassEndlessOrPvPLevelListener,void(GeneralTaskPassEndlessOrPvPLevelListener::*)(bool,bool,int)>>
            ((MessageRouter *)puVar1,Message::NewPVPPassLevel,&local_70);
  this[8] = (GeneralTaskPassEndlessOrPvPLevelListener)0x1;
  return;
}

