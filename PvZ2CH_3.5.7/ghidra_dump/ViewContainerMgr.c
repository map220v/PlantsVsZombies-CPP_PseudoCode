// Class: ViewContainerMgr


/* ViewContainerMgr::~ViewContainerMgr() */

void __thiscall ViewContainerMgr::~ViewContainerMgr(ViewContainerMgr *this)

{
  *(undefined ***)this = &PTR__ViewContainerMgr_06981aa0;
  Sexy::LazySingleton<ViewContainerMgr>::~LazySingleton((LazySingleton<ViewContainerMgr> *)this);
  return;
}


/* ViewContainerMgr::~ViewContainerMgr() */

void __thiscall ViewContainerMgr::~ViewContainerMgr(ViewContainerMgr *this)

{
  ~ViewContainerMgr(this);
  AK::FreeHook(this);
  return;
}


/* ViewContainerMgr::InitializeSDK() */

void __thiscall ViewContainerMgr::InitializeSDK(ViewContainerMgr *this)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)IViewContainer::CreateViewContainerManager();
  lVar2 = *plVar1;
  *(long **)(this + 8) = plVar1;
  (**(code **)(lVar2 + 0x10))();
  return;
}


/* ViewContainerMgr::ShowWebView(std::string const&) */

void ViewContainerMgr::ShowWebView(string *param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8));
  return;
}


/* ViewContainerMgr::PassCallSettlement(std::string const&, int) */

void ViewContainerMgr::PassCallSettlement(string *param_1,int param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),param_2);
  return;
}


/* ViewContainerMgr::PassCallLottery(std::string const&, int, int, int) */

void ViewContainerMgr::PassCallLottery(string *param_1,int param_2,int param_3,int param_4)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),param_2,param_3,param_4);
  return;
}


/* ViewContainerMgr::PassCallScoreStoreInfo(std::string const&, std::string const&) */

void ViewContainerMgr::PassCallScoreStoreInfo(string *param_1,string *param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8));
  return;
}


/* ViewContainerMgr::PassCallScoreStoreBuy(std::string const&, int) */

void ViewContainerMgr::PassCallScoreStoreBuy(string *param_1,int param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),param_2);
  return;
}


/* ViewContainerMgr::PassCallConsumeCash(std::string const&, int) */

void ViewContainerMgr::PassCallConsumeCash(string *param_1,int param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x40))(*(long **)(param_1 + 8),param_2);
  return;
}


/* ViewContainerMgr::PassCallAddPlayTimes(std::string const&, int) */

void ViewContainerMgr::PassCallAddPlayTimes(string *param_1,int param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x48))(*(long **)(param_1 + 8),param_2);
  return;
}


/* ViewContainerMgr::ViewContainerMgr() */

void __thiscall ViewContainerMgr::ViewContainerMgr(ViewContainerMgr *this)

{
  Sexy::LazySingleton<ViewContainerMgr>::LazySingleton((LazySingleton<ViewContainerMgr> *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ViewContainerMgr_06981aa0;
  return;
}

