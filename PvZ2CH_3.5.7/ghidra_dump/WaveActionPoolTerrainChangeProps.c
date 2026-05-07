// Class: WaveActionPoolTerrainChangeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionPoolTerrainChangeProps::StaticClassInit() */

void WaveActionPoolTerrainChangeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveActionPoolTerrainChangeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ca942c,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionPoolTerrainChangeProps::StaticGetClass() */

long * WaveActionPoolTerrainChangeProps::StaticGetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionPoolTerrainChangeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionPoolTerrainChangeProps::GetClass() const */

long * WaveActionPoolTerrainChangeProps::GetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionPoolTerrainChangeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionPoolTerrainChangeProps::GetActionClass() const */

long * WaveActionPoolTerrainChangeProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WaveActionPoolTerrainChange::sClass != (long *)0x0) {
    return WaveActionPoolTerrainChange::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WaveActionPoolTerrainChange::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionPoolTerrainChange",uVar2,WaveActionPoolTerrainChange::StaticNew);
  WaveActionPoolTerrainChange::StaticClassInit();
  return WaveActionPoolTerrainChange::sClass;
}


/* WaveActionPoolTerrainChangeProps::WaveActionPoolTerrainChangeProps() */

void __thiscall
WaveActionPoolTerrainChangeProps::WaveActionPoolTerrainChangeProps
          (WaveActionPoolTerrainChangeProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06998200;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* WaveActionPoolTerrainChangeProps::StaticNew() */

WaveActionPoolTerrainChangeProps * WaveActionPoolTerrainChangeProps::StaticNew(void)

{
  WaveActionPoolTerrainChangeProps *this;
  
  this = ::operator_new(0x70);
  WaveActionPoolTerrainChangeProps(this);
  return this;
}


/* WaveActionPoolTerrainChangeProps::~WaveActionPoolTerrainChangeProps() */

void __thiscall
WaveActionPoolTerrainChangeProps::~WaveActionPoolTerrainChangeProps
          (WaveActionPoolTerrainChangeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06998200;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x58));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* WaveActionPoolTerrainChangeProps::~WaveActionPoolTerrainChangeProps() */

void __thiscall
WaveActionPoolTerrainChangeProps::~WaveActionPoolTerrainChangeProps
          (WaveActionPoolTerrainChangeProps *this)

{
  ~WaveActionPoolTerrainChangeProps(this);
  AK::FreeHook(this);
  return;
}

