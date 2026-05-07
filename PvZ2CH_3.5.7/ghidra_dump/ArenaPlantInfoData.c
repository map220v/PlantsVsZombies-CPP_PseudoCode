// Class: ArenaPlantInfoData


/* ArenaPlantInfoData::ArenaPlantInfoData() */

void __thiscall ArenaPlantInfoData::ArenaPlantInfoData(ArenaPlantInfoData *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 0x10));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 1;
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}

