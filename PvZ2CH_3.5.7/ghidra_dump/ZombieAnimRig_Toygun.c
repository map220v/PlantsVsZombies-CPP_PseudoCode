// Class: ZombieAnimRig_Toygun


/* ZombieAnimRig_Toygun::onAnimStopped() */

void ZombieAnimRig_Toygun::onAnimStopped(void)

{
  int iVar1;
  long in_x0;
  RtInvokeVariant *pRVar2;
  
  if (*(int *)(in_x0 + 0x210) != 8) {
    nop();
    return;
  }
  iVar1 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(in_x0 + 0x240));
  if (iVar1 == 0) {
    return;
  }
  pRVar2 = (RtInvokeVariant *)
           RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                     ((RtReflectionDelegate<Sexy::Delegate0> *)(in_x0 + 0x240));
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
  return;
}


/* ZombieAnimRig_Toygun::onPopAnimCommand(float, std::string const&, std::string const&) */

void ZombieAnimRig_Toygun::onPopAnimCommand(float param_1,string *param_2,string *param_3)

{
  bool bVar1;
  RtInvokeVariant *pRVar2;
  
  bVar1 = std::operator==(param_3,"throw");
  if (!bVar1) {
    return;
  }
  pRVar2 = (RtInvokeVariant *)
           RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                     ((RtReflectionDelegate<Sexy::Delegate0> *)(param_2 + 0x288));
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar2);
  return;
}


/* ZombieAnimRig_Toygun::~ZombieAnimRig_Toygun() */

void __thiscall ZombieAnimRig_Toygun::~ZombieAnimRig_Toygun(ZombieAnimRig_Toygun *this)

{
  *(undefined ***)this = &PTR_GetClass_0693aa70;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Toygun_0693ace8;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x288));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x240));
  ZombieAnimRig_PirateCaptain::~ZombieAnimRig_PirateCaptain((ZombieAnimRig_PirateCaptain *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Toygun::~ZombieAnimRig_Toygun() */

void __thiscall ZombieAnimRig_Toygun::~ZombieAnimRig_Toygun(ZombieAnimRig_Toygun *this)

{
  ~ZombieAnimRig_Toygun(this + -0x10);
  return;
}


/* ZombieAnimRig_Toygun::~ZombieAnimRig_Toygun() */

void __thiscall ZombieAnimRig_Toygun::~ZombieAnimRig_Toygun(ZombieAnimRig_Toygun *this)

{
  ~ZombieAnimRig_Toygun(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Toygun::~ZombieAnimRig_Toygun() */

void __thiscall ZombieAnimRig_Toygun::~ZombieAnimRig_Toygun(ZombieAnimRig_Toygun *this)

{
  ~ZombieAnimRig_Toygun(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Toygun::StaticClassInit() */

void ZombieAnimRig_Toygun::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Toygun");
    (*pcVar2)(plVar1,asStack_10,FUN_04a74d7c,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Toygun::StaticGetClass() */

long * ZombieAnimRig_Toygun::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_PirateCaptain::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Toygun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Toygun::GetClass() const */

long * ZombieAnimRig_Toygun::GetClass(void)

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
  uVar2 = ZombieAnimRig_PirateCaptain::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Toygun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Toygun::PlayPowerAnim(RtReflectionDelegate<Sexy::Delegate0>,
   RtReflectionDelegate<Sexy::Delegate0>) */

void __thiscall
ZombieAnimRig_Toygun::PlayPowerAnim
          (ZombieAnimRig_Toygun *this,RtReflectionDelegate *param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  code *pcVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_40,"attack");
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


/* ZombieAnimRig_Toygun::ZombieAnimRig_Toygun() */

void __thiscall ZombieAnimRig_Toygun::ZombieAnimRig_Toygun(ZombieAnimRig_Toygun *this)

{
  ZombieAnimRig_PirateCaptain::ZombieAnimRig_PirateCaptain((ZombieAnimRig_PirateCaptain *)this);
  *(undefined ***)this = &PTR_GetClass_0693aa70;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Toygun_0693ace8;
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x240));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x288));
  return;
}


/* ZombieAnimRig_Toygun::StaticNew() */

ZombieAnimRig_Toygun * ZombieAnimRig_Toygun::StaticNew(void)

{
  ZombieAnimRig_Toygun *this;
  
  this = ::operator_new(0x2d0);
  ZombieAnimRig_Toygun(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Toygun::getHeadLayerNames() */

void ZombieAnimRig_Toygun::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b7dc10 & 1;
  if (((DAT_06b7dc10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7dc10), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b7dbf0,"zombie_capt_skull");
    nop();
    std::string::string((string *)&DAT_06b7dbf8,"zombie_capt_skull2");
    nop();
    std::string::string((string *)&DAT_06b7dc00,"zombie_capt_jaw");
    nop();
    __cxa_guard_release(&DAT_06b7dc10);
    __cxa_atexit(FUN_04a745fc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b7dbd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7dbd8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b7db78,(string *)&DAT_06b7dbf0,(allocator *)&DAT_06b7dc08);
    __cxa_guard_release(&DAT_06b7dbd8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b7db78,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b7db78);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Toygun::getArmLayerNames() */

void ZombieAnimRig_Toygun::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b7dc18 & 1;
  if (((DAT_06b7dc18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7dc18), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b7db48,"zombie_capt_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b7db50,"zombie_capt_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b7db58,"zombie_capt_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b7dc18);
    __cxa_atexit(FUN_04a74630,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b7db40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7db40), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b7dc20,(string *)&DAT_06b7db48,(allocator *)&DAT_06b7db60);
    __cxa_guard_release(&DAT_06b7db40);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b7dc20,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b7dc20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Toygun::getArmReplacementPairNames() */

void ZombieAnimRig_Toygun::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b7dc38 & 1;
  if (((DAT_06b7dc38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7dc38), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b7db28,"zombie_capt_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b7db30,"zombie_capt_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b7dc38);
    __cxa_atexit(FUN_04a74664,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b7dc48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b7dc48), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b7dbc0,(string *)&DAT_06b7db28,(allocator *)&ZombieToygun::sClass);
    __cxa_guard_release(&DAT_06b7dc48);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b7dbc0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b7dbc0);
}

