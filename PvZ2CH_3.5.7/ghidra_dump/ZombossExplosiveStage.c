// Class: ZombossExplosiveStage


/* ZombossExplosiveStage::~ZombossExplosiveStage() */

void __thiscall ZombossExplosiveStage::~ZombossExplosiveStage(ZombossExplosiveStage *this)

{
  CZombieSummonDataPool::~CZombieSummonDataPool((CZombieSummonDataPool *)(this + 0x18));
  return;
}


/* ZombossExplosiveStage::ZombossExplosiveStage() */

void __thiscall ZombossExplosiveStage::ZombossExplosiveStage(ZombossExplosiveStage *this)

{
  CZombieSummonDataPool::CZombieSummonDataPool((CZombieSummonDataPool *)(this + 0x18));
  *(undefined4 *)this = 5000;
  *(undefined4 *)(this + 0x14) = 0x40a00000;
  *(undefined4 *)(this + 0x40) = 0x40a00000;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 0x44) = 0x40c00000;
  *(undefined4 *)(this + 0x48) = 2;
  *(undefined4 *)(this + 0x4c) = 2;
  *(undefined4 *)(this + 0x54) = 3;
  *(undefined4 *)(this + 0x50) = 4;
  *(undefined4 *)(this + 0x58) = 5;
  *(undefined4 *)(this + 0x5c) = 2;
  *(undefined4 *)(this + 100) = 3;
  *(undefined4 *)(this + 0x68) = 5;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined4 *)(this + 0xc) = 0x40800000;
  *(undefined4 *)(this + 0x10) = 0x40800000;
  *(undefined4 *)(this + 0x60) = 0x40400000;
  return;
}


/* ZombossExplosiveStage::ZombossExplosiveStage(ZombossExplosiveStage&&) */

void __thiscall
ZombossExplosiveStage::ZombossExplosiveStage
          (ZombossExplosiveStage *this,ZombossExplosiveStage *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar5;
  PennyGiftBoxRankPriviewItemData::PennyGiftBoxRankPriviewItemData
            ((PennyGiftBoxRankPriviewItemData *)(this + 0x18),
             (PennyGiftBoxRankPriviewItemData *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(param_1 + 0x60);
  uVar6 = *(undefined4 *)(param_1 + 0x50);
  uVar7 = *(undefined4 *)(param_1 + 0x54);
  uVar8 = *(undefined4 *)(param_1 + 0x58);
  uVar9 = *(undefined4 *)(param_1 + 0x5c);
  uVar10 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x48) = uVar2;
  *(undefined4 *)(this + 0x4c) = uVar4;
  *(undefined4 *)(this + 0x50) = uVar6;
  *(undefined4 *)(this + 0x54) = uVar7;
  *(undefined4 *)(this + 0x58) = uVar8;
  *(undefined4 *)(this + 0x5c) = uVar9;
  *(undefined4 *)(this + 100) = uVar10;
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar3;
  *(undefined4 *)(this + 0x60) = uVar5;
  return;
}

