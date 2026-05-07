// Class: SpawnedGridItem


/* SpawnedGridItem::SpawnedGridItem() */

void __thiscall SpawnedGridItem::SpawnedGridItem(SpawnedGridItem *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  Sexy::Point::Point((Point *)(this + 8));
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


/* SpawnedGridItem::SpawnedGridItem(Sexy::RtWeakPtr<GridItem>, Sexy::Point) */

void __thiscall
SpawnedGridItem::SpawnedGridItem(SpawnedGridItem *this,RtWeakPtr *param_2,undefined8 *param_3)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  Sexy::Point::Point((Point *)(this + 8));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this,param_2);
  *(undefined8 *)(this + 8) = *param_3;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnedGridItem::SyncTile() */

void __thiscall SpawnedGridItem::SyncTile(SpawnedGridItem *this)

{
  long lVar1;
  bool bVar2;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this);
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    BoardEntity::CalcGridPosition();
    *(undefined8 *)(this + 8) = local_10;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnedGridItem::SpawnedGridItem(SpawnedGridItem&&) */

void __thiscall SpawnedGridItem::SpawnedGridItem(SpawnedGridItem *this,SpawnedGridItem *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_1 + 8));
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnedGridItem::DrawTile(Sexy::Graphics*) */

void __thiscall SpawnedGridItem::DrawTile(SpawnedGridItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  SexyVector2 *extraout_x1;
  float fVar3;
  FastCurve aFStack_50 [8];
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x10) != 0) {
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 8),(Point *)param_1);
    if (((DAT_06b95118 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b95118), iVar1 != 0)) {
      iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar1 = FUN_04c9ae9c(-2 - iVar1);
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar2 = FUN_04c9ae9c(-5 - iVar2);
      Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06b95158,(float)iVar1,(float)iVar2);
      __cxa_guard_release(&DAT_06b95118);
    }
    iVar1 = FUN_04c9ae9c(local_40);
    iVar2 = FUN_04c9ae9c(local_3c);
    fVar3 = (float)iVar2;
    Sexy::FastCurve::SetOutRange(aFStack_50,(float)iVar1,fVar3);
    local_48 = Sexy::SexyVector2::operator+((SexyVector2 *)aFStack_50,(SexyVector2 *)&DAT_06b95158);
    local_44 = fVar3;
    Sexy::SexyTransform2D::CreateTranslation((SexyTransform2D *)&local_48,extraout_x1);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x10),aSStack_30);
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x10),param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

