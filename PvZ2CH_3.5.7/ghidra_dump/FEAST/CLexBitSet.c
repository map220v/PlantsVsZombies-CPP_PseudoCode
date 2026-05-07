// Class: FEAST::CLexBitSet


/* FEAST::CLexBitSet::~CLexBitSet() */

void __thiscall FEAST::CLexBitSet::~CLexBitSet(CLexBitSet *this)

{
  if (*(void **)this != (void *)0x0) {
    LIB_ClientFree(*(void **)this);
    return;
  }
  return;
}


/* FEAST::CLexBitSet::Init(unsigned long) */

void __thiscall FEAST::CLexBitSet::Init(CLexBitSet *this,ulong param_1)

{
  ulong uVar1;
  void *__s;
  
  uVar1 = param_1 + 7 >> 3;
  *(ulong *)(this + 8) = param_1;
  *(ulong *)(this + 0x10) = uVar1;
  __s = (void *)LIB_ClientMalloc(uVar1);
  *(void **)this = __s;
  memset(__s,0,*(size_t *)(this + 0x10));
  return;
}


/* FEAST::CLexBitSet::CLexBitSet() */

void __thiscall FEAST::CLexBitSet::CLexBitSet(CLexBitSet *this)

{
  ulong uVar1;
  
  uVar1 = defaultSize;
  if (defaultSize == 0) {
    uVar1 = 0x800;
  }
  Init(this,uVar1);
  return;
}


/* FEAST::CLexBitSet::CLexBitSet(int) */

void __thiscall FEAST::CLexBitSet::CLexBitSet(CLexBitSet *this,int param_1)

{
  Init(this,(long)param_1);
  return;
}


/* FEAST::CLexBitSet::TEMPNAMEPLACEHOLDERVALUE(unsigned long) */

void __thiscall FEAST::CLexBitSet::operator+=(CLexBitSet *this,ulong param_1)

{
  *(byte *)(*(long *)this + (param_1 >> 3)) =
       (byte)(1 << (ulong)((uint)param_1 & 7)) | *(byte *)(*(long *)this + (param_1 >> 3));
  return;
}


/* FEAST::CLexBitSet::TEMPNAMEPLACEHOLDERVALUE(unsigned long) */

void __thiscall FEAST::CLexBitSet::operator-=(CLexBitSet *this,ulong param_1)

{
  *(byte *)(*(long *)this + (param_1 >> 3)) =
       *(byte *)(*(long *)this + (param_1 >> 3)) & ((byte)(1 << (ulong)((uint)param_1 & 7)) ^ 0xff);
  return;
}

