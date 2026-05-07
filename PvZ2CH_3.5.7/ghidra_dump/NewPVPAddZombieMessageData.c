// Class: NewPVPAddZombieMessageData


/* NewPVPAddZombieMessageData::NewPVPAddZombieMessageData(int, int, bool, bool, bool) */

void __thiscall
NewPVPAddZombieMessageData::NewPVPAddZombieMessageData
          (NewPVPAddZombieMessageData *this,int param_1,int param_2,bool param_3,bool param_4,
          bool param_5)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  this[8] = (NewPVPAddZombieMessageData)param_3;
  this[9] = (NewPVPAddZombieMessageData)param_4;
  this[10] = (NewPVPAddZombieMessageData)param_5;
  return;
}

