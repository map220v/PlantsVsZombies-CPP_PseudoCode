// Class: GuessThreeConditionRatio


/* GuessThreeConditionRatio::GuessThreeConditionRatio(float, float) */

void __thiscall
GuessThreeConditionRatio::GuessThreeConditionRatio
          (GuessThreeConditionRatio *this,float param_1,float param_2)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = (1.0 - param_2) - param_1;
  return;
}


/* GuessThreeConditionRatio::GetResult() */

undefined4 __thiscall GuessThreeConditionRatio::GetResult(GuessThreeConditionRatio *this)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_04c4c970();
  uVar1 = 1;
  if ((*(float *)this < fVar2) && (uVar1 = 3, *(float *)this + *(float *)(this + 8) < fVar2)) {
    uVar1 = 2;
  }
  return uVar1;
}

