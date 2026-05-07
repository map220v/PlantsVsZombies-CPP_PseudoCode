// Class: ShopBundle


/* ShopBundle::ShopBundle(ShopBundle const&) */

void __thiscall ShopBundle::ShopBundle(ShopBundle *this,ShopBundle *param_1)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* ShopBundle::ShopBundle(ShopBundle&&) */

void __thiscall ShopBundle::ShopBundle(ShopBundle *this,ShopBundle *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* ShopBundle::TEMPNAMEPLACEHOLDERVALUE(ShopBundle const&) */

ShopBundle * __thiscall ShopBundle::operator=(ShopBundle *this,ShopBundle *param_1)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}

