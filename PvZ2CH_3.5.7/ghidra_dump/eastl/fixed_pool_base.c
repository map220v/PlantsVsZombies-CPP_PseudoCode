// Class: eastl::fixed_pool_base


/* eastl::fixed_pool_base::fixed_pool_base(void*) */

void __thiscall eastl::fixed_pool_base::fixed_pool_base(fixed_pool_base *this,void *param_1)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(void **)this = param_1;
  *(void **)(this + 8) = param_1;
  *(void **)(this + 0x10) = param_1;
  return;
}


/* eastl::fixed_pool_base::init(void*, unsigned long, unsigned long, unsigned long, unsigned long)
    */

void eastl::fixed_pool_base::init
               (void *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 != 0) {
    uVar2 = -param_5;
    if (param_5 == 0) {
      param_5 = 1;
      uVar2 = 0xffffffffffffffff;
      *(ulong *)((long)param_1 + 8) = param_2;
    }
    else {
      lVar1 = param_2 + param_3;
      param_2 = (param_2 - 1) + param_5 & uVar2;
      *(ulong *)((long)param_1 + 8) = param_2;
      param_3 = lVar1 - param_2;
    }
    if (param_4 < 8) {
      param_4 = param_5 + 7 & uVar2;
    }
    uVar2 = 0;
    if (param_4 != 0) {
      uVar2 = param_3 / param_4;
    }
    *(ulong *)((long)param_1 + 0x18) = param_4;
    *(undefined8 *)param_1 = 0;
    *(ulong *)((long)param_1 + 0x10) = param_2 + uVar2 * param_4;
  }
  return;
}

