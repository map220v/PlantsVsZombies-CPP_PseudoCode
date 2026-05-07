// Class: PlantWarsLevelTeamData


/* PlantWarsLevelTeamData::PlantWarsLevelTeamData(PlantWarsLevelTeamData&&) */

void __thiscall
PlantWarsLevelTeamData::PlantWarsLevelTeamData
          (PlantWarsLevelTeamData *this,PlantWarsLevelTeamData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  return;
}


/* PlantWarsLevelTeamData::~PlantWarsLevelTeamData() */

void __thiscall PlantWarsLevelTeamData::~PlantWarsLevelTeamData(PlantWarsLevelTeamData *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8));
  return;
}


/* PlantWarsLevelTeamData::PlantWarsLevelTeamData(PlantWarsLevelTeamData const&) */

void __thiscall
PlantWarsLevelTeamData::PlantWarsLevelTeamData
          (PlantWarsLevelTeamData *this,PlantWarsLevelTeamData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),(vector *)(param_1 + 8));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return;
}

