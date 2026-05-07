// Class: MagicShroomProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicShroomProps::StaticClassInit() */

void MagicShroomProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagicShroomProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040d1e18,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagicShroomProps::StaticGetClass() */

long * MagicShroomProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MagicShroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicShroomProps::GetClass() const */

long * MagicShroomProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MagicShroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicShroomProps::MagicShroomProps() */

void __thiscall MagicShroomProps::MagicShroomProps(MagicShroomProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067db2f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b8));
  *(undefined4 *)(this + 0x2d0) = 0x3f800000;
  *(undefined4 *)(this + 0x2d4) = 0x43960000;
  return;
}


/* MagicShroomProps::StaticNew() */

MagicShroomProps * MagicShroomProps::StaticNew(void)

{
  MagicShroomProps *this;
  
  this = ::operator_new(0x2d8);
  MagicShroomProps(this);
  return this;
}


/* MagicShroomProps::~MagicShroomProps() */

void __thiscall MagicShroomProps::~MagicShroomProps(MagicShroomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067db2f0;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* MagicShroomProps::~MagicShroomProps() */

void __thiscall MagicShroomProps::~MagicShroomProps(MagicShroomProps *this)

{
  ~MagicShroomProps(this);
  AK::FreeHook(this);
  return;
}

