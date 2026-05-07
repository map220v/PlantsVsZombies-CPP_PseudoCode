// Class: FairyTaleWitchTargetSorter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleWitchTargetSorter::TEMPNAMEPLACEHOLDERVALUE(Plant*, Plant*) const */

void FairyTaleWitchTargetSorter::operator()(Plant *param_1,Plant *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar2 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  uVar1 = local_1c - local_c >> 0x1f;
  iVar5 = (local_1c - local_c ^ uVar1) - uVar1;
  uVar1 = local_14 - local_c >> 0x1f;
  iVar4 = (local_14 - local_c ^ uVar1) - uVar1;
  bVar3 = SBORROW4(iVar5,iVar4);
  iVar6 = iVar5 - iVar4;
  if (iVar5 == iVar4) {
    uVar1 = local_20 - local_10 >> 0x1f;
    iVar6 = (local_20 - local_10 ^ uVar1) - uVar1;
    uVar1 = local_18 - local_10 >> 0x1f;
    iVar4 = (local_18 - local_10 ^ uVar1) - uVar1;
    bVar3 = SBORROW4(iVar6,iVar4);
    iVar6 = iVar6 - iVar4;
  }
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6 < 0 != bVar3);
}

