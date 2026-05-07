// Class: GeneralTaskListener


/* GeneralTaskListener::CounterAdd(int) */

void __thiscall GeneralTaskListener::CounterAdd(GeneralTaskListener *this,int param_1)

{
  (**(code **)(*(long *)this + 0x60))(this,param_1 + *(int *)(*(long *)(this + 0x10) + 0x10));
  return;
}


/* GeneralTaskListener::~GeneralTaskListener() */

void __thiscall GeneralTaskListener::~GeneralTaskListener(GeneralTaskListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670d6f0;
  nop();
  return;
}


/* GeneralTaskListener::~GeneralTaskListener() */

void __thiscall GeneralTaskListener::~GeneralTaskListener(GeneralTaskListener *this)

{
  ~GeneralTaskListener(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeneralTaskListener::StaticClassInit() */

void GeneralTaskListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeneralTaskListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a7d28c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeneralTaskListener::StaticGetClass() */

long * GeneralTaskListener::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralTaskListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskListener::GetClass() const */

long * GeneralTaskListener::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"GeneralTaskListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeneralTaskListener::GeneralTaskListener() */

void __thiscall GeneralTaskListener::GeneralTaskListener(GeneralTaskListener *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  this[8] = (GeneralTaskListener)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_0670d6f0;
  return;
}


/* GeneralTaskListener::StaticNew() */

GeneralTaskListener * GeneralTaskListener::StaticNew(void)

{
  GeneralTaskListener *this;
  
  this = ::operator_new(0x18);
  GeneralTaskListener(this);
  return this;
}


/* GeneralTaskListener::RemoveListener() */

void __thiscall GeneralTaskListener::RemoveListener(GeneralTaskListener *this)

{
  if (this[8] != (GeneralTaskListener)0x0) {
    MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
    this[8] = (GeneralTaskListener)0x0;
  }
  return;
}


/* GeneralTaskListener::CounterSet(int) */

void __thiscall GeneralTaskListener::CounterSet(GeneralTaskListener *this,int param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x10);
  if ((plVar3 != (long *)0x0) && (cVar1 = (**(code **)(*plVar3 + 0x78))(plVar3), cVar1 == '\0')) {
    lVar2 = *(long *)(this + 0x10);
    *(int *)(lVar2 + 0x10) = param_1;
    *(undefined4 *)(lVar2 + 0x14) = 1;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 0x20));
    if (*(int *)(lVar2 + 0x28) <= param_1) {
      plVar3 = *(long **)(this + 0x10);
      *(undefined4 *)((long)plVar3 + 0x14) = 2;
      (**(code **)(*plVar3 + 0x70))(plVar3);
      RemoveListener(this);
    }
    (**(code **)(**(long **)(this + 0x10) + 0x60))(*(long **)(this + 0x10));
    return;
  }
  return;
}

