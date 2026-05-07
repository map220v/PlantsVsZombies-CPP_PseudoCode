// Class: FEAST::CPrsASTNode


/* FEAST::CPrsASTNode::NodeGetAttr() */

undefined8 __thiscall FEAST::CPrsASTNode::NodeGetAttr(CPrsASTNode *this)

{
  return *(undefined8 *)(this + 0x50);
}


/* FEAST::CPrsASTNode::NodeGetToken() */

CPrsASTNode * __thiscall FEAST::CPrsASTNode::NodeGetToken(CPrsASTNode *this)

{
  CPrsASTNode *pCVar1;
  
  pCVar1 = this + 0x28;
  if (*(long *)pCVar1 == 0) {
    pCVar1 = (CPrsASTNode *)0x0;
  }
  return pCVar1;
}


/* FEAST::CPrsASTNode::NodeGetChild(unsigned long) */

undefined8 __thiscall FEAST::CPrsASTNode::NodeGetChild(CPrsASTNode *this,ulong param_1)

{
  if (param_1 < *(ulong *)(this + 0x18)) {
    return *(undefined8 *)(*(long *)(this + 0x20) + param_1 * 8);
  }
  return 0;
}


/* FEAST::CPrsASTNode::NodeSetAttr(FEAST::IPrsAttr*) */

void __thiscall FEAST::CPrsASTNode::NodeSetAttr(CPrsASTNode *this,IPrsAttr *param_1)

{
  *(IPrsAttr **)(this + 0x50) = param_1;
  return;
}


/* FEAST::CPrsASTNode::operator new(unsigned long) */

void * __thiscall FEAST::CPrsASTNode::operator_new(CPrsASTNode *this,ulong param_1)

{
  void *pvVar1;
  
  sNodeCount = sNodeCount + 1;
  pvVar1 = (void *)LIB_ClientMalloc((ulong)this);
  return pvVar1;
}


/* FEAST::CPrsASTNode::operator delete(void*) */

void __thiscall FEAST::CPrsASTNode::operator_delete(CPrsASTNode *this,void *param_1)

{
  sNodeCount = sNodeCount + -1;
  LIB_ClientFree(this);
  return;
}


/* FEAST::CPrsASTNode::CPrsASTNode() */

void __thiscall FEAST::CPrsASTNode::CPrsASTNode(CPrsASTNode *this)

{
  IPrsNode::IPrsNode((IPrsNode *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_NodeDestroy_06a36db0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}


/* FEAST::CPrsASTNode::~CPrsASTNode() */

void __thiscall FEAST::CPrsASTNode::~CPrsASTNode(CPrsASTNode *this)

{
  void *pvVar1;
  void *extraout_x1;
  ulong uVar2;
  ulong uVar3;
  CPrsASTNode *this_00;
  
  pvVar1 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR_NodeDestroy_06a36db0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = *(ulong *)(this + 0x18);
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        this_00 = *(CPrsASTNode **)((long)pvVar1 + uVar3 * 8);
        uVar3 = uVar3 + 1;
        if (this_00 != (CPrsASTNode *)0x0) {
          ~CPrsASTNode(this_00);
          operator_delete(this_00,extraout_x1);
          uVar2 = *(ulong *)(this + 0x18);
          pvVar1 = *(void **)(this + 0x20);
        }
      } while (uVar3 < uVar2);
    }
    LIB_ClientFree(pvVar1);
  }
  if (*(undefined8 **)(this + 0x50) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 0x50))();
  }
  return;
}


/* FEAST::CPrsASTNode::NodeDestroy() */

undefined8 __thiscall FEAST::CPrsASTNode::NodeDestroy(CPrsASTNode *this)

{
  void *extraout_x1;
  
  if (this != (CPrsASTNode *)0x0) {
    ~CPrsASTNode(this);
    operator_delete(this,extraout_x1);
  }
  return 1;
}

