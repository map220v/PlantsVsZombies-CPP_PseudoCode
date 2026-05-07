// Class: GatlingPeaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GatlingPeaProps::StaticClassInit() */

void GatlingPeaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GatlingPeaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0413a540,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GatlingPeaProps::StaticGetClass() */

long * GatlingPeaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GatlingPeaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GatlingPeaProps::GetClass() const */

long * GatlingPeaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GatlingPeaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GatlingPeaProps::GatlingPeaProps() */

void __thiscall GatlingPeaProps::GatlingPeaProps(GatlingPeaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined ***)this = &PTR_GetClass_067eca00;
  return;
}


/* GatlingPeaProps::StaticNew() */

GatlingPeaProps * GatlingPeaProps::StaticNew(void)

{
  GatlingPeaProps *this;
  
  this = ::operator_new(0x2c8);
  GatlingPeaProps(this);
  return this;
}


/* GatlingPeaProps::~GatlingPeaProps() */

void __thiscall GatlingPeaProps::~GatlingPeaProps(GatlingPeaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067eca00;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GatlingPeaProps::~GatlingPeaProps() */

void __thiscall GatlingPeaProps::~GatlingPeaProps(GatlingPeaProps *this)

{
  ~GatlingPeaProps(this);
  AK::FreeHook(this);
  return;
}

