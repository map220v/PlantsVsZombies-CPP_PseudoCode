// Class: PlantAnimRig_BoomFlower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BoomFlower::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_BoomFlower::PlayAttack(PlantAnimRig_BoomFlower *this,RtReflectionDelegate *param_2)

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
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BoomFlower::getIdleAnimationName() */

void PlantAnimRig_BoomFlower::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "IDLE";
  }
  else {
    __s = "STAGE1_IDLE";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_BoomFlower::~PlantAnimRig_BoomFlower() */

void __thiscall PlantAnimRig_BoomFlower::~PlantAnimRig_BoomFlower(PlantAnimRig_BoomFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_067e6e50;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BoomFlower_067e70b8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BoomFlower::~PlantAnimRig_BoomFlower() */

void __thiscall PlantAnimRig_BoomFlower::~PlantAnimRig_BoomFlower(PlantAnimRig_BoomFlower *this)

{
  ~PlantAnimRig_BoomFlower(this + -0x10);
  return;
}


/* PlantAnimRig_BoomFlower::~PlantAnimRig_BoomFlower() */

void __thiscall PlantAnimRig_BoomFlower::~PlantAnimRig_BoomFlower(PlantAnimRig_BoomFlower *this)

{
  ~PlantAnimRig_BoomFlower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_BoomFlower::~PlantAnimRig_BoomFlower() */

void __thiscall PlantAnimRig_BoomFlower::~PlantAnimRig_BoomFlower(PlantAnimRig_BoomFlower *this)

{
  ~PlantAnimRig_BoomFlower(this + -0x10);
  return;
}


/* PlantAnimRig_BoomFlower::PlantAnimRig_BoomFlower() */

void __thiscall PlantAnimRig_BoomFlower::PlantAnimRig_BoomFlower(PlantAnimRig_BoomFlower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_BoomFlower)0x1;
  *(undefined ***)this = &PTR_GetClass_067e6e50;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_BoomFlower_067e70b8;
  return;
}


/* PlantAnimRig_BoomFlower::StaticNew() */

PlantAnimRig_BoomFlower * PlantAnimRig_BoomFlower::StaticNew(void)

{
  PlantAnimRig_BoomFlower *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_BoomFlower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BoomFlower::StaticClassInit() */

void PlantAnimRig_BoomFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_BoomFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_04118d0c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_BoomFlower::StaticGetClass() */

long * PlantAnimRig_BoomFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BoomFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_BoomFlower::GetClass() const */

long * PlantAnimRig_BoomFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_BoomFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_BoomFlower::UpdateIdleAnims(BoomFlowerCharge) */

void __thiscall PlantAnimRig_BoomFlower::UpdateIdleAnims(PlantAnimRig_BoomFlower *this,int param_2)

{
  this[0x3b8] = (PlantAnimRig_BoomFlower)(param_2 == 1);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  (**(code **)(*(long *)this + 0x118))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_BoomFlower::PlayPlantFoodWithCallback(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_BoomFlower::PlayPlantFoodWithCallback
          (PlantAnimRig_BoomFlower *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood");
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
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

