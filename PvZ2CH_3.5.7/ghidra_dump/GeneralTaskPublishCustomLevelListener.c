// Class: GeneralTaskPublishCustomLevelListener


/* GeneralTaskPublishCustomLevelListener::onPublishCustomLevel() */

void __thiscall
GeneralTaskPublishCustomLevelListener::onPublishCustomLevel
          (GeneralTaskPublishCustomLevelListener *this)

{
  (**(code **)(*(long *)this + 0x58))(this,1);
  return;
}


/* GeneralTaskPublishCustomLevelListener::~GeneralTaskPublishCustomLevelListener() */

void __thiscall
GeneralTaskPublishCustomLevelListener::~GeneralTaskPublishCustomLevelListener
          (GeneralTaskPublishCustomLevelListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670ff70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskPublishCustomLevelListener::~GeneralTaskPublishCustomLevelListener() */

void __thiscall
GeneralTaskPublishCustomLevelListener::~GeneralTaskPublishCustomLevelListener
          (GeneralTaskPublishCustomLevelListener *this)

{
  ~GeneralTaskPublishCustomLevelListener(this);
  AK::FreeHook(this);
  return;
}


/* GeneralTaskPublishCustomLevelListener::GeneralTaskPublishCustomLevelListener() */

void __thiscall
GeneralTaskPublishCustomLevelListener::GeneralTaskPublishCustomLevelListener
          (GeneralTaskPublishCustomLevelListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670ff70;
  return;
}


/* GeneralTaskPublishCustomLevelListener::StaticNew() */

GeneralTaskPublishCustomLevelListener * GeneralTaskPublishCustomLevelListener::StaticNew(void)

{
  GeneralTaskPublishCustomLevelListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskPublishCustomLevelListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPublishCustomLevelListener::StaticClassInit() */

void GeneralTaskPublishCustomLevelListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskPublishCustomLevelListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8b214,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskPublishCustomLevelListener::StaticGetClass() */

long * GeneralTaskPublishCustomLevelListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPublishCustomLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskPublishCustomLevelListener::GetClass() const */

long * GeneralTaskPublishCustomLevelListener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskPublishCustomLevelListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskPublishCustomLevelListener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskPublishCustomLevelListener::RegisterListener
          (GeneralTaskPublishCustomLevelListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onPublishCustomLevel);
  Sexy::Delegate0::
  Delegate0<GeneralTaskPublishCustomLevelListener,void(GeneralTaskPublishCustomLevelListener::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PublishCustomLevel,aDStack_38);
  lVar1 = ___stack_chk_guard;
  this[8] = (GeneralTaskPublishCustomLevelListener)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

