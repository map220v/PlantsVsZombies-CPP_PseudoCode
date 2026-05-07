// Class: Sexy::PerfTimer


/* Sexy::PerfTimer::PerfTimer() */

void __thiscall Sexy::PerfTimer::PerfTimer(PerfTimer *this)

{
  this[0x10] = (PerfTimer)0x0;
  return;
}


/* Sexy::PerfTimer::Stop() */

void __thiscall Sexy::PerfTimer::Stop(PerfTimer *this)

{
  FUN_0438cad4(this,this + 8);
  this[0x10] = (PerfTimer)0x0;
  return;
}


/* Sexy::PerfTimer::GetDuration() */

undefined1  [16] __thiscall Sexy::PerfTimer::GetDuration(PerfTimer *this)

{
  undefined1 auVar1 [16];
  
  if (this[0x10] != (PerfTimer)0x0) {
    FUN_0438cad4(this,this + 8);
  }
  auVar1._0_8_ = *(ulong *)(this + 8);
  auVar1._8_8_ = 0;
  return auVar1;
}

