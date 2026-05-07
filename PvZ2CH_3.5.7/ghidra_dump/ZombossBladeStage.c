// Class: ZombossBladeStage


/* ZombossBladeStage::ZombossBladeStage() */

void __thiscall ZombossBladeStage::ZombossBladeStage(ZombossBladeStage *this)

{
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xc));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  CZombieSummonDataPool::CZombieSummonDataPool((CZombieSummonDataPool *)(this + 0x50));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x94));
  *(undefined4 *)this = 5000;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 0x3f800000;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xc),1.0,1.0);
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x30) = 0x3e99999a;
  *(undefined4 *)(this + 0x84) = 0x40000000;
  *(undefined4 *)(this + 0x88) = 0x3f800000;
  *(undefined4 *)(this + 0x80) = 0x457a0000;
  *(undefined4 *)(this + 0x8c) = 0x3f800000;
  *(undefined4 *)(this + 0x90) = 0x3fc00000;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x94),1.0,1.0);
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  return;
}


/* ZombossBladeStage::~ZombossBladeStage() */

void __thiscall ZombossBladeStage::~ZombossBladeStage(ZombossBladeStage *this)

{
  CZombieSummonDataPool::~CZombieSummonDataPool((CZombieSummonDataPool *)(this + 0x50));
  std::vector<ZombossRandomAction,std::allocator<ZombossRandomAction>>::~vector
            ((vector<ZombossRandomAction,std::allocator<ZombossRandomAction>> *)(this + 0x38));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  return;
}


/* ZombossBladeStage::ZombossBladeStage(ZombossBladeStage&&) */

void __thiscall
ZombossBladeStage::ZombossBladeStage(ZombossBladeStage *this,ZombossBladeStage *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 4) = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x38),(vector *)(param_1 + 0x38));
  PennyGiftBoxRankPriviewItemData::PennyGiftBoxRankPriviewItemData
            ((PennyGiftBoxRankPriviewItemData *)(this + 0x50),
             (PennyGiftBoxRankPriviewItemData *)(param_1 + 0x50));
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  uVar5 = *(undefined4 *)(param_1 + 0x88);
  uVar9 = *(undefined8 *)(param_1 + 0x94);
  uVar6 = *(undefined4 *)(param_1 + 0x8c);
  uVar7 = *(undefined4 *)(param_1 + 0x9c);
  uVar8 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0x78) = uVar2;
  *(undefined4 *)(this + 0x7c) = uVar4;
  *(undefined8 *)(this + 0x94) = uVar9;
  *(undefined4 *)(this + 0x9c) = uVar7;
  *(undefined4 *)(this + 0x80) = uVar1;
  *(undefined4 *)(this + 0x84) = uVar3;
  *(undefined4 *)(this + 0x88) = uVar5;
  *(undefined4 *)(this + 0x8c) = uVar6;
  *(undefined4 *)(this + 0x90) = uVar8;
  return;
}

