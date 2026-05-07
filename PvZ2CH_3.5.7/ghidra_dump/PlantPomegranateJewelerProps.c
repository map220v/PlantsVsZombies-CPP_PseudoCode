// Class: PlantPomegranateJewelerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPomegranateJewelerProps::StaticClassInit() */

void PlantPomegranateJewelerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPomegranateJewelerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cce9fc,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPomegranateJewelerProps::StaticGetClass() */

long * PlantPomegranateJewelerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPomegranateJewelerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPomegranateJewelerProps::GetClass() const */

long * PlantPomegranateJewelerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPomegranateJewelerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPomegranateJewelerProps::PlantPomegranateJewelerProps() */

void __thiscall
PlantPomegranateJewelerProps::PlantPomegranateJewelerProps(PlantPomegranateJewelerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c8) = 0x40400000;
  *(undefined4 *)(this + 0x2c4) = 2;
  *(undefined ***)this = &PTR_GetClass_0699df60;
  *(undefined4 *)(this + 0x2d0) = 0x40000000;
  *(undefined4 *)(this + 0x2cc) = 0x1e;
  *(undefined4 *)(this + 0x2b8) = 0x3e4ccccd;
  *(undefined4 *)(this + 700) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2c0) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2d4) = 0x3f000000;
  return;
}


/* PlantPomegranateJewelerProps::StaticNew() */

PlantPomegranateJewelerProps * PlantPomegranateJewelerProps::StaticNew(void)

{
  PlantPomegranateJewelerProps *this;
  
  this = ::operator_new(0x2d8);
  PlantPomegranateJewelerProps(this);
  return this;
}


/* PlantPomegranateJewelerProps::~PlantPomegranateJewelerProps() */

void __thiscall
PlantPomegranateJewelerProps::~PlantPomegranateJewelerProps(PlantPomegranateJewelerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0699df60;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantPomegranateJewelerProps::~PlantPomegranateJewelerProps() */

void __thiscall
PlantPomegranateJewelerProps::~PlantPomegranateJewelerProps(PlantPomegranateJewelerProps *this)

{
  ~PlantPomegranateJewelerProps(this);
  AK::FreeHook(this);
  return;
}

