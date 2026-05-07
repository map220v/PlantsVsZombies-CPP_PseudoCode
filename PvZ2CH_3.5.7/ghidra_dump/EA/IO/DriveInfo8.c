// Class: EA::IO::DriveInfo8


/* EA::IO::DriveInfo8::~DriveInfo8() */

void __thiscall EA::IO::DriveInfo8::~DriveInfo8(DriveInfo8 *this)

{
  eastl::fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator>::~fixed_string
            ((fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *)(this + 8));
  return;
}


/* EA::IO::DriveInfo8::DriveInfo8(char const*, EA::IO::DriveType) */

void __thiscall EA::IO::DriveInfo8::DriveInfo8(DriveInfo8 *this,char *param_1,undefined4 param_3)

{
  *(undefined4 *)this = param_3;
  eastl::fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator>::fixed_string
            ((fixed_string<char,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *)(this + 8));
  if (param_1 != (char *)0x0) {
    eastl::
    basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
    ::assign((basic_string<char,eastl::fixed_vector_allocator<1ul,20ul,1ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
              *)(this + 8),param_1);
    return;
  }
  return;
}

