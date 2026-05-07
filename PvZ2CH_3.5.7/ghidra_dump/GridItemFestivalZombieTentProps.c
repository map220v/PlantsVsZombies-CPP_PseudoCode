// Class: GridItemFestivalZombieTentProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFestivalZombieTentProps::StaticClassInit() */

void GridItemFestivalZombieTentProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TentZombieTranStruct");
    (*pcVar3)(plVar2,asStack_10,FUN_04ca02c0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GridItemFestivalZombieTentProps");
    (*pcVar3)(plVar2,asStack_10,FUN_04ca2a9c,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFestivalZombieTentProps::StaticGetClass() */

long * GridItemFestivalZombieTentProps::StaticGetClass(void)

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
  uVar2 = GridItemGravestonePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFestivalZombieTentProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFestivalZombieTentProps::GetClass() const */

long * GridItemFestivalZombieTentProps::GetClass(void)

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
  uVar2 = GridItemGravestonePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFestivalZombieTentProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFestivalZombieTentProps::GridItemFestivalZombieTentProps() */

void __thiscall
GridItemFestivalZombieTentProps::GridItemFestivalZombieTentProps
          (GridItemFestivalZombieTentProps *this)

{
  GridItemGravestonePropertySheet::GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06997910;
  DVec2::DVec2((DVec2 *)(this + 0x104),10.0,12.0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  *(undefined4 *)(this + 0x128) = 0xffffffb0;
  *(undefined4 *)(this + 300) = 0x40a00000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  Set8BytesTo0(this + 0x148);
  return;
}


/* GridItemFestivalZombieTentProps::StaticNew() */

GridItemFestivalZombieTentProps * GridItemFestivalZombieTentProps::StaticNew(void)

{
  GridItemFestivalZombieTentProps *this;
  
  this = ::operator_new(0x150);
  GridItemFestivalZombieTentProps(this);
  return this;
}


/* GridItemFestivalZombieTentProps::~GridItemFestivalZombieTentProps() */

void __thiscall
GridItemFestivalZombieTentProps::~GridItemFestivalZombieTentProps
          (GridItemFestivalZombieTentProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06997910;
  std::string::~string((string *)(this + 0x148));
  std::vector<TentZombieTranStruct,std::allocator<TentZombieTranStruct>>::~vector
            ((vector<TentZombieTranStruct,std::allocator<TentZombieTranStruct>> *)(this + 0x130));
  std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::~vector
            ((vector<TentZombieWeights,std::allocator<TentZombieWeights>> *)(this + 0x110));
  GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  return;
}


/* GridItemFestivalZombieTentProps::~GridItemFestivalZombieTentProps() */

void __thiscall
GridItemFestivalZombieTentProps::~GridItemFestivalZombieTentProps
          (GridItemFestivalZombieTentProps *this)

{
  ~GridItemFestivalZombieTentProps(this);
  AK::FreeHook(this);
  return;
}

