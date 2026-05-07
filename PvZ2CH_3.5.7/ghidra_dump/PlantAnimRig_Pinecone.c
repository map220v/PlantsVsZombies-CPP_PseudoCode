// Class: PlantAnimRig_Pinecone


/* PlantAnimRig_Pinecone::SetElec(bool) */

void __thiscall PlantAnimRig_Pinecone::SetElec(PlantAnimRig_Pinecone *this,bool param_1)

{
  this[0x3b8] = (PlantAnimRig_Pinecone)param_1;
  return;
}


/* PlantAnimRig_Pinecone::getIdleAnimationName() */

void __thiscall PlantAnimRig_Pinecone::getIdleAnimationName(PlantAnimRig_Pinecone *this)

{
  int iVar1;
  
  iVar1 = rand();
  Sexy::StrFormat("idle%d",(ulong)(iVar1 % 3 + 1));
  return;
}


/* PlantAnimRig_Pinecone::~PlantAnimRig_Pinecone() */

void __thiscall PlantAnimRig_Pinecone::~PlantAnimRig_Pinecone(PlantAnimRig_Pinecone *this)

{
  *(undefined ***)this = &PTR_GetClass_068247e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Pinecone_06824a48;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Pinecone::~PlantAnimRig_Pinecone() */

void __thiscall PlantAnimRig_Pinecone::~PlantAnimRig_Pinecone(PlantAnimRig_Pinecone *this)

{
  ~PlantAnimRig_Pinecone(this + -0x10);
  return;
}


/* PlantAnimRig_Pinecone::~PlantAnimRig_Pinecone() */

void __thiscall PlantAnimRig_Pinecone::~PlantAnimRig_Pinecone(PlantAnimRig_Pinecone *this)

{
  ~PlantAnimRig_Pinecone(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Pinecone::~PlantAnimRig_Pinecone() */

void __thiscall PlantAnimRig_Pinecone::~PlantAnimRig_Pinecone(PlantAnimRig_Pinecone *this)

{
  ~PlantAnimRig_Pinecone(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pinecone::StaticClassInit() */

void PlantAnimRig_Pinecone::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Pinecone");
    (*pcVar2)(plVar1,asStack_10,FUN_04280370,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Pinecone::StaticGetClass() */

long * PlantAnimRig_Pinecone::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Pinecone",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Pinecone::GetClass() const */

long * PlantAnimRig_Pinecone::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Pinecone",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Pinecone::getAttackAnimationName() */

void PlantAnimRig_Pinecone::getAttackAnimationName(void)

{
  long lVar1;
  PlantAnimRig_Pinecone *in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (in_x0[0x3b8] == (PlantAnimRig_Pinecone)0x0) {
    __s = "attack1";
  }
  else {
    __s = "attack2";
  }
  std::string::string(in_x8,__s);
  nop();
  SetElec(in_x0,false);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Pinecone::PlantAnimRig_Pinecone() */

void __thiscall PlantAnimRig_Pinecone::PlantAnimRig_Pinecone(PlantAnimRig_Pinecone *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Pinecone)0x0;
  *(undefined ***)this = &PTR_GetClass_068247e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Pinecone_06824a48;
  SetElec(this,false);
  return;
}


/* PlantAnimRig_Pinecone::StaticNew() */

PlantAnimRig_Pinecone * PlantAnimRig_Pinecone::StaticNew(void)

{
  PlantAnimRig_Pinecone *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Pinecone(this);
  return this;
}

