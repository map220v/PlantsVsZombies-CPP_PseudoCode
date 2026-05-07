// Class: ZombieAnimRig_Gargantuar


/* ZombieAnimRig_Gargantuar::ZombieAnimRig_Gargantuar() */

void __thiscall ZombieAnimRig_Gargantuar::ZombieAnimRig_Gargantuar(ZombieAnimRig_Gargantuar *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06877960;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Gargantuar_06877bd8;
  return;
}


/* ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar() */

void __thiscall ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar(ZombieAnimRig_Gargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_06877960;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Gargantuar_06877bd8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar() */

void __thiscall ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar(ZombieAnimRig_Gargantuar *this)

{
  ~ZombieAnimRig_Gargantuar(this + -0x10);
  return;
}


/* ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar() */

void __thiscall ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar(ZombieAnimRig_Gargantuar *this)

{
  ~ZombieAnimRig_Gargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar() */

void __thiscall ZombieAnimRig_Gargantuar::~ZombieAnimRig_Gargantuar(ZombieAnimRig_Gargantuar *this)

{
  ~ZombieAnimRig_Gargantuar(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gargantuar::GetHeadParticleName() */

void __thiscall ZombieAnimRig_Gargantuar::GetHeadParticleName(ZombieAnimRig_Gargantuar *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"Gargantuar_Head_Particle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_Gargantuar::StaticNew() */

ZombieAnimRig_Gargantuar * ZombieAnimRig_Gargantuar::StaticNew(void)

{
  ZombieAnimRig_Gargantuar *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Gargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gargantuar::StaticClassInit() */

void ZombieAnimRig_Gargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Gargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_04616e84,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Gargantuar::StaticGetClass() */

long * ZombieAnimRig_Gargantuar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Gargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Gargantuar::GetClass() const */

long * ZombieAnimRig_Gargantuar::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Gargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gargantuar::ThrowingLittleZombie(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_Gargantuar::ThrowingLittleZombie
          (ZombieAnimRig_Gargantuar *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"FIRE");
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
    *(undefined4 *)(this + 0x210) = 8;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gargantuar::ThrowingLittleZombieFast(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_Gargantuar::ThrowingLittleZombieFast
          (ZombieAnimRig_Gargantuar *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"CONTINUOUS_FIRE");
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
    *(undefined4 *)(this + 0x210) = 8;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gargantuar::ThrowFastStandby(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_Gargantuar::ThrowFastStandby
          (ZombieAnimRig_Gargantuar *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"READY");
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
    *(undefined4 *)(this + 0x210) = 10;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gargantuar::WeakTime() */

void __thiscall ZombieAnimRig_Gargantuar::WeakTime(ZombieAnimRig_Gargantuar *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"STUN");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 9;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gargantuar::SetAmmoLayersVisibility(std::vector<std::string,
   std::allocator<std::string > > const&, bool) */

void __thiscall
ZombieAnimRig_Gargantuar::SetAmmoLayersVisibility
          (ZombieAnimRig_Gargantuar *this,vector *param_1,bool param_2)

{
  bool bVar1;
  undefined8 uVar2;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_046177bc(*(undefined8 *)param_1);
  local_10 = FUN_0461780c(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar2);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_20,param_2);
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Gargantuar::getHeadLayerNames() */

void ZombieAnimRig_Gargantuar::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19db0 & 1;
  if (((DAT_06b19db0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19db0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19e50,"Zombie_gargantuar_head");
    nop();
    __cxa_guard_release(&DAT_06b19db0);
    __cxa_atexit(FUN_04616ba8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b19da8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19da8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19d90,(string *)&DAT_06b19e50,(allocator *)&DAT_06b19e58);
    __cxa_guard_release(&DAT_06b19da8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19d90,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19d90);
}

