// Class: EA::Text::TextureInfo


/* EA::Text::TextureInfo::AddRef() */

void __thiscall EA::Text::TextureInfo::AddRef(TextureInfo *this)

{
  Thread::AtomicInt<int>::operator++((AtomicInt<int> *)(this + 0x140));
  return;
}


/* EA::Text::TextureInfo::Release() */

int __thiscall EA::Text::TextureInfo::Release(TextureInfo *this)

{
  int iVar1;
  
  iVar1 = Thread::AtomicInt<int>::Decrement((AtomicInt<int> *)(this + 0x140));
  if (iVar1 == 0) {
    Sexy::AtomicSet((int *)(this + 0x140),1);
    if (*(ICoreAllocator **)(this + 0x148) != (ICoreAllocator *)0x0) {
      Allocator::detail::DeleteObject<EA::Text::Font>
                (*(ICoreAllocator **)(this + 0x148),(Font *)this);
      return 0;
    }
  }
  return iVar1;
}


/* EA::Text::TextureInfo::~TextureInfo() */

void __thiscall EA::Text::TextureInfo::~TextureInfo(TextureInfo *this)

{
  *(undefined ***)this = &PTR__TextureInfo_06a37eb0;
  eastl::vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~vector((vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *
          )(this + 0x40));
  return;
}


/* EA::Text::TextureInfo::~TextureInfo() */

void __thiscall EA::Text::TextureInfo::~TextureInfo(TextureInfo *this)

{
  ~TextureInfo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::TextureInfo::TextureInfo() */

void __thiscall EA::Text::TextureInfo::TextureInfo(TextureInfo *this)

{
  long lVar1;
  ICoreAllocator *pIVar2;
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_18 [16];
  long local_8;
  
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__TextureInfo_06a37eb0;
  pIVar2 = (ICoreAllocator *)Allocator::ICoreAllocator::GetDefaultAllocator();
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,(char *)0x0,pIVar2);
  eastl::vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  vector((vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *)
         (this + 0x40),(CoreAllocatorAdapter *)aCStack_18);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  this[0x13d] = (TextureInfo)0x1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  this[0x11c] = (TextureInfo)0x0;
  *(undefined4 *)(this + 0x80) = 0;
  Thread::AtomicInt<int>::AtomicInt((AtomicInt<int> *)(this + 0x140),0);
  *(undefined8 *)(this + 0x148) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x11d) = 0;
  *(undefined8 *)(this + 0x125) = 0;
  *(undefined8 *)(this + 0x12d) = 0;
  *(undefined8 *)(this + 0x135) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

