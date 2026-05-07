// Class: GeneralTaskRealSecretStoreListener


/* GeneralTaskRealSecretStoreListener::onBuySecretStore() */

void __thiscall
GeneralTaskRealSecretStoreListener::onBuySecretStore(GeneralTaskRealSecretStoreListener *this)

{
  (**(code **)(*(long *)this + 0x58))(this,1);
  return;
}


/* GeneralTaskRealSecretStoreListener::~GeneralTaskRealSecretStoreListener() */

void __thiscall
GeneralTaskRealSecretStoreListener::~GeneralTaskRealSecretStoreListener
          (GeneralTaskRealSecretStoreListener *this)

{
  *(undefined ***)this = &PTR_GetClass_067106f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskRealSecretStoreListener::~GeneralTaskRealSecretStoreListener() */

void __thiscall
GeneralTaskRealSecretStoreListener::~GeneralTaskRealSecretStoreListener
          (GeneralTaskRealSecretStoreListener *this)

{
  ~GeneralTaskRealSecretStoreListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskRealSecretStoreListener::GeneralTaskRealSecretStoreListener() */

void __thiscall
GeneralTaskRealSecretStoreListener::GeneralTaskRealSecretStoreListener
          (GeneralTaskRealSecretStoreListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_067106f0;
  return;
}


/* GeneralTaskRealSecretStoreListener::StaticNew() */

GeneralTaskRealSecretStoreListener * GeneralTaskRealSecretStoreListener::StaticNew(void)

{
  GeneralTaskRealSecretStoreListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskRealSecretStoreListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskRealSecretStoreListener::StaticClassInit() */

void GeneralTaskRealSecretStoreListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskRealSecretStoreListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8d6a4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskRealSecretStoreListener::StaticGetClass() */

long * GeneralTaskRealSecretStoreListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskRealSecretStoreListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskRealSecretStoreListener::GetClass() const */

long * GeneralTaskRealSecretStoreListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskRealSecretStoreListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskRealSecretStoreListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskRealSecretStoreListener::RegisterListener
          (GeneralTaskRealSecretStoreListener *this,GeneralTask *param_1)

{
  undefined *this_00;
  long lVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuySecretStore);
  Sexy::Delegate0::
  Delegate0<GeneralTaskRealSecretStoreListener,void(GeneralTaskRealSecretStoreListener::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::BuyRealSecretStore,aDStack_38);
  lVar1 = ___stack_chk_guard;
  this[8] = (GeneralTaskRealSecretStoreListener)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

