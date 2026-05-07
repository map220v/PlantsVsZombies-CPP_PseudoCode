// Class: DinosaurAnimRig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig::getRunAwayAnimationName() */

void __thiscall DinosaurAnimRig::getRunAwayAnimationName(DinosaurAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"walk");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig::getActiveActionAnimationName() */

void __thiscall DinosaurAnimRig::getActiveActionAnimationName(DinosaurAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* DinosaurAnimRig::~DinosaurAnimRig() */

void __thiscall DinosaurAnimRig::~DinosaurAnimRig(DinosaurAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_069037c0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_06903940;
  CreatureAnimRig::~CreatureAnimRig((CreatureAnimRig *)this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig::~DinosaurAnimRig() */

void __thiscall DinosaurAnimRig::~DinosaurAnimRig(DinosaurAnimRig *this)

{
  ~DinosaurAnimRig(this + -0x10);
  return;
}


/* DinosaurAnimRig::~DinosaurAnimRig() */

void __thiscall DinosaurAnimRig::~DinosaurAnimRig(DinosaurAnimRig *this)

{
  ~DinosaurAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig::~DinosaurAnimRig() */

void __thiscall DinosaurAnimRig::~DinosaurAnimRig(DinosaurAnimRig *this)

{
  ~DinosaurAnimRig(this + -0x10);
  return;
}


/* DinosaurAnimRig::DinosaurAnimRig() */

void __thiscall DinosaurAnimRig::DinosaurAnimRig(DinosaurAnimRig *this)

{
  CreatureAnimRig::CreatureAnimRig((CreatureAnimRig *)this);
  this[0x22c] = (DinosaurAnimRig)0x0;
  *(undefined ***)this = &PTR_GetClass_069037c0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_06903940;
  return;
}


/* DinosaurAnimRig::StaticNew() */

DinosaurAnimRig * DinosaurAnimRig::StaticNew(void)

{
  DinosaurAnimRig *this;
  
  this = ::operator_new(0x230);
  DinosaurAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig::StaticClassInit() */

void DinosaurAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_04817ce8,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnimRig::StaticGetClass() */

long * DinosaurAnimRig::StaticGetClass(void)

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
  uVar2 = CreatureAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurAnimRig::GetClass() const */

long * DinosaurAnimRig::GetClass(void)

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
  uVar2 = CreatureAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig::PlayActiveReady(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall
DinosaurAnimRig::PlayActiveReady(DinosaurAnimRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x158))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 4;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig::PlayRunAway(RtReflectionDelegate<Sexy::Delegate3<std::string const&, std::string
   const&, int> >) */

void __thiscall DinosaurAnimRig::PlayRunAway(DinosaurAnimRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x168))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 6;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig::PlayActiveAction(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
DinosaurAnimRig::PlayActiveAction(DinosaurAnimRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x158))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 5;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

