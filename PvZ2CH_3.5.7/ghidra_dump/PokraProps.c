// Class: PokraProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PokraProps::StaticClassInit() */

void PokraProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PokraProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cd295c,0x310,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PokraProps::StaticGetClass() */

long * PokraProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PokraProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PokraProps::GetClass() const */

long * PokraProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PokraProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PokraProps::PokraProps() */

void __thiscall PokraProps::PokraProps(PokraProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 0x3f000000;
  *(undefined4 *)(this + 0x2f8) = 5;
  *(undefined ***)this = &PTR_GetClass_0699e7f0;
  *(undefined4 *)(this + 0x2f0) = 3;
  *(undefined4 *)(this + 0x2f4) = 4;
  *(undefined4 *)(this + 0x300) = 6;
  *(undefined4 *)(this + 0x304) = 0x78;
  *(undefined4 *)(this + 0x308) = 300;
  *(undefined4 *)(this + 0x2fc) = 5;
  *(undefined4 *)(this + 0x2b8) = 0x3f800000;
  *(undefined4 *)(this + 0x2c0) = 0x3fc00000;
  *(undefined4 *)(this + 0x2e4) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2c4) = 0x3f800000;
  *(undefined4 *)(this + 0x2cc) = 0x3f800000;
  *(undefined4 *)(this + 0x2e8) = 0x3dcccccd;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2d0) = 0x3f800000;
  *(undefined4 *)(this + 0x2d4) = 0x3f800000;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  *(undefined4 *)(this + 0x2dc) = 0x3f800000;
  *(undefined4 *)(this + 0x2e0) = 0x3f800000;
  *(undefined4 *)(this + 0x2ec) = 0x3e99999a;
  return;
}


/* PokraProps::StaticNew() */

PokraProps * PokraProps::StaticNew(void)

{
  PokraProps *this;
  
  this = ::operator_new(0x310);
  PokraProps(this);
  return this;
}


/* PokraProps::~PokraProps() */

void __thiscall PokraProps::~PokraProps(PokraProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0699e7f0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PokraProps::~PokraProps() */

void __thiscall PokraProps::~PokraProps(PokraProps *this)

{
  ~PokraProps(this);
  AK::FreeHook(this);
  return;
}

