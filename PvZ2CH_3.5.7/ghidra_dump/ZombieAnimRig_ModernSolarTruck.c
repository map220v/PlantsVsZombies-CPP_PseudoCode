// Class: ZombieAnimRig_ModernSolarTruck


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernSolarTruck::PlayCharging(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ModernSolarTruck::PlayCharging
          (ZombieAnimRig_ModernSolarTruck *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"absorb");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernSolarTruck::PlayFullCharged(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ModernSolarTruck::PlayFullCharged
          (ZombieAnimRig_ModernSolarTruck *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"absorb_full");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernSolarTruck::SetDamageState(int) */

void __thiscall
ZombieAnimRig_ModernSolarTruck::SetDamageState(ZombieAnimRig_ModernSolarTruck *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"damage1_helmet");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage2_helmet");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 2);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage3_helmet");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 3);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage4_helmet");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 4);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage5_helmet");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 5);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"damage6_helmet");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1 == 6);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ModernSolarTruck::StaticGetClass() */

long * ZombieAnimRig_ModernSolarTruck::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ModernSolarTruck",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_ModernSolarTruck::GetClass() const */

long * ZombieAnimRig_ModernSolarTruck::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ModernSolarTruck",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_ModernSolarTruck::~ZombieAnimRig_ModernSolarTruck() */

void __thiscall
ZombieAnimRig_ModernSolarTruck::~ZombieAnimRig_ModernSolarTruck
          (ZombieAnimRig_ModernSolarTruck *this)

{
  *(undefined ***)this = &PTR_GetClass_068fd100;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ModernSolarTruck_068fd380;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ModernSolarTruck::~ZombieAnimRig_ModernSolarTruck() */

void __thiscall
ZombieAnimRig_ModernSolarTruck::~ZombieAnimRig_ModernSolarTruck
          (ZombieAnimRig_ModernSolarTruck *this)

{
  ~ZombieAnimRig_ModernSolarTruck(this + -0x10);
  return;
}


/* ZombieAnimRig_ModernSolarTruck::~ZombieAnimRig_ModernSolarTruck() */

void __thiscall
ZombieAnimRig_ModernSolarTruck::~ZombieAnimRig_ModernSolarTruck
          (ZombieAnimRig_ModernSolarTruck *this)

{
  ~ZombieAnimRig_ModernSolarTruck(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ModernSolarTruck::~ZombieAnimRig_ModernSolarTruck() */

void __thiscall
ZombieAnimRig_ModernSolarTruck::~ZombieAnimRig_ModernSolarTruck
          (ZombieAnimRig_ModernSolarTruck *this)

{
  ~ZombieAnimRig_ModernSolarTruck(this + -0x10);
  return;
}


/* ZombieAnimRig_ModernSolarTruck::ZombieAnimRig_ModernSolarTruck() */

void __thiscall
ZombieAnimRig_ModernSolarTruck::ZombieAnimRig_ModernSolarTruck(ZombieAnimRig_ModernSolarTruck *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068fd100;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ModernSolarTruck_068fd380;
  return;
}


/* ZombieAnimRig_ModernSolarTruck::StaticNew() */

ZombieAnimRig_ModernSolarTruck * ZombieAnimRig_ModernSolarTruck::StaticNew(void)

{
  ZombieAnimRig_ModernSolarTruck *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ModernSolarTruck(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernSolarTruck::StartCasting(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ModernSolarTruck::StartCasting
          (ZombieAnimRig_ModernSolarTruck *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attack");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernSolarTruck::PlayPush(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ModernSolarTruck::PlayPush
          (ZombieAnimRig_ModernSolarTruck *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attack2");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernSolarTruck::SetEnergyState(int) */

void __thiscall
ZombieAnimRig_ModernSolarTruck::SetEnergyState(ZombieAnimRig_ModernSolarTruck *this,int param_1)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (5 < (uint)param_1) goto LAB_04801cc0;
  switch(param_1) {
  case 0:
    std::string::string(asStack_10,"lamp1");
    bVar1 = false;
    break;
  case 1:
    std::string::string(asStack_10,"lamp1");
    bVar1 = true;
    break;
  case 2:
    std::string::string(asStack_10,"lamp1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp2");
    bVar1 = true;
    goto LAB_04801e24;
  case 3:
    std::string::string(asStack_10,"lamp1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp3");
    bVar1 = true;
    goto LAB_04801e58;
  case 4:
    std::string::string(asStack_10,"lamp1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp3");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp4");
    bVar1 = true;
    goto LAB_04801c78;
  case 5:
    std::string::string(asStack_10,"lamp1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp3");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp4");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp5");
    bVar1 = true;
    goto LAB_04801cac;
  }
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"lamp2");
  bVar1 = false;
LAB_04801e24:
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"lamp3");
  bVar1 = false;
LAB_04801e58:
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"lamp4");
  bVar1 = false;
LAB_04801c78:
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"lamp5");
  bVar1 = false;
LAB_04801cac:
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
LAB_04801cc0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ModernSolarTruck::onPopAnimInitialized() */

void __thiscall
ZombieAnimRig_ModernSolarTruck::onPopAnimInitialized(ZombieAnimRig_ModernSolarTruck *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  (**(code **)(*(long *)this + 0x268))(this,0);
  SetEnergyState(this,0);
  return;
}

