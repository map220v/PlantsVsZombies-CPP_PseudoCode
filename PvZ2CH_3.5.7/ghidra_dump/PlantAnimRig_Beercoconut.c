// Class: PlantAnimRig_Beercoconut


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Beercoconut::getAttackAnimationName() */

void PlantAnimRig_Beercoconut::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "attack_hit";
  }
  else {
    __s = "attack5_hit";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Beercoconut::~PlantAnimRig_Beercoconut() */

void __thiscall PlantAnimRig_Beercoconut::~PlantAnimRig_Beercoconut(PlantAnimRig_Beercoconut *this)

{
  *(undefined ***)this = &PTR_GetClass_06728510;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Beercoconut_06728778;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Beercoconut::~PlantAnimRig_Beercoconut() */

void __thiscall PlantAnimRig_Beercoconut::~PlantAnimRig_Beercoconut(PlantAnimRig_Beercoconut *this)

{
  ~PlantAnimRig_Beercoconut(this + -0x10);
  return;
}


/* PlantAnimRig_Beercoconut::~PlantAnimRig_Beercoconut() */

void __thiscall PlantAnimRig_Beercoconut::~PlantAnimRig_Beercoconut(PlantAnimRig_Beercoconut *this)

{
  ~PlantAnimRig_Beercoconut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Beercoconut::~PlantAnimRig_Beercoconut() */

void __thiscall PlantAnimRig_Beercoconut::~PlantAnimRig_Beercoconut(PlantAnimRig_Beercoconut *this)

{
  ~PlantAnimRig_Beercoconut(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Beercoconut::StaticClassInit() */

void PlantAnimRig_Beercoconut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Beercoconut");
    (*pcVar2)(plVar1,asStack_10,FUN_03afdcec,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Beercoconut::StaticGetClass() */

long * PlantAnimRig_Beercoconut::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Beercoconut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Beercoconut::GetClass() const */

long * PlantAnimRig_Beercoconut::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Beercoconut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Beercoconut::PlantAnimRig_Beercoconut() */

void __thiscall PlantAnimRig_Beercoconut::PlantAnimRig_Beercoconut(PlantAnimRig_Beercoconut *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Beercoconut)0x0;
  *(undefined ***)this = &PTR_GetClass_06728510;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Beercoconut_06728778;
  return;
}


/* PlantAnimRig_Beercoconut::StaticNew() */

PlantAnimRig_Beercoconut * PlantAnimRig_Beercoconut::StaticNew(void)

{
  PlantAnimRig_Beercoconut *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Beercoconut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Beercoconut::PlayStartAccumlation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Beercoconut::PlayStartAccumlation
          (PlantAnimRig_Beercoconut *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_Beercoconut)0x0) {
    __s = "attack_ready";
  }
  else {
    __s = "attack5_ready";
  }
  std::string::string(asStack_58,__s);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Beercoconut::PlayAccumlation() */

void __thiscall PlantAnimRig_Beercoconut::PlayAccumlation(PlantAnimRig_Beercoconut *this)

{
  int iVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x218) = 0xe;
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_Beercoconut)0x0) {
    __s = "attack_storage";
  }
  else {
    __s = "attack5_storage";
  }
  std::string::string(asStack_40,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

