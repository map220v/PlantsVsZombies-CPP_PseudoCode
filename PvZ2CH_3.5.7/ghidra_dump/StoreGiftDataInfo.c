// Class: StoreGiftDataInfo


/* StoreGiftDataInfo::StoreGiftDataInfo() */

void __thiscall StoreGiftDataInfo::StoreGiftDataInfo(StoreGiftDataInfo *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  size_t in_x2;
  
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  Set8BytesTo0((string *)(this + 0x58));
  *(undefined4 *)(this + 8) = 0;
  std::vector<GiftPlantData,std::allocator<GiftPlantData>>::clear
            ((vector<GiftPlantData,std::allocator<GiftPlantData>> *)(this + 0x10));
  std::vector<GiftPlantAvatarData,std::allocator<GiftPlantAvatarData>>::clear
            ((vector<GiftPlantAvatarData,std::allocator<GiftPlantAvatarData>> *)this_00);
  std::vector<GiftPlantAvatarData,std::allocator<GiftPlantAvatarData>>::clear
            ((vector<GiftPlantAvatarData,std::allocator<GiftPlantAvatarData>> *)this_00);
  std::string::append((string *)(this + 0x58),"",in_x2);
  return;
}


/* StoreGiftDataInfo::~StoreGiftDataInfo() */

void __thiscall StoreGiftDataInfo::~StoreGiftDataInfo(StoreGiftDataInfo *this)

{
  std::string::~string((string *)(this + 0x58));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  std::vector<GiftPlantAvatarData,std::allocator<GiftPlantAvatarData>>::~vector
            ((vector<GiftPlantAvatarData,std::allocator<GiftPlantAvatarData>> *)(this + 0x28));
  std::vector<GiftPlantData,std::allocator<GiftPlantData>>::~vector
            ((vector<GiftPlantData,std::allocator<GiftPlantData>> *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


/* StoreGiftDataInfo::StoreGiftDataInfo(StoreGiftDataInfo const&) */

void __thiscall
StoreGiftDataInfo::StoreGiftDataInfo(StoreGiftDataInfo *this,StoreGiftDataInfo *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<GiftPlantData,std::allocator<GiftPlantData>>::vector
            ((vector<GiftPlantData,std::allocator<GiftPlantData>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<GiftPlantAvatarData,std::allocator<GiftPlantAvatarData>>::vector
            ((vector<GiftPlantAvatarData,std::allocator<GiftPlantAvatarData>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40),
             (vector *)(param_1 + 0x40));
  FUN_05475d88(this + 0x58,param_1 + 0x58);
  return;
}

