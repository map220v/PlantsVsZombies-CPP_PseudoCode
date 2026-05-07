// Class: LavaGuavaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LavaGuavaProps::StaticClassInit() */

void LavaGuavaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LavaGuavaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04123408,0x508,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LavaGuavaProps::StaticGetClass() */

long * LavaGuavaProps::StaticGetClass(void)

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
  uVar2 = CabbagepultProps::StaticGetClass();
  (*pcVar3)(plVar1,"LavaGuavaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LavaGuavaProps::GetClass() const */

long * LavaGuavaProps::GetClass(void)

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
  uVar2 = CabbagepultProps::StaticGetClass();
  (*pcVar3)(plVar1,"LavaGuavaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LavaGuavaProps::LavaGuavaProps() */

void __thiscall LavaGuavaProps::LavaGuavaProps(LavaGuavaProps *this)

{
  CabbagepultProps::CabbagepultProps((CabbagepultProps *)this);
  *(undefined ***)this = &PTR_GetClass_067e9a00;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2d8));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3f0));
  *(undefined4 *)(this + 0x2d0) = 0x3f800000;
  *(undefined4 *)(this + 0x2c8) = 0x4004b5dd;
  *(undefined4 *)(this + 0x2d4) = 0x40900000;
  *(undefined4 *)(this + 0x2cc) = 0x44160000;
  return;
}


/* LavaGuavaProps::StaticNew() */

LavaGuavaProps * LavaGuavaProps::StaticNew(void)

{
  LavaGuavaProps *this;
  
  this = ::operator_new(0x508);
  LavaGuavaProps(this);
  return this;
}


/* LavaGuavaProps::~LavaGuavaProps() */

void __thiscall LavaGuavaProps::~LavaGuavaProps(LavaGuavaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e9a00;
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3f0));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2d8));
  CabbagepultProps::~CabbagepultProps((CabbagepultProps *)this);
  return;
}


/* LavaGuavaProps::~LavaGuavaProps() */

void __thiscall LavaGuavaProps::~LavaGuavaProps(LavaGuavaProps *this)

{
  ~LavaGuavaProps(this);
  AK::FreeHook(this);
  return;
}

