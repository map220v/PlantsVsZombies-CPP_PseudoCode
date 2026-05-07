// Class: PVZ1ModeShopMgr


/* PVZ1ModeShopMgr::~PVZ1ModeShopMgr() */

void __thiscall PVZ1ModeShopMgr::~PVZ1ModeShopMgr(PVZ1ModeShopMgr *this)

{
  *(undefined ***)this = &PTR__PVZ1ModeShopMgr_069c5980;
  PVZ1ModeShopData::~PVZ1ModeShopData((PVZ1ModeShopData *)(this + 8));
  Sexy::LazySingleton<PVZ1ModeShopMgr>::~LazySingleton((LazySingleton<PVZ1ModeShopMgr> *)this);
  return;
}


/* PVZ1ModeShopMgr::~PVZ1ModeShopMgr() */

void __thiscall PVZ1ModeShopMgr::~PVZ1ModeShopMgr(PVZ1ModeShopMgr *this)

{
  ~PVZ1ModeShopMgr(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1ModeShopMgr::PVZ1ModeShopMgr() */

void __thiscall PVZ1ModeShopMgr::PVZ1ModeShopMgr(PVZ1ModeShopMgr *this)

{
  Sexy::LazySingleton<PVZ1ModeShopMgr>::LazySingleton((LazySingleton<PVZ1ModeShopMgr> *)this);
  *(undefined ***)this = &PTR__PVZ1ModeShopMgr_069c5980;
  PVZ1ModeShopData::PVZ1ModeShopData((PVZ1ModeShopData *)(this + 8));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* PVZ1ModeShopMgr::loadData(PVZ1ModeShopData const&) */

void __thiscall PVZ1ModeShopMgr::loadData(PVZ1ModeShopMgr *this,PVZ1ModeShopData *param_1)

{
  PVZ1ModeShop *this_00;
  
  PVZ1ModeShopData::operator=((PVZ1ModeShopData *)(this + 8),param_1);
  this_00 = (PVZ1ModeShop *)UISingletonDialog<PVZ1ModeShop>::GetSingletonPtr();
  if (this_00 != (PVZ1ModeShop *)0x0) {
    PVZ1ModeShop::UpdateShopUI(this_00,(PVZ1ModeShopData *)(this + 8));
    return;
  }
  UISingletonDialog<PVZ1ModeShop>::ShowDialog();
  return;
}

