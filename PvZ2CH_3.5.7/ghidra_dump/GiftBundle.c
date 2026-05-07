// Class: GiftBundle


/* GiftBundle::GiftBundle(GiftBundle const&) */

void __thiscall GiftBundle::GiftBundle(GiftBundle *this,GiftBundle *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  return;
}


/* GiftBundle::TEMPNAMEPLACEHOLDERVALUE(GiftBundle const&) */

GiftBundle * __thiscall GiftBundle::operator=(GiftBundle *this,GiftBundle *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  return this;
}


/* GiftBundle::GiftBundle(GiftBundle&&) */

void __thiscall GiftBundle::GiftBundle(GiftBundle *this,GiftBundle *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  return;
}

