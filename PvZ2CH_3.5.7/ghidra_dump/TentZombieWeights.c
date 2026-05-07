// Class: TentZombieWeights


/* TentZombieWeights::~TentZombieWeights() */

void __thiscall TentZombieWeights::~TentZombieWeights(TentZombieWeights *this)

{
  *(undefined ***)this = &PTR_GetClass_06997530;
  BasicZombieWeights::~BasicZombieWeights((BasicZombieWeights *)this);
  return;
}


/* TentZombieWeights::~TentZombieWeights() */

void __thiscall TentZombieWeights::~TentZombieWeights(TentZombieWeights *this)

{
  ~TentZombieWeights(this);
  AK::FreeHook(this);
  return;
}


/* TentZombieWeights::TentZombieWeights() */

void __thiscall TentZombieWeights::TentZombieWeights(TentZombieWeights *this)

{
  BasicZombieWeights::BasicZombieWeights((BasicZombieWeights *)this);
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined ***)this = &PTR_GetClass_06997530;
  return;
}


/* TentZombieWeights::StaticNew() */

TentZombieWeights * TentZombieWeights::StaticNew(void)

{
  TentZombieWeights *this;
  
  this = ::operator_new(0x20);
  TentZombieWeights(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TentZombieWeights::StaticClassInit() */

void TentZombieWeights::StaticClassInit(void)

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
    std::string::string(asStack_10,"TentZombieWeights");
    (*pcVar2)(plVar1,asStack_10,FUN_04ca080c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TentZombieWeights::StaticGetClass() */

long * TentZombieWeights::StaticGetClass(void)

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
  uVar2 = BasicZombieWeights::StaticGetClass();
  (*pcVar3)(plVar1,"TentZombieWeights",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TentZombieWeights::GetClass() const */

long * TentZombieWeights::GetClass(void)

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
  uVar2 = BasicZombieWeights::StaticGetClass();
  (*pcVar3)(plVar1,"TentZombieWeights",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TentZombieWeights::TentZombieWeights(TentZombieWeights const&) */

void __thiscall
TentZombieWeights::TentZombieWeights(TentZombieWeights *this,TentZombieWeights *param_1)

{
  BasicZombieWeights::BasicZombieWeights((BasicZombieWeights *)this,(BasicZombieWeights *)param_1);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined ***)this = &PTR_GetClass_06997530;
  return;
}


/* TentZombieWeights::TEMPNAMEPLACEHOLDERVALUE(TentZombieWeights const&) */

TentZombieWeights * __thiscall
TentZombieWeights::operator=(TentZombieWeights *this,TentZombieWeights *param_1)

{
  BasicZombieWeights::operator=((BasicZombieWeights *)this,(BasicZombieWeights *)param_1);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return this;
}


/* TentZombieWeights::TentZombieWeights(TentZombieWeights&&) */

void __thiscall
TentZombieWeights::TentZombieWeights(TentZombieWeights *this,TentZombieWeights *param_1)

{
  BasicZombieWeights::BasicZombieWeights((BasicZombieWeights *)this,(BasicZombieWeights *)param_1);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined ***)this = &PTR_GetClass_06997530;
  return;
}

