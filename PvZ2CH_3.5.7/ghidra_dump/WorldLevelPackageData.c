// Class: WorldLevelPackageData


/* WorldLevelPackageData::~WorldLevelPackageData() */

void __thiscall WorldLevelPackageData::~WorldLevelPackageData(WorldLevelPackageData *this)

{
  std::vector<WorldLevelPackageItem,std::allocator<WorldLevelPackageItem>>::~vector
            ((vector<WorldLevelPackageItem,std::allocator<WorldLevelPackageItem>> *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* WorldLevelPackageData::WorldLevelPackageData() */

void __thiscall WorldLevelPackageData::WorldLevelPackageData(WorldLevelPackageData *this)

{
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::operator==((string *)this,"");
  std::vector<WorldLevelPackageItem,std::allocator<WorldLevelPackageItem>>::clear
            ((vector<WorldLevelPackageItem,std::allocator<WorldLevelPackageItem>> *)(this + 8));
  return;
}


/* WorldLevelPackageData::WorldLevelPackageData(WorldLevelPackageData const&) */

void __thiscall
WorldLevelPackageData::WorldLevelPackageData
          (WorldLevelPackageData *this,WorldLevelPackageData *param_1)

{
  FUN_05475d88();
  std::vector<WorldLevelPackageItem,std::allocator<WorldLevelPackageItem>>::vector
            ((vector<WorldLevelPackageItem,std::allocator<WorldLevelPackageItem>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* WorldLevelPackageData::TEMPNAMEPLACEHOLDERVALUE(WorldLevelPackageData const&) */

WorldLevelPackageData * __thiscall
WorldLevelPackageData::operator=(WorldLevelPackageData *this,WorldLevelPackageData *param_1)

{
  thunk_FUN_05475e00();
  std::vector<WorldLevelPackageItem,std::allocator<WorldLevelPackageItem>>::operator=
            ((vector<WorldLevelPackageItem,std::allocator<WorldLevelPackageItem>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

