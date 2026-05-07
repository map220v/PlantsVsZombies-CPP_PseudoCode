// Class: PlantAnimRig_Chainsawburmannii


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chainsawburmannii::getIdleAnimationName() */

void PlantAnimRig_Chainsawburmannii::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "idle";
  }
  else {
    __s = "idle2_2";
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
/* PlantAnimRig_Chainsawburmannii::getAttackAnimationName() */

void PlantAnimRig_Chainsawburmannii::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x224) == 5) {
    __s = "attack_3";
  }
  else {
    __s = "attack";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Chainsawburmannii::~PlantAnimRig_Chainsawburmannii() */

void __thiscall
PlantAnimRig_Chainsawburmannii::~PlantAnimRig_Chainsawburmannii
          (PlantAnimRig_Chainsawburmannii *this)

{
  *(undefined ***)this = &PTR_GetClass_067f1af0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Chainsawburmannii_067f1d58;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Chainsawburmannii::~PlantAnimRig_Chainsawburmannii() */

void __thiscall
PlantAnimRig_Chainsawburmannii::~PlantAnimRig_Chainsawburmannii
          (PlantAnimRig_Chainsawburmannii *this)

{
  ~PlantAnimRig_Chainsawburmannii(this + -0x10);
  return;
}


/* PlantAnimRig_Chainsawburmannii::~PlantAnimRig_Chainsawburmannii() */

void __thiscall
PlantAnimRig_Chainsawburmannii::~PlantAnimRig_Chainsawburmannii
          (PlantAnimRig_Chainsawburmannii *this)

{
  ~PlantAnimRig_Chainsawburmannii(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Chainsawburmannii::~PlantAnimRig_Chainsawburmannii() */

void __thiscall
PlantAnimRig_Chainsawburmannii::~PlantAnimRig_Chainsawburmannii
          (PlantAnimRig_Chainsawburmannii *this)

{
  ~PlantAnimRig_Chainsawburmannii(this + -0x10);
  return;
}


/* PlantAnimRig_Chainsawburmannii::PlantAnimRig_Chainsawburmannii() */

void __thiscall
PlantAnimRig_Chainsawburmannii::PlantAnimRig_Chainsawburmannii(PlantAnimRig_Chainsawburmannii *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Chainsawburmannii)0x0;
  *(undefined ***)this = &PTR_GetClass_067f1af0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Chainsawburmannii_067f1d58;
  return;
}


/* PlantAnimRig_Chainsawburmannii::StaticNew() */

PlantAnimRig_Chainsawburmannii * PlantAnimRig_Chainsawburmannii::StaticNew(void)

{
  PlantAnimRig_Chainsawburmannii *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Chainsawburmannii(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chainsawburmannii::StaticClassInit() */

void PlantAnimRig_Chainsawburmannii::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Chainsawburmannii");
    (*pcVar2)(plVar1,asStack_10,FUN_0415ad80,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Chainsawburmannii::StaticGetClass() */

long * PlantAnimRig_Chainsawburmannii::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Chainsawburmannii",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Chainsawburmannii::GetClass() const */

long * PlantAnimRig_Chainsawburmannii::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Chainsawburmannii",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chainsawburmannii::PlayAttackAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Chainsawburmannii::PlayAttackAnimation
          (PlantAnimRig_Chainsawburmannii *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1f0))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

