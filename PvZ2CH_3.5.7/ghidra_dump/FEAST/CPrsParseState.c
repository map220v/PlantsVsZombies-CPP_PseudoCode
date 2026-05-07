// Class: FEAST::CPrsParseState


/* FEAST::CPrsParseState::ProdSortCompare(void const*, void const*) */

ulong FEAST::CPrsParseState::ProdSortCompare(void *param_1,void *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(*(long *)(*(long *)(*(long *)param_1 + 8) + 8) + 0x20);
  uVar1 = *(ulong *)(*(long *)(*(long *)(*(long *)param_2 + 8) + 8) + 0x20);
  if (uVar2 <= uVar1) {
    return (ulong)(uVar2 < uVar1);
  }
  return 0xffffffff;
}


/* FEAST::CPrsParseState::~CPrsParseState() */

void __thiscall FEAST::CPrsParseState::~CPrsParseState(CPrsParseState *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    LIB_ClientFree(*(void **)(this + 8));
    return;
  }
  return;
}


/* FEAST::CPrsParseState::operator new(unsigned long, FEAST::CPrsParser*, unsigned long) */

void * FEAST::CPrsParseState::operator_new(ulong param_1,CPrsParser *param_2,ulong param_3)

{
  void *__s;
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 0xe010);
  if (0x3ff < uVar2) {
    LIB_Errorf("CPrsParseState: Too many states");
    uVar2 = *(ulong *)(param_2 + 0xe010);
  }
  lVar1 = uVar2 * 0x18;
  *(ulong *)(param_2 + 0xe010) = uVar2 + 1;
  *(undefined8 *)(param_2 + lVar1 + 0x8010) = 0;
  __s = (void *)LIB_ClientMalloc(param_3 << 3);
  *(void **)(param_2 + lVar1 + 0x8018) = __s;
  memset(__s,0,param_3 << 3);
  param_2[lVar1 + 0x8020] = (CPrsParser)0x0;
  return param_2 + lVar1 + 0x8010;
}

