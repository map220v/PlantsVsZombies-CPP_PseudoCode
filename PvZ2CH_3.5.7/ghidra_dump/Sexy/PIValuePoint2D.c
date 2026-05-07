// Class: Sexy::PIValuePoint2D


/* Sexy::PIValuePoint2D::PIValuePoint2D() */

void __thiscall Sexy::PIValuePoint2D::PIValuePoint2D(PIValuePoint2D *this)

{
  PieceConfig::PieceConfig((PieceConfig *)(this + 4));
  return;
}


/* Sexy::PIValuePoint2D::PIValuePoint2D(Sexy::PIValuePoint2D const&) */

void __thiscall Sexy::PIValuePoint2D::PIValuePoint2D(PIValuePoint2D *this,PIValuePoint2D *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FPoint::FPoint((FPoint *)(this + 4),(TPoint *)(param_1 + 4));
  return;
}

