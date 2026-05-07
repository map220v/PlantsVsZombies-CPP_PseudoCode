// Class: PennyPerkQuickDelivery


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkQuickDelivery::StaticClassInit() */

void PennyPerkQuickDelivery::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkQuickDelivery");
    (*pcVar2)(plVar1,asStack_10,FUN_036c098c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkQuickDelivery::StaticGetClass() */

long * PennyPerkQuickDelivery::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkQuickDelivery",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkQuickDelivery::GetClass() const */

long * PennyPerkQuickDelivery::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkQuickDelivery",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkQuickDelivery::GetTimeReductionMultiplier() */

undefined4 __thiscall
PennyPerkQuickDelivery::GetTimeReductionMultiplier(PennyPerkQuickDelivery *this)

{
  return *(undefined4 *)(this + 0x24);
}


/* PennyPerkQuickDelivery::~PennyPerkQuickDelivery() */

void __thiscall PennyPerkQuickDelivery::~PennyPerkQuickDelivery(PennyPerkQuickDelivery *this)

{
  *(undefined ***)this = &PTR_GetClass_06681930;
  PennyPerk::~PennyPerk((PennyPerk *)this);
  return;
}


/* PennyPerkQuickDelivery::~PennyPerkQuickDelivery() */

void __thiscall PennyPerkQuickDelivery::~PennyPerkQuickDelivery(PennyPerkQuickDelivery *this)

{
  ~PennyPerkQuickDelivery(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkQuickDelivery::PennyPerkQuickDelivery() */

void __thiscall PennyPerkQuickDelivery::PennyPerkQuickDelivery(PennyPerkQuickDelivery *this)

{
  PennyPerk::PennyPerk((PennyPerk *)this);
  *(undefined ***)this = &PTR_GetClass_06681930;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* PennyPerkQuickDelivery::StaticNew() */

PennyPerkQuickDelivery * PennyPerkQuickDelivery::StaticNew(void)

{
  PennyPerkQuickDelivery *this;
  
  this = ::operator_new(0x28);
  PennyPerkQuickDelivery(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkQuickDelivery::Activate() */

void __thiscall PennyPerkQuickDelivery::Activate(PennyPerkQuickDelivery *this)

{
  long lVar1;
  long extraout_x0;
  float *pfVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pfVar2 = (float *)FUN_036be178(*(undefined8 *)(extraout_x0 + 0x60),(long)*(int *)(this + 0x10));
  uVar3 = ClampFloat(1.0 - *pfVar2 * 0.01,0.0,1.0);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x24) = uVar3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

