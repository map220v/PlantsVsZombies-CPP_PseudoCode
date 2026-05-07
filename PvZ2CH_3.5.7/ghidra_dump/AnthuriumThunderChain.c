// Class: AnthuriumThunderChain


/* AnthuriumThunderChain::~AnthuriumThunderChain() */

void __thiscall AnthuriumThunderChain::~AnthuriumThunderChain(AnthuriumThunderChain *this)

{
  *(undefined ***)this = &PTR_GetClass_0680e640;
  nop();
  return;
}


/* AnthuriumThunderChain::~AnthuriumThunderChain() */

void __thiscall AnthuriumThunderChain::~AnthuriumThunderChain(AnthuriumThunderChain *this)

{
  ~AnthuriumThunderChain(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnthuriumThunderChain::StaticClassInit() */

void AnthuriumThunderChain::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnthuriumThunderChain");
    (*pcVar2)(plVar1,asStack_10,FUN_0421ec78,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnthuriumThunderChain::StaticGetClass() */

long * AnthuriumThunderChain::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AnthuriumThunderChain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnthuriumThunderChain::GetClass() const */

long * AnthuriumThunderChain::GetClass(void)

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
  (*pcVar3)(plVar1,"AnthuriumThunderChain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnthuriumThunderChain::AnthuriumThunderChain(AnthuriumThunderChain&&) */

void __thiscall
AnthuriumThunderChain::AnthuriumThunderChain
          (AnthuriumThunderChain *this,AnthuriumThunderChain *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0680e640;
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_1 + 8));
  Sexy::Point::Point((Point *)(this + 0x10),(TPoint *)(param_1 + 0x10));
  return;
}


/* AnthuriumThunderChain::AnthuriumThunderChain() */

void __thiscall AnthuriumThunderChain::AnthuriumThunderChain(AnthuriumThunderChain *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0680e640;
  Sexy::Point::Point((Point *)(this + 8));
  Sexy::Point::Point((Point *)(this + 0x10));
  return;
}


/* AnthuriumThunderChain::StaticNew() */

AnthuriumThunderChain * AnthuriumThunderChain::StaticNew(void)

{
  AnthuriumThunderChain *this;
  
  this = ::operator_new(0x18);
  AnthuriumThunderChain(this);
  return this;
}


/* AnthuriumThunderChain::AnthuriumThunderChain(Sexy::Point const&, Sexy::Point const&) */

void __thiscall
AnthuriumThunderChain::AnthuriumThunderChain
          (AnthuriumThunderChain *this,Point *param_1,Point *param_2)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0680e640;
  Sexy::Point::Point((Point *)(this + 8));
  Sexy::Point::Point((Point *)(this + 0x10));
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnthuriumThunderChain::OnSameGride(AnthuriumThunderChain const&) */

void __thiscall
AnthuriumThunderChain::OnSameGride(AnthuriumThunderChain *this,AnthuriumThunderChain *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  TPoint<int> aTStack_28 [8];
  TPoint<int> aTStack_20 [8];
  TPoint aTStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*(uint *)(this + 8),*(int *)(this + 0xc),
             (int)___stack_chk_guard);
  iVar3 = (int)lVar4;
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*(uint *)(this + 0x10),*(int *)(this + 0x14),iVar3);
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*(uint *)(param_1 + 8),*(int *)(param_1 + 0xc),iVar3);
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*(uint *)(param_1 + 0x10),*(int *)(param_1 + 0x14),iVar3);
  cVar1 = Sexy::TPoint<int>::operator==(aTStack_28,aTStack_18);
  if (cVar1 != '\0') {
    cVar1 = Sexy::TPoint<int>::operator==(aTStack_20,aTStack_10);
    if (cVar1 != '\0') goto LAB_0421e904;
  }
  cVar2 = Sexy::TPoint<int>::operator==(aTStack_28,aTStack_10);
  cVar1 = '\0';
  if (cVar2 != '\0') {
    cVar1 = Sexy::TPoint<int>::operator==(aTStack_20,aTStack_18);
  }
LAB_0421e904:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

