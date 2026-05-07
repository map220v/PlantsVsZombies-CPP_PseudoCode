// Class: DangerRoomHighScoreInfo


/* DangerRoomHighScoreInfo::DangerRoomHighScoreInfo(DangerRoomHighScoreInfo&&) */

void __thiscall
DangerRoomHighScoreInfo::DangerRoomHighScoreInfo
          (DangerRoomHighScoreInfo *this,DangerRoomHighScoreInfo *param_1)

{
  DangerRoomHighScoreInfo DVar1;
  
  FUN_05474148();
  DVar1 = param_1[8];
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  this[8] = DVar1;
  return;
}

