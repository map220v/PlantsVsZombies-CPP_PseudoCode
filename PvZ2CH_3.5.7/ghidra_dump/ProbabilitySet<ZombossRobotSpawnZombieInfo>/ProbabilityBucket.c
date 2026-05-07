// Class: ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket


/* ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket::ProbabilityBucket(ZombossRobotSpawnZombieInfo,
   int) */

void __thiscall
ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket::ProbabilityBucket
          (ProbabilityBucket *this,ZombossRobotSpawnZombieInfo *param_2,undefined4 param_3)

{
  ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo
            ((ZombossRobotSpawnZombieInfo *)this,param_2);
  *(undefined4 *)(this + 0x18) = param_3;
  return;
}


/* ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket::ProbabilityBucket(ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket&&)
    */

void __thiscall
ProbabilitySet<ZombossRobotSpawnZombieInfo>::ProbabilityBucket::ProbabilityBucket
          (ProbabilityBucket *this,ProbabilityBucket *param_1)

{
  ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo
            ((ZombossRobotSpawnZombieInfo *)this,(ZombossRobotSpawnZombieInfo *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}

