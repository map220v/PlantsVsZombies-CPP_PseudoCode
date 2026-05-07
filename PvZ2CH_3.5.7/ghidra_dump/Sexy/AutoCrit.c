// Class: Sexy::AutoCrit


/* Sexy::AutoCrit::AutoCrit(Sexy::CritSect&) */

void __thiscall Sexy::AutoCrit::AutoCrit(AutoCrit *this,CritSect *param_1)

{
  *(CritSect **)this = param_1;
  CritSect::Lock(param_1);
  return;
}


/* Sexy::AutoCrit::~AutoCrit() */

void __thiscall Sexy::AutoCrit::~AutoCrit(AutoCrit *this)

{
  CritSect::Unlock(*(CritSect **)this);
  return;
}

