// Class: PVPSkillBombRocket


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSkillBombRocket::StaticClassInit() */

void PVPSkillBombRocket::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVPSkillBombRocket");
    (*pcVar2)(plVar1,asStack_10,FUN_04a94d54,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSkillBombRocket::StaticGetClass() */

long * PVPSkillBombRocket::StaticGetClass(void)

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
  uVar2 = CannonRocket::StaticGetClass();
  (*pcVar3)(plVar1,"PVPSkillBombRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPSkillBombRocket::GetClass() const */

long * PVPSkillBombRocket::GetClass(void)

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
  uVar2 = CannonRocket::StaticGetClass();
  (*pcVar3)(plVar1,"PVPSkillBombRocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPSkillBombRocket::PVPSkillBombRocket() */

void __thiscall PVPSkillBombRocket::PVPSkillBombRocket(PVPSkillBombRocket *this)

{
  CannonRocket::CannonRocket((CannonRocket *)this);
  *(undefined ***)this = &PTR_GetClass_06944210;
  *(undefined ***)(this + 0x10) = &PTR__PVPSkillBombRocket_06944400;
  return;
}


/* PVPSkillBombRocket::StaticNew() */

PVPSkillBombRocket * PVPSkillBombRocket::StaticNew(void)

{
  PVPSkillBombRocket *this;
  
  this = ::operator_new(0xc0);
  PVPSkillBombRocket(this);
  return this;
}


/* PVPSkillBombRocket::~PVPSkillBombRocket() */

void __thiscall PVPSkillBombRocket::~PVPSkillBombRocket(PVPSkillBombRocket *this)

{
  *(undefined ***)this = &PTR_GetClass_06944210;
  *(undefined ***)(this + 0x10) = &PTR__PVPSkillBombRocket_06944400;
  CannonRocket::~CannonRocket((CannonRocket *)this);
  return;
}


/* non-virtual thunk to PVPSkillBombRocket::~PVPSkillBombRocket() */

void __thiscall PVPSkillBombRocket::~PVPSkillBombRocket(PVPSkillBombRocket *this)

{
  ~PVPSkillBombRocket(this + -0x10);
  return;
}


/* PVPSkillBombRocket::~PVPSkillBombRocket() */

void __thiscall PVPSkillBombRocket::~PVPSkillBombRocket(PVPSkillBombRocket *this)

{
  ~PVPSkillBombRocket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVPSkillBombRocket::~PVPSkillBombRocket() */

void __thiscall PVPSkillBombRocket::~PVPSkillBombRocket(PVPSkillBombRocket *this)

{
  ~PVPSkillBombRocket(this + -0x10);
  return;
}


/* PVPSkillBombRocket::OnRocketHitGround() */

void __thiscall PVPSkillBombRocket::OnRocketHitGround(PVPSkillBombRocket *this)

{
  MessageRouter::Post<PVPSkillBombRocket*,PVPSkillBombRocket*>
            ((MessageRouter *)gMessageRouter,Message::PVPSkillBombRocketExploded,this);
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}

