// Class: Sexy::MTAutoDisallowRand


/* Sexy::MTAutoDisallowRand::MTAutoDisallowRand() */

void __thiscall Sexy::MTAutoDisallowRand::MTAutoDisallowRand(MTAutoDisallowRand *this)

{
  MTRand::SetRandAllowed(false);
  return;
}


/* Sexy::MTAutoDisallowRand::~MTAutoDisallowRand() */

void __thiscall Sexy::MTAutoDisallowRand::~MTAutoDisallowRand(MTAutoDisallowRand *this)

{
  MTRand::SetRandAllowed(true);
  return;
}

