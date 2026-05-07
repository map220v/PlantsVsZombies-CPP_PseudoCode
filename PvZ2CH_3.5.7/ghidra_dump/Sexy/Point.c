// Class: Sexy::Point


/* Sexy::Point::Point(int, int) */

void __thiscall Sexy::Point::Point(Point *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}


/* Sexy::Point::Point(Sexy::TPoint<int> const&) */

void __thiscall Sexy::Point::Point(Point *this,TPoint *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  return;
}


/* Sexy::Point::Point() */

void __thiscall Sexy::Point::Point(Point *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}

