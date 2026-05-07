// Class: DisplayPlantInfo


/* DisplayPlantInfo::TEMPNAMEPLACEHOLDERVALUE(DisplayPlantInfo const&) */

DisplayPlantInfo * __thiscall
DisplayPlantInfo::operator=(DisplayPlantInfo *this,DisplayPlantInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  return this;
}

