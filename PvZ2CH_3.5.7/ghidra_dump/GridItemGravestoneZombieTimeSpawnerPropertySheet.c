// Class: GridItemGravestoneZombieTimeSpawnerPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneZombieTimeSpawnerPropertySheet::StaticClassInit() */

void GridItemGravestoneZombieTimeSpawnerPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGravestoneZombieTimeSpawnerPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03d62c58,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestoneZombieTimeSpawnerPropertySheet::StaticGetClass() */

long * GridItemGravestoneZombieTimeSpawnerPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGravestoneZombieTimeSpawnerPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneZombieTimeSpawnerPropertySheet::GetClass() const */

long * GridItemGravestoneZombieTimeSpawnerPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGravestoneZombieTimeSpawnerPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneZombieTimeSpawnerPropertySheet::GridItemGravestoneZombieTimeSpawnerPropertySheet()
    */

void __thiscall
GridItemGravestoneZombieTimeSpawnerPropertySheet::GridItemGravestoneZombieTimeSpawnerPropertySheet
          (GridItemGravestoneZombieTimeSpawnerPropertySheet *this)

{
  size_t in_x2;
  
  GridItemGravestonePropertySheet::GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0676cf10;
  Set8BytesTo0((string *)(this + 0x120));
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  std::string::append((string *)(this + 0x120),"",in_x2);
  *(undefined4 *)(this + 0x114) = 0xffffffff;
  *(undefined4 *)(this + 0x118) = 0xffffffff;
  return;
}


/* GridItemGravestoneZombieTimeSpawnerPropertySheet::StaticNew() */

GridItemGravestoneZombieTimeSpawnerPropertySheet *
GridItemGravestoneZombieTimeSpawnerPropertySheet::StaticNew(void)

{
  GridItemGravestoneZombieTimeSpawnerPropertySheet *this;
  
  this = ::operator_new(0x128);
  GridItemGravestoneZombieTimeSpawnerPropertySheet(this);
  return this;
}


/* GridItemGravestoneZombieTimeSpawnerPropertySheet::~GridItemGravestoneZombieTimeSpawnerPropertySheet()
    */

void __thiscall
GridItemGravestoneZombieTimeSpawnerPropertySheet::~GridItemGravestoneZombieTimeSpawnerPropertySheet
          (GridItemGravestoneZombieTimeSpawnerPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_0676cf10;
  std::string::~string((string *)(this + 0x120));
  GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  return;
}


/* GridItemGravestoneZombieTimeSpawnerPropertySheet::~GridItemGravestoneZombieTimeSpawnerPropertySheet()
    */

void __thiscall
GridItemGravestoneZombieTimeSpawnerPropertySheet::~GridItemGravestoneZombieTimeSpawnerPropertySheet
          (GridItemGravestoneZombieTimeSpawnerPropertySheet *this)

{
  ~GridItemGravestoneZombieTimeSpawnerPropertySheet(this);
  AK::FreeHook(this);
  return;
}

