// Class: PlantShadowVanillaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowVanillaProps::StaticClassInit() */

void PlantShadowVanillaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantShadowVanillaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ce18a0,0x310,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantShadowVanillaProps::StaticGetClass() */

long * PlantShadowVanillaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantShadowVanillaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantShadowVanillaProps::GetClass() const */

long * PlantShadowVanillaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantShadowVanillaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantShadowVanillaProps::PlantShadowVanillaProps() */

void __thiscall PlantShadowVanillaProps::PlantShadowVanillaProps(PlantShadowVanillaProps *this)

{
  undefined4 uVar1;
  
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069a04e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  std::vector<float,std::allocator<float>>::clear
            ((vector<float,std::allocator<float>> *)(this + 0x2c0));
  uVar1 = _FUN_04ce304c;
  *(undefined4 *)(this + 0x2b8) = 0x32;
  *(undefined4 *)(this + 0x2d8) = 0x32;
  *(undefined4 *)(this + 0x2e0) = 0x32;
  *(undefined4 *)(this + 0x2ec) = 0x32;
  *(undefined4 *)(this + 0x2fc) = 0x32;
  *(undefined4 *)(this + 0x300) = 0x32;
  *(undefined4 *)(this + 0x2dc) = 0x40400000;
  *(undefined4 *)(this + 0x2e4) = uVar1;
  *(undefined4 *)(this + 0x2e8) = 0x40400000;
  *(undefined4 *)(this + 0x2f0) = 0x40400000;
  *(undefined4 *)(this + 0x2f4) = uVar1;
  *(undefined4 *)(this + 0x2f8) = 0x40400000;
  *(undefined4 *)(this + 0x304) = 0x40400000;
  *(undefined4 *)(this + 0x308) = uVar1;
  return;
}


/* PlantShadowVanillaProps::StaticNew() */

PlantShadowVanillaProps * PlantShadowVanillaProps::StaticNew(void)

{
  PlantShadowVanillaProps *this;
  
  this = ::operator_new(0x310);
  PlantShadowVanillaProps(this);
  return this;
}


/* PlantShadowVanillaProps::~PlantShadowVanillaProps() */

void __thiscall PlantShadowVanillaProps::~PlantShadowVanillaProps(PlantShadowVanillaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069a04e0;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantShadowVanillaProps::~PlantShadowVanillaProps() */

void __thiscall PlantShadowVanillaProps::~PlantShadowVanillaProps(PlantShadowVanillaProps *this)

{
  ~PlantShadowVanillaProps(this);
  AK::FreeHook(this);
  return;
}

