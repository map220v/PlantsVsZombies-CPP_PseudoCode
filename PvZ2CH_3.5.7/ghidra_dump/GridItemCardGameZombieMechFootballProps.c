// Class: GridItemCardGameZombieMechFootballProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMechFootballProps::StaticClassInit() */

void GridItemCardGameZombieMechFootballProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieMechFootballProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e246ec,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieMechFootballProps::StaticGetClass() */

long * GridItemCardGameZombieMechFootballProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieMechFootballProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieMechFootballProps::GetClass() const */

long * GridItemCardGameZombieMechFootballProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieMechFootballProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieMechFootballProps::GridItemCardGameZombieMechFootballProps() */

void __thiscall
GridItemCardGameZombieMechFootballProps::GridItemCardGameZombieMechFootballProps
          (GridItemCardGameZombieMechFootballProps *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_01;
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178);
  this_01 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  GridItemCardGameZombieProps::GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  *(undefined ***)this = &PTR_GetClass_069d8cf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_01);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  Sexy::Point::Point(aPStack_10,9,2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_01,aPStack_10);
  Sexy::Point::Point(aPStack_10,9,4);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_01,aPStack_10);
  Sexy::Point::Point(aPStack_10,10,1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,aPStack_10);
  Sexy::Point::Point(aPStack_10,10,3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,aPStack_10);
  Sexy::Point::Point(aPStack_10,10,5);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieMechFootballProps::StaticNew() */

GridItemCardGameZombieMechFootballProps * GridItemCardGameZombieMechFootballProps::StaticNew(void)

{
  GridItemCardGameZombieMechFootballProps *this;
  
  this = ::operator_new(400);
  GridItemCardGameZombieMechFootballProps(this);
  return this;
}


/* GridItemCardGameZombieMechFootballProps::~GridItemCardGameZombieMechFootballProps() */

void __thiscall
GridItemCardGameZombieMechFootballProps::~GridItemCardGameZombieMechFootballProps
          (GridItemCardGameZombieMechFootballProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069d8cf0;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x178));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x160));
  GridItemCardGameZombieProps::~GridItemCardGameZombieProps((GridItemCardGameZombieProps *)this);
  return;
}


/* GridItemCardGameZombieMechFootballProps::~GridItemCardGameZombieMechFootballProps() */

void __thiscall
GridItemCardGameZombieMechFootballProps::~GridItemCardGameZombieMechFootballProps
          (GridItemCardGameZombieMechFootballProps *this)

{
  ~GridItemCardGameZombieMechFootballProps(this);
  AK::FreeHook(this);
  return;
}

