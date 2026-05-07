// Class: ConveyorAddSeedInstruction


/* ConveyorAddSeedInstruction::ConveyorAddSeedInstruction(ConveyorAddSeedInstruction const&) */

void __thiscall
ConveyorAddSeedInstruction::ConveyorAddSeedInstruction
          (ConveyorAddSeedInstruction *this,ConveyorAddSeedInstruction *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uVar8 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar4;
  *(undefined4 *)(this + 0x18) = uVar6;
  *(undefined4 *)(this + 0x1c) = uVar7;
  *(undefined4 *)(this + 0x2c) = uVar8;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar3;
  *(undefined4 *)(this + 0x28) = uVar5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorAddSeedInstruction::ConveyorAddSeedInstruction() */

void __thiscall
ConveyorAddSeedInstruction::ConveyorAddSeedInstruction(ConveyorAddSeedInstruction *this)

{
  undefined4 uVar1;
  
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  Set8BytesTo0(this + 8);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = 0x41200000;
  *(undefined4 *)(this + 0x10) = 1000;
  uVar1 = _FUN_03c75c68;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

