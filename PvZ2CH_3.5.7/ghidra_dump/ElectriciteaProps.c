// Class: ElectriciteaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectriciteaProps::StaticClassInit() */

void ElectriciteaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectriciteaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0429e33c,0x308,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectriciteaProps::StaticGetClass() */

long * ElectriciteaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElectriciteaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectriciteaProps::GetClass() const */

long * ElectriciteaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ElectriciteaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectriciteaProps::ElectriciteaProps() */

void __thiscall ElectriciteaProps::ElectriciteaProps(ElectriciteaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined ***)this = &PTR_GetClass_06829210;
  *(undefined4 *)(this + 0x2c0) = 3;
  *(undefined4 *)(this + 0x2c8) = 2;
  *(undefined4 *)(this + 0x2e0) = 2;
  *(undefined4 *)(this + 0x2fc) = 2;
  *(undefined4 *)(this + 0x2f0) = 0x43160000;
  *(undefined4 *)(this + 700) = 0x40000000;
  *(undefined4 *)(this + 0x2c4) = 0x40a00000;
  *(undefined4 *)(this + 0x2cc) = 0x3f000000;
  *(undefined4 *)(this + 0x2d0) = 0x3ee66666;
  *(undefined4 *)(this + 0x2d4) = 0x3e19999a;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  *(undefined4 *)(this + 0x2dc) = 0x3f800000;
  *(undefined4 *)(this + 0x2e4) = 0x3f000000;
  *(undefined4 *)(this + 0x2e8) = 0x3ee66666;
  *(undefined4 *)(this + 0x2ec) = 0x3e19999a;
  *(undefined4 *)(this + 0x2f4) = 0x3f000000;
  *(undefined4 *)(this + 0x2f8) = 0x40000000;
  *(undefined4 *)(this + 0x300) = 0x43fa0000;
  return;
}


/* ElectriciteaProps::StaticNew() */

ElectriciteaProps * ElectriciteaProps::StaticNew(void)

{
  ElectriciteaProps *this;
  
  this = ::operator_new(0x308);
  ElectriciteaProps(this);
  return this;
}


/* ElectriciteaProps::~ElectriciteaProps() */

void __thiscall ElectriciteaProps::~ElectriciteaProps(ElectriciteaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06829210;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ElectriciteaProps::~ElectriciteaProps() */

void __thiscall ElectriciteaProps::~ElectriciteaProps(ElectriciteaProps *this)

{
  ~ElectriciteaProps(this);
  AK::FreeHook(this);
  return;
}

