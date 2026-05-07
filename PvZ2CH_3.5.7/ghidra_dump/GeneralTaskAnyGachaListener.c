// Class: GeneralTaskAnyGachaListener


/* GeneralTaskAnyGachaListener::onFinishGacha(int, int) */

void __thiscall
GeneralTaskAnyGachaListener::onFinishGacha
          (GeneralTaskAnyGachaListener *this,int param_1,int param_2)

{
  (**(code **)(*(long *)this + 0x58))(this,param_2);
  return;
}


/* GeneralTaskAnyGachaListener::onFinishSecretGacha(int) */

void GeneralTaskAnyGachaListener::onFinishSecretGacha(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x58))();
  return;
}


/* GeneralTaskAnyGachaListener::onFinishLimitGacha(int) */

void GeneralTaskAnyGachaListener::onFinishLimitGacha(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x58))();
  return;
}


/* GeneralTaskAnyGachaListener::~GeneralTaskAnyGachaListener() */

void __thiscall
GeneralTaskAnyGachaListener::~GeneralTaskAnyGachaListener(GeneralTaskAnyGachaListener *this)

{
  *(undefined ***)this = &PTR_GetClass_067100f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskAnyGachaListener::~GeneralTaskAnyGachaListener() */

void __thiscall
GeneralTaskAnyGachaListener::~GeneralTaskAnyGachaListener(GeneralTaskAnyGachaListener *this)

{
  ~GeneralTaskAnyGachaListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskAnyGachaListener::GeneralTaskAnyGachaListener() */

void __thiscall
GeneralTaskAnyGachaListener::GeneralTaskAnyGachaListener(GeneralTaskAnyGachaListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_067100f0;
  return;
}


/* GeneralTaskAnyGachaListener::StaticNew() */

GeneralTaskAnyGachaListener * GeneralTaskAnyGachaListener::StaticNew(void)

{
  GeneralTaskAnyGachaListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskAnyGachaListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskAnyGachaListener::StaticClassInit() */

void GeneralTaskAnyGachaListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskAnyGachaListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8b964,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskAnyGachaListener::StaticGetClass() */

long * GeneralTaskAnyGachaListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskAnyGachaListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskAnyGachaListener::GetClass() const */

long * GeneralTaskAnyGachaListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskAnyGachaListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskAnyGachaListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskAnyGachaListener::RegisterListener
          (GeneralTaskAnyGachaListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
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
            ((ReceivedDataCallback *)this,onFinishGacha);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<GeneralTaskAnyGachaListener,void(GeneralTaskAnyGachaListener::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::FinishPennyGacha,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFinishSecretGacha);
  local_90 = local_30;
  uStack_88 = uStack_28;
  local_80 = local_20;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<GeneralTaskAnyGachaListener,void(GeneralTaskAnyGachaListener::*)(int)>>
            ((MessageRouter *)puVar1,Message::FinishSecretGacha,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFinishLimitGacha);
  local_80 = local_8;
  local_90 = local_18;
  uStack_88 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<GeneralTaskAnyGachaListener,void(GeneralTaskAnyGachaListener::*)(int)>>
            ((MessageRouter *)puVar1,Message::FinishLimitGacha,&local_90);
  this[8] = (GeneralTaskAnyGachaListener)0x1;
  return;
}

