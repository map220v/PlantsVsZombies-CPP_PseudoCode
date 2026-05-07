// Class: WebInfo


/* WebInfo::~WebInfo() */

void __thiscall WebInfo::~WebInfo(WebInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06981c10;
  std::string::~string((string *)(this + 0x18));
  nop();
  return;
}


/* WebInfo::~WebInfo() */

void __thiscall WebInfo::~WebInfo(WebInfo *this)

{
  ~WebInfo(this);
  AK::FreeHook(this);
  return;
}


/* WebInfo::WebInfo() */

void __thiscall WebInfo::WebInfo(WebInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06981c10;
  Set8BytesTo0(this + 0x18);
  return;
}


/* WebInfo::StaticNew() */

WebInfo * WebInfo::StaticNew(void)

{
  WebInfo *this;
  
  this = ::operator_new(0x28);
  WebInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebInfo::StaticClassInit() */

void WebInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"WebInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_04c090a8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WebInfo::StaticGetClass() */

long * WebInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WebInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WebInfo::GetClass() const */

long * WebInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"WebInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WebInfo::TEMPNAMEPLACEHOLDERVALUE(WebInfo const&) */

WebInfo * __thiscall WebInfo::operator=(WebInfo *this,WebInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = uVar1;
  return this;
}

