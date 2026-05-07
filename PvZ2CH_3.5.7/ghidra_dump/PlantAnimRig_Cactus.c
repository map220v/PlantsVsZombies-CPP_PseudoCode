// Class: PlantAnimRig_Cactus


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cactus::PlayPlantfoodUp(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Cactus::PlayPlantfoodUp(PlantAnimRig_Cactus *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"up");
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


/* PlantAnimRig_Cactus::onCowerEnded() */

void __thiscall PlantAnimRig_Cactus::onCowerEnded(PlantAnimRig_Cactus *this)

{
  (**(code **)(*(long *)this + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cactus::getIdleAnimationName() */

void PlantAnimRig_Cactus::getIdleAnimationName(void)

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
    __s = "idle_plantfood";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Cactus::~PlantAnimRig_Cactus() */

void __thiscall PlantAnimRig_Cactus::~PlantAnimRig_Cactus(PlantAnimRig_Cactus *this)

{
  *(undefined ***)this = &PTR_GetClass_067f6ed0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Cactus_067f7138;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Cactus::~PlantAnimRig_Cactus() */

void __thiscall PlantAnimRig_Cactus::~PlantAnimRig_Cactus(PlantAnimRig_Cactus *this)

{
  ~PlantAnimRig_Cactus(this + -0x10);
  return;
}


/* PlantAnimRig_Cactus::~PlantAnimRig_Cactus() */

void __thiscall PlantAnimRig_Cactus::~PlantAnimRig_Cactus(PlantAnimRig_Cactus *this)

{
  ~PlantAnimRig_Cactus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Cactus::~PlantAnimRig_Cactus() */

void __thiscall PlantAnimRig_Cactus::~PlantAnimRig_Cactus(PlantAnimRig_Cactus *this)

{
  ~PlantAnimRig_Cactus(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cactus::StaticClassInit() */

void PlantAnimRig_Cactus::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Cactus");
    (*pcVar2)(plVar1,asStack_10,FUN_0417c964,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Cactus::StaticGetClass() */

long * PlantAnimRig_Cactus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Cactus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Cactus::GetClass() const */

long * PlantAnimRig_Cactus::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Cactus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Cactus::PlantAnimRig_Cactus() */

void __thiscall PlantAnimRig_Cactus::PlantAnimRig_Cactus(PlantAnimRig_Cactus *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Cactus)0x0;
  *(undefined ***)this = &PTR_GetClass_067f6ed0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Cactus_067f7138;
  return;
}


/* PlantAnimRig_Cactus::StaticNew() */

PlantAnimRig_Cactus * PlantAnimRig_Cactus::StaticNew(void)

{
  PlantAnimRig_Cactus *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Cactus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cactus::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Cactus::PlayAttack(PlantAnimRig_Cactus *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_Cactus)0x0) {
    __s = "attack";
  }
  else {
    __s = "attack_plantfood";
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
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cactus::PlayPlantfood(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Cactus::PlayPlantfood(PlantAnimRig_Cactus *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood");
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
  lVar1 = ___stack_chk_guard;
  this[0x3b8] = (PlantAnimRig_Cactus)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cactus::PlayAvatarPlantfood(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Cactus::PlayAvatarPlantfood(PlantAnimRig_Cactus *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack_plantfoot02");
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
  lVar1 = ___stack_chk_guard;
  this[0x3b8] = (PlantAnimRig_Cactus)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cactus::PlayLevel5Attack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Cactus::PlayLevel5Attack(PlantAnimRig_Cactus *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack5");
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


/* PlantAnimRig_Cactus::TurnPlantFoodEffectOn() */

void __thiscall PlantAnimRig_Cactus::TurnPlantFoodEffectOn(PlantAnimRig_Cactus *this)

{
  this[0x3b8] = (PlantAnimRig_Cactus)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cactus::PlayCowerAttack() */

void __thiscall PlantAnimRig_Cactus::PlayCowerAttack(PlantAnimRig_Cactus *this)

{
  int iVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_Cactus)0x0) {
    __s = "down_attack";
  }
  else {
    __s = "down_attack_plantfood";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cactus::onCowerContinued() */

void __thiscall PlantAnimRig_Cactus::onCowerContinued(PlantAnimRig_Cactus *this)

{
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_Cactus)0x0) {
    __s = "down_idle";
  }
  else {
    __s = "down_idle_plantfood";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cactus::PlayCowerIdle() */

void __thiscall PlantAnimRig_Cactus::PlayCowerIdle(PlantAnimRig_Cactus *this)

{
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_Cactus)0x0) {
    __s = "down_idle";
  }
  else {
    __s = "down_idle_plantfood";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  std::string::~string(asStack_40);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cactus::PlayEnterCower() */

void __thiscall PlantAnimRig_Cactus::PlayEnterCower(PlantAnimRig_Cactus *this)

{
  int iVar1;
  char *__s;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_Cactus)0x0) {
    __s = "down";
  }
  else {
    __s = "down_plantfood";
  }
  std::string::string(asStack_70,__s);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCowerContinued");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cactus::PlayExitCower() */

void __thiscall PlantAnimRig_Cactus::PlayExitCower(PlantAnimRig_Cactus *this)

{
  int iVar1;
  char *__s;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_Cactus)0x0) {
    __s = "up";
  }
  else {
    __s = "up_plantfood";
  }
  std::string::string(asStack_70,__s);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCowerEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

