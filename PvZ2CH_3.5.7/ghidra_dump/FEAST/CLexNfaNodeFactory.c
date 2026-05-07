// Class: FEAST::CLexNfaNodeFactory


/* FEAST::CLexNfaNodeFactory::CLexNfaNodeFactory(unsigned long) */

void __thiscall
FEAST::CLexNfaNodeFactory::CLexNfaNodeFactory(CLexNfaNodeFactory *this,ulong param_1)

{
  undefined8 uVar1;
  
  *(ulong *)(this + 8) = param_1;
  *(undefined8 *)this = 0;
  uVar1 = LIB_ClientMalloc(param_1 * 0x48);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


/* FEAST::CLexNfaNodeFactory::~CLexNfaNodeFactory() */

void __thiscall FEAST::CLexNfaNodeFactory::~CLexNfaNodeFactory(CLexNfaNodeFactory *this)

{
  CLexNfaNode *this_00;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    if (*(long *)this != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        this_00 = (CLexNfaNode *)((long)pvVar1 + lVar2);
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x48;
        CLexNfaNode::~CLexNfaNode(this_00);
        pvVar1 = *(void **)(this + 0x10);
      } while (uVar3 < *(ulong *)this);
    }
    LIB_ClientFree(pvVar1);
    return;
  }
  return;
}


/* FEAST::CLexNfaNodeFactory::AllocNode() */

long __thiscall FEAST::CLexNfaNodeFactory::AllocNode(CLexNfaNodeFactory *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (*(ulong *)(this + 8) <= uVar1) {
    LIB_Errorf("CLexNfaNodeFactory: AllocNode limit exceeded (%d)");
    uVar1 = *(ulong *)this;
  }
  *(ulong *)this = uVar1 + 1;
  return *(long *)(this + 0x10) + (uVar1 + 1) * 0x48 + -0x48;
}


long __thiscall FEAST::CLexNfaNodeFactory::AllocNode(CLexNfaNodeFactory *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (*(ulong *)(this + 8) <= uVar1) {
    LIB_Errorf("CLexNfaNodeFactory: AllocNode limit exceeded (%d)");
    uVar1 = *(ulong *)this;
  }
  *(ulong *)this = uVar1 + 1;
  return *(long *)(this + 0x10) + (uVar1 + 1) * 0x48 + -0x48;
}


/* FEAST::CLexNfaNodeFactory::NodeForId(unsigned long) */

long __thiscall FEAST::CLexNfaNodeFactory::NodeForId(CLexNfaNodeFactory *this,ulong param_1)

{
  return *(long *)(this + 0x10) + param_1 * 0x48;
}


/* FEAST::CLexNfaNodeFactory::IdForNode(FEAST::CLexNfaNode*) */

long __thiscall FEAST::CLexNfaNodeFactory::IdForNode(CLexNfaNodeFactory *this,CLexNfaNode *param_1)

{
  return ((long)param_1 - *(long *)(this + 0x10) >> 3) * -0x71c71c71c71c71c7;
}

