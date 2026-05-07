// Class: Sexy::AndroidDiagDriver


/* Sexy::AndroidDiagDriver::~AndroidDiagDriver() */

void __thiscall Sexy::AndroidDiagDriver::~AndroidDiagDriver(AndroidDiagDriver *this)

{
  *(undefined ***)this = &PTR__AndroidDiagDriver_06a35820;
  BaseDiagDriver::~BaseDiagDriver((BaseDiagDriver *)this);
  return;
}


/* Sexy::AndroidDiagDriver::~AndroidDiagDriver() */

void __thiscall Sexy::AndroidDiagDriver::~AndroidDiagDriver(AndroidDiagDriver *this)

{
  ~AndroidDiagDriver(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidDiagDriver::GetInfoString(Sexy::IDiagDriver::EInfoStringType) */

void __thiscall Sexy::AndroidDiagDriver::GetInfoString(AndroidDiagDriver *this,int param_2)

{
  ulong uVar1;
  char *__src;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    Set8BytesTo0(asStack_10);
    Android::Diag::GetHardwareModel(asStack_10);
  }
  else if (param_2 == 0) {
    Set8BytesTo0(asStack_10);
    Android::Diag::GetOSVersion(asStack_10);
  }
  else {
    if (param_2 != 2) {
      uVar2 = 0;
      goto LAB_052fb108;
    }
    Set8BytesTo0(asStack_10);
    Android::Diag::GetPrimaryMACAddress(asStack_10);
  }
  uVar1 = FUN_05474184(asStack_10);
  BaseDiagDriver::EnsureInfoStringCapacity((BaseDiagDriver *)this,uVar1);
  __src = (char *)FUN_0547429c(asStack_10);
  strcpy(*(char **)(this + 8),__src);
  uVar2 = *(undefined8 *)(this + 8);
  std::string::~string(asStack_10);
LAB_052fb108:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* Sexy::AndroidDiagDriver::GetInfoNumber(Sexy::IDiagDriver::EInfoNumberType) */

undefined1  [16] __thiscall Sexy::AndroidDiagDriver::GetInfoNumber(undefined8 param_1,int param_2)

{
  long lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 != 1) {
    dVar2 = 0.0;
    if (param_2 == 2) {
      lVar1 = AndroidAppDriver::GetMemoryUsed();
      dVar2 = (double)lVar1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar2;
    return auVar3;
  }
  lVar1 = AndroidAppDriver::GetMemoryAvailable();
  auVar4._0_8_ = (double)lVar1;
  auVar4._8_8_ = 0;
  return auVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidDiagDriver::ClearHardwareBreakpoint(void*) */

void __thiscall
Sexy::AndroidDiagDriver::ClearHardwareBreakpoint(AndroidDiagDriver *this,void *param_1)

{
  int iVar1;
  Condition *pCVar2;
  undefined8 uVar3;
  pthread_t pStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (void *)0x0) {
    pCVar2 = ::operator_new(0x5c);
    Condition::Condition(pCVar2);
    *(Condition **)((long)param_1 + 0x18) = pCVar2;
    *(undefined1 *)((long)param_1 + 0x24) = 1;
    iVar1 = pthread_create(&pStack_10,(pthread_attr_t *)0x0,FUN_052fb08c,param_1);
    if (iVar1 == 0) {
      Condition::Wait(*(Condition **)((long)param_1 + 0x18),0xffffffff);
      pCVar2 = *(Condition **)((long)param_1 + 0x18);
      if (pCVar2 != (Condition *)0x0) {
        Condition::~Condition(pCVar2);
        AK::FreeHook(pCVar2);
      }
      *(undefined8 *)((long)param_1 + 0x18) = 0;
      AK::FreeHook(param_1);
      uVar3 = 1;
      goto LAB_052fb270;
    }
  }
  uVar3 = 0;
LAB_052fb270:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidDiagDriver::SetHardwareBreakpoint(Sexy::IDiagDriver::EHardwareBreakpointType, void*,
   int) */

void __thiscall
Sexy::AndroidDiagDriver::SetHardwareBreakpoint
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  pthread_t pVar2;
  HWBRK *this;
  Condition *pCVar3;
  pthread_t pStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pVar2 = pthread_self();
  this = ::operator_new(0x28);
  HWBRK::HWBRK(this);
  *(undefined8 *)this = param_3;
  *(undefined4 *)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x14) = param_4;
  *(pthread_t *)(this + 8) = pVar2;
  pCVar3 = ::operator_new(0x5c);
  Condition::Condition(pCVar3);
  *(Condition **)(this + 0x18) = pCVar3;
  this[0x24] = (HWBRK)0x0;
  iVar1 = pthread_create(&pStack_10,(pthread_attr_t *)0x0,FUN_052fb08c,this);
  if (iVar1 == 0) {
    Condition::Wait(*(Condition **)(this + 0x18),0xffffffff);
    pCVar3 = *(Condition **)(this + 0x18);
    if (pCVar3 != (Condition *)0x0) {
      Condition::~Condition(pCVar3);
      AK::FreeHook(pCVar3);
    }
    *(undefined8 *)(this + 0x18) = 0;
    if (this[0x25] == (HWBRK)0x0) {
      AK::FreeHook(this);
      this = (HWBRK *)0x0;
    }
  }
  else {
    this = (HWBRK *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* Sexy::AndroidDiagDriver::AndroidDiagDriver() */

void __thiscall Sexy::AndroidDiagDriver::AndroidDiagDriver(AndroidDiagDriver *this)

{
  BaseDiagDriver::BaseDiagDriver((BaseDiagDriver *)this);
  *(undefined ***)this = &PTR__AndroidDiagDriver_06a35820;
  return;
}

