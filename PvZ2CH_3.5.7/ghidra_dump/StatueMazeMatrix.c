// Class: StatueMazeMatrix


/* StatueMazeMatrix::StatueMazeMatrix() */

void __thiscall StatueMazeMatrix::StatueMazeMatrix(StatueMazeMatrix *this)

{
  *this = (StatueMazeMatrix)0x1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* StatueMazeMatrix::StatueMazeMatrix(bool, float, float) */

void __thiscall
StatueMazeMatrix::StatueMazeMatrix(StatueMazeMatrix *this,bool param_1,float param_2,float param_3)

{
  *(float *)(this + 4) = param_2;
  *this = (StatueMazeMatrix)param_1;
  *(float *)(this + 8) = param_3;
  return;
}

