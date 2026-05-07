// Class: WallnutProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WallnutProps::StaticClassInit() */

void WallnutProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WallnutProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0407cd88,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WallnutProps::StaticGetClass() */

long * WallnutProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WallnutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WallnutProps::GetClass() const */

long * WallnutProps::GetClass(void)

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
  (*pcVar3)(plVar1,"WallnutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WallnutProps::WallnutProps() */

void __thiscall WallnutProps::WallnutProps(WallnutProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  this[0x2b8] = (WallnutProps)0x0;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined ***)this = &PTR_GetClass_067c9780;
  *(undefined4 *)(this + 0x2c4) = 0x41a00000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c8));
  return;
}


/* WallnutProps::StaticNew() */

WallnutProps * WallnutProps::StaticNew(void)

{
  WallnutProps *this;
  
  this = ::operator_new(0x2e0);
  WallnutProps(this);
  return this;
}


/* WallnutProps::~WallnutProps() */

void __thiscall WallnutProps::~WallnutProps(WallnutProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067c9780;
  std::vector<ShieldProps,std::allocator<ShieldProps>>::~vector
            ((vector<ShieldProps,std::allocator<ShieldProps>> *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* WallnutProps::~WallnutProps() */

void __thiscall WallnutProps::~WallnutProps(WallnutProps *this)

{
  ~WallnutProps(this);
  AK::FreeHook(this);
  return;
}

