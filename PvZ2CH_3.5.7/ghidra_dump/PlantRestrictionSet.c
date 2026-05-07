// Class: PlantRestrictionSet


/* PlantRestrictionSet::PlantRestrictionSet() */

void __thiscall PlantRestrictionSet::PlantRestrictionSet(PlantRestrictionSet *this)

{
  StringRestrictionSet::StringRestrictionSet((StringRestrictionSet *)this);
  *(undefined ***)this = &PTR_GetClass_069169c0;
  return;
}


/* PlantRestrictionSet::~PlantRestrictionSet() */

void __thiscall PlantRestrictionSet::~PlantRestrictionSet(PlantRestrictionSet *this)

{
  *(undefined ***)this = &PTR_GetClass_069169c0;
  StringRestrictionSet::~StringRestrictionSet((StringRestrictionSet *)this);
  return;
}


/* PlantRestrictionSet::~PlantRestrictionSet() */

void __thiscall PlantRestrictionSet::~PlantRestrictionSet(PlantRestrictionSet *this)

{
  ~PlantRestrictionSet(this);
  AK::FreeHook(this);
  return;
}


/* PlantRestrictionSet::PlantRestrictionSet(PlantRestrictionSet const&) */

void __thiscall
PlantRestrictionSet::PlantRestrictionSet(PlantRestrictionSet *this,PlantRestrictionSet *param_1)

{
  StringRestrictionSet::StringRestrictionSet
            ((StringRestrictionSet *)this,(StringRestrictionSet *)param_1);
  *(undefined ***)this = &PTR_GetClass_069169c0;
  return;
}


/* PlantRestrictionSet::PlantRestrictionSet(PlantRestrictionSet&&) */

void __thiscall
PlantRestrictionSet::PlantRestrictionSet(PlantRestrictionSet *this,PlantRestrictionSet *param_1)

{
  StringRestrictionSet::StringRestrictionSet
            ((StringRestrictionSet *)this,(StringRestrictionSet *)param_1);
  *(undefined ***)this = &PTR_GetClass_069169c0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRestrictionSet::StaticClassInit() */

void PlantRestrictionSet::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantRestrictionSet");
    (*pcVar2)(plVar1,asStack_10,FUN_0496e500,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRestrictionSet::StaticNew() */

PlantRestrictionSet * PlantRestrictionSet::StaticNew(void)

{
  PlantRestrictionSet *this;
  
  this = ::operator_new(0x28);
  PlantRestrictionSet(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRestrictionSet::IsExcluded(Plant const*) const */

void PlantRestrictionSet::IsExcluded(Plant *param_1)

{
  undefined4 uVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar1 = StringRestrictionSet::IsExcluded((StringRestrictionSet *)param_1,(string *)(lVar2 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantRestrictionSet::IsExcluded(PlantType const*) const */

void __thiscall PlantRestrictionSet::IsExcluded(PlantRestrictionSet *this,PlantType *param_1)

{
  StringRestrictionSet::IsExcluded((StringRestrictionSet *)this,(string *)(param_1 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRestrictionSet::IsIncluded(Plant const*) const */

void PlantRestrictionSet::IsIncluded(Plant *param_1)

{
  undefined4 uVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar1 = StringRestrictionSet::IsIncluded((StringRestrictionSet *)param_1,(string *)(lVar2 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantRestrictionSet::IsIncluded(PlantType const*) const */

void __thiscall PlantRestrictionSet::IsIncluded(PlantRestrictionSet *this,PlantType *param_1)

{
  StringRestrictionSet::IsIncluded((StringRestrictionSet *)this,(string *)(param_1 + 8));
  return;
}


/* PlantRestrictionSet::StaticGetClass() */

long * PlantRestrictionSet::StaticGetClass(void)

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
  uVar2 = StringRestrictionSet::StaticGetClass();
  (*pcVar3)(plVar1,"PlantRestrictionSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRestrictionSet::GetClass() const */

long * PlantRestrictionSet::GetClass(void)

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
  uVar2 = StringRestrictionSet::StaticGetClass();
  (*pcVar3)(plVar1,"PlantRestrictionSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

