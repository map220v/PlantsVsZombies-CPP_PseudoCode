// Class: EATextSquish::SingleColourFit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::SingleColourFit::ComputeEndPoints(int, EATextSquish::SingleColourLookup const*
   const*) */

void __thiscall
EATextSquish::SingleColourFit::ComputeEndPoints
          (SingleColourFit *this,int param_1,SingleColourLookup **param_2)

{
  SingleColourLookup *pSVar1;
  SingleColourLookup *pSVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  SingleColourLookup *pSVar7;
  ulong uVar8;
  undefined8 local_30;
  undefined4 local_28;
  SingleColourLookup *local_20;
  SingleColourLookup *local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = 0x7fffffff;
  *(undefined4 *)(this + 0x34) = 0x7fffffff;
  if (0 < param_1) {
    uVar8 = 0;
    while( true ) {
      lVar4 = uVar8 * 3;
      pSVar7 = param_2[2];
      pSVar1 = *param_2 + lVar4 + (ulong)(byte)this[0x14] * 0xc;
      pSVar2 = param_2[1] + lVar4 + (ulong)(byte)this[0x15] * 0xc;
      lVar5 = lVar4 + (ulong)(byte)this[0x16] * 0xc;
      iVar3 = (uint)(byte)pSVar1[2] * (uint)(byte)pSVar1[2] +
              (uint)(byte)pSVar2[2] * (uint)(byte)pSVar2[2] +
              (uint)(byte)pSVar7[lVar5 + 2] * (uint)(byte)pSVar7[lVar5 + 2];
      local_20 = pSVar1;
      local_18 = pSVar2;
      if (iVar3 < iVar6) {
        Vec3::Vec3((Vec3 *)&local_30,
                   (float)(byte)(*param_2)[lVar4 + (ulong)(byte)this[0x14] * 0xc] * 0.032258064,
                   (float)(byte)param_2[1][lVar4 + (ulong)(byte)this[0x15] * 0xc] * 0.015873017,
                   (float)(byte)pSVar7[lVar4 + (ulong)(byte)this[0x16] * 0xc] * 0.032258064);
        *(undefined8 *)(this + 0x18) = local_30;
        *(undefined4 *)(this + 0x20) = local_28;
        Vec3::Vec3((Vec3 *)&local_30,(float)(byte)pSVar1[1] * 0.032258064,
                   (float)(byte)pSVar2[1] * 0.015873017,(float)(byte)pSVar7[lVar5 + 1] * 0.032258064
                  );
        this[0x30] = SUB81(uVar8,0);
        *(undefined8 *)(this + 0x24) = local_30;
        *(undefined4 *)(this + 0x2c) = local_28;
        *(int *)(this + 0x34) = iVar3;
      }
      if (uVar8 == param_1 - 1) break;
      iVar6 = *(int *)(this + 0x34);
      uVar8 = uVar8 + 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EATextSquish::SingleColourFit::SingleColourFit(EATextSquish::ColorSet const*) */

void __thiscall
EATextSquish::SingleColourFit::SingleColourFit(SingleColourFit *this,ColorSet *param_1)

{
  SingleColourFit SVar1;
  undefined4 *puVar2;
  float fVar3;
  
  ColourFit::ColourFit((ColourFit *)this,param_1);
  *(undefined ***)this = &PTR_nop_06a38210;
  puVar2 = (undefined4 *)ColorSet::GetPoints(*(ColorSet **)(this + 8));
  fVar3 = (float)FUN_05417cb4(*puVar2);
  SVar1 = (SingleColourFit)FUN_05417be4(fVar3 * 255.0,0xff);
  this[0x14] = SVar1;
  fVar3 = (float)FUN_05417cb8(puVar2[1]);
  SVar1 = (SingleColourFit)FUN_05417be4(fVar3 * 255.0,0xff);
  this[0x15] = SVar1;
  fVar3 = (float)FUN_05417cbc(puVar2[2]);
  SVar1 = (SingleColourFit)FUN_05417be4(fVar3 * 255.0,0xff);
  this[0x16] = SVar1;
  *(undefined4 *)(this + 0x38) = 0x7fffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::SingleColourFit::Compress4(void*) */

void __thiscall EATextSquish::SingleColourFit::Compress4(SingleColourFit *this,void *param_1)

{
  SingleColourLookup *local_30;
  undefined *local_28;
  undefined *local_20;
  uchar auStack_18 [16];
  long local_8;
  
  local_30 = (SingleColourLookup *)&DAT_05769e60;
  local_20 = &DAT_05769e60;
  local_8 = ___stack_chk_guard;
  local_28 = &DAT_0576aa60;
  ComputeEndPoints(this,4,&local_30);
  if (*(int *)(this + 0x34) < *(int *)(this + 0x38)) {
    ColorSet::RemapIndices(*(ColorSet **)(this + 8),(uchar *)(this + 0x30),auStack_18);
    WriteColourBlock4((Vec3 *)(this + 0x18),(Vec3 *)(this + 0x24),auStack_18,param_1);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x34);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

