// Class: FEAST::CDatArray


/* FEAST::CDatArray::Realloc(unsigned long) */

void __thiscall FEAST::CDatArray::Realloc(CDatArray *this,ulong param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)this;
  *(ulong *)(this + 0x18) = param_1;
  if (pvVar1 == (void *)0x0) {
    if ((param_1 != 0) && (*(long *)(this + 0x10) != 0)) {
      uVar2 = LIB_ClientMalloc(param_1 * *(long *)(this + 0x10));
      *(undefined8 *)this = uVar2;
    }
  }
  else {
    if ((param_1 != 0) && (*(long *)(this + 0x10) != 0)) {
      uVar2 = LIB_ClientRealloc(pvVar1,param_1 * *(long *)(this + 0x10));
      *(undefined8 *)this = uVar2;
      return;
    }
    LIB_ClientFree(pvVar1);
    *(undefined8 *)this = 0;
  }
  return;
}


/* FEAST::CDatArray::CDatArray(unsigned long, unsigned long) */

void __thiscall FEAST::CDatArray::CDatArray(CDatArray *this,ulong param_1,ulong param_2)

{
  *(undefined8 *)this = 0;
  *(ulong *)(this + 8) = param_1;
  *(ulong *)(this + 0x10) = param_1;
  *(ulong *)(this + 0x18) = param_2;
  Realloc(this,param_2);
  return;
}

