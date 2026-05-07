// Class: ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket


/* ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket::ProbabilityBucket(DefaultWaveConfig, int)
    */

void __thiscall
ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket::ProbabilityBucket
          (ProbabilityBucket *this,pair *param_2,undefined4 param_3)

{
  std::pair<std::string_const,int>::pair((pair<std::string_const,int> *)this,param_2);
  *(undefined4 *)(this + 0x10) = param_3;
  return;
}


/* ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket::ProbabilityBucket(ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket&&)
    */

void __thiscall
ProbabilitySet<DefaultWaveConfig>::ProbabilityBucket::ProbabilityBucket
          (ProbabilityBucket *this,ProbabilityBucket *param_1)

{
  VanSpawnZombieData::VanSpawnZombieData((VanSpawnZombieData *)this,(VanSpawnZombieData *)param_1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}

