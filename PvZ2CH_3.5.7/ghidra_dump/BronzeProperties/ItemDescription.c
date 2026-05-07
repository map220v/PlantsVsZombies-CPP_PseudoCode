// Class: BronzeProperties::ItemDescription


/* BronzeProperties::ItemDescription::ItemDescription(BronzeProperties::ItemDescription&&) */

void __thiscall
BronzeProperties::ItemDescription::ItemDescription(ItemDescription *this,ItemDescription *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05474148(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* BronzeProperties::ItemDescription::ItemDescription() */

void __thiscall BronzeProperties::ItemDescription::ItemDescription(ItemDescription *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::string::append((string *)(this + 8),"",in_x2);
  *(undefined4 *)(this + 0x10) = 0x41200000;
  return;
}

