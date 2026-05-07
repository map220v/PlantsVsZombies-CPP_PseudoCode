// Class: EA::Allocator::StackAllocator


/* EA::Allocator::StackAllocator::Malloc(unsigned long, bool) */

long __thiscall
EA::Allocator::StackAllocator::Malloc(StackAllocator *this,ulong param_1,bool param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = param_1 + 7 & 0xfffffffffffffff8;
  if (param_2) {
    lVar3 = *(long *)(this + 0x18);
    lVar2 = lVar3 + uVar4;
    if (-1 < (*(long *)(this + 0x10) - lVar2) + -0x30) goto LAB_0537ad80;
    cVar1 = AllocateNewBlock(this,uVar4);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  lVar3 = *(long *)(this + 0x18);
  lVar2 = lVar3 + uVar4;
LAB_0537ad80:
  *(long *)(this + 0x18) = lVar2;
  *(long *)(this + 0x20) = lVar2;
  return lVar3;
}


/* EA::Allocator::StackAllocator::~StackAllocator() */

void __thiscall EA::Allocator::StackAllocator::~StackAllocator(StackAllocator *this)

{
  FreeObjectsEx(this,(void *)0x0);
  return;
}


/* EA::Allocator::StackAllocator::Init(void*, unsigned long, void* (*)(unsigned long, unsigned
   long*, void*), void (*)(void*, void*), void*) */

void __thiscall
EA::Allocator::StackAllocator::Init
          (StackAllocator *this,void *param_1,ulong param_2,
          _func_void_ptr_ulong_ulong_ptr_void_ptr *param_3,_func_void_void_ptr_void_ptr *param_4,
          void *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong local_8;
  
  if (*(long *)(this + 8) == 0) {
    if (param_3 != (_func_void_ptr_ulong_ulong_ptr_void_ptr *)0x0) {
      *(_func_void_ptr_ulong_ulong_ptr_void_ptr **)(this + 0x28) = param_3;
    }
    if (param_4 != (_func_void_void_ptr_void_ptr *)0x0) {
      *(_func_void_void_ptr_void_ptr **)(this + 0x30) = param_4;
    }
    *(void **)(this + 0x38) = param_5;
    if (param_2 == 0) {
      local_8 = *(ulong *)this;
    }
    else {
      local_8 = param_2;
      if (param_2 < 0x18) {
        local_8 = 0x18;
      }
    }
    if ((param_1 != (void *)0x0) ||
       (param_1 = (void *)(**(code **)(this + 0x28))(local_8,&local_8,param_5),
       param_1 != (undefined8 *)0x0)) {
      *(void **)(this + 8) = param_1;
      *(ulong *)(this + 0x10) = (long)param_1 + local_8;
      *(ulong *)((long)param_1 + 8) = (long)param_1 + local_8;
      puVar2 = (undefined8 *)((long)param_1 + 0x10);
      *(undefined8 *)param_1 = 0;
      *(undefined8 **)(this + 0x18) = puVar2;
      *(undefined8 **)(this + 0x20) = puVar2;
      if (((ulong)puVar2 & 7) != 0) {
        uVar1 = (long)param_1 + 0x17U & 0xfffffffffffffff8;
        *(ulong *)(this + 0x18) = uVar1;
        *(ulong *)(this + 0x20) = uVar1;
        return;
      }
    }
  }
  return;
}


/* EA::Allocator::StackAllocator::StackAllocator(void*, unsigned long, void* (*)(unsigned long,
   unsigned long*, void*), void (*)(void*, void*), void*) */

void __thiscall
EA::Allocator::StackAllocator::StackAllocator
          (StackAllocator *this,void *param_1,ulong param_2,
          _func_void_ptr_ulong_ulong_ptr_void_ptr *param_3,_func_void_void_ptr_void_ptr *param_4,
          void *param_5)

{
  code *pcVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0x2000;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  pcVar1 = param_3;
  if (param_3 == (_func_void_ptr_ulong_ulong_ptr_void_ptr *)0x0) {
    pcVar1 = DefaultStackAllocationFunction;
  }
  *(code **)(this + 0x28) = pcVar1;
  pcVar1 = param_4;
  if (param_4 == (_func_void_void_ptr_void_ptr *)0x0) {
    pcVar1 = DefaultStackFreeFunction;
  }
  *(code **)(this + 0x30) = pcVar1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if (param_2 == 0xffffffffffffffff) {
    return;
  }
  Init(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


/* EA::Allocator::StackAllocator::GetMemoryUsage() */

long __thiscall EA::Allocator::StackAllocator::GetMemoryUsage(StackAllocator *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  lVar1 = *(long *)(this + 0x20) - (long)(plVar2 + 2);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    lVar1 = lVar1 + (plVar2[1] - (long)(plVar2 + 2));
  }
  return lVar1;
}


/* EA::Allocator::StackAllocator::ValidateAddress(void const*, int) const */

void * __thiscall
EA::Allocator::StackAllocator::ValidateAddress(StackAllocator *this,void *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  plVar1 = (long *)lVar2;
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return (void *)0x0;
    }
    if ((plVar1 + 2 <= param_1) && (param_1 < (void *)plVar1[1])) break;
    plVar1 = (long *)*plVar1;
  }
  if (((long *)lVar2 == plVar1) && (param_2 != -1)) {
    if (*(void **)(lVar2 + 8) <= param_1) {
      param_1 = (void *)0x0;
    }
    return param_1;
  }
  return param_1;
}


