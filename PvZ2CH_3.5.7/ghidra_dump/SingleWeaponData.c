// Class: SingleWeaponData


/* SingleWeaponData::SingleWeaponData() */

void __thiscall SingleWeaponData::SingleWeaponData(SingleWeaponData *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  *(undefined4 *)this = 0;
  std::string::append((string *)(this + 8),"",in_x2);
  *(undefined4 *)(this + 0x10) = 0x3f000000;
  return;
}

