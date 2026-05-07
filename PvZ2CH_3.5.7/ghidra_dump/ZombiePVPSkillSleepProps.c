// Class: ZombiePVPSkillSleepProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkillSleepProps::StaticClassInit() */

void ZombiePVPSkillSleepProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPSkillSleepProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04a95d64,0x288,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkillSleepProps::StaticGetClass() */

long * ZombiePVPSkillSleepProps::StaticGetClass(void)

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
  uVar2 = ZombiePVPSkillProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkillSleepProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkillSleepProps::GetClass() const */

long * ZombiePVPSkillSleepProps::GetClass(void)

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
  uVar2 = ZombiePVPSkillProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkillSleepProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkillSleepProps::ZombiePVPSkillSleepProps() */

void __thiscall ZombiePVPSkillSleepProps::ZombiePVPSkillSleepProps(ZombiePVPSkillSleepProps *this)

{
  ZombiePVPSkillProps::ZombiePVPSkillProps((ZombiePVPSkillProps *)this);
  *(undefined4 *)(this + 0x280) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_06944eb0;
  return;
}


/* ZombiePVPSkillSleepProps::StaticNew() */

ZombiePVPSkillSleepProps * ZombiePVPSkillSleepProps::StaticNew(void)

{
  ZombiePVPSkillSleepProps *this;
  
  this = ::operator_new(0x288);
  ZombiePVPSkillSleepProps(this);
  return this;
}


/* ZombiePVPSkillSleepProps::~ZombiePVPSkillSleepProps() */

void __thiscall ZombiePVPSkillSleepProps::~ZombiePVPSkillSleepProps(ZombiePVPSkillSleepProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06944eb0;
  ZombiePVPSkillProps::~ZombiePVPSkillProps((ZombiePVPSkillProps *)this);
  return;
}


/* ZombiePVPSkillSleepProps::~ZombiePVPSkillSleepProps() */

void __thiscall ZombiePVPSkillSleepProps::~ZombiePVPSkillSleepProps(ZombiePVPSkillSleepProps *this)

{
  ~ZombiePVPSkillSleepProps(this);
  AK::FreeHook(this);
  return;
}

