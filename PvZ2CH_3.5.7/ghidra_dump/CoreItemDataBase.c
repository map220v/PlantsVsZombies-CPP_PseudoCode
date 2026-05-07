// Class: CoreItemDataBase


/* CoreItemDataBase::IsSame(CoreItemDataBase*) */

bool __thiscall CoreItemDataBase::IsSame(CoreItemDataBase *this,CoreItemDataBase *param_1)

{
  int iVar1;
  
  if (param_1 == (CoreItemDataBase *)0x0) {
    return false;
  }
  iVar1 = FUN_04c40588(*(undefined4 *)(param_1 + 8));
  if (*(int *)(this + 8) != iVar1) {
    return false;
  }
  iVar1 = FUN_04c4058c(*(undefined4 *)(param_1 + 0xc));
  return *(int *)(this + 0xc) == iVar1;
}


/* CoreItemDataBase::CoreItemDataBase() */

void __thiscall CoreItemDataBase::CoreItemDataBase(CoreItemDataBase *this)

{
  *(undefined ***)this = &PTR_nop_06986330;
  return;
}


/* CoreItemDataBase::CoreItemDataBase(int, int) */

void __thiscall CoreItemDataBase::CoreItemDataBase(CoreItemDataBase *this,int param_1,int param_2)

{
  *(int *)(this + 8) = param_1;
  *(int *)(this + 0xc) = param_2;
  *(undefined ***)this = &PTR_nop_06986330;
  return;
}

