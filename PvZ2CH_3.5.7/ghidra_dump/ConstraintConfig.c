// Class: ConstraintConfig


/* ConstraintConfig::~ConstraintConfig() */

void __thiscall ConstraintConfig::~ConstraintConfig(ConstraintConfig *this)

{
  std::
  map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>::
  ~map((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
        *)(this + 0x30));
  std::
  map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
  ::~map((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
          *)this);
  return;
}


/* ConstraintConfig::ConstraintConfig(ConstraintConfig const&) */

void __thiscall ConstraintConfig::ConstraintConfig(ConstraintConfig *this,ConstraintConfig *param_1)

{
  std::
  map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
  ::map((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
         *)this,(map *)param_1);
  std::
  map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>::
  map((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
       *)(this + 0x30),(map *)(param_1 + 0x30));
  return;
}


/* ConstraintConfig::TEMPNAMEPLACEHOLDERVALUE(ConstraintConfig const&) */

ConstraintConfig * __thiscall
ConstraintConfig::operator=(ConstraintConfig *this,ConstraintConfig *param_1)

{
  std::
  map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
  ::operator=((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
               *)this,(map *)param_1);
  std::
  map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>::
  operator=((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
             *)(this + 0x30),(map *)(param_1 + 0x30));
  return this;
}

