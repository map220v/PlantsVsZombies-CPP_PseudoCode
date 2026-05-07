// Class: Reflection::CRefNamedSymbolCollection


/* Reflection::CRefNamedSymbolCollection::InternalAddSymbol(std::string const&,
   Reflection::RSymbol*) */

void __thiscall
Reflection::CRefNamedSymbolCollection::InternalAddSymbol
          (CRefNamedSymbolCollection *this,string *param_1,RSymbol *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  RSymbol *local_8;
  
  local_8 = param_2;
  std::vector<Reflection::RSymbol*,std::allocator<Reflection::RSymbol*>>::push_back
            ((vector<Reflection::RSymbol*,std::allocator<Reflection::RSymbol*>> *)this,&local_8);
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)
             std::
             map<std::string,Reflection::RSymbol*,std::less<std::string>,std::allocator<std::pair<std::string_const,Reflection::RSymbol*>>>
             ::operator[]((map<std::string,Reflection::RSymbol*,std::less<std::string>,std::allocator<std::pair<std::string_const,Reflection::RSymbol*>>>
                           *)(this + 0x18),param_1);
    *puVar2 = local_8;
  }
  return;
}


/* Reflection::CRefNamedSymbolCollection::GetCount() const */

void __thiscall Reflection::CRefNamedSymbolCollection::GetCount(CRefNamedSymbolCollection *this)

{
  FUN_04ab9c2c(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return;
}


/* Reflection::CRefNamedSymbolCollection::CRefNamedSymbolCollection() */

void __thiscall
Reflection::CRefNamedSymbolCollection::CRefNamedSymbolCollection(CRefNamedSymbolCollection *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x18));
  this[0x48] = (CRefNamedSymbolCollection)0x0;
  return;
}


/* Reflection::CRefNamedSymbolCollection::~CRefNamedSymbolCollection() */

void __thiscall
Reflection::CRefNamedSymbolCollection::~CRefNamedSymbolCollection(CRefNamedSymbolCollection *this)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (this[0x48] == (CRefNamedSymbolCollection)0x0) {
    uVar3 = *(undefined8 *)this;
    uVar1 = FUN_0517ecf8(uVar3,*(undefined8 *)(this + 8));
    if (uVar1 != 0) {
      lVar4 = 0;
      while( true ) {
        plVar2 = (long *)FUN_0517f08c(uVar3,lVar4);
        plVar2 = (long *)*plVar2;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        if (uVar1 <= (uint)(lVar4 + 1)) break;
        uVar3 = *(undefined8 *)this;
        lVar4 = lVar4 + 1;
      }
    }
  }
  std::
  map<std::string,Reflection::RSymbol*,std::less<std::string>,std::allocator<std::pair<std::string_const,Reflection::RSymbol*>>>
  ::~map((map<std::string,Reflection::RSymbol*,std::less<std::string>,std::allocator<std::pair<std::string_const,Reflection::RSymbol*>>>
          *)(this + 0x18));
  std::vector<Reflection::RSymbol*,std::allocator<Reflection::RSymbol*>>::~vector
            ((vector<Reflection::RSymbol*,std::allocator<Reflection::RSymbol*>> *)this);
  return;
}

