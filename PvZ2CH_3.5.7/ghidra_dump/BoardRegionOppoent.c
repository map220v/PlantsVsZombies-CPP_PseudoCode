// Class: BoardRegionOppoent


/* BoardRegionOppoent::~BoardRegionOppoent() */

void __thiscall BoardRegionOppoent::~BoardRegionOppoent(BoardRegionOppoent *this)

{
  *(undefined ***)this = &PTR_GetClass_06647540;
  BoardRegion::~BoardRegion((BoardRegion *)this);
  return;
}


/* BoardRegionOppoent::~BoardRegionOppoent() */

void __thiscall BoardRegionOppoent::~BoardRegionOppoent(BoardRegionOppoent *this)

{
  ~BoardRegionOppoent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionOppoent::StaticClassInit() */

void BoardRegionOppoent::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardRegionOppoent");
    (*pcVar2)(plVar1,asStack_10,FUN_034ba058,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardRegionOppoent::StaticGetClass() */

long * BoardRegionOppoent::StaticGetClass(void)

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
  uVar2 = BoardRegion::StaticGetClass();
  (*pcVar3)(plVar1,"BoardRegionOppoent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardRegionOppoent::GetClass() const */

long * BoardRegionOppoent::GetClass(void)

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
  uVar2 = BoardRegion::StaticGetClass();
  (*pcVar3)(plVar1,"BoardRegionOppoent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardRegionOppoent::BoardRegionOppoent() */

void __thiscall BoardRegionOppoent::BoardRegionOppoent(BoardRegionOppoent *this)

{
  BoardRegion::BoardRegion((BoardRegion *)this);
  *(undefined ***)this = &PTR_GetClass_06647540;
  SporeshroomSubsystem::RecordSporeshroomLevel((SporeshroomSubsystem *)this,0x40);
  return;
}


/* BoardRegionOppoent::StaticNew() */

BoardRegionOppoent * BoardRegionOppoent::StaticNew(void)

{
  BoardRegionOppoent *this;
  
  this = ::operator_new(0x28);
  BoardRegionOppoent(this);
  return this;
}

