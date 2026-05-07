// Class: SeedPacket_IZombie


/* SeedPacket_IZombie::~SeedPacket_IZombie() */

void __thiscall SeedPacket_IZombie::~SeedPacket_IZombie(SeedPacket_IZombie *this)

{
  *(undefined ***)this = &PTR_GetClass_06620f40;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_IZombie_06621180;
  SeedPacket::~SeedPacket((SeedPacket *)this);
  return;
}


/* non-virtual thunk to SeedPacket_IZombie::~SeedPacket_IZombie() */

void __thiscall SeedPacket_IZombie::~SeedPacket_IZombie(SeedPacket_IZombie *this)

{
  ~SeedPacket_IZombie(this + -0x10);
  return;
}


/* SeedPacket_IZombie::~SeedPacket_IZombie() */

void __thiscall SeedPacket_IZombie::~SeedPacket_IZombie(SeedPacket_IZombie *this)

{
  ~SeedPacket_IZombie(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedPacket_IZombie::~SeedPacket_IZombie() */

void __thiscall SeedPacket_IZombie::~SeedPacket_IZombie(SeedPacket_IZombie *this)

{
  ~SeedPacket_IZombie(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_IZombie::StaticClassInit() */

void SeedPacket_IZombie::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedPacket_IZombie");
    (*pcVar2)(plVar1,asStack_10,FUN_034197d8,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_IZombie::StaticGetClass() */

long * SeedPacket_IZombie::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SeedPacket_IZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_IZombie::GetClass() const */

long * SeedPacket_IZombie::GetClass(void)

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
  (*pcVar3)(plVar1,"SeedPacket_IZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_IZombie::SeedPacket_IZombie() */

void __thiscall SeedPacket_IZombie::SeedPacket_IZombie(SeedPacket_IZombie *this)

{
  SeedPacket::SeedPacket((SeedPacket *)this);
  *(undefined ***)this = &PTR_GetClass_06620f40;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_IZombie_06621180;
  return;
}


/* SeedPacket_IZombie::StaticNew() */

SeedPacket_IZombie * SeedPacket_IZombie::StaticNew(void)

{
  SeedPacket_IZombie *this;
  
  this = ::operator_new(0x200);
  SeedPacket_IZombie(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_IZombie::CreateZombieCursor(Sexy::Touch) */

void __thiscall SeedPacket_IZombie::CreateZombieCursor(undefined8 param_1,undefined8 param_2)

{
  IZombieCursor *pIVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  pIVar1 = ::operator_new(0x60);
  IZombieCursor::IZombieCursor(pIVar1,param_2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pIVar1);
}

