// Class: CZombieSummonDataPool


/* CZombieSummonDataPool::CZombieSummonDataPool() */

void __thiscall CZombieSummonDataPool::CZombieSummonDataPool(CZombieSummonDataPool *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* CZombieSummonDataPool::~CZombieSummonDataPool() */

void __thiscall CZombieSummonDataPool::~CZombieSummonDataPool(CZombieSummonDataPool *this)

{
  std::vector<ZombieSummonPoolItem,std::allocator<ZombieSummonPoolItem>>::~vector
            ((vector<ZombieSummonPoolItem,std::allocator<ZombieSummonPoolItem>> *)(this + 0x10));
  return;
}


/* CZombieSummonDataPool::CZombieSummonDataPool(CZombieSummonDataPool const&) */

void __thiscall
CZombieSummonDataPool::CZombieSummonDataPool
          (CZombieSummonDataPool *this,CZombieSummonDataPool *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  std::vector<ZombieSummonPoolItem,std::allocator<ZombieSummonPoolItem>>::vector
            ((vector<ZombieSummonPoolItem,std::allocator<ZombieSummonPoolItem>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}

