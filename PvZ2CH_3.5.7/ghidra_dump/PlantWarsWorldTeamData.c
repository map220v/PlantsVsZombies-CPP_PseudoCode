// Class: PlantWarsWorldTeamData


/* PlantWarsWorldTeamData::~PlantWarsWorldTeamData() */

void __thiscall PlantWarsWorldTeamData::~PlantWarsWorldTeamData(PlantWarsWorldTeamData *this)

{
  std::vector<PlantWarsLevelTeamData,std::allocator<PlantWarsLevelTeamData>>::~vector
            ((vector<PlantWarsLevelTeamData,std::allocator<PlantWarsLevelTeamData>> *)(this + 8));
  return;
}


/* PlantWarsWorldTeamData::PlantWarsWorldTeamData(PlantWarsWorldTeamData const&) */

void __thiscall
PlantWarsWorldTeamData::PlantWarsWorldTeamData
          (PlantWarsWorldTeamData *this,PlantWarsWorldTeamData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<PlantWarsLevelTeamData,std::allocator<PlantWarsLevelTeamData>>::vector
            ((vector<PlantWarsLevelTeamData,std::allocator<PlantWarsLevelTeamData>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}

