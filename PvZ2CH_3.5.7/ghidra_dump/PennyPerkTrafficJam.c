// Class: PennyPerkTrafficJam


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkTrafficJam::StaticClassInit() */

void PennyPerkTrafficJam::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkTrafficJam");
    (*pcVar2)(plVar1,asStack_10,FUN_036bf30c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkTrafficJam::StaticGetClass() */

long * PennyPerkTrafficJam::StaticGetClass(void)

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
  uVar2 = PennyPerk::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkTrafficJam",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkTrafficJam::GetClass() const */

long * PennyPerkTrafficJam::GetClass(void)

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
  uVar2 = PennyPerk::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkTrafficJam",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkTrafficJam::GetDelaySeconds() */

undefined4 __thiscall PennyPerkTrafficJam::GetDelaySeconds(PennyPerkTrafficJam *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_036bdf70(this[0x20]);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = *(undefined4 *)(this + 0x24);
  }
  return uVar2;
}


/* PennyPerkTrafficJam::~PennyPerkTrafficJam() */

void __thiscall PennyPerkTrafficJam::~PennyPerkTrafficJam(PennyPerkTrafficJam *this)

{
  *(undefined ***)this = &PTR_GetClass_06681180;
  PennyPerk::~PennyPerk((PennyPerk *)this);
  return;
}


/* PennyPerkTrafficJam::~PennyPerkTrafficJam() */

void __thiscall PennyPerkTrafficJam::~PennyPerkTrafficJam(PennyPerkTrafficJam *this)

{
  ~PennyPerkTrafficJam(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkTrafficJam::PennyPerkTrafficJam() */

void __thiscall PennyPerkTrafficJam::PennyPerkTrafficJam(PennyPerkTrafficJam *this)

{
  PennyPerk::PennyPerk((PennyPerk *)this);
  *(undefined ***)this = &PTR_GetClass_06681180;
  return;
}


/* PennyPerkTrafficJam::StaticNew() */

PennyPerkTrafficJam * PennyPerkTrafficJam::StaticNew(void)

{
  PennyPerkTrafficJam *this;
  
  this = ::operator_new(0x28);
  PennyPerkTrafficJam(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkTrafficJam::Activate() */

void __thiscall PennyPerkTrafficJam::Activate(PennyPerkTrafficJam *this)

{
  long lVar1;
  long extraout_x0;
  undefined4 *puVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  puVar2 = (undefined4 *)
           FUN_036bdf94(*(undefined8 *)(extraout_x0 + 0x60),(long)*(int *)(this + 0x10));
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x24) = *puVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

