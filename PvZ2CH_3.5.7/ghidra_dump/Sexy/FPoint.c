// Class: Sexy::FPoint


/* Sexy::FPoint::FPoint(Sexy::TPoint<float> const&) */

void __thiscall Sexy::FPoint::FPoint(FPoint *this,TPoint *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}

