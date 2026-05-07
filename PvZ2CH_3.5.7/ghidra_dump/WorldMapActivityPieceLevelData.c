// Class: WorldMapActivityPieceLevelData


/* WorldMapActivityPieceLevelData::WorldMapActivityPieceLevelData(WorldMapActivityPieceLevelData&&)
    */

void __thiscall
WorldMapActivityPieceLevelData::WorldMapActivityPieceLevelData
          (WorldMapActivityPieceLevelData *this,WorldMapActivityPieceLevelData *param_1)

{
  FUN_05474148();
  this[8] = param_1[8];
  return;
}


/* WorldMapActivityPieceLevelData::WorldMapActivityPieceLevelData() */

void __thiscall
WorldMapActivityPieceLevelData::WorldMapActivityPieceLevelData(WorldMapActivityPieceLevelData *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::string::append((string *)this,"",in_x2);
  this[8] = (WorldMapActivityPieceLevelData)0x0;
  return;
}

