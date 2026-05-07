// Class: PlantHeavenDaturaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeavenDaturaProps::StaticClassInit() */

void PlantHeavenDaturaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHeavenDaturaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03fb4d98,0x308,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHeavenDaturaProps::StaticGetClass() */

long * PlantHeavenDaturaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHeavenDaturaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHeavenDaturaProps::GetClass() const */

long * PlantHeavenDaturaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHeavenDaturaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHeavenDaturaProps::PlantHeavenDaturaProps() */

void __thiscall PlantHeavenDaturaProps::PlantHeavenDaturaProps(PlantHeavenDaturaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a7940;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f0));
  *(undefined4 *)(this + 0x2b8) = 0x40000000;
  *(undefined4 *)(this + 0x2c0) = 0x40000000;
  *(undefined4 *)(this + 0x2c8) = 0x42480000;
  *(undefined4 *)(this + 0x2c4) = 0x40400000;
  *(undefined4 *)(this + 0x2e4) = 0x42480000;
  *(undefined4 *)(this + 0x2e8) = 0x42480000;
  *(undefined4 *)(this + 0x2d4) = 0x3fc00000;
  *(undefined4 *)(this + 700) = 0x42c80000;
  *(undefined4 *)(this + 0x2d8) = 0x402ccccd;
  *(undefined4 *)(this + 0x2cc) = 0x3f000000;
  *(undefined4 *)(this + 0x2d0) = 0x447a0000;
  *(undefined4 *)(this + 0x2dc) = 0x402ccccd;
  *(undefined4 *)(this + 0x2e0) = 0x402ccccd;
  return;
}


/* PlantHeavenDaturaProps::StaticNew() */

PlantHeavenDaturaProps * PlantHeavenDaturaProps::StaticNew(void)

{
  PlantHeavenDaturaProps *this;
  
  this = ::operator_new(0x308);
  PlantHeavenDaturaProps(this);
  return this;
}


/* PlantHeavenDaturaProps::~PlantHeavenDaturaProps() */

void __thiscall PlantHeavenDaturaProps::~PlantHeavenDaturaProps(PlantHeavenDaturaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a7940;
  std::
  vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>
  ::~vector((vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet>>>
             *)(this + 0x2f0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantHeavenDaturaProps::~PlantHeavenDaturaProps() */

void __thiscall PlantHeavenDaturaProps::~PlantHeavenDaturaProps(PlantHeavenDaturaProps *this)

{
  ~PlantHeavenDaturaProps(this);
  AK::FreeHook(this);
  return;
}

