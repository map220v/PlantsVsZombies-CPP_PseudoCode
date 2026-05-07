// Class: ZombieAnimRig_StrongBronze


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_StrongBronze::StaticClassInit() */

void ZombieAnimRig_StrongBronze::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_StrongBronze");
    (*pcVar2)(plVar1,asStack_10,FUN_046166a8,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_StrongBronze::StaticGetClass() */

long * ZombieAnimRig_StrongBronze::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_StrongBronze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_StrongBronze::GetClass() const */

long * ZombieAnimRig_StrongBronze::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_StrongBronze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_StrongBronze::~ZombieAnimRig_StrongBronze() */

void __thiscall
ZombieAnimRig_StrongBronze::~ZombieAnimRig_StrongBronze(ZombieAnimRig_StrongBronze *this)

{
  *(undefined ***)this = &PTR_GetClass_068776a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_StrongBronze_06877918;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_StrongBronze::~ZombieAnimRig_StrongBronze() */

void __thiscall
ZombieAnimRig_StrongBronze::~ZombieAnimRig_StrongBronze(ZombieAnimRig_StrongBronze *this)

{
  ~ZombieAnimRig_StrongBronze(this + -0x10);
  return;
}


/* ZombieAnimRig_StrongBronze::~ZombieAnimRig_StrongBronze() */

void __thiscall
ZombieAnimRig_StrongBronze::~ZombieAnimRig_StrongBronze(ZombieAnimRig_StrongBronze *this)

{
  ~ZombieAnimRig_StrongBronze(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_StrongBronze::~ZombieAnimRig_StrongBronze() */

void __thiscall
ZombieAnimRig_StrongBronze::~ZombieAnimRig_StrongBronze(ZombieAnimRig_StrongBronze *this)

{
  ~ZombieAnimRig_StrongBronze(this + -0x10);
  return;
}


/* ZombieAnimRig_StrongBronze::ZombieAnimRig_StrongBronze() */

void __thiscall
ZombieAnimRig_StrongBronze::ZombieAnimRig_StrongBronze(ZombieAnimRig_StrongBronze *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_StrongBronze)0x0;
  *(undefined ***)this = &PTR_GetClass_068776a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_StrongBronze_06877918;
  return;
}


/* ZombieAnimRig_StrongBronze::StaticNew() */

ZombieAnimRig_StrongBronze * ZombieAnimRig_StrongBronze::StaticNew(void)

{
  ZombieAnimRig_StrongBronze *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_StrongBronze(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_StrongBronze::becomeCrazy(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_StrongBronze::becomeCrazy
          (ZombieAnimRig_StrongBronze *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"crazy");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    this[0x240] = (ZombieAnimRig_StrongBronze)0x1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_StrongBronze::getHeadLayerNames() */

void ZombieAnimRig_StrongBronze::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19d18 & 1;
  if (((DAT_06b19d18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19d18), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19d48,"Zombie_gargantuar_head");
    nop();
    std::string::string((string *)&DAT_06b19d50,"Zombie_gargantuar_jaw");
    nop();
    __cxa_guard_release(&DAT_06b19d18);
    __cxa_atexit(FUN_04616510,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19d70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19d70), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19d20,(string *)&DAT_06b19d48,(allocator *)&DAT_06b19d58);
    __cxa_guard_release(&DAT_06b19d70);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19d20,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19d20);
}

