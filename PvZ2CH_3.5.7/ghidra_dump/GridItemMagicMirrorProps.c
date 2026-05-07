// Class: GridItemMagicMirrorProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMagicMirrorProps::StaticClassInit() */

void GridItemMagicMirrorProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMagicMirrorProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04c8b3ec,0x100,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMagicMirrorProps::StaticGetClass() */

long * GridItemMagicMirrorProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMagicMirrorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMagicMirrorProps::GetClass() const */

long * GridItemMagicMirrorProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMagicMirrorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMagicMirrorProps::GridItemMagicMirrorProps() */

void __thiscall GridItemMagicMirrorProps::GridItemMagicMirrorProps(GridItemMagicMirrorProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_06994970;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  return;
}


/* GridItemMagicMirrorProps::StaticNew() */

GridItemMagicMirrorProps * GridItemMagicMirrorProps::StaticNew(void)

{
  GridItemMagicMirrorProps *this;
  
  this = ::operator_new(0x100);
  GridItemMagicMirrorProps(this);
  return this;
}


/* GridItemMagicMirrorProps::~GridItemMagicMirrorProps() */

void __thiscall GridItemMagicMirrorProps::~GridItemMagicMirrorProps(GridItemMagicMirrorProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06994970;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemMagicMirrorProps::~GridItemMagicMirrorProps() */

void __thiscall GridItemMagicMirrorProps::~GridItemMagicMirrorProps(GridItemMagicMirrorProps *this)

{
  ~GridItemMagicMirrorProps(this);
  AK::FreeHook(this);
  return;
}

