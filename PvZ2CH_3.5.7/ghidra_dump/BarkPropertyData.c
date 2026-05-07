// Class: BarkPropertyData


/* BarkPropertyData::BarkPropertyData(BarkPropertyData const&) */

void __thiscall BarkPropertyData::BarkPropertyData(BarkPropertyData *this,BarkPropertyData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  return;
}


/* BarkPropertyData::BarkPropertyData() */

void __thiscall BarkPropertyData::BarkPropertyData(BarkPropertyData *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 4;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

