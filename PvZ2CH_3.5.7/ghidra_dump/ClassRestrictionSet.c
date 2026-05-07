// Class: ClassRestrictionSet


/* ClassRestrictionSet::ClassRestrictionSet() */

void __thiscall ClassRestrictionSet::ClassRestrictionSet(ClassRestrictionSet *this)

{
  StringRestrictionSet::StringRestrictionSet((StringRestrictionSet *)this);
  *(undefined ***)this = &PTR_GetClass_06916b40;
  return;
}


/* ClassRestrictionSet::ClassRestrictionSet(ClassRestrictionSet&&) */

void __thiscall
ClassRestrictionSet::ClassRestrictionSet(ClassRestrictionSet *this,ClassRestrictionSet *param_1)

{
  StringRestrictionSet::StringRestrictionSet
            ((StringRestrictionSet *)this,(StringRestrictionSet *)param_1);
  *(undefined ***)this = &PTR_GetClass_06916b40;
  return;
}


/* ClassRestrictionSet::~ClassRestrictionSet() */

void __thiscall ClassRestrictionSet::~ClassRestrictionSet(ClassRestrictionSet *this)

{
  *(undefined ***)this = &PTR_GetClass_06916b40;
  StringRestrictionSet::~StringRestrictionSet((StringRestrictionSet *)this);
  return;
}


/* ClassRestrictionSet::~ClassRestrictionSet() */

void __thiscall ClassRestrictionSet::~ClassRestrictionSet(ClassRestrictionSet *this)

{
  ~ClassRestrictionSet(this);
  AK::FreeHook(this);
  return;
}


/* ClassRestrictionSet::ClassRestrictionSet(ClassRestrictionSet const&) */

void __thiscall
ClassRestrictionSet::ClassRestrictionSet(ClassRestrictionSet *this,ClassRestrictionSet *param_1)

{
  StringRestrictionSet::StringRestrictionSet
            ((StringRestrictionSet *)this,(StringRestrictionSet *)param_1);
  *(undefined ***)this = &PTR_GetClass_06916b40;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ClassRestrictionSet::StaticClassInit() */

void ClassRestrictionSet::StaticClassInit(void)

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
    std::string::string(asStack_10,"ClassRestrictionSet");
    (*pcVar2)(plVar1,asStack_10,FUN_0496e920,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ClassRestrictionSet::StaticNew() */

ClassRestrictionSet * ClassRestrictionSet::StaticNew(void)

{
  ClassRestrictionSet *this;
  
  this = ::operator_new(0x28);
  ClassRestrictionSet(this);
  return this;
}


/* ClassRestrictionSet::IsIncluded(GameObject const*) const */

void __thiscall ClassRestrictionSet::IsIncluded(ClassRestrictionSet *this,GameObject *param_1)

{
  FUN_0496d834(param_1,this + 0x10,this + 8);
  return;
}


/* ClassRestrictionSet::IsExcluded(GameObject const*) const */

byte __thiscall ClassRestrictionSet::IsExcluded(ClassRestrictionSet *this,GameObject *param_1)

{
  byte bVar1;
  
  bVar1 = FUN_0496d834(param_1,this + 0x10,this + 8);
  return bVar1 ^ 1;
}


/* ClassRestrictionSet::IsIncluded(Sexy::RtClass const*) const */

void __thiscall ClassRestrictionSet::IsIncluded(ClassRestrictionSet *this,RtClass *param_1)

{
  FUN_0496db04(param_1,this + 0x10,this + 8);
  return;
}


/* ClassRestrictionSet::IsExcluded(Sexy::RtClass const*) const */

byte __thiscall ClassRestrictionSet::IsExcluded(ClassRestrictionSet *this,RtClass *param_1)

{
  byte bVar1;
  
  bVar1 = FUN_0496db04(param_1,this + 0x10,this + 8);
  return bVar1 ^ 1;
}


/* ClassRestrictionSet::StaticGetClass() */

long * ClassRestrictionSet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ClassRestrictionSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ClassRestrictionSet::GetClass() const */

long * ClassRestrictionSet::GetClass(void)

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
  (*pcVar3)(plVar1,"ClassRestrictionSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

