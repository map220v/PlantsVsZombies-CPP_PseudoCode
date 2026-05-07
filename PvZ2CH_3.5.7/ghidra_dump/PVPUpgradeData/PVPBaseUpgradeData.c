// Class: PVPUpgradeData::PVPBaseUpgradeData


/* PVPUpgradeData::PVPBaseUpgradeData::PVPBaseUpgradeData() */

void __thiscall PVPUpgradeData::PVPBaseUpgradeData::PVPBaseUpgradeData(PVPBaseUpgradeData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* PVPUpgradeData::PVPBaseUpgradeData::~PVPBaseUpgradeData() */

void __thiscall PVPUpgradeData::PVPBaseUpgradeData::~PVPBaseUpgradeData(PVPBaseUpgradeData *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  return;
}


/* PVPUpgradeData::PVPBaseUpgradeData::PVPBaseUpgradeData(PVPUpgradeData::PVPBaseUpgradeData&&) */

void __thiscall
PVPUpgradeData::PVPBaseUpgradeData::PVPBaseUpgradeData
          (PVPBaseUpgradeData *this,PVPBaseUpgradeData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 4) = uVar3;
  *(undefined4 *)(this + 8) = uVar4;
  *(undefined4 *)(this + 0xc) = uVar5;
  *(undefined4 *)(this + 0x14) = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  return;
}

