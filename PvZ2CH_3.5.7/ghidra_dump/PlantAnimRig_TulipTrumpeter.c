// Class: PlantAnimRig_TulipTrumpeter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TulipTrumpeter::getIdleAnimationName() */

void PlantAnimRig_TulipTrumpeter::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x3b8) == 0) {
    __s = "idle1_1";
  }
  else {
    __s = "idle1";
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
/* PlantAnimRig_TulipTrumpeter::getAttackAnimationName() */

void PlantAnimRig_TulipTrumpeter::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3bc) == '\0') {
    __s = "attack";
  }
  else {
    __s = "attack5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_TulipTrumpeter::~PlantAnimRig_TulipTrumpeter() */

void __thiscall
PlantAnimRig_TulipTrumpeter::~PlantAnimRig_TulipTrumpeter(PlantAnimRig_TulipTrumpeter *this)

{
  *(undefined ***)this = &PTR_GetClass_06815540;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_TulipTrumpeter_068157a8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_TulipTrumpeter::~PlantAnimRig_TulipTrumpeter() */

void __thiscall
PlantAnimRig_TulipTrumpeter::~PlantAnimRig_TulipTrumpeter(PlantAnimRig_TulipTrumpeter *this)

{
  ~PlantAnimRig_TulipTrumpeter(this + -0x10);
  return;
}


/* PlantAnimRig_TulipTrumpeter::~PlantAnimRig_TulipTrumpeter() */

void __thiscall
PlantAnimRig_TulipTrumpeter::~PlantAnimRig_TulipTrumpeter(PlantAnimRig_TulipTrumpeter *this)

{
  ~PlantAnimRig_TulipTrumpeter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_TulipTrumpeter::~PlantAnimRig_TulipTrumpeter() */

void __thiscall
PlantAnimRig_TulipTrumpeter::~PlantAnimRig_TulipTrumpeter(PlantAnimRig_TulipTrumpeter *this)

{
  ~PlantAnimRig_TulipTrumpeter(this + -0x10);
  return;
}


/* PlantAnimRig_TulipTrumpeter::PlantAnimRig_TulipTrumpeter() */

void __thiscall
PlantAnimRig_TulipTrumpeter::PlantAnimRig_TulipTrumpeter(PlantAnimRig_TulipTrumpeter *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06815540;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_TulipTrumpeter_068157a8;
  return;
}


/* PlantAnimRig_TulipTrumpeter::StaticNew() */

PlantAnimRig_TulipTrumpeter * PlantAnimRig_TulipTrumpeter::StaticNew(void)

{
  PlantAnimRig_TulipTrumpeter *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_TulipTrumpeter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TulipTrumpeter::StaticClassInit() */

void PlantAnimRig_TulipTrumpeter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_TulipTrumpeter");
    (*pcVar2)(plVar1,asStack_10,FUN_0423f4b8,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_TulipTrumpeter::StaticGetClass() */

long * PlantAnimRig_TulipTrumpeter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_TulipTrumpeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_TulipTrumpeter::GetClass() const */

long * PlantAnimRig_TulipTrumpeter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_TulipTrumpeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TulipTrumpeter::PlayAttackBegin(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_TulipTrumpeter::PlayAttackBegin
          (PlantAnimRig_TulipTrumpeter *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"bian1");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TulipTrumpeter::PlayCureBegin(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_TulipTrumpeter::PlayCureBegin
          (PlantAnimRig_TulipTrumpeter *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"bian2");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_TulipTrumpeter::PlayCureSpawn() */

void __thiscall PlantAnimRig_TulipTrumpeter::PlayCureSpawn(PlantAnimRig_TulipTrumpeter *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"cure");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_TulipTrumpeter::onPopAnimInitialized() */

void __thiscall PlantAnimRig_TulipTrumpeter::onPopAnimInitialized(PlantAnimRig_TulipTrumpeter *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  this[0x3bc] = (PlantAnimRig_TulipTrumpeter)0x0;
  return;
}

