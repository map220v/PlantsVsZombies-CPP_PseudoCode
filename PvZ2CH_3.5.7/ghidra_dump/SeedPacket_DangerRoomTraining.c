// Class: SeedPacket_DangerRoomTraining


/* SeedPacket_DangerRoomTraining::~SeedPacket_DangerRoomTraining() */

void __thiscall
SeedPacket_DangerRoomTraining::~SeedPacket_DangerRoomTraining(SeedPacket_DangerRoomTraining *this)

{
  *(undefined ***)this = &PTR_GetClass_0693e600;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_DangerRoomTraining_0693e840;
  SeedPacket::~SeedPacket((SeedPacket *)this);
  return;
}


/* non-virtual thunk to SeedPacket_DangerRoomTraining::~SeedPacket_DangerRoomTraining() */

void __thiscall
SeedPacket_DangerRoomTraining::~SeedPacket_DangerRoomTraining(SeedPacket_DangerRoomTraining *this)

{
  ~SeedPacket_DangerRoomTraining(this + -0x10);
  return;
}


/* SeedPacket_DangerRoomTraining::~SeedPacket_DangerRoomTraining() */

void __thiscall
SeedPacket_DangerRoomTraining::~SeedPacket_DangerRoomTraining(SeedPacket_DangerRoomTraining *this)

{
  ~SeedPacket_DangerRoomTraining(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedPacket_DangerRoomTraining::~SeedPacket_DangerRoomTraining() */

void __thiscall
SeedPacket_DangerRoomTraining::~SeedPacket_DangerRoomTraining(SeedPacket_DangerRoomTraining *this)

{
  ~SeedPacket_DangerRoomTraining(this + -0x10);
  return;
}


/* SeedPacket_DangerRoomTraining::SeedPacket_DangerRoomTraining() */

void __thiscall
SeedPacket_DangerRoomTraining::SeedPacket_DangerRoomTraining(SeedPacket_DangerRoomTraining *this)

{
  SeedPacket::SeedPacket((SeedPacket *)this);
  *(undefined ***)this = &PTR_GetClass_0693e600;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_DangerRoomTraining_0693e840;
  return;
}


/* SeedPacket_DangerRoomTraining::StaticNew() */

SeedPacket_DangerRoomTraining * SeedPacket_DangerRoomTraining::StaticNew(void)

{
  SeedPacket_DangerRoomTraining *this;
  
  this = ::operator_new(0x200);
  SeedPacket_DangerRoomTraining(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_DangerRoomTraining::StaticClassInit() */

void SeedPacket_DangerRoomTraining::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedPacket_DangerRoomTraining");
    (*pcVar2)(plVar1,asStack_10,FUN_04a80250,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_DangerRoomTraining::StaticGetClass() */

long * SeedPacket_DangerRoomTraining::StaticGetClass(void)

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
  uVar2 = SeedPacket::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket_DangerRoomTraining",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_DangerRoomTraining::GetClass() const */

long * SeedPacket_DangerRoomTraining::GetClass(void)

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
  uVar2 = SeedPacket::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket_DangerRoomTraining",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

