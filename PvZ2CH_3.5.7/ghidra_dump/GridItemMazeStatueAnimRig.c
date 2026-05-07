// Class: GridItemMazeStatueAnimRig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatueAnimRig::PlayIdle() */

void __thiscall GridItemMazeStatueAnimRig::PlayIdle(GridItemMazeStatueAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMazeStatueAnimRig::~GridItemMazeStatueAnimRig() */

void __thiscall
GridItemMazeStatueAnimRig::~GridItemMazeStatueAnimRig(GridItemMazeStatueAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06765270;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMazeStatueAnimRig_06765390;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemMazeStatueAnimRig::~GridItemMazeStatueAnimRig() */

void __thiscall
GridItemMazeStatueAnimRig::~GridItemMazeStatueAnimRig(GridItemMazeStatueAnimRig *this)

{
  ~GridItemMazeStatueAnimRig(this + -0x10);
  return;
}


/* GridItemMazeStatueAnimRig::~GridItemMazeStatueAnimRig() */

void __thiscall
GridItemMazeStatueAnimRig::~GridItemMazeStatueAnimRig(GridItemMazeStatueAnimRig *this)

{
  ~GridItemMazeStatueAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMazeStatueAnimRig::~GridItemMazeStatueAnimRig() */

void __thiscall
GridItemMazeStatueAnimRig::~GridItemMazeStatueAnimRig(GridItemMazeStatueAnimRig *this)

{
  ~GridItemMazeStatueAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatueAnimRig::StaticClassInit() */

void GridItemMazeStatueAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMazeStatueAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03d1b8a0,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMazeStatueAnimRig::StaticGetClass() */

long * GridItemMazeStatueAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMazeStatueAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMazeStatueAnimRig::GetClass() const */

long * GridItemMazeStatueAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMazeStatueAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMazeStatueAnimRig::GridItemMazeStatueAnimRig() */

void __thiscall
GridItemMazeStatueAnimRig::GridItemMazeStatueAnimRig(GridItemMazeStatueAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06765270;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMazeStatueAnimRig_06765390;
  return;
}


/* GridItemMazeStatueAnimRig::StaticNew() */

GridItemMazeStatueAnimRig * GridItemMazeStatueAnimRig::StaticNew(void)

{
  GridItemMazeStatueAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemMazeStatueAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatueAnimRig::PlayBreak(bool, RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GridItemMazeStatueAnimRig::PlayBreak
          (GridItemMazeStatueAnimRig *this,char param_1,RtReflectionDelegate *param_3)

{
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == '\0') {
    __s = "break1";
  }
  else {
    __s = "break2";
  }
  std::string::string(asStack_58,__s);
  nop();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatueAnimRig::PlayReveal(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
GridItemMazeStatueAnimRig::PlayReveal(GridItemMazeStatueAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"open");
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
/* GridItemMazeStatueAnimRig::PlayClose(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
GridItemMazeStatueAnimRig::PlayClose(GridItemMazeStatueAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"close");
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

