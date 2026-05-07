// Class: ObtainGeneSequenceOREssenceLevelListener


/* ObtainGeneSequenceOREssenceLevelListener::onAddGene(int) */

void ObtainGeneSequenceOREssenceLevelListener::onAddGene(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x58))();
  return;
}


/* ObtainGeneSequenceOREssenceLevelListener::~ObtainGeneSequenceOREssenceLevelListener() */

void __thiscall
ObtainGeneSequenceOREssenceLevelListener::~ObtainGeneSequenceOREssenceLevelListener
          (ObtainGeneSequenceOREssenceLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710df0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* ObtainGeneSequenceOREssenceLevelListener::~ObtainGeneSequenceOREssenceLevelListener() */

void __thiscall
ObtainGeneSequenceOREssenceLevelListener::~ObtainGeneSequenceOREssenceLevelListener
          (ObtainGeneSequenceOREssenceLevelListener *this)

{
  ~ObtainGeneSequenceOREssenceLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* ObtainGeneSequenceOREssenceLevelListener::ObtainGeneSequenceOREssenceLevelListener() */

void __thiscall
ObtainGeneSequenceOREssenceLevelListener::ObtainGeneSequenceOREssenceLevelListener
          (ObtainGeneSequenceOREssenceLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710df0;
  return;
}


/* ObtainGeneSequenceOREssenceLevelListener::StaticNew() */

ObtainGeneSequenceOREssenceLevelListener * ObtainGeneSequenceOREssenceLevelListener::StaticNew(void)

{
  ObtainGeneSequenceOREssenceLevelListener *this;
  
  this = ::operator_new(0x18);
  ObtainGeneSequenceOREssenceLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ObtainGeneSequenceOREssenceLevelListener::StaticClassInit() */

void ObtainGeneSequenceOREssenceLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"ObtainGeneSequenceOREssenceLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8f8c4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ObtainGeneSequenceOREssenceLevelListener::StaticGetClass() */

long * ObtainGeneSequenceOREssenceLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ObtainGeneSequenceOREssenceLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ObtainGeneSequenceOREssenceLevelListener::GetClass() const */

long * ObtainGeneSequenceOREssenceLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"ObtainGeneSequenceOREssenceLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ObtainGeneSequenceOREssenceLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
ObtainGeneSequenceOREssenceLevelListener::RegisterListener
          (ObtainGeneSequenceOREssenceLevelListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
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
            ((ReceivedDataCallback *)this,onAddGene);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ObtainGeneSequenceOREssenceLevelListener,void(ObtainGeneSequenceOREssenceLevelListener::*)(int)>>
            ((MessageRouter *)puVar1,Message::ObtainGeneSequence,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAddGene);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ObtainGeneSequenceOREssenceLevelListener,void(ObtainGeneSequenceOREssenceLevelListener::*)(int)>>
            ((MessageRouter *)puVar1,Message::ObtainGeneEssence,&local_50);
  this[8] = (ObtainGeneSequenceOREssenceLevelListener)0x1;
  return;
}

