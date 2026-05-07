// Class: ClawGloriosaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ClawGloriosaProps::StaticClassInit() */

void ClawGloriosaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ClawGloriosaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03affea4,0x318,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ClawGloriosaProps::StaticGetClass() */

long * ClawGloriosaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ClawGloriosaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ClawGloriosaProps::GetClass() const */

long * ClawGloriosaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ClawGloriosaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ClawGloriosaProps::ClawGloriosaProps() */

void __thiscall ClawGloriosaProps::ClawGloriosaProps(ClawGloriosaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067287c0;
  *(undefined4 *)(this + 700) = 0x40000000;
  *(undefined4 *)(this + 0x2c0) = 0x40000000;
  *(undefined4 *)(this + 0x2c4) = 0x3f800000;
  *(undefined4 *)(this + 0x2d0) = 0x3e99999a;
  *(undefined4 *)(this + 0x2e8) = 0x40000000;
  *(undefined4 *)(this + 0x2b8) = 0x41200000;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0x3f000000;
  *(undefined4 *)(this + 0x2e0) = 0;
  *(undefined4 *)(this + 0x2e4) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2ec) = 0x40a00000;
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2f4) = 0;
  *(undefined4 *)(this + 0x2f8) = 0x41200000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x300));
  return;
}


/* ClawGloriosaProps::StaticNew() */

ClawGloriosaProps * ClawGloriosaProps::StaticNew(void)

{
  ClawGloriosaProps *this;
  
  this = ::operator_new(0x318);
  ClawGloriosaProps(this);
  return this;
}


/* ClawGloriosaProps::~ClawGloriosaProps() */

void __thiscall ClawGloriosaProps::~ClawGloriosaProps(ClawGloriosaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067287c0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x300));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ClawGloriosaProps::~ClawGloriosaProps() */

void __thiscall ClawGloriosaProps::~ClawGloriosaProps(ClawGloriosaProps *this)

{
  ~ClawGloriosaProps(this);
  AK::FreeHook(this);
  return;
}

