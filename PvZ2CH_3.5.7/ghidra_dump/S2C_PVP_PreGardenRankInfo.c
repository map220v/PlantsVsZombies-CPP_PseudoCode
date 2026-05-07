// Class: S2C_PVP_PreGardenRankInfo


/* S2C_PVP_PreGardenRankInfo::S2C_PVP_PreGardenRankInfo() */

void __thiscall
S2C_PVP_PreGardenRankInfo::S2C_PVP_PreGardenRankInfo(S2C_PVP_PreGardenRankInfo *this)

{
  FUN_05476574(this + 8);
  return;
}


/* S2C_PVP_PreGardenRankInfo::S2C_PVP_PreGardenRankInfo(S2C_PVP_PreGardenRankInfo&&) */

void __thiscall
S2C_PVP_PreGardenRankInfo::S2C_PVP_PreGardenRankInfo
          (S2C_PVP_PreGardenRankInfo *this,S2C_PVP_PreGardenRankInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  FUN_05476584(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}


/* S2C_PVP_PreGardenRankInfo::TEMPNAMEPLACEHOLDERVALUE(S2C_PVP_PreGardenRankInfo&&) */

S2C_PVP_PreGardenRankInfo * __thiscall
S2C_PVP_PreGardenRankInfo::operator=
          (S2C_PVP_PreGardenRankInfo *this,S2C_PVP_PreGardenRankInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  FUN_054766c8(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  return this;
}


/* S2C_PVP_PreGardenRankInfo::TEMPNAMEPLACEHOLDERVALUE(S2C_PVP_PreGardenRankInfo const&) */

S2C_PVP_PreGardenRankInfo * __thiscall
S2C_PVP_PreGardenRankInfo::operator=
          (S2C_PVP_PreGardenRankInfo *this,S2C_PVP_PreGardenRankInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  thunk_FUN_05477b9c(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  return this;
}


/* S2C_PVP_PreGardenRankInfo::S2C_PVP_PreGardenRankInfo(S2C_PVP_PreGardenRankInfo const&) */

void __thiscall
S2C_PVP_PreGardenRankInfo::S2C_PVP_PreGardenRankInfo
          (S2C_PVP_PreGardenRankInfo *this,S2C_PVP_PreGardenRankInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  FUN_05477b24(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}

