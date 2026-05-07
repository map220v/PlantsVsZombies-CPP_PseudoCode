// Class: ZombieAnimRig_ModernMiner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernMiner::getNoFlagHandLayerNames() */

void ZombieAnimRig_ModernMiner::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values & 1;
  if (((ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values),
     iVar2 != 0)) {
    __cxa_guard_release(&ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values);
    __cxa_atexit(FUN_03418c88,uVar3,&DAT_06a88000);
  }
  if (((ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values),
     iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray,
               (string *)&ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values,
               (allocator *)&ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values);
    __cxa_guard_release(&ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray_values);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,
                 ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray,&DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(ZombieAnimRig_Basic::getEmptyLayerNames()::k_layerArray);
}


/* ZombieAnimRig_ModernMiner::DropHelm(HelmType, Zombie*) */

void ZombieAnimRig_ModernMiner::DropHelm(long param_1)

{
  *(undefined1 *)(param_1 + 0x250) = 0;
  ZombieAnimRig_Basic::DropHelm();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernMiner::getIdleAnimationName() */

void ZombieAnimRig_ModernMiner::getIdleAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "idle_no_shovel";
  }
  else {
    __s = "idle";
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
/* ZombieAnimRig_ModernMiner::getWalkAnimationName() */

void ZombieAnimRig_ModernMiner::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if ((*(char *)(in_x0 + 0x251) == '\0') || (*(char *)(in_x0 + 0x252) != '\0')) {
    if (*(char *)(in_x0 + 0x250) == '\0') {
      __s = "walk_no_tool";
    }
    else {
      __s = "walk";
    }
  }
  else {
    __s = "walk2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(in_x8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernMiner::getEatAnimationName() */

void ZombieAnimRig_ModernMiner::getEatAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "eat_no_tool";
  }
  else {
    __s = "eat";
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
/* ZombieAnimRig_ModernMiner::getDieAnimationName() */

void ZombieAnimRig_ModernMiner::getDieAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x250) == '\0') {
    __s = "die_no_tool";
  }
  else {
    __s = "die";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_ModernMiner::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_ModernMiner::onPopAnimInitialized(ZombieAnimRig_ModernMiner *this)

{
  ZombieAnimRig_PirateBarrel::onPopAnimInitialized((ZombieAnimRig_PirateBarrel *)this);
  this[0x251] = (ZombieAnimRig_ModernMiner)0x0;
  this[0x250] = (ZombieAnimRig_ModernMiner)0x1;
  this[0x252] = (ZombieAnimRig_ModernMiner)0x0;
  return;
}


/* ZombieAnimRig_ModernMiner::~ZombieAnimRig_ModernMiner() */

void __thiscall
ZombieAnimRig_ModernMiner::~ZombieAnimRig_ModernMiner(ZombieAnimRig_ModernMiner *this)

{
  *(undefined ***)this = &PTR_GetClass_068fdef0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ModernMiner_068fe208;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ModernMiner::~ZombieAnimRig_ModernMiner() */

void __thiscall
ZombieAnimRig_ModernMiner::~ZombieAnimRig_ModernMiner(ZombieAnimRig_ModernMiner *this)

{
  ~ZombieAnimRig_ModernMiner(this + -0x10);
  return;
}


/* ZombieAnimRig_ModernMiner::~ZombieAnimRig_ModernMiner() */

void __thiscall
ZombieAnimRig_ModernMiner::~ZombieAnimRig_ModernMiner(ZombieAnimRig_ModernMiner *this)

{
  ~ZombieAnimRig_ModernMiner(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ModernMiner::~ZombieAnimRig_ModernMiner() */

void __thiscall
ZombieAnimRig_ModernMiner::~ZombieAnimRig_ModernMiner(ZombieAnimRig_ModernMiner *this)

{
  ~ZombieAnimRig_ModernMiner(this + -0x10);
  return;
}


/* ZombieAnimRig_ModernMiner::ZombieAnimRig_ModernMiner() */

void __thiscall
ZombieAnimRig_ModernMiner::ZombieAnimRig_ModernMiner(ZombieAnimRig_ModernMiner *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  this[0x250] = (ZombieAnimRig_ModernMiner)0x1;
  this[0x251] = (ZombieAnimRig_ModernMiner)0x0;
  this[0x252] = (ZombieAnimRig_ModernMiner)0x0;
  *(undefined ***)this = &PTR_GetClass_068fdef0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ModernMiner_068fe208;
  return;
}


/* ZombieAnimRig_ModernMiner::StaticNew() */

ZombieAnimRig_ModernMiner * ZombieAnimRig_ModernMiner::StaticNew(void)

{
  ZombieAnimRig_ModernMiner *this;
  
  this = ::operator_new(600);
  ZombieAnimRig_ModernMiner(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernMiner::StaticClassInit() */

void ZombieAnimRig_ModernMiner::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ModernMiner");
    (*pcVar2)(plVar1,asStack_10,FUN_048057bc,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ModernMiner::StaticGetClass() */

long * ZombieAnimRig_ModernMiner::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ModernMiner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ModernMiner::GetClass() const */

long * ZombieAnimRig_ModernMiner::GetClass(void)

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
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ModernMiner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernMiner::PlayUnderground(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ModernMiner::PlayUnderground
          (ZombieAnimRig_ModernMiner *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"special_in");
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
/* ZombieAnimRig_ModernMiner::PlayAboveground(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ModernMiner::PlayAboveground
          (ZombieAnimRig_ModernMiner *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x250] == (ZombieAnimRig_ModernMiner)0x0) {
    pcVar1 = *(code **)(*(long *)this + 0x170);
    std::string::string(asStack_58,"specoal_out_2");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    (*pcVar1)(this,asStack_58,0,aRStack_50);
  }
  else {
    pcVar1 = *(code **)(*(long *)this + 0x170);
    std::string::string(asStack_58,"special_out");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,param_2);
    (*pcVar1)(this,asStack_58,0,aRStack_50);
  }
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
/* ZombieAnimRig_ModernMiner::PlayDropTool(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_ModernMiner::PlayDropTool
          (ZombieAnimRig_ModernMiner *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"drop_tool");
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
/* ZombieAnimRig_ModernMiner::getHeadLayerNames() */

void ZombieAnimRig_ModernMiner::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29268 & 1;
  if (((DAT_06b29268 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29268), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29270,"xiaba");
    nop();
    std::string::string((string *)&DAT_06b29278,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b29280,"lian");
    nop();
    std::string::string((string *)&DAT_06b29288,"lian22");
    nop();
    std::string::string((string *)&DAT_06b29290,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b29298,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b292a0,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b29268);
    __cxa_atexit(FUN_04804e30,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29238 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29238), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b292e0,(string *)&DAT_06b29270,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b29238);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b292e0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b292e0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernMiner::getArmLayerNames() */

void ZombieAnimRig_ModernMiner::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29208 & 1;
  if (((DAT_06b29208 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29208), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29100,"zombie_digger_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b29108,"zombie_digger_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b29110,"zombie_digger_arm_inner_upper");
    nop();
    std::string::string((string *)&DAT_06b29118,"zombie_digger_arm_inner_lower");
    nop();
    std::string::string((string *)&DAT_06b29120,"zombie_digger_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b29128,"zombie_digger_hand_inner_no_tool");
    nop();
    std::string::string((string *)&DAT_06b29130,"zombie_digger_hand_inner");
    nop();
    __cxa_guard_release(&DAT_06b29208);
    __cxa_atexit(FUN_04804e68,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b291a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b291a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29240,(string *)&DAT_06b29100,(allocator *)&DAT_06b29138);
    __cxa_guard_release(&DAT_06b291a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29240,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29240);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ModernMiner::getMiningToolLayerNames() */

void ZombieAnimRig_ModernMiner::getMiningToolLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b291a8 & 1;
  if (((DAT_06b291a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b291a8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29138,"particle_miner_tool");
    nop();
    __cxa_guard_release(&DAT_06b291a8);
    __cxa_atexit(FUN_04804ea0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29218 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29218), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b290e8,(string *)&DAT_06b29138,(allocator *)&DAT_06b29140);
    __cxa_guard_release(&DAT_06b29218);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b290e8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b290e8);
}

