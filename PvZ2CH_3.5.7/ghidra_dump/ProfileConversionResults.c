// Class: ProfileConversionResults


/* ProfileConversionResults::~ProfileConversionResults() */

void __thiscall ProfileConversionResults::~ProfileConversionResults(ProfileConversionResults *this)

{
  std::
  vector<ProfileConversionResults::LevelChange,std::allocator<ProfileConversionResults::LevelChange>>
  ::~vector((vector<ProfileConversionResults::LevelChange,std::allocator<ProfileConversionResults::LevelChange>>
             *)(this + 0x60));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  return;
}


/* ProfileConversionResults::ProfileConversionResults() */

void __thiscall ProfileConversionResults::ProfileConversionResults(ProfileConversionResults *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  *this = (ProfileConversionResults)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* ProfileConversionResults::TEMPNAMEPLACEHOLDERVALUE(ProfileConversionResults const&) */

ProfileConversionResults * __thiscall
ProfileConversionResults::operator=
          (ProfileConversionResults *this,ProfileConversionResults *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ProfileConversionResults PVar4;
  
  PVar4 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *this = PVar4;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::
  vector<ProfileConversionResults::LevelChange,std::allocator<ProfileConversionResults::LevelChange>>
  ::operator=((vector<ProfileConversionResults::LevelChange,std::allocator<ProfileConversionResults::LevelChange>>
               *)(this + 0x60),(vector *)(param_1 + 0x60));
  return this;
}


/* ProfileConversionResults::ProfileConversionResults(ProfileConversionResults const&) */

void __thiscall
ProfileConversionResults::ProfileConversionResults
          (ProfileConversionResults *this,ProfileConversionResults *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ProfileConversionResults PVar4;
  
  PVar4 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *this = PVar4;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::
  vector<ProfileConversionResults::LevelChange,std::allocator<ProfileConversionResults::LevelChange>>
  ::vector((vector<ProfileConversionResults::LevelChange,std::allocator<ProfileConversionResults::LevelChange>>
            *)(this + 0x60),(vector *)(param_1 + 0x60));
  return;
}

