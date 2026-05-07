// Class: GridItemSpeakerZombossProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSpeakerZombossProps::StaticClassInit() */

void GridItemSpeakerZombossProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSpeakerZombossProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03e33710,0x148,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSpeakerZombossProps::StaticGetClass() */

long * GridItemSpeakerZombossProps::StaticGetClass(void)

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
  uVar2 = GridItemSpeakerProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSpeakerZombossProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSpeakerZombossProps::GetClass() const */

long * GridItemSpeakerZombossProps::GetClass(void)

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
  uVar2 = GridItemSpeakerProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSpeakerZombossProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSpeakerZombossProps::GridItemSpeakerZombossProps() */

void __thiscall
GridItemSpeakerZombossProps::GridItemSpeakerZombossProps(GridItemSpeakerZombossProps *this)

{
  GridItemSpeakerProps::GridItemSpeakerProps((GridItemSpeakerProps *)this);
  *(undefined ***)this = &PTR_GetClass_06789800;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x13c));
  return;
}


/* GridItemSpeakerZombossProps::StaticNew() */

GridItemSpeakerZombossProps * GridItemSpeakerZombossProps::StaticNew(void)

{
  GridItemSpeakerZombossProps *this;
  
  this = ::operator_new(0x148);
  GridItemSpeakerZombossProps(this);
  return this;
}


/* GridItemSpeakerZombossProps::~GridItemSpeakerZombossProps() */

void __thiscall
GridItemSpeakerZombossProps::~GridItemSpeakerZombossProps(GridItemSpeakerZombossProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06789800;
  GridItemSpeakerProps::~GridItemSpeakerProps((GridItemSpeakerProps *)this);
  return;
}


/* GridItemSpeakerZombossProps::~GridItemSpeakerZombossProps() */

void __thiscall
GridItemSpeakerZombossProps::~GridItemSpeakerZombossProps(GridItemSpeakerZombossProps *this)

{
  ~GridItemSpeakerZombossProps(this);
  AK::FreeHook(this);
  return;
}

