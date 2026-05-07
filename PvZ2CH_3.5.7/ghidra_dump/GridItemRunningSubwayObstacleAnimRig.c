// Class: GridItemRunningSubwayObstacleAnimRig


/* GridItemRunningSubwayObstacleAnimRig::~GridItemRunningSubwayObstacleAnimRig() */

void __thiscall
GridItemRunningSubwayObstacleAnimRig::~GridItemRunningSubwayObstacleAnimRig
          (GridItemRunningSubwayObstacleAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0661d150;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRunningSubwayObstacleAnimRig_0661d278;
  GridItemRunningSubwayObjectAnimRig::~GridItemRunningSubwayObjectAnimRig
            ((GridItemRunningSubwayObjectAnimRig *)this);
  return;
}


/* non-virtual thunk to
   GridItemRunningSubwayObstacleAnimRig::~GridItemRunningSubwayObstacleAnimRig() */

void __thiscall
GridItemRunningSubwayObstacleAnimRig::~GridItemRunningSubwayObstacleAnimRig
          (GridItemRunningSubwayObstacleAnimRig *this)

{
  ~GridItemRunningSubwayObstacleAnimRig(this + -0x10);
  return;
}


/* GridItemRunningSubwayObstacleAnimRig::~GridItemRunningSubwayObstacleAnimRig() */

void __thiscall
GridItemRunningSubwayObstacleAnimRig::~GridItemRunningSubwayObstacleAnimRig
          (GridItemRunningSubwayObstacleAnimRig *this)

{
  ~GridItemRunningSubwayObstacleAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridItemRunningSubwayObstacleAnimRig::~GridItemRunningSubwayObstacleAnimRig() */

void __thiscall
GridItemRunningSubwayObstacleAnimRig::~GridItemRunningSubwayObstacleAnimRig
          (GridItemRunningSubwayObstacleAnimRig *this)

{
  ~GridItemRunningSubwayObstacleAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayObstacleAnimRig::StaticClassInit() */

void GridItemRunningSubwayObstacleAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRunningSubwayObstacleAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_033ebe44,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRunningSubwayObstacleAnimRig::StaticGetClass() */

long * GridItemRunningSubwayObstacleAnimRig::StaticGetClass(void)

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
  uVar2 = GridItemRunningSubwayObjectAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayObstacleAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayObstacleAnimRig::GetClass() const */

long * GridItemRunningSubwayObstacleAnimRig::GetClass(void)

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
  uVar2 = GridItemRunningSubwayObjectAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayObstacleAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayObstacleAnimRig::GridItemRunningSubwayObstacleAnimRig() */

void __thiscall
GridItemRunningSubwayObstacleAnimRig::GridItemRunningSubwayObstacleAnimRig
          (GridItemRunningSubwayObstacleAnimRig *this)

{
  GridItemRunningSubwayObjectAnimRig::GridItemRunningSubwayObjectAnimRig
            ((GridItemRunningSubwayObjectAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0661d150;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRunningSubwayObstacleAnimRig_0661d278;
  return;
}


/* GridItemRunningSubwayObstacleAnimRig::StaticNew() */

GridItemRunningSubwayObstacleAnimRig * GridItemRunningSubwayObstacleAnimRig::StaticNew(void)

{
  GridItemRunningSubwayObstacleAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemRunningSubwayObstacleAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayObstacleAnimRig::PlayBreak(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GridItemRunningSubwayObstacleAnimRig::PlayBreak
          (GridItemRunningSubwayObstacleAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"break");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

