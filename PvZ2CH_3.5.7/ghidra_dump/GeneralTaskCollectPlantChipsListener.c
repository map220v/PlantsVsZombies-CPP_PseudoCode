// Class: GeneralTaskCollectPlantChipsListener


/* GeneralTaskCollectPlantChipsListener::onObtainPlantChip(int) */

void GeneralTaskCollectPlantChipsListener::onObtainPlantChip(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x58))();
  return;
}


/* GeneralTaskCollectPlantChipsListener::~GeneralTaskCollectPlantChipsListener() */

void __thiscall
GeneralTaskCollectPlantChipsListener::~GeneralTaskCollectPlantChipsListener
          (GeneralTaskCollectPlantChipsListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670e370;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskCollectPlantChipsListener::~GeneralTaskCollectPlantChipsListener() */

void __thiscall
GeneralTaskCollectPlantChipsListener::~GeneralTaskCollectPlantChipsListener
          (GeneralTaskCollectPlantChipsListener *this)

{
  ~GeneralTaskCollectPlantChipsListener(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskCollectPlantChipsListener::StaticClassInit() */

void GeneralTaskCollectPlantChipsListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskCollectPlantChipsListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a82910,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskCollectPlantChipsListener::StaticGetClass() */

long * GeneralTaskCollectPlantChipsListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskCollectPlantChipsListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskCollectPlantChipsListener::GetClass() const */

long * GeneralTaskCollectPlantChipsListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskCollectPlantChipsListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskCollectPlantChipsListener::GeneralTaskCollectPlantChipsListener() */

void __thiscall
GeneralTaskCollectPlantChipsListener::GeneralTaskCollectPlantChipsListener
          (GeneralTaskCollectPlantChipsListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670e370;
  return;
}


/* GeneralTaskCollectPlantChipsListener::StaticNew() */

GeneralTaskCollectPlantChipsListener * GeneralTaskCollectPlantChipsListener::StaticNew(void)

{
  GeneralTaskCollectPlantChipsListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskCollectPlantChipsListener(this);
  return this;
}


/* GeneralTaskCollectPlantChipsListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskCollectPlantChipsListener::RegisterListener
          (GeneralTaskCollectPlantChipsListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onObtainPlantChip);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<GeneralTaskCollectPlantChipsListener,void(GeneralTaskCollectPlantChipsListener::*)(int)>>
            ((MessageRouter *)puVar1,Message::ObtainPlantChips,&local_40);
  this[8] = (GeneralTaskCollectPlantChipsListener)0x1;
  return;
}

