// Class: ZombieAnimRig_Seagull


/* ZombieAnimRig_Seagull::~ZombieAnimRig_Seagull() */

void __thiscall ZombieAnimRig_Seagull::~ZombieAnimRig_Seagull(ZombieAnimRig_Seagull *this)

{
  *(undefined ***)this = &PTR_GetClass_06873810;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Seagull_06873a88;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Seagull::~ZombieAnimRig_Seagull() */

void __thiscall ZombieAnimRig_Seagull::~ZombieAnimRig_Seagull(ZombieAnimRig_Seagull *this)

{
  ~ZombieAnimRig_Seagull(this + -0x10);
  return;
}


/* ZombieAnimRig_Seagull::~ZombieAnimRig_Seagull() */

void __thiscall ZombieAnimRig_Seagull::~ZombieAnimRig_Seagull(ZombieAnimRig_Seagull *this)

{
  ~ZombieAnimRig_Seagull(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Seagull::~ZombieAnimRig_Seagull() */

void __thiscall ZombieAnimRig_Seagull::~ZombieAnimRig_Seagull(ZombieAnimRig_Seagull *this)

{
  ~ZombieAnimRig_Seagull(this + -0x10);
  return;
}


/* ZombieAnimRig_Seagull::ZombieAnimRig_Seagull() */

void __thiscall ZombieAnimRig_Seagull::ZombieAnimRig_Seagull(ZombieAnimRig_Seagull *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06873810;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Seagull_06873a88;
  return;
}


/* ZombieAnimRig_Seagull::StaticNew() */

ZombieAnimRig_Seagull * ZombieAnimRig_Seagull::StaticNew(void)

{
  ZombieAnimRig_Seagull *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Seagull(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Seagull::StaticClassInit() */

void ZombieAnimRig_Seagull::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Seagull");
    (*pcVar2)(plVar1,asStack_10,FUN_0460d9bc,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Seagull::StaticGetClass() */

long * ZombieAnimRig_Seagull::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Seagull",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Seagull::GetClass() const */

long * ZombieAnimRig_Seagull::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Seagull",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Seagull::getHeadLayerNames() */

void ZombieAnimRig_Seagull::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18f58 & 1;
  if (((DAT_06b18f58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18f58), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18f78,"zombie_pirate_gull_skull");
    nop();
    std::string::string((string *)&DAT_06b18f80,"zombie_pirate_gull_jaw");
    nop();
    __cxa_guard_release(&DAT_06b18f58);
    __cxa_atexit(FUN_0460d748,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19058 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19058), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18f60,(string *)&DAT_06b18f78,(allocator *)&DAT_06b18f88);
    __cxa_guard_release(&DAT_06b19058);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18f60,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18f60);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Seagull::HideBird() */

void __thiscall ZombieAnimRig_Seagull::HideBird(ZombieAnimRig_Seagull *this)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  string *psVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = ___stack_chk_guard;
  uVar6 = DAT_06b19070 & 1;
  if (((DAT_06b19070 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b19070), iVar3 != 0)) {
    std::string::string((string *)&DAT_06b18fb8,"gull_bod");
    nop();
    std::string::string((string *)&DAT_06b18fc0,"gull_foot");
    nop();
    std::string::string((string *)&DAT_06b18fc8,"gull_head");
    nop();
    std::string::string((string *)&DAT_06b18fd0,"gull_leg");
    nop();
    std::string::string((string *)&DAT_06b18fd8,"gull_tail");
    nop();
    std::string::string((string *)&DAT_06b18fe0,"gull_wing_01");
    nop();
    std::string::string((string *)&DAT_06b18fe8,"gull_wing_02");
    nop();
    std::string::string((string *)&DAT_06b18ff0,"gull_wing_03");
    nop();
    std::string::string((string *)&DAT_06b18ff8,"gull_wing_04");
    nop();
    std::string::string((string *)&DAT_06b19000,"gull_wing_05");
    nop();
    std::string::string((string *)&DAT_06b19008,"gull_wing_06");
    nop();
    std::string::string((string *)&DAT_06b19010,"gull_wing_back1_butter");
    nop();
    std::string::string((string *)&DAT_06b19018,"gull_wing_back2_butter");
    nop();
    std::string::string((string *)&DAT_06b19020,"gull_wing_back3_butter");
    nop();
    std::string::string((string *)&DAT_06b19028,"gull_wing_back4_butter");
    nop();
    std::string::string((string *)&DAT_06b19030,"gull_wing_back5_butter");
    nop();
    std::string::string((string *)&DAT_06b19038,"gull_wing_back6_butter");
    nop();
    std::string::string((string *)&DAT_06b19040,"seagull_butter_01");
    nop();
    std::string::string((string *)&DAT_06b19048,"seagull_butter_02");
    nop();
    std::string::string((string *)&DAT_06b19050,"seagull_butter_03");
    nop();
    __cxa_guard_release(&DAT_06b19070);
    __cxa_atexit(FUN_0460d774,uVar6,&DAT_06a88000);
  }
  if (((DAT_06b19078 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b19078), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18f88,(string *)&DAT_06b18fb8,(allocator *)&DAT_06b19058);
    __cxa_guard_release(&DAT_06b19078);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18f88,
                 &DAT_06a88000);
  }
  uVar6 = 0;
  while( true ) {
    uVar1 = DAT_06b18f88;
    uVar5 = FUN_0460d7c0(DAT_06b18f88,DAT_06b18f90);
    if (uVar5 <= uVar6) break;
    psVar4 = (string *)FUN_0460d7cc(uVar1,uVar6);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,false);
    uVar6 = uVar6 + 1;
  }
  if (lVar2 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

