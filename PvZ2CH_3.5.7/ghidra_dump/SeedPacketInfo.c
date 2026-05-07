// Class: SeedPacketInfo


/* SeedPacketInfo::SeedPacketInfo() */

void __thiscall SeedPacketInfo::SeedPacketInfo(SeedPacketInfo *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0xffffffff;
  this[0xc] = (SeedPacketInfo)0x0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* SeedPacketInfo::SeedPacketInfo(int, int, int, int, int, int, int, int) */

void __thiscall
SeedPacketInfo::SeedPacketInfo
          (SeedPacketInfo *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  this[0xc] = (SeedPacketInfo)(param_4 != 0);
  *(int *)(this + 0x10) = param_5;
  *(int *)(this + 0x14) = param_6;
  *(int *)(this + 0x18) = param_7;
  *(int *)(this + 0x1c) = param_8;
  return;
}

