// Class: GrimroseProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GrimroseProps::StaticClassInit() */

void GrimroseProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GrimroseProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03be3d94,0x358,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GrimroseProps::StaticGetClass() */

long * GrimroseProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GrimroseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GrimroseProps::GetClass() const */

long * GrimroseProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GrimroseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GrimroseProps::GrimroseProps() */

void __thiscall GrimroseProps::GrimroseProps(GrimroseProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0673e9c0;
  ComponentVisualStretcherProps::ComponentVisualStretcherProps
            ((ComponentVisualStretcherProps *)(this + 0x2c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x328));
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined4 *)(this + 700) = 1;
  *(undefined4 *)(this + 0x2c0) = 3;
  *(undefined4 *)(this + 0x348) = 0x3f800000;
  *(undefined4 *)(this + 0x34c) = 0x3f800000;
  *(undefined4 *)(this + 0x340) = 0x43480000;
  *(undefined4 *)(this + 0x344) = 0x3f000000;
  *(undefined4 *)(this + 0x350) = 0;
  return;
}


/* GrimroseProps::StaticNew() */

GrimroseProps * GrimroseProps::StaticNew(void)

{
  GrimroseProps *this;
  
  this = ::operator_new(0x358);
  GrimroseProps(this);
  return this;
}


/* GrimroseProps::~GrimroseProps() */

void __thiscall GrimroseProps::~GrimroseProps(GrimroseProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0673e9c0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x328));
  ComponentVisualStretcherProps::~ComponentVisualStretcherProps
            ((ComponentVisualStretcherProps *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GrimroseProps::~GrimroseProps() */

void __thiscall GrimroseProps::~GrimroseProps(GrimroseProps *this)

{
  ~GrimroseProps(this);
  AK::FreeHook(this);
  return;
}

