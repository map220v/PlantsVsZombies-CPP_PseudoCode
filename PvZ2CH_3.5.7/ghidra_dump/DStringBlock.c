// Class: DStringBlock


/* DStringBlock::~DStringBlock() */

void __thiscall DStringBlock::~DStringBlock(DStringBlock *this)

{
  if (*(void **)(this + 0x10) != (void *)0x0) {
    free(*(void **)(this + 0x10));
    return;
  }
  return;
}


/* DStringBlock::retain() */

void __thiscall DStringBlock::retain(DStringBlock *this)

{
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  return;
}


/* DStringBlock::release() */

void __thiscall DStringBlock::release(DStringBlock *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x18);
  *(int *)(this + 0x18) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    ~DStringBlock(this);
    AK::FreeHook(this);
    return;
  }
  return;
}


/* DStringBlock::resetMemory(unsigned long) */

void __thiscall DStringBlock::resetMemory(DStringBlock *this,ulong param_1)

{
  void *pvVar1;
  ulong uVar2;
  
  if ((*(ulong *)this <= param_1) &&
     (uVar2 = param_1 + 0xff & 0xffffffffffffff00, *(ulong *)this <= uVar2)) {
    if (*(void **)(this + 0x10) == (void *)0x0) {
      *(ulong *)(this + 8) = param_1;
      *(ulong *)this = param_1;
      pvVar1 = malloc(param_1 + 1);
      *(void **)(this + 0x10) = pvVar1;
    }
    else {
      *(ulong *)this = uVar2;
      pvVar1 = realloc(*(void **)(this + 0x10),uVar2 + 1);
      *(void **)(this + 0x10) = pvVar1;
    }
  }
  return;
}


/* DStringBlock::DStringBlock(char const*) */

void __thiscall DStringBlock::DStringBlock(DStringBlock *this,char *param_1)

{
  size_t __n;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  if (param_1 != (char *)0x0) {
    __n = strlen(param_1);
    resetMemory(this,__n);
    if (__n != 0) {
      memcpy(*(void **)(this + 0x10),param_1,__n);
    }
    *(undefined1 *)(*(long *)(this + 0x10) + __n) = 0;
    *(size_t *)(this + 8) = __n;
    *(size_t *)this = __n;
  }
  return;
}


/* DStringBlock::DStringBlock(char const*, unsigned long) */

void __thiscall DStringBlock::DStringBlock(DStringBlock *this,char *param_1,ulong param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  if (param_1 != (char *)0x0) {
    resetMemory(this,param_2);
    if (param_2 != 0) {
      memcpy(*(void **)(this + 0x10),param_1,param_2);
    }
    *(undefined1 *)(*(long *)(this + 0x10) + param_2) = 0;
    *(ulong *)(this + 8) = param_2;
    *(ulong *)this = param_2;
  }
  return;
}


/* DStringBlock::addString(char const*) */

DStringBlock * __thiscall DStringBlock::addString(DStringBlock *this,char *param_1)

{
  ulong uVar1;
  size_t __n;
  DStringBlock *this_00;
  void *__dest;
  
  this_00 = this;
  if (param_1 != (char *)0x0) {
    __n = strlen(param_1);
    uVar1 = __n + *(long *)(this + 8);
    if (*(int *)(this + 0x18) == 1) {
      resetMemory(this,uVar1);
      if (__n != 0) {
        memcpy((void *)(*(long *)(this + 0x10) + *(long *)(this + 8)),param_1,__n);
      }
      *(undefined1 *)(*(long *)(this + 0x10) + uVar1) = 0;
      *(ulong *)(this + 8) = uVar1;
      return this;
    }
    this_00 = ::operator_new(0x20);
    DStringBlock(this_00,(char *)0x0);
    resetMemory(this_00,uVar1);
    __dest = (void *)FUN_04f7a67c(*(undefined8 *)(this_00 + 0x10));
    if (*(size_t *)(this + 8) != 0) {
      memcpy(__dest,*(void **)(this + 0x10),*(size_t *)(this + 8));
    }
    if (__n != 0) {
      memcpy((void *)((long)__dest + *(long *)(this + 8)),param_1,__n);
    }
    *(undefined1 *)((long)__dest + uVar1) = 0;
    *(ulong *)(this_00 + 8) = uVar1;
    release(this);
  }
  return this_00;
}


/* DStringBlock::addString(char const*, unsigned long) */

DStringBlock * __thiscall DStringBlock::addString(DStringBlock *this,char *param_1,ulong param_2)

{
  ulong uVar1;
  DStringBlock *this_00;
  void *__dest;
  
  this_00 = this;
  if (param_1 != (char *)0x0) {
    uVar1 = param_2 + *(long *)(this + 8);
    if (*(int *)(this + 0x18) == 1) {
      resetMemory(this,uVar1);
      if (param_2 != 0) {
        memcpy((void *)(*(long *)(this + 0x10) + *(long *)(this + 8)),param_1,param_2);
      }
      *(undefined1 *)(*(long *)(this + 0x10) + uVar1) = 0;
      *(ulong *)(this + 8) = uVar1;
      return this;
    }
    this_00 = ::operator_new(0x20);
    DStringBlock(this_00,(char *)0x0);
    resetMemory(this_00,uVar1);
    __dest = (void *)FUN_04f7a67c(*(undefined8 *)(this_00 + 0x10));
    if (*(size_t *)(this + 8) != 0) {
      memcpy(__dest,*(void **)(this + 0x10),*(size_t *)(this + 8));
    }
    if (param_2 != 0) {
      memcpy((void *)((long)__dest + *(long *)(this + 8)),param_1,param_2);
    }
    *(undefined1 *)((long)__dest + uVar1) = 0;
    *(ulong *)(this_00 + 8) = uVar1;
    release(this);
  }
  return this_00;
}

