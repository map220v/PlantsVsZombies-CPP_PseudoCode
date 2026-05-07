// Class: LevelofTheDayActivityInfo


/* LevelofTheDayActivityInfo::~LevelofTheDayActivityInfo() */

void __thiscall
LevelofTheDayActivityInfo::~LevelofTheDayActivityInfo(LevelofTheDayActivityInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06866880;
  nop();
  return;
}


/* LevelofTheDayActivityInfo::~LevelofTheDayActivityInfo() */

void __thiscall
LevelofTheDayActivityInfo::~LevelofTheDayActivityInfo(LevelofTheDayActivityInfo *this)

{
  ~LevelofTheDayActivityInfo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelofTheDayActivityInfo::StaticClassInit() */

void LevelofTheDayActivityInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelofTheDayActivityInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_045a2a98,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelofTheDayActivityInfo::StaticGetClass() */

long * LevelofTheDayActivityInfo::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"LevelofTheDayActivityInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelofTheDayActivityInfo::GetClass() const */

long * LevelofTheDayActivityInfo::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"LevelofTheDayActivityInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelofTheDayActivityInfo::LevelofTheDayActivityInfo() */

void __thiscall
LevelofTheDayActivityInfo::LevelofTheDayActivityInfo(LevelofTheDayActivityInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_06866880;
  return;
}


/* LevelofTheDayActivityInfo::StaticNew() */

LevelofTheDayActivityInfo * LevelofTheDayActivityInfo::StaticNew(void)

{
  LevelofTheDayActivityInfo *this;
  
  this = ::operator_new(0x18);
  LevelofTheDayActivityInfo(this);
  return this;
}

