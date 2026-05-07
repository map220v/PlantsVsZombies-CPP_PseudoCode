// Class: Curve<float>


/* Curve<float>::Curve(float, float, float, float, CurveType) */

void __thiscall
Curve<float>::Curve(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   Curve<float> *this,undefined4 param_6)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03653a44 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Curve<float>::GetAt(float) const */

void __thiscall Curve<float>::GetAt(Curve<float> *this,float param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_register_00005004 [12];
  
  auVar1._4_12_ = in_register_00005004;
  auVar1._0_4_ = param_1;
  CurveLerp<float>(auVar1,*(undefined4 *)(this + 4),param_1,this + 8,this + 0xc,
                   *(undefined4 *)(this + 0x10));
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03653a44 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Curve<float>::operator[](float) const */

void __thiscall Curve<float>::operator[](Curve<float> *this,float param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_register_00005004 [12];
  
  auVar1._4_12_ = in_register_00005004;
  auVar1._0_4_ = param_1;
  CurveLerp<float>(auVar1,*(undefined4 *)(this + 4),param_1,this + 8,this + 0xc,
                   *(undefined4 *)(this + 0x10));
  return;
}


/* Curve<int>::Curve(float, float, int, int, CurveType) */

void __thiscall
Curve<int>::Curve(undefined4 param_1,undefined4 param_2,Curve<int> *this,undefined4 param_3,
                 undefined4 param_4,undefined4 param_6)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  *(undefined4 *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 4) = param_2;
  return;
}


/* Curve<int>::GetAt(float) const */

int __thiscall Curve<int>::GetAt(Curve<int> *this,float param_1)

{
  int iVar1;
  
  iVar1 = CurveLerp<int>(*(undefined4 *)this,*(undefined4 *)(this + 4),param_1,this + 8,this + 0xc,
                         *(undefined4 *)(this + 0x10));
  return iVar1;
}


/* Curve<Sexy::Point>::Curve(float, float, Sexy::Point, Sexy::Point, CurveType) */

void __thiscall
Curve<Sexy::Point>::Curve
          (undefined4 param_1,undefined4 param_2,Curve<Sexy::Point> *this,TPoint *param_4,
          TPoint *param_5,undefined4 param_6)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 4) = param_2;
  Sexy::Point::Point((Point *)(this + 8),param_4);
  Sexy::Point::Point((Point *)(this + 0x10),param_5);
  *(undefined4 *)(this + 0x18) = param_6;
  return;
}


/* Curve<Sexy::Point>::Curve(Curve<Sexy::Point> const&) */

void __thiscall Curve<Sexy::Point>::Curve(Curve<Sexy::Point> *this,Curve *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_1 + 8));
  Sexy::Point::Point((Point *)(this + 0x10),(TPoint *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* Curve<Sexy::Point>::GetAt(float) const */

void Curve<Sexy::Point>::GetAt(float param_1)

{
  undefined4 *in_x0;
  
  CurveLerp<Sexy::Point>(*in_x0,in_x0[1],param_1,in_x0 + 2,in_x0 + 4,in_x0[6]);
  return;
}


/* Curve<int>::operator[](float) const */

int __thiscall Curve<int>::operator[](Curve<int> *this,float param_1)

{
  int iVar1;
  
  iVar1 = CurveLerp<int>(*(undefined4 *)this,*(undefined4 *)(this + 4),param_1,this + 8,this + 0xc,
                         *(undefined4 *)(this + 0x10));
  return iVar1;
}

