// Class: GridItemGravestoneShovelPlant


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneShovelPlant::StaticClassInit() */

void GridItemGravestoneShovelPlant::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGravestoneShovelPlant");
    (*pcVar2)(plVar1,asStack_10,FUN_03dfed1c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestoneShovelPlant::StaticGetClass() */

long * GridItemGravestoneShovelPlant::StaticGetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGravestoneShovelPlant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneShovelPlant::GetClass() const */

long * GridItemGravestoneShovelPlant::GetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGravestoneShovelPlant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneShovelPlant::GridItemGravestoneShovelPlant() */

void __thiscall
GridItemGravestoneShovelPlant::GridItemGravestoneShovelPlant(GridItemGravestoneShovelPlant *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined4 *)(this + 0x1e0) = 0xbf800000;
  *(undefined ***)this = &PTR_GetClass_06780c00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestoneShovelPlant_06780ec0;
  *(undefined4 *)(this + 0x1e4) = 0;
  return;
}


/* GridItemGravestoneShovelPlant::StaticNew() */

GridItemGravestoneShovelPlant * GridItemGravestoneShovelPlant::StaticNew(void)

{
  GridItemGravestoneShovelPlant *this;
  
  this = ::operator_new(0x1e8);
  GridItemGravestoneShovelPlant(this);
  return this;
}


/* GridItemGravestoneShovelPlant::CalcDamagePerFrame() */

void __thiscall
GridItemGravestoneShovelPlant::CalcDamagePerFrame(GridItemGravestoneShovelPlant *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    fVar1 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar1 = (float)(**(code **)(*(long *)this + 0x1e0))();
  }
  fVar3 = *(float *)(this + 0x1e0);
  fVar2 = (float)PVZ_Dt();
  *(float *)(this + 0x1e4) = (fVar1 / fVar3) * fVar2;
  return;
}


/* GridItemGravestoneShovelPlant::~GridItemGravestoneShovelPlant() */

void __thiscall
GridItemGravestoneShovelPlant::~GridItemGravestoneShovelPlant(GridItemGravestoneShovelPlant *this)

{
  *(undefined ***)this = &PTR_GetClass_06780c00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestoneShovelPlant_06780ec0;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemGravestoneShovelPlant::~GridItemGravestoneShovelPlant() */

void __thiscall
GridItemGravestoneShovelPlant::~GridItemGravestoneShovelPlant(GridItemGravestoneShovelPlant *this)

{
  ~GridItemGravestoneShovelPlant(this + -0x10);
  return;
}


/* GridItemGravestoneShovelPlant::~GridItemGravestoneShovelPlant() */

void __thiscall
GridItemGravestoneShovelPlant::~GridItemGravestoneShovelPlant(GridItemGravestoneShovelPlant *this)

{
  ~GridItemGravestoneShovelPlant(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemGravestoneShovelPlant::~GridItemGravestoneShovelPlant() */

void __thiscall
GridItemGravestoneShovelPlant::~GridItemGravestoneShovelPlant(GridItemGravestoneShovelPlant *this)

{
  ~GridItemGravestoneShovelPlant(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneShovelPlant::onUpdate() */

void __thiscall GridItemGravestoneShovelPlant::onUpdate(GridItemGravestoneShovelPlant *this)

{
  code *pcVar1;
  DamageInfo *pDVar2;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemGravestone::onUpdate((GridItemGravestone *)this);
  if (0.0 < *(float *)(this + 0x1e0)) {
                    /* WARNING: Load size is inaccurate */
    pDVar2._0_4_ = *(DamageInfo **)(this + 0x1e4);
    pcVar1 = *(code **)(*(long *)this + 0x110);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar2._0_4_,local_70,local_6c,aDStack_68,aPStack_78,0);
    (*pcVar1)(this,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

