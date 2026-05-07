// Class: PlantSorter_HasPlant


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSorter_HasPlant::TEMPNAMEPLACEHOLDERVALUE(Sexy::Point const&, Sexy::Point const&) const */

void __thiscall
PlantSorter_HasPlant::operator()(PlantSorter_HasPlant *this,Point *param_1,Point *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Board *pBVar5;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)param_1;
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  lVar3 = Board::GetPlantAt(pBVar5,iVar2,iVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)(param_2 + 4);
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  lVar4 = Board::GetPlantAt(pBVar5,iVar1,iVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((lVar4 != 0) < (lVar3 != 0));
}

