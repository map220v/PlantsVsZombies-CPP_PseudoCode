// Class: EA::Text::BaselineLayout


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BaselineLayout::FollowBaseline(EA::Text::LineLayout const*,
   EA::Text::GlyphLayoutInfoEx*, EA::Text::BaselineIterator*, float, float, EA::Text::HAlignment,
   EA::Text::Direction) */

void __thiscall
EA::Text::BaselineLayout::FollowBaseline
          (undefined4 param_4,float param_5,undefined8 param_3_00,long param_1,undefined8 *param_2,
          long *param_3,int param_7,int param_8)

{
  float fVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_14;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = (float)(**(code **)(*param_3 + 0x38))(param_3);
  if (param_8 == 1) {
    if (param_7 == 0) {
LAB_038a9bc0:
      uVar5 = *(undefined8 *)(param_1 + 0xa8);
      fVar7 = fVar7 - *(float *)(param_1 + 0x130);
      lVar3 = FUN_038a8ca0(uVar5,*(undefined8 *)(param_1 + 0xb0));
      fVar1 = _FUN_038a9c94;
      goto joined_r0x038a9be0;
    }
    if (param_7 != 2) goto LAB_038a9a84;
LAB_038a9a94:
    fVar7 = 0.0;
  }
  else {
LAB_038a9a84:
    if (param_7 != 1) {
      if (param_7 == 2) goto LAB_038a9bc0;
      goto LAB_038a9a94;
    }
    fVar7 = (fVar7 - *(float *)(param_1 + 0x130)) * 0.5;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  lVar3 = FUN_038a8ca0(uVar5,*(undefined8 *)(param_1 + 0xb0));
  fVar1 = _FUN_038a9c94;
joined_r0x038a9be0:
  _FUN_038a9c94 = fVar1;
  if (lVar3 == 0) {
LAB_038a9be4:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  fVar7 = fVar7 + param_5;
  lVar6 = 0;
  do {
    puVar4 = (undefined8 *)FUN_038a8cb4(uVar5,lVar6);
    Sexy::FastCurve::SetOutRange(aFStack_10,0.0,0.0);
    fVar8 = *(float *)(puVar4 + 3);
    fVar9 = *(float *)((long)puVar4 + 0xc);
    *param_2 = *puVar4;
    fVar9 = ABS(fVar8 - fVar9);
    fVar8 = (*(float *)((long)puVar4 + 0x14) - *(float *)(puVar4 + 1)) +
            (*(float *)((long)puVar4 + 0x1c) - *(float *)((long)puVar4 + 0x14)) * 0.5;
    fVar10 = fVar9 * 2.0 + 1.0 + fVar7;
    if (lVar6 == 0) {
      (**(code **)(*param_3 + 0x28))(fVar7 + fVar8,param_3);
      (**(code **)(*param_3 + 0x40))(param_3,aFStack_10,&local_14);
      FUN_038a8754(local_14,param_4,puVar4,param_2,aFStack_10);
    }
    else {
      do {
        (**(code **)(*param_3 + 0x28))(fVar7 + fVar8,param_3);
        (**(code **)(*param_3 + 0x40))(param_3,aFStack_10,&local_14);
        FUN_038a8754(local_14,param_4,puVar4,param_2,aFStack_10);
        cVar2 = FUN_038a8670(param_2 + -7,param_2);
        if (cVar2 == '\0') break;
        fVar7 = fVar7 + fVar9 * fVar1;
      } while (fVar7 < fVar10);
    }
    lVar6 = lVar6 + 1;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar4 + 2);
    fVar7 = fVar7 + *(float *)(puVar4 + 2);
    if (lVar6 == lVar3) goto LAB_038a9be4;
    uVar5 = *(undefined8 *)(param_1 + 0xa8);
    param_2 = param_2 + 7;
  } while( true );
}

