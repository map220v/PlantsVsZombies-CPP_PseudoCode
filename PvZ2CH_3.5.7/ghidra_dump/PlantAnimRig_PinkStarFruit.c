// Class: PlantAnimRig_PinkStarFruit


/* PlantAnimRig_PinkStarFruit::onPopAnimInitialized() */

void __thiscall PlantAnimRig_PinkStarFruit::onPopAnimInitialized(PlantAnimRig_PinkStarFruit *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PinkStarFruit::getIdleAnimationName() */

void PlantAnimRig_PinkStarFruit::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 0) {
    __s = "idle01";
  }
  else {
    __s = "idle03";
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
/* PlantAnimRig_PinkStarFruit::getAttackAnimationName() */

void PlantAnimRig_PinkStarFruit::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 0) {
    __s = "attack01";
  }
  else {
    __s = "attack03";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_PinkStarFruit::~PlantAnimRig_PinkStarFruit() */

void __thiscall
PlantAnimRig_PinkStarFruit::~PlantAnimRig_PinkStarFruit(PlantAnimRig_PinkStarFruit *this)

{
  *(undefined ***)this = &PTR_GetClass_067e3070;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PinkStarFruit_067e32d8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PinkStarFruit::~PlantAnimRig_PinkStarFruit() */

void __thiscall
PlantAnimRig_PinkStarFruit::~PlantAnimRig_PinkStarFruit(PlantAnimRig_PinkStarFruit *this)

{
  ~PlantAnimRig_PinkStarFruit(this + -0x10);
  return;
}


/* PlantAnimRig_PinkStarFruit::~PlantAnimRig_PinkStarFruit() */

void __thiscall
PlantAnimRig_PinkStarFruit::~PlantAnimRig_PinkStarFruit(PlantAnimRig_PinkStarFruit *this)

{
  ~PlantAnimRig_PinkStarFruit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PinkStarFruit::~PlantAnimRig_PinkStarFruit() */

void __thiscall
PlantAnimRig_PinkStarFruit::~PlantAnimRig_PinkStarFruit(PlantAnimRig_PinkStarFruit *this)

{
  ~PlantAnimRig_PinkStarFruit(this + -0x10);
  return;
}


/* PlantAnimRig_PinkStarFruit::PlantAnimRig_PinkStarFruit() */

void __thiscall
PlantAnimRig_PinkStarFruit::PlantAnimRig_PinkStarFruit(PlantAnimRig_PinkStarFruit *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067e3070;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PinkStarFruit_067e32d8;
  return;
}


/* PlantAnimRig_PinkStarFruit::StaticNew() */

PlantAnimRig_PinkStarFruit * PlantAnimRig_PinkStarFruit::StaticNew(void)

{
  PlantAnimRig_PinkStarFruit *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_PinkStarFruit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PinkStarFruit::StaticClassInit() */

void PlantAnimRig_PinkStarFruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_PinkStarFruit");
    (*pcVar2)(plVar1,asStack_10,FUN_0410082c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_PinkStarFruit::StaticGetClass() */

long * PlantAnimRig_PinkStarFruit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_PinkStarFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_PinkStarFruit::GetClass() const */

long * PlantAnimRig_PinkStarFruit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_PinkStarFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PinkStarFruit::playRotate(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_PinkStarFruit::playRotate
          (PlantAnimRig_PinkStarFruit *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x3b8) == 0) {
    __s = "xz";
  }
  else {
    __s = "xz02";
  }
  std::string::string(asStack_58,__s);
  nop();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

