// Class: IdleAnimationSelector


/* IdleAnimationSelector::IdleAnimationSelector() */

void __thiscall IdleAnimationSelector::IdleAnimationSelector(IdleAnimationSelector *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_066db270;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Set8BytesTo0(this + 0x30);
  return;
}


/* IdleAnimationSelector::~IdleAnimationSelector() */

void __thiscall IdleAnimationSelector::~IdleAnimationSelector(IdleAnimationSelector *this)

{
  *(undefined ***)this = &PTR_GetClass_066db270;
  std::string::~string((string *)(this + 0x30));
  std::
  vector<ProbabilityValueRecord<std::string>,std::allocator<ProbabilityValueRecord<std::string>>>::
  ~vector((vector<ProbabilityValueRecord<std::string>,std::allocator<ProbabilityValueRecord<std::string>>>
           *)(this + 0x18));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* IdleAnimationSelector::~IdleAnimationSelector() */

void __thiscall IdleAnimationSelector::~IdleAnimationSelector(IdleAnimationSelector *this)

{
  ~IdleAnimationSelector(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdleAnimationSelector::StaticClassInit() */

void IdleAnimationSelector::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ProbabilityStringRecord");
    (*pcVar3)(plVar2,asStack_10,FUN_039828bc,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"IdleAnimationSelector");
    (*pcVar3)(plVar2,asStack_10,FUN_03982d1c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IdleAnimationSelector::StaticGetClass() */

long * IdleAnimationSelector::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"IdleAnimationSelector",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IdleAnimationSelector::GetClass() const */

long * IdleAnimationSelector::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"IdleAnimationSelector",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IdleAnimationSelector::StaticNew() */

IdleAnimationSelector * IdleAnimationSelector::StaticNew(void)

{
  IdleAnimationSelector *this;
  
  this = ::operator_new(0x38);
  IdleAnimationSelector(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdleAnimationSelector::GetLabel() */

void IdleAnimationSelector::GetLabel(void)

{
  long in_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03983108(asStack_10,in_x0 + 0x18);
  FUN_05474278(in_x0 + 0x30,asStack_10);
  std::string::~string(asStack_10);
  FUN_05475d88();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdleAnimationSelector::convertWeightsToEntries(std::vector<int, std::allocator<int> > const&) */

void IdleAnimationSelector::convertWeightsToEntries(vector *param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *in_x1;
  size_t in_x2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar3;
  uint uVar4;
  string asStack_20 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [8];
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  for (uVar3 = 0; uVar2 = FUN_039827cc(*in_x1,in_x1[1]), uVar3 < uVar2; uVar3 = uVar3 + 1) {
    Set8BytesTo0(asStack_20);
    if (uVar3 == 0) {
      std::string::append(asStack_20,"idle",in_x2);
    }
    else {
      Sexy::StrFormat("idle%d",apStack_18,(ulong)uVar4);
      FUN_05474278(asStack_20,apStack_18);
      std::string::~string((string *)apStack_18);
    }
    uVar4 = uVar4 + 1;
    FUN_05475d88(apStack_18,asStack_20);
    puVar1 = (uint *)FUN_039827d8(*in_x1,uVar3);
    local_10 = *puVar1;
    in_x2 = (size_t)local_10;
    std::
    vector<ProbabilityValueRecord<std::string>,std::allocator<ProbabilityValueRecord<std::string>>>
    ::push_back((vector<ProbabilityValueRecord<std::string>,std::allocator<ProbabilityValueRecord<std::string>>>
                 *)in_x8,(ProbabilityValueRecord *)apStack_18);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdleAnimationSelector::SetWeights(std::vector<int, std::allocator<int> > const&) */

void IdleAnimationSelector::SetWeights(vector *param_1)

{
  vector<ProbabilityValueRecord<std::string>,std::allocator<ProbabilityValueRecord<std::string>>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  convertWeightsToEntries(param_1);
  std::
  vector<ProbabilityValueRecord<std::string>,std::allocator<ProbabilityValueRecord<std::string>>>::
  operator=((vector<ProbabilityValueRecord<std::string>,std::allocator<ProbabilityValueRecord<std::string>>>
             *)(param_1 + 0x18),(vector *)avStack_20);
  std::
  vector<ProbabilityValueRecord<std::string>,std::allocator<ProbabilityValueRecord<std::string>>>::
  ~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

