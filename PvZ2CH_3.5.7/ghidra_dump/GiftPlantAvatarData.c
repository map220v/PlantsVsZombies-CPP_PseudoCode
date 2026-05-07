// Class: GiftPlantAvatarData


/* GiftPlantAvatarData::GiftPlantAvatarData(GiftPlantAvatarData const&) */

void __thiscall
GiftPlantAvatarData::GiftPlantAvatarData(GiftPlantAvatarData *this,GiftPlantAvatarData *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* GiftPlantAvatarData::GiftPlantAvatarData() */

void __thiscall GiftPlantAvatarData::GiftPlantAvatarData(GiftPlantAvatarData *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

