// Class: GardenerGrassProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GardenerGrassProps::StaticClassInit() */

void GardenerGrassProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GardenerGrassProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b15150,0x2e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GardenerGrassProps::StaticGetClass() */

long * GardenerGrassProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GardenerGrassProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GardenerGrassProps::GetClass() const */

long * GardenerGrassProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GardenerGrassProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GardenerGrassProps::GardenerGrassProps() */

void __thiscall GardenerGrassProps::GardenerGrassProps(GardenerGrassProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0672c5f0;
  return;
}


/* GardenerGrassProps::StaticNew() */

GardenerGrassProps * GardenerGrassProps::StaticNew(void)

{
  GardenerGrassProps *this;
  
  this = ::operator_new(0x2e8);
  GardenerGrassProps(this);
  return this;
}


/* GardenerGrassProps::~GardenerGrassProps() */

void __thiscall GardenerGrassProps::~GardenerGrassProps(GardenerGrassProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0672c5f0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GardenerGrassProps::~GardenerGrassProps() */

void __thiscall GardenerGrassProps::~GardenerGrassProps(GardenerGrassProps *this)

{
  ~GardenerGrassProps(this);
  AK::FreeHook(this);
  return;
}

