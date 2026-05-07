// Class: ZombieSpawnerPattern


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSpawnerPattern::StaticClassInit() */

void ZombieSpawnerPattern::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSpawnerPattern");
    (*pcVar2)(plVar1,asStack_10,FUN_04938da0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSpawnerPattern::StaticGetClass() */

long * ZombieSpawnerPattern::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnerPattern",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnerPattern::GetClass() const */

long * ZombieSpawnerPattern::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSpawnerPattern",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSpawnerPattern::ZombieSpawnerPattern() */

void __thiscall ZombieSpawnerPattern::ZombieSpawnerPattern(ZombieSpawnerPattern *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06911920;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* ZombieSpawnerPattern::StaticNew() */

ZombieSpawnerPattern * ZombieSpawnerPattern::StaticNew(void)

{
  ZombieSpawnerPattern *this;
  
  this = ::operator_new(0x40);
  ZombieSpawnerPattern(this);
  return this;
}


/* ZombieSpawnerPattern::~ZombieSpawnerPattern() */

void __thiscall ZombieSpawnerPattern::~ZombieSpawnerPattern(ZombieSpawnerPattern *this)

{
  *(undefined ***)this = &PTR_GetClass_06911920;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* ZombieSpawnerPattern::~ZombieSpawnerPattern() */

void __thiscall ZombieSpawnerPattern::~ZombieSpawnerPattern(ZombieSpawnerPattern *this)

{
  ~ZombieSpawnerPattern(this);
  AK::FreeHook(this);
  return;
}

