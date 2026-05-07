// Class: PlantAnimRig_ByttneriaMeteorHammer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ByttneriaMeteorHammer::getPlantFoodMainAnimName() */

void PlantAnimRig_ByttneriaMeteorHammer::getPlantFoodMainAnimName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x210));
  if (cVar2 == '\0') {
    __s = "plantfood";
  }
  else {
    __s = "plantfood2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ByttneriaMeteorHammer::~PlantAnimRig_ByttneriaMeteorHammer() */

void __thiscall
PlantAnimRig_ByttneriaMeteorHammer::~PlantAnimRig_ByttneriaMeteorHammer
          (PlantAnimRig_ByttneriaMeteorHammer *this)

{
  *(undefined ***)this = &PTR_GetClass_0672ef20;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ByttneriaMeteorHammer_0672f188;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ByttneriaMeteorHammer::~PlantAnimRig_ByttneriaMeteorHammer() */

void __thiscall
PlantAnimRig_ByttneriaMeteorHammer::~PlantAnimRig_ByttneriaMeteorHammer
          (PlantAnimRig_ByttneriaMeteorHammer *this)

{
  ~PlantAnimRig_ByttneriaMeteorHammer(this + -0x10);
  return;
}


/* PlantAnimRig_ByttneriaMeteorHammer::~PlantAnimRig_ByttneriaMeteorHammer() */

void __thiscall
PlantAnimRig_ByttneriaMeteorHammer::~PlantAnimRig_ByttneriaMeteorHammer
          (PlantAnimRig_ByttneriaMeteorHammer *this)

{
  ~PlantAnimRig_ByttneriaMeteorHammer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ByttneriaMeteorHammer::~PlantAnimRig_ByttneriaMeteorHammer() */

void __thiscall
PlantAnimRig_ByttneriaMeteorHammer::~PlantAnimRig_ByttneriaMeteorHammer
          (PlantAnimRig_ByttneriaMeteorHammer *this)

{
  ~PlantAnimRig_ByttneriaMeteorHammer(this + -0x10);
  return;
}


/* PlantAnimRig_ByttneriaMeteorHammer::StaticGetClass() */

long * PlantAnimRig_ByttneriaMeteorHammer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ByttneriaMeteorHammer",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_ByttneriaMeteorHammer::GetClass() const */

long * PlantAnimRig_ByttneriaMeteorHammer::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_ByttneriaMeteorHammer",uVar2,StaticNew);
  return sClass;
}


/* PlantAnimRig_ByttneriaMeteorHammer::PlantAnimRig_ByttneriaMeteorHammer() */

void __thiscall
PlantAnimRig_ByttneriaMeteorHammer::PlantAnimRig_ByttneriaMeteorHammer
          (PlantAnimRig_ByttneriaMeteorHammer *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0672ef20;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ByttneriaMeteorHammer_0672f188;
  return;
}


/* PlantAnimRig_ByttneriaMeteorHammer::StaticNew() */

PlantAnimRig_ByttneriaMeteorHammer * PlantAnimRig_ByttneriaMeteorHammer::StaticNew(void)

{
  PlantAnimRig_ByttneriaMeteorHammer *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_ByttneriaMeteorHammer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ByttneriaMeteorHammer::playCharge(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_ByttneriaMeteorHammer::playCharge
          (PlantAnimRig_ByttneriaMeteorHammer *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03b2bc50(asStack_58);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ByttneriaMeteorHammer::playCharging(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_ByttneriaMeteorHammer::playCharging
          (PlantAnimRig_ByttneriaMeteorHammer *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03b2bcb8(asStack_58);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ByttneriaMeteorHammer::playNormalAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_ByttneriaMeteorHammer::playNormalAttack
          (PlantAnimRig_ByttneriaMeteorHammer *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03b2bb18(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ByttneriaMeteorHammer::playChargingFast() */

void __thiscall
PlantAnimRig_ByttneriaMeteorHammer::playChargingFast(PlantAnimRig_ByttneriaMeteorHammer *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03b2bd20(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
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
/* PlantAnimRig_ByttneriaMeteorHammer::playChargeAttack(int,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_ByttneriaMeteorHammer::playChargeAttack
          (PlantAnimRig_ByttneriaMeteorHammer *this,undefined4 param_1,RtReflectionDelegate *param_3
          )

{
  int iVar1;
  char *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"byttneriameteorhammer_attack_charge");
  FUN_03b2ccac(asStack_58,param_1);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ByttneriaMeteorHammer::playChargeAttackLv5(int,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_ByttneriaMeteorHammer::playChargeAttackLv5
          (PlantAnimRig_ByttneriaMeteorHammer *this,undefined4 param_1,RtReflectionDelegate *param_3
          )

{
  int iVar1;
  char *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"byttneriameteorhammer_attack_charge");
  FUN_03b2cd44(asStack_58,param_1);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

