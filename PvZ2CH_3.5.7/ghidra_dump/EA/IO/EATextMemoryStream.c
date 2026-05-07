// Class: EA::IO::EATextMemoryStream


/* EA::IO::EATextMemoryStream::EATextMemoryStream(void*, unsigned long, bool, bool,
   EA::Allocator::ICoreAllocator*) */

void __thiscall
EA::IO::EATextMemoryStream::EATextMemoryStream
          (EATextMemoryStream *this,void *param_1,ulong param_2,bool param_3,bool param_4,
          ICoreAllocator *param_5)

{
  MemoryStream::MemoryStream
            ((MemoryStream *)this,param_1,param_2,param_3,param_4,param_5,(char *)0x0);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__EATextMemoryStream_06a36c50;
  return;
}


/* EA::IO::EATextMemoryStream::~EATextMemoryStream() */

void __thiscall EA::IO::EATextMemoryStream::~EATextMemoryStream(EATextMemoryStream *this)

{
  *(undefined ***)this = &PTR__EATextMemoryStream_06a36c50;
  MemoryStream::~MemoryStream((MemoryStream *)this);
  return;
}


/* EA::IO::EATextMemoryStream::~EATextMemoryStream() */

void __thiscall EA::IO::EATextMemoryStream::~EATextMemoryStream(EATextMemoryStream *this)

{
  ~EATextMemoryStream(this);
  AK::FreeHook(this);
  return;
}


/* EA::IO::EATextMemoryStream::Release() */

int __thiscall EA::IO::EATextMemoryStream::Release(EATextMemoryStream *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x28) < 2) {
    iVar1 = 0;
    if (*(ICoreAllocator **)(this + 0x58) != (ICoreAllocator *)0x0) {
      Allocator::detail::DeleteObject<EA::Text::Font>
                (*(ICoreAllocator **)(this + 0x58),(Font *)this);
      return 0;
    }
  }
  else {
    iVar1 = *(int *)(this + 0x28) + -1;
    *(int *)(this + 0x28) = iVar1;
  }
  return iVar1;
}

