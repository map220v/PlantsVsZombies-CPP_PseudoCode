// Class: ZombieAnimRig_Bull


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Bull::StaticClassInit() */

void ZombieAnimRig_Bull::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Bull");
    (*pcVar2)(plVar1,asStack_10,FUN_045f61f8,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Bull::StaticGetClass() */

long * ZombieAnimRig_Bull::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Bull",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Bull::GetClass() const */

long * ZombieAnimRig_Bull::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Bull",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Bull::~ZombieAnimRig_Bull() */

void __thiscall ZombieAnimRig_Bull::~ZombieAnimRig_Bull(ZombieAnimRig_Bull *this)

{
  *(undefined ***)this = &PTR_GetClass_0686d260;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Bull_0686d4d8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Bull::~ZombieAnimRig_Bull() */

void __thiscall ZombieAnimRig_Bull::~ZombieAnimRig_Bull(ZombieAnimRig_Bull *this)

{
  ~ZombieAnimRig_Bull(this + -0x10);
  return;
}


/* ZombieAnimRig_Bull::~ZombieAnimRig_Bull() */

void __thiscall ZombieAnimRig_Bull::~ZombieAnimRig_Bull(ZombieAnimRig_Bull *this)

{
  ~ZombieAnimRig_Bull(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Bull::~ZombieAnimRig_Bull() */

void __thiscall ZombieAnimRig_Bull::~ZombieAnimRig_Bull(ZombieAnimRig_Bull *this)

{
  ~ZombieAnimRig_Bull(this + -0x10);
  return;
}


/* ZombieAnimRig_Bull::ZombieAnimRig_Bull() */

void __thiscall ZombieAnimRig_Bull::ZombieAnimRig_Bull(ZombieAnimRig_Bull *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_Bull)0x0;
  *(undefined ***)this = &PTR_GetClass_0686d260;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Bull_0686d4d8;
  return;
}


/* ZombieAnimRig_Bull::StaticNew() */

ZombieAnimRig_Bull * ZombieAnimRig_Bull::StaticNew(void)

{
  ZombieAnimRig_Bull *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_Bull(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Bull::PlayPreRun(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_Bull::PlayPreRun(ZombieAnimRig_Bull *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"bull run lead in");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 8;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Bull::HideRider() */

void __thiscall ZombieAnimRig_Bull::HideRider(ZombieAnimRig_Bull *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"zombie_cowboy_hat_back");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_cowboy_hat_front");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_arm_inner_lower");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_arm_inner_upper");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_arm_outer_lower");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_arm_outer_upper_01");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_arm_outer_upper_02");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_arms_outer_upper");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_eye");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_eye_sm");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_hand_inner");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_hand_outer");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_jaw");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_leg_inner_lower");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_leg_inner_upper");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_leg_outer_lower");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_leg_outer_upper");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_pupil");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_skull");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_toe_inner");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_toe_outer");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_torso");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_waist");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_imp_leg_outer_upper");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

