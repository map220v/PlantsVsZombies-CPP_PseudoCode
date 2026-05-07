// Class: StatueMazeSet


/* StatueMazeSet::StatueMazeSet(int, int, float, int) */

void __thiscall
StatueMazeSet::StatueMazeSet(StatueMazeSet *this,int param_1,int param_2,float param_3,int param_4)

{
  *(float *)(this + 4) = param_3;
  *(int *)this = param_1;
  *(int *)(this + 8) = param_2;
  *(int *)(this + 0xc) = param_4;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* StatueMazeSet::StatueMazeSet() */

void __thiscall StatueMazeSet::StatueMazeSet(StatueMazeSet *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 4) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* StatueMazeSet::~StatueMazeSet() */

void __thiscall StatueMazeSet::~StatueMazeSet(StatueMazeSet *this)

{
  std::vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>>::~vector
            ((vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>> *)(this + 0x10));
  return;
}


void __thiscall StatueMazeSet::~StatueMazeSet(StatueMazeSet *this)

{
  std::vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>>::~vector
            ((vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>> *)(this + 0x10));
  return;
}


void __thiscall StatueMazeSet::~StatueMazeSet(StatueMazeSet *this)

{
  std::vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>>::~vector
            ((vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>> *)(this + 0x10));
  return;
}


void __thiscall StatueMazeSet::~StatueMazeSet(StatueMazeSet *this)

{
  std::vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>>::~vector
            ((vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>> *)(this + 0x10));
  return;
}


/* StatueMazeSet::TEMPNAMEPLACEHOLDERVALUE(StatueMazeSet&&) */

StatueMazeSet * __thiscall StatueMazeSet::operator=(StatueMazeSet *this,StatueMazeSet *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 4) = uVar1;
  std::vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>>::operator=
            ((vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}


/* StatueMazeSet::StatueMazeSet(StatueMazeSet&&) */

void __thiscall StatueMazeSet::StatueMazeSet(StatueMazeSet *this,StatueMazeSet *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 4) = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* StatueMazeSet::StatueMazeSet(StatueMazeSet const&) */

void __thiscall StatueMazeSet::StatueMazeSet(StatueMazeSet *this,StatueMazeSet *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 4) = uVar1;
  std::vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>>::vector
            ((vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* StatueMazeSet::TEMPNAMEPLACEHOLDERVALUE(StatueMazeSet const&) */

StatueMazeSet * __thiscall StatueMazeSet::operator=(StatueMazeSet *this,StatueMazeSet *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 4) = uVar1;
  std::vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>>::operator=
            ((vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}

