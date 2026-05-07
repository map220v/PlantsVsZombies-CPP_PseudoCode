// Class: Sexy::Color


/* Sexy::Color::Color() */

void __thiscall Sexy::Color::Color(Color *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0xff;
  return;
}


/* Sexy::Color::Color(int) */

void __thiscall Sexy::Color::Color(Color *this,int param_1)

{
  *(uint *)this = (uint)param_1 >> 0x10 & 0xff;
  *(uint *)(this + 4) = (uint)param_1 >> 8 & 0xff;
  *(uint *)(this + 8) = param_1 & 0xff;
  if ((param_1 & 0xff000000U) == 0) {
    *(undefined4 *)(this + 0xc) = 0xff;
    return;
  }
  *(uint *)(this + 0xc) = (uint)param_1 >> 0x18;
  return;
}


/* Sexy::Color::Color(int, int) */

void __thiscall Sexy::Color::Color(Color *this,int param_1,int param_2)

{
  *(uint *)this = (uint)param_1 >> 0x10 & 0xff;
  *(uint *)(this + 4) = (uint)param_1 >> 8 & 0xff;
  *(uint *)(this + 8) = param_1 & 0xff;
  *(int *)(this + 0xc) = param_2;
  return;
}


/* Sexy::Color::Color(int, int, int) */

void __thiscall Sexy::Color::Color(Color *this,int param_1,int param_2,int param_3)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = 0xff;
  return;
}


/* Sexy::Color::Color(Sexy::SexyRGBA const&) */

void __thiscall Sexy::Color::Color(Color *this,SexyRGBA *param_1)

{
  *(uint *)this = (uint)(byte)param_1[2];
  *(uint *)(this + 4) = (uint)(byte)param_1[1];
  *(uint *)(this + 8) = (uint)(byte)*param_1;
  *(uint *)(this + 0xc) = (uint)(byte)param_1[3];
  return;
}


/* Sexy::Color::Color(unsigned char const*) */

void __thiscall Sexy::Color::Color(Color *this,uchar *param_1)

{
  *(uint *)this = (uint)*param_1;
  *(uint *)(this + 4) = (uint)param_1[1];
  *(uint *)(this + 8) = (uint)param_1[2];
  *(undefined4 *)(this + 0xc) = 0xff;
  return;
}


/* Sexy::Color::Color(int const*) */

void __thiscall Sexy::Color::Color(Color *this,int *param_1)

{
  *(int *)this = *param_1;
  *(int *)(this + 4) = param_1[1];
  *(int *)(this + 8) = param_1[2];
  *(undefined4 *)(this + 0xc) = 0xff;
  return;
}


/* Sexy::Color::Color(Sexy::Color::PredefinedColor) */

void __thiscall Sexy::Color::Color(Color *this,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0xc) = 0xff;
  switch(param_2) {
  case 0:
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    break;
  case 1:
    *(undefined4 *)this = 0xff;
    *(undefined4 *)(this + 4) = 0xff;
    *(undefined4 *)(this + 8) = 0xff;
    break;
  case 2:
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)this = 0xff;
    *(undefined4 *)(this + 8) = 0;
    break;
  case 3:
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)this = 0xff;
    *(undefined4 *)(this + 4) = 0xad;
    break;
  case 4:
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)this = 0xff;
    *(undefined4 *)(this + 4) = 0xff;
    break;
  case 5:
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0xff;
    *(undefined4 *)(this + 8) = 0;
    break;
  case 6:
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0xff;
    break;
  case 7:
    *(undefined4 *)this = 0xa0;
    *(undefined4 *)(this + 4) = 0x20;
    *(undefined4 *)(this + 8) = 0xf0;
    break;
  case 8:
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0xff;
    *(undefined4 *)(this + 8) = 0xff;
    break;
  case 0xffffffff:
    uVar1 = std::numeric_limits<int>::max();
    *(undefined4 *)this = uVar1;
    *(undefined4 *)(this + 4) = uVar1;
    *(undefined4 *)(this + 8) = uVar1;
  }
  return;
}


/* Sexy::Color::operator[](int) */

Color * __thiscall Sexy::Color::operator[](Color *this,int param_1)

{
  switch(param_1) {
  case 0:
    break;
  case 1:
    return this + 4;
  case 2:
    return this + 8;
  case 3:
    return this + 0xc;
  default:
    this = (Color *)&DAT_06ba92d8;
  }
  return this;
}


