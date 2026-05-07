// Class: SortedKern


/* SortedKern::SortedKern(wchar_t, wchar_t, int) */

void __thiscall SortedKern::SortedKern(SortedKern *this,wchar_t param_1,wchar_t param_2,int param_3)

{
  *(wchar_t *)this = param_1;
  *(wchar_t *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  return;
}


/* SortedKern::Compare(void const*, void const*) */

ulong SortedKern::Compare(void *param_1,void *param_2)

{
  ulong uVar1;
  
  if (*(uint *)param_1 < *(uint *)param_2) {
    return 0xffffffff;
  }
  uVar1 = 1;
  if (*(uint *)param_1 <= *(uint *)param_2) {
    if (*(uint *)((long)param_1 + 4) < *(uint *)((long)param_2 + 4)) {
      return 0xffffffff;
    }
    uVar1 = (ulong)(*(uint *)((long)param_2 + 4) < *(uint *)((long)param_1 + 4));
  }
  return uVar1;
}

