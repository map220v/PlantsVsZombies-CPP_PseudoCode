// Class: ActivityRechargePlantPieceData


/* ActivityRechargePlantPieceData::ActivityRechargePlantPieceData() */

void __thiscall
ActivityRechargePlantPieceData::ActivityRechargePlantPieceData(ActivityRechargePlantPieceData *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  *this = (ActivityRechargePlantPieceData)0x0;
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x18),"",in_x2);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

