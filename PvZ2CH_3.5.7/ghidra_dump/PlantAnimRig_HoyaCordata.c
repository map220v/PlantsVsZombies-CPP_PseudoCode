// Class: PlantAnimRig_HoyaCordata


/* PlantAnimRig_HoyaCordata::getIdleAnimationName() */

undefined8 PlantAnimRig_HoyaCordata::getIdleAnimationName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* PlantAnimRig_HoyaCordata::setIdleTag(std::string const&) */

void PlantAnimRig_HoyaCordata::setIdleTag(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x3b8);
  return;
}


/* PlantAnimRig_HoyaCordata::~PlantAnimRig_HoyaCordata() */

void __thiscall PlantAnimRig_HoyaCordata::~PlantAnimRig_HoyaCordata(PlantAnimRig_HoyaCordata *this)

{
  *(undefined ***)this = &PTR_GetClass_069dadb0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HoyaCordata_069db018;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HoyaCordata::~PlantAnimRig_HoyaCordata() */

void __thiscall PlantAnimRig_HoyaCordata::~PlantAnimRig_HoyaCordata(PlantAnimRig_HoyaCordata *this)

{
  ~PlantAnimRig_HoyaCordata(this + -0x10);
  return;
}


/* PlantAnimRig_HoyaCordata::~PlantAnimRig_HoyaCordata() */

void __thiscall PlantAnimRig_HoyaCordata::~PlantAnimRig_HoyaCordata(PlantAnimRig_HoyaCordata *this)

{
  ~PlantAnimRig_HoyaCordata(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HoyaCordata::~PlantAnimRig_HoyaCordata() */

void __thiscall PlantAnimRig_HoyaCordata::~PlantAnimRig_HoyaCordata(PlantAnimRig_HoyaCordata *this)

{
  ~PlantAnimRig_HoyaCordata(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HoyaCordata::PlantAnimRig_HoyaCordata() */

void __thiscall PlantAnimRig_HoyaCordata::PlantAnimRig_HoyaCordata(PlantAnimRig_HoyaCordata *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069dadb0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HoyaCordata_069db018;
  std::string::string((string *)(this + 0x3b8),"idle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HoyaCordata::StaticNew() */

PlantAnimRig_HoyaCordata * PlantAnimRig_HoyaCordata::StaticNew(void)

{
  PlantAnimRig_HoyaCordata *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_HoyaCordata(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HoyaCordata::StaticClassInit() */

void PlantAnimRig_HoyaCordata::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_HoyaCordata");
    (*pcVar2)(plVar1,asStack_10,FUN_04e2a498,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HoyaCordata::StaticGetClass() */

long * PlantAnimRig_HoyaCordata::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_HoyaCordata",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HoyaCordata::GetClass() const */

long * PlantAnimRig_HoyaCordata::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_HoyaCordata",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HoyaCordata::playSingleAnimation(std::string,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_HoyaCordata::playSingleAnimation
          (PlantAnimRig_HoyaCordata *this,undefined8 param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_2,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(*(long *)(this + 0x210) + 200) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

