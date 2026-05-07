// Class: GridItemMoltenPool


/* GridItemMoltenPool::~GridItemMoltenPool() */

void __thiscall GridItemMoltenPool::~GridItemMoltenPool(GridItemMoltenPool *this)

{
  *(undefined ***)this = &PTR_GetClass_069b1330;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMoltenPool_069b1618;
  GridItemLava::~GridItemLava((GridItemLava *)this);
  return;
}


/* non-virtual thunk to GridItemMoltenPool::~GridItemMoltenPool() */

void __thiscall GridItemMoltenPool::~GridItemMoltenPool(GridItemMoltenPool *this)

{
  ~GridItemMoltenPool(this + -0x10);
  return;
}


/* GridItemMoltenPool::~GridItemMoltenPool() */

void __thiscall GridItemMoltenPool::~GridItemMoltenPool(GridItemMoltenPool *this)

{
  ~GridItemMoltenPool(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMoltenPool::~GridItemMoltenPool() */

void __thiscall GridItemMoltenPool::~GridItemMoltenPool(GridItemMoltenPool *this)

{
  ~GridItemMoltenPool(this + -0x10);
  return;
}


/* GridItemMoltenPool::GridItemMoltenPool() */

void __thiscall GridItemMoltenPool::GridItemMoltenPool(GridItemMoltenPool *this)

{
  GridItemLava::GridItemLava((GridItemLava *)this);
  *(undefined ***)this = &PTR_GetClass_069b1330;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMoltenPool_069b1618;
  return;
}


/* GridItemMoltenPool::StaticNew() */

GridItemMoltenPool * GridItemMoltenPool::StaticNew(void)

{
  GridItemMoltenPool *this;
  
  this = ::operator_new(0x1e0);
  GridItemMoltenPool(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMoltenPool::StaticClassInit() */

void GridItemMoltenPool::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMoltenPool");
    (*pcVar2)(plVar1,asStack_10,FUN_04d490e0,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMoltenPool::StaticGetClass() */

long * GridItemMoltenPool::StaticGetClass(void)

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
  uVar2 = GridItemLava::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMoltenPool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMoltenPool::GetClass() const */

long * GridItemMoltenPool::GetClass(void)

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
  uVar2 = GridItemLava::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMoltenPool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMoltenPool::onCauseDamage(Zombie*) */

void __thiscall GridItemMoltenPool::onCauseDamage(GridItemMoltenPool *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *this_00;
  
  if ((((param_1 != (Zombie *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<ZombieExplorer>((RtObject *)param_1), bVar1)) &&
      (nop(), this_00 != (Zombie *)0x0)) && (cVar2 = Zombie::IsTorchBurning(this_00), cVar2 == '\0')
     ) {
    ZombieWolfFire::setIsTorchBurning((ZombieWolfFire *)this_00,true);
    return;
  }
  return;
}

