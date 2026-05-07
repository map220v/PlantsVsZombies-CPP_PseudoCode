// Class: EA::IO::Internal


/* void EA::IO::Internal::Free<EA::IO::EntryFindData>(EA::Allocator::ICoreAllocator*,
   EA::IO::EntryFindData*) */

void EA::IO::Internal::Free<EA::IO::EntryFindData>(ICoreAllocator *param_1,EntryFindData *param_2)

{
  if (param_2 != (EntryFindData *)0x0) {
    (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2,0);
  }
  return;
}


/* EA::IO::Internal::FilterEntries(EA::IO::EntryFindData*, wchar_t const*) */

void EA::IO::Internal::FilterEntries(EntryFindData *param_1,wchar_t *param_2)

{
  Path::EnsureTrailingSeparator((wchar_t *)(param_1 + 0x1020),0x400);
  if (param_2 != (wchar_t *)0x0) {
    StdC::Strlcpy((wchar_t *)(param_1 + 0x2020),param_2,0x400);
    return;
  }
  *(undefined4 *)(param_1 + 0x2024) = 0;
  *(undefined4 *)(param_1 + 0x2020) = 0x2a;
  return;
}


/* EA::IO::EntryFindData*
   EA::IO::Internal::Allocate<EA::IO::EntryFindData>(EA::Allocator::ICoreAllocator*, char const*) */

EntryFindData *
EA::IO::Internal::Allocate<EA::IO::EntryFindData>(ICoreAllocator *param_1,char *param_2)

{
  EntryFindData *pEVar1;
  EntryFindData *this;
  
  pEVar1 = (EntryFindData *)(**(code **)(*(long *)param_1 + 0x18))(param_1,0x3068,param_2,0,0,0);
  if ((pEVar1 != (EntryFindData *)0x0) &&
     (this = (EntryFindData *)FUN_053f6f00(), this != (EntryFindData *)0x0)) {
    EntryFindData::EntryFindData(this);
  }
  return pEVar1;
}

