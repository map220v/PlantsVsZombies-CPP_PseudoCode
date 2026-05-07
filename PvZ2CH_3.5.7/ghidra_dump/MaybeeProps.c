// Class: MaybeeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaybeeProps::StaticClassInit() */

void MaybeeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MaybeeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e2f4a4,0x330,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MaybeeProps::StaticGetClass() */

long * MaybeeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MaybeeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MaybeeProps::GetClass() const */

long * MaybeeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MaybeeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MaybeeProps::MaybeeProps() */

void __thiscall MaybeeProps::MaybeeProps(MaybeeProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069db060;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x2e8));
  *(undefined4 *)(this + 0x2c4) = 3;
  *(undefined4 *)(this + 0x318) = 3;
  *(undefined4 *)(this + 0x324) = 0xc;
  *(undefined4 *)(this + 0x328) = 8;
  *(undefined4 *)(this + 0x2c8) = 9;
  *(undefined4 *)(this + 0x2cc) = 0x15e;
  *(undefined4 *)(this + 0x2b8) = 0x40000000;
  *(undefined4 *)(this + 0x310) = 0x42a00000;
  *(undefined4 *)(this + 700) = 0x41200000;
  *(undefined4 *)(this + 0x2e0) = 0x40400000;
  *(undefined4 *)(this + 0x2c0) = 0x3f800000;
  *(undefined4 *)(this + 0x314) = 0x42f00000;
  *(undefined4 *)(this + 0x2d0) = 0x3fc00000;
  *(undefined4 *)(this + 0x2e4) = 0x40400000;
  *(undefined4 *)(this + 0x2d4) = 0x41c80000;
  *(undefined4 *)(this + 0x2d8) = 0x41f00000;
  *(undefined4 *)(this + 0x2dc) = 0x41f00000;
  *(undefined4 *)(this + 0x31c) = 0x3e800000;
  *(undefined4 *)(this + 800) = 0x3f333333;
  return;
}


/* MaybeeProps::StaticNew() */

MaybeeProps * MaybeeProps::StaticNew(void)

{
  MaybeeProps *this;
  
  this = ::operator_new(0x330);
  MaybeeProps(this);
  return this;
}


/* MaybeeProps::~MaybeeProps() */

void __thiscall MaybeeProps::~MaybeeProps(MaybeeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069db060;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x2e8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* MaybeeProps::~MaybeeProps() */

void __thiscall MaybeeProps::~MaybeeProps(MaybeeProps *this)

{
  ~MaybeeProps(this);
  AK::FreeHook(this);
  return;
}

