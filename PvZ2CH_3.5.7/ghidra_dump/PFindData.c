// Class: PFindData


/* PFindData::~PFindData() */

void __thiscall PFindData::~PFindData(PFindData *this)

{
  *(undefined ***)this = &PTR__PFindData_06a328c0;
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  return;
}


/* PFindData::~PFindData() */

void __thiscall PFindData::~PFindData(PFindData *this)

{
  ~PFindData(this);
  AK::FreeHook(this);
  return;
}


/* PFindData::PFindData() */

void __thiscall PFindData::PFindData(PFindData *this)

{
  Sexy::IFileSearch::IFileSearch((IFileSearch *)this);
  *(undefined ***)this = &PTR__PFindData_06a328c0;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 1;
  return;
}

