// Class: ZombieAnimRig_LostCityBug


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBug::PlayFlyingUp(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_LostCityBug::PlayFlyingUp
          (ZombieAnimRig_LostCityBug *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fly_start");
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
/* ZombieAnimRig_LostCityBug::PlayFlyingOver(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_LostCityBug::PlayFlyingOver
          (ZombieAnimRig_LostCityBug *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fly");
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
/* ZombieAnimRig_LostCityBug::PlayFlyingDown(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_LostCityBug::PlayFlyingDown
          (ZombieAnimRig_LostCityBug *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fly_end");
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


/* ZombieAnimRig_LostCityBug::onNeedsToDie() */

void __thiscall ZombieAnimRig_LostCityBug::onNeedsToDie(ZombieAnimRig_LostCityBug *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  if (*(float *)(this + 0x22c) < fVar1) {
    this[0x230] = (ZombieAnimRig_LostCityBug)0x1;
  }
  return;
}


/* ZombieAnimRig_LostCityBug::getHeadLayerNames() */

undefined * ZombieAnimRig_LostCityBug::getHeadLayerNames(void)

{
  int iVar1;
  
  if (((DAT_06b166f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b166f8), iVar1 != 0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&DAT_06b16738);
    __cxa_guard_release(&DAT_06b166f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16738,
                 &DAT_06a88000);
    return &DAT_06b16738;
  }
  return &DAT_06b16738;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBug::getDieAnimationName() */

void ZombieAnimRig_LostCityBug::getDieAnimationName(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x244) == '\0') {
    iVar2 = Sexy::Rand(10);
    if (iVar2 < 5) {
      __s = "die_bug";
    }
    else {
      __s = "die_bug2";
    }
  }
  else {
    iVar2 = Sexy::Rand(10);
    if (iVar2 < 5) {
      __s = "die_bug_zombie";
    }
    else {
      __s = "die_bug2_zombie";
    }
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBug::StaticClassInit() */

void ZombieAnimRig_LostCityBug::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_LostCityBug");
    (*pcVar2)(plVar1,asStack_10,FUN_047d9808,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_LostCityBug::StaticGetClass() */

long * ZombieAnimRig_LostCityBug::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_LostCityBug",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_LostCityBug::GetClass() const */

long * ZombieAnimRig_LostCityBug::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_LostCityBug",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_LostCityBug::~ZombieAnimRig_LostCityBug() */

void __thiscall
ZombieAnimRig_LostCityBug::~ZombieAnimRig_LostCityBug(ZombieAnimRig_LostCityBug *this)

{
  *(undefined ***)this = &PTR_GetClass_068eb240;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_LostCityBug_068eb4b8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_LostCityBug::~ZombieAnimRig_LostCityBug() */

void __thiscall
ZombieAnimRig_LostCityBug::~ZombieAnimRig_LostCityBug(ZombieAnimRig_LostCityBug *this)

{
  ~ZombieAnimRig_LostCityBug(this + -0x10);
  return;
}


/* ZombieAnimRig_LostCityBug::~ZombieAnimRig_LostCityBug() */

void __thiscall
ZombieAnimRig_LostCityBug::~ZombieAnimRig_LostCityBug(ZombieAnimRig_LostCityBug *this)

{
  ~ZombieAnimRig_LostCityBug(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_LostCityBug::~ZombieAnimRig_LostCityBug() */

void __thiscall
ZombieAnimRig_LostCityBug::~ZombieAnimRig_LostCityBug(ZombieAnimRig_LostCityBug *this)

{
  ~ZombieAnimRig_LostCityBug(this + -0x10);
  return;
}


/* ZombieAnimRig_LostCityBug::ZombieAnimRig_LostCityBug() */

void __thiscall
ZombieAnimRig_LostCityBug::ZombieAnimRig_LostCityBug(ZombieAnimRig_LostCityBug *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined4 *)(this + 0x240) = 0;
  this[0x244] = (ZombieAnimRig_LostCityBug)0x0;
  *(undefined ***)this = &PTR_GetClass_068eb240;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_LostCityBug_068eb4b8;
  return;
}


/* ZombieAnimRig_LostCityBug::StaticNew() */

ZombieAnimRig_LostCityBug * ZombieAnimRig_LostCityBug::StaticNew(void)

{
  ZombieAnimRig_LostCityBug *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_LostCityBug(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBug::updateDamageLayerVisibility(bool) */

void __thiscall
ZombieAnimRig_LostCityBug::updateDamageLayerVisibility(ZombieAnimRig_LostCityBug *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"bug_antennear");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,!param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"bug_antenneardmg");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"bug_eyel_dmg");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"bug_head_dmg");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"bug_head2_dmg");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"bug_body_dmg");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_LostCityBug::hasHelm(BasicHelmType) */

bool __thiscall ZombieAnimRig_LostCityBug::hasHelm(ZombieAnimRig_LostCityBug *this,int param_2)

{
  return *(int *)(this + 0x240) == param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBug::getHelmLayerName(BasicHelmType) */

void ZombieAnimRig_LostCityBug::getHelmLayerName(string *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  if (param_3 == 1) {
    __s = "zombie_armor_cone_norm";
  }
  else if (param_3 == 2) {
    __s = "zombie_armor_bucket_norm";
  }
  else {
    __s = "NO_LAYER_HERE";
  }
  std::string::string(param_1,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBug::updateHelmLayerVisibility(BasicHelmType) */

void __thiscall
ZombieAnimRig_LostCityBug::updateHelmLayerVisibility
          (ZombieAnimRig_LostCityBug *this,undefined4 param_2)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getHelmLayerName(asStack_10);
  bVar1 = (bool)hasHelm(this,param_2);
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_LostCityBug::SetLayerVisibilityForCurrentState(bool) */

void __thiscall
ZombieAnimRig_LostCityBug::SetLayerVisibilityForCurrentState
          (ZombieAnimRig_LostCityBug *this,bool param_1)

{
  updateHelmLayerVisibility(this,2);
  updateHelmLayerVisibility(this,1);
  updateDamageLayerVisibility(this,param_1);
  return;
}


/* ZombieAnimRig_LostCityBug::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_LostCityBug::onPopAnimInitialized(ZombieAnimRig_LostCityBug *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  SetLayerVisibilityForCurrentState(this,false);
  this[0x244] = (ZombieAnimRig_LostCityBug)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityBug::PlayDieNoBug() */

void __thiscall ZombieAnimRig_LostCityBug::PlayDieNoBug(ZombieAnimRig_LostCityBug *this)

{
  code *pcVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_40,"die_bug3");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  (*pcVar1)(this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

