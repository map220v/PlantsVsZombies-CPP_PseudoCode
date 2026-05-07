// Class: EA::IO::DriveInfo32


/* EA::IO::DriveInfo32::DriveInfo32(char32_t const*, EA::IO::DriveType) */

void __thiscall
EA::IO::DriveInfo32::DriveInfo32(DriveInfo32 *this,wchar32 *param_1,undefined4 param_3)

{
  *(undefined4 *)this = param_3;
  eastl::fixed_string<char32_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>::fixed_string
            ((fixed_string<char32_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *)(this + 8));
  if (param_1 != (wchar32 *)0x0) {
    eastl::
    basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
    ::assign((basic_string<char32_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
              *)(this + 8),param_1);
    return;
  }
  return;
}

