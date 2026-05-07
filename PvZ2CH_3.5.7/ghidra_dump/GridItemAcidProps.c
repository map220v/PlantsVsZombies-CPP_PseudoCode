// Class: GridItemAcidProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAcidProps::StaticClassInit() */

void GridItemAcidProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemAcidProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03742510,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAcidProps::StaticGetClass() */

long * GridItemAcidProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemAcidProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAcidProps::GetClass() const */

long * GridItemAcidProps::GetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemAcidProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAcidProps::GridItemAcidProps() */

void __thiscall GridItemAcidProps::GridItemAcidProps(GridItemAcidProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined ***)this = &PTR_GetClass_0668e5e0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  *(undefined4 *)(this + 0xf8) = 0x3f000000;
  *(undefined4 *)(this + 0x100) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xfc) = 0x41700000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  *(undefined4 *)(this + 0x120) = 0;
  return;
}


/* GridItemAcidProps::StaticNew() */

GridItemAcidProps * GridItemAcidProps::StaticNew(void)

{
  GridItemAcidProps *this;
  
  this = ::operator_new(0x128);
  GridItemAcidProps(this);
  return this;
}


/* GridItemAcidProps::~GridItemAcidProps() */

void __thiscall GridItemAcidProps::~GridItemAcidProps(GridItemAcidProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0668e5e0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x108));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemAcidProps::~GridItemAcidProps() */

void __thiscall GridItemAcidProps::~GridItemAcidProps(GridItemAcidProps *this)

{
  ~GridItemAcidProps(this);
  AK::FreeHook(this);
  return;
}

