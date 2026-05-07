// Class: HotDateProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotDateProps::StaticClassInit() */

void HotDateProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotDateProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03985cbc,0x420,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotDateProps::StaticGetClass() */

long * HotDateProps::StaticGetClass(void)

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
  uVar2 = SweetPotatoProps::StaticGetClass();
  (*pcVar3)(plVar1,"HotDateProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotDateProps::GetClass() const */

long * HotDateProps::GetClass(void)

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
  uVar2 = SweetPotatoProps::StaticGetClass();
  (*pcVar3)(plVar1,"HotDateProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotDateProps::HotDateProps() */

void __thiscall HotDateProps::HotDateProps(HotDateProps *this)

{
  SweetPotatoProps::SweetPotatoProps((SweetPotatoProps *)this);
  *(undefined ***)this = &PTR_GetClass_066db5e0;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2f8));
  *(undefined4 *)(this + 0x414) = 0;
  *(undefined4 *)(this + 0x418) = 0;
  return;
}


/* HotDateProps::StaticNew() */

HotDateProps * HotDateProps::StaticNew(void)

{
  HotDateProps *this;
  
  this = ::operator_new(0x420);
  HotDateProps(this);
  return this;
}


/* HotDateProps::~HotDateProps() */

void __thiscall HotDateProps::~HotDateProps(HotDateProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066db5e0;
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2f8));
  SweetPotatoProps::~SweetPotatoProps((SweetPotatoProps *)this);
  return;
}


/* HotDateProps::~HotDateProps() */

void __thiscall HotDateProps::~HotDateProps(HotDateProps *this)

{
  ~HotDateProps(this);
  AK::FreeHook(this);
  return;
}