/* EA::Allocator::StackAllocator::CompareAddresses(void const*, void const*) */

uint __thiscall
EA::Allocator::StackAllocator::CompareAddresses(StackAllocator *this,void *param_1,void *param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    iVar4 = 0;
    iVar3 = -1;
    iVar5 = 0;
    do {
      if ((plVar2 + 2 <= param_1) && (param_1 < (void *)plVar2[1])) {
        iVar5 = iVar3;
      }
      if ((plVar2 + 2 <= param_2) && (param_2 < (void *)plVar2[1])) {
        iVar4 = iVar3;
      }
      plVar2 = (long *)*plVar2;
      iVar3 = iVar3 + -1;
    } while ((plVar2 != (long *)0x0) && ((iVar4 == 0 || (iVar5 == 0))));
    if (iVar5 != iVar4) {
      uVar1 = 0xffffffff;
      if (iVar4 <= iVar5) {
        uVar1 = 1;
      }
      return uVar1;
    }
  }
  if (param_1 < param_2) {
    return 0xffffffff;
  }
  return (uint)(param_2 < param_1);
}


/* EA::Allocator::StackAllocator::ValidateHeap(EA::Allocator::StackAllocator::HeapValidationLevel)
    */

undefined4 EA::Allocator::StackAllocator::ValidateHeap(StackAllocator *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 == (long *)0x0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 1;
    do {
      lVar2 = ValidateAddress(param_1,plVar4,-1);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      lVar2 = ValidateAddress(param_1,(void *)plVar4[1],-1);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      if ((void *)plVar4[2] < (void *)plVar4[1]) {
        uVar3 = 0;
      }
      lVar2 = ValidateAddress(param_1,(void *)plVar4[2],0);
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      if ((void *)*plVar4 == (void *)0x0) {
        return uVar3;
      }
      iVar1 = CompareAddresses(param_1,plVar4,(void *)*plVar4);
      if (iVar1 < 0) {
        uVar3 = 0;
      }
      iVar1 = CompareAddresses(param_1,(void *)plVar4[1],*(void **)(*plVar4 + 8));
      plVar4 = (long *)*plVar4;
      if (iVar1 < 0) {
        uVar3 = 0;
      }
    } while (plVar4 != (long *)0x0);
  }
  return uVar3;
}


/* EA::Allocator::StackAllocator::GetBlockForAddress(void const*) */