/* Sexy::Color::operator[](int) const */

undefined4 __thiscall Sexy::Color::operator[](Color *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
    return *(undefined4 *)this;
  case 1:
    return *(undefined4 *)(this + 4);
  case 2:
    return *(undefined4 *)(this + 8);
  case 3:
    uVar1 = *(undefined4 *)(this + 0xc);
  }
  return uVar1;
}


/* Sexy::Color::TEMPNAMEPLACEHOLDERVALUE(Sexy::Color const&) const */

Insets * __thiscall Sexy::Color::operator*(Color *this,Color *param_1)

{
  Insets *in_x8;
  
  Insets::Insets(in_x8,(*(int *)this * *(int *)param_1) / 0xff,
                 (*(int *)(this + 4) * *(int *)(param_1 + 4)) / 0xff,
                 (*(int *)(this + 8) * *(int *)(param_1 + 8)) / 0xff,
                 (*(int *)(this + 0xc) * *(int *)(param_1 + 0xc)) / 0xff);
  return in_x8;
}


/* Sexy::Color::TEMPNAMEPLACEHOLDERVALUE(float) const */

Insets * __thiscall Sexy::Color::operator*(Color *this,float param_1)

{
  Insets *in_x8;
  
  Insets::Insets(in_x8,*(int *)this,*(int *)(this + 4),*(int *)(this + 8),
                 (int)(param_1 * (float)*(int *)(this + 0xc)));
  return in_x8;
}


/* Sexy::Color::ToInt() const */

uint __thiscall Sexy::Color::ToInt(Color *this)

{
  return *(int *)this << 0x10 | *(int *)(this + 0xc) << 0x18 | *(uint *)(this + 8) |
         *(int *)(this + 4) << 8;
}


/* Sexy::Color::FromInt(unsigned long) */

Insets * __thiscall Sexy::Color::FromInt(Color *this,ulong param_1)

{
  Insets *in_x8;
  
  Insets::Insets(in_x8,(uint)((ulong)this >> 0x10) & 0xff,(uint)((ulong)this >> 8) & 0xff,
                 (uint)this & 0xff,(uint)((ulong)this >> 0x18) & 0xff);
  return in_x8;
}


/* Sexy::Color::FAlpha(float) */

Insets * __thiscall Sexy::Color::FAlpha(Color *this,float param_1)

{
  Insets *in_x8;
  
  Insets::Insets(in_x8,0xff,0xff,0xff,(int)(param_1 * 255.0));
  return in_x8;
}


/* Sexy::Color::FromHSV(float, float, float) */

void __thiscall Sexy::Color::FromHSV(Color *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  Insets *in_x8;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = param_3;
  fVar5 = param_3;
  fVar6 = param_3;
  if (param_2 != 0.0) {
    iVar1 = (int)(param_1 * 6.0000005);
    fVar6 = (1.0 - param_2) * param_3;
    fVar2 = param_1 * 6.0000005 - (float)iVar1;
    fVar3 = (1.0 - param_2 * fVar2) * param_3;
    fVar4 = (param_2 * (fVar2 + -1.0) + 1.0) * param_3;
    fVar2 = fVar4;
    switch(iVar1) {
    case 1:
      fVar2 = param_3;
      fVar5 = fVar3;
      break;
    case 2:
      fVar2 = param_3;
      fVar5 = fVar6;
      fVar6 = fVar4;
      break;
    case 3:
      fVar2 = fVar3;
      fVar5 = fVar6;
      fVar6 = param_3;
      break;
    case 4:
      fVar2 = fVar6;
      fVar5 = fVar4;
      fVar6 = param_3;
    }
  }
  Insets::Insets(in_x8,(int)(fVar5 * 255.0),(int)(fVar2 * 255.0),(int)(fVar6 * 255.0),0xff);
  return;
}


/* Sexy::Color::ToRGBA() const */

uint __thiscall Sexy::Color::ToRGBA(Color *this)

{
  return *(uint *)(this + 8) & 0xff | (uint)(byte)this[4] << 8 | (uint)(byte)*this << 0x10 |
         (uint)(byte)this[0xc] << 0x18;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Color::IsInvalid() const */

void __thiscall Sexy::Color::IsInvalid(Color *this)

{
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Color(aCStack_18,0xffffffff);
  Sexy::operator==(this,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

