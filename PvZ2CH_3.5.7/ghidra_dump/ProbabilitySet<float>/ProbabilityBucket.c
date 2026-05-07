// Class: ProbabilitySet<float>::ProbabilityBucket


/* ProbabilitySet<float>::ProbabilityBucket::ProbabilityBucket(float, int) */

void __thiscall
ProbabilitySet<float>::ProbabilityBucket::ProbabilityBucket
          (ProbabilityBucket *this,float param_1,int param_2)

{
  *(float *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}

