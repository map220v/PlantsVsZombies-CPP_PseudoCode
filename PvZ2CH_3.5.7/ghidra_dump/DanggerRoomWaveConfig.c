// Class: DanggerRoomWaveConfig


/* DanggerRoomWaveConfig::DanggerRoomWaveConfig() */

void __thiscall DanggerRoomWaveConfig::DanggerRoomWaveConfig(DanggerRoomWaveConfig *this)

{
  RandomJitteredWaveConfig::RandomJitteredWaveConfig((RandomJitteredWaveConfig *)this);
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined4 *)(this + 0x4c) = 1;
  *(undefined4 *)(this + 0x50) = 1;
  *(undefined4 *)(this + 0x58) = 100;
  *(undefined4 *)(this + 0x54) = 0x3f800000;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  return;
}


/* DanggerRoomWaveConfig::~DanggerRoomWaveConfig() */

void __thiscall DanggerRoomWaveConfig::~DanggerRoomWaveConfig(DanggerRoomWaveConfig *this)

{
  std::vector<DrZomibeLevelData,std::allocator<DrZomibeLevelData>>::~vector
            ((vector<DrZomibeLevelData,std::allocator<DrZomibeLevelData>> *)(this + 0x30));
  std::vector<RandomJitteredWaveInstruction,std::allocator<RandomJitteredWaveInstruction>>::~vector
            ((vector<RandomJitteredWaveInstruction,std::allocator<RandomJitteredWaveInstruction>> *)
             (this + 0x18));
  return;
}

