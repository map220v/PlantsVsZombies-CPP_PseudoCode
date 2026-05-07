// Class: ZombieAnimRig_EggShell


/* ZombieAnimRig_EggShell::~ZombieAnimRig_EggShell() */

void __thiscall ZombieAnimRig_EggShell::~ZombieAnimRig_EggShell(ZombieAnimRig_EggShell *this)

{
  *(undefined ***)this = &PTR_GetClass_068fa5d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EggShell_068fa8e8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EggShell::~ZombieAnimRig_EggShell() */

void __thiscall ZombieAnimRig_EggShell::~ZombieAnimRig_EggShell(ZombieAnimRig_EggShell *this)

{
  ~ZombieAnimRig_EggShell(this + -0x10);
  return;
}


/* ZombieAnimRig_EggShell::~ZombieAnimRig_EggShell() */

void __thiscall ZombieAnimRig_EggShell::~ZombieAnimRig_EggShell(ZombieAnimRig_EggShell *this)

{
  ~ZombieAnimRig_EggShell(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EggShell::~ZombieAnimRig_EggShell() */

void __thiscall ZombieAnimRig_EggShell::~ZombieAnimRig_EggShell(ZombieAnimRig_EggShell *this)

{
  ~ZombieAnimRig_EggShell(this + -0x10);
  return;
}


/* ZombieAnimRig_EggShell::ZombieAnimRig_EggShell() */

void __thiscall ZombieAnimRig_EggShell::ZombieAnimRig_EggShell(ZombieAnimRig_EggShell *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_068fa5d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EggShell_068fa8e8;
  return;
}


/* ZombieAnimRig_EggShell::StaticNew() */

ZombieAnimRig_EggShell * ZombieAnimRig_EggShell::StaticNew(void)

{
  ZombieAnimRig_EggShell *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_EggShell(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EggShell::StaticClassInit() */

void ZombieAnimRig_EggShell::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_EggShell");
    (*pcVar2)(plVar1,asStack_10,FUN_047fbcf0,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_EggShell::StaticGetClass() */

long * ZombieAnimRig_EggShell::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EggShell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_EggShell::GetClass() const */

long * ZombieAnimRig_EggShell::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EggShell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EggShell::SetLayerVisibilityForCurrentState() */

void __thiscall
ZombieAnimRig_EggShell::SetLayerVisibilityForCurrentState(ZombieAnimRig_EggShell *this)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  string *psVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  
  lVar2 = ___stack_chk_guard;
  ZombieAnimRig_Basic::SetLayerVisibilityForCurrentState((ZombieAnimRig_Basic *)this);
  uVar8 = DAT_06b28ba0 & 1;
  if (((DAT_06b28ba0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b28ba0), iVar4 != 0)) {
    std::string::string((string *)&DAT_06b28b70,"danke_xia3");
    nop();
    std::string::string((string *)&DAT_06b28b78,"danke_xia2");
    nop();
    std::string::string((string *)&DAT_06b28b80,"danke_xia1");
    nop();
    __cxa_guard_release(&DAT_06b28ba0);
    __cxa_atexit(FUN_047fb730,uVar8,&DAT_06a88000);
  }
  if (((DAT_06b28ca0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06b28ca0), iVar4 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28c10,(string *)&DAT_06b28b70,(allocator *)&DAT_06b28b88);
    __cxa_guard_release(&DAT_06b28ca0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28c10,
                 &DAT_06a88000);
  }
  iVar4 = FUN_047fb82c(DAT_06b28c10,DAT_06b28c18);
  cVar3 = (**(code **)(*(long *)this + 0x300))(this,3);
  if (0 < iVar4) {
    lVar7 = 0;
    if (cVar3 == '\0') {
      do {
        lVar1 = lVar7 + 1;
        psVar5 = (string *)FUN_047fb838(DAT_06b28c10,lVar7);
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,false);
        lVar7 = lVar1;
      } while ((int)lVar1 < iVar4);
    }
    else {
      do {
        psVar5 = (string *)FUN_047fb838(DAT_06b28c10,lVar7);
        iVar6 = (int)lVar7;
        lVar7 = lVar7 + 1;
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar5,*(int *)(this + 0x248) == iVar6);
      } while ((int)lVar7 < iVar4);
    }
  }
  if (lVar2 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EggShell::getHeadLayerNames() */

void ZombieAnimRig_EggShell::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28c88 & 1;
  if (((DAT_06b28c88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28c88), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28c90,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b28c98,"zombie_imp_jaw");
    nop();
    __cxa_guard_release(&DAT_06b28c88);
    __cxa_atexit(FUN_047fb764,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28c00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28c00), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28bc0,(string *)&DAT_06b28c90,(allocator *)&DAT_06b28ca0);
    __cxa_guard_release(&DAT_06b28c00);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28bc0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28bc0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EggShell::getArmLayerNames() */

void ZombieAnimRig_EggShell::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28b88 & 1;
  if (((DAT_06b28b88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28b88), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28bd8,"zombie_imp_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b28be0,"zombie_imp_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b28b88);
    __cxa_atexit(FUN_047fb790,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28b98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28b98), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28c30,(string *)&DAT_06b28bd8,(allocator *)&DAT_06b28be8);
    __cxa_guard_release(&DAT_06b28b98);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28c30,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28c30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EggShell::getArmReplacementPairNames() */

void ZombieAnimRig_EggShell::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28c28 & 1;
  if (((DAT_06b28c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28c28), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28c48,"zombie_imp_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b28c50,"zombie_imp_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b28c28);
    __cxa_atexit(FUN_047fb7bc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28c68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28c68), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28ba8,(string *)&DAT_06b28c48,(allocator *)&DAT_06b28c58);
    __cxa_guard_release(&DAT_06b28c68);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28ba8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28ba8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EggShell::getHelmetLayerNames() */

void ZombieAnimRig_EggShell::getHelmetLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b28c08 & 1;
  if (((DAT_06b28c08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28c08), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b28ca8,"head_danke3");
    nop();
    std::string::string((string *)&DAT_06b28cb0,"head_danke2");
    nop();
    std::string::string((string *)&DAT_06b28cb8,"head_danke1");
    nop();
    __cxa_guard_release(&DAT_06b28c08);
    __cxa_atexit(FUN_047fb7e8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b28b68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b28b68), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b28c70,(string *)&DAT_06b28ca8,
               (allocator *)&ZombieDinoPushEgg::sClass);
    __cxa_guard_release(&DAT_06b28b68);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b28c70,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b28c70);
}

