// Class: GridItemCardGameTowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTowerProps::StaticClassInit() */

void GridItemCardGameTowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameTowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e1b46c,0x100,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameTowerProps::StaticGetClass() */

long * GridItemCardGameTowerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameTowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameTowerProps::GetClass() const */

long * GridItemCardGameTowerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameTowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameTowerProps::GridItemCardGameTowerProps() */

void __thiscall
GridItemCardGameTowerProps::GridItemCardGameTowerProps(GridItemCardGameTowerProps *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t in_x2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined ***)this = &PTR_GetClass_069d7090;
  Set8BytesTo0((string *)(this + 0xd0));
  Set8BytesTo0((string *)(this + 0xd8));
  Set8BytesTo0((string *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xec));
  std::string::append((string *)(this + 0xd0),"idle",in_x2);
  std::string::append((string *)(this + 0xd8),"attack",in_x2);
  std::string::append((string *)(this + 0xe0),"end",in_x2);
  *(undefined4 *)(this + 0xe8) = 0x42480000;
  iVar2 = FUN_04e1ac40(0xfffffff6);
  iVar3 = FUN_04e1ac40(0xffffffec);
  iVar4 = FUN_04e1ac40(0x32);
  iVar5 = FUN_04e1ac40(0x3c);
  Sexy::Insets::Insets((Insets *)&local_18,iVar2,iVar3,iVar4,iVar5);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xec) = local_18;
  *(undefined8 *)(this + 0xf4) = uStack_10;
  *(undefined4 *)(this + 0xfc) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameTowerProps::StaticNew() */

GridItemCardGameTowerProps * GridItemCardGameTowerProps::StaticNew(void)

{
  GridItemCardGameTowerProps *this;
  
  this = ::operator_new(0x100);
  GridItemCardGameTowerProps(this);
  return this;
}


/* GridItemCardGameTowerProps::~GridItemCardGameTowerProps() */

void __thiscall
GridItemCardGameTowerProps::~GridItemCardGameTowerProps(GridItemCardGameTowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069d7090;
  std::string::~string((string *)(this + 0xe0));
  std::string::~string((string *)(this + 0xd8));
  std::string::~string((string *)(this + 0xd0));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* GridItemCardGameTowerProps::~GridItemCardGameTowerProps() */

void __thiscall
GridItemCardGameTowerProps::~GridItemCardGameTowerProps(GridItemCardGameTowerProps *this)

{
  ~GridItemCardGameTowerProps(this);
  AK::FreeHook(this);
  return;
}

