// Class: ZombieAnimRig_SummerGargantuar


/* ZombieAnimRig_SummerGargantuar::~ZombieAnimRig_SummerGargantuar() */

void __thiscall
ZombieAnimRig_SummerGargantuar::~ZombieAnimRig_SummerGargantuar
          (ZombieAnimRig_SummerGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_06877c20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SummerGargantuar_06877e98;
  ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SummerGargantuar::~ZombieAnimRig_SummerGargantuar() */

void __thiscall
ZombieAnimRig_SummerGargantuar::~ZombieAnimRig_SummerGargantuar
          (ZombieAnimRig_SummerGargantuar *this)

{
  ~ZombieAnimRig_SummerGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_SummerGargantuar::~ZombieAnimRig_SummerGargantuar() */

void __thiscall
ZombieAnimRig_SummerGargantuar::~ZombieAnimRig_SummerGargantuar
          (ZombieAnimRig_SummerGargantuar *this)

{
  ~ZombieAnimRig_SummerGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SummerGargantuar::~ZombieAnimRig_SummerGargantuar() */

void __thiscall
ZombieAnimRig_SummerGargantuar::~ZombieAnimRig_SummerGargantuar
          (ZombieAnimRig_SummerGargantuar *this)

{
  ~ZombieAnimRig_SummerGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_SummerGargantuar::ZombieAnimRig_SummerGargantuar() */

void __thiscall
ZombieAnimRig_SummerGargantuar::ZombieAnimRig_SummerGargantuar(ZombieAnimRig_SummerGargantuar *this)

{
  ZombieAnimRig_Gargantuar::ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_06877c20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SummerGargantuar_06877e98;
  return;
}


/* ZombieAnimRig_SummerGargantuar::StaticNew() */

ZombieAnimRig_SummerGargantuar * ZombieAnimRig_SummerGargantuar::StaticNew(void)

{
  ZombieAnimRig_SummerGargantuar *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_SummerGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SummerGargantuar::StaticClassInit() */

void ZombieAnimRig_SummerGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_SummerGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_0461739c,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_SummerGargantuar::StaticGetClass() */

long * ZombieAnimRig_SummerGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Gargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_SummerGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_SummerGargantuar::GetClass() const */

long * ZombieAnimRig_SummerGargantuar::GetClass(void)

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
  uVar2 = ZombieAnimRig_Gargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_SummerGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SummerGargantuar::getHeadLayerNames() */

void ZombieAnimRig_SummerGargantuar::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19e58 & 1;
  if (((DAT_06b19e58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19e58), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19dc8,"Zombie_gargantuar_head");
    nop();
    std::string::string((string *)&DAT_06b19dd0,"Zombie_gargantuar_jaw");
    nop();
    __cxa_guard_release(&DAT_06b19e58);
    __cxa_atexit(FUN_04616bb4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19d78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19d78), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19de8,(string *)&DAT_06b19dc8,(allocator *)&DAT_06b19dd8);
    __cxa_guard_release(&DAT_06b19d78);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19de8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19de8);
}

