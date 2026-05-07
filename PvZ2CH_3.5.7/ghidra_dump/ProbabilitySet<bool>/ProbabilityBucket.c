// Class: ProbabilitySet<bool>::ProbabilityBucket


/* ProbabilitySet<bool>::ProbabilityBucket::ProbabilityBucket(bool, int) */

void __thiscall
ProbabilitySet<bool>::ProbabilityBucket::ProbabilityBucket
          (ProbabilityBucket *this,bool param_1,int param_2)

{
  *this = (ProbabilityBucket)param_1;
  *(int *)(this + 4) = param_2;
  return;
}

