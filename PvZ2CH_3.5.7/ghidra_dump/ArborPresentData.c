// Class: ArborPresentData


/* ArborPresentData::ArborPresentData(ArborPresentData const&) */

void __thiscall ArborPresentData::ArborPresentData(ArborPresentData *this,ArborPresentData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}

