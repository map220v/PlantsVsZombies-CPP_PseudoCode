// Class: SpawnedPlant


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnedPlant::DrawTile(Sexy::Graphics*) */

void __thiscall SpawnedPlant::DrawTile(SpawnedPlant *this,Graphics *param_1)

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
    if (((DAT_06afbf90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06afbf90), iVar1 != 0)) {
      iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar1 = FUN_04355610(-2 - iVar1);
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar2 = FUN_04355610(-5 - iVar2);
      Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06afbfa8,(float)iVar1,(float)iVar2);
      __cxa_guard_release(&DAT_06afbf90);
    }
    iVar1 = FUN_04355610(local_40);
    iVar2 = FUN_04355610(local_3c);
    fVar3 = (float)iVar2;
    Sexy::FastCurve::SetOutRange(aFStack_50,(float)iVar1,fVar3);
    local_48 = Sexy::SexyVector2::operator+((SexyVector2 *)aFStack_50,(SexyVector2 *)&DAT_06afbfa8);
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

