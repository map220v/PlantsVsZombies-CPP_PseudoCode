// Class: Sexy::PITexture


/* Sexy::PITexture::PITexture() */

void __thiscall Sexy::PITexture::PITexture(PITexture *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  Set8BytesTo0(this + 0x18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* Sexy::PITexture::~PITexture() */

void __thiscall Sexy::PITexture::~PITexture(PITexture *this)

{
  RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<Sexy::RtMixedPtr<Sexy::Image>,std::allocator<Sexy::RtMixedPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtMixedPtr<Sexy::Image>,std::allocator<Sexy::RtMixedPtr<Sexy::Image>>> *)
             (this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>>::~vector
            ((vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>> *)this);
  return;
}

