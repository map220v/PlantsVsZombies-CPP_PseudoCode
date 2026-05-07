// Class: ZombieAnimRig_ChildrensdayGargantuar


/* ZombieAnimRig_ChildrensdayGargantuar::~ZombieAnimRig_ChildrensdayGargantuar() */

void __thiscall
ZombieAnimRig_ChildrensdayGargantuar::~ZombieAnimRig_ChildrensdayGargantuar
          (ZombieAnimRig_ChildrensdayGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_06877ee0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChildrensdayGargantuar_06878158;
  ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  return;
}


/* non-virtual thunk to
   ZombieAnimRig_ChildrensdayGargantuar::~ZombieAnimRig_ChildrensdayGargantuar() */

void __thiscall
ZombieAnimRig_ChildrensdayGargantuar::~ZombieAnimRig_ChildrensdayGargantuar
          (ZombieAnimRig_ChildrensdayGargantuar *this)

{
  ~ZombieAnimRig_ChildrensdayGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_ChildrensdayGargantuar::~ZombieAnimRig_ChildrensdayGargantuar() */

void __thiscall
ZombieAnimRig_ChildrensdayGargantuar::~ZombieAnimRig_ChildrensdayGargantuar
          (ZombieAnimRig_ChildrensdayGargantuar *this)

{
  ~ZombieAnimRig_ChildrensdayGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   ZombieAnimRig_ChildrensdayGargantuar::~ZombieAnimRig_ChildrensdayGargantuar() */

void __thiscall
ZombieAnimRig_ChildrensdayGargantuar::~ZombieAnimRig_ChildrensdayGargantuar
          (ZombieAnimRig_ChildrensdayGargantuar *this)

{
  ~ZombieAnimRig_ChildrensdayGargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_ChildrensdayGargantuar::ZombieAnimRig_ChildrensdayGargantuar() */

void __thiscall
ZombieAnimRig_ChildrensdayGargantuar::ZombieAnimRig_ChildrensdayGargantuar
          (ZombieAnimRig_ChildrensdayGargantuar *this)

{
  ZombieAnimRig_Gargantuar::ZombieAnimRig_Gargantuar((ZombieAnimRig_Gargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_06877ee0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ChildrensdayGargantuar_06878158;
  return;
}


/* ZombieAnimRig_ChildrensdayGargantuar::StaticNew() */

ZombieAnimRig_ChildrensdayGargantuar * ZombieAnimRig_ChildrensdayGargantuar::StaticNew(void)

{
  ZombieAnimRig_ChildrensdayGargantuar *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ChildrensdayGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayGargantuar::StaticClassInit() */

void ZombieAnimRig_ChildrensdayGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ChildrensdayGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_04617614,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ChildrensdayGargantuar::StaticGetClass() */

long * ZombieAnimRig_ChildrensdayGargantuar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ChildrensdayGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ChildrensdayGargantuar::GetClass() const */

long * ZombieAnimRig_ChildrensdayGargantuar::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_ChildrensdayGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ChildrensdayGargantuar::getHeadLayerNames() */

void ZombieAnimRig_ChildrensdayGargantuar::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19d88 & 1;
  if (((DAT_06b19d88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19d88), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19e10,"Zombie_gargantuar_head");
    nop();
    std::string::string((string *)&DAT_06b19e18,"Zombie_gargantuar_jaw");
    nop();
    __cxa_guard_release(&DAT_06b19d88);
    __cxa_atexit(FUN_04616be0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19d80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19d80), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19e28,(string *)&DAT_06b19e10,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b19d80);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19e28,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19e28);
}

