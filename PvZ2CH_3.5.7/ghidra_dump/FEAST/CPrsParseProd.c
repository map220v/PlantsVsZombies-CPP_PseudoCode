// Class: FEAST::CPrsParseProd


/* FEAST::CPrsParseProd::~CPrsParseProd() */

void __thiscall FEAST::CPrsParseProd::~CPrsParseProd(CPrsParseProd *this)

{
  if (*(void **)(this + 0x38) != (void *)0x0) {
    LIB_ClientFree(*(void **)(this + 0x38));
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    LIB_ClientFree(*(void **)(this + 0x18));
    return;
  }
  return;
}


/* FEAST::CPrsParseProd::TEMPNAMEPLACEHOLDERVALUE(FEAST::CPrsParseProd&) */

undefined8 __thiscall FEAST::CPrsParseProd::operator==(CPrsParseProd *this,CPrsParseProd *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(this + 8) == *(long *)(param_1 + 8)) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    if (*(ulong *)(this + 0x10) < *(ulong *)(param_1 + 0x10)) {
      uVar1 = *(ulong *)(this + 0x10);
    }
    if (uVar1 == 0) {
      return 1;
    }
    if (**(long **)(this + 0x38) == **(long **)(param_1 + 0x38)) {
      uVar2 = 0;
      do {
        uVar2 = uVar2 + 1;
        if (uVar2 == uVar1) {
          return 1;
        }
      } while ((*(long **)(this + 0x38))[uVar2] == (*(long **)(param_1 + 0x38))[uVar2]);
    }
  }
  return 0;
}

