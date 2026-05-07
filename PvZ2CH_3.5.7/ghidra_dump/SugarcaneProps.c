// Class: SugarcaneProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SugarcaneProps::StaticClassInit() */

void SugarcaneProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SugarcaneProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040c8be8,800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SugarcaneProps::StaticGetClass() */

long * SugarcaneProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"SugarcaneProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SugarcaneProps::GetClass() const */

long * SugarcaneProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"SugarcaneProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SugarcaneProps::SugarcaneProps() */

void __thiscall SugarcaneProps::SugarcaneProps(SugarcaneProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067d9380;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x308));
  *(undefined4 *)(this + 0x2b8) = 0x3f800000;
  *(undefined4 *)(this + 0x2c0) = 0x42c00000;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c4) = 0x40000000;
  return;
}


/* SugarcaneProps::StaticNew() */

SugarcaneProps * SugarcaneProps::StaticNew(void)

{
  SugarcaneProps *this;
  
  this = ::operator_new(800);
  SugarcaneProps(this);
  return this;
}


/* SugarcaneProps::~SugarcaneProps() */

void __thiscall SugarcaneProps::~SugarcaneProps(SugarcaneProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067d9380;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x308));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2f0));
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SugarcaneProps::~SugarcaneProps() */

void __thiscall SugarcaneProps::~SugarcaneProps(SugarcaneProps *this)

{
  ~SugarcaneProps(this);
  AK::FreeHook(this);
  return;
}

