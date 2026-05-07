// Class: DangerRoomLevelDesignerHelpers


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelDesignerHelpers::CalculateLevelValue(float, ValueRange const&, ValueRange const&)
    */

void DangerRoomLevelDesignerHelpers::CalculateLevelValue
               (float param_1,ValueRange *param_2,ValueRange *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RandRangeInt((int)*(float *)param_2,(int)*(float *)(param_2 + 4));
  iVar2 = RandRangeInt((int)*(float *)param_3,(int)*(float *)(param_3 + 4));
  DVec2::DVec2(aDStack_10,(float)iVar1,(float)iVar2);
  fVar3 = (float)ValueRange::GetInterpValue(param_1,aDStack_10,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)fVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelDesignerHelpers::GenerateFlagWavePools(int, int) */

void __thiscall
DangerRoomLevelDesignerHelpers::GenerateFlagWavePools
          (DangerRoomLevelDesignerHelpers *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar3;
  FlagWavePool aFStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  iVar3 = 0;
  if (0 < (int)this) {
    do {
      iVar1 = 0;
      if (param_1 != 0) {
        iVar1 = iVar3 / param_1;
      }
      if (iVar3 == iVar1 * param_1) {
        FlagWavePool::FlagWavePool(aFStack_28,iVar1);
        std::
        vector<DangerRoomLevelDesignerHelpers::FlagWavePool,std::allocator<DangerRoomLevelDesignerHelpers::FlagWavePool>>
        ::push_back((vector<DangerRoomLevelDesignerHelpers::FlagWavePool,std::allocator<DangerRoomLevelDesignerHelpers::FlagWavePool>>
                     *)in_x8,aFStack_28);
        FlagWavePool::~FlagWavePool(aFStack_28);
      }
      lVar2 = FUN_03ca81d8(*(undefined8 *)in_x8,(long)iVar1);
      iVar1 = iVar3 + 1;
      RandRecord::set((RandRecord *)(lVar2 + 8),iVar3);
      iVar3 = iVar1;
    } while (iVar1 != (int)this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

