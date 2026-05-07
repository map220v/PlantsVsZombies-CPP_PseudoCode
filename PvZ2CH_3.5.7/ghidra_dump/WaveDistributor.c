// Class: WaveDistributor


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x036cc41c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WaveDistributor::ShouldPerformNextDistribution(bool, int, int, WaveDistributorPattern, float) */

void WaveDistributor::ShouldPerformNextDistribution
               (float param_1_00,char param_1,int param_2,int param_3,uint param_5)

{
  bool bVar1;
  undefined4 unaff_w20;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float unaff_s10;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  if (param_2 < param_3) {
    if (param_1 == '\0') {
      param_1_00 = param_1_00 / (float)param_3;
      auVar4 = BoardHelpers::GetLevelProgressPct();
      fVar2 = auVar4._0_4_;
      if ((int)(fVar2 / param_1_00) <= param_2) {
        if (param_5 == 0) {
          unaff_w20 = 2;
          unaff_s10 = (fVar2 - param_1_00 * (float)param_2) / param_1_00;
        }
        else if (param_5 < 3) {
          unaff_w20 = 3;
          if (param_5 != 1) {
            unaff_w20 = 1;
          }
          unaff_s10 = fVar2 / ((float)(param_2 + 1) * param_1_00);
        }
        local_10 = 0;
        local_c = 0x3f800000;
        fVar2 = CurveLerp<float>(auVar4,0x3f800000,unaff_s10,&local_10,&local_c,unaff_w20);
        fVar3 = (float)RandRangeFloat(0.0,1.0);
        bVar1 = fVar3 <= fVar2;
        goto LAB_036cc394;
      }
    }
    bVar1 = true;
  }
LAB_036cc394:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

