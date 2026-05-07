// Class: BoardRegionDisabledArea


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionDisabledArea::StaticClassInit() */

void BoardRegionDisabledArea::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardRegionDisabledArea");
    (*pcVar2)(plVar1,asStack_10,FUN_033ec8b8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardRegionDisabledArea::StaticGetClass() */

long * BoardRegionDisabledArea::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardRegionDisabledArea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardRegionDisabledArea::GetClass() const */

long * BoardRegionDisabledArea::GetClass(void)

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
  (*pcVar3)(plVar1,"BoardRegionDisabledArea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardRegionDisabledArea::~BoardRegionDisabledArea() */

void __thiscall BoardRegionDisabledArea::~BoardRegionDisabledArea(BoardRegionDisabledArea *this)

{
  *(undefined ***)this = &PTR_GetClass_0661d980;
  BoardRegion::~BoardRegion((BoardRegion *)this);
  return;
}


/* BoardRegionDisabledArea::~BoardRegionDisabledArea() */

void __thiscall BoardRegionDisabledArea::~BoardRegionDisabledArea(BoardRegionDisabledArea *this)

{
  ~BoardRegionDisabledArea(this);
  AK::FreeHook(this);
  return;
}


/* BoardRegionDisabledArea::BoardRegionDisabledArea() */

void __thiscall BoardRegionDisabledArea::BoardRegionDisabledArea(BoardRegionDisabledArea *this)

{
  BoardRegion::BoardRegion((BoardRegion *)this);
  *(undefined ***)this = &PTR_GetClass_0661d980;
  SporeshroomSubsystem::RecordSporeshroomLevel((SporeshroomSubsystem *)this,0x80);
  return;
}


/* BoardRegionDisabledArea::StaticNew() */

BoardRegionDisabledArea * BoardRegionDisabledArea::StaticNew(void)

{
  BoardRegionDisabledArea *this;
  
  this = ::operator_new(0x28);
  BoardRegionDisabledArea(this);
  return this;
}

