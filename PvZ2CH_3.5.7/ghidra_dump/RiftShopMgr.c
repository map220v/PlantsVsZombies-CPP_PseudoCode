// Class: RiftShopMgr


/* RiftShopMgr::getRefreshShopTimes() */

undefined4 __thiscall RiftShopMgr::getRefreshShopTimes(RiftShopMgr *this)

{
  return *(undefined4 *)(this + 0x54);
}


/* RiftShopMgr::~RiftShopMgr() */

void __thiscall RiftShopMgr::~RiftShopMgr(RiftShopMgr *this)

{
  *(undefined ***)this = &PTR__RiftShopMgr_069b9460;
  RiftaShopData::~RiftaShopData((RiftaShopData *)(this + 8));
  Sexy::LazySingleton<RiftShopMgr>::~LazySingleton((LazySingleton<RiftShopMgr> *)this);
  return;
}


/* RiftShopMgr::~RiftShopMgr() */

void __thiscall RiftShopMgr::~RiftShopMgr(RiftShopMgr *this)

{
  ~RiftShopMgr(this);
  AK::FreeHook(this);
  return;
}


/* RiftShopMgr::RiftShopMgr() */

void __thiscall RiftShopMgr::RiftShopMgr(RiftShopMgr *this)

{
  Sexy::LazySingleton<RiftShopMgr>::LazySingleton((LazySingleton<RiftShopMgr> *)this);
  *(undefined ***)this = &PTR__RiftShopMgr_069b9460;
  RiftaShopData::RiftaShopData((RiftaShopData *)(this + 8));
  *(undefined4 *)(this + 0x60) = 0;
  return;
}


/* RiftShopMgr::getRefreshShopCost() */

undefined4 __thiscall RiftShopMgr::getRefreshShopCost(RiftShopMgr *this)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  cVar1 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)(this + 0x20));
  uVar2 = 10;
  if (cVar1 == '\0') {
    if (1 < *(int *)(this + 0x54)) {
      uVar6 = *(undefined8 *)(this + 0x20);
      uVar5 = (ulong)(*(int *)(this + 0x54) + -2);
      uVar3 = FUN_04d84460(uVar6,*(undefined8 *)(this + 0x28));
      if (uVar3 <= uVar5) {
        puVar4 = (undefined4 *)FUN_04d847d0(uVar6,(long)((int)uVar3 + -1));
        return *puVar4;
      }
      puVar4 = (undefined4 *)FUN_04d847d0(uVar6,uVar5);
      return *puVar4;
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* RiftShopMgr::loadData(RiftaShopData const&) */

void __thiscall RiftShopMgr::loadData(RiftShopMgr *this,RiftaShopData *param_1)

{
  RiftaShop *this_00;
  
  RiftaShopData::operator=((RiftaShopData *)(this + 8),param_1);
  this_00 = (RiftaShop *)UISingletonDialog<RiftaShop>::GetSingletonPtr();
  if (this_00 != (RiftaShop *)0x0) {
    RiftaShop::UpdateShopUI(this_00,(RiftaShopData *)(this + 8));
    return;
  }
  UISingletonDialog<RiftaShop>::ShowDialog();
  return;
}

