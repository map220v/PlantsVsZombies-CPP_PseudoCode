// Class: GuessRatio


/* GuessRatio::GuessRatio(float) */

void __thiscall GuessRatio::GuessRatio(GuessRatio *this,float param_1)

{
  *(float *)this = param_1;
  return;
}


/* GuessRatio::GetResult() */

undefined4 GuessRatio::GetResult(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_04c4c978();
  uVar2 = 2;
  if (cVar1 != '\0') {
    uVar2 = 1;
  }
  return uVar2;
}

