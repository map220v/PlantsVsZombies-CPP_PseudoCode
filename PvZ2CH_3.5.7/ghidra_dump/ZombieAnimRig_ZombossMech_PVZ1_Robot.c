// Class: ZombieAnimRig_ZombossMech_PVZ1_Robot


/* ZombieAnimRig_ZombossMech_PVZ1_Robot::onPopAnimInitialized() */

void __thiscall
ZombieAnimRig_ZombossMech_PVZ1_Robot::onPopAnimInitialized
          (ZombieAnimRig_ZombossMech_PVZ1_Robot *this)

{
  ZombieAnimRig_ZombossMech::onPopAnimInitialized((ZombieAnimRig_ZombossMech *)this);
  (**(code **)(*(long *)this + 0x288))(this,3);
  return;
}


/* ZombieAnimRig_ZombossMech_PVZ1_Robot::~ZombieAnimRig_ZombossMech_PVZ1_Robot() */

void __thiscall
ZombieAnimRig_ZombossMech_PVZ1_Robot::~ZombieAnimRig_ZombossMech_PVZ1_Robot
          (ZombieAnimRig_ZombossMech_PVZ1_Robot *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0fe80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_PVZ1_Robot_06a101f0;
  ZombieAnimRig_ZombossMech::~ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  return;
}


/* non-virtual thunk to
   ZombieAnimRig_ZombossMech_PVZ1_Robot::~ZombieAnimRig_ZombossMech_PVZ1_Robot() */

void __thiscall
ZombieAnimRig_ZombossMech_PVZ1_Robot::~ZombieAnimRig_ZombossMech_PVZ1_Robot
          (ZombieAnimRig_ZombossMech_PVZ1_Robot *this)

