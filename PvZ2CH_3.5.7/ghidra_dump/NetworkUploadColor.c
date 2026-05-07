// Class: NetworkUploadColor


/* NetworkUploadColor::~NetworkUploadColor() */

void __thiscall NetworkUploadColor::~NetworkUploadColor(NetworkUploadColor *this)

{
  *(undefined ***)this = &PTR_GetClass_0677e6b0;
  *(undefined ***)(this + 8) = &PTR__NetworkUploadColor_0677e718;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkUploadColor::~NetworkUploadColor() */

void __thiscall NetworkUploadColor::~NetworkUploadColor(NetworkUploadColor *this)

{
  ~NetworkUploadColor(this + -8);
  return;
}


/* NetworkUploadColor::~NetworkUploadColor() */

void __thiscall NetworkUploadColor::~NetworkUploadColor(NetworkUploadColor *this)

{
  ~NetworkUploadColor(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkUploadColor::~NetworkUploadColor() */

void __thiscall NetworkUploadColor::~NetworkUploadColor(NetworkUploadColor *this)

{
  ~NetworkUploadColor(this + -8);
  return;
}


/* NetworkUploadColor::NetworkUploadColor() */

void __thiscall NetworkUploadColor::NetworkUploadColor(NetworkUploadColor *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0677e6b0;
  *(undefined ***)(this + 8) = &PTR__NetworkUploadColor_0677e718;
  return;
}


/* NetworkUploadColor::StaticNew() */

NetworkUploadColor * NetworkUploadColor::StaticNew(void)

{
  NetworkUploadColor *this;
  
  this = ::operator_new(0x18);
  NetworkUploadColor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkUploadColor::StaticClassInit() */

void NetworkUploadColor::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkUploadColor");
    (*pcVar2)(plVar1,asStack_10,FUN_03de3158,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkUploadColor::StaticGetClass() */

long * NetworkUploadColor::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"NetworkUploadColor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkUploadColor::GetClass() const */

long * NetworkUploadColor::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"NetworkUploadColor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

