// Class: Sexy::Ratio


/* Sexy::Ratio::Ratio() */

void __thiscall Sexy::Ratio::Ratio(Ratio *this)

{
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 4) = 1;
  return;
}


/* Sexy::Ratio::Set(int, int) */

void __thiscall Sexy::Ratio::Set(Ratio *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  iVar2 = param_2;
  while (iVar2 != 0) {
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar3 / iVar2;
    }
    iVar1 = iVar3 - iVar1 * iVar2;
    iVar3 = iVar2;
    iVar2 = iVar1;
  }
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = param_1 / iVar3;
  }
  *(int *)this = iVar2;
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = param_2 / iVar3;
  }
  *(int *)(this + 4) = iVar2;
  return;
}


/* Sexy::Ratio::Ratio(int, int) */

void __thiscall Sexy::Ratio::Ratio(Ratio *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  iVar2 = param_2;
  while (iVar2 != 0) {
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar3 / iVar2;
    }
    iVar1 = iVar3 - iVar1 * iVar2;
    iVar3 = iVar2;
    iVar2 = iVar1;
  }
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = param_1 / iVar3;
  }
  *(int *)this = iVar2;
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = param_2 / iVar3;
  }
  *(int *)(this + 4) = iVar2;
  return;
}


/* Sexy::Ratio::Get() */

float __thiscall Sexy::Ratio::Get(Ratio *this)

{
  return (float)*(int *)this / (float)*(int *)(this + 4);
}

