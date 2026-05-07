// Class: ProbabilitySet<Sexy::Point>::ProbabilityBucket


/* ProbabilitySet<Sexy::Point>::ProbabilityBucket::ProbabilityBucket(ProbabilitySet<Sexy::Point>::ProbabilityBucket
   const&) */

void __thiscall
ProbabilitySet<Sexy::Point>::ProbabilityBucket::ProbabilityBucket
          (ProbabilityBucket *this,ProbabilityBucket *param_1)

{
  Sexy::Point::Point((Point *)this,(TPoint *)param_1);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


/* ProbabilitySet<Sexy::Point>::ProbabilityBucket::ProbabilityBucket(Sexy::Point, int) */

void __thiscall
ProbabilitySet<Sexy::Point>::ProbabilityBucket::ProbabilityBucket
          (ProbabilityBucket *this,TPoint *param_2,undefined4 param_3)

{
  Sexy::Point::Point((Point *)this,param_2);
  *(undefined4 *)(this + 8) = param_3;
  return;
}

