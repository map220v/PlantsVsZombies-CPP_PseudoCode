// Class: ModuleConfig


/* ModuleConfig::~ModuleConfig() */

void __thiscall ModuleConfig::~ModuleConfig(ModuleConfig *this)

{
  std::vector<DefaultWave,std::allocator<DefaultWave>>::~vector
            ((vector<DefaultWave,std::allocator<DefaultWave>> *)(this + 0x48));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* ModuleConfig::ModuleConfig() */

void __thiscall ModuleConfig::ModuleConfig(ModuleConfig *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  Set8BytesTo0(this + 0x28);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}

