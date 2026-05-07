// Class: NewPVPShopMgr


/* NewPVPShopMgr::NewPVPShopMgr() */

void __thiscall NewPVPShopMgr::NewPVPShopMgr(NewPVPShopMgr *this)

{
  Sexy::LazySingleton<NewPVPShopMgr>::LazySingleton((LazySingleton<NewPVPShopMgr> *)this);
  this[8] = (NewPVPShopMgr)0x1;
  *(undefined ***)this = &PTR__NewPVPShopMgr_06658f10;
  Network_NewPVPShopData::Network_NewPVPShopData((Network_NewPVPShopData *)(this + 0x10));
  return;
}


/* NewPVPShopMgr::~NewPVPShopMgr() */

void __thiscall NewPVPShopMgr::~NewPVPShopMgr(NewPVPShopMgr *this)

{
  *(undefined ***)this = &PTR__NewPVPShopMgr_06658f10;
  Network_NewPVPShopData::~Network_NewPVPShopData((Network_NewPVPShopData *)(this + 0x10));
  Sexy::LazySingleton<NewPVPShopMgr>::~LazySingleton((LazySingleton<NewPVPShopMgr> *)this);
  return;
}


/* NewPVPShopMgr::~NewPVPShopMgr() */

void __thiscall NewPVPShopMgr::~NewPVPShopMgr(NewPVPShopMgr *this)

{
  ~NewPVPShopMgr(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPShopMgr::loadData(Network_NewPVPShopData const&) */

void __thiscall NewPVPShopMgr::loadData(NewPVPShopMgr *this,Network_NewPVPShopData *param_1)

{
  UINewPVPShop *this_00;
  
  Network_NewPVPShopData::operator=((Network_NewPVPShopData *)(this + 0x10),param_1);
  this_00 = (UINewPVPShop *)UISingletonDialog<UINewPVPShop>::GetSingletonPtr();
  if (this_00 != (UINewPVPShop *)0x0) {
    UINewPVPShop::UpdateShopUI(this_00,(Network_NewPVPShopData *)(this + 0x10));
    return;
  }
  if (this[8] == (NewPVPShopMgr)0x0) {
    this[8] = (NewPVPShopMgr)0x1;
    return;
  }
  UISingletonDialog<UINewPVPShop>::ShowDialog();
  return;
}

