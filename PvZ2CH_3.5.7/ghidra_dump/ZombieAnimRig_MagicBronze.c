// Class: ZombieAnimRig_MagicBronze


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MagicBronze::PlayDebut(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_MagicBronze::PlayDebut(ZombieAnimRig_MagicBronze *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"props debut");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* ZombieAnimRig_MagicBronze::~ZombieAnimRig_MagicBronze() */

void __thiscall
ZombieAnimRig_MagicBronze::~ZombieAnimRig_MagicBronze(ZombieAnimRig_MagicBronze *this)

{
  *(undefined ***)this = &PTR_GetClass_068781a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MagicBronze_06878418;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MagicBronze::~ZombieAnimRig_MagicBronze() */

void __thiscall
ZombieAnimRig_MagicBronze::~ZombieAnimRig_MagicBronze(ZombieAnimRig_MagicBronze *this)

{
  ~ZombieAnimRig_MagicBronze(this + -0x10);
  return;
}


/* ZombieAnimRig_MagicBronze::~ZombieAnimRig_MagicBronze() */

void __thiscall
ZombieAnimRig_MagicBronze::~ZombieAnimRig_MagicBronze(ZombieAnimRig_MagicBronze *this)

{
  ~ZombieAnimRig_MagicBronze(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_MagicBronze::~ZombieAnimRig_MagicBronze() */

void __thiscall
ZombieAnimRig_MagicBronze::~ZombieAnimRig_MagicBronze(ZombieAnimRig_MagicBronze *this)

{
  ~ZombieAnimRig_MagicBronze(this + -0x10);
  return;
}


/* ZombieAnimRig_MagicBronze::ZombieAnimRig_MagicBronze() */

void __thiscall
ZombieAnimRig_MagicBronze::ZombieAnimRig_MagicBronze(ZombieAnimRig_MagicBronze *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068781a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_MagicBronze_06878418;
  return;
}


/* ZombieAnimRig_MagicBronze::StaticNew() */

ZombieAnimRig_MagicBronze * ZombieAnimRig_MagicBronze::StaticNew(void)

{
  ZombieAnimRig_MagicBronze *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_MagicBronze(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MagicBronze::StaticClassInit() */

void ZombieAnimRig_MagicBronze::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_MagicBronze");
    (*pcVar2)(plVar1,asStack_10,FUN_04617ee8,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_MagicBronze::StaticGetClass() */

long * ZombieAnimRig_MagicBronze::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_MagicBronze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_MagicBronze::GetClass() const */

long * ZombieAnimRig_MagicBronze::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_MagicBronze",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MagicBronze::PlaySummon(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_MagicBronze::PlaySummon(ZombieAnimRig_MagicBronze *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"call");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MagicBronze::PlayPull(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_MagicBronze::PlayPull(ZombieAnimRig_MagicBronze *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"skill");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MagicBronze::GetPullDuration() */

void __thiscall ZombieAnimRig_MagicBronze::GetPullDuration(ZombieAnimRig_MagicBronze *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"skill");
  uVar1 = PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_MagicBronze::getHeadLayerNames() */

void ZombieAnimRig_MagicBronze::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19e70 & 1;
  if (((DAT_06b19e70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19e70), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19ec0,"Zombie_gargantuar_head");
    nop();
    std::string::string((string *)&DAT_06b19ec8,"Zombie_gargantuar_jaw");
    nop();
    __cxa_guard_release(&DAT_06b19e70);
    __cxa_atexit(FUN_04617cc4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19e78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19e78), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19e90,(string *)&DAT_06b19ec0,(allocator *)&DAT_06b19ed0);
    __cxa_guard_release(&DAT_06b19e78);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19e90,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19e90);
}

