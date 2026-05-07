// Class: DuplicatableProps


/* DuplicatableProps::DuplicatableProps() */

void __thiscall DuplicatableProps::DuplicatableProps(DuplicatableProps *this)

{
  *(undefined4 *)this = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* DuplicatableProps::TEMPNAMEPLACEHOLDERVALUE(DuplicatableProps&&) */

DuplicatableProps * __thiscall
DuplicatableProps::operator=(DuplicatableProps *this,DuplicatableProps *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::
  vector<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>,std::allocator<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>>>
  ::operator=((vector<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>,std::allocator<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>>>
               *)(this + 8),(vector *)(param_1 + 8));
  return this;
}


/* DuplicatableProps::~DuplicatableProps() */

void __thiscall DuplicatableProps::~DuplicatableProps(DuplicatableProps *this)

{
  std::
  vector<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>,std::allocator<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>>>
  ::~vector((vector<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>,std::allocator<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>>>
             *)(this + 8));
  return;
}

