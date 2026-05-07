// Class: PlantPieceLevel


/* PlantPieceLevel::PlantPieceLevel(PlantPieceLevel&&) */

void __thiscall PlantPieceLevel::PlantPieceLevel(PlantPieceLevel *this,PlantPieceLevel *param_1)

{
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  return;
}


/* PlantPieceLevel::PlantPieceLevel() */

void __thiscall PlantPieceLevel::PlantPieceLevel(PlantPieceLevel *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}

