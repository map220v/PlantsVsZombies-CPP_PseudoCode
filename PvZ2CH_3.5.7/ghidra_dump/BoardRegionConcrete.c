// Class: BoardRegionConcrete


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegionConcrete::StaticClassInit() */

void BoardRegionConcrete::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardRegionConcrete");
    (*pcVar2)(plVar1,asStack_10,FUN_034b9d70,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardRegionConcrete::StaticGetClass() */

long * BoardRegionConcrete::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardRegionConcrete",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardRegionConcrete::GetClass() const */

long * BoardRegionConcrete::GetClass(void)

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
  (*pcVar3)(plVar1,"BoardRegionConcrete",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardRegionConcrete::~BoardRegionConcrete() */

void __thiscall BoardRegionConcrete::~BoardRegionConcrete(BoardRegionConcrete *this)

{
  *(undefined ***)this = &PTR_GetClass_06647490;
  BoardRegion::~BoardRegion((BoardRegion *)this);
  return;
}


/* BoardRegionConcrete::~BoardRegionConcrete() */

void __thiscall BoardRegionConcrete::~BoardRegionConcrete(BoardRegionConcrete *this)

{
  ~BoardRegionConcrete(this);
  AK::FreeHook(this);
  return;
}


/* BoardRegionConcrete::BoardRegionConcrete() */

void __thiscall BoardRegionConcrete::BoardRegionConcrete(BoardRegionConcrete *this)

{
  BoardRegion::BoardRegion((BoardRegion *)this);
  *(undefined ***)this = &PTR_GetClass_06647490;
  SporeshroomSubsystem::RecordSporeshroomLevel((SporeshroomSubsystem *)this,0x20);
  return;
}


/* BoardRegionConcrete::StaticNew() */

BoardRegionConcrete * BoardRegionConcrete::StaticNew(void)

{
  BoardRegionConcrete *this;
  
  this = ::operator_new(0x28);
  BoardRegionConcrete(this);
  return this;
}

