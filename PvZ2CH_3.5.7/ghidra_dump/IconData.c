// Class: IconData


/* IconData::IconData() */

void __thiscall IconData::IconData(IconData *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::string::append((string *)this,"",in_x2);
  this[0xc] = (IconData)0x0;
  this[0xd] = (IconData)0x0;
  *(undefined4 *)(this + 8) = 1;
  return;
}


/* IconData::IconData(IconData const&) */

void __thiscall IconData::IconData(IconData *this,IconData *param_1)

{
  undefined4 uVar1;
  IconData IVar2;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 8);
  IVar2 = param_1[0xc];
  this[0xd] = param_1[0xd];
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = IVar2;
  return;
}

