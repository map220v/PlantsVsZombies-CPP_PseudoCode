// Class: MiniGameData


/* MiniGameData::~MiniGameData() */

void __thiscall MiniGameData::~MiniGameData(MiniGameData *this)

{
  std::vector<MiniGameLevelData,std::allocator<MiniGameLevelData>>::~vector
            ((vector<MiniGameLevelData,std::allocator<MiniGameLevelData>> *)(this + 8));
  return;
}


/* MiniGameData::MiniGameData(MiniGameData const&) */

void __thiscall MiniGameData::MiniGameData(MiniGameData *this,MiniGameData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  this[4] = param_1[4];
  *(undefined4 *)this = uVar1;
  std::vector<MiniGameLevelData,std::allocator<MiniGameLevelData>>::vector
            ((vector<MiniGameLevelData,std::allocator<MiniGameLevelData>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* MiniGameData::TEMPNAMEPLACEHOLDERVALUE(MiniGameData const&) */

MiniGameData * __thiscall MiniGameData::operator=(MiniGameData *this,MiniGameData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  this[4] = param_1[4];
  *(undefined4 *)this = uVar1;
  std::vector<MiniGameLevelData,std::allocator<MiniGameLevelData>>::operator=
            ((vector<MiniGameLevelData,std::allocator<MiniGameLevelData>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

