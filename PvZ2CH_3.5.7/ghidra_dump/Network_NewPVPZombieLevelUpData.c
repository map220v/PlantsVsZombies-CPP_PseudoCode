// Class: Network_NewPVPZombieLevelUpData


/* Network_NewPVPZombieLevelUpData::~Network_NewPVPZombieLevelUpData() */

void __thiscall
Network_NewPVPZombieLevelUpData::~Network_NewPVPZombieLevelUpData
          (Network_NewPVPZombieLevelUpData *this)

{
  std::
  vector<Network_NewPVPZombieLevelUpValueData,std::allocator<Network_NewPVPZombieLevelUpValueData>>
  ::~vector((vector<Network_NewPVPZombieLevelUpValueData,std::allocator<Network_NewPVPZombieLevelUpValueData>>
             *)(this + 8));
  return;
}


/* Network_NewPVPZombieLevelUpData::Network_NewPVPZombieLevelUpData(Network_NewPVPZombieLevelUpData
   const&) */

void __thiscall
Network_NewPVPZombieLevelUpData::Network_NewPVPZombieLevelUpData
          (Network_NewPVPZombieLevelUpData *this,Network_NewPVPZombieLevelUpData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::
  vector<Network_NewPVPZombieLevelUpValueData,std::allocator<Network_NewPVPZombieLevelUpValueData>>
  ::vector((vector<Network_NewPVPZombieLevelUpValueData,std::allocator<Network_NewPVPZombieLevelUpValueData>>
            *)(this + 8),(vector *)(param_1 + 8));
  return;
}

