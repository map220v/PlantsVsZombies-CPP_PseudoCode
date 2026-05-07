// Class: PlantAnimRig_BashoPult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BashoPult::PlayAdvancedAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_BashoPult::PlayAdvancedAttack
          (PlantAnimRig_BashoPult *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig_BashoPult::~PlantAnimRig_BashoPult() */

void __thiscall PlantAnimRig_BashoPult::~PlantAnimRig_BashoPult(PlantAnimRig_BashoPult *this)

{
  *(undefined ***)this = &PTR_GetClass_067da4a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BashoPult_067da708;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BashoPult::~PlantAnimRig_BashoPult() */

void __thiscall PlantAnimRig_BashoPult::~PlantAnimRig_BashoPult(PlantAnimRig_BashoPult *this)

{
  ~PlantAnimRig_BashoPult(this + -0x10);
  return;
}


/* PlantAnimRig_BashoPult::~PlantAnimRig_BashoPult() */

void __thiscall PlantAnimRig_BashoPult::~PlantAnimRig_BashoPult(PlantAnimRig_BashoPult *this)

{
  ~PlantAnimRig_BashoPult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BashoPult::~PlantAnimRig_BashoPult() */

void __thiscall PlantAnimRig_BashoPult::~PlantAnimRig_BashoPult(PlantAnimRig_BashoPult *this)

{
  ~PlantAnimRig_BashoPult(this + -0x10);
  return;
}


/* PlantAnimRig_BashoPult::PlantAnimRig_BashoPult() */

void __thiscall PlantAnimRig_BashoPult::PlantAnimRig_BashoPult(PlantAnimRig_BashoPult *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067da4a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BashoPult_067da708;
  return;
}


/* PlantAnimRig_BashoPult::StaticNew() */

PlantAnimRig_BashoPult * PlantAnimRig_BashoPult::StaticNew(void)

{
  PlantAnimRig_BashoPult *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_BashoPult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BashoPult::StaticClassInit() */

void PlantAnimRig_BashoPult::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_BashoPult");
    (*pcVar2)(plVar1,asStack_10,FUN_040cc810,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_BashoPult::StaticGetClass() */

long * PlantAnimRig_BashoPult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BashoPult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_BashoPult::GetClass() const */

long * PlantAnimRig_BashoPult::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BashoPult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BashoPult::PlayCatchBallLooped() */

void __thiscall PlantAnimRig_BashoPult::PlayCatchBallLooped(PlantAnimRig_BashoPult *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"catch_ball");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

