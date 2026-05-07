// Class: eastl::fixed_pool


/* eastl::fixed_pool::fixed_pool(void*, unsigned long, unsigned long, unsigned long, unsigned long)
    */

void __thiscall
eastl::fixed_pool::fixed_pool
          (fixed_pool *this,void *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  fixed_pool_base::fixed_pool_base((fixed_pool_base *)this,(void *)0x0);
  fixed_pool_base::init(this,(ulong)param_1,param_2,param_3,param_4);
  return;
}


/* eastl::fixed_pool::allocate() */

undefined8 * __thiscall eastl::fixed_pool::allocate(fixed_pool *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(this + 8);
    if (puVar2 != *(undefined8 **)(this + 0x10)) {
      *(long *)(this + 8) = (long)puVar2 + *(long *)(this + 0x18);
      return puVar2;
    }
  }
  else {
    *(undefined8 *)this = *puVar1;
  }
  return puVar1;
}

