// Class: S2C_LoadPlayerProfileData


/* S2C_LoadPlayerProfileData::S2C_LoadPlayerProfileData() */

void __thiscall
S2C_LoadPlayerProfileData::S2C_LoadPlayerProfileData(S2C_LoadPlayerProfileData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06611b10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  Set8BytesTo0(this + 0x48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 8) = 0x15;
  return;
}


/* S2C_LoadPlayerProfileData::~S2C_LoadPlayerProfileData() */

void __thiscall
S2C_LoadPlayerProfileData::~S2C_LoadPlayerProfileData(S2C_LoadPlayerProfileData *this)

{
  *(undefined ***)this = &PTR_GetClass_06611b10;
  std::vector<PlantPieceRecord,std::allocator<PlantPieceRecord>>::~vector
            ((vector<PlantPieceRecord,std::allocator<PlantPieceRecord>> *)(this + 0xa0));
  std::vector<WorldSpecificKeys,std::allocator<WorldSpecificKeys>>::~vector
            ((vector<WorldSpecificKeys,std::allocator<WorldSpecificKeys>> *)(this + 0x88));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x70));
  std::vector<GameFeature,std::allocator<GameFeature>>::~vector
            ((vector<GameFeature,std::allocator<GameFeature>> *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::vector<DeltaWorldMapEventInfo,std::allocator<DeltaWorldMapEventInfo>>::~vector
            ((vector<DeltaWorldMapEventInfo,std::allocator<DeltaWorldMapEventInfo>> *)(this + 0x30))
  ;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  nop();
  return;
}

