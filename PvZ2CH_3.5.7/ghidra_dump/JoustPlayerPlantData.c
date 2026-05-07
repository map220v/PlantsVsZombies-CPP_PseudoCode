// Class: JoustPlayerPlantData


/* JoustPlayerPlantData::JoustPlayerPlantData(int, int, bool) */

void __thiscall
JoustPlayerPlantData::JoustPlayerPlantData
          (JoustPlayerPlantData *this,int param_1,int param_2,bool param_3)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  this[8] = (JoustPlayerPlantData)param_3;
  return;
}


/* JoustPlayerPlantData::JoustPlayerPlantData(int, int) */

void __thiscall
JoustPlayerPlantData::JoustPlayerPlantData(JoustPlayerPlantData *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  this[8] = (JoustPlayerPlantData)0x0;
  return;
}

