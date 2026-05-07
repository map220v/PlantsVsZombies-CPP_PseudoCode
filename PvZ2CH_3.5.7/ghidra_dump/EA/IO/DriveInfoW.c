// Class: EA::IO::DriveInfoW


/* EA::IO::DriveInfoW::DriveInfoW(wchar_t const*, EA::IO::DriveType) */

void __thiscall EA::IO::DriveInfoW::DriveInfoW(DriveInfoW *this,wchar_t *param_1,undefined4 param_3)

{
  *(undefined4 *)this = param_3;
  eastl::fixed_string<wchar_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator>::fixed_string
            ((fixed_string<wchar_t,20,true,EA::Allocator::EAIOEASTLCoreAllocator> *)(this + 8));
  if (param_1 != (wchar_t *)0x0) {
    eastl::
    basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
    ::assign((basic_string<wchar_t,eastl::fixed_vector_allocator<4ul,20ul,4ul,0ul,true,EA::Allocator::EAIOEASTLCoreAllocator>>
              *)(this + 8),param_1);
    return;
  }
  return;
}

