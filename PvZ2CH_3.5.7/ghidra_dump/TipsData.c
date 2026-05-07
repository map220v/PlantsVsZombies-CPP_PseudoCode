// Class: TipsData


/* TipsData::TipsData() */

void __thiscall TipsData::TipsData(TipsData *this)

{
  TipsPropertyData::TipsPropertyData((TipsPropertyData *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *this = (TipsData)0x1;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30));
  return;
}


/* TipsData::~TipsData() */

void __thiscall TipsData::~TipsData(TipsData *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  PakRecord::~PakRecord((PakRecord *)(this + 8));
  return;
}


/* TipsData::TipsData(TipsData const&) */

void __thiscall TipsData::TipsData(TipsData *this,TipsData *param_1)

{
  *this = *param_1;
  GriditemBarrelZombieDes::GriditemBarrelZombieDes
            ((GriditemBarrelZombieDes *)(this + 8),(GriditemBarrelZombieDes *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  return;
}

