// Class: ZombossQigongStage


/* ZombossQigongStage::ZombossQigongStage() */

void __thiscall ZombossQigongStage::ZombossQigongStage(ZombossQigongStage *this)

{
  Sexy::Insets::Insets((Insets *)(this + 4));
  CZombieSummonDataPool::CZombieSummonDataPool((CZombieSummonDataPool *)(this + 0x18));
  *(undefined4 *)this = 10000;
  *(undefined4 *)(this + 0x48) = 5;
  *(undefined4 *)(this + 0x58) = 10;
  *(undefined4 *)(this + 0x40) = 0x40a00000;
  *(undefined4 *)(this + 0x4c) = 0x42700000;
  *(undefined4 *)(this + 0x44) = 0x41200000;
  *(undefined4 *)(this + 0x50) = 0x40a00000;
  *(undefined4 *)(this + 0x54) = 0x42c80000;
  return;
}


/* ZombossQigongStage::ZombossQigongStage(ZombossQigongStage const&) */

void __thiscall
ZombossQigongStage::ZombossQigongStage(ZombossQigongStage *this,ZombossQigongStage *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Insets::Insets((Insets *)(this + 4),(Insets *)(param_1 + 4));
  CZombieSummonDataPool::CZombieSummonDataPool
            ((CZombieSummonDataPool *)(this + 0x18),(CZombieSummonDataPool *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(param_1 + 0x50);
  uVar6 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = uVar2;
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar3;
  *(undefined4 *)(this + 0x4c) = uVar4;
  *(undefined4 *)(this + 0x50) = uVar5;
  *(undefined4 *)(this + 0x54) = uVar6;
  return;
}

