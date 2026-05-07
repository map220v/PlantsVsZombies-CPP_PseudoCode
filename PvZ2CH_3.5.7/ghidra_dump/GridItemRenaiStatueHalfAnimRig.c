// Class: GridItemRenaiStatueHalfAnimRig


/* GridItemRenaiStatueHalfAnimRig::~GridItemRenaiStatueHalfAnimRig() */

void __thiscall
GridItemRenaiStatueHalfAnimRig::~GridItemRenaiStatueHalfAnimRig
          (GridItemRenaiStatueHalfAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06764960;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiStatueHalfAnimRig_06764a98;
  GridItemRenaiStatueAnimRig::~GridItemRenaiStatueAnimRig((GridItemRenaiStatueAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemRenaiStatueHalfAnimRig::~GridItemRenaiStatueHalfAnimRig() */

void __thiscall
GridItemRenaiStatueHalfAnimRig::~GridItemRenaiStatueHalfAnimRig
          (GridItemRenaiStatueHalfAnimRig *this)

{
  ~GridItemRenaiStatueHalfAnimRig(this + -0x10);
  return;
}


/* GridItemRenaiStatueHalfAnimRig::~GridItemRenaiStatueHalfAnimRig() */

void __thiscall
GridItemRenaiStatueHalfAnimRig::~GridItemRenaiStatueHalfAnimRig
          (GridItemRenaiStatueHalfAnimRig *this)

{
  ~GridItemRenaiStatueHalfAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRenaiStatueHalfAnimRig::~GridItemRenaiStatueHalfAnimRig() */

void __thiscall
GridItemRenaiStatueHalfAnimRig::~GridItemRenaiStatueHalfAnimRig
          (GridItemRenaiStatueHalfAnimRig *this)

{
  ~GridItemRenaiStatueHalfAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatueHalfAnimRig::PlayRevive(StatueStage,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
GridItemRenaiStatueHalfAnimRig::PlayRevive
          (GridItemRenaiStatueHalfAnimRig *this,int param_2,RtReflectionDelegate *param_3)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("carve%d",asStack_58,(ulong)(param_2 + 1));
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


/* GridItemRenaiStatueHalfAnimRig::GridItemRenaiStatueHalfAnimRig() */

void __thiscall
GridItemRenaiStatueHalfAnimRig::GridItemRenaiStatueHalfAnimRig(GridItemRenaiStatueHalfAnimRig *this)

{
  GridItemRenaiStatueAnimRig::GridItemRenaiStatueAnimRig((GridItemRenaiStatueAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06764960;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiStatueHalfAnimRig_06764a98;
  return;
}


/* GridItemRenaiStatueHalfAnimRig::StaticNew() */

GridItemRenaiStatueHalfAnimRig * GridItemRenaiStatueHalfAnimRig::StaticNew(void)

{
  GridItemRenaiStatueHalfAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemRenaiStatueHalfAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatueHalfAnimRig::StaticClassInit() */

void GridItemRenaiStatueHalfAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRenaiStatueHalfAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03d10a7c,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiStatueHalfAnimRig::StaticGetClass() */

long * GridItemRenaiStatueHalfAnimRig::StaticGetClass(void)

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
  uVar2 = GridItemRenaiStatueAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRenaiStatueHalfAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiStatueHalfAnimRig::GetClass() const */

long * GridItemRenaiStatueHalfAnimRig::GetClass(void)

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
  uVar2 = GridItemRenaiStatueAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRenaiStatueHalfAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

