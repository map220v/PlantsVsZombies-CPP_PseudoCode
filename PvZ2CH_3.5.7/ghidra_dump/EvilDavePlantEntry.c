// Class: EvilDavePlantEntry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EvilDavePlantEntry::EvilDavePlantEntry() */

void __thiscall EvilDavePlantEntry::EvilDavePlantEntry(EvilDavePlantEntry *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::string::string((string *)(this + 8),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EvilDavePlantEntry::EvilDavePlantEntry(int, int, std::string const&) */

void __thiscall
EvilDavePlantEntry::EvilDavePlantEntry
          (EvilDavePlantEntry *this,int param_1,int param_2,string *param_3)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  FUN_05475d88(this + 8,param_3);
  return;
}

