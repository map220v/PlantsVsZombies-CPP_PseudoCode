// Class: GluttonyDragonProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GluttonyDragonProps::StaticClassInit() */

void GluttonyDragonProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GluttonyDragonProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d23d70,800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GluttonyDragonProps::StaticGetClass() */

long * GluttonyDragonProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GluttonyDragonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GluttonyDragonProps::GetClass() const */

long * GluttonyDragonProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GluttonyDragonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GluttonyDragonProps::GluttonyDragonProps() */

void __thiscall GluttonyDragonProps::GluttonyDragonProps(GluttonyDragonProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069aa840;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x308));
  return;
}


/* GluttonyDragonProps::StaticNew() */

GluttonyDragonProps * GluttonyDragonProps::StaticNew(void)

{
  GluttonyDragonProps *this;
  
  this = ::operator_new(800);
  GluttonyDragonProps(this);
  return this;
}


/* GluttonyDragonProps::~GluttonyDragonProps() */

void __thiscall GluttonyDragonProps::~GluttonyDragonProps(GluttonyDragonProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069aa840;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x308));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2f0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GluttonyDragonProps::~GluttonyDragonProps() */

void __thiscall GluttonyDragonProps::~GluttonyDragonProps(GluttonyDragonProps *this)

{
  ~GluttonyDragonProps(this);
  AK::FreeHook(this);
  return;
}

