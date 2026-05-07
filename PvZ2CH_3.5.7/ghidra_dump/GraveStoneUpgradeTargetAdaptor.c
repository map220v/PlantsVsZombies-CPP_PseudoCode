// Class: GraveStoneUpgradeTargetAdaptor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GraveStoneUpgradeTargetAdaptor::StaticClassInit() */

void GraveStoneUpgradeTargetAdaptor::StaticClassInit(void)

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
    std::string::string(asStack_10,"GraveStoneUpgradeTargetAdaptor");
    (*pcVar2)(plVar1,asStack_10,FUN_036052d0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GraveStoneUpgradeTargetAdaptor::StaticGetClass() */

long * GraveStoneUpgradeTargetAdaptor::StaticGetClass(void)

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
  uVar2 = GridTargetAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"GraveStoneUpgradeTargetAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GraveStoneUpgradeTargetAdaptor::GraveStoneUpgradeTargetAdaptor() */

void __thiscall
GraveStoneUpgradeTargetAdaptor::GraveStoneUpgradeTargetAdaptor(GraveStoneUpgradeTargetAdaptor *this)

{
  GridTargetAdaptor::GridTargetAdaptor((GridTargetAdaptor *)this);
  *(undefined ***)this = &PTR_GetTargetAdaptorClass_06666e80;
  return;
}


/* GraveStoneUpgradeTargetAdaptor::StaticNew() */

GraveStoneUpgradeTargetAdaptor * GraveStoneUpgradeTargetAdaptor::StaticNew(void)

{
  GraveStoneUpgradeTargetAdaptor *this;
  
  this = ::operator_new(0x30);
  GraveStoneUpgradeTargetAdaptor(this);
  return this;
}


/* GraveStoneUpgradeTargetAdaptor::~GraveStoneUpgradeTargetAdaptor() */

void __thiscall
GraveStoneUpgradeTargetAdaptor::~GraveStoneUpgradeTargetAdaptor
          (GraveStoneUpgradeTargetAdaptor *this)

{
  *(undefined ***)this = &PTR_GetTargetAdaptorClass_06666e80;
  GridTargetAdaptor::~GridTargetAdaptor((GridTargetAdaptor *)this);
  return;
}


/* GraveStoneUpgradeTargetAdaptor::~GraveStoneUpgradeTargetAdaptor() */

void __thiscall
GraveStoneUpgradeTargetAdaptor::~GraveStoneUpgradeTargetAdaptor
          (GraveStoneUpgradeTargetAdaptor *this)

{
  ~GraveStoneUpgradeTargetAdaptor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GraveStoneUpgradeTargetAdaptor::isValidTargetPosition(Sexy::Point const&) */

void __thiscall
GraveStoneUpgradeTargetAdaptor::isValidTargetPosition
          (GraveStoneUpgradeTargetAdaptor *this,Point *param_1)

{
  long lVar1;
  char cVar2;
  GridItemCardGameGravestoneZombieTimeSpawner *this_00;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*(uint *)param_1,*(int *)(param_1 + 4),
             (int)___stack_chk_guard);
  this_00 = (GridItemCardGameGravestoneZombieTimeSpawner *)FUN_03607714(local_10,local_c);
  if (this_00 != (GridItemCardGameGravestoneZombieTimeSpawner *)0x0) {
    cVar2 = GridItemCardGameGravestoneZombieTimeSpawner::CanLevelUpGravestone(this_00);
    if (cVar2 != '\0') goto LAB_03607840;
  }
  cVar2 = '\0';
LAB_03607840:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

