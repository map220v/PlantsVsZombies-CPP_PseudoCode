// Class: Sexy::RtDbTable::SlotCompare


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::SlotCompare::Func(void const*, void const*) */

void Sexy::RtDbTable::SlotCompare::Func(void *param_1,void *param_2)

{
  uint uVar1;
  long lVar2;
  RtId aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  lVar2 = *(long *)param_2;
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)param_1 + 0x1c) < 0) {
    uVar1 = 0xffffffff;
    if (*(int *)(lVar2 + 0x1c) < 0) {
      FUN_051b5b78(aRStack_18,*sSortCurTable,*(undefined8 *)(sSortCurTable + 2));
      FUN_051b5b78(aRStack_10,*sSortCurTable,*(undefined8 *)(sSortCurTable + 2),lVar2);
      uVar1 = Delegate2<char_const*,char_const*>::operator()(sSortCurDelegate,(char *)aRStack_18);
      RtId::~RtId(aRStack_10);
      RtId::~RtId(aRStack_18);
    }
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x1c) >> 0x1f;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

