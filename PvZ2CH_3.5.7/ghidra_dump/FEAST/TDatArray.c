// Class: FEAST::TDatArray<FEAST::CPrsCSTNode*>


/* FEAST::TDatArray<FEAST::CPrsCSTNode*>::TDatArray(unsigned long) */

void __thiscall
FEAST::TDatArray<FEAST::CPrsCSTNode*>::TDatArray(TDatArray<FEAST::CPrsCSTNode*> *this,ulong param_1)

{
  CDatArray::CDatArray((CDatArray *)this,param_1,8);
  return;
}


/* FEAST::TDatArray<FEAST::CPrsCSTNode*>::AddNoConstruct(unsigned long) */

long __thiscall
FEAST::TDatArray<FEAST::CPrsCSTNode*>::AddNoConstruct
          (TDatArray<FEAST::CPrsCSTNode*> *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  uVar1 = param_1 + lVar2;
  *(ulong *)(this + 8) = uVar1;
  if (*(ulong *)(this + 0x10) < uVar1) {
    *(ulong *)(this + 0x10) = uVar1 + 0x20 + (uVar1 >> 2);
    CDatArray::Realloc((CDatArray *)this,8);
  }
  return lVar2;
}


/* FEAST::TDatArray<FEAST::CPrsCSTNode*>::Add(unsigned long) */

long __thiscall
FEAST::TDatArray<FEAST::CPrsCSTNode*>::Add(TDatArray<FEAST::CPrsCSTNode*> *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  uVar1 = param_1 + lVar2;
  *(ulong *)(this + 8) = uVar1;
  if (*(ulong *)(this + 0x10) < uVar1) {
    *(ulong *)(this + 0x10) = uVar1 + 0x20 + (uVar1 >> 2);
    CDatArray::Realloc((CDatArray *)this,8);
  }
  return lVar2;
}


/* FEAST::TDatArray<FEAST::CPrsCSTNode*>::AddItem(FEAST::CPrsCSTNode* const&) */

ulong __thiscall
FEAST::TDatArray<FEAST::CPrsCSTNode*>::AddItem
          (TDatArray<FEAST::CPrsCSTNode*> *this,CPrsCSTNode **param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = Add(this,1);
  puVar2 = (undefined8 *)FUN_0539d918(*(undefined8 *)this,uVar1 & 0xffffffff);
  *puVar2 = *param_1;
  return uVar1;
}


/* FEAST::TDatArray<FEAST::CPrsCSTNode*>::Shrink() */

void __thiscall FEAST::TDatArray<FEAST::CPrsCSTNode*>::Shrink(TDatArray<FEAST::CPrsCSTNode*> *this)

{
  if (*(long *)(this + 0x10) != *(long *)(this + 8)) {
    *(long *)(this + 0x10) = *(long *)(this + 8);
    CDatArray::Realloc((CDatArray *)this,8);
    return;
  }
  return;
}


/* FEAST::TDatArray<FEAST::CPrsCSTNode*>::Remove(unsigned long, unsigned long) */

void __thiscall
FEAST::TDatArray<FEAST::CPrsCSTNode*>::Remove
          (TDatArray<FEAST::CPrsCSTNode*> *this,ulong param_1,ulong param_2)

{
  FUN_0539da14(this,this + 8,param_1,param_2);
  return;
}


/* FEAST::TDatArray<FEAST::CPrsCSTNode*>::Purge() */

void __thiscall FEAST::TDatArray<FEAST::CPrsCSTNode*>::Purge(TDatArray<FEAST::CPrsCSTNode*> *this)

{
  Remove(this,0,*(ulong *)(this + 8));
  return;
}


/* FEAST::TDatArray<FEAST::CPrsCSTNode*>::RemoveAll() */

void __thiscall
FEAST::TDatArray<FEAST::CPrsCSTNode*>::RemoveAll(TDatArray<FEAST::CPrsCSTNode*> *this)

{
  Purge(this);
  Shrink(this);
  return;
}


/* FEAST::TDatArray<FEAST::CPrsCSTNode*>::~TDatArray() */

void __thiscall
FEAST::TDatArray<FEAST::CPrsCSTNode*>::~TDatArray(TDatArray<FEAST::CPrsCSTNode*> *this)

{
  RemoveAll(this);
  CLexBitSet::~CLexBitSet((CLexBitSet *)this);
  return;
}

