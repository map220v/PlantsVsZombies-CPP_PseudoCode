// Class: PuzzleRotateConfig


/* PuzzleRotateConfig::PuzzleRotateConfig() */

void __thiscall PuzzleRotateConfig::PuzzleRotateConfig(PuzzleRotateConfig *this)

{
  *(undefined4 *)(this + 4) = 3;
  *(undefined4 *)(this + 8) = 3;
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined4 *)(this + 0xc) = 0x42c80000;
  *(undefined4 *)(this + 0x14) = 0x41f00000;
  return;
}


/* PuzzleRotateConfig::PuzzleRotateConfig(PuzzleRotateConfig const&) */

void __thiscall
PuzzleRotateConfig::PuzzleRotateConfig(PuzzleRotateConfig *this,PuzzleRotateConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar5;
  return;
}

