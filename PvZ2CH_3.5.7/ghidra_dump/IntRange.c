// Class: IntRange


/* IntRange::GetRandomValue() const */

int __thiscall IntRange::GetRandomValue(IntRange *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = Sexy::Rand((*(int *)(this + 4) - iVar1) + 1);
  return iVar1 + iVar2;
}

