// Class: SupplymentInfo


/* SupplymentInfo::SupplymentInfo(Sexy::FPoint, Sexy::Point, bool) */

void __thiscall
SupplymentInfo::SupplymentInfo
          (SupplymentInfo *this,TPoint *param_2,TPoint *param_3,SupplymentInfo param_4)

{
  Sexy::FPoint::FPoint((FPoint *)this,param_2);
  Sexy::Point::Point((Point *)(this + 8),param_3);
  this[0x10] = param_4;
  return;
}


/* SupplymentInfo::SupplymentInfo(SupplymentInfo&&) */

void __thiscall SupplymentInfo::SupplymentInfo(SupplymentInfo *this,SupplymentInfo *param_1)

{
  Sexy::FPoint::FPoint((FPoint *)this,(TPoint *)param_1);
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_1 + 8));
  this[0x10] = param_1[0x10];
  return;
}

