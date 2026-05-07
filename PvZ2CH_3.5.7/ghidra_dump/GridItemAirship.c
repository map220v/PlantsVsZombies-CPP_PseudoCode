// Class: GridItemAirship


/* GridItemAirship::~GridItemAirship() */

void __thiscall GridItemAirship::~GridItemAirship(GridItemAirship *this)

{
  *(undefined ***)this = &PTR_GetClass_06787c70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAirship_06787f08;
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemAirship::~GridItemAirship() */

void __thiscall GridItemAirship::~GridItemAirship(GridItemAirship *this)

{
  ~GridItemAirship(this + -0x10);
  return;
}


/* GridItemAirship::~GridItemAirship() */

void __thiscall GridItemAirship::~GridItemAirship(GridItemAirship *this)

{
  ~GridItemAirship(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemAirship::~GridItemAirship() */

void __thiscall GridItemAirship::~GridItemAirship(GridItemAirship *this)

{
  ~GridItemAirship(this + -0x10);
  return;
}


/* GridItemAirship::GridItemAirship() */

void __thiscall GridItemAirship::GridItemAirship(GridItemAirship *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06787c70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemAirship_06787f08;
  return;
}


/* GridItemAirship::StaticNew() */

GridItemAirship * GridItemAirship::StaticNew(void)

{
  GridItemAirship *this;
  
  this = ::operator_new(0x198);
  GridItemAirship(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAirship::StaticClassInit() */

void GridItemAirship::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemAirship");
    (*pcVar2)(plVar1,asStack_10,FUN_03e2aba0,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAirship::StaticGetClass() */

long * GridItemAirship::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemAirship",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAirship::GetClass() const */

long * GridItemAirship::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemAirship",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAirship::calcCollisionRect() */

void GridItemAirship::calcCollisionRect(void)

{
  long in_x0;
  Insets *in_x8;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(in_x0 + 0x1c);
  fVar1 = (float)FUN_03e2a9ac(*(undefined4 *)(in_x0 + 0x18),fVar2,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets(in_x8,(int)(fVar1 - 21.0),(int)(fVar2 - 75.0),0x3c,0x4c);
  return;
}


/* GridItemAirship::CollidesWithType(CollisionTypeFlags) const */

bool __thiscall GridItemAirship::CollidesWithType(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(param_2,8);
  return bVar1;
}


/* GridItemAirship::TakeDamage(DamageInfo const&) */

void __thiscall GridItemAirship::TakeDamage(GridItemAirship *this,DamageInfo *param_1)

{
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,*(float *)(param_1 + 8));
  return;
}


/* GridItemAirship::onGridItemInitialize() */

void __thiscall GridItemAirship::onGridItemInitialize(GridItemAirship *this)

{
  GridItem::onGridItemInitialize((GridItem *)this);
  FUN_03e2a9a0(this + 300);
  FUN_03e2a994(this + 0x128);
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}

