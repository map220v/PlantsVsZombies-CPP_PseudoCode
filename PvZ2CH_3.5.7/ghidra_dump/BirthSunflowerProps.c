// Class: BirthSunflowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BirthSunflowerProps::StaticClassInit() */

void BirthSunflowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BirthSunflowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040dcdc0,800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BirthSunflowerProps::StaticGetClass() */

long * BirthSunflowerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BirthSunflowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BirthSunflowerProps::GetClass() const */

long * BirthSunflowerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BirthSunflowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BirthSunflowerProps::BirthSunflowerProps() */

void __thiscall BirthSunflowerProps::BirthSunflowerProps(BirthSunflowerProps *this)

{
  size_t in_x2;
  
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067dc7c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d0));
  Set8BytesTo0(this + 0x2e8);
  Set8BytesTo0((string *)(this + 0x2f0));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x2f8));
  std::string::append((string *)(this + 0x2f0),"sun_birth",in_x2);
  return;
}


/* BirthSunflowerProps::StaticNew() */

BirthSunflowerProps * BirthSunflowerProps::StaticNew(void)

{
  BirthSunflowerProps *this;
  
  this = ::operator_new(800);
  BirthSunflowerProps(this);
  return this;
}


/* BirthSunflowerProps::~BirthSunflowerProps() */

void __thiscall BirthSunflowerProps::~BirthSunflowerProps(BirthSunflowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067dc7c0;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x2f8));
  std::string::~string((string *)(this + 0x2f0));
  std::string::~string((string *)(this + 0x2e8));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2d0));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* BirthSunflowerProps::~BirthSunflowerProps() */

void __thiscall BirthSunflowerProps::~BirthSunflowerProps(BirthSunflowerProps *this)

{
  ~BirthSunflowerProps(this);
  AK::FreeHook(this);
  return;
}

