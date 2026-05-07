// Class: createDeltaForVectorOfArcadeData<PowerUpProgress>(std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>const&,std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>const&)::{lambda(PowerUpProgress_const&)#1}


/* vector({lambda(PowerUpProgress const&)#1} const&) */

void __thiscall
createDeltaForVectorOfArcadeData<PowerUpProgress>(std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>const&,std::vector<PowerUpProgress,std::allocator<PowerUpProgress>>const&)
::{lambda(PowerUpProgress_const&)#1}::vector
          (_lambda_PowerUpProgress_const___1_ *this,_lambda_PowerUpProgress_const___1_ *param_1)

{
  IArcadeProgressData<PowerUpProgress>::IArcadeProgressData
            ((IArcadeProgressData<PowerUpProgress> *)this,(IArcadeProgressData *)param_1);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined ***)this = &PTR_nop_06611d80;
  return;
}

