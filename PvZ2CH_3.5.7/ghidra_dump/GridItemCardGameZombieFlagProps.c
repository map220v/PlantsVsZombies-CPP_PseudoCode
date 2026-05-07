// Class: GridItemCardGameZombieFlagProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieFlagProps::StaticClassInit() */

void GridItemCardGameZombieFlagProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieFlagProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e1ce5c,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieFlagProps::StaticGetClass() */

long * GridItemCardGameZombieFlagProps::StaticGetClass(void)

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
  uVar2 = GridItemCardGameZombieProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieFlagProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieFlagProps::GetClass() const */

long * GridItemCardGameZombieFlagProps::GetClass(void)

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
  uVar2 = GridItemCardGameZombieProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieFlagProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieFlagProps::GridItemCardGameZombieFlagProps() */

void __thiscall
GridItemCardGameZombieFlagProps::GridItemCardGameZombieFlagProps
          (GridItemCardGameZombieFlagProps *this)

{
  GridItemCardGameZombieProps::GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  *(undefined ***)this = &PTR_GetClass_069d7480;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x160));
  *(undefined4 *)(this + 0x178) = 5;
  *(undefined4 *)(this + 0x17c) = 3;
  *(undefined4 *)(this + 0x180) = 1;
  *(undefined4 *)(this + 0x184) = 0x3f000000;
  *(undefined4 *)(this + 0x188) = 0x3f000000;
  return;
}


/* GridItemCardGameZombieFlagProps::StaticNew() */

GridItemCardGameZombieFlagProps * GridItemCardGameZombieFlagProps::StaticNew(void)

{
  GridItemCardGameZombieFlagProps *this;
  
  this = ::operator_new(400);
  GridItemCardGameZombieFlagProps(this);
  return this;
}


/* GridItemCardGameZombieFlagProps::~GridItemCardGameZombieFlagProps() */

void __thiscall
GridItemCardGameZombieFlagProps::~GridItemCardGameZombieFlagProps
          (GridItemCardGameZombieFlagProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069d7480;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x160));
  GridItemCardGameZombieProps::~GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  return;
}


/* GridItemCardGameZombieFlagProps::~GridItemCardGameZombieFlagProps() */

void __thiscall
GridItemCardGameZombieFlagProps::~GridItemCardGameZombieFlagProps
          (GridItemCardGameZombieFlagProps *this)

{
  ~GridItemCardGameZombieFlagProps(this);
  AK::FreeHook(this);
  return;
}

