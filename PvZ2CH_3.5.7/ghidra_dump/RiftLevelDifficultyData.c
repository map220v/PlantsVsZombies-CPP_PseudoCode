// Class: RiftLevelDifficultyData


/* RiftLevelDifficultyData::~RiftLevelDifficultyData() */

void __thiscall RiftLevelDifficultyData::~RiftLevelDifficultyData(RiftLevelDifficultyData *this)

{
  std::_Destroy<SheepInfo*>(*(SheepInfo **)this,*(SheepInfo **)(this + 8));
  std::_Vector_base<LevelModuleDifficultyEntry,std::allocator<LevelModuleDifficultyEntry>>::
  ~_Vector_base((_Vector_base<LevelModuleDifficultyEntry,std::allocator<LevelModuleDifficultyEntry>>
                 *)this);
  return;
}

