// Class: EA::StdC::SprintfLocal::SnprintfContext8


/* EA::StdC::SprintfLocal::SnprintfContext8::SnprintfContext8(char*, unsigned long, unsigned long)
    */

void __thiscall
EA::StdC::SprintfLocal::SnprintfContext8::SnprintfContext8
          (SnprintfContext8 *this,char *param_1,ulong param_2,ulong param_3)

{
  *(char **)this = param_1;
  *(ulong *)(this + 8) = param_2;
  *(ulong *)(this + 0x10) = param_3;
  this[0x18] = (SnprintfContext8)0x0;
  return;
}

