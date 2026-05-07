// Class: Sexy::MemoryImage::TriRep::Tri


/* Sexy::MemoryImage::TriRep::Tri::Tri(float, float, float, float, float, float) */

void __thiscall
Sexy::MemoryImage::TriRep::Tri::Tri
          (Tri *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  *(float *)(this + 0x10) = param_5;
  *(float *)(this + 0x14) = param_6;
  return;
}

