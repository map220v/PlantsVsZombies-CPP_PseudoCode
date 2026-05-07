// Class: CarnivalRewardData


/* CarnivalRewardData::CarnivalRewardData(CarnivalRewardData const&) */

void __thiscall
CarnivalRewardData::CarnivalRewardData(CarnivalRewardData *this,CarnivalRewardData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* CarnivalRewardData::TEMPNAMEPLACEHOLDERVALUE(CarnivalRewardData const&) */

CarnivalRewardData * __thiscall
CarnivalRewardData::operator=(CarnivalRewardData *this,CarnivalRewardData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}


/* CarnivalRewardData::CarnivalRewardData() */

void __thiscall CarnivalRewardData::CarnivalRewardData(CarnivalRewardData *this)

{
  *(undefined4 *)this = 99999;
  *(undefined4 *)(this + 4) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}

