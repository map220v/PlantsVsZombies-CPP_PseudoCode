// Class: HatMushroomProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomProps::StaticClassInit() */

void HatMushroomProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HatMushroomProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b1b720,0x2f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HatMushroomProps::StaticGetClass() */

long * HatMushroomProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HatMushroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HatMushroomProps::GetClass() const */

long * HatMushroomProps::GetClass(void)

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
  (*pcVar3)(plVar1,"HatMushroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HatMushroomProps::HatMushroomProps() */

void __thiscall HatMushroomProps::HatMushroomProps(HatMushroomProps *this)

{
  size_t in_x2;
  
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0672d030;
  Set8BytesTo0((string *)(this + 0x2f0));
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2d4) = 0x3f800000;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  *(undefined4 *)(this + 0x2dc) = 0x3f800000;
  *(undefined4 *)(this + 0x2e0) = 0;
  *(undefined4 *)(this + 0x2e4) = 0;
  *(undefined4 *)(this + 0x2e8) = 0;
  *(undefined4 *)(this + 0x2ec) = 0;
  std::string::append((string *)(this + 0x2f0),"",in_x2);
  return;
}


/* HatMushroomProps::StaticNew() */

HatMushroomProps * HatMushroomProps::StaticNew(void)

{
  HatMushroomProps *this;
  
  this = ::operator_new(0x2f8);
  HatMushroomProps(this);
  return this;
}


/* HatMushroomProps::~HatMushroomProps() */

void __thiscall HatMushroomProps::~HatMushroomProps(HatMushroomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0672d030;
  std::string::~string((string *)(this + 0x2f0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* HatMushroomProps::~HatMushroomProps() */

void __thiscall HatMushroomProps::~HatMushroomProps(HatMushroomProps *this)

{
  ~HatMushroomProps(this);
  AK::FreeHook(this);
  return;
}

