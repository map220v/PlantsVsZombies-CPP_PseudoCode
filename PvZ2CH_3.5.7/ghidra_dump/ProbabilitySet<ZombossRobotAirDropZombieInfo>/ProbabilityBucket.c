// Class: ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket


/* ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket::ProbabilityBucket(ZombossRobotAirDropZombieInfo,
   int) */

void __thiscall
ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket::ProbabilityBucket
          (ProbabilityBucket *this,ZombossRobotAirDropZombieInfo *param_2,undefined4 param_3)

{
  ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo
            ((ZombossRobotAirDropZombieInfo *)this,param_2);
  *(undefined4 *)(this + 0x20) = param_3;
  return;
}


/* ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket::ProbabilityBucket(ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket&&)
    */

void __thiscall
ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilityBucket::ProbabilityBucket
          (ProbabilityBucket *this,ProbabilityBucket *param_1)

{
  ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo
            ((ZombossRobotAirDropZombieInfo *)this,(ZombossRobotAirDropZombieInfo *)param_1);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}

