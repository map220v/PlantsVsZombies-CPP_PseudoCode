// Class: GridItemFairyTaleFogProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFogProps::StaticClassInit() */

void GridItemFairyTaleFogProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemFairyTaleFogProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04eccd00,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFairyTaleFogProps::StaticGetClass() */

long * GridItemFairyTaleFogProps::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFairyTaleFogProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFairyTaleFogProps::GetClass() const */

long * GridItemFairyTaleFogProps::GetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFairyTaleFogProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFairyTaleFogProps::GridItemFairyTaleFogProps() */

void __thiscall
GridItemFairyTaleFogProps::GridItemFairyTaleFogProps(GridItemFairyTaleFogProps *this)

{
  GridItemBreakableTargetProps::GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_069f7610;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0x3f800000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  return;
}


/* GridItemFairyTaleFogProps::StaticNew() */

GridItemFairyTaleFogProps * GridItemFairyTaleFogProps::StaticNew(void)

{
  GridItemFairyTaleFogProps *this;
  
  this = ::operator_new(0x170);
  GridItemFairyTaleFogProps(this);
  return this;
}


/* GridItemFairyTaleFogProps::~GridItemFairyTaleFogProps() */

void __thiscall
GridItemFairyTaleFogProps::~GridItemFairyTaleFogProps(GridItemFairyTaleFogProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069f7610;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x150));
  GridItemBreakableTargetProps::~GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  return;
}


/* GridItemFairyTaleFogProps::~GridItemFairyTaleFogProps() */

void __thiscall
GridItemFairyTaleFogProps::~GridItemFairyTaleFogProps(GridItemFairyTaleFogProps *this)

{
  ~GridItemFairyTaleFogProps(this);
  AK::FreeHook(this);
  return;
}

