// Class: EntityFinder::BoardEntitySorter_ClosestByColumn


/* EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn(EntityFinder::BoardEntitySorter_ClosestByColumn
   const&) */

void __thiscall
EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
          (BoardEntitySorter_ClosestByColumn *this,BoardEntitySorter_ClosestByColumn *param_1)

{
  BoardEntitySorter::BoardEntitySorter((BoardEntitySorter *)this);
  *(undefined ***)this = &PTR_nop_068c7e10;
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_1 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::BoardEntitySorter_ClosestByColumn::TEMPNAMEPLACEHOLDERVALUE(BoardEntity*,
   BoardEntity*) const */

void EntityFinder::BoardEntitySorter_ClosestByColumn::operator()
               (BoardEntity *param_1,BoardEntity *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  lVar4 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  uVar1 = local_18 - *(int *)(param_1 + 8);
  uVar2 = local_10 - *(int *)(param_1 + 8);
  uVar3 = (int)uVar1 >> 0x1f;
  iVar8 = (uVar1 ^ uVar3) - uVar3;
  uVar1 = (int)uVar2 >> 0x1f;
  iVar6 = (uVar2 ^ uVar1) - uVar1;
  bVar5 = SBORROW4(iVar8,iVar6);
  iVar7 = iVar8 - iVar6;
  if (iVar8 == iVar6) {
    uVar1 = local_14 - *(int *)(param_1 + 0xc);
    uVar2 = local_c - *(int *)(param_1 + 0xc);
    uVar3 = (int)uVar1 >> 0x1f;
    iVar7 = (uVar1 ^ uVar3) - uVar3;
    uVar1 = (int)uVar2 >> 0x1f;
    iVar6 = (uVar2 ^ uVar1) - uVar1;
    bVar5 = SBORROW4(iVar7,iVar6);
    iVar7 = iVar7 - iVar6;
  }
  if (lVar4 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7 < 0 != bVar5);
}


/* EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn(Sexy::Point)
    */

void __thiscall
EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
          (BoardEntitySorter_ClosestByColumn *this,TPoint *param_2)

{
  BoardEntitySorter::BoardEntitySorter((BoardEntitySorter *)this);
  *(undefined ***)this = &PTR_nop_068c7e10;
  Sexy::Point::Point((Point *)(this + 8),param_2);
  return;
}

