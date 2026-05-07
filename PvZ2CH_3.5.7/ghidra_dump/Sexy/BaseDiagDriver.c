// Class: Sexy::BaseDiagDriver


/* Sexy::BaseDiagDriver::GetInfoNumber(Sexy::IDiagDriver::EInfoNumberType) */

undefined1  [16] Sexy::BaseDiagDriver::GetInfoNumber(void)

{
  return ZEXT816(0);
}


/* Sexy::BaseDiagDriver::BaseDiagDriver() */

void __thiscall Sexy::BaseDiagDriver::BaseDiagDriver(BaseDiagDriver *this)

{
  IDiagDriver::IDiagDriver((IDiagDriver *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = &DAT_06a379b0;
  return;
}


/* Sexy::BaseDiagDriver::~BaseDiagDriver() */

void __thiscall Sexy::BaseDiagDriver::~BaseDiagDriver(BaseDiagDriver *this)

{
  *(undefined **)this = &DAT_06a379b0;
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
    return;
  }
  return;
}


/* Sexy::BaseDiagDriver::~BaseDiagDriver() */

void __thiscall Sexy::BaseDiagDriver::~BaseDiagDriver(BaseDiagDriver *this)

{
  ~BaseDiagDriver(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::BaseDiagDriver::EnsureInfoStringCapacity(unsigned long) */

void __thiscall Sexy::BaseDiagDriver::EnsureInfoStringCapacity(BaseDiagDriver *this,ulong param_1)

{
  void *pvVar1;
  
  if ((*(void **)(this + 8) == (void *)0x0) || (*(ulong *)(this + 0x10) < param_1)) {
    *(ulong *)(this + 0x10) = param_1;
    pvVar1 = realloc(*(void **)(this + 8),param_1 + 1);
    *(void **)(this + 8) = pvVar1;
  }
  return;
}


/* Sexy::BaseDiagDriver::GetInfoStringSafe(Sexy::IDiagDriver::EInfoStringType) */

long Sexy::BaseDiagDriver::GetInfoStringSafe(BaseDiagDriver *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)param_1 + 0x20))();
  if (lVar1 != 0) {
    return lVar1;
  }
  EnsureInfoStringCapacity(param_1,1);
  **(undefined1 **)(param_1 + 8) = 0;
  return *(long *)(param_1 + 8);
}

