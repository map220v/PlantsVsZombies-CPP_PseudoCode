// Class: EA::IO::EATextFileStream


/* EA::IO::EATextFileStream::EATextFileStream(char16_t const*) */

void __thiscall EA::IO::EATextFileStream::EATextFileStream(EATextFileStream *this,wchar16 *param_1)

{
  FileStream::FileStream((FileStream *)this,param_1);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR__EATextFileStream_06a36b70;
  return;
}


/* EA::IO::EATextFileStream::~EATextFileStream() */

void __thiscall EA::IO::EATextFileStream::~EATextFileStream(EATextFileStream *this)

{
  *(undefined ***)this = &PTR__EATextFileStream_06a36b70;
  FileStream::~FileStream((FileStream *)this);
  return;
}


/* EA::IO::EATextFileStream::~EATextFileStream() */

void __thiscall EA::IO::EATextFileStream::~EATextFileStream(EATextFileStream *this)

{
  ~EATextFileStream(this);
  AK::FreeHook(this);
  return;
}


/* EA::IO::EATextFileStream::Release() */

int __thiscall EA::IO::EATextFileStream::Release(EATextFileStream *this)

{
  int iVar1;
  
  if (*(int *)(this + 0xb8) < 2) {
    iVar1 = 0;
    if (*(ICoreAllocator **)(this + 0xd8) != (ICoreAllocator *)0x0) {
      Allocator::detail::DeleteObject<EA::Text::Font>
                (*(ICoreAllocator **)(this + 0xd8),(Font *)this);
      return 0;
    }
  }
  else {
    iVar1 = *(int *)(this + 0xb8) + -1;
    *(int *)(this + 0xb8) = iVar1;
  }
  return iVar1;
}

