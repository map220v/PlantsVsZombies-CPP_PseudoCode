// Class: WasabiWhipProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WasabiWhipProps::StaticClassInit() */

void WasabiWhipProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WasabiWhipProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0397fcb0,0x4f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WasabiWhipProps::StaticGetClass() */

long * WasabiWhipProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WasabiWhipProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WasabiWhipProps::GetClass() const */

long * WasabiWhipProps::GetClass(void)

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
  (*pcVar3)(plVar1,"WasabiWhipProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WasabiWhipProps::WasabiWhipProps() */

void __thiscall WasabiWhipProps::WasabiWhipProps(WasabiWhipProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_066da7c0;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2b8));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3d0));
  return;
}


/* WasabiWhipProps::StaticNew() */

WasabiWhipProps * WasabiWhipProps::StaticNew(void)

{
  WasabiWhipProps *this;
  
  this = ::operator_new(0x4f8);
  WasabiWhipProps(this);
  return this;
}


/* WasabiWhipProps::~WasabiWhipProps() */

void __thiscall WasabiWhipProps::~WasabiWhipProps(WasabiWhipProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066da7c0;
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3d0));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* WasabiWhipProps::~WasabiWhipProps() */

void __thiscall WasabiWhipProps::~WasabiWhipProps(WasabiWhipProps *this)

{
  ~WasabiWhipProps(this);
  AK::FreeHook(this);
  return;
}

