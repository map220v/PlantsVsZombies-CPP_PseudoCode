// Class: PlantChainsawburmanniiProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChainsawburmanniiProps::StaticClassInit() */

void PlantChainsawburmanniiProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantChainsawburmanniiProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0415a0c4,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChainsawburmanniiProps::StaticGetClass() */

long * PlantChainsawburmanniiProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantChainsawburmanniiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChainsawburmanniiProps::GetClass() const */

long * PlantChainsawburmanniiProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantChainsawburmanniiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChainsawburmanniiProps::PlantChainsawburmanniiProps() */

void __thiscall
PlantChainsawburmanniiProps::PlantChainsawburmanniiProps(PlantChainsawburmanniiProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x41200000;
  *(undefined4 *)(this + 0x2dc) = 1;
  *(undefined ***)this = &PTR_GetClass_067f1440;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 700) = 0x40a00000;
  *(undefined4 *)(this + 0x2c8) = 0x3e99999a;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2c0) = 0x40000000;
  *(undefined4 *)(this + 0x2d0) = 0x3dcccccd;
  *(undefined4 *)(this + 0x2cc) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2d4) = 0x3ea3d70a;
  return;
}


/* PlantChainsawburmanniiProps::StaticNew() */

PlantChainsawburmanniiProps * PlantChainsawburmanniiProps::StaticNew(void)

{
  PlantChainsawburmanniiProps *this;
  
  this = ::operator_new(0x2e0);
  PlantChainsawburmanniiProps(this);
  return this;
}


/* PlantChainsawburmanniiProps::~PlantChainsawburmanniiProps() */

void __thiscall
PlantChainsawburmanniiProps::~PlantChainsawburmanniiProps(PlantChainsawburmanniiProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f1440;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantChainsawburmanniiProps::~PlantChainsawburmanniiProps() */

void __thiscall
PlantChainsawburmanniiProps::~PlantChainsawburmanniiProps(PlantChainsawburmanniiProps *this)

{
  ~PlantChainsawburmanniiProps(this);
  AK::FreeHook(this);
  return;
}

