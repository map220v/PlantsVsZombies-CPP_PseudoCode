// Class: RenaiModuleProperties::StatueInfo


/* RenaiModuleProperties::StatueInfo::StatueInfo() */

void __thiscall RenaiModuleProperties::StatueInfo::StatueInfo(StatueInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 0x10));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}

