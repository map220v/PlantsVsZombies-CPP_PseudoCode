// Class: DarkWizardTargetSorter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DarkWizardTargetSorter::TEMPNAMEPLACEHOLDERVALUE(BoardEntity*, BoardEntity*) const */

void DarkWizardTargetSorter::operator()(BoardEntity *param_1,BoardEntity *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  lVar3 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  bVar4 = ZombieDarkWizard::HasSheepedPlantInRow(*(ZombieDarkWizard **)param_1,local_1c);
  bVar5 = ZombieDarkWizard::HasSheepedPlantInRow(*(ZombieDarkWizard **)param_1,local_14);
  if (bVar4 == bVar5) {
    BoardEntity::CalcGridPosition();
    uVar1 = local_1c - local_c >> 0x1f;
    iVar7 = (local_1c - local_c ^ uVar1) - uVar1;
    uVar1 = local_14 - local_c >> 0x1f;
    iVar6 = (local_14 - local_c ^ uVar1) - uVar1;
    if (iVar7 == iVar6) {
      uVar2 = local_20 - local_10 >> 0x1f;
      uVar1 = local_18 - local_10 >> 0x1f;
      bVar4 = (int)((local_20 - local_10 ^ uVar2) - uVar2) <
              (int)((local_18 - local_10 ^ uVar1) - uVar1);
    }
    else {
      bVar4 = iVar7 < iVar6;
    }
  }
  else {
    bVar4 = bVar4 ^ 1;
  }
  if (lVar3 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}

