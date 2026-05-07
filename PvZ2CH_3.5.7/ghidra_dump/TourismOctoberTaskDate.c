// Class: TourismOctoberTaskDate


/* TourismOctoberTaskDate::TourismOctoberTaskDate() */

void __thiscall TourismOctoberTaskDate::TourismOctoberTaskDate(TourismOctoberTaskDate *this)

{
  *this = (TourismOctoberTaskDate)0x0;
  *(undefined4 *)(this + 4) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* TourismOctoberTaskDate::TEMPNAMEPLACEHOLDERVALUE(TourismOctoberTaskDate const&) */

TourismOctoberTaskDate * __thiscall
TourismOctoberTaskDate::operator=(TourismOctoberTaskDate *this,TourismOctoberTaskDate *param_1)

{
  TourismOctoberTaskDate TVar1;
  
  TVar1 = *param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *this = TVar1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}


/* TourismOctoberTaskDate::TourismOctoberTaskDate(TourismOctoberTaskDate const&) */

void __thiscall
TourismOctoberTaskDate::TourismOctoberTaskDate
          (TourismOctoberTaskDate *this,TourismOctoberTaskDate *param_1)

{
  TourismOctoberTaskDate TVar1;
  
  TVar1 = *param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *this = TVar1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* TourismOctoberTaskDate::TourismOctoberTaskDate(TourismOctoberTaskDate&&) */

void __thiscall
TourismOctoberTaskDate::TourismOctoberTaskDate
          (TourismOctoberTaskDate *this,TourismOctoberTaskDate *param_1)

{
  TourismOctoberTaskDate TVar1;
  
  TVar1 = *param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *this = TVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  return;
}

