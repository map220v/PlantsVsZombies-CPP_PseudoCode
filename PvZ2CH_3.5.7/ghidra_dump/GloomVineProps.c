// Class: GloomVineProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GloomVineProps::StaticClassInit() */

void GloomVineProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GloomVineProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d3cc40,0x368,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GloomVineProps::StaticGetClass() */

long * GloomVineProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GloomVineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GloomVineProps::GetClass() const */

long * GloomVineProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GloomVineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GloomVineProps::GloomVineProps() */

void __thiscall GloomVineProps::GloomVineProps(GloomVineProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069aeb90;
  ComponentConditionRadiusProps::ComponentConditionRadiusProps
            ((ComponentConditionRadiusProps *)(this + 0x2b8));
  return;
}


/* GloomVineProps::StaticNew() */

GloomVineProps * GloomVineProps::StaticNew(void)

{
  GloomVineProps *this;
  
  this = ::operator_new(0x368);
  GloomVineProps(this);
  return this;
}


/* GloomVineProps::~GloomVineProps() */

void __thiscall GloomVineProps::~GloomVineProps(GloomVineProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069aeb90;
  ComponentConditionRadiusProps::~ComponentConditionRadiusProps
            ((ComponentConditionRadiusProps *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GloomVineProps::~GloomVineProps() */

void __thiscall GloomVineProps::~GloomVineProps(GloomVineProps *this)

{
  ~GloomVineProps(this);
  AK::FreeHook(this);
  return;
}

