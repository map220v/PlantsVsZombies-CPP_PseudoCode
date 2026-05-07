// Class: UITourismOctoberMgr


/* UITourismOctoberMgr::RequestNetwork() */

void UITourismOctoberMgr::RequestNetwork(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2a8c,true,0);
  return;
}


/* UITourismOctoberMgr::UITourismOctoberMgr() */

void __thiscall UITourismOctoberMgr::UITourismOctoberMgr(UITourismOctoberMgr *this)

{
  Sexy::LazySingleton<UITourismOctoberMgr>::LazySingleton
            ((LazySingleton<UITourismOctoberMgr> *)this);
  *(undefined ***)this = &PTR__UITourismOctoberMgr_069edc40;
  TourismOctoberData::TourismOctoberData((TourismOctoberData *)(this + 8));
  return;
}


/* UITourismOctoberMgr::~UITourismOctoberMgr() */

void __thiscall UITourismOctoberMgr::~UITourismOctoberMgr(UITourismOctoberMgr *this)

{
  *(undefined ***)this = &PTR__UITourismOctoberMgr_069edc40;
  TourismOctoberData::~TourismOctoberData((TourismOctoberData *)(this + 8));
  Sexy::LazySingleton<UITourismOctoberMgr>::~LazySingleton
            ((LazySingleton<UITourismOctoberMgr> *)this);
  return;
}


/* UITourismOctoberMgr::~UITourismOctoberMgr() */

void __thiscall UITourismOctoberMgr::~UITourismOctoberMgr(UITourismOctoberMgr *this)

{
  ~UITourismOctoberMgr(this);
  AK::FreeHook(this);
  return;
}


/* UITourismOctoberMgr::LoadData(TourismOctoberData const&) */

void __thiscall UITourismOctoberMgr::LoadData(UITourismOctoberMgr *this,TourismOctoberData *param_1)

{
  TourismOctoberData::operator=((TourismOctoberData *)(this + 8),param_1);
  return;
}

