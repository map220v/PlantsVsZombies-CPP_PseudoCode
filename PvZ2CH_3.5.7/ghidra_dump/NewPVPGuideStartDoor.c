// Class: NewPVPGuideStartDoor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGuideStartDoor::StaticClassInit() */

void NewPVPGuideStartDoor::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPGuideStartDoor");
    (*pcVar2)(plVar1,asStack_10,FUN_034c13c8,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGuideStartDoor::StaticGetClass() */

long * NewPVPGuideStartDoor::StaticGetClass(void)

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
  uVar2 = GuideStartDoor::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGuideStartDoor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPGuideStartDoor::GetClass() const */

long * NewPVPGuideStartDoor::GetClass(void)

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
  uVar2 = GuideStartDoor::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGuideStartDoor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPGuideStartDoor::~NewPVPGuideStartDoor() */

void __thiscall NewPVPGuideStartDoor::~NewPVPGuideStartDoor(NewPVPGuideStartDoor *this)

{
  *(undefined ***)this = &PTR_GetClass_0664d160;
  GuideStartDoor::~GuideStartDoor((GuideStartDoor *)this);
  return;
}


/* NewPVPGuideStartDoor::~NewPVPGuideStartDoor() */

void __thiscall NewPVPGuideStartDoor::~NewPVPGuideStartDoor(NewPVPGuideStartDoor *this)

{
  ~NewPVPGuideStartDoor(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPGuideStartDoor::NewPVPGuideStartDoor() */

void __thiscall NewPVPGuideStartDoor::NewPVPGuideStartDoor(NewPVPGuideStartDoor *this)

{
  GuideStartDoor::GuideStartDoor((GuideStartDoor *)this);
  *(undefined ***)this = &PTR_GetClass_0664d160;
  return;
}


/* NewPVPGuideStartDoor::StaticNew() */

NewPVPGuideStartDoor * NewPVPGuideStartDoor::StaticNew(void)

{
  NewPVPGuideStartDoor *this;
  
  this = ::operator_new(0x128);
  NewPVPGuideStartDoor(this);
  return this;
}

