// Class: PlantAnimRig_DragonRoar


/* PlantAnimRig_DragonRoar::CurrentAnimationIsFinished() */

void __thiscall PlantAnimRig_DragonRoar::CurrentAnimationIsFinished(PlantAnimRig_DragonRoar *this)

{
  PopAnimRig::IsAnimFinished(this,*(undefined4 *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_DragonRoar::~PlantAnimRig_DragonRoar() */

void __thiscall PlantAnimRig_DragonRoar::~PlantAnimRig_DragonRoar(PlantAnimRig_DragonRoar *this)

{
  *(undefined ***)this = &PTR_GetClass_067fad10;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_DragonRoar_067faf78;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_DragonRoar::~PlantAnimRig_DragonRoar() */

void __thiscall PlantAnimRig_DragonRoar::~PlantAnimRig_DragonRoar(PlantAnimRig_DragonRoar *this)

{
  ~PlantAnimRig_DragonRoar(this + -0x10);
  return;
}


/* PlantAnimRig_DragonRoar::~PlantAnimRig_DragonRoar() */

void __thiscall PlantAnimRig_DragonRoar::~PlantAnimRig_DragonRoar(PlantAnimRig_DragonRoar *this)

{
  ~PlantAnimRig_DragonRoar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_DragonRoar::~PlantAnimRig_DragonRoar() */

void __thiscall PlantAnimRig_DragonRoar::~PlantAnimRig_DragonRoar(PlantAnimRig_DragonRoar *this)

{
  ~PlantAnimRig_DragonRoar(this + -0x10);
  return;
}


/* PlantAnimRig_DragonRoar::PlantAnimRig_DragonRoar() */

void __thiscall PlantAnimRig_DragonRoar::PlantAnimRig_DragonRoar(PlantAnimRig_DragonRoar *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067fad10;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_DragonRoar_067faf78;
  return;
}


/* PlantAnimRig_DragonRoar::StaticNew() */

PlantAnimRig_DragonRoar * PlantAnimRig_DragonRoar::StaticNew(void)

{
  PlantAnimRig_DragonRoar *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_DragonRoar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonRoar::StaticClassInit() */

void PlantAnimRig_DragonRoar::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_DragonRoar");
    (*pcVar2)(plVar1,asStack_10,FUN_04189cd8,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_DragonRoar::StaticGetClass() */

long * PlantAnimRig_DragonRoar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_DragonRoar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_DragonRoar::GetClass() const */

long * PlantAnimRig_DragonRoar::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_DragonRoar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonRoar::PlayChewingAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_DragonRoar::PlayChewingAttack
          (PlantAnimRig_DragonRoar *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"chew_attack");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonRoar::PlayBiteAttack() */

void __thiscall PlantAnimRig_DragonRoar::PlayBiteAttack(PlantAnimRig_DragonRoar *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"bite");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonRoar::PlaySwallowAttack() */

void __thiscall PlantAnimRig_DragonRoar::PlaySwallowAttack(PlantAnimRig_DragonRoar *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonRoar::PlaySwallow() */

void __thiscall PlantAnimRig_DragonRoar::PlaySwallow(PlantAnimRig_DragonRoar *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"swallow");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonRoar::PlaySwallowEgg() */

void __thiscall PlantAnimRig_DragonRoar::PlaySwallowEgg(PlantAnimRig_DragonRoar *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"chew_hard");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonRoar::PlayPFRoaring() */

void __thiscall PlantAnimRig_DragonRoar::PlayPFRoaring(PlantAnimRig_DragonRoar *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 4;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonRoar::PlayLevel5Attack(bool) */

void __thiscall
PlantAnimRig_DragonRoar::PlayLevel5Attack(PlantAnimRig_DragonRoar *this,bool param_1)

{
  undefined4 uVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    __s = "nova_attack";
  }
  else {
    __s = "nova_attack_failure";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar1;
  *(undefined4 *)(this + 0x218) = 0xe;
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonRoar::PlayChewing() */

void __thiscall PlantAnimRig_DragonRoar::PlayChewing(PlantAnimRig_DragonRoar *this)

{
  long lVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"chew");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  uVar2 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3b8) = uVar2;
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

