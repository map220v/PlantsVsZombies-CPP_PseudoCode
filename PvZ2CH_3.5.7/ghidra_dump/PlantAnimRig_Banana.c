// Class: PlantAnimRig_Banana


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Banana::getIdleAnimationName() */

void PlantAnimRig_Banana::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3c0) == '\0') {
    __s = "idle2";
  }
  else {
    __s = "idle6";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Banana::~PlantAnimRig_Banana() */

void __thiscall PlantAnimRig_Banana::~PlantAnimRig_Banana(PlantAnimRig_Banana *this)

{
  *(undefined ***)this = &PTR_GetClass_068056e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Banana_06805948;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Banana::~PlantAnimRig_Banana() */

void __thiscall PlantAnimRig_Banana::~PlantAnimRig_Banana(PlantAnimRig_Banana *this)

{
  ~PlantAnimRig_Banana(this + -0x10);
  return;
}


/* PlantAnimRig_Banana::~PlantAnimRig_Banana() */

void __thiscall PlantAnimRig_Banana::~PlantAnimRig_Banana(PlantAnimRig_Banana *this)

{
  ~PlantAnimRig_Banana(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Banana::~PlantAnimRig_Banana() */

void __thiscall PlantAnimRig_Banana::~PlantAnimRig_Banana(PlantAnimRig_Banana *this)

{
  ~PlantAnimRig_Banana(this + -0x10);
  return;
}


/* PlantAnimRig_Banana::PlantAnimRig_Banana() */

void __thiscall PlantAnimRig_Banana::PlantAnimRig_Banana(PlantAnimRig_Banana *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3c0] = (PlantAnimRig_Banana)0x0;
  *(undefined ***)this = &PTR_GetClass_068056e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Banana_06805948;
  return;
}


/* PlantAnimRig_Banana::StaticNew() */

PlantAnimRig_Banana * PlantAnimRig_Banana::StaticNew(void)

{
  PlantAnimRig_Banana *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_Banana(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Banana::StaticClassInit() */

void PlantAnimRig_Banana::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Banana");
    (*pcVar2)(plVar1,asStack_10,FUN_041ede68,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Banana::StaticGetClass() */

long * PlantAnimRig_Banana::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Banana",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Banana::GetClass() const */

long * PlantAnimRig_Banana::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Banana",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Banana::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Banana::PlayAttack(PlantAnimRig_Banana *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3c0] == (PlantAnimRig_Banana)0x0) {
    __s = "special";
  }
  else {
    __s = "special2";
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Banana::PlayRecoverStart(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Banana::PlayRecoverStart(PlantAnimRig_Banana *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_60,"reload");
  nop();
  std::string::string(asStack_58,"reload");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  *(undefined4 *)(this + 0x218) = 0xe;
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Banana::PlayRecoverEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Banana::PlayRecoverEnd(PlantAnimRig_Banana *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3c0] == (PlantAnimRig_Banana)0x0) {
    __s = "reload_end";
  }
  else {
    __s = "reload_end2";
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
  *(undefined4 *)(this + 0x218) = 0xe;
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Banana::PlaySelected() */

void __thiscall PlantAnimRig_Banana::PlaySelected(PlantAnimRig_Banana *this)

{
  int iVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3c0] == (PlantAnimRig_Banana)0x0) {
    __s = "ready_idle";
  }
  else {
    __s = "ready_idle2";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Banana::PlayRecoverLoop() */

void __thiscall PlantAnimRig_Banana::PlayRecoverLoop(PlantAnimRig_Banana *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"reload_idle");
  nop();
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x218) = 0xe;
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Banana::PlayPlantFoodStart(int, RtReflectionDelegate<Sexy::Delegate0>,
   RtReflectionDelegate<Sexy::Delegate0>, RtReflectionDelegate<Sexy::Delegate0>) */

void PlantAnimRig_Banana::PlayPlantFoodStart(PopAnimRig *param_1)

{
  char cVar1;
  int iVar2;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(PlantBanana **)(param_1 + 0x3b8) == (PlantBanana *)0x0) ||
     (cVar1 = PlantBanana::IsMeetShowPlayLv5(*(PlantBanana **)(param_1 + 0x3b8)), cVar1 == '\0')) {
    __s = "plantfood";
  }
  else {
    __s = "special2";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop(param_1,asStack_40,0,aDStack_38);
  if (iVar2 != -1) {
    *(undefined4 *)(param_1 + 0x218) = 0xe;
  }
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 != -1);
  }
  return;
}

