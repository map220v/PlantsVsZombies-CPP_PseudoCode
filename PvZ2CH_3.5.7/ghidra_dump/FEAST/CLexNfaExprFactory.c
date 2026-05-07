// Class: FEAST::CLexNfaExprFactory


/* FEAST::CLexNfaExprFactory::CLexNfaExprFactory(unsigned long) */

void __thiscall
FEAST::CLexNfaExprFactory::CLexNfaExprFactory(CLexNfaExprFactory *this,ulong param_1)

{
  undefined8 uVar1;
  
  *(ulong *)(this + 8) = param_1;
  *(undefined8 *)this = 0;
  uVar1 = LIB_ClientMalloc(param_1 << 4);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


/* FEAST::CLexNfaExprFactory::~CLexNfaExprFactory() */

void __thiscall FEAST::CLexNfaExprFactory::~CLexNfaExprFactory(CLexNfaExprFactory *this)

{
  if (*(void **)(this + 0x10) != (void *)0x0) {
    LIB_ClientFree(*(void **)(this + 0x10));
    return;
  }
  return;
}


/* FEAST::CLexNfaExprFactory::AllocExpr() */

long __thiscall FEAST::CLexNfaExprFactory::AllocExpr(CLexNfaExprFactory *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (*(ulong *)(this + 8) <= uVar1) {
    LIB_Errorf("CLexNfaExprFactory: AllocExpr limit exceeded (%d)");
    uVar1 = *(ulong *)this;
  }
  *(ulong *)this = uVar1 + 1;
  return *(long *)(this + 0x10) + (uVar1 + 1) * 0x10 + -0x10;
}


long __thiscall FEAST::CLexNfaExprFactory::AllocExpr(CLexNfaExprFactory *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (*(ulong *)(this + 8) <= uVar1) {
    LIB_Errorf("CLexNfaExprFactory: AllocExpr limit exceeded (%d)");
    uVar1 = *(ulong *)this;
  }
  *(ulong *)this = uVar1 + 1;
  return *(long *)(this + 0x10) + (uVar1 + 1) * 0x10 + -0x10;
}


/* FEAST::CLexNfaExprFactory::ExprForId(unsigned long) */

long __thiscall FEAST::CLexNfaExprFactory::ExprForId(CLexNfaExprFactory *this,ulong param_1)

{
  return *(long *)(this + 0x10) + param_1 * 0x10;
}


/* FEAST::CLexNfaExprFactory::IdForExpr(FEAST::CLexNfaExpr*) */

long __thiscall FEAST::CLexNfaExprFactory::IdForExpr(CLexNfaExprFactory *this,CLexNfaExpr *param_1)

{
  return (long)param_1 - *(long *)(this + 0x10) >> 4;
}

