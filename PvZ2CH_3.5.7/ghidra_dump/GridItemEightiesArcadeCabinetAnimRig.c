// Class: GridItemEightiesArcadeCabinetAnimRig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinetAnimRig::PlayStartGame(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GridItemEightiesArcadeCabinetAnimRig::PlayStartGame
          (GridItemEightiesArcadeCabinetAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"active_start");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinetAnimRig::PlayEndGame(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GridItemEightiesArcadeCabinetAnimRig::PlayEndGame
          (GridItemEightiesArcadeCabinetAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"active_end");
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


/* GridItemEightiesArcadeCabinetAnimRig::~GridItemEightiesArcadeCabinetAnimRig() */

void __thiscall
GridItemEightiesArcadeCabinetAnimRig::~GridItemEightiesArcadeCabinetAnimRig
          (GridItemEightiesArcadeCabinetAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0678a3e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEightiesArcadeCabinetAnimRig_0678a500;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to
   GridItemEightiesArcadeCabinetAnimRig::~GridItemEightiesArcadeCabinetAnimRig() */

void __thiscall
GridItemEightiesArcadeCabinetAnimRig::~GridItemEightiesArcadeCabinetAnimRig
          (GridItemEightiesArcadeCabinetAnimRig *this)

{
  ~GridItemEightiesArcadeCabinetAnimRig(this + -0x10);
  return;
}


/* GridItemEightiesArcadeCabinetAnimRig::~GridItemEightiesArcadeCabinetAnimRig() */

void __thiscall
GridItemEightiesArcadeCabinetAnimRig::~GridItemEightiesArcadeCabinetAnimRig
          (GridItemEightiesArcadeCabinetAnimRig *this)

{
  ~GridItemEightiesArcadeCabinetAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridItemEightiesArcadeCabinetAnimRig::~GridItemEightiesArcadeCabinetAnimRig() */

void __thiscall
GridItemEightiesArcadeCabinetAnimRig::~GridItemEightiesArcadeCabinetAnimRig
          (GridItemEightiesArcadeCabinetAnimRig *this)

{
  ~GridItemEightiesArcadeCabinetAnimRig(this + -0x10);
  return;
}


/* GridItemEightiesArcadeCabinetAnimRig::GridItemEightiesArcadeCabinetAnimRig() */

void __thiscall
GridItemEightiesArcadeCabinetAnimRig::GridItemEightiesArcadeCabinetAnimRig
          (GridItemEightiesArcadeCabinetAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0678a3e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemEightiesArcadeCabinetAnimRig_0678a500;
  return;
}


/* GridItemEightiesArcadeCabinetAnimRig::StaticNew() */

GridItemEightiesArcadeCabinetAnimRig * GridItemEightiesArcadeCabinetAnimRig::StaticNew(void)

{
  GridItemEightiesArcadeCabinetAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemEightiesArcadeCabinetAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinetAnimRig::StaticClassInit() */

void GridItemEightiesArcadeCabinetAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemEightiesArcadeCabinetAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03e361e8,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemEightiesArcadeCabinetAnimRig::StaticGetClass() */

long * GridItemEightiesArcadeCabinetAnimRig::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEightiesArcadeCabinetAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemEightiesArcadeCabinetAnimRig::GetClass() const */

long * GridItemEightiesArcadeCabinetAnimRig::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemEightiesArcadeCabinetAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemEightiesArcadeCabinetAnimRig::PlayVideoGameLoop() */

void __thiscall
GridItemEightiesArcadeCabinetAnimRig::PlayVideoGameLoop(GridItemEightiesArcadeCabinetAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"active");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

