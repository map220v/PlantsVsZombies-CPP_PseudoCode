// Class: EA::Text::FontServer::Face


/* EA::Text::FontServer::Face::~Face() */

void __thiscall EA::Text::FontServer::Face::~Face(Face *this)

{
  eastl::
  fixed_list<EA::Text::FontServer::FaceSource,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::~fixed_list((fixed_list<EA::Text::FontServer::FaceSource,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::Face::Face(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::FontServer::Face::Face(Face *this,ICoreAllocator *param_1)

{
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (ICoreAllocator *)0x0) {
    param_1 = (ICoreAllocator *)GetAllocator();
  }
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/FontServer/FaceMap",param_1);
  eastl::
  fixed_list<EA::Text::FontServer::FaceSource,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_list((fixed_list<EA::Text::FontServer::FaceSource,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x40),(CoreAllocatorAdapter *)aCStack_18);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::FontServer::Face::Face(EA::Text::FontServer::Face const&) */

void __thiscall EA::Text::FontServer::Face::Face(Face *this,Face *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = uVar1;
  eastl::
  fixed_list<EA::Text::FontServer::FaceSource,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_list((fixed_list<EA::Text::FontServer::FaceSource,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x40),(fixed_list *)(param_1 + 0x40));
  return;
}

