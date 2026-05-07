// Class: SapflingProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SapflingProps::StaticClassInit() */

void SapflingProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SapflingProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0409b180,0x310,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SapflingProps::StaticGetClass() */

long * SapflingProps::StaticGetClass(void)

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
  uVar2 = CabbagepultProps::StaticGetClass();
  (*pcVar3)(plVar1,"SapflingProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SapflingProps::GetClass() const */

long * SapflingProps::GetClass(void)

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
  uVar2 = CabbagepultProps::StaticGetClass();
  (*pcVar3)(plVar1,"SapflingProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SapflingProps::SapflingProps() */

void __thiscall SapflingProps::SapflingProps(SapflingProps *this)

{
  CabbagepultProps::CabbagepultProps((CabbagepultProps *)this);
  *(undefined ***)this = &PTR_GetClass_067cfc20;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2d0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f8));
  *(undefined4 *)(this + 0x2c8) = 4;
  *(undefined4 *)(this + 0x2cc) = 0x3ea8f5c3;
  return;
}


/* SapflingProps::StaticNew() */

SapflingProps * SapflingProps::StaticNew(void)

{
  SapflingProps *this;
  
  this = ::operator_new(0x310);
  SapflingProps(this);
  return this;
}


/* SapflingProps::~SapflingProps() */

void __thiscall SapflingProps::~SapflingProps(SapflingProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067cfc20;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2f8));
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2d0));
  CabbagepultProps::~CabbagepultProps((CabbagepultProps *)this);
  return;
}


/* SapflingProps::~SapflingProps() */

void __thiscall SapflingProps::~SapflingProps(SapflingProps *this)

{
  ~SapflingProps(this);
  AK::FreeHook(this);
  return;
}

