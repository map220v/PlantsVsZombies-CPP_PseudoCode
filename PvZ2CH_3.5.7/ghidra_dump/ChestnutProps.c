// Class: ChestnutProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChestnutProps::StaticClassInit() */

void ChestnutProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChestnutProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040c449c,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChestnutProps::StaticGetClass() */

long * ChestnutProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChestnutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChestnutProps::GetClass() const */

long * ChestnutProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ChestnutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChestnutProps::ChestnutProps() */

void __thiscall ChestnutProps::ChestnutProps(ChestnutProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067d8230;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d8));
  *(undefined4 *)(this + 0x2b8) = 1;
  return;
}


/* ChestnutProps::StaticNew() */

ChestnutProps * ChestnutProps::StaticNew(void)

{
  ChestnutProps *this;
  
  this = ::operator_new(0x2f0);
  ChestnutProps(this);
  return this;
}


/* ChestnutProps::~ChestnutProps() */

void __thiscall ChestnutProps::~ChestnutProps(ChestnutProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067d8230;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2d8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ChestnutProps::~ChestnutProps() */

void __thiscall ChestnutProps::~ChestnutProps(ChestnutProps *this)

{
  ~ChestnutProps(this);
  AK::FreeHook(this);
  return;
}

