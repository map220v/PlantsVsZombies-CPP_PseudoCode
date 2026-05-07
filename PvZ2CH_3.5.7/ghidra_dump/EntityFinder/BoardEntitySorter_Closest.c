// Class: EntityFinder::BoardEntitySorter_Closest


/* EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest(EntityFinder::BoardEntitySorter_Closest
   const&) */

void __thiscall
EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest
          (BoardEntitySorter_Closest *this,BoardEntitySorter_Closest *param_1)

{
  BoardEntitySorter::BoardEntitySorter((BoardEntitySorter *)this);
  *(undefined ***)this = &PTR_nop_068c7e40;
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_1 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::BoardEntitySorter_Closest::TEMPNAMEPLACEHOLDERVALUE(BoardEntity*, BoardEntity*)
   const */

void EntityFinder::BoardEntitySorter_Closest::operator()(BoardEntity *param_1,BoardEntity *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  lVar8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  uVar1 = local_18 - *(int *)(param_1 + 8);
  uVar2 = local_14 - *(int *)(param_1 + 0xc);
  uVar3 = local_10 - *(int *)(param_1 + 8);
  uVar4 = local_c - *(int *)(param_1 + 0xc);
  uVar5 = (int)uVar1 >> 0x1f;
  uVar7 = (int)uVar2 >> 0x1f;
  uVar6 = (int)uVar3 >> 0x1f;
  if (lVar8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)(int)((uVar1 ^ uVar5) - uVar5 ^ 2 ^ ((uVar2 ^ uVar7) - uVar7) + 2) <
                   (float)(int)((uVar3 ^ uVar6) - uVar6 ^ 2 ^
                               ((uVar4 ^ (int)uVar4 >> 0x3f) - ((int)uVar4 >> 0x1f)) + 2));
}


/* EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest(Sexy::Point) */

void __thiscall
EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest
          (BoardEntitySorter_Closest *this,TPoint *param_2)

{
  BoardEntitySorter::BoardEntitySorter((BoardEntitySorter *)this);
  *(undefined ***)this = &PTR_nop_068c7e40;
  Sexy::Point::Point((Point *)(this + 8),param_2);
  return;
}

