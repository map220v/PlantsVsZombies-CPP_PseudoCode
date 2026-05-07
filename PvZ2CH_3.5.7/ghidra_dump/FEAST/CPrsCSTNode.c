// Class: FEAST::CPrsCSTNode


/* FEAST::CPrsCSTNode::operator new(unsigned long) */

void * __thiscall FEAST::CPrsCSTNode::operator_new(CPrsCSTNode *this,ulong param_1)

{
  void *pvVar1;
  
  sNodeCount = sNodeCount + 1;
  pvVar1 = (void *)LIB_ClientMalloc((ulong)this);
  return pvVar1;
}


/* FEAST::CPrsCSTNode::operator delete(void*) */

void __thiscall FEAST::CPrsCSTNode::operator_delete(CPrsCSTNode *this,void *param_1)

{
  sNodeCount = sNodeCount + -1;
  LIB_ClientFree(this);
  return;
}


/* FEAST::CPrsCSTNode::CPrsCSTNode() */

void __thiscall FEAST::CPrsCSTNode::CPrsCSTNode(CPrsCSTNode *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}


/* FEAST::CPrsCSTNode::~CPrsCSTNode() */

void __thiscall FEAST::CPrsCSTNode::~CPrsCSTNode(CPrsCSTNode *this)

{
  CPrsCSTNode *this_00;
  void *extraout_x1;
  CPrsCSTNode *pCVar1;
  
  this_00 = *(CPrsCSTNode **)(this + 0x10);
  while (this_00 != (CPrsCSTNode *)0x0) {
    pCVar1 = *(CPrsCSTNode **)(this_00 + 0x18);
    ~CPrsCSTNode(this_00);
    operator_delete(this_00,extraout_x1);
    *(CPrsCSTNode **)(this + 0x10) = pCVar1;
    this_00 = pCVar1;
  }
  return;
}


/* FEAST::CPrsCSTNode::NodeDestroy() */

undefined8 __thiscall FEAST::CPrsCSTNode::NodeDestroy(CPrsCSTNode *this)

{
  void *extraout_x1;
  
  if (this != (CPrsCSTNode *)0x0) {
    ~CPrsCSTNode(this);
    operator_delete(this,extraout_x1);
  }
  return 1;
}


/* FEAST::CPrsCSTNode::NodeGetToken() */

CPrsCSTNode * __thiscall FEAST::CPrsCSTNode::NodeGetToken(CPrsCSTNode *this)

{
  CPrsCSTNode *pCVar1;
  
  pCVar1 = this + 0x20;
  if (*(long *)pCVar1 == 0) {
    pCVar1 = (CPrsCSTNode *)0x0;
  }
  return pCVar1;
}


/* FEAST::CPrsCSTNode::NodeGetName() */

undefined1 * __thiscall FEAST::CPrsCSTNode::NodeGetName(CPrsCSTNode *this)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x48);
  if (puVar2 == (undefined8 *)0x0) {
    return &DAT_055923fe;
  }
  puVar1 = (undefined1 *)puVar2[2];
  if ((puVar1 == (undefined1 *)0x0) &&
     (puVar1 = (undefined1 *)puVar2[1], puVar1 == (undefined1 *)0x0)) {
    return (undefined1 *)*puVar2;
  }
  return puVar1;
}

