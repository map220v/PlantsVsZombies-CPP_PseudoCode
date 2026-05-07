// Class: NetworkLawnStringInfo


/* NetworkLawnStringInfo::~NetworkLawnStringInfo() */

void __thiscall NetworkLawnStringInfo::~NetworkLawnStringInfo(NetworkLawnStringInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0661da50;
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* NetworkLawnStringInfo::~NetworkLawnStringInfo() */

void __thiscall NetworkLawnStringInfo::~NetworkLawnStringInfo(NetworkLawnStringInfo *this)

{
  ~NetworkLawnStringInfo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkLawnStringInfo::NetworkLawnStringInfo() */

void __thiscall NetworkLawnStringInfo::NetworkLawnStringInfo(NetworkLawnStringInfo *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0661da50;
  std::string::string((string *)(this + 8),"");
  nop();
  std::string::string((string *)(this + 0x10),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkLawnStringInfo::StaticNew() */

NetworkLawnStringInfo * NetworkLawnStringInfo::StaticNew(void)

{
  NetworkLawnStringInfo *this;
  
  this = ::operator_new(0x18);
  NetworkLawnStringInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkLawnStringInfo::StaticClassInit() */

void NetworkLawnStringInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkLawnStringInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_033f93b4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkLawnStringInfo::StaticGetClass() */

long * NetworkLawnStringInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkLawnStringInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkLawnStringInfo::GetClass() const */

long * NetworkLawnStringInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkLawnStringInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkLawnStringInfo::SerializeJson(std::string const&) */

void __thiscall NetworkLawnStringInfo::SerializeJson(NetworkLawnStringInfo *this,string *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x38);
  std::string::string(asStack_10,"File");
  uVar1 = (*pcVar2)(this,param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkLawnStringInfo::SerializeObj() */

void NetworkLawnStringInfo::SerializeObj(void)

{
  long *in_x0;
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  pcVar1 = *(code **)(*in_x0 + 0x40);
  std::string::string(asStack_10,"File");
  (*pcVar1)();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

