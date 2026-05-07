// Class: PotionData


/* PotionData::PotionData(PotionData const&) */

void __thiscall PotionData::PotionData(PotionData *this,PotionData *param_1)

{
  Sexy::Point::Point((Point *)this,(TPoint *)param_1);
  FUN_05475d88(this + 8,param_1 + 8);
  return;
}


/* PotionData::PotionData() */

void __thiscall PotionData::PotionData(PotionData *this)

{
  size_t in_x2;
  
  Sexy::Point::Point((Point *)this);
  Set8BytesTo0((string *)(this + 8));
  std::string::append((string *)(this + 8),"",in_x2);
  return;
}

