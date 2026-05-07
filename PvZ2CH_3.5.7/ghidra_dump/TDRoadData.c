// Class: TDRoadData


/* TDRoadData::TDRoadData() */

void __thiscall TDRoadData::TDRoadData(TDRoadData *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  std::string::append((string *)(this + 8),"",in_x2);
  *(undefined4 *)this = 8;
  return;
}

