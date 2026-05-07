// Class: Sexy::RtSerializeContext


/* Sexy::RtSerializeContext::RtSerializeContext(Sexy::RtSerialRtonSync*, Sexy::RtSerialRtonKey
   const&, Sexy::RtSerializeContext::EContextType) */

void __thiscall
Sexy::RtSerializeContext::RtSerializeContext
          (RtSerializeContext *this,undefined8 param_1,TGABagData *param_2,undefined4 param_4)

{
  *(undefined8 *)(this + 8) = param_1;
  *(undefined4 *)this = param_4;
  TGABagData::TGABagData((TGABagData *)(this + 0x10),param_2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* Sexy::RtSerializeContext::~RtSerializeContext() */

void __thiscall Sexy::RtSerializeContext::~RtSerializeContext(RtSerializeContext *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)(this + 0x10));
  return;
}

