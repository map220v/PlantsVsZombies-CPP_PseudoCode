// Class: EA::IO::DriveInfo16


/* EA::IO::DriveInfo16::DriveInfo16(char16_t const*, EA::IO::DriveType) */

void __thiscall
EA::IO::DriveInfo16::DriveInfo16(DriveInfo16 *this,wchar16 *param_1,undefined4 param_3)

{
  *(undefined4 *)this = param_3;
  eastl::fixed_string<char16_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>::fixed_string
            ((fixed_string<char16_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *)(this + 8));
  if (param_1 != (wchar16 *)0x0) {
    eastl::
    basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
    ::assign((basic_string<char16_t,eastl::fixed_vector_allocator<2ul,20ul,2ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
              *)(this + 8),param_1);
    return;
  }
  return;
}

