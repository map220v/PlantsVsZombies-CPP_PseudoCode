// Class: PennyPerkMoreScore


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMoreScore::StaticClassInit() */

void PennyPerkMoreScore::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkMoreScore");
    (*pcVar2)(plVar1,asStack_10,FUN_036bf70c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkMoreScore::StaticGetClass() */

long * PennyPerkMoreScore::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkMoreScore",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkMoreScore::GetClass() const */

long * PennyPerkMoreScore::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyPerkMoreScore",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkMoreScore::GetBonusScorePercentage() */

undefined4 __thiscall PennyPerkMoreScore::GetBonusScorePercentage(PennyPerkMoreScore *this)

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


/* PennyPerkMoreScore::~PennyPerkMoreScore() */

void __thiscall PennyPerkMoreScore::~PennyPerkMoreScore(PennyPerkMoreScore *this)

{
  *(undefined ***)this = &PTR_GetClass_066812c0;
  PennyPerk::~PennyPerk((PennyPerk *)this);
  return;
}


/* PennyPerkMoreScore::~PennyPerkMoreScore() */

void __thiscall PennyPerkMoreScore::~PennyPerkMoreScore(PennyPerkMoreScore *this)

{
  ~PennyPerkMoreScore(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkMoreScore::PennyPerkMoreScore() */

void __thiscall PennyPerkMoreScore::PennyPerkMoreScore(PennyPerkMoreScore *this)

{
  PennyPerk::PennyPerk((PennyPerk *)this);
  *(undefined ***)this = &PTR_GetClass_066812c0;
  return;
}


/* PennyPerkMoreScore::StaticNew() */

PennyPerkMoreScore * PennyPerkMoreScore::StaticNew(void)

{
  PennyPerkMoreScore *this;
  
  this = ::operator_new(0x28);
  PennyPerkMoreScore(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkMoreScore::Activate() */

void __thiscall PennyPerkMoreScore::Activate(PennyPerkMoreScore *this)

{
  bool bVar1;
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
           FUN_036be178(*(undefined8 *)(extraout_x0 + 0x60),(long)*(int *)(this + 0x10));
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x24) = *puVar2;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

