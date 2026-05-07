// Class: EA::IO::DirectoryIterator::Entry


/* EA::IO::DirectoryIterator::Entry::~Entry() */

void __thiscall EA::IO::DirectoryIterator::Entry::~Entry(Entry *this)

{
  eastl::basic_string<wchar_t,eastl::allocator>::~basic_string
            ((basic_string<wchar_t,eastl::allocator> *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::IO::DirectoryIterator::Entry::Entry(EA::IO::DirectoryEntry, wchar_t const*) */

void __thiscall
EA::IO::DirectoryIterator::Entry::Entry(Entry *this,undefined4 param_2,wchar_t *param_3)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = param_2;
  eastl::basic_string<wchar_t,eastl::allocator>::basic_string((allocator *)(this + 8));
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if (param_3 != (wchar_t *)0x0) {
    eastl::basic_string<wchar_t,eastl::allocator>::operator=
              ((basic_string<wchar_t,eastl::allocator> *)(this + 8),param_3);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

