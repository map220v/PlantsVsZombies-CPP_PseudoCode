// Class: GiftFoReturnTaskInfo


/* GiftFoReturnTaskInfo::GiftFoReturnTaskInfo() */

void __thiscall GiftFoReturnTaskInfo::GiftFoReturnTaskInfo(GiftFoReturnTaskInfo *this)

{
  *(undefined4 *)this = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* GiftFoReturnTaskInfo::GiftFoReturnTaskInfo(GiftFoReturnTaskInfo const&) */

void __thiscall
GiftFoReturnTaskInfo::GiftFoReturnTaskInfo(GiftFoReturnTaskInfo *this,GiftFoReturnTaskInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  return;
}


/* GiftFoReturnTaskInfo::TEMPNAMEPLACEHOLDERVALUE(GiftFoReturnTaskInfo const&) */

GiftFoReturnTaskInfo * __thiscall
GiftFoReturnTaskInfo::operator=(GiftFoReturnTaskInfo *this,GiftFoReturnTaskInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  return this;
}


/* GiftFoReturnTaskInfo::GiftFoReturnTaskInfo(GiftFoReturnTaskInfo&&) */

void __thiscall
GiftFoReturnTaskInfo::GiftFoReturnTaskInfo(GiftFoReturnTaskInfo *this,GiftFoReturnTaskInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  return;
}

