// Class: FirstRechargeExtraBonusData


/* FirstRechargeExtraBonusData::~FirstRechargeExtraBonusData() */

void __thiscall
FirstRechargeExtraBonusData::~FirstRechargeExtraBonusData(FirstRechargeExtraBonusData *this)

{
  *(undefined4 *)this = 0;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::clear
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8));
  return;
}


/* FirstRechargeExtraBonusData::FirstRechargeExtraBonusData() */

void __thiscall
FirstRechargeExtraBonusData::FirstRechargeExtraBonusData(FirstRechargeExtraBonusData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)this = 0;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::clear
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8));
  return;
}


/* FirstRechargeExtraBonusData::FirstRechargeExtraBonusData(FirstRechargeExtraBonusData const&) */

void __thiscall
FirstRechargeExtraBonusData::FirstRechargeExtraBonusData
          (FirstRechargeExtraBonusData *this,FirstRechargeExtraBonusData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* FirstRechargeExtraBonusData::TEMPNAMEPLACEHOLDERVALUE(FirstRechargeExtraBonusData const&) */

FirstRechargeExtraBonusData * __thiscall
FirstRechargeExtraBonusData::operator=
          (FirstRechargeExtraBonusData *this,FirstRechargeExtraBonusData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

