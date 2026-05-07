// Class: ZombieAnimRig_IZombieSunflower


/* ZombieAnimRig_IZombieSunflower::~ZombieAnimRig_IZombieSunflower() */

void __thiscall
ZombieAnimRig_IZombieSunflower::~ZombieAnimRig_IZombieSunflower
          (ZombieAnimRig_IZombieSunflower *this)

{
  *(undefined ***)this = &PTR_GetClass_06622c80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_IZombieSunflower_06622f98;
  ZombieAnimRig_RomanBasic::~ZombieAnimRig_RomanBasic((ZombieAnimRig_RomanBasic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_IZombieSunflower::~ZombieAnimRig_IZombieSunflower() */

void __thiscall
ZombieAnimRig_IZombieSunflower::~ZombieAnimRig_IZombieSunflower
          (ZombieAnimRig_IZombieSunflower *this)

{
  ~ZombieAnimRig_IZombieSunflower(this + -0x10);
  return;
}


/* ZombieAnimRig_IZombieSunflower::~ZombieAnimRig_IZombieSunflower() */

void __thiscall
ZombieAnimRig_IZombieSunflower::~ZombieAnimRig_IZombieSunflower
          (ZombieAnimRig_IZombieSunflower *this)

{
  ~ZombieAnimRig_IZombieSunflower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_IZombieSunflower::~ZombieAnimRig_IZombieSunflower() */

void __thiscall
ZombieAnimRig_IZombieSunflower::~ZombieAnimRig_IZombieSunflower
          (ZombieAnimRig_IZombieSunflower *this)

{
  ~ZombieAnimRig_IZombieSunflower(this + -0x10);
  return;
}


/* ZombieAnimRig_IZombieSunflower::ZombieAnimRig_IZombieSunflower() */

void __thiscall
ZombieAnimRig_IZombieSunflower::ZombieAnimRig_IZombieSunflower(ZombieAnimRig_IZombieSunflower *this)

{
  ZombieAnimRig_RomanBasic::ZombieAnimRig_RomanBasic((ZombieAnimRig_RomanBasic *)this);
  *(undefined ***)this = &PTR_GetClass_06622c80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_IZombieSunflower_06622f98;
  return;
}


/* ZombieAnimRig_IZombieSunflower::StaticNew() */

ZombieAnimRig_IZombieSunflower * ZombieAnimRig_IZombieSunflower::StaticNew(void)

{
  ZombieAnimRig_IZombieSunflower *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_IZombieSunflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IZombieSunflower::StaticClassInit() */

void ZombieAnimRig_IZombieSunflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_IZombieSunflower");
    (*pcVar2)(plVar1,asStack_10,FUN_0341acdc,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_IZombieSunflower::StaticGetClass() */

long * ZombieAnimRig_IZombieSunflower::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_RomanBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_IZombieSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_IZombieSunflower::GetClass() const */

long * ZombieAnimRig_IZombieSunflower::GetClass(void)

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
  uVar2 = ZombieAnimRig_RomanBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_IZombieSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IZombieSunflower::getHeadLayerNames() */

void ZombieAnimRig_IZombieSunflower::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06a9fa60 & 1;
  if (((DAT_06a9fa60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9fa60), iVar2 != 0)) {
    std::string::string((string *)&DAT_06a9fbd8,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06a9fbe0,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06a9fbe8,"zombie_pupil");
    nop();
    std::string::string((string *)&DAT_06a9fbf0,"sunflower_eye");
    nop();
    std::string::string((string *)&DAT_06a9fbf8,"sunflower_face");
    nop();
    std::string::string((string *)&DAT_06a9fc00,"sunflower_mouth_closed");
    nop();
    std::string::string((string *)&DAT_06a9fc08,"sunflower_petals");
    nop();
    __cxa_guard_release(&DAT_06a9fa60);
    __cxa_atexit(FUN_03418d1c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06a9f740 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9f740), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06a9fc30,(string *)&DAT_06a9fbd8,(allocator *)&DAT_06a9fc10);
    __cxa_guard_release(&DAT_06a9f740);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06a9fc30,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06a9fc30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IZombieSunflower::getArmLayerNames() */

void ZombieAnimRig_IZombieSunflower::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06a9fc48 & 1;
  if (((DAT_06a9fc48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9fc48), iVar2 != 0)) {
    std::string::string((string *)&DAT_06a9f940,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06a9f948,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06a9f950,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06a9f958,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06a9fc48);
    __cxa_atexit(FUN_03418d54,uVar3,&DAT_06a88000);
  }
  if (((DAT_06a9f6d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9f6d0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06a9fa48,(string *)&DAT_06a9f940,(allocator *)&DAT_06a9f960);
    __cxa_guard_release(&DAT_06a9f6d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06a9fa48,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06a9fa48);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IZombieSunflower::getArmReplacementPairNames() */

void ZombieAnimRig_IZombieSunflower::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06a9f6c8 & 1;
  if (((DAT_06a9f6c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9f6c8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06a9f770,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06a9f778,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06a9f6c8);
    __cxa_atexit(FUN_03418d90,uVar3,&DAT_06a88000);
  }
  if (((DAT_06a9f898 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9f898), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06a9f9d0,(string *)&DAT_06a9f770,(allocator *)&DAT_06a9f780);
    __cxa_guard_release(&DAT_06a9f898);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06a9f9d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06a9f9d0);
}

