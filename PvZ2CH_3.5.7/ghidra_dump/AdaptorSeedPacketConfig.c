// Class: AdaptorSeedPacketConfig


/* AdaptorSeedPacketConfig::~AdaptorSeedPacketConfig() */

void __thiscall AdaptorSeedPacketConfig::~AdaptorSeedPacketConfig(AdaptorSeedPacketConfig *this)

{
  std::_Destroy<AdaptorSeedPacketEntryConfig*>
            (*(AdaptorSeedPacketEntryConfig **)this,*(AdaptorSeedPacketEntryConfig **)(this + 8));
  std::_Vector_base<AdaptorSeedPacketEntryConfig,std::allocator<AdaptorSeedPacketEntryConfig>>::
  ~_Vector_base((_Vector_base<AdaptorSeedPacketEntryConfig,std::allocator<AdaptorSeedPacketEntryConfig>>
                 *)this);
  return;
}


/* AdaptorSeedPacketConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorSeedPacketConfig const&) */

AdaptorSeedPacketConfig * __thiscall
AdaptorSeedPacketConfig::operator=(AdaptorSeedPacketConfig *this,AdaptorSeedPacketConfig *param_1)

{
  std::vector<AdaptorSeedPacketEntryConfig,std::allocator<AdaptorSeedPacketEntryConfig>>::operator=
            ((vector<AdaptorSeedPacketEntryConfig,std::allocator<AdaptorSeedPacketEntryConfig>> *)
             this,(vector *)param_1);
  return this;
}


/* AdaptorSeedPacketConfig::Order() */

void __thiscall AdaptorSeedPacketConfig::Order(AdaptorSeedPacketConfig *this)

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
  FUN_033cce90(uVar1,uVar2);
  return;
}

