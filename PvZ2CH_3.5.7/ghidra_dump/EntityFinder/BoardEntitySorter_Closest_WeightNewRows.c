// Class: EntityFinder::BoardEntitySorter_Closest_WeightNewRows


/* EntityFinder::BoardEntitySorter_Closest_WeightNewRows::BoardEntitySorter_Closest_WeightNewRows(EntityFinder::BoardEntitySorter_Closest_WeightNewRows
   const&) */

void __thiscall
EntityFinder::BoardEntitySorter_Closest_WeightNewRows::BoardEntitySorter_Closest_WeightNewRows
          (BoardEntitySorter_Closest_WeightNewRows *this,
          BoardEntitySorter_Closest_WeightNewRows *param_1)

{
  BoardEntitySorter::BoardEntitySorter((BoardEntitySorter *)this);
  *(undefined ***)this = &PTR__BoardEntitySorter_Closest_WeightNewRows_068c7de0;
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_1 + 8));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* EntityFinder::BoardEntitySorter_Closest_WeightNewRows::~BoardEntitySorter_Closest_WeightNewRows()
    */

void __thiscall
EntityFinder::BoardEntitySorter_Closest_WeightNewRows::~BoardEntitySorter_Closest_WeightNewRows
          (BoardEntitySorter_Closest_WeightNewRows *this)

{
  *(undefined ***)this = &PTR__BoardEntitySorter_Closest_WeightNewRows_068c7de0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10));
  return;
}


/* EntityFinder::BoardEntitySorter_Closest_WeightNewRows::~BoardEntitySorter_Closest_WeightNewRows()
    */

void __thiscall
EntityFinder::BoardEntitySorter_Closest_WeightNewRows::~BoardEntitySorter_Closest_WeightNewRows
          (BoardEntitySorter_Closest_WeightNewRows *this)

{
  ~BoardEntitySorter_Closest_WeightNewRows(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::BoardEntitySorter_Closest_WeightNewRows::findEntityInRow(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > > const&, int) const */

void __thiscall
EntityFinder::BoardEntitySorter_Closest_WeightNewRows::findEntityInRow
          (BoardEntitySorter_Closest_WeightNewRows *this,vector *param_1,int param_2)

{
  undefined1 uVar1;
  bool bVar2;
  RtWeakPtr *this_00;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = FUN_04743cec(*(undefined8 *)param_1);
  local_18 = FUN_04743d3c(*(undefined8 *)(param_1 + 8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
        uVar1 = 0, bVar2) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      BoardEntity::CalcGridPosition();
      uVar1 = 1;
      if (local_c == param_2) break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityFinder::BoardEntitySorter_Closest_WeightNewRows::TEMPNAMEPLACEHOLDERVALUE(BoardEntity*,
   BoardEntity*) const */

void EntityFinder::BoardEntitySorter_Closest_WeightNewRows::operator()
               (BoardEntity *param_1,BoardEntity *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  lVar5 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  bVar6 = findEntityInRow((BoardEntitySorter_Closest_WeightNewRows *)param_1,
                          (vector *)(param_1 + 0x10),local_14);
  bVar7 = findEntityInRow((BoardEntitySorter_Closest_WeightNewRows *)param_1,
                          (vector *)(param_1 + 0x10),local_c);
  if (bVar6 == bVar7) {
    uVar1 = local_14 - *(int *)(param_1 + 0xc);
    uVar2 = local_c - *(int *)(param_1 + 0xc);
    uVar3 = (int)uVar1 >> 0x1f;
    iVar9 = (uVar1 ^ uVar3) - uVar3;
    uVar1 = (int)uVar2 >> 0x1f;
    iVar8 = (uVar2 ^ uVar1) - uVar1;
    if (iVar9 == iVar8) {
      uVar1 = local_18 - *(int *)(param_1 + 8);
      uVar2 = local_10 - *(int *)(param_1 + 8);
      uVar4 = (int)uVar1 >> 0x1f;
      uVar3 = (int)uVar2 >> 0x1f;
      bVar6 = (int)((uVar1 ^ uVar4) - uVar4) < (int)((uVar2 ^ uVar3) - uVar3);
    }
    else {
      bVar6 = iVar9 < iVar8;
    }
  }
  else {
    bVar6 = bVar6 ^ 1;
  }
  if (lVar5 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar6);
}


/* EntityFinder::BoardEntitySorter_Closest_WeightNewRows::BoardEntitySorter_Closest_WeightNewRows(Sexy::Point,
   std::vector<Sexy::RtWeakPtr<BoardEntity>, std::allocator<Sexy::RtWeakPtr<BoardEntity> > > const&)
    */

void __thiscall
EntityFinder::BoardEntitySorter_Closest_WeightNewRows::BoardEntitySorter_Closest_WeightNewRows
          (BoardEntitySorter_Closest_WeightNewRows *this,TPoint *param_2,vector *param_3)

{
  BoardEntitySorter::BoardEntitySorter((BoardEntitySorter *)this);
  *(undefined ***)this = &PTR__BoardEntitySorter_Closest_WeightNewRows_068c7de0;
  Sexy::Point::Point((Point *)(this + 8),param_2);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10),param_3);
  return;
}

