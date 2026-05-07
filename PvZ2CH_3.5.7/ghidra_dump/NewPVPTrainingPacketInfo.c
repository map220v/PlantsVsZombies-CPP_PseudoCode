// Class: NewPVPTrainingPacketInfo


/* NewPVPTrainingPacketInfo::NewPVPTrainingPacketInfo() */

void __thiscall NewPVPTrainingPacketInfo::NewPVPTrainingPacketInfo(NewPVPTrainingPacketInfo *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 1;
  this[0x10] = (NewPVPTrainingPacketInfo)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* NewPVPTrainingPacketInfo::NewPVPTrainingPacketInfo(int, int, int, int, int, int) */

void __thiscall
NewPVPTrainingPacketInfo::NewPVPTrainingPacketInfo
          (NewPVPTrainingPacketInfo *this,int param_1,int param_2,int param_3,int param_4,
          int param_5,int param_6)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  this[0x10] = (NewPVPTrainingPacketInfo)(param_5 != 0);
  *(int *)(this + 0x14) = param_6;
  return;
}

