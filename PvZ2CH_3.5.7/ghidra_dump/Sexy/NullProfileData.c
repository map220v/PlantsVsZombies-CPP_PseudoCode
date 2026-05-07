// Class: Sexy::NullProfileData


/* Sexy::NullProfileData::GetGamepadIndex() const */

NullProfileData __thiscall Sexy::NullProfileData::GetGamepadIndex(NullProfileData *this)

{
  return this[0x10];
}


/* Sexy::NullProfileData::SetGamepadIndex(unsigned char) */

void __thiscall Sexy::NullProfileData::SetGamepadIndex(NullProfileData *this,uchar param_1)

{
  this[0x10] = (NullProfileData)param_1;
  return;
}


/* Sexy::NullProfileData::~NullProfileData() */

void __thiscall Sexy::NullProfileData::~NullProfileData(NullProfileData *this)

{
  *(undefined ***)this = &PTR__NullProfileData_06a35770;
  FUN_05476c50(this + 8);
  return;
}


/* Sexy::NullProfileData::~NullProfileData() */

void __thiscall Sexy::NullProfileData::~NullProfileData(NullProfileData *this)

{
  ~NullProfileData(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::NullProfileData::NullProfileData() */

void __thiscall Sexy::NullProfileData::NullProfileData(NullProfileData *this)

{
  IProfileData::IProfileData((IProfileData *)this);
  *(undefined ***)this = &PTR__NullProfileData_06a35770;
  FUN_05476574(this + 8);
  FUN_054772c4(this + 8,L"Test Profile");
  this[0x10] = (NullProfileData)0x0;
  return;
}

