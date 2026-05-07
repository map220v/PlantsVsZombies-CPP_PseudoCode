// Class: WhackZombieWaveActionProps


/* WhackZombieWaveActionProps::GetActionClass() const */

long * WhackZombieWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WhackZombieWaveAction::sClass != (long *)0x0) {
    return WhackZombieWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WhackZombieWaveAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"WhackZombieWaveAction",uVar2,WhackZombieWaveAction::StaticNew);
  WhackZombieWaveAction::StaticClassInit();
  return WhackZombieWaveAction::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackZombieWaveActionProps::StaticClassInit() */

void WhackZombieWaveActionProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WhackZombieWaveProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03fd04ec,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WhackZombieWaveActionProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03fcfc44,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackZombieWaveActionProps::StaticGetClass() */

long * WhackZombieWaveActionProps::StaticGetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"WhackZombieWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackZombieWaveActionProps::GetClass() const */

long * WhackZombieWaveActionProps::GetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"WhackZombieWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackZombieWaveActionProps::WhackZombieWaveActionProps() */

void __thiscall
WhackZombieWaveActionProps::WhackZombieWaveActionProps(WhackZombieWaveActionProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067ad030;
  Sexy::MemoryImage::TriRep::Level::Level((Level *)(this + 0x40));
  return;
}


/* WhackZombieWaveActionProps::StaticNew() */

WhackZombieWaveActionProps * WhackZombieWaveActionProps::StaticNew(void)

{
  WhackZombieWaveActionProps *this;
  
  this = ::operator_new(0x80);
  WhackZombieWaveActionProps(this);
  return this;
}


/* WhackZombieWaveActionProps::~WhackZombieWaveActionProps() */

void __thiscall
WhackZombieWaveActionProps::~WhackZombieWaveActionProps(WhackZombieWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067ad030;
  WhackZombieWaveProps::~WhackZombieWaveProps((WhackZombieWaveProps *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* WhackZombieWaveActionProps::~WhackZombieWaveActionProps() */

void __thiscall
WhackZombieWaveActionProps::~WhackZombieWaveActionProps(WhackZombieWaveActionProps *this)

{
  ~WhackZombieWaveActionProps(this);
  AK::FreeHook(this);
  return;
}

