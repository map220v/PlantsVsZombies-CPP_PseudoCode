// Class: AdaptorNewPVPTrainingConfig


/* AdaptorNewPVPTrainingConfig::~AdaptorNewPVPTrainingConfig() */

void __thiscall
AdaptorNewPVPTrainingConfig::~AdaptorNewPVPTrainingConfig(AdaptorNewPVPTrainingConfig *this)

{
  FUN_034b1000(*(undefined8 *)this);
  return;
}


/* AdaptorNewPVPTrainingConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorNewPVPTrainingConfig const&) */

AdaptorNewPVPTrainingConfig * __thiscall
AdaptorNewPVPTrainingConfig::operator=
          (AdaptorNewPVPTrainingConfig *this,AdaptorNewPVPTrainingConfig *param_1)

{
  std::vector<AdaptorNewPVPTrainingEntryConfig,std::allocator<AdaptorNewPVPTrainingEntryConfig>>::
  operator=((vector<AdaptorNewPVPTrainingEntryConfig,std::allocator<AdaptorNewPVPTrainingEntryConfig>>
             *)this,(vector *)param_1);
  return this;
}


/* AdaptorNewPVPTrainingConfig::Order() */

void __thiscall AdaptorNewPVPTrainingConfig::Order(AdaptorNewPVPTrainingConfig *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  FUN_034f3110(uVar1,uVar2);
  return;
}

