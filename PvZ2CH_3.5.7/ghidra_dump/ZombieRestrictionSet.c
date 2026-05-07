// Class: ZombieRestrictionSet


/* ZombieRestrictionSet::ZombieRestrictionSet() */

void __thiscall ZombieRestrictionSet::ZombieRestrictionSet(ZombieRestrictionSet *this)

{
  StringRestrictionSet::StringRestrictionSet((StringRestrictionSet *)this);
  *(undefined ***)this = &PTR_GetClass_06916a80;
  return;
}


/* ZombieRestrictionSet::~ZombieRestrictionSet() */

void __thiscall ZombieRestrictionSet::~ZombieRestrictionSet(ZombieRestrictionSet *this)

{
  *(undefined ***)this = &PTR_GetClass_06916a80;
  StringRestrictionSet::~StringRestrictionSet((StringRestrictionSet *)this);
  return;
}


/* ZombieRestrictionSet::~ZombieRestrictionSet() */

void __thiscall ZombieRestrictionSet::~ZombieRestrictionSet(ZombieRestrictionSet *this)

{
  ~ZombieRestrictionSet(this);
  AK::FreeHook(this);
  return;
}


/* ZombieRestrictionSet::TEMPNAMEPLACEHOLDERVALUE(ZombieRestrictionSet const&) */

ZombieRestrictionSet * __thiscall
ZombieRestrictionSet::operator=(ZombieRestrictionSet *this,ZombieRestrictionSet *param_1)

{
  StringRestrictionSet::operator=((StringRestrictionSet *)this,(StringRestrictionSet *)param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRestrictionSet::StaticClassInit() */

void ZombieRestrictionSet::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRestrictionSet");
    (*pcVar2)(plVar1,asStack_10,FUN_0496e660,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRestrictionSet::StaticNew() */

ZombieRestrictionSet * ZombieRestrictionSet::StaticNew(void)

{
  ZombieRestrictionSet *this;
  
  this = ::operator_new(0x28);
  ZombieRestrictionSet(this);
  return this;
}


/* ZombieRestrictionSet::IsExcluded(Zombie const*) const */

void __thiscall ZombieRestrictionSet::IsExcluded(ZombieRestrictionSet *this,Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StringRestrictionSet::IsExcluded((StringRestrictionSet *)this,(string *)(lVar1 + 8));
  return;
}


/* ZombieRestrictionSet::IsIncluded(Zombie const*) const */

void __thiscall ZombieRestrictionSet::IsIncluded(ZombieRestrictionSet *this,Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StringRestrictionSet::IsIncluded((StringRestrictionSet *)this,(string *)(lVar1 + 8));
  return;
}


/* ZombieRestrictionSet::StaticGetClass() */

long * ZombieRestrictionSet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRestrictionSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRestrictionSet::GetClass() const */

long * ZombieRestrictionSet::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieRestrictionSet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRestrictionSet::ZombieRestrictionSet(ZombieRestrictionSet const&) */

void __thiscall
ZombieRestrictionSet::ZombieRestrictionSet(ZombieRestrictionSet *this,ZombieRestrictionSet *param_1)

{
  StringRestrictionSet::StringRestrictionSet
            ((StringRestrictionSet *)this,(StringRestrictionSet *)param_1);
  *(undefined ***)this = &PTR_GetClass_06916a80;
  return;
}

