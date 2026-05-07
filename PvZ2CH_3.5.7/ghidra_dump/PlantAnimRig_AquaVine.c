// Class: PlantAnimRig_AquaVine


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_AquaVine::getPlantFoodOnAnimName() */

void PlantAnimRig_AquaVine::getPlantFoodOnAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    if (*(char *)(in_x0 + 0x220) == '\0') {
      __s = "plantfood_on";
    }
    else {
      __s = "plantfood_on_3";
    }
  }
  else if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood_on_1";
  }
  else {
    __s = "plantfood_on_4";
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
/* PlantAnimRig_AquaVine::getPlantFoodMainAnimName() */

void PlantAnimRig_AquaVine::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    if (*(char *)(in_x0 + 0x220) == '\0') {
      __s = "plantfood_idle";
    }
    else {
      __s = "plantfood_idle_3";
    }
  }
  else if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood_idle_1";
  }
  else {
    __s = "plantfood_idle_4";
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
/* PlantAnimRig_AquaVine::getPlantFoodOffAnimName() */

void PlantAnimRig_AquaVine::getPlantFoodOffAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    if (*(char *)(in_x0 + 0x220) == '\0') {
      __s = "plantfood_end";
    }
    else {
      __s = "plantfood_end_3";
    }
  }
  else if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood_end_1";
  }
  else {
    __s = "plantfood_end_4";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_AquaVine::~PlantAnimRig_AquaVine() */

void __thiscall PlantAnimRig_AquaVine::~PlantAnimRig_AquaVine(PlantAnimRig_AquaVine *this)

{
  *(undefined ***)this = &PTR_GetClass_06799140;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_AquaVine_067993a8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_AquaVine::~PlantAnimRig_AquaVine() */

void __thiscall PlantAnimRig_AquaVine::~PlantAnimRig_AquaVine(PlantAnimRig_AquaVine *this)

{
  ~PlantAnimRig_AquaVine(this + -0x10);
  return;
}


/* PlantAnimRig_AquaVine::~PlantAnimRig_AquaVine() */

void __thiscall PlantAnimRig_AquaVine::~PlantAnimRig_AquaVine(PlantAnimRig_AquaVine *this)

{
  ~PlantAnimRig_AquaVine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_AquaVine::~PlantAnimRig_AquaVine() */

void __thiscall PlantAnimRig_AquaVine::~PlantAnimRig_AquaVine(PlantAnimRig_AquaVine *this)

{
  ~PlantAnimRig_AquaVine(this + -0x10);
  return;
}


/* PlantAnimRig_AquaVine::PlantAnimRig_AquaVine() */

void __thiscall PlantAnimRig_AquaVine::PlantAnimRig_AquaVine(PlantAnimRig_AquaVine *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_AquaVine)0x0;
  this[0x3b9] = (PlantAnimRig_AquaVine)0x0;
  *(undefined ***)this = &PTR_GetClass_06799140;
  this[0x3ba] = (PlantAnimRig_AquaVine)0x0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_AquaVine_067993a8;
  return;
}


/* PlantAnimRig_AquaVine::StaticNew() */

PlantAnimRig_AquaVine * PlantAnimRig_AquaVine::StaticNew(void)

{
  PlantAnimRig_AquaVine *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_AquaVine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_AquaVine::StaticClassInit() */

void PlantAnimRig_AquaVine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_AquaVine");
    (*pcVar2)(plVar1,asStack_10,FUN_03f4bce4,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_AquaVine::StaticGetClass() */

long * PlantAnimRig_AquaVine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_AquaVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_AquaVine::GetClass() const */

long * PlantAnimRig_AquaVine::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_AquaVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_AquaVine::SetData(bool, bool, bool) */

void __thiscall
PlantAnimRig_AquaVine::SetData(PlantAnimRig_AquaVine *this,bool param_1,bool param_2,bool param_3)

{
  this[0x220] = (PlantAnimRig_AquaVine)param_1;
  this[0x3ba] = (PlantAnimRig_AquaVine)param_3;
  this[0x3b9] = (PlantAnimRig_AquaVine)param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_AquaVine::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_AquaVine::PlayAttack(PlantAnimRig_AquaVine *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"");
  nop();
  if (((this[0x3b9] == (PlantAnimRig_AquaVine)0x0) && (this[0x3ba] == (PlantAnimRig_AquaVine)0x0))
     && (this[0x3b8] != (PlantAnimRig_AquaVine)0x0)) {
    std::string::append(asStack_58,"attack_water",(size_t)__n);
  }
  else {
    std::string::append(asStack_58,"attack",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,2);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_AquaVine::IsAttacking() */

bool __thiscall PlantAnimRig_AquaVine::IsAttacking(PlantAnimRig_AquaVine *this)

{
  int iVar1;
  
  iVar1 = Effect_AngerFlame::GetFlameCol((Effect_AngerFlame *)this);
  return iVar1 == 2;
}

