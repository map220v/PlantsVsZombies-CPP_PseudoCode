// Class: ZombieAnimRig_GeneralBase


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_GeneralBase::getRangedAttackAnimationName() */

void __thiscall
ZombieAnimRig_GeneralBase::getRangedAttackAnimationName(ZombieAnimRig_GeneralBase *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"TOSS");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_GeneralBase::ZombieAnimRig_GeneralBase() */

void __thiscall
ZombieAnimRig_GeneralBase::ZombieAnimRig_GeneralBase(ZombieAnimRig_GeneralBase *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06a0cc90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_GeneralBase_06a0cf18;
  return;
}


/* ZombieAnimRig_GeneralBase::~ZombieAnimRig_GeneralBase() */

void __thiscall
ZombieAnimRig_GeneralBase::~ZombieAnimRig_GeneralBase(ZombieAnimRig_GeneralBase *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0cc90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_GeneralBase_06a0cf18;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_GeneralBase::~ZombieAnimRig_GeneralBase() */

void __thiscall
ZombieAnimRig_GeneralBase::~ZombieAnimRig_GeneralBase(ZombieAnimRig_GeneralBase *this)

{
  ~ZombieAnimRig_GeneralBase(this + -0x10);
  return;
}


/* ZombieAnimRig_GeneralBase::~ZombieAnimRig_GeneralBase() */

void __thiscall
ZombieAnimRig_GeneralBase::~ZombieAnimRig_GeneralBase(ZombieAnimRig_GeneralBase *this)

{
  ~ZombieAnimRig_GeneralBase(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_GeneralBase::~ZombieAnimRig_GeneralBase() */

void __thiscall
ZombieAnimRig_GeneralBase::~ZombieAnimRig_GeneralBase(ZombieAnimRig_GeneralBase *this)

{
  ~ZombieAnimRig_GeneralBase(this + -0x10);
  return;
}


/* ZombieAnimRig_GeneralBase::StaticGetClass() */

long * ZombieAnimRig_GeneralBase::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_GeneralBase",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_GeneralBase::GetClass() const */

long * ZombieAnimRig_GeneralBase::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_GeneralBase",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_GeneralBase::StaticNew() */

ZombieAnimRig_GeneralBase * ZombieAnimRig_GeneralBase::StaticNew(void)

{
  ZombieAnimRig_GeneralBase *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_GeneralBase(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_GeneralBase::UpdateDamageLayers(int, float, int) */

void __thiscall
ZombieAnimRig_GeneralBase::UpdateDamageLayers
          (ZombieAnimRig_GeneralBase *this,int param_1,float param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  vector *pvVar7;
  long lVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)(**(code **)(*(long *)this + 0x270))();
  puVar5 = (undefined8 *)(**(code **)(*(long *)this + 0x268))(this);
  iVar3 = FUN_04f0427c(*puVar4,puVar4[1]);
  if (0 < iVar3) {
    lVar8 = 0;
    do {
      if (param_1 != (int)lVar8) {
        puVar6 = (undefined8 *)FUN_04f04290(*puVar5,lVar8);
        local_18 = FUN_04f047d4(*puVar6);
        local_10 = FUN_04f04824(puVar6[1]);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar2) {
          pvVar7 = (vector *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
          ;
          PopAnimRig::SetLayerVisibility((PopAnimRig *)this,pvVar7,false);
          std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                    ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
        }
      }
      lVar1 = lVar8 + 1;
      pvVar7 = (vector *)FUN_04f0429c(*puVar4,lVar8);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,pvVar7,param_1 == (int)lVar8);
      lVar8 = lVar1;
    } while ((int)lVar1 < iVar3);
    lVar8 = 0;
    if (param_3 == -1) {
      do {
        if (param_1 == (int)lVar8) {
          pvVar7 = (vector *)FUN_04f04290(*puVar5,(long)param_1);
          PopAnimRig::SetLayerVisibilityByPercent((PopAnimRig *)this,pvVar7,param_2);
        }
        lVar1 = lVar8 + 1;
        pvVar7 = (vector *)FUN_04f0429c(*puVar4,lVar8);
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,pvVar7,(int)lVar8 == param_1);
        lVar8 = lVar1;
      } while ((int)lVar1 < iVar3);
    }
    else {
      do {
        if (param_1 == (int)lVar8) {
          pvVar7 = (vector *)FUN_04f04290(*puVar5,(long)param_1);
          PopAnimRig::SetLayerVisibilityByIndex((PopAnimRig *)this,pvVar7,param_3);
        }
        lVar1 = lVar8 + 1;
        pvVar7 = (vector *)FUN_04f0429c(*puVar4,lVar8);
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,pvVar7,param_1 == (int)lVar8);
        lVar8 = lVar1;
      } while ((int)lVar1 < iVar3);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieAnimRig_GeneralBase::getDamageLayers() */

undefined * ZombieAnimRig_GeneralBase::getDamageLayers(void)

{
  int iVar1;
  
  if (((DAT_06ba4ed0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ba4ed0), iVar1 != 0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&DAT_06ba4f10);
    __cxa_guard_release(&DAT_06ba4ed0);
    __cxa_atexit(std::
                 vector<std::vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>,std::allocator<std::vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>>>
                 ::~vector,&DAT_06ba4f10,&DAT_06a88000);
    return &DAT_06ba4f10;
  }
  return &DAT_06ba4f10;
}


/* ZombieAnimRig_GeneralBase::getBaseLayers() */

undefined * ZombieAnimRig_GeneralBase::getBaseLayers(void)

{
  int iVar1;
  
  if (((DAT_06ba4ef0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ba4ef0), iVar1 != 0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&DAT_06ba4e20);
    __cxa_guard_release(&DAT_06ba4ef0);
    __cxa_atexit(std::
                 vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
                 ::~vector,&DAT_06ba4e20,&DAT_06a88000);
    return &DAT_06ba4e20;
  }
  return &DAT_06ba4e20;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_GeneralBase::getHeadLayerNames() */

void ZombieAnimRig_GeneralBase::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba4e50 & 1;
  if (((DAT_06ba4e50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4e50), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba4ed8,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06ba4ee0,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06ba4ee8,"zombie_pupil");
    nop();
    __cxa_guard_release(&DAT_06ba4e50);
    __cxa_atexit(FUN_04f04154,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba4e38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4e38), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba4e90,(string *)&DAT_06ba4ed8,(allocator *)&DAT_06ba4ef0);
    __cxa_guard_release(&DAT_06ba4e38);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba4e90,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba4e90);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_GeneralBase::getArmLayerNames() */

void ZombieAnimRig_GeneralBase::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba4eb8 & 1;
  if (((DAT_06ba4eb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4eb8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba4e40,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba4e48,"zombie_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06ba4eb8);
    __cxa_atexit(FUN_04f04188,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba4f40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4f40), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba4e58,(string *)&DAT_06ba4e40,(allocator *)&DAT_06ba4e50);
    __cxa_guard_release(&DAT_06ba4f40);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba4e58,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba4e58);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_GeneralBase::getArmReplacementPairNames() */

void ZombieAnimRig_GeneralBase::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba4ef8 & 1;
  if (((DAT_06ba4ef8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4ef8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba4ea8,"zombie_arms_outer_upper");
    nop();
    std::string::string((string *)&DAT_06ba4eb0,"treadmill_upper_arml_bone");
    nop();
    __cxa_guard_release(&DAT_06ba4ef8);
    __cxa_atexit(FUN_04f041b4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba4f00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba4f00), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba4f28,(string *)&DAT_06ba4ea8,(allocator *)&DAT_06ba4eb8);
    __cxa_guard_release(&DAT_06ba4f00);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba4f28,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba4f28);
}

