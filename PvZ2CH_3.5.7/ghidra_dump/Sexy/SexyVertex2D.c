// Class: Sexy::SexyVertex2D


/* Sexy::SexyVertex2D::SexyVertex2D(float, float, float, float) */

void __thiscall
Sexy::SexyVertex2D::SexyVertex2D
          (SexyVertex2D *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)this = param_1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 0x18) = param_3;
  *(float *)(this + 0x1c) = param_4;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  return;
}


/* Sexy::SexyVertex2D::SexyVertex2D() */

void __thiscall Sexy::SexyVertex2D::SexyVertex2D(SexyVertex2D *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  return;
}


/* Sexy::SexyVertex2D::SexyVertex2D(float, float, float, float, unsigned int) */

void __thiscall
Sexy::SexyVertex2D::SexyVertex2D
          (SexyVertex2D *this,float param_1,float param_2,float param_3,float param_4,uint param_5)

{
  *(float *)this = param_1;
  *(uint *)(this + 0x10) = param_5;
  *(undefined4 *)(this + 0x14) = 0;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 0x18) = param_3;
  *(float *)(this + 0x1c) = param_4;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  return;
}

