// Class: PlayerSet


/* PlayerSet::PlayerSet() */

void __thiscall PlayerSet::PlayerSet(PlayerSet *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)this = 0;
  std::vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>>::clear
            ((vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>> *)(this + 8));
  return;
}


/* PlayerSet::~PlayerSet() */

void __thiscall PlayerSet::~PlayerSet(PlayerSet *this)

{
  std::vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>>::~vector
            ((vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>> *)(this + 8));
  return;
}


/* PlayerSet::PlayerSet(PlayerSet const&) */

void __thiscall PlayerSet::PlayerSet(PlayerSet *this,PlayerSet *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>>::vector
            ((vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* PlayerSet::TEMPNAMEPLACEHOLDERVALUE(PlayerSet const&) */

PlayerSet * __thiscall PlayerSet::operator=(PlayerSet *this,PlayerSet *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>>::operator=
            ((vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

