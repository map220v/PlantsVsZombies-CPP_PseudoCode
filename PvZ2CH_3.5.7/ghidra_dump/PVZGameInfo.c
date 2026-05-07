// Class: PVZGameInfo


/* PVZGameInfo::PVZGameInfo(std::string const&, std::string const&, unsigned int) */

void __thiscall
PVZGameInfo::PVZGameInfo(PVZGameInfo *this,string *param_1,string *param_2,uint param_3)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06847460;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  thunk_FUN_05475e00(this + 8,param_1);
  thunk_FUN_05475e00(this + 0x10,param_2);
  *(ulong *)(this + 0x18) = (ulong)param_3;
  return;
}


/* PVZGameInfo::~PVZGameInfo() */

void __thiscall PVZGameInfo::~PVZGameInfo(PVZGameInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06847460;
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* PVZGameInfo::~PVZGameInfo() */

void __thiscall PVZGameInfo::~PVZGameInfo(PVZGameInfo *this)

{
  ~PVZGameInfo(this);
  AK::FreeHook(this);
  return;
}


/* PVZGameInfo::PVZGameInfo() */

void __thiscall PVZGameInfo::PVZGameInfo(PVZGameInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06847460;
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  return;
}


/* PVZGameInfo::StaticNew() */

PVZGameInfo * PVZGameInfo::StaticNew(void)

{
  PVZGameInfo *this;
  
  this = ::operator_new(0x20);
  PVZGameInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZGameInfo::StaticClassInit() */

void PVZGameInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZGameInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_043ed9f0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZGameInfo::StaticGetClass() */

long * PVZGameInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZGameInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZGameInfo::GetClass() const */

long * PVZGameInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZGameInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZGameInfo::GetUptimeMS() const */

long __thiscall PVZGameInfo::GetUptimeMS(PVZGameInfo *this)

{
  long lVar1;
  
  lVar1 = Sexy::SexyTime((Sexy *)this);
  return lVar1 - *(long *)(this + 0x18);
}

