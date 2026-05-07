// Class: open_vcdiff::BlockHash::Match


/* open_vcdiff::BlockHash::Match::Match() */

void __thiscall open_vcdiff::BlockHash::Match::Match(Match *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  return;
}


/* open_vcdiff::BlockHash::Match::ReplaceIfBetterMatch(unsigned long, int, int) */

void __thiscall
open_vcdiff::BlockHash::Match::ReplaceIfBetterMatch
          (Match *this,ulong param_1,int param_2,int param_3)

{
  if (*(ulong *)this < param_1) {
    *(ulong *)this = param_1;
    *(int *)(this + 8) = param_2;
    *(int *)(this + 0xc) = param_3;
  }
  return;
}

