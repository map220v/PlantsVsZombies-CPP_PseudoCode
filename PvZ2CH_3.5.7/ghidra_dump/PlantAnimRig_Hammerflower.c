// Class: PlantAnimRig_Hammerflower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Hammerflower::getPlantFoodMainAnimName() */

void PlantAnimRig_Hammerflower::getPlantFoodMainAnimName(void)

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
    __s = "plantfood2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Hammerflower::~PlantAnimRig_Hammerflower() */

void __thiscall
PlantAnimRig_Hammerflower::~PlantAnimRig_Hammerflower(PlantAnimRig_Hammerflower *this)

{
  *(undefined ***)this = &PTR_GetClass_0679a760;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Hammerflower_0679a9d0;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Hammerflower::~PlantAnimRig_Hammerflower() */

void __thiscall
PlantAnimRig_Hammerflower::~PlantAnimRig_Hammerflower(PlantAnimRig_Hammerflower *this)

{
  ~PlantAnimRig_Hammerflower(this + -0x10);
  return;
}


/* PlantAnimRig_Hammerflower::~PlantAnimRig_Hammerflower() */

void __thiscall
PlantAnimRig_Hammerflower::~PlantAnimRig_Hammerflower(PlantAnimRig_Hammerflower *this)

{
  ~PlantAnimRig_Hammerflower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Hammerflower::~PlantAnimRig_Hammerflower() */

void __thiscall
PlantAnimRig_Hammerflower::~PlantAnimRig_Hammerflower(PlantAnimRig_Hammerflower *this)

{
  ~PlantAnimRig_Hammerflower(this + -0x10);
  return;
}


/* PlantAnimRig_Hammerflower::PlantAnimRig_Hammerflower() */

void __thiscall
PlantAnimRig_Hammerflower::PlantAnimRig_Hammerflower(PlantAnimRig_Hammerflower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679a760;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Hammerflower_0679a9d0;
  Set8BytesTo0(this + 0x3b8);
  return;
}


/* PlantAnimRig_Hammerflower::StaticNew() */

PlantAnimRig_Hammerflower * PlantAnimRig_Hammerflower::StaticNew(void)

{
  PlantAnimRig_Hammerflower *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Hammerflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Hammerflower::StaticClassInit() */

void PlantAnimRig_Hammerflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Hammerflower");
    (*pcVar2)(plVar1,asStack_10,FUN_03f573cc,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Hammerflower::StaticGetClass() */

long * PlantAnimRig_Hammerflower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Hammerflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Hammerflower::GetClass() const */

long * PlantAnimRig_Hammerflower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Hammerflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Hammerflower::PlayPunchAttack(PlantAnimRig_Hammerflower::AttackType,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Hammerflower::PlayPunchAttack
          (PlantAnimRig_Hammerflower *this,undefined4 param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate *__n;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_3;
  Set8BytesTo0(asStack_58);
  switch(param_2) {
  case 0:
    std::string::append(asStack_58,"attack2",(size_t)__n);
    break;
  case 1:
    std::string::append(asStack_58,"attack",(size_t)__n);
    break;
  case 2:
    std::string::append(asStack_58,"attack5",(size_t)__n);
    break;
  case 3:
    std::string::append(asStack_58,"attack4",(size_t)__n);
    break;
  case 4:
    std::string::append(asStack_58,"attack7",(size_t)__n);
    break;
  case 5:
    std::string::append(asStack_58,"attack6",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Hammerflower::PlayPlantFoodStart(int) */

void __thiscall
PlantAnimRig_Hammerflower::PlayPlantFoodStart(PlantAnimRig_Hammerflower *this,int param_1)

{
  int iVar1;
  char *__s;
  string asStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_60);
  if (this[0x220] == (PlantAnimRig_Hammerflower)0x0) {
    __s = "plantfood";
  }
  else {
    __s = "plantfood2";
  }
  std::string::string(asStack_58,__s);
  FUN_05474278(asStack_60,asStack_58);
  std::string::~string(asStack_58);
  nop();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_60,0,aDStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 3;
    *(int *)(this + 0x228) = param_1;
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x298),
               (RtReflectionDelegate *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x328),
               (RtReflectionDelegate *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
  }
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

