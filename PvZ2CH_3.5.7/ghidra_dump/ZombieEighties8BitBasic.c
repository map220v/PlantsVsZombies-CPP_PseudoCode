// Class: ZombieEighties8BitBasic


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEighties8BitBasic::playEatSound() */

void __thiscall ZombieEighties8BitBasic::playEatSound(ZombieEighties8BitBasic *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_Zomb_Eighties_8Bit_Chomp");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEighties8BitBasic::~ZombieEighties8BitBasic() */

void __thiscall ZombieEighties8BitBasic::~ZombieEighties8BitBasic(ZombieEighties8BitBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_068ed020;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEighties8BitBasic_068eda48;
  ZombieEightiesBasic::~ZombieEightiesBasic((ZombieEightiesBasic *)this);
  return;
}


/* non-virtual thunk to ZombieEighties8BitBasic::~ZombieEighties8BitBasic() */

void __thiscall ZombieEighties8BitBasic::~ZombieEighties8BitBasic(ZombieEighties8BitBasic *this)

{
  ~ZombieEighties8BitBasic(this + -0x10);
  return;
}


/* ZombieEighties8BitBasic::~ZombieEighties8BitBasic() */

void __thiscall ZombieEighties8BitBasic::~ZombieEighties8BitBasic(ZombieEighties8BitBasic *this)

{
  ~ZombieEighties8BitBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEighties8BitBasic::~ZombieEighties8BitBasic() */

void __thiscall ZombieEighties8BitBasic::~ZombieEighties8BitBasic(ZombieEighties8BitBasic *this)

{
  ~ZombieEighties8BitBasic(this + -0x10);
  return;
}


/* ZombieEighties8BitBasic::ZombieEighties8BitBasic() */

void __thiscall ZombieEighties8BitBasic::ZombieEighties8BitBasic(ZombieEighties8BitBasic *this)

{
  ZombieEightiesBasic::ZombieEightiesBasic((ZombieEightiesBasic *)this);
  *(undefined ***)this = &PTR_GetClass_068ed020;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEighties8BitBasic_068eda48;
  return;
}


/* ZombieEighties8BitBasic::StaticNew() */

ZombieEighties8BitBasic * ZombieEighties8BitBasic::StaticNew(void)

{
  ZombieEighties8BitBasic *this;
  
  this = ::operator_new(0x810);
  ZombieEighties8BitBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEighties8BitBasic::StaticClassInit() */

void ZombieEighties8BitBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEighties8BitBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_047dd6c0,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEighties8BitBasic::StaticGetClass() */

long * ZombieEighties8BitBasic::StaticGetClass(void)

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
  uVar2 = ZombieEightiesBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEighties8BitBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEighties8BitBasic::GetClass() const */

long * ZombieEighties8BitBasic::GetClass(void)

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
  uVar2 = ZombieEightiesBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEighties8BitBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

