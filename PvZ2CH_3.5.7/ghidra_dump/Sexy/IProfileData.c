// Class: Sexy::IProfileData


/* Sexy::IProfileData::IProfileData() */

void __thiscall Sexy::IProfileData::IProfileData(IProfileData *this)

{
  *(undefined **)this = &DAT_06a35650;
  return;
}


/* Sexy::IProfileData::CreateProfileData(Sexy::UserProfile*) */

NullProfileData * Sexy::IProfileData::CreateProfileData(UserProfile *param_1)

{
  NullProfileData *this;
  
  this = ::operator_new(0x18);
  NullProfileData::NullProfileData(this);
  return this;
}

