// Class: PlantAnimRig_MeteorFlower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MeteorFlower::getPlantFoodMainAnimName() */

void PlantAnimRig_MeteorFlower::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood";
  }
  else {
    __s = "plantfood_02";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_MeteorFlower::~PlantAnimRig_MeteorFlower() */

void __thiscall
PlantAnimRig_MeteorFlower::~PlantAnimRig_MeteorFlower(PlantAnimRig_MeteorFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_069b1080;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MeteorFlower_069b12e8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MeteorFlower::~PlantAnimRig_MeteorFlower() */

void __thiscall
PlantAnimRig_MeteorFlower::~PlantAnimRig_MeteorFlower(PlantAnimRig_MeteorFlower *this)

{
  ~PlantAnimRig_MeteorFlower(this + -0x10);
  return;
}


/* PlantAnimRig_MeteorFlower::~PlantAnimRig_MeteorFlower() */

void __thiscall
PlantAnimRig_MeteorFlower::~PlantAnimRig_MeteorFlower(PlantAnimRig_MeteorFlower *this)

{
  ~PlantAnimRig_MeteorFlower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MeteorFlower::~PlantAnimRig_MeteorFlower() */

void __thiscall
PlantAnimRig_MeteorFlower::~PlantAnimRig_MeteorFlower(PlantAnimRig_MeteorFlower *this)

{
  ~PlantAnimRig_MeteorFlower(this + -0x10);
  return;
}


/* PlantAnimRig_MeteorFlower::StaticGetClass() */

long * PlantAnimRig_MeteorFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_MeteorFlower",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_MeteorFlower::GetClass() const */

long * PlantAnimRig_MeteorFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_MeteorFlower",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_MeteorFlower::PlantAnimRig_MeteorFlower() */

void __thiscall
PlantAnimRig_MeteorFlower::PlantAnimRig_MeteorFlower(PlantAnimRig_MeteorFlower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069b1080;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MeteorFlower_069b12e8;
  return;
}


/* PlantAnimRig_MeteorFlower::StaticNew() */

PlantAnimRig_MeteorFlower * PlantAnimRig_MeteorFlower::StaticNew(void)

{
  PlantAnimRig_MeteorFlower *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_MeteorFlower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MeteorFlower::PlayRecoverStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_MeteorFlower::PlayRecoverStart
          (PlantAnimRig_MeteorFlower *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"recover_start");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MeteorFlower::PlayRecoverEnd(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_MeteorFlower::PlayRecoverEnd
          (PlantAnimRig_MeteorFlower *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"recover_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MeteorFlower::PlayAttack(MeteorFlowerProjectileType,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_MeteorFlower::PlayAttack
          (PlantAnimRig_MeteorFlower *this,int param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    __s = "attack";
  }
  else if (param_2 == 1) {
    __s = "attack_lv2";
  }
  else {
    __s = "attack_lv5";
  }
  std::string::string(asStack_58,__s);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
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
/* PlantAnimRig_MeteorFlower::PlayPlantFoodStart(int, RtReflectionDelegate<Sexy::Delegate0>,
   RtReflectionDelegate<Sexy::Delegate0>, RtReflectionDelegate<Sexy::Delegate0>) */

void PlantAnimRig_MeteorFlower::PlayPlantFoodStart(PopAnimRig *param_1)

{
  int iVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x220] == (PopAnimRig)0x0) {
    __s = "plantfood";
  }
  else {
    __s = "plantfood_02";
  }
  std::string::string(asStack_40,__s);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop(param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)param_1,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MeteorFlower::PlayRecoverLoop() */

void __thiscall PlantAnimRig_MeteorFlower::PlayRecoverLoop(PlantAnimRig_MeteorFlower *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"recover_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

