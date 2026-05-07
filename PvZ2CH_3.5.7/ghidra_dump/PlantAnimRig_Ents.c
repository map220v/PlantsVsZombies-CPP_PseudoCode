// Class: PlantAnimRig_Ents


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Ents::getIdleAnimationName() */

void PlantAnimRig_Ents::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 2) {
    __s = "idle";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 1) {
    __s = "idle2";
  }
  else {
    __s = "idle3";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Ents::getPlantFoodMainAnimName() */

void PlantAnimRig_Ents::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 2) {
    __s = "plantfood";
  }
  else if (*(int *)(in_x0 + 0x3b8) == 1) {
    __s = "plantfood2";
  }
  else {
    __s = "plantfood3";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Ents::~PlantAnimRig_Ents() */

void __thiscall PlantAnimRig_Ents::~PlantAnimRig_Ents(PlantAnimRig_Ents *this)

{
  *(undefined ***)this = &PTR_GetClass_0679aa10;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Ents_0679ac88;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Ents::~PlantAnimRig_Ents() */

void __thiscall PlantAnimRig_Ents::~PlantAnimRig_Ents(PlantAnimRig_Ents *this)

{
  ~PlantAnimRig_Ents(this + -0x10);
  return;
}


/* PlantAnimRig_Ents::~PlantAnimRig_Ents() */

void __thiscall PlantAnimRig_Ents::~PlantAnimRig_Ents(PlantAnimRig_Ents *this)

{
  ~PlantAnimRig_Ents(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Ents::~PlantAnimRig_Ents() */

void __thiscall PlantAnimRig_Ents::~PlantAnimRig_Ents(PlantAnimRig_Ents *this)

{
  ~PlantAnimRig_Ents(this + -0x10);
  return;
}


/* PlantAnimRig_Ents::PlantAnimRig_Ents() */

void __thiscall PlantAnimRig_Ents::PlantAnimRig_Ents(PlantAnimRig_Ents *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 2;
  this[0x3bc] = (PlantAnimRig_Ents)0x0;
  *(undefined ***)this = &PTR_GetClass_0679aa10;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Ents_0679ac88;
  return;
}


/* PlantAnimRig_Ents::StaticNew() */

PlantAnimRig_Ents * PlantAnimRig_Ents::StaticNew(void)

{
  PlantAnimRig_Ents *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Ents(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Ents::StaticClassInit() */

void PlantAnimRig_Ents::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Ents");
    (*pcVar2)(plVar1,asStack_10,FUN_03f57afc,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Ents::StaticGetClass() */

long * PlantAnimRig_Ents::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Ents",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Ents::GetClass() const */

long * PlantAnimRig_Ents::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Ents",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Ents::PlayPunchAttack(PlantAnimRig_Ents::AttackType,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Ents::PlayPunchAttack
          (PlantAnimRig_Ents *this,undefined8 param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate *__n;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_3;
  Set8BytesTo0(asStack_58);
  iVar1 = *(int *)(this + 0x3b8);
  if (iVar1 == 1) {
    std::string::append(asStack_58,"attack2",(size_t)__n);
  }
  else if (iVar1 == 2) {
    std::string::append(asStack_58,"attack",(size_t)__n);
  }
  else if (iVar1 == 0) {
    std::string::append(asStack_58,"attack3",(size_t)__n);
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
/* PlantAnimRig_Ents::PlayFall(int, RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Ents::PlayFall(PlantAnimRig_Ents *this,int param_1,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate *__n;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_3;
  Set8BytesTo0(asStack_58);
  if (param_1 == 0) {
    std::string::append(asStack_58,"fall02",(size_t)__n);
  }
  else if (param_1 == 1) {
    std::string::append(asStack_58,"fall01",(size_t)__n);
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
/* PlantAnimRig_Ents::PlayIdleLooped() */

void __thiscall PlantAnimRig_Ents::PlayIdleLooped(PlantAnimRig_Ents *this)

{
  int iVar1;
  char *__s;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_48);
  if (*(int *)(this + 0x3b8) == 2) {
    __s = "idle";
  }
  else if (*(int *)(this + 0x3b8) == 1) {
    __s = "idle2";
  }
  else {
    __s = "idle3";
  }
  std::string::string(asStack_40,__s);
  FUN_05474278(asStack_48,asStack_40);
  std::string::~string(asStack_40);
  nop();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_48,0,aDStack_38);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 1;
  }
  std::string::~string(asStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Ents::PlayPlantFoodStart(int) */

void __thiscall PlantAnimRig_Ents::PlayPlantFoodStart(PlantAnimRig_Ents *this,int param_1)

{
  int iVar1;
  char *__s;
  string asStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_60);
  if (*(int *)(this + 0x3b8) == 2) {
    __s = "plantfood";
  }
  else if (*(int *)(this + 0x3b8) == 1) {
    __s = "plantfood2";
  }
  else {
    __s = "plantfood3";
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

