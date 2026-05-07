// Class: DStreamBuffer


/* DStreamBuffer::reset() */

void __thiscall DStreamBuffer::reset(DStreamBuffer *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* DStreamBuffer::~DStreamBuffer() */

void __thiscall DStreamBuffer::~DStreamBuffer(DStreamBuffer *this)

{
  *(undefined ***)this = &PTR__DStreamBuffer_06a23eb0;
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
    return;
  }
  return;
}


/* DStreamBuffer::~DStreamBuffer() */

void __thiscall DStreamBuffer::~DStreamBuffer(DStreamBuffer *this)

{
  ~DStreamBuffer(this);
  AK::FreeHook(this);
  return;
}


/* DStreamBuffer::DStreamBuffer(unsigned long) */

void __thiscall DStreamBuffer::DStreamBuffer(DStreamBuffer *this,ulong param_1)

{
  void *__s;
  
  *(undefined ***)this = &PTR__DStreamBuffer_06a23eb0;
  __s = malloc(param_1);
  *(void **)(this + 8) = __s;
  memset(__s,0,param_1);
  *(ulong *)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* DStreamBuffer::addDatas(char const*, unsigned long) */

void __thiscall DStreamBuffer::addDatas(DStreamBuffer *this,char *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong __size;
  
  lVar2 = *(long *)(this + 0x18);
  uVar1 = param_2 + lVar2;
  __size = *(ulong *)(this + 0x10);
  if (__size < uVar1) {
    do {
      __size = __size * 2;
    } while (__size < uVar1);
    *(ulong *)(this + 0x10) = __size;
    pvVar3 = realloc(*(void **)(this + 8),__size);
    *(void **)(this + 8) = pvVar3;
    memset((void *)((long)pvVar3 + *(long *)(this + 0x18)),0,
           *(long *)(this + 0x10) - *(long *)(this + 0x18));
    lVar2 = *(long *)(this + 0x18);
  }
  memcpy((void *)(*(long *)(this + 8) + lVar2),param_1,param_2);
  *(ulong *)(this + 0x18) = uVar1;
  return;
}


/* DStreamBuffer::popDatas(unsigned long) */

void __thiscall DStreamBuffer::popDatas(DStreamBuffer *this,ulong param_1)

{
  void *__dest;
  
  __dest = *(void **)(this + 8);
  if (__dest != (void *)0x0) {
    memmove(__dest,(void *)((long)__dest + param_1),*(long *)(this + 0x18) - param_1);
    *(ulong *)(this + 0x18) = *(long *)(this + 0x18) - param_1;
  }
  return;
}

