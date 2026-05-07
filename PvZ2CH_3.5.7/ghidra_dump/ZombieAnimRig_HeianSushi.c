// Class: ZombieAnimRig_HeianSushi


/* ZombieAnimRig_HeianSushi::~ZombieAnimRig_HeianSushi() */

void __thiscall ZombieAnimRig_HeianSushi::~ZombieAnimRig_HeianSushi(ZombieAnimRig_HeianSushi *this)

{
  *(undefined ***)this = &PTR_GetClass_06888620;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_HeianSushi_068888a0;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x288));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x240));
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_HeianSushi::~ZombieAnimRig_HeianSushi() */

void __thiscall ZombieAnimRig_HeianSushi::~ZombieAnimRig_HeianSushi(ZombieAnimRig_HeianSushi *this)

{
  ~ZombieAnimRig_HeianSushi(this + -0x10);
  return;
}


/* ZombieAnimRig_HeianSushi::~ZombieAnimRig_HeianSushi() */

void __thiscall ZombieAnimRig_HeianSushi::~ZombieAnimRig_HeianSushi(ZombieAnimRig_HeianSushi *this)

{
  ~ZombieAnimRig_HeianSushi(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_HeianSushi::~ZombieAnimRig_HeianSushi() */

void __thiscall ZombieAnimRig_HeianSushi::~ZombieAnimRig_HeianSushi(ZombieAnimRig_HeianSushi *this)

{
  ~ZombieAnimRig_HeianSushi(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianSushi::StaticClassInit() */

void ZombieAnimRig_HeianSushi::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_HeianSushi");
    (*pcVar2)(plVar1,asStack_10,FUN_04651064,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_HeianSushi::StaticGetClass() */

long * ZombieAnimRig_HeianSushi::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_HeianSushi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_HeianSushi::GetClass() const */

long * ZombieAnimRig_HeianSushi::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_HeianSushi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianSushi::PlayTossAnim(RtReflectionDelegate<Sexy::Delegate0>,
   RtReflectionDelegate<Sexy::Delegate0>) */

void __thiscall
ZombieAnimRig_HeianSushi::PlayTossAnim
          (ZombieAnimRig_HeianSushi *this,RtReflectionDelegate *param_2,
          RtReflectionDelegate *param_3)

{
  int iVar1;
  code *pcVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_40,"toss");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = (*pcVar2)(this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 8;
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x240),param_2);
    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x288),param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* ZombieAnimRig_HeianSushi::ZombieAnimRig_HeianSushi() */

void __thiscall ZombieAnimRig_HeianSushi::ZombieAnimRig_HeianSushi(ZombieAnimRig_HeianSushi *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06888620;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_HeianSushi_068888a0;
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x240));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x288));
  return;
}


/* ZombieAnimRig_HeianSushi::StaticNew() */

ZombieAnimRig_HeianSushi * ZombieAnimRig_HeianSushi::StaticNew(void)

{
  ZombieAnimRig_HeianSushi *this;
  
  this = ::operator_new(0x2d0);
  ZombieAnimRig_HeianSushi(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianSushi::getHeadLayerNames() */

void ZombieAnimRig_HeianSushi::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1cb40 & 1;
  if (((DAT_06b1cb40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1cb40), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1ca70,"zombie_octo_skull");
    nop();
    std::string::string((string *)&DAT_06b1ca78,"zombie_octo_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1cb40);
    __cxa_atexit(FUN_0464fba0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ca80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ca80), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1cb58,(string *)&DAT_06b1ca70,(allocator *)&DAT_06b1ca80);
    __cxa_guard_release(&DAT_06b1ca80);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1cb58,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1cb58);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianSushi::getArmLayerNames() */

void ZombieAnimRig_HeianSushi::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1cbb0 & 1;
  if (((DAT_06b1cbb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1cbb0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1ca30,"zombie_octo_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1ca38,"zombie_octo_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b1ca40,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1ca48,"zombie_hand_outer_02");
    nop();
    __cxa_guard_release(&DAT_06b1cbb0);
    __cxa_atexit(FUN_0464fbcc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1cba8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1cba8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1cb90,(string *)&DAT_06b1ca30,
               (allocator *)&ZombieHeianSushiProps::sClass);
    __cxa_guard_release(&DAT_06b1cba8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1cb90,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1cb90);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_HeianSushi::getArmReplacementPairNames() */

void ZombieAnimRig_HeianSushi::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1caf8 & 1;
  if (((DAT_06b1caf8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1caf8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1cab8,"zombie_octo_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1cac0,"zombie_octo_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b1caf8);
    __cxa_atexit(FUN_0464fc08,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1cab0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1cab0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1ca88,(string *)&DAT_06b1cab8,(allocator *)&DAT_06b1cac8);
    __cxa_guard_release(&DAT_06b1cab0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1ca88,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1ca88);
}

