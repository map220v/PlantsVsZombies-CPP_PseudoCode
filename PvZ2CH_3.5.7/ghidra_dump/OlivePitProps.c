// Class: OlivePitProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OlivePitProps::StaticClassInit() */

void OlivePitProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"OlivePitProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cefa10,0x3a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OlivePitProps::StaticGetClass() */

long * OlivePitProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OlivePitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OlivePitProps::GetClass() const */

long * OlivePitProps::GetClass(void)

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
  (*pcVar3)(plVar1,"OlivePitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OlivePitProps::OlivePitProps() */

void __thiscall OlivePitProps::OlivePitProps(OlivePitProps *this)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = ___stack_chk_guard;
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined ***)this = &PTR_GetClass_069a3700;
  *(undefined4 *)(this + 0x2c4) = 0x40400000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d0));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x2f0));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x318));
  std::string::string((string *)(this + 0x340),"oil");
  nop();
  *(undefined4 *)(this + 0x348) = 0x40400000;
  Sexy::Insets::Insets((Insets *)(this + 0x34c));
  *(undefined4 *)(this + 0x360) = 0x33;
  *(undefined4 *)(this + 0x35c) = 0x40400000;
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x368));
  bVar2 = lVar1 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x390) = 0x40400000;
  *(undefined4 *)(this + 0x394) = 0x3f800000;
  *(undefined4 *)(this + 0x398) = 0x3f800000;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OlivePitProps::StaticNew() */

OlivePitProps * OlivePitProps::StaticNew(void)

{
  OlivePitProps *this;
  
  this = ::operator_new(0x3a8);
  OlivePitProps(this);
  return this;
}


/* OlivePitProps::~OlivePitProps() */

void __thiscall OlivePitProps::~OlivePitProps(OlivePitProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a3700;
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x368));
  std::string::~string((string *)(this + 0x340));
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x318));
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x2f0));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x2d0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* OlivePitProps::~OlivePitProps() */

void __thiscall OlivePitProps::~OlivePitProps(OlivePitProps *this)

{
  ~OlivePitProps(this);
  AK::FreeHook(this);
  return;
}

