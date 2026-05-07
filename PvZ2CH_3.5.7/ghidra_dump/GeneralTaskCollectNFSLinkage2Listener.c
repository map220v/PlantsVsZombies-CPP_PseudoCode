// Class: GeneralTaskCollectNFSLinkage2Listener


/* GeneralTaskCollectNFSLinkage2Listener::onLinkageReward2() */

void __thiscall
GeneralTaskCollectNFSLinkage2Listener::onLinkageReward2(GeneralTaskCollectNFSLinkage2Listener *this)

{
  (**(code **)(*(long *)this + 0x58))(this,1);
  return;
}


/* GeneralTaskCollectNFSLinkage2Listener::~GeneralTaskCollectNFSLinkage2Listener() */

void __thiscall
GeneralTaskCollectNFSLinkage2Listener::~GeneralTaskCollectNFSLinkage2Listener
          (GeneralTaskCollectNFSLinkage2Listener *this)

{
  *(undefined ***)this = &PTR_GetClass_067111f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* GeneralTaskCollectNFSLinkage2Listener::~GeneralTaskCollectNFSLinkage2Listener() */

void __thiscall
GeneralTaskCollectNFSLinkage2Listener::~GeneralTaskCollectNFSLinkage2Listener
          (GeneralTaskCollectNFSLinkage2Listener *this)

{
  ~GeneralTaskCollectNFSLinkage2Listener(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskCollectNFSLinkage2Listener::StaticClassInit() */

void GeneralTaskCollectNFSLinkage2Listener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskCollectNFSLinkage2Listener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a90be8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskCollectNFSLinkage2Listener::StaticGetClass() */

long * GeneralTaskCollectNFSLinkage2Listener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskCollectNFSLinkage2Listener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskCollectNFSLinkage2Listener::GetClass() const */

long * GeneralTaskCollectNFSLinkage2Listener::GetClass(void)

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
  (*pcVar3)(plVar1,"GeneralTaskCollectNFSLinkage2Listener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskCollectNFSLinkage2Listener::GeneralTaskCollectNFSLinkage2Listener() */

void __thiscall
GeneralTaskCollectNFSLinkage2Listener::GeneralTaskCollectNFSLinkage2Listener
          (GeneralTaskCollectNFSLinkage2Listener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_067111f0;
  return;
}


/* GeneralTaskCollectNFSLinkage2Listener::StaticNew() */

GeneralTaskCollectNFSLinkage2Listener * GeneralTaskCollectNFSLinkage2Listener::StaticNew(void)

{
  GeneralTaskCollectNFSLinkage2Listener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskCollectNFSLinkage2Listener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskCollectNFSLinkage2Listener::RegisterListener(GeneralTask*) */

void __thiscall
GeneralTaskCollectNFSLinkage2Listener::RegisterListener
          (GeneralTaskCollectNFSLinkage2Listener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onLinkageReward2);
  Sexy::Delegate0::
  Delegate0<GeneralTaskCollectNFSLinkage2Listener,void(GeneralTaskCollectNFSLinkage2Listener::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NFSLinkageAvatarReward,aDStack_38);
  lVar1 = ___stack_chk_guard;
  this[8] = (GeneralTaskCollectNFSLinkage2Listener)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

