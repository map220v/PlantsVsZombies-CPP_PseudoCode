// Class: EggRechargeBundleData


/* EggRechargeBundleData::TEMPNAMEPLACEHOLDERVALUE(EggRechargeBundleData const&) */

EggRechargeBundleData * __thiscall
EggRechargeBundleData::operator=(EggRechargeBundleData *this,EggRechargeBundleData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}


/* EggRechargeBundleData::EggRechargeBundleData(EggRechargeBundleData&&) */

void __thiscall
EggRechargeBundleData::EggRechargeBundleData
          (EggRechargeBundleData *this,EggRechargeBundleData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}

