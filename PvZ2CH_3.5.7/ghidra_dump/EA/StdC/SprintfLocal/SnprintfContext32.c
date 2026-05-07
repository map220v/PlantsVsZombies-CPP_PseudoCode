// Class: EA::StdC::SprintfLocal::SnprintfContext32


/* EA::StdC::SprintfLocal::SnprintfContext32::SnprintfContext32(char32_t*, unsigned long, unsigned
   long) */

void __thiscall
EA::StdC::SprintfLocal::SnprintfContext32::SnprintfContext32
          (SnprintfContext32 *this,wchar32 *param_1,ulong param_2,ulong param_3)

{
  *(wchar32 **)this = param_1;
  *(ulong *)(this + 8) = param_2;
  *(ulong *)(this + 0x10) = param_3;
  return;
}

