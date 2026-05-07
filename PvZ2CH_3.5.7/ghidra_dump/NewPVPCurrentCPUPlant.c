// Class: NewPVPCurrentCPUPlant


/* NewPVPCurrentCPUPlant::NewPVPCurrentCPUPlant(int, int, float, int, bool) */

void __thiscall
NewPVPCurrentCPUPlant::NewPVPCurrentCPUPlant
          (NewPVPCurrentCPUPlant *this,int param_1,int param_2,float param_3,int param_4,
          bool param_5)

{
  *(float *)(this + 8) = param_3;
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 0xc) = param_4;
  this[0x10] = (NewPVPCurrentCPUPlant)param_5;
  return;
}

