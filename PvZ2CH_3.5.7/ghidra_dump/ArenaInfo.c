// Class: ArenaInfo


/* ArenaInfo::~ArenaInfo() */

void __thiscall ArenaInfo::~ArenaInfo(ArenaInfo *this)

{
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::~vector
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)(this + 0x30));
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::~vector
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)(this + 0x18));
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::~vector
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)this);
  return;
}


/* ArenaInfo::ArenaInfo() */

void __thiscall ArenaInfo::ArenaInfo(ArenaInfo *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::clear
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)this);
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::clear
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)(this + 0x18));
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::clear
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)(this + 0x30));
  return;
}


/* ArenaInfo::TEMPNAMEPLACEHOLDERVALUE(ArenaInfo const&) */

ArenaInfo * __thiscall ArenaInfo::operator=(ArenaInfo *this,ArenaInfo *param_1)

{
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::operator=
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)this,(vector *)param_1);
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::operator=
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::operator=
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  return this;
}


/* ArenaInfo::ArenaInfo(ArenaInfo const&) */

void __thiscall ArenaInfo::ArenaInfo(ArenaInfo *this,ArenaInfo *param_1)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::operator=
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)this,(vector *)param_1);
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::operator=
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::operator=
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  return;
}


/* ArenaInfo::RestartArenaInfo() */

void __thiscall ArenaInfo::RestartArenaInfo(ArenaInfo *this)

{
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::clear
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)this);
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::clear
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)(this + 0x18));
  std::vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>>::clear
            ((vector<ArenaPlantInfo,std::allocator<ArenaPlantInfo>> *)(this + 0x30));
  return;
}

