// Class: UnchartedModeFestivalRewardData


/* UnchartedModeFestivalRewardData::~UnchartedModeFestivalRewardData() */

void __thiscall
UnchartedModeFestivalRewardData::~UnchartedModeFestivalRewardData
          (UnchartedModeFestivalRewardData *this)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x20));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8));
  return;
}


/* UnchartedModeFestivalRewardData::UnchartedModeFestivalRewardData(UnchartedModeFestivalRewardData
   const&) */

void __thiscall
UnchartedModeFestivalRewardData::UnchartedModeFestivalRewardData
          (UnchartedModeFestivalRewardData *this,UnchartedModeFestivalRewardData *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


/* UnchartedModeFestivalRewardData::UnchartedModeFestivalRewardData() */

void __thiscall
UnchartedModeFestivalRewardData::UnchartedModeFestivalRewardData
          (UnchartedModeFestivalRewardData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}


/* UnchartedModeFestivalRewardData::UnchartedModeFestivalRewardData(UnchartedModeFestivalRewardData&&)
    */

void __thiscall
UnchartedModeFestivalRewardData::UnchartedModeFestivalRewardData
          (UnchartedModeFestivalRewardData *this,UnchartedModeFestivalRewardData *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


/* UnchartedModeFestivalRewardData::TEMPNAMEPLACEHOLDERVALUE(UnchartedModeFestivalRewardData const&)
    */

UnchartedModeFestivalRewardData * __thiscall
UnchartedModeFestivalRewardData::operator=
          (UnchartedModeFestivalRewardData *this,UnchartedModeFestivalRewardData *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = uVar1;
  return this;
}

