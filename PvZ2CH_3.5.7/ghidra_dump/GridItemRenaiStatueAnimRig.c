// Class: GridItemRenaiStatueAnimRig


/* GridItemRenaiStatueAnimRig::~GridItemRenaiStatueAnimRig() */

void __thiscall
GridItemRenaiStatueAnimRig::~GridItemRenaiStatueAnimRig(GridItemRenaiStatueAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06764480;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiStatueAnimRig_067645b8;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemRenaiStatueAnimRig::~GridItemRenaiStatueAnimRig() */

void __thiscall
GridItemRenaiStatueAnimRig::~GridItemRenaiStatueAnimRig(GridItemRenaiStatueAnimRig *this)

{
  ~GridItemRenaiStatueAnimRig(this + -0x10);
  return;
}


/* GridItemRenaiStatueAnimRig::~GridItemRenaiStatueAnimRig() */

void __thiscall
GridItemRenaiStatueAnimRig::~GridItemRenaiStatueAnimRig(GridItemRenaiStatueAnimRig *this)

{
  ~GridItemRenaiStatueAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRenaiStatueAnimRig::~GridItemRenaiStatueAnimRig() */

void __thiscall
GridItemRenaiStatueAnimRig::~GridItemRenaiStatueAnimRig(GridItemRenaiStatueAnimRig *this)

{
  ~GridItemRenaiStatueAnimRig(this + -0x10);
  return;
}


/* GridItemRenaiStatueAnimRig::GridItemRenaiStatueAnimRig() */

void __thiscall
GridItemRenaiStatueAnimRig::GridItemRenaiStatueAnimRig(GridItemRenaiStatueAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06764480;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiStatueAnimRig_067645b8;
  return;
}


/* GridItemRenaiStatueAnimRig::StaticNew() */

GridItemRenaiStatueAnimRig * GridItemRenaiStatueAnimRig::StaticNew(void)

{
  GridItemRenaiStatueAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemRenaiStatueAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatueAnimRig::StaticClassInit() */

void GridItemRenaiStatueAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRenaiStatueAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03d10598,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiStatueAnimRig::StaticGetClass() */

long * GridItemRenaiStatueAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRenaiStatueAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiStatueAnimRig::GetClass() const */

long * GridItemRenaiStatueAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRenaiStatueAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatueAnimRig::PlayRevive(StatueStage,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
GridItemRenaiStatueAnimRig::PlayRevive
          (GridItemRenaiStatueAnimRig *this,int param_2,RtReflectionDelegate *param_3)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("renai_revive_%d",asStack_58,(ulong)(param_2 + 1));
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

