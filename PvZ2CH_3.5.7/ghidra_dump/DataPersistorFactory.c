// Class: DataPersistorFactory


/* DataPersistorFactory::GetOfflinePersistor() */

void __thiscall DataPersistorFactory::GetOfflinePersistor(DataPersistorFactory *this)

{
  (**(code **)(*(long *)this + 0x18))();
  return;
}


/* DataPersistorFactory::DataPersistorFactory(NetworkStatusDecider const&, ServerConfigGetter&,
   PlayerIdentityService&) */

void __thiscall
DataPersistorFactory::DataPersistorFactory
          (DataPersistorFactory *this,NetworkStatusDecider *param_1,ServerConfigGetter *param_2,
          PlayerIdentityService *param_3)

{
  *(undefined ***)this = &PTR__DataPersistorFactory_0675c9a0;
  OfflineDataPersistor::OfflineDataPersistor((OfflineDataPersistor *)(this + 8),"pp.dat",0x37);
  PlayerInfoDeltaHandler::PlayerInfoDeltaHandler((PlayerInfoDeltaHandler *)(this + 0x20));
  OnlineDataPersistor::OnlineDataPersistor
            ((OnlineDataPersistor *)(this + 0x38),param_2,param_3,(IDataPersistor *)(this + 8),
             (PlayerInfoDeltaHandler *)(this + 0x20));
  *(ServerConfigGetter **)(this + 0xb8) = param_2;
  *(NetworkStatusDecider **)(this + 0xc0) = param_1;
  return;
}


/* DataPersistorFactory::~DataPersistorFactory() */

void __thiscall DataPersistorFactory::~DataPersistorFactory(DataPersistorFactory *this)

{
  *(undefined ***)this = &PTR__DataPersistorFactory_0675c9a0;
  OnlineDataPersistor::~OnlineDataPersistor((OnlineDataPersistor *)(this + 0x38));
  PlayerInfoDeltaHandler::~PlayerInfoDeltaHandler((PlayerInfoDeltaHandler *)(this + 0x20));
  OfflineDataPersistor::~OfflineDataPersistor((OfflineDataPersistor *)(this + 8));
  return;
}


/* DataPersistorFactory::~DataPersistorFactory() */

void __thiscall DataPersistorFactory::~DataPersistorFactory(DataPersistorFactory *this)

{
  ~DataPersistorFactory(this);
  AK::FreeHook(this);
  return;
}

