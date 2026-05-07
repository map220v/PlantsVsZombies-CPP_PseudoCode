// Class: Sexy::AndroidFileSearch


/* Sexy::AndroidFileSearch::~AndroidFileSearch() */

void __thiscall Sexy::AndroidFileSearch::~AndroidFileSearch(AndroidFileSearch *this)

{
  *(undefined ***)this = &PTR__AndroidFileSearch_06a349d0;
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  return;
}


/* Sexy::AndroidFileSearch::~AndroidFileSearch() */

void __thiscall Sexy::AndroidFileSearch::~AndroidFileSearch(AndroidFileSearch *this)

{
  ~AndroidFileSearch(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AndroidFileSearch::AndroidFileSearch(std::string const&, std::string const&, DIR*) */

void __thiscall
Sexy::AndroidFileSearch::AndroidFileSearch
          (AndroidFileSearch *this,string *param_1,string *param_2,DIR *param_3)

{
  IFileSearch::IFileSearch((IFileSearch *)this);
  *(undefined ***)this = &PTR__AndroidFileSearch_06a349d0;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  thunk_FUN_05475e00(this + 0x20,param_1);
  thunk_FUN_05475e00(this + 0x18,param_2);
  *(DIR **)(this + 0x10) = param_3;
  return;
}