{
  ~ZombieAnimRig_ZombossMech_PVZ1_Robot(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_PVZ1_Robot::~ZombieAnimRig_ZombossMech_PVZ1_Robot() */

void __thiscall
ZombieAnimRig_ZombossMech_PVZ1_Robot::~ZombieAnimRig_ZombossMech_PVZ1_Robot
          (ZombieAnimRig_ZombossMech_PVZ1_Robot *this)

{
  ~ZombieAnimRig_ZombossMech_PVZ1_Robot(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   ZombieAnimRig_ZombossMech_PVZ1_Robot::~ZombieAnimRig_ZombossMech_PVZ1_Robot() */

void __thiscall
ZombieAnimRig_ZombossMech_PVZ1_Robot::~ZombieAnimRig_ZombossMech_PVZ1_Robot
          (ZombieAnimRig_ZombossMech_PVZ1_Robot *this)

{
  ~ZombieAnimRig_ZombossMech_PVZ1_Robot(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombossMech_PVZ1_Robot::ZombieAnimRig_ZombossMech_PVZ1_Robot() */

void __thiscall
ZombieAnimRig_ZombossMech_PVZ1_Robot::ZombieAnimRig_ZombossMech_PVZ1_Robot
          (ZombieAnimRig_ZombossMech_PVZ1_Robot *this)

{
  ZombieAnimRig_ZombossMech::ZombieAnimRig_ZombossMech((ZombieAnimRig_ZombossMech *)this);
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR_GetClass_06a0fe80;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombossMech_PVZ1_Robot_06a101f0;
  return;
}


/* ZombieAnimRig_ZombossMech_PVZ1_Robot::StaticNew() */

ZombieAnimRig_ZombossMech_PVZ1_Robot * ZombieAnimRig_ZombossMech_PVZ1_Robot::StaticNew(void)

{
  ZombieAnimRig_ZombossMech_PVZ1_Robot *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_ZombossMech_PVZ1_Robot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_PVZ1_Robot::StaticClassInit() */

void ZombieAnimRig_ZombossMech_PVZ1_Robot::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombossMech_PVZ1_Robot");
    (*pcVar2)(plVar1,asStack_10,FUN_04f13ca0,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombossMech_PVZ1_Robot::StaticGetClass() */

long * ZombieAnimRig_ZombossMech_PVZ1_Robot::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_ZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_PVZ1_Robot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombossMech_PVZ1_Robot::GetClass() const */

long * ZombieAnimRig_ZombossMech_PVZ1_Robot::GetClass(void)

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
  uVar2 = ZombieAnimRig_ZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombossMech_PVZ1_Robot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_PVZ1_Robot::SetDamagePhase(ZombieAnimRig_ZombossMech::DamagePhase) */

void __thiscall
ZombieAnimRig_ZombossMech_PVZ1_Robot::SetDamagePhase
          (ZombieAnimRig_ZombossMech_PVZ1_Robot *this,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  string *psVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  *(int *)(this + 0x240) = param_2;
  do {
    puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x290))(this,iVar4);
    local_18 = FUN_04f16dcc(*puVar2);
    local_10 = FUN_04f16e1c(puVar2[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,param_2 == iVar4);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombossMech_PVZ1_Robot::getDamageLayerList(ZombieAnimRig_ZombossMech::DamagePhase)
   const */

void __thiscall
ZombieAnimRig_ZombossMech_PVZ1_Robot::getDamageLayerList(undefined8 param_1,undefined4 param_2)

{
  string *psVar1;
  int iVar2;
  string *psVar3;
  string *psVar4;
  allocator *paVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  psVar1 = ___stack_chk_guard;
  psVar3 = ___stack_chk_guard;
  switch(param_2) {
  case 0:
    uVar6 = DAT_06ba5270 & 1;
    if (((DAT_06ba5270 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba5270), iVar2 != 0)) {
      __cxa_guard_release(&DAT_06ba5270);
      __cxa_atexit(FUN_04f11ae0,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06ba54c8;
    if (((DAT_06ba54c8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ba54c8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ba54b0;
      goto switchD_04f1ced0_default;
    }
    psVar4 = (string *)&DAT_06ba5408;
    psVar3 = (string *)&DAT_06ba54b0;
    paVar5 = (allocator *)&DAT_06ba5408;
    break;
  case 1:
    uVar6 = DAT_06ba5380 & 1;
    if (((DAT_06ba5380 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba5380), iVar2 != 0)) {
      std::string::string((string *)&DAT_06ba5220,"hands_03");
      nop();
      std::string::string((string *)&DAT_06ba5228,"head_03");
      nop();
      std::string::string((string *)&DAT_06ba5230,"jiao_03");
      nop();
      std::string::string((string *)&DAT_06ba5238,"mouth_03");
      nop();
      __cxa_guard_release(&DAT_06ba5380);
      __cxa_atexit(FUN_04f11b70,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06ba51e8;
    if (((DAT_06ba51e8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ba51e8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ba5310;
      goto switchD_04f1ced0_default;
    }
    psVar4 = (string *)&DAT_06ba5220;
    psVar3 = (string *)&DAT_06ba5310;
    paVar5 = (allocator *)&DAT_06ba5240;
    break;
  case 2:
    uVar6 = DAT_06ba51f0 & 1;
    if (((DAT_06ba51f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba51f0), iVar2 != 0)) {
      std::string::string((string *)&DAT_06ba53c0,"hands_012");
      nop();
      std::string::string((string *)&DAT_06ba53c8,"head_02");
      nop();
      std::string::string((string *)&DAT_06ba53d0,"jiao_02");
      nop();
      std::string::string((string *)&DAT_06ba53d8,"mouth_02");
      nop();
      __cxa_guard_release(&DAT_06ba51f0);
      __cxa_atexit(FUN_04f11b34,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06ba53e8;
    if (((DAT_06ba53e8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ba53e8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ba51f8;
      goto switchD_04f1ced0_default;
    }
    psVar4 = (string *)&DAT_06ba53c0;
    psVar3 = (string *)&DAT_06ba51f8;
    paVar5 = (allocator *)&ZombieZombossMechPVZ1RobotProps::sClass;
    break;
  case 3:
    uVar6 = DAT_06ba5180 & 1;
    if (((DAT_06ba5180 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba5180), iVar2 != 0)) {
      std::string::string((string *)&DAT_06ba5330,"hands_01");
      nop();
      std::string::string((string *)&DAT_06ba5338,"head_01");
      nop();
      std::string::string((string *)&DAT_06ba5340,"jiao_01");
      nop();
      std::string::string((string *)&DAT_06ba5348,"mouth_01");
      nop();
      __cxa_guard_release(&DAT_06ba5180);
      __cxa_atexit(FUN_04f11af8,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06ba5400;
    if (((DAT_06ba5400 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ba5400), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ba51d0;
      goto switchD_04f1ced0_default;
    }
    psVar4 = (string *)&DAT_06ba5330;
    psVar3 = (string *)&DAT_06ba51d0;
    paVar5 = (allocator *)&DAT_06ba5350;
    break;
  case 4:
    uVar6 = DAT_06ba5328 & 1;
    if (((DAT_06ba5328 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba5328), iVar2 != 0)) {
      __cxa_guard_release(&DAT_06ba5328);
      __cxa_atexit(FUN_04f11ae4,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06ba5408;
    if (((DAT_06ba5408 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ba5408), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ba54d0;
      goto switchD_04f1ced0_default;
    }
    psVar4 = (string *)&sClass;
    psVar3 = (string *)&DAT_06ba54d0;
    paVar5 = (allocator *)psVar4;
    break;
  case 5:
    uVar6 = DAT_06ba5240 & 1;
    if (((DAT_06ba5240 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba5240), iVar2 != 0)) {
      __cxa_guard_release(&DAT_06ba5240);
      __cxa_atexit(FUN_04f11ae8,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06ba51c8;
    if (((DAT_06ba51c8 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ba51c8), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ba5138;
      goto switchD_04f1ced0_default;
    }
    psVar4 = (string *)&ZombieZombossMechPVZ1RobotProps::sClass;
    psVar3 = (string *)&DAT_06ba5138;
    paVar5 = (allocator *)&ZombieZombossMechPVZ1RobotProps::sClass;
    break;
  case 6:
    uVar6 = DAT_06ba54a8 & 1;
    if (((DAT_06ba54a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba54a8), iVar2 != 0)) {
      __cxa_guard_release(&DAT_06ba54a8);
      __cxa_atexit(FUN_04f11aec,uVar6,&DAT_06a88000);
    }
    puVar7 = &DAT_06ba5350;
    if (((DAT_06ba5350 & 1) != 0) || (iVar2 = __cxa_guard_acquire(&DAT_06ba5350), iVar2 == 0)) {
      psVar3 = (string *)&DAT_06ba5540;
      goto switchD_04f1ced0_default;
    }
    psVar4 = (string *)&DAT_06ba5488;
    psVar3 = (string *)&DAT_06ba5540;
    paVar5 = (allocator *)psVar4;
    break;
  default:
    goto switchD_04f1ced0_default;
  }
  std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
            (psVar3,psVar4,paVar5);
  __cxa_guard_release(puVar7);
  __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,psVar3,&DAT_06a88000);
switchD_04f1ced0_default:
  if (psVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(psVar3);
  }
  return;
}

