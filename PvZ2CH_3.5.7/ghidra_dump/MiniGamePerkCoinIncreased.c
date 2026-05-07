// Class: MiniGamePerkCoinIncreased


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkCoinIncreased::StaticClassInit() */

void MiniGamePerkCoinIncreased::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkCoinIncreased");
    (*pcVar2)(plVar1,asStack_10,FUN_03898010,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkCoinIncreased::StaticGetClass() */

long * MiniGamePerkCoinIncreased::StaticGetClass(void)

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
  uVar2 = MiniGamePerk::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkCoinIncreased",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkCoinIncreased::GetClass() const */

long * MiniGamePerkCoinIncreased::GetClass(void)

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
  uVar2 = MiniGamePerk::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkCoinIncreased",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkCoinIncreased::GetCoinIncreased() */

undefined4 __thiscall MiniGamePerkCoinIncreased::GetCoinIncreased(MiniGamePerkCoinIncreased *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_03896018(this[0x20]);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = *(undefined4 *)(this + 0x24);
  }
  return uVar2;
}


/* MiniGamePerkCoinIncreased::~MiniGamePerkCoinIncreased() */

void __thiscall
MiniGamePerkCoinIncreased::~MiniGamePerkCoinIncreased(MiniGamePerkCoinIncreased *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0410;
  MiniGamePerk::~MiniGamePerk((MiniGamePerk *)this);
  return;
}


/* MiniGamePerkCoinIncreased::~MiniGamePerkCoinIncreased() */

void __thiscall
MiniGamePerkCoinIncreased::~MiniGamePerkCoinIncreased(MiniGamePerkCoinIncreased *this)

{
  ~MiniGamePerkCoinIncreased(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkCoinIncreased::MiniGamePerkCoinIncreased() */

void __thiscall
MiniGamePerkCoinIncreased::MiniGamePerkCoinIncreased(MiniGamePerkCoinIncreased *this)

{
  MiniGamePerk::MiniGamePerk((MiniGamePerk *)this);
  *(undefined ***)this = &PTR_GetClass_066b0410;
  return;
}


/* MiniGamePerkCoinIncreased::StaticNew() */

MiniGamePerkCoinIncreased * MiniGamePerkCoinIncreased::StaticNew(void)

{
  MiniGamePerkCoinIncreased *this;
  
  this = ::operator_new(0x28);
  MiniGamePerkCoinIncreased(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkCoinIncreased::Activate() */

void __thiscall MiniGamePerkCoinIncreased::Activate(MiniGamePerkCoinIncreased *this)

{
  long lVar1;
  long extraout_x0;
  undefined4 *puVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGamePerk::Activate((MiniGamePerk *)this);
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  puVar2 = (undefined4 *)
           FUN_03896768(*(undefined8 *)(extraout_x0 + 0x48),(long)*(int *)(this + 0x10));
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x24) = *puVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

