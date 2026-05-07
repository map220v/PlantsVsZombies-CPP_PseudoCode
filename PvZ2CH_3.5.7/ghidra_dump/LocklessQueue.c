// Class: LocklessQueue<unsigned_int>


/* LocklessQueue<unsigned int>::~LocklessQueue() */

void __thiscall LocklessQueue<unsigned_int>::~LocklessQueue(LocklessQueue<unsigned_int> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  while (pvVar1 != (void *)0x0) {
    *(undefined8 *)this = *(undefined8 *)((long)pvVar1 + 8);
    AK::FreeHook(pvVar1);
    pvVar1 = *(void **)this;
  }
  return;
}


/* LocklessQueue<unsigned int>::LocklessQueue() */

void __thiscall LocklessQueue<unsigned_int>::LocklessQueue(LocklessQueue<unsigned_int> *this)

{
  Node *pNVar1;
  undefined8 uVar2;
  
  pNVar1 = ::operator_new(0x10);
  Node::Node(pNVar1,0);
  pNVar1 = (Node *)std::atomic<LocklessQueue<unsigned_int>::Node*>::operator=
                             ((atomic<LocklessQueue<unsigned_int>::Node*> *)(this + 0x10),pNVar1);
  uVar2 = std::atomic<LocklessQueue<unsigned_int>::Node*>::operator=
                    ((atomic<LocklessQueue<unsigned_int>::Node*> *)(this + 8),pNVar1);
  *(undefined8 *)this = uVar2;
  return;
}


/* LocklessQueue<unsigned int>::Produce(unsigned int const&) */

void __thiscall
LocklessQueue<unsigned_int>::Produce(LocklessQueue<unsigned_int> *this,uint *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  void *pvVar3;
  
  pNVar1 = std::__atomic_base::operator_cast_to_Node_((__atomic_base *)(this + 0x10));
  pNVar2 = ::operator_new(0x10);
  Node::Node(pNVar2,*param_1);
  *(Node **)(pNVar1 + 8) = pNVar2;
  std::atomic<LocklessQueue<unsigned_int>::Node*>::store((__atomic_base *)(this + 0x10),pNVar2,5);
  while (pNVar2 = *(Node **)this, pNVar1 = std::atomic::operator_cast_to_Node_((atomic *)(this + 8))
        , pNVar2 != pNVar1) {
    pvVar3 = *(void **)this;
    *(undefined8 *)this = *(undefined8 *)((long)pvVar3 + 8);
    AK::FreeHook(pvVar3);
  }
  return;
}


/* LocklessQueue<unsigned int>::Consume(unsigned int&) */

undefined8 __thiscall
LocklessQueue<unsigned_int>::Consume(LocklessQueue<unsigned_int> *this,uint *param_1)

{
  atomic *this_00;
  Node *pNVar1;
  Node *pNVar2;
  uint *puVar3;
  
  this_00 = (atomic *)(this + 8);
  pNVar1 = std::atomic::operator_cast_to_Node_(this_00);
  pNVar2 = std::atomic::operator_cast_to_Node_((atomic *)(this + 0x10));
  if (pNVar1 != pNVar2) {
    pNVar1 = std::__atomic_base::operator_cast_to_Node_((__atomic_base *)this_00);
    puVar3 = *(uint **)(pNVar1 + 8);
    *param_1 = *puVar3;
    std::atomic<LocklessQueue<unsigned_int>::Node*>::store(this_00,puVar3,5);
    return 1;
  }
  return 0;
}

