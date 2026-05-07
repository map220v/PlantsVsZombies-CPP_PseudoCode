// Class: ProgressBarDoodad


/* ProgressBarDoodad::ProgressBarDoodad(float, int, int) */

void __thiscall
ProgressBarDoodad::ProgressBarDoodad(ProgressBarDoodad *this,float param_1,int param_2,int param_3)

{
  *(float *)(this + 8) = param_1;
  *(int *)(this + 0xc) = param_2;
  *(int *)(this + 0x10) = param_3;
  *(undefined8 *)this = 0;
  this[0x14] = (ProgressBarDoodad)0x0;
  return;
}

