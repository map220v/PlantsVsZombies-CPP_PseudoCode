// Class: PFTrigger


/* PFTrigger::PFTrigger() */

void __thiscall PFTrigger::PFTrigger(PFTrigger *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (PFTrigger)0x0;
  *(undefined4 *)this = 0;
  return;
}


/* PFTrigger::PFTrigger(float, int, int) */

void __thiscall PFTrigger::PFTrigger(PFTrigger *this,float param_1,int param_2,int param_3)

{
  *(float *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  this[0xc] = (PFTrigger)0x0;
  return;
}

