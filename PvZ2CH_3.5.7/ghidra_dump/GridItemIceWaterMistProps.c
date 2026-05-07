// Class: GridItemIceWaterMistProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceWaterMistProps::StaticClassInit() */

void GridItemIceWaterMistProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemIceWaterMistProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc15c8,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIceWaterMistProps::StaticGetClass() */

long * GridItemIceWaterMistProps::StaticGetClass(void)

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
  uVar2 = GridItemWaterMistProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemIceWaterMistProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIceWaterMistProps::GetClass() const */

long * GridItemIceWaterMistProps::GetClass(void)

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
  uVar2 = GridItemWaterMistProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemIceWaterMistProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIceWaterMistProps::GridItemIceWaterMistProps() */

void __thiscall
GridItemIceWaterMistProps::GridItemIceWaterMistProps(GridItemIceWaterMistProps *this)

{
  GridItemWaterMistProps::GridItemWaterMistProps((GridItemWaterMistProps *)this);
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined ***)this = &PTR_GetClass_0699abd0;
  *(undefined4 *)(this + 0xfc) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  return;
}


/* GridItemIceWaterMistProps::StaticNew() */

GridItemIceWaterMistProps * GridItemIceWaterMistProps::StaticNew(void)

{
  GridItemIceWaterMistProps *this;
  
  this = ::operator_new(0x118);
  GridItemIceWaterMistProps(this);
  return this;
}


/* GridItemIceWaterMistProps::~GridItemIceWaterMistProps() */

void __thiscall
GridItemIceWaterMistProps::~GridItemIceWaterMistProps(GridItemIceWaterMistProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0699abd0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x100));
  GridItemWaterMistProps::~GridItemWaterMistProps((GridItemWaterMistProps *)this);
  return;
}


/* GridItemIceWaterMistProps::~GridItemIceWaterMistProps() */

void __thiscall
GridItemIceWaterMistProps::~GridItemIceWaterMistProps(GridItemIceWaterMistProps *this)

{
  ~GridItemIceWaterMistProps(this);
  AK::FreeHook(this);
  return;
}

