// Class: CallofWishObtainIntegralListener


/* CallofWishObtainIntegralListener::OnGenericObtainIntegral(int, int) */

void __thiscall
CallofWishObtainIntegralListener::OnGenericObtainIntegral
          (CallofWishObtainIntegralListener *this,int param_1,int param_2)

{
  if ((param_1 == 1) &&
     ((**(code **)(*(long *)this + 0x58))(this,param_2),
     *(int *)(*(long *)(this + 0x10) + 0x14) == 2)) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* CallofWishObtainIntegralListener::~CallofWishObtainIntegralListener() */

void __thiscall
CallofWishObtainIntegralListener::~CallofWishObtainIntegralListener
          (CallofWishObtainIntegralListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f670;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* CallofWishObtainIntegralListener::~CallofWishObtainIntegralListener() */

void __thiscall
CallofWishObtainIntegralListener::~CallofWishObtainIntegralListener
          (CallofWishObtainIntegralListener *this)

{
  ~CallofWishObtainIntegralListener(this);
  AK::FreeHook(this);
  return;
}


/* CallofWishObtainIntegralListener::CallofWishObtainIntegralListener() */

void __thiscall
CallofWishObtainIntegralListener::CallofWishObtainIntegralListener
          (CallofWishObtainIntegralListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f670;
  return;
}


/* CallofWishObtainIntegralListener::StaticNew() */

CallofWishObtainIntegralListener * CallofWishObtainIntegralListener::StaticNew(void)

{
  CallofWishObtainIntegralListener *this;
  
  this = ::operator_new(0x18);
  CallofWishObtainIntegralListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishObtainIntegralListener::StaticClassInit() */

void CallofWishObtainIntegralListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"CallofWishObtainIntegralListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a88634,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CallofWishObtainIntegralListener::StaticGetClass() */

long * CallofWishObtainIntegralListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CallofWishObtainIntegralListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CallofWishObtainIntegralListener::GetClass() const */

long * CallofWishObtainIntegralListener::GetClass(void)

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
  (*pcVar3)(plVar1,"CallofWishObtainIntegralListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CallofWishObtainIntegralListener::RegisterListener(GeneralTask*) */

void __thiscall
CallofWishObtainIntegralListener::RegisterListener
          (CallofWishObtainIntegralListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,OnGenericObtainIntegral);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<CallofWishObtainIntegralListener,void(CallofWishObtainIntegralListener::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::GenericObtainIntegral,&local_40);
  this[8] = (CallofWishObtainIntegralListener)0x1;
  return;
}

