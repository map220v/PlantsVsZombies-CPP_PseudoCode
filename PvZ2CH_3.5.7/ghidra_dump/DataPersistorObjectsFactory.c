// Class: DataPersistorObjectsFactory


/* DataPersistorObjectsFactory::DataPersistorObjectsFactory() */

void __thiscall
DataPersistorObjectsFactory::DataPersistorObjectsFactory(DataPersistorObjectsFactory *this)

{
  undefined8 uVar1;
  UserPrefsWrapper *pUVar2;
  ICloudWrapper *pIVar3;
  ServerConfigGetter *this_00;
  UUIDCreator *this_01;
  
  Sexy::LazySingleton<DataPersistorObjectsFactory>::LazySingleton
            ((LazySingleton<DataPersistorObjectsFactory> *)this);
  *(undefined ***)this = &PTR__DataPersistorObjectsFactory_0675ca50;
  uVar1 = ICloudWrapperFactory::CreateInstance();
  *(undefined8 *)(this + 8) = uVar1;
  this_01 = (UUIDCreator *)(this + 0x10);
  *(undefined8 *)this_01 = 0;
  UUIDCreator::UUIDCreator(this_01);
  NetworkStatusDecider::NetworkStatusDecider
            ((NetworkStatusDecider *)(this + 0x18),(ostream *)&DAT_06c49ed0);
  this_00 = (ServerConfigGetter *)(this + 0x28);
  *(undefined8 *)this_00 = 0;
  ServerConfigGetter::ServerConfigGetter(this_00);
  pIVar3 = *(ICloudWrapper **)(this + 8);
  pUVar2 = (UserPrefsWrapper *)UserPrefsWrapper::GetInstance();
  PlayerIdentityService::PlayerIdentityService
            ((PlayerIdentityService *)(this + 0x30),pIVar3,this_01,pUVar2,
             (MessageRouter *)gMessageRouter);
  DataPersistorFactory::DataPersistorFactory
            ((DataPersistorFactory *)(this + 0x78),(NetworkStatusDecider *)(this + 0x18),this_00,
             (PlayerIdentityService *)(this + 0x30));
  return;
}


/* DataPersistorObjectsFactory::~DataPersistorObjectsFactory() */

void __thiscall
DataPersistorObjectsFactory::~DataPersistorObjectsFactory(DataPersistorObjectsFactory *this)

{
  *(undefined ***)this = &PTR__DataPersistorObjectsFactory_0675ca50;
  DataPersistorFactory::~DataPersistorFactory((DataPersistorFactory *)(this + 0x78));
  PlayerIdentityService::~PlayerIdentityService((PlayerIdentityService *)(this + 0x30));
  Sexy::LazySingleton<DataPersistorObjectsFactory>::~LazySingleton
            ((LazySingleton<DataPersistorObjectsFactory> *)this);
  return;
}


/* DataPersistorObjectsFactory::~DataPersistorObjectsFactory() */

void __thiscall
DataPersistorObjectsFactory::~DataPersistorObjectsFactory(DataPersistorObjectsFactory *this)

{
  ~DataPersistorObjectsFactory(this);
  AK::FreeHook(this);
  return;
}

