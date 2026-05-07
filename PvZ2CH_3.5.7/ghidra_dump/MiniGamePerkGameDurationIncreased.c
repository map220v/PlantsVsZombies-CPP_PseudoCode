// Class: MiniGamePerkGameDurationIncreased


/* MiniGamePerkGameDurationIncreased::GetDurationIncreased() */

undefined4 __thiscall
MiniGamePerkGameDurationIncreased::GetDurationIncreased(MiniGamePerkGameDurationIncreased *this)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkGameDurationIncreased::StaticClassInit() */

void MiniGamePerkGameDurationIncreased::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkGameDurationIncreased");
    (*pcVar2)(plVar1,asStack_10,FUN_03897cc8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkGameDurationIncreased::StaticGetClass() */

long * MiniGamePerkGameDurationIncreased::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkGameDurationIncreased",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkGameDurationIncreased::GetClass() const */

long * MiniGamePerkGameDurationIncreased::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkGameDurationIncreased",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkGameDurationIncreased::~MiniGamePerkGameDurationIncreased() */

void __thiscall
MiniGamePerkGameDurationIncreased::~MiniGamePerkGameDurationIncreased
          (MiniGamePerkGameDurationIncreased *this)

{
  *(undefined ***)this = &PTR_GetClass_066b02d0;
  MiniGamePerk::~MiniGamePerk((MiniGamePerk *)this);
  return;
}


/* MiniGamePerkGameDurationIncreased::~MiniGamePerkGameDurationIncreased() */

void __thiscall
MiniGamePerkGameDurationIncreased::~MiniGamePerkGameDurationIncreased
          (MiniGamePerkGameDurationIncreased *this)

{
  ~MiniGamePerkGameDurationIncreased(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkGameDurationIncreased::MiniGamePerkGameDurationIncreased() */

void __thiscall
MiniGamePerkGameDurationIncreased::MiniGamePerkGameDurationIncreased
          (MiniGamePerkGameDurationIncreased *this)

{
  MiniGamePerk::MiniGamePerk((MiniGamePerk *)this);
  *(undefined ***)this = &PTR_GetClass_066b02d0;
  return;
}


/* MiniGamePerkGameDurationIncreased::StaticNew() */

MiniGamePerkGameDurationIncreased * MiniGamePerkGameDurationIncreased::StaticNew(void)

{
  MiniGamePerkGameDurationIncreased *this;
  
  this = ::operator_new(0x28);
  MiniGamePerkGameDurationIncreased(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkGameDurationIncreased::Activate() */

void __thiscall MiniGamePerkGameDurationIncreased::Activate(MiniGamePerkGameDurationIncreased *this)

{
  bool bVar1;
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
           FUN_03896040(*(undefined8 *)(extraout_x0 + 0x48),(long)*(int *)(this + 0x10));
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x24) = *puVar2;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

