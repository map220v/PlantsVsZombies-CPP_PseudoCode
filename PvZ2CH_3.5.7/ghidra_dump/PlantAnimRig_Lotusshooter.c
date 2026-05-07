// Class: PlantAnimRig_Lotusshooter


/* PlantAnimRig_Lotusshooter::~PlantAnimRig_Lotusshooter() */

void __thiscall
PlantAnimRig_Lotusshooter::~PlantAnimRig_Lotusshooter(PlantAnimRig_Lotusshooter *this)

{
  *(undefined ***)this = &PTR_GetClass_067443e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Lotusshooter_06744648;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Lotusshooter::~PlantAnimRig_Lotusshooter() */

void __thiscall
PlantAnimRig_Lotusshooter::~PlantAnimRig_Lotusshooter(PlantAnimRig_Lotusshooter *this)

{
  ~PlantAnimRig_Lotusshooter(this + -0x10);
  return;
}


/* PlantAnimRig_Lotusshooter::~PlantAnimRig_Lotusshooter() */

void __thiscall
PlantAnimRig_Lotusshooter::~PlantAnimRig_Lotusshooter(PlantAnimRig_Lotusshooter *this)

{
  ~PlantAnimRig_Lotusshooter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Lotusshooter::~PlantAnimRig_Lotusshooter() */

void __thiscall
PlantAnimRig_Lotusshooter::~PlantAnimRig_Lotusshooter(PlantAnimRig_Lotusshooter *this)

{
  ~PlantAnimRig_Lotusshooter(this + -0x10);
  return;
}


/* PlantAnimRig_Lotusshooter::PlantAnimRig_Lotusshooter() */

void __thiscall
PlantAnimRig_Lotusshooter::PlantAnimRig_Lotusshooter(PlantAnimRig_Lotusshooter *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067443e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Lotusshooter_06744648;
  return;
}


/* PlantAnimRig_Lotusshooter::StaticNew() */

PlantAnimRig_Lotusshooter * PlantAnimRig_Lotusshooter::StaticNew(void)

{
  PlantAnimRig_Lotusshooter *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Lotusshooter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Lotusshooter::StaticClassInit() */

void PlantAnimRig_Lotusshooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Lotusshooter");
    (*pcVar2)(plVar1,asStack_10,FUN_03c01088,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Lotusshooter::StaticGetClass() */

long * PlantAnimRig_Lotusshooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Lotusshooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Lotusshooter::GetClass() const */

long * PlantAnimRig_Lotusshooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Lotusshooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Lotusshooter::PlayAbsorb(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Lotusshooter::PlayAbsorb(PlantAnimRig_Lotusshooter *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"xi");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Lotusshooter::PlaySuperAttack() */

void __thiscall PlantAnimRig_Lotusshooter::PlaySuperAttack(PlantAnimRig_Lotusshooter *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack5");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

