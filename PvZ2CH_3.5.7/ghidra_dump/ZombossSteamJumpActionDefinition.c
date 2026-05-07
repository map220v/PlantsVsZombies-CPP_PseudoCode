// Class: ZombossSteamJumpActionDefinition


/* ZombossSteamJumpActionDefinition::~ZombossSteamJumpActionDefinition() */

void __thiscall
ZombossSteamJumpActionDefinition::~ZombossSteamJumpActionDefinition
          (ZombossSteamJumpActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06751d00;
  ZombossJumpActionDefinition::~ZombossJumpActionDefinition((ZombossJumpActionDefinition *)this);
  return;
}


/* ZombossSteamJumpActionDefinition::~ZombossSteamJumpActionDefinition() */

void __thiscall
ZombossSteamJumpActionDefinition::~ZombossSteamJumpActionDefinition
          (ZombossSteamJumpActionDefinition *this)

{
  ~ZombossSteamJumpActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamJumpActionDefinition::StaticClassInit() */

void ZombossSteamJumpActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamJumpActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_03c44ae8,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamJumpActionDefinition::StaticGetClass() */

long * ZombossSteamJumpActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombossJumpActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamJumpActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamJumpActionDefinition::GetClass() const */

long * ZombossSteamJumpActionDefinition::GetClass(void)

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
  uVar2 = ZombossJumpActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamJumpActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamJumpActionDefinition::ZombossSteamJumpActionDefinition() */

void __thiscall
ZombossSteamJumpActionDefinition::ZombossSteamJumpActionDefinition
          (ZombossSteamJumpActionDefinition *this)

{
  ZombossJumpActionDefinition::ZombossJumpActionDefinition((ZombossJumpActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06751d00;
  Sexy::Point::Point((Point *)(this + 0x44));
  return;
}


/* ZombossSteamJumpActionDefinition::StaticNew() */

ZombossSteamJumpActionDefinition * ZombossSteamJumpActionDefinition::StaticNew(void)

{
  ZombossSteamJumpActionDefinition *this;
  
  this = ::operator_new(0x50);
  ZombossSteamJumpActionDefinition(this);
  return this;
}

