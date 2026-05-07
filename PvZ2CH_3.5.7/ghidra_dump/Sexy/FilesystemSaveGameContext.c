// Class: Sexy::FilesystemSaveGameContext


/* Sexy::FilesystemSaveGameContext::GetBuffer() */

FilesystemSaveGameContext * __thiscall
Sexy::FilesystemSaveGameContext::GetBuffer(FilesystemSaveGameContext *this)

{
  return this + 0x28;
}


/* Sexy::FilesystemSaveGameContext::Destroy() */

void __thiscall Sexy::FilesystemSaveGameContext::Destroy(FilesystemSaveGameContext *this)

{
  if (this != (FilesystemSaveGameContext *)0x0) {
    (**(code **)(*(long *)this + 8))();
  }
  return;
}


/* Sexy::FilesystemSaveGameContext::HasError() */

FilesystemSaveGameContext __thiscall
Sexy::FilesystemSaveGameContext::HasError(FilesystemSaveGameContext *this)

{
  return this[9];
}


/* Sexy::FilesystemSaveGameContext::GetPlayer() */

undefined8 __thiscall Sexy::FilesystemSaveGameContext::GetPlayer(FilesystemSaveGameContext *this)

{
  return *(undefined8 *)(this + 0x10);
}


/* Sexy::FilesystemSaveGameContext::GetSaveName() */

FilesystemSaveGameContext * __thiscall
Sexy::FilesystemSaveGameContext::GetSaveName(FilesystemSaveGameContext *this)

{
  return this + 0x18;
}


/* Sexy::FilesystemSaveGameContext::IsDone() */

FilesystemSaveGameContext __thiscall
Sexy::FilesystemSaveGameContext::IsDone(FilesystemSaveGameContext *this)

{
  FilesystemSaveGameContext FVar1;
  
  FVar1 = (FilesystemSaveGameContext)0x0;
  if (this[9] == (FilesystemSaveGameContext)0x0) {
    FVar1 = this[8];
  }
  return FVar1;
}


/* Sexy::FilesystemSaveGameContext::GetDisplayDetails() */

undefined8 * Sexy::FilesystemSaveGameContext::GetDisplayDetails(void)

{
  return &mEmptySexyString;
}


/* Sexy::FilesystemSaveGameContext::GetIconFilename() */

undefined8 * Sexy::FilesystemSaveGameContext::GetIconFilename(void)

{
  return &mEmptyString;
}


/* Sexy::FilesystemSaveGameContext::FilesystemSaveGameContext(Sexy::UserProfile*, std::string
   const&) */

void __thiscall
Sexy::FilesystemSaveGameContext::FilesystemSaveGameContext
          (FilesystemSaveGameContext *this,UserProfile *param_1,string *param_2)

{
  ISaveGameContext::ISaveGameContext((ISaveGameContext *)this);
  *(undefined ***)this = &PTR__FilesystemSaveGameContext_06a35170;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Buffer::Buffer((Buffer *)(this + 0x28));
  *(UserProfile **)(this + 0x10) = param_1;
  thunk_FUN_05475e00(this + 0x18,param_2);
  this[8] = (FilesystemSaveGameContext)0x0;
  this[9] = (FilesystemSaveGameContext)0x0;
  return;
}


/* Sexy::FilesystemSaveGameContext::~FilesystemSaveGameContext() */

void __thiscall
Sexy::FilesystemSaveGameContext::~FilesystemSaveGameContext(FilesystemSaveGameContext *this)

{
  *(undefined ***)this = &PTR__FilesystemSaveGameContext_06a35170;
  Buffer::~Buffer((Buffer *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  return;
}


/* Sexy::FilesystemSaveGameContext::~FilesystemSaveGameContext() */

void __thiscall
Sexy::FilesystemSaveGameContext::~FilesystemSaveGameContext(FilesystemSaveGameContext *this)

{
  ~FilesystemSaveGameContext(this);
  AK::FreeHook(this);
  return;
}

