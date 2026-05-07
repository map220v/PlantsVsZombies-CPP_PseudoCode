// Class: PlantRhubarbarianProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantRhubarbarianProps::StaticClassInit() */

void PlantRhubarbarianProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RhubarbarianLeapProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03fb6a90,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantRhubarbarianProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03fb8c80,0x348,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantRhubarbarianProps::StaticGetClass() */

long * PlantRhubarbarianProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantRhubarbarianProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRhubarbarianProps::GetClass() const */

long * PlantRhubarbarianProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantRhubarbarianProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantRhubarbarianProps::PlantRhubarbarianProps() */

void __thiscall PlantRhubarbarianProps::PlantRhubarbarianProps(PlantRhubarbarianProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2fc) = 0x41f00000;
  *(undefined ***)this = &PTR_GetClass_067a83c0;
  *(undefined4 *)(this + 0x304) = 0x3f800000;
  *(undefined4 *)(this + 0x300) = 0x41200000;
  *(undefined4 *)(this + 0x2f4) = 0x42480000;
  *(undefined4 *)(this + 0x308) = 0x3f800000;
  *(undefined4 *)(this + 0x30c) = 0x3f800000;
  *(undefined4 *)(this + 0x310) = 0x3f800000;
  *(undefined4 *)(this + 0x2f8) = 0x3dcccccd;
  RhubarbarianLeapProps::RhubarbarianLeapProps((RhubarbarianLeapProps *)(this + 0x314));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 800));
  *(undefined4 *)(this + 0x2e0) = 6;
  *(undefined4 *)(this + 0x2e4) = 6;
  *(undefined4 *)(this + 0x2e8) = 3;
  *(undefined4 *)(this + 0x2b8) = 0x42c80000;
  *(undefined4 *)(this + 700) = 0x40000000;
  *(undefined4 *)(this + 0x2f0) = 0x40000000;
  *(undefined4 *)(this + 0x2c8) = 0x3f19999a;
  *(undefined4 *)(this + 0x2d4) = 0x42c80000;
  *(undefined4 *)(this + 0x2cc) = 0x3e800000;
  *(undefined4 *)(this + 0x2ec) = 0x3f800000;
  *(undefined4 *)(this + 0x2c0) = 0x40a00000;
  *(undefined4 *)(this + 0x2c4) = 0x40a00000;
  *(undefined4 *)(this + 0x2d0) = 0x402ccccd;
  *(undefined4 *)(this + 0x2d8) = 0x3f000000;
  *(undefined4 *)(this + 0x2dc) = 0x447a0000;
  return;
}


/* PlantRhubarbarianProps::StaticNew() */

PlantRhubarbarianProps * PlantRhubarbarianProps::StaticNew(void)

{
  PlantRhubarbarianProps *this;
  
  this = ::operator_new(0x348);
  PlantRhubarbarianProps(this);
  return this;
}


/* PlantRhubarbarianProps::~PlantRhubarbarianProps() */

void __thiscall PlantRhubarbarianProps::~PlantRhubarbarianProps(PlantRhubarbarianProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a83c0;
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 800));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantRhubarbarianProps::~PlantRhubarbarianProps() */

void __thiscall PlantRhubarbarianProps::~PlantRhubarbarianProps(PlantRhubarbarianProps *this)

{
  ~PlantRhubarbarianProps(this);
  AK::FreeHook(this);
  return;
}

