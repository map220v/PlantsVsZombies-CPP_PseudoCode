// Class: StreamingMusicGroup


/* StreamingMusicGroup::~StreamingMusicGroup() */

void __thiscall StreamingMusicGroup::~StreamingMusicGroup(StreamingMusicGroup *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* StreamingMusicGroup::StreamingMusicGroup() */

void __thiscall StreamingMusicGroup::StreamingMusicGroup(StreamingMusicGroup *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}

