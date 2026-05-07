// Class: createDeltaForVectorOfArcadeData<ArcadeLevelProgress>(std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>const&,std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>const&)::{lambda(ArcadeLevelProgress_const&)#1}


/* vector({lambda(ArcadeLevelProgress const&)#1} const&) */

void __thiscall
createDeltaForVectorOfArcadeData<ArcadeLevelProgress>(std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>const&,std::vector<ArcadeLevelProgress,std::allocator<ArcadeLevelProgress>>const&)
::{lambda(ArcadeLevelProgress_const&)#1}::vector
          (_lambda_ArcadeLevelProgress_const___1_ *this,
          _lambda_ArcadeLevelProgress_const___1_ *param_1)

{
  undefined4 uVar1;
  
  IArcadeProgressData<ArcadeLevelProgress>::IArcadeProgressData
            ((IArcadeProgressData<ArcadeLevelProgress> *)this,(IArcadeProgressData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined ***)this = &PTR_nop_06611d20;
  return;
}

