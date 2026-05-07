// Class: ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket


/* ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket::ProbabilityBucket(SeedRainContentProperties,
   int) */

void __thiscall
ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket::ProbabilityBucket
          (ProbabilityBucket *this,SeedRainContentProperties *param_2,undefined4 param_3)

{
  SeedRainContentProperties::SeedRainContentProperties((SeedRainContentProperties *)this,param_2);
  *(undefined4 *)(this + 0x20) = param_3;
  return;
}


/* ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket::ProbabilityBucket(ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket&&)
    */

void __thiscall
ProbabilitySet<SeedRainContentProperties>::ProbabilityBucket::ProbabilityBucket
          (ProbabilityBucket *this,ProbabilityBucket *param_1)

{
  SeedRainContentProperties::SeedRainContentProperties
            ((SeedRainContentProperties *)this,(SeedRainContentProperties *)param_1);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}

