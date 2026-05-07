// Class: ZombieAnimRig_IZombiePeashooter


/* ZombieAnimRig_IZombiePeashooter::~ZombieAnimRig_IZombiePeashooter() */

void __thiscall
ZombieAnimRig_IZombiePeashooter::~ZombieAnimRig_IZombiePeashooter
          (ZombieAnimRig_IZombiePeashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_06622fe0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_IZombiePeashooter_066232f8;
  ZombieAnimRig_ShooterBasic::~ZombieAnimRig_ShooterBasic((ZombieAnimRig_ShooterBasic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_IZombiePeashooter::~ZombieAnimRig_IZombiePeashooter() */

void __thiscall
ZombieAnimRig_IZombiePeashooter::~ZombieAnimRig_IZombiePeashooter
          (ZombieAnimRig_IZombiePeashooter *this)

{
  ~ZombieAnimRig_IZombiePeashooter(this + -0x10);
  return;
}


/* ZombieAnimRig_IZombiePeashooter::~ZombieAnimRig_IZombiePeashooter() */

void __thiscall
ZombieAnimRig_IZombiePeashooter::~ZombieAnimRig_IZombiePeashooter
          (ZombieAnimRig_IZombiePeashooter *this)

{
  ~ZombieAnimRig_IZombiePeashooter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_IZombiePeashooter::~ZombieAnimRig_IZombiePeashooter() */

void __thiscall
ZombieAnimRig_IZombiePeashooter::~ZombieAnimRig_IZombiePeashooter
          (ZombieAnimRig_IZombiePeashooter *this)

{
  ~ZombieAnimRig_IZombiePeashooter(this + -0x10);
  return;
}


/* ZombieAnimRig_IZombiePeashooter::ZombieAnimRig_IZombiePeashooter() */

void __thiscall
ZombieAnimRig_IZombiePeashooter::ZombieAnimRig_IZombiePeashooter
          (ZombieAnimRig_IZombiePeashooter *this)

{
  ZombieAnimRig_ShooterBasic::ZombieAnimRig_ShooterBasic((ZombieAnimRig_ShooterBasic *)this);
  *(undefined ***)this = &PTR_GetClass_06622fe0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_IZombiePeashooter_066232f8;
  return;
}


/* ZombieAnimRig_IZombiePeashooter::StaticNew() */

ZombieAnimRig_IZombiePeashooter * ZombieAnimRig_IZombiePeashooter::StaticNew(void)

{
  ZombieAnimRig_IZombiePeashooter *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_IZombiePeashooter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IZombiePeashooter::StaticClassInit() */

void ZombieAnimRig_IZombiePeashooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_IZombiePeashooter");
    (*pcVar2)(plVar1,asStack_10,FUN_0341b02c,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_IZombiePeashooter::StaticGetClass() */

long * ZombieAnimRig_IZombiePeashooter::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_ShooterBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_IZombiePeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_IZombiePeashooter::GetClass() const */

long * ZombieAnimRig_IZombiePeashooter::GetClass(void)

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
  uVar2 = ZombieAnimRig_ShooterBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_IZombiePeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_IZombiePeashooter::getHeadLayerNames() */

void ZombieAnimRig_IZombiePeashooter::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06a9f9a8 & 1;
  if (((DAT_06a9f9a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9f9a8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06a9f8a0,"_peashooter_head");
    nop();
    std::string::string((string *)&DAT_06a9f8a8,"peashooter_spit");
    nop();
    std::string::string((string *)&DAT_06a9f8b0,"peashooter_lips_dimple");
    nop();
    std::string::string((string *)&DAT_06a9f8b8,"peashooter_mouth");
    nop();
    std::string::string((string *)&DAT_06a9f8c0,"peashooter_lips_closed");
    nop();
    std::string::string((string *)&DAT_06a9f8c8,"peashooter_lips");
    nop();
    std::string::string((string *)&DAT_06a9f8d0,"peashooter_head_leaf_stem");
    nop();
    std::string::string((string *)&DAT_06a9f8d8,"peashooter_head");
    nop();
    std::string::string((string *)&DAT_06a9f8e0,"peashooter_eye_lid_low");
    nop();
    std::string::string((string *)&DAT_06a9f8e8,"peashooter_eye_lid");
    nop();
    std::string::string((string *)&DAT_06a9f8f0,"peashooter_eye_closed_reverse");
    nop();
    std::string::string((string *)&DAT_06a9f8f8,"peashooter_eye_closed");
    nop();
    std::string::string((string *)&DAT_06a9f900,"peashooter_eye");
    nop();
    std::string::string((string *)&DAT_06a9f908,"peashooter_cheek");
    nop();
    std::string::string((string *)&DAT_06a9f910,"_zombie_head_idle");
    nop();
    std::string::string((string *)&DAT_06a9f918,"_zombie_head_walk");
    nop();
    std::string::string((string *)&DAT_06a9f920,"_zombie_head_eat");
    nop();
    __cxa_guard_release(&DAT_06a9f9a8);
    __cxa_atexit(FUN_03418dbc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06a9f9a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06a9f9a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06a9f6d8,(string *)&DAT_06a9f8a0,(allocator *)&DAT_06a9f928);
    __cxa_guard_release(&DAT_06a9f9a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06a9f6d8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06a9f6d8);
}

