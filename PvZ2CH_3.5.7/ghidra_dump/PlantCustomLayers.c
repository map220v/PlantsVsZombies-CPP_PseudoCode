// Class: PlantCustomLayers


/* PlantCustomLayers::TEMPNAMEPLACEHOLDERVALUE(PlantCustomLayers const&) const */

ulong __thiscall PlantCustomLayers::operator<(PlantCustomLayers *this,PlantCustomLayers *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_054748a4();
  return uVar1 >> 0x1f & 1;
}


/* PlantCustomLayers::PlantCustomLayers() */

void __thiscall PlantCustomLayers::PlantCustomLayers(PlantCustomLayers *this)

{
  Set8BytesTo0();
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  return;
}


/* PlantCustomLayers::PlantCustomLayers(std::string const&) */

void __thiscall PlantCustomLayers::PlantCustomLayers(PlantCustomLayers *this,string *param_1)

{
  FUN_05475d88();
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  return;
}


/* PlantCustomLayers::~PlantCustomLayers() */

void __thiscall PlantCustomLayers::~PlantCustomLayers(PlantCustomLayers *this)

{
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* PlantCustomLayers::PlantCustomLayers(PlantCustomLayers&&) */

void __thiscall
PlantCustomLayers::PlantCustomLayers(PlantCustomLayers *this,PlantCustomLayers *param_1)

{
  FUN_05474148();
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 8),
             (set *)(param_1 + 8));
  return;
}


/* PlantCustomLayers::TEMPNAMEPLACEHOLDERVALUE(PlantCustomLayers&&) */

PlantCustomLayers * __thiscall
PlantCustomLayers::operator=(PlantCustomLayers *this,PlantCustomLayers *param_1)

{
  FUN_05474278();
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::operator=
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 8),
             (set *)(param_1 + 8));
  return this;
}


/* PlantCustomLayers::PlantCustomLayers(PlantCustomLayers const&) */

void __thiscall
PlantCustomLayers::PlantCustomLayers(PlantCustomLayers *this,PlantCustomLayers *param_1)

{
  FUN_05475d88();
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 8),
             (set *)(param_1 + 8));
  return;
}

