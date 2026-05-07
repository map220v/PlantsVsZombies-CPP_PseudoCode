// Class: PlantSorter_LowestHP


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSorter_LowestHP::TEMPNAMEPLACEHOLDERVALUE(Sexy::Point const&, Sexy::Point const&) const */

void __thiscall
PlantSorter_LowestHP::operator()(PlantSorter_LowestHP *this,Point *param_1,Point *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  Board *pBVar6;
  float fVar7;
  float fVar8;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)param_1;
  pBVar6 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  lVar4 = Board::GetPlantAt(pBVar6,iVar2,iVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)(param_2 + 4);
  pBVar6 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  lVar5 = Board::GetPlantAt(pBVar6,iVar1,iVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  bVar3 = lVar4 != 0;
  if ((bVar3 == (lVar5 != 0)) && (bVar3)) {
    fVar7 = (float)FUN_03c3ec90(*(undefined4 *)(lVar4 + 0xd8));
    fVar8 = (float)FUN_03c3ec90(*(undefined4 *)(lVar5 + 0xd8));
    bVar3 = fVar7 < fVar8;
  }
  else {
    bVar3 = (lVar5 != 0) < bVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}