void __thiscall
EA::Allocator::StackAllocator::GetBlockForAddress(StackAllocator *this,void *param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(this + 8);
      (plVar1 != (long *)0x0 && ((param_1 < plVar1 + 2 || ((void *)plVar1[1] < param_1))));
      plVar1 = (long *)*plVar1) {
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Allocator::StackAllocator::AllocateNewBlock(unsigned long) */

void __thiscall EA::Allocator::StackAllocator::AllocateNewBlock(StackAllocator *this,ulong param_1)

{
  undefined8 *puVar1;
  undefined8 *__dest;
  undefined8 uVar2;
  ulong __n;
  ulong local_10;
  long local_8;
  
  __n = *(long *)(this + 0x20) - *(long *)(this + 0x18);
  local_10 = param_1 + 0x1008 + __n + (__n >> 2);
  local_8 = ___stack_chk_guard;
  if (local_10 < 0x2000) {
    local_10 = 0x2000;
  }
  puVar1 = (undefined8 *)(**(code **)(this + 0x28))(local_10,&local_10,*(undefined8 *)(this + 0x38))
  ;
  uVar2 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    __dest = puVar1 + 2;
    *puVar1 = *(undefined8 *)(this + 8);
    *(undefined8 **)(this + 8) = puVar1;
    puVar1[1] = (long)puVar1 + local_10;
    *(ulong *)(this + 0x10) = (long)puVar1 + local_10;
    if (((ulong)__dest & 7) != 0) {
      __dest = (undefined8 *)((long)puVar1 + 0x17U & 0xfffffffffffffff8);
    }
    if (((__dest != (undefined8 *)0x0) && (__n != 0)) && (*(void **)(this + 0x18) != (void *)0x0)) {
      __dest = memcpy(__dest,*(void **)(this + 0x18),__n);
    }
    *(undefined8 **)(this + 0x18) = __dest;
    *(ulong *)(this + 0x20) = (long)__dest + __n;
    uVar2 = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* EA::Allocator::StackAllocator::Realloc(void*, unsigned long, bool) */

void * __thiscall
EA::Allocator::StackAllocator::Realloc
          (StackAllocator *this,void *param_1,ulong param_2,bool param_3)

{
  long lVar1;
  void *pvVar2;
  size_t __n;
  
  if (param_1 == (void *)0x0) {
    pvVar2 = (void *)Malloc(this,param_2,param_3);
    return pvVar2;
  }
  if (param_2 != 0) {
    lVar1 = GetBlockForAddress(this,param_1);
    lVar1 = *(long *)(lVar1 + 8);
    pvVar2 = (void *)Malloc(this,param_2,param_3);
    if (pvVar2 != (void *)0x0) {
      __n = lVar1 - (long)param_1;
      if (param_2 < __n) {
        __n = param_2;
      }
      memcpy(pvVar2,param_1,__n);
    }
    return pvVar2;
  }
  return (void *)0x0;
}


/* EA::Allocator::StackAllocator::MallocAligned(unsigned long, unsigned long, unsigned long, bool)
    */

long __thiscall
EA::Allocator::StackAllocator::MallocAligned
          (StackAllocator *this,ulong param_1,ulong param_2,ulong param_3,bool param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = param_2 - 1 | 7;
  lVar1 = uVar4 + 1;
  lVar2 = uVar4 + param_3;
  uVar6 = -lVar1;
  uVar4 = param_1 + 7 & 0xfffffffffffffff8;
  lVar5 = (*(long *)(this + 0x18) + lVar2 & uVar6) - param_3;
  if ((param_4) && (*(ulong *)(this + 0x10) < lVar5 + uVar4 + 0x30)) {
    cVar3 = AllocateNewBlock(this,uVar4 + param_3 + lVar1);
    if (cVar3 == '\0') {
      return 0;
    }
    lVar5 = (*(long *)(this + 0x18) + lVar2 & uVar6) - param_3;
  }
  *(ulong *)(this + 0x18) = lVar5 + uVar4;
  *(ulong *)(this + 0x20) = lVar5 + uVar4;
  return lVar5;
}


/* EA::Allocator::StackAllocator::FreeObjectsEx(void const*) */

void __thiscall EA::Allocator::StackAllocator::FreeObjectsEx(StackAllocator *this,void *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  plVar6 = (long *)*(long *)(this + 8);
  do {
    plVar2 = plVar6;
    if (plVar2 == (long *)0x0) {
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      return;
    }
    puVar1 = plVar2 + 2;
    if ((puVar1 <= param_1) && (pvVar3 = (void *)plVar2[1], param_1 < pvVar3)) {
      *(void **)(this + 0x18) = param_1;
      *(void **)(this + 0x20) = param_1;
      *(long **)(this + 8) = plVar2;
      *(void **)(this + 0x10) = pvVar3;
      return;
    }
    puVar4 = *(undefined8 **)(this + 0x40);
    if ((((puVar4 != (undefined8 *)0x0) && (puVar1 <= (undefined8 *)puVar4[1])) &&
        (puVar5 = (undefined8 *)plVar2[1], (undefined8 *)puVar4[1] < puVar5 && puVar1 <= puVar4)) &&
       (puVar4 < puVar5)) {
      while ((puVar4 = (undefined8 *)*puVar4, puVar4 != (undefined8 *)0x0 &&
             (puVar1 <= (undefined8 *)puVar4[1]))) {
        if ((puVar5 <= (undefined8 *)puVar4[1] || puVar4 < puVar1) || (puVar5 <= puVar4)) break;
      }
      *(undefined8 **)(this + 0x40) = puVar4;
    }
    plVar6 = (long *)*plVar2;
    if (*(code **)(this + 0x30) != (code *)0x0) {
      (**(code **)(this + 0x30))(plVar2,*(undefined8 *)(this + 0x38));
    }
  } while( true );
}


/* EA::Allocator::StackAllocator::Shutdown() */

void __thiscall EA::Allocator::StackAllocator::Shutdown(StackAllocator *this)

{
  FreeObjectsEx(this,(void *)0x0);
  return;
}

