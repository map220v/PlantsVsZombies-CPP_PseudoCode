// Class: EA::Text::Rectangle


/* EA::Text::Rectangle::Rectangle(float, float, float, float) */

void __thiscall
EA::Text::Rectangle::Rectangle
          (Rectangle *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  return;
}

