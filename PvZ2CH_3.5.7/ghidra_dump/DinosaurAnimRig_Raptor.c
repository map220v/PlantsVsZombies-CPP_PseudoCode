// Class: DinosaurAnimRig_Raptor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Raptor::getActiveReadyAnimationName() */

void DinosaurAnimRig_Raptor::getActiveReadyAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x22c) == '\0') {
    __s = "IDLE_LEFT";
  }
  else {
    __s = "IDLE_LEFT_CHARMED";
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
/* DinosaurAnimRig_Raptor::getRunAwayAnimationName() */

void DinosaurAnimRig_Raptor::getRunAwayAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x22c) == '\0') {
    __s = "WALK_LEFT";
  }
  else {
    __s = "WALK_LEFT_CHARMED";
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
/* DinosaurAnimRig_Raptor::getMeleeAnimationName() */

void DinosaurAnimRig_Raptor::getMeleeAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x22c) == '\0') {
    __s = "KICK_LEFT";
  }
  else {
    __s = "KICK_LEFT_CHARMED";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* DinosaurAnimRig_Raptor::onPopAnimInitialized() */

void __thiscall DinosaurAnimRig_Raptor::onPopAnimInitialized(DinosaurAnimRig_Raptor *this)

{
  CreatureAnimRig::onPopAnimInitialized((CreatureAnimRig *)this);
  *(undefined4 *)(this + 0x230) = 0;
  this[0x22c] = (DinosaurAnimRig_Raptor)0x0;
  return;
}


/* DinosaurAnimRig_Raptor::~DinosaurAnimRig_Raptor() */

void __thiscall DinosaurAnimRig_Raptor::~DinosaurAnimRig_Raptor(DinosaurAnimRig_Raptor *this)

{
  *(undefined ***)this = &PTR_GetClass_06904b20;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_Raptor_06904ca0;
  DinosaurAnimRig::~DinosaurAnimRig((DinosaurAnimRig *)this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_Raptor::~DinosaurAnimRig_Raptor() */

void __thiscall DinosaurAnimRig_Raptor::~DinosaurAnimRig_Raptor(DinosaurAnimRig_Raptor *this)

{
  ~DinosaurAnimRig_Raptor(this + -0x10);
  return;
}


/* DinosaurAnimRig_Raptor::~DinosaurAnimRig_Raptor() */

void __thiscall DinosaurAnimRig_Raptor::~DinosaurAnimRig_Raptor(DinosaurAnimRig_Raptor *this)

{
  ~DinosaurAnimRig_Raptor(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_Raptor::~DinosaurAnimRig_Raptor() */

void __thiscall DinosaurAnimRig_Raptor::~DinosaurAnimRig_Raptor(DinosaurAnimRig_Raptor *this)

{
  ~DinosaurAnimRig_Raptor(this + -0x10);
  return;
}


/* DinosaurAnimRig_Raptor::DinosaurAnimRig_Raptor() */

void __thiscall DinosaurAnimRig_Raptor::DinosaurAnimRig_Raptor(DinosaurAnimRig_Raptor *this)

{
  DinosaurAnimRig::DinosaurAnimRig((DinosaurAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06904b20;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_Raptor_06904ca0;
  return;
}


/* DinosaurAnimRig_Raptor::StaticNew() */

DinosaurAnimRig_Raptor * DinosaurAnimRig_Raptor::StaticNew(void)

{
  DinosaurAnimRig_Raptor *this;
  
  this = ::operator_new(0x238);
  DinosaurAnimRig_Raptor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Raptor::StaticClassInit() */

void DinosaurAnimRig_Raptor::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurAnimRig_Raptor");
    (*pcVar2)(plVar1,asStack_10,FUN_04822d78,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnimRig_Raptor::StaticGetClass() */

long * DinosaurAnimRig_Raptor::StaticGetClass(void)

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
  uVar2 = DinosaurAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurAnimRig_Raptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurAnimRig_Raptor::GetClass() const */

long * DinosaurAnimRig_Raptor::GetClass(void)

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
  uVar2 = DinosaurAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurAnimRig_Raptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_Raptor::getFlipAnimationName() */

void DinosaurAnimRig_Raptor::getFlipAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x22c) == '\0') {
    __s = "TURN_LFT_TO_RT";
  }
  else {
    __s = "TURN_LFT_TO_RT_CHARMED";
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
/* DinosaurAnimRig_Raptor::PlayFlip(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
DinosaurAnimRig_Raptor::PlayFlip(DinosaurAnimRig_Raptor *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getFlipAnimationName();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 7;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

