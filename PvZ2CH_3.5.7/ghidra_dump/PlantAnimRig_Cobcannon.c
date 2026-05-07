// Class: PlantAnimRig_Cobcannon


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cobcannon::PlaySelected() */

void __thiscall PlantAnimRig_Cobcannon::PlaySelected(PlantAnimRig_Cobcannon *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"ready_idle");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cobcannon::PlaySpecialAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Cobcannon::PlaySpecialAttack
          (PlantAnimRig_Cobcannon *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"special");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cobcannon::getAttackAnimationName() */

void PlantAnimRig_Cobcannon::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b9) == '\0') {
    __s = "attack";
  }
  else {
    *(undefined4 *)(in_x0 + 0x218) = 0xe;
    __s = "attack2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Cobcannon::~PlantAnimRig_Cobcannon() */

void __thiscall PlantAnimRig_Cobcannon::~PlantAnimRig_Cobcannon(PlantAnimRig_Cobcannon *this)

{
  *(undefined ***)this = &PTR_GetClass_067ef350;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Cobcannon_067ef5b8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Cobcannon::~PlantAnimRig_Cobcannon() */

void __thiscall PlantAnimRig_Cobcannon::~PlantAnimRig_Cobcannon(PlantAnimRig_Cobcannon *this)

{
  ~PlantAnimRig_Cobcannon(this + -0x10);
  return;
}


/* PlantAnimRig_Cobcannon::~PlantAnimRig_Cobcannon() */

void __thiscall PlantAnimRig_Cobcannon::~PlantAnimRig_Cobcannon(PlantAnimRig_Cobcannon *this)

{
  ~PlantAnimRig_Cobcannon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Cobcannon::~PlantAnimRig_Cobcannon() */

void __thiscall PlantAnimRig_Cobcannon::~PlantAnimRig_Cobcannon(PlantAnimRig_Cobcannon *this)

{
  ~PlantAnimRig_Cobcannon(this + -0x10);
  return;
}


/* PlantAnimRig_Cobcannon::PlantAnimRig_Cobcannon() */

void __thiscall PlantAnimRig_Cobcannon::PlantAnimRig_Cobcannon(PlantAnimRig_Cobcannon *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Cobcannon)0x0;
  this[0x3b9] = (PlantAnimRig_Cobcannon)0x0;
  *(undefined ***)this = &PTR_GetClass_067ef350;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Cobcannon_067ef5b8;
  return;
}


/* PlantAnimRig_Cobcannon::StaticNew() */

PlantAnimRig_Cobcannon * PlantAnimRig_Cobcannon::StaticNew(void)

{
  PlantAnimRig_Cobcannon *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Cobcannon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cobcannon::StaticClassInit() */

void PlantAnimRig_Cobcannon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Cobcannon");
    (*pcVar2)(plVar1,asStack_10,FUN_041462f0,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Cobcannon::StaticGetClass() */

long * PlantAnimRig_Cobcannon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Cobcannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Cobcannon::GetClass() const */

long * PlantAnimRig_Cobcannon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Cobcannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cobcannon::SetMiniGunShown(bool) */

void __thiscall PlantAnimRig_Cobcannon::SetMiniGunShown(PlantAnimRig_Cobcannon *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x3b8] = (PlantAnimRig_Cobcannon)param_1;
  std::string::string(asStack_10,"xiaogangpao1");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cobcannon::PlayRecoverStart(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Cobcannon::PlayRecoverStart(PlantAnimRig_Cobcannon *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  int iVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig_Vamporcini::SetShield((PlantAnimRig_Vamporcini *)this,true);
  std::string::string(asStack_58,"reload");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar2 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cobcannon::PlayRecoverEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Cobcannon::PlayRecoverEnd(PlantAnimRig_Cobcannon *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"reload_end");
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
  PlantAnimRig_Vamporcini::SetShield((PlantAnimRig_Vamporcini *)this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cobcannon::ReadyForPlantFood(std::string const&) */

void __thiscall
PlantAnimRig_Cobcannon::ReadyForPlantFood(PlantAnimRig_Cobcannon *this,string *param_1)

{
  bool bVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("ready_idle",param_1);
  if (bVar1) {
    std::string::string(asStack_40,"special");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cobcannon::PlayRecoverLoop() */

void __thiscall PlantAnimRig_Cobcannon::PlayRecoverLoop(PlantAnimRig_Cobcannon *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"reload_idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
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
/* PlantAnimRig_Cobcannon::PlayWatering() */

void __thiscall PlantAnimRig_Cobcannon::PlayWatering(PlantAnimRig_Cobcannon *this)

{
  long lVar1;
  string asStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)asStack_48,1);
  PopAnimRig::SetPAMColor((PopAnimRig *)this,(Color *)asStack_48);
  std::string::string(asStack_48,"water");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_48,0,aDStack_38);
  std::string::~string(asStack_48);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xd;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cobcannon::PlayPlantFoodStart(int, RtReflectionDelegate<Sexy::Delegate0>,
   RtReflectionDelegate<Sexy::Delegate0>, RtReflectionDelegate<Sexy::Delegate0>) */

void PlantAnimRig_Cobcannon::PlayPlantFoodStart(ReceivedDataCallback *param_1)

{
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"ready_idle");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,ReadyForPlantFood);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantAnimRig_Cobcannon,void(PlantAnimRig_Cobcannon::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)param_1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cobcannon::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Cobcannon::PlayAttack(PlantAnimRig_Cobcannon *this,RtReflectionDelegate *param_2)

{
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PlantAnimRig::PlayAttack((PlantAnimRig *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (this[0x3b9] != (PlantAnimRig_Cobcannon)0x0) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

