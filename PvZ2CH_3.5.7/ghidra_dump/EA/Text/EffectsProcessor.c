// Class: EA::Text::EffectsProcessor


/* EA::Text::EffectsProcessor::EffectsProcessor(EA::Allocator::ICoreAllocator*) */

void __thiscall
EA::Text::EffectsProcessor::EffectsProcessor(EffectsProcessor *this,ICoreAllocator *param_1)

{
  if (param_1 == (ICoreAllocator *)0x0) {
    param_1 = (ICoreAllocator *)GetAllocator();
  }
  *(ICoreAllocator **)this = param_1;
  EffectsState::EffectsState((EffectsState *)(this + 8),param_1);
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x348) = 0;
  return;
}


/* EA::Text::EffectsProcessor::SetUserCallback(EA::Text::EffectsPlugin*, void*) */

void __thiscall
EA::Text::EffectsProcessor::SetUserCallback
          (EffectsProcessor *this,EffectsPlugin *param_1,void *param_2)

{
  *(EffectsPlugin **)(this + 0x338) = param_1;
  *(void **)(this + 0x340) = param_2;
  return;
}


/* EA::Text::EffectsProcessor::BuildBrush() */

void __thiscall EA::Text::EffectsProcessor::BuildBrush(EffectsProcessor *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  EffectsProcessor EVar5;
  EffectsProcessor *pEVar6;
  EffectsProcessor *pEVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (this[0x102] != (EffectsProcessor)0x7f) {
    return;
  }
  uVar2 = *(uint *)(this + 0x34);
  fVar16 = *(float *)(this + 0x3c);
  uVar1 = uVar2;
  if (0xd < uVar2) {
    uVar1 = 0xd;
  }
  if (uVar2 < 5) {
    iVar13 = -((int)uVar1 / 2);
    iVar9 = iVar13 + uVar1;
    if (iVar13 < iVar9) {
      iVar4 = *(int *)(this + 0x30);
LAB_053587f0:
      iVar10 = 0;
      iVar12 = iVar13;
      do {
        iVar11 = iVar10;
        iVar8 = iVar13;
        do {
          iVar10 = iVar11 + 1;
          this[(long)iVar11 * 3 + 0x102] = SUB41(iVar8,0);
          iVar8 = iVar8 + 1;
          this[(long)iVar11 * 3 + 0x103] = SUB41(iVar12,0);
          this[(long)iVar11 * 3 + 0x104] = (EffectsProcessor)0xff;
          iVar11 = iVar10;
        } while (iVar8 < iVar9);
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar9);
    }
    else {
      iVar4 = *(int *)(this + 0x30);
      iVar10 = 0;
    }
    if (iVar4 == 0) {
      if (uVar2 == 3) {
        EVar5 = SUB41((int)(*(float *)(this + 0x38) * 255.0),0);
        this[0x11c] = EVar5;
        this[0x116] = EVar5;
        this[0x10a] = EVar5;
        this[0x104] = EVar5;
      }
      else if (uVar2 == 4) {
        this[0x131] = (EffectsProcessor)0x0;
        this[0x128] = (EffectsProcessor)0x0;
        this[0x10d] = (EffectsProcessor)0x0;
        this[0x104] = (EffectsProcessor)0x0;
      }
    }
    else {
LAB_05358878:
      fVar16 = fVar16 * *(float *)(this + 0x38);
    }
  }
  else {
    if (*(int *)(this + 0x30) == 1) {
      iVar10 = 0;
      iVar13 = -((int)uVar1 / 2);
      iVar9 = iVar13 + uVar1;
      iVar4 = 1;
      if (iVar13 < iVar9) goto LAB_053587f0;
      goto LAB_05358878;
    }
    iVar9 = (int)uVar1 / 2;
    iVar4 = -iVar9;
    iVar13 = iVar4 + uVar1;
    if (iVar13 <= iVar4) {
      iVar10 = 0;
      goto LAB_053587c0;
    }
    fVar14 = *(float *)(this + 0x38);
    iVar10 = 0;
    iVar12 = iVar4;
    do {
      iVar8 = iVar4;
      do {
        iVar3 = iVar8 * iVar8;
        iVar11 = iVar10 + iVar9 + iVar8;
        this[(long)iVar11 * 3 + 0x102] = SUB41(iVar8,0);
        iVar8 = iVar8 + 1;
        this[(long)iVar11 * 3 + 0x103] = SUB41(iVar12,0);
        fVar15 = (1.0 - (1.0 / ((float)(int)uVar1 * 0.5 * (float)(int)uVar1 * 0.5)) *
                        ((float)iVar3 + (float)(iVar12 * iVar12))) * fVar14 * 255.0;
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        this[(long)iVar11 * 3 + 0x104] = SUB41((int)fVar15,0);
      } while (iVar8 != iVar13);
      iVar12 = iVar12 + 1;
      iVar10 = iVar13 + iVar9 + iVar10;
    } while (iVar12 != iVar13);
  }
  if ((fVar16 != 1.0) && (0 < iVar10)) {
    pEVar6 = this + 0x104;
    do {
      pEVar7 = pEVar6 + 3;
      *pEVar6 = SUB41((int)((float)(byte)*pEVar6 * fVar16),0);
      pEVar6 = pEVar7;
    } while (pEVar7 != this + (ulong)(iVar10 - 1) * 3 + 0x107);
  }
LAB_053587c0:
  this[(long)iVar10 * 3 + 0x102] = (EffectsProcessor)0x7f;
  return;
}


/* EA::Text::EffectsProcessor::GetCurrentGlyphState() const */

undefined4 __thiscall EA::Text::EffectsProcessor::GetCurrentGlyphState(EffectsProcessor *this)

{
  return *(undefined4 *)(this + 0x348);
}


/* EA::Text::EffectsProcessor::SetupImages() */

void __thiscall EA::Text::EffectsProcessor::SetupImages(EffectsProcessor *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = *(long *)(*(long *)(this + 0xf8) + 0x3d0);
  iVar3 = *(int *)(lVar7 + 0x14c);
  iVar4 = *(int *)(lVar7 + 0x150);
  iVar5 = *(int *)(lVar7 + 0x120);
  iVar6 = *(int *)(lVar7 + 0x11c);
  iVar1 = *(int *)(this + 0x300) * 2 + iVar3;
  iVar2 = iVar4 + *(int *)(this + 0x300) * 2;
  Bitmap8::SetSize((Bitmap8 *)&EffectsState::mEffectsBitmaps,iVar1,iVar2);
  Bitmap8::Clear((Bitmap8 *)&EffectsState::mEffectsBitmaps);
  this[0x304] = (EffectsProcessor)0x1;
  Bitmap32::SetSize((Bitmap32 *)&DAT_06bc5b60,iVar1,iVar2);
  Bitmap32::Clear((Bitmap32 *)&DAT_06bc5b60);
  this[0x305] = (EffectsProcessor)0x1;
  iVar2 = DAT_06bc5b6c;
  iVar1 = DAT_06bc5b68;
  *(undefined4 *)(this + 0x310) = 0x7fffffff;
  *(undefined4 *)(this + 0x314) = 0x7fffffff;
  *(int *)(this + 0x308) = (iVar1 / 2 - iVar3 / 2) - (iVar5 >> 6);
  *(int *)(this + 0x30c) = (iVar2 / 2 - iVar4 / 2) + (iVar6 >> 6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::EffectsProcessor::SetCurrentGlyphState(EA::Text::EffectsProcessor::GlyphState) */

void __thiscall EA::Text::EffectsProcessor::SetCurrentGlyphState(EffectsProcessor *this,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetCurrentGlyphState(this);
  if (iVar1 == param_2) {
    uVar2 = 1;
    goto LAB_05358aa8;
  }
  lVar3 = *(long *)(*(long *)(this + 0xf8) + 0x3d0);
  if (*(long *)(lVar3 + 0x158) != 0) {
    T2K_PurgeMemory(lVar3,1,&local_c);
    *(undefined8 *)(lVar3 + 0x158) = 0;
  }
  if (param_2 == 0) {
LAB_05358aa0:
    uVar2 = 1;
  }
  else {
    if (param_2 == 2) {
      uVar2 = 3;
    }
    else {
      T2K_RenderGlyph(lVar3,*(undefined2 *)(this + 0x100),0,0,0,0x8b,&local_c);
      T2K_PurgeMemory(lVar3,1,&local_c);
      uVar2 = 0;
    }
    T2K_RenderGlyph(lVar3,*(undefined2 *)(this + 0x100),0,0,uVar2,0x8b,&local_c);
    uVar2 = 0;
    if (local_c == 0) {
      if (*(int *)(this + 0x308) != 0x7fffffff) goto LAB_05358aa0;
      SetupImages(this);
      uVar2 = 1;
    }
  }
  *(int *)(this + 0x348) = param_2;
LAB_05358aa8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* EA::Text::EffectsProcessor::Clear() */

void __thiscall EA::Text::EffectsProcessor::Clear(EffectsProcessor *this)

{
  if (*(int *)(this + 0x40) != 1) {
    Bitmap32::Clear((Bitmap32 *)&DAT_06bc5b60);
    this[0x305] = (EffectsProcessor)0x1;
    return;
  }
  Bitmap8::Clear((Bitmap8 *)&EffectsState::mEffectsBitmaps);
  this[0x304] = (EffectsProcessor)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::EffectsProcessor::ApplyCurve(unsigned int, float) */

float EA::Text::EffectsProcessor::ApplyCurve(uint param_1,float param_2)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  int in_w1;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined *puVar10;
  float extraout_s0;
  
  iVar5 = DAT_06bc5b4c;
  fVar3 = _FUN_05358c7c;
  if (*(int *)((ulong)param_1 + 0x40) == 1) {
    if (in_w1 == 1) {
      puVar10 = &UNK_0575fc10;
    }
    else if (in_w1 == 2) {
      puVar10 = &UNK_0575fc50;
    }
    else {
      puVar10 = &DAT_0575fc30;
    }
    if (0 < DAT_06bc5b4c) {
      iVar9 = 0;
      lVar8 = EffectsState::mEffectsBitmaps;
      do {
        iVar4 = DAT_06bc5b48;
        lVar7 = 0;
        if (0 < DAT_06bc5b48) {
          do {
            bVar2 = *(byte *)(lVar8 + lVar7);
            iVar1 = (int)(uint)bVar2 >> 4;
            if (bVar2 != 0) {
              uVar6 = Effects::RoundToInt32
                                ((float)(byte)puVar10[iVar1] +
                                 (float)(int)((uint)(byte)puVar10[(long)iVar1 + 1] -
                                             (uint)(byte)puVar10[iVar1]) *
                                 (float)(int)((uint)bVar2 + iVar1 * -0x10) * fVar3);
              *(undefined1 *)(lVar8 + lVar7) = uVar6;
              param_2 = extraout_s0;
            }
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 < iVar4);
        }
        iVar9 = iVar9 + 1;
        lVar8 = lVar8 + DAT_06bc5b50;
      } while (iVar9 != iVar5);
      return param_2;
    }
  }
  return param_2;
}


/* EA::Text::EffectsProcessor::ApplyBoxBlur(float, float, unsigned int) */

void __thiscall
EA::Text::EffectsProcessor::ApplyBoxBlur
          (EffectsProcessor *this,float param_1,float param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  uint *puVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint local_8;
  
  if ((*(int *)(this + 0x40) == 1) && (this[0x304] == (EffectsProcessor)0x0)) {
    iVar7 = Effects::RoundToInt32(param_1);
    uVar5 = DAT_06bc5b48;
    iVar2 = iVar7 * 2 + 1;
    Bitmap32::SetSize((Bitmap32 *)&DAT_06bc5b80,DAT_06bc5b48,DAT_06bc5b4c);
    Bitmap32::Clear((Bitmap32 *)&DAT_06bc5b80);
    if (param_3 != 0) {
      uVar6 = -uVar5;
      uVar5 = ~uVar5;
      local_8 = 0;
      do {
        pbVar21 = EffectsState::mEffectsBitmaps;
        pbVar1 = EffectsState::mEffectsBitmaps + DAT_06bc5b4c * DAT_06bc5b50;
        if (EffectsState::mEffectsBitmaps < pbVar1) {
          lVar18 = (long)(int)DAT_06bc5b48;
          pbVar15 = EffectsState::mEffectsBitmaps;
          puVar16 = DAT_06bc5b80;
          do {
            pbVar20 = pbVar15 + lVar18;
            if (pbVar15 < pbVar20) {
              pbVar12 = pbVar15;
              puVar14 = puVar16;
              if (pbVar21 < pbVar15) {
                do {
                  iVar17 = *(int *)((long)puVar14 +
                                   (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2
                                   ));
                  if (pbVar15 < pbVar12) {
                    uVar13 = (iVar17 + puVar14[-1] + (uint)*pbVar12) -
                             *(int *)((long)puVar14 +
                                     (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar5 << 2));
                  }
                  else {
                    uVar13 = (uint)*pbVar12 + iVar17;
                  }
                  pbVar12 = pbVar12 + 1;
                  *puVar14 = uVar13;
                  puVar14 = puVar14 + 1;
                } while (pbVar12 != pbVar20);
              }
              else {
                do {
                  uVar13 = (uint)*pbVar12;
                  pbVar3 = pbVar12 + 1;
                  if (pbVar15 < pbVar12) {
                    uVar13 = uVar13 + puVar14[-1];
                  }
                  *puVar14 = uVar13;
                  pbVar12 = pbVar3;
                  puVar14 = puVar14 + 1;
                } while (pbVar3 != pbVar20);
              }
              lVar18 = (long)(int)DAT_06bc5b48;
            }
            pbVar15 = pbVar15 + DAT_06bc5b50;
            puVar16 = (uint *)((long)puVar16 + ((long)DAT_06bc5b90 & 0xfffffffffffffffcU));
            iVar17 = iVar7;
          } while (pbVar15 < pbVar1);
          while( true ) {
            if (pbVar21 < pbVar21 + lVar18) {
              iVar4 = ~(iVar7 << 1) + iVar17;
              pbVar15 = pbVar21;
              iVar19 = iVar7;
              do {
                iVar10 = ~(iVar7 << 1) + iVar19;
                iVar8 = Bitmap32::GetPixelClamped((Bitmap32 *)&DAT_06bc5b80,iVar19,iVar17);
                iVar9 = Bitmap32::GetPixelClamped((Bitmap32 *)&DAT_06bc5b80,iVar10,iVar4);
                iVar10 = Bitmap32::GetPixelClamped((Bitmap32 *)&DAT_06bc5b80,iVar10,iVar17);
                iVar11 = Bitmap32::GetPixelClamped((Bitmap32 *)&DAT_06bc5b80,iVar19,iVar4);
                iVar10 = Effects::RoundToInt32
                                   ((float)(((iVar8 + iVar9) - iVar10) - iVar11) *
                                    (param_2 / (float)(iVar2 * iVar2)));
                if (0xff < iVar10) {
                  iVar10 = 0xff;
                }
                pbVar20 = pbVar15 + 1;
                *pbVar15 = (byte)iVar10;
                pbVar15 = pbVar20;
                iVar19 = iVar19 + 1;
              } while (pbVar20 != pbVar21 + lVar18);
            }
            pbVar21 = pbVar21 + DAT_06bc5b50;
            if (pbVar1 <= pbVar21) break;
            lVar18 = (long)(int)DAT_06bc5b48;
            iVar17 = iVar17 + 1;
          }
        }
        local_8 = local_8 + 1;
      } while (local_8 != param_3);
    }
    *(int *)(this + 800) =
         *(int *)(this + 800) + (int)(param_2 * 0.5 * param_1 * (float)(int)param_3);
  }
  return;
}


/* EA::Text::EffectsProcessor::Merge() */

void __thiscall EA::Text::EffectsProcessor::Merge(EffectsProcessor *this)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  
  uVar5 = *(uint *)(this + 0xc);
  uVar1 = EffectsState::mEffectsBitmaps + (long)(DAT_06bc5b4c * DAT_06bc5b50);
  uVar2 = EffectsState::mEffectsBitmaps;
  lVar3 = DAT_06bc5b60;
  do {
    if (uVar1 <= uVar2) {
      this[0x305] = this[0x304];
      return;
    }
    if (uVar2 < uVar2 + (long)DAT_06bc5b48) {
      lVar11 = (uVar2 + (long)DAT_06bc5b48) - uVar2;
      lVar10 = 0;
      if (uVar5 >> 0x18 == 0xff) {
        do {
          bVar7 = *(byte *)(uVar2 + lVar10);
          if (bVar7 == 0xff) {
            *(uint *)(lVar3 + lVar10 * 4) = uVar5 | 0xff000000;
          }
          else if (bVar7 != 0) {
            uVar6 = *(uint *)(lVar3 + lVar10 * 4);
            uVar8 = uVar5 & 0xffffff | (uint)bVar7 << 0x18;
            if (uVar6 == 0) {
              *(uint *)(lVar3 + lVar10 * 4) = uVar8;
            }
            else {
              uVar9 = Effects::CombineColors(uVar8,uVar6);
              *(undefined4 *)(lVar3 + lVar10 * 4) = uVar9;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != lVar11);
      }
      else {
        do {
          while (uVar6 = (uint)*(byte *)(uVar2 + lVar10) * (uVar5 >> 0x18) + 1,
                iVar4 = (int)(uVar6 + (uVar6 >> 8)) >> 8, iVar4 == 0xff) {
            *(uint *)(lVar3 + lVar10 * 4) = uVar5 | 0xff000000;
            lVar10 = lVar10 + 1;
            if (lVar10 == lVar11) goto LAB_0535905c;
          }
          if (iVar4 != 0) {
            uVar6 = *(uint *)(lVar3 + lVar10 * 4);
            uVar8 = uVar5 & 0xffffff | iVar4 << 0x18;
            if (uVar6 == 0) {
              *(uint *)(lVar3 + lVar10 * 4) = uVar8;
            }
            else {
              uVar9 = Effects::CombineColors(uVar8,uVar6);
              *(undefined4 *)(lVar3 + lVar10 * 4) = uVar9;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != lVar11);
      }
    }
LAB_0535905c:
    uVar2 = uVar2 + (long)DAT_06bc5b50;
    lVar3 = lVar3 + ((long)DAT_06bc5b70 & 0xfffffffffffffffcU);
  } while( true );
}


/* EA::Text::EffectsProcessor::AdjustFontMetrics(EA::Text::FontMetrics&) */

void __thiscall
EA::Text::EffectsProcessor::AdjustFontMetrics(EffectsProcessor *this,FontMetrics *param_1)

{
  int iVar1;
  EffectsProcessor *pEVar2;
  EffectsProcessor *pEVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(EffectsProcessor **)(this + 0xf0) == this + 0x48) {
    pEVar3 = *(EffectsProcessor **)(this + 0xf0);
    while (pEVar3 < this + (ulong)*(uint *)(this + 0xe8) * 4 + 0x48) {
      pEVar2 = pEVar3 + 4;
      switch(*(undefined4 *)pEVar3) {
      case 5:
        *(undefined4 *)(this + 0x18) = *(undefined4 *)(pEVar3 + 4);
        *(undefined4 *)(this + 0x20) = *(undefined4 *)(pEVar3 + 8);
        pEVar3 = pEVar3 + 0xc;
        break;
      case 6:
        *(undefined4 *)(this + 0x1c) = *(undefined4 *)(pEVar3 + 4);
        *(undefined4 *)(this + 0x24) = *(undefined4 *)(pEVar3 + 8);
        pEVar3 = pEVar3 + 0xc;
        break;
      case 8:
        pEVar2 = pEVar3 + 8;
      case 0x10:
        pEVar2 = pEVar2 + 4;
      case 1:
      case 4:
      case 0xf:
        pEVar2 = pEVar2 + 4;
      case 2:
      case 3:
      case 7:
      case 9:
      case 10:
      case 0x12:
        pEVar3 = pEVar2 + 4;
        break;
      default:
        pEVar3 = pEVar2;
      }
    }
  }
  iVar1 = *(int *)(this + 0x24);
  fVar4 = (float)*(int *)(this + 0x1c);
  fVar5 = *(float *)(param_1 + 0x1c);
  fVar6 = *(float *)(param_1 + 0x14) - (float)iVar1;
  *(float *)(param_1 + 8) =
       *(float *)(param_1 + 8) + (float)(*(int *)(this + 0x18) + *(int *)(this + 0x20));
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar4;
  *(float *)(param_1 + 0x14) = fVar6;
  *(float *)(param_1 + 0x1c) = fVar4 + fVar5;
  *(float *)(param_1 + 0x20) = (fVar4 + fVar5) - fVar6;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fVar4;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar4;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - (float)iVar1;
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + fVar4;
  return;
}


/* EA::Text::EffectsProcessor::BeginEffectBitmapsUse(void*, EA::Allocator::ICoreAllocator*) */

void EA::Text::EffectsProcessor::BeginEffectBitmapsUse(void *param_1,ICoreAllocator *param_2)

{
  EffectsBitmaps::BeginUse((EffectsBitmaps *)&EffectsState::mEffectsBitmaps,param_1,param_2);
  return;
}


/* EA::Text::EffectsProcessor::EndEffectBitmapsUse(void*) */

void EA::Text::EffectsProcessor::EndEffectBitmapsUse(void *param_1)

{
  EffectsBitmaps::EndUse(&EffectsState::mEffectsBitmaps);
  return;
}


/* EA::Text::EffectsProcessor::IsEffectBitmapsInUse(void*) */

void EA::Text::EffectsProcessor::IsEffectBitmapsInUse(void *param_1)

{
  EffectsBitmaps::IsInUse((EffectsBitmaps *)&EffectsState::mEffectsBitmaps,param_1);
  return;
}


/* EA::Text::EffectsProcessor::~EffectsProcessor() */

void __thiscall EA::Text::EffectsProcessor::~EffectsProcessor(EffectsProcessor *this)

{
  EffectsState::~EffectsState((EffectsState *)(this + 8));
  return;
}


/* EA::Text::EffectsProcessor::ResetEffectBitmaps() */

void EA::Text::EffectsProcessor::ResetEffectBitmaps(void)

{
  EffectsBitmaps::Reset((EffectsBitmaps *)&EffectsState::mEffectsBitmaps);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::EffectsProcessor::DrawGlyphSmearOutline() */

void __thiscall EA::Text::EffectsProcessor::DrawGlyphSmearOutline(EffectsProcessor *this)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  EffectsProcessor EVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  byte *pbVar17;
  undefined4 uVar18;
  byte *pbVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  byte *pbVar24;
  uint uVar25;
  EffectsProcessor *pEVar26;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar18 = 2;
  if (*(int *)(this + 0x2c) == 0) {
    uVar18 = 1;
  }
  SetCurrentGlyphState(this,uVar18);
  BuildBrush(this);
  lVar15 = *(long *)(*(long *)(this + 0xf8) + 0x3d0);
  iVar9 = *(int *)(lVar15 + 0x14c);
  if (iVar9 == 0) {
    if (*(int *)(this + 0x310) == 0x7fffffff) {
      *(undefined4 *)(this + 0x310) = *(undefined4 *)(this + 0x308);
      *(undefined4 *)(this + 0x314) = *(undefined4 *)(this + 0x30c);
      *(undefined4 *)(this + 0x318) = *(undefined4 *)(this + 0x308);
      *(undefined4 *)(this + 0x31c) = *(undefined4 *)(this + 0x30c);
    }
  }
  else {
    iVar10 = *(int *)(this + 0x34);
    pEVar26 = this + 0x102;
    iVar2 = (*(int *)(this + 0x30c) - (*(int *)(lVar15 + 0x11c) >> 6)) + *(int *)(this + 0x14);
    iVar3 = iVar2 + -(iVar10 / 2);
    iVar4 = *(int *)(this + 0x308) + (*(int *)(lVar15 + 0x120) >> 6) + *(int *)(this + 0x10);
    local_14 = *(int *)(lVar15 + 0x150);
    iVar5 = -(iVar10 / 2) + iVar4;
    iVar20 = (int)(char)this[0x102];
    iVar11 = *(int *)(lVar15 + 0x154);
    pbVar24 = *(byte **)(lVar15 + 0x158);
    iVar6 = iVar5 + iVar9 + iVar10;
    iVar10 = local_14 + iVar3 + iVar10;
    if (this[0x102] != (EffectsProcessor)0x7f) {
      lVar15 = (long)iVar11;
LAB_05359748:
      do {
        EVar12 = pEVar26[2];
        if (*(int *)(this + 8) <= (int)(uint)(byte)EVar12) {
          iVar20 = iVar20 + iVar4;
          iVar7 = (char)pEVar26[1] + iVar2;
          local_c = DAT_06bc5b4c - iVar7;
          piVar16 = eastl::min_alt<int>(&local_14,&local_c);
          pbVar1 = pbVar24 + *piVar16 * iVar11;
          pbVar17 = (byte *)Bitmap8::GetPixelPtrChecked
                                      ((Bitmap8 *)&EffectsState::mEffectsBitmaps,iVar20,iVar7);
          if (pbVar17 != (byte *)0x0) {
            local_c = DAT_06bc5b48 - iVar20;
            local_10 = iVar9;
            piVar16 = eastl::min_alt<int>(&local_10,&local_c);
            iVar20 = *piVar16;
            uVar25 = (uint)(byte)EVar12;
            if (*(int *)(this + 0x2c) == 0) {
              if (pbVar24 < pbVar1) {
                pbVar22 = pbVar24;
LAB_053597f4:
                do {
                  pbVar8 = pbVar17 + iVar20;
                  if (pbVar17 < pbVar8) {
                    if (uVar25 == 0xff) {
                      uVar14 = 0x80;
                      pbVar19 = pbVar17;
                      pbVar21 = pbVar22;
                      do {
                        if ((*pbVar21 & uVar14) != 0) {
                          *pbVar19 = 0xff;
                        }
                        uVar14 = uVar14 >> 1;
                        if (uVar14 == 0) {
                          pbVar21 = pbVar21 + 1;
                          uVar14 = 0x80;
                        }
                        pbVar19 = pbVar19 + 1;
                      } while (pbVar19 != pbVar8);
                      pbVar22 = pbVar22 + lVar15;
                      pbVar17 = pbVar17 + DAT_06bc5b50;
                      if (pbVar1 <= pbVar22) break;
                      goto LAB_053597f4;
                    }
                    uVar14 = 0x80;
                    pbVar19 = pbVar17;
                    pbVar21 = pbVar22;
                    do {
                      if ((*pbVar21 & uVar14) != 0) {
                        iVar7 = (0xff - (uint)(byte)EVar12) * (0xff - (uint)*pbVar19) + 1;
                        *pbVar19 = ~(byte)((uint)(iVar7 + (iVar7 >> 8)) >> 8);
                      }
                      uVar14 = uVar14 >> 1;
                      if (uVar14 == 0) {
                        pbVar21 = pbVar21 + 1;
                        uVar14 = 0x80;
                      }
                      pbVar19 = pbVar19 + 1;
                    } while (pbVar19 != pbVar8);
                  }
                  pbVar22 = pbVar22 + lVar15;
                  pbVar17 = pbVar17 + DAT_06bc5b50;
                } while (pbVar22 < pbVar1);
              }
            }
            else if (pbVar24 < pbVar1) {
              pbVar22 = pbVar24;
              lVar23 = -(long)pbVar24;
              do {
                pbVar8 = pbVar22 + iVar20;
                if (pbVar22 < pbVar8) {
                  if (uVar25 == 0xff) {
                    pbVar21 = (byte *)0x0;
                    do {
                      bVar13 = pbVar22[(long)pbVar21];
                      if (bVar13 != 0) {
                        uVar14 = (uint)bVar13;
                        if (bVar13 == 0xff) {
                          uVar14 = 0xff;
                        }
                        iVar7 = (0xff - uVar14) * (0xff - (uint)pbVar17[(long)pbVar21]) + 1;
                        pbVar17[(long)pbVar21] = ~(byte)((uint)(iVar7 + (iVar7 >> 8)) >> 8);
                      }
                      pbVar21 = pbVar21 + 1;
                    } while (pbVar21 != pbVar8 + lVar23);
                  }
                  else {
                    pbVar21 = (byte *)0x0;
                    do {
                      bVar13 = pbVar22[(long)pbVar21];
                      if (bVar13 != 0) {
                        uVar14 = (uint)(byte)EVar12;
                        if (bVar13 != 0xff) {
                          uVar14 = bVar13 * uVar25 + 1;
                          uVar14 = (int)(uVar14 + (uVar14 >> 8)) >> 8;
                        }
                        iVar7 = (0xff - uVar14) * (0xff - (uint)pbVar17[(long)pbVar21]) + 1;
                        pbVar17[(long)pbVar21] = ~(byte)((uint)(iVar7 + (iVar7 >> 8)) >> 8);
                      }
                      pbVar21 = pbVar21 + 1;
                    } while (pbVar21 != pbVar8 + lVar23);
                  }
                }
                pbVar22 = pbVar22 + lVar15;
                lVar23 = lVar23 - lVar15;
                pbVar17 = pbVar17 + DAT_06bc5b50;
              } while (pbVar22 < pbVar1);
              pEVar26 = pEVar26 + 3;
              iVar20 = (int)(char)*pEVar26;
              if (iVar20 == 0x7f) break;
              goto LAB_05359748;
            }
          }
        }
        pEVar26 = pEVar26 + 3;
        iVar20 = (int)(char)*pEVar26;
      } while (iVar20 != 0x7f);
    }
    if (iVar5 < *(int *)(this + 0x310)) {
      *(int *)(this + 0x310) = iVar5;
    }
    if (iVar3 < *(int *)(this + 0x314)) {
      *(int *)(this + 0x314) = iVar3;
    }
    if (*(int *)(this + 0x318) < iVar6) {
      *(int *)(this + 0x318) = iVar6;
    }
    if (*(int *)(this + 0x31c) < iVar10) {
      *(int *)(this + 0x31c) = iVar10;
    }
    this[0x304] = (EffectsProcessor)0x0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::EffectsProcessor::DrawGlyphBrushOutline() */

void __thiscall EA::Text::EffectsProcessor::DrawGlyphBrushOutline(EffectsProcessor *this)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  EffectsProcessor EVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  byte *pbVar17;
  undefined4 uVar18;
  byte *pbVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  byte *pbVar24;
  uint uVar25;
  EffectsProcessor *pEVar26;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar18 = 2;
  if (*(int *)(this + 0x2c) == 0) {
    uVar18 = 1;
  }
  SetCurrentGlyphState(this,uVar18);
  BuildBrush(this);
  lVar15 = *(long *)(*(long *)(this + 0xf8) + 0x3d0);
  iVar9 = *(int *)(lVar15 + 0x14c);
  if (iVar9 == 0) {
    if (*(int *)(this + 0x310) == 0x7fffffff) {
      *(undefined4 *)(this + 0x310) = *(undefined4 *)(this + 0x308);
      *(undefined4 *)(this + 0x314) = *(undefined4 *)(this + 0x30c);
      *(undefined4 *)(this + 0x318) = *(undefined4 *)(this + 0x308);
      *(undefined4 *)(this + 0x31c) = *(undefined4 *)(this + 0x30c);
    }
  }
  else {
    iVar10 = *(int *)(this + 0x34);
    pEVar26 = this + 0x102;
    iVar2 = (*(int *)(this + 0x30c) - (*(int *)(lVar15 + 0x11c) >> 6)) + *(int *)(this + 0x14);
    iVar3 = iVar2 + -(iVar10 / 2);
    iVar4 = *(int *)(this + 0x308) + (*(int *)(lVar15 + 0x120) >> 6) + *(int *)(this + 0x10);
    iStack_14 = *(int *)(lVar15 + 0x150);
    iVar5 = -(iVar10 / 2) + iVar4;
    iVar20 = (int)(char)this[0x102];
    iVar11 = *(int *)(lVar15 + 0x154);
    pbVar24 = *(byte **)(lVar15 + 0x158);
    iVar6 = iVar5 + iVar9 + iVar10;
    iVar10 = iStack_14 + iVar3 + iVar10;
    if (this[0x102] != (EffectsProcessor)0x7f) {
      lVar15 = (long)iVar11;
LAB_05359748:
      do {
        EVar12 = pEVar26[2];
        if (*(int *)(this + 8) <= (int)(uint)(byte)EVar12) {
          iVar20 = iVar20 + iVar4;
          iVar7 = (char)pEVar26[1] + iVar2;
          iStack_c = DAT_06bc5b4c - iVar7;
          piVar16 = eastl::min_alt<int>(&iStack_14,&iStack_c);
          pbVar1 = pbVar24 + *piVar16 * iVar11;
          pbVar17 = (byte *)Bitmap8::GetPixelPtrChecked
                                      ((Bitmap8 *)&EffectsState::mEffectsBitmaps,iVar20,iVar7);
          if (pbVar17 != (byte *)0x0) {
            iStack_c = DAT_06bc5b48 - iVar20;
            iStack_10 = iVar9;
            piVar16 = eastl::min_alt<int>(&iStack_10,&iStack_c);
            iVar20 = *piVar16;
            uVar25 = (uint)(byte)EVar12;
            if (*(int *)(this + 0x2c) == 0) {
              if (pbVar24 < pbVar1) {
                pbVar22 = pbVar24;
LAB_053597f4:
                do {
                  pbVar8 = pbVar17 + iVar20;
                  if (pbVar17 < pbVar8) {
                    if (uVar25 == 0xff) {
                      uVar14 = 0x80;
                      pbVar19 = pbVar17;
                      pbVar21 = pbVar22;
                      do {
                        if ((*pbVar21 & uVar14) != 0) {
                          *pbVar19 = 0xff;
                        }
                        uVar14 = uVar14 >> 1;
                        if (uVar14 == 0) {
                          pbVar21 = pbVar21 + 1;
                          uVar14 = 0x80;
                        }
                        pbVar19 = pbVar19 + 1;
                      } while (pbVar19 != pbVar8);
                      pbVar22 = pbVar22 + lVar15;
                      pbVar17 = pbVar17 + DAT_06bc5b50;
                      if (pbVar1 <= pbVar22) break;
                      goto LAB_053597f4;
                    }
                    uVar14 = 0x80;
                    pbVar19 = pbVar17;
                    pbVar21 = pbVar22;
                    do {
                      if ((*pbVar21 & uVar14) != 0) {
                        iVar7 = (0xff - (uint)(byte)EVar12) * (0xff - (uint)*pbVar19) + 1;
                        *pbVar19 = ~(byte)((uint)(iVar7 + (iVar7 >> 8)) >> 8);
                      }
                      uVar14 = uVar14 >> 1;
                      if (uVar14 == 0) {
                        pbVar21 = pbVar21 + 1;
                        uVar14 = 0x80;
                      }
                      pbVar19 = pbVar19 + 1;
                    } while (pbVar19 != pbVar8);
                  }
                  pbVar22 = pbVar22 + lVar15;
                  pbVar17 = pbVar17 + DAT_06bc5b50;
                } while (pbVar22 < pbVar1);
              }
            }
            else if (pbVar24 < pbVar1) {
              pbVar22 = pbVar24;
              lVar23 = -(long)pbVar24;
              do {
                pbVar8 = pbVar22 + iVar20;
                if (pbVar22 < pbVar8) {
                  if (uVar25 == 0xff) {
                    pbVar21 = (byte *)0x0;
                    do {
                      bVar13 = pbVar22[(long)pbVar21];
                      if (bVar13 != 0) {
                        uVar14 = (uint)bVar13;
                        if (bVar13 == 0xff) {
                          uVar14 = 0xff;
                        }
                        iVar7 = (0xff - uVar14) * (0xff - (uint)pbVar17[(long)pbVar21]) + 1;
                        pbVar17[(long)pbVar21] = ~(byte)((uint)(iVar7 + (iVar7 >> 8)) >> 8);
                      }
                      pbVar21 = pbVar21 + 1;
                    } while (pbVar21 != pbVar8 + lVar23);
                  }
                  else {
                    pbVar21 = (byte *)0x0;
                    do {
                      bVar13 = pbVar22[(long)pbVar21];
                      if (bVar13 != 0) {
                        uVar14 = (uint)(byte)EVar12;
                        if (bVar13 != 0xff) {
                          uVar14 = bVar13 * uVar25 + 1;
                          uVar14 = (int)(uVar14 + (uVar14 >> 8)) >> 8;
                        }
                        iVar7 = (0xff - uVar14) * (0xff - (uint)pbVar17[(long)pbVar21]) + 1;
                        pbVar17[(long)pbVar21] = ~(byte)((uint)(iVar7 + (iVar7 >> 8)) >> 8);
                      }
                      pbVar21 = pbVar21 + 1;
                    } while (pbVar21 != pbVar8 + lVar23);
                  }
                }
                pbVar22 = pbVar22 + lVar15;
                lVar23 = lVar23 - lVar15;
                pbVar17 = pbVar17 + DAT_06bc5b50;
              } while (pbVar22 < pbVar1);
              pEVar26 = pEVar26 + 3;
              iVar20 = (int)(char)*pEVar26;
              if (iVar20 == 0x7f) break;
              goto LAB_05359748;
            }
          }
        }
        pEVar26 = pEVar26 + 3;
        iVar20 = (int)(char)*pEVar26;
      } while (iVar20 != 0x7f);
    }
    if (iVar5 < *(int *)(this + 0x310)) {
      *(int *)(this + 0x310) = iVar5;
    }
    if (iVar3 < *(int *)(this + 0x314)) {
      *(int *)(this + 0x314) = iVar3;
    }
    if (*(int *)(this + 0x318) < iVar6) {
      *(int *)(this + 0x318) = iVar6;
    }
    if (*(int *)(this + 0x31c) < iVar10) {
      *(int *)(this + 0x31c) = iVar10;
    }
    this[0x304] = (EffectsProcessor)0x0;
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::EffectsProcessor::DrawGlyph() */

void __thiscall EA::Text::EffectsProcessor::DrawGlyph(EffectsProcessor *this)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  EffectsProcessor EVar9;
  byte bVar10;
  bool bVar11;
  int *piVar12;
  undefined1 *__dest;
  undefined4 uVar13;
  long lVar14;
  uint uVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  long lVar18;
  byte *__src;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  uVar13 = 2;
  if (*(int *)(this + 0x2c) == 0) {
    uVar13 = 1;
  }
  local_8 = ___stack_chk_guard;
  SetCurrentGlyphState(this,uVar13);
  lVar14 = *(long *)(*(long *)(this + 0xf8) + 0x3d0);
  iVar6 = *(int *)(lVar14 + 0x14c);
  if (iVar6 == 0) {
    if (*(int *)(this + 0x310) == 0x7fffffff) {
      *(undefined4 *)(this + 0x310) = *(undefined4 *)(this + 0x308);
      *(undefined4 *)(this + 0x314) = *(undefined4 *)(this + 0x30c);
      *(undefined4 *)(this + 0x318) = *(undefined4 *)(this + 0x308);
      *(undefined4 *)(this + 0x31c) = *(undefined4 *)(this + 0x30c);
    }
  }
  else {
    local_14 = *(int *)(lVar14 + 0x150);
    iVar2 = (*(int *)(this + 0x30c) - (*(int *)(lVar14 + 0x11c) >> 6)) + *(int *)(this + 0x14);
    iVar3 = local_14 + iVar2;
    iVar4 = *(int *)(this + 0x308) + (*(int *)(lVar14 + 0x120) >> 6) + *(int *)(this + 0x10);
    __src = *(byte **)(lVar14 + 0x158);
    iVar7 = *(int *)(lVar14 + 0x154);
    local_c = DAT_06bc5b4c - iVar2;
    piVar12 = eastl::min_alt<int>(&local_14,&local_c);
    pbVar1 = __src + *piVar12 * iVar7;
    __dest = (undefined1 *)
             Bitmap8::GetPixelPtrChecked((Bitmap8 *)&EffectsState::mEffectsBitmaps,iVar4,iVar2);
    if (__dest != (undefined1 *)0x0) {
      local_c = DAT_06bc5b48 - iVar4;
      local_10 = iVar6;
      piVar12 = eastl::min_alt<int>(&local_10,&local_c);
      iVar8 = *piVar12;
      bVar11 = __src < pbVar1;
      if (*(int *)(this + 0x2c) == 0) {
        while (bVar11) {
          if (__dest < __dest + iVar8) {
            uVar15 = 0x80;
            puVar16 = __dest;
            pbVar17 = __src;
            do {
              if ((*pbVar17 & uVar15) != 0) {
                *puVar16 = 0xff;
              }
              uVar15 = uVar15 >> 1;
              if (uVar15 == 0) {
                pbVar17 = pbVar17 + 1;
                uVar15 = 0x80;
              }
              puVar16 = puVar16 + 1;
            } while (puVar16 != __dest + iVar8);
          }
          __src = __src + iVar7;
          __dest = __dest + DAT_06bc5b50;
          bVar11 = __src < pbVar1;
        }
      }
      else if (bVar11) {
        lVar14 = -(long)__src;
        lVar18 = (long)iVar7;
        EVar9 = this[0x304];
        do {
          if (EVar9 == (EffectsProcessor)0x0) {
            pbVar5 = __src + iVar8;
            pbVar17 = (byte *)0x0;
            if (__src < pbVar5) {
LAB_05359d44:
              do {
                bVar10 = __src[(long)pbVar17];
                if (bVar10 != 0) {
                  if (bVar10 == 0xff) {
                    __dest[(long)pbVar17] = 0xff;
                    pbVar17 = pbVar17 + 1;
                    if (pbVar17 == pbVar5 + lVar14) break;
                    goto LAB_05359d44;
                  }
                  iVar7 = (0xff - (uint)bVar10) * (0xff - (uint)(byte)__dest[(long)pbVar17]) + 1;
                  __dest[(long)pbVar17] = ~(byte)((uint)(iVar7 + (iVar7 >> 8)) >> 8);
                }
                pbVar17 = pbVar17 + 1;
              } while (pbVar17 != pbVar5 + lVar14);
            }
          }
          else {
            memcpy(__dest,__src,(long)iVar8);
          }
          if (pbVar1 <= __src + lVar18) break;
          lVar14 = lVar14 - lVar18;
          __dest = __dest + DAT_06bc5b50;
          __src = __src + lVar18;
          EVar9 = this[0x304];
        } while( true );
      }
    }
    if (iVar4 < *(int *)(this + 0x310)) {
      *(int *)(this + 0x310) = iVar4;
    }
    if (iVar2 < *(int *)(this + 0x314)) {
      *(int *)(this + 0x314) = iVar2;
    }
    if (*(int *)(this + 0x318) < iVar4 + iVar6) {
      *(int *)(this + 0x318) = iVar4 + iVar6;
    }
    if (*(int *)(this + 0x31c) < iVar3) {
      *(int *)(this + 0x31c) = iVar3;
    }
    this[0x304] = (EffectsProcessor)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::EffectsProcessor::Execute(EA::Text::OutlineFont*, unsigned short) */

void __thiscall
EA::Text::EffectsProcessor::Execute(EffectsProcessor *this,OutlineFont *param_1,ushort param_2)

{
  EffectsState *this_00;
  uint uVar1;
  undefined4 uVar2;
  EffectsProcessor *pEVar3;
  int iVar4;
  EffectsProcessor *pEVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  this_00 = (EffectsState *)(this + 8);
  EffectsState::ResetParameters(this_00);
  EffectsState::ResetExecution(this_00,param_1,param_2);
  plVar7 = *(long **)(this + 0x338);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7,0,this,this_00,*(undefined8 *)(this + 0x340));
  }
  uVar1 = *(uint *)(this + 0xe8);
  pEVar5 = *(EffectsProcessor **)(this + 0xf0);
  while (pEVar3 = pEVar5, this + (ulong)uVar1 * 4 + 0x48 != pEVar3) {
    uVar2 = *(undefined4 *)pEVar3;
    *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 4;
    pEVar5 = pEVar3 + 4;
    switch(uVar2) {
    case 1:
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      *(undefined4 *)(this + 0x300) = *(undefined4 *)(pEVar3 + 4);
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 0xc;
      *(undefined4 *)(this + 0x28) = *(undefined4 *)(pEVar3 + 8);
      pEVar5 = pEVar3 + 0xc;
      break;
    case 2:
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      *(undefined4 *)(this + 8) = *(undefined4 *)(pEVar3 + 4);
      pEVar5 = pEVar3 + 8;
      break;
    case 3:
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      uVar6 = *(uint *)(pEVar3 + 4);
      if ((uVar6 & 0xff000000) == 0) {
        uVar6 = uVar6 | 0xff000000;
      }
      *(uint *)(this + 0xc) = uVar6;
      pEVar5 = pEVar3 + 8;
      break;
    case 4:
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(pEVar3 + 4);
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 0xc;
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(pEVar3 + 8);
      pEVar5 = pEVar3 + 0xc;
      break;
    case 5:
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      *(undefined4 *)(this + 0x18) = *(undefined4 *)(pEVar3 + 4);
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 0xc;
      *(undefined4 *)(this + 0x20) = *(undefined4 *)(pEVar3 + 8);
      pEVar5 = pEVar3 + 0xc;
      break;
    case 6:
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      *(undefined4 *)(this + 0x1c) = *(undefined4 *)(pEVar3 + 4);
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 0xc;
      *(undefined4 *)(this + 0x24) = *(undefined4 *)(pEVar3 + 8);
      pEVar5 = pEVar3 + 0xc;
      break;
    case 7:
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      *(undefined4 *)(this + 0x2c) = *(undefined4 *)(pEVar3 + 4);
      pEVar5 = pEVar3 + 8;
      break;
    case 8:
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      uVar2 = *(undefined4 *)(pEVar3 + 4);
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 0xc;
      *(undefined4 *)(this + 0x30) = uVar2;
      *(undefined4 *)(this + 0x34) = *(undefined4 *)(pEVar3 + 8);
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 0x10;
      uVar2 = *(undefined4 *)(pEVar3 + 0xc);
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 0x14;
      *(undefined4 *)(this + 0x38) = uVar2;
      uVar2 = *(undefined4 *)(pEVar3 + 0x10);
      this[0x102] = (EffectsProcessor)0x7f;
      *(undefined4 *)(this + 0x3c) = uVar2;
      pEVar5 = pEVar3 + 0x14;
      break;
    case 9:
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      *(undefined4 *)(this + 0x40) = *(undefined4 *)(pEVar3 + 4);
      pEVar5 = pEVar3 + 8;
      break;
    case 10:
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      *(undefined4 *)(this + 0x44) = *(undefined4 *)(pEVar3 + 4);
      pEVar5 = pEVar3 + 8;
      break;
    case 0xb:
      DrawGlyphSmearOutline(this);
      pEVar5 = *(EffectsProcessor **)(this + 0xf0);
      break;
    case 0xc:
      DrawGlyphBrushOutline(this);
      pEVar5 = *(EffectsProcessor **)(this + 0xf0);
      break;
    case 0xd:
      DrawGlyph(this);
      pEVar5 = *(EffectsProcessor **)(this + 0xf0);
      break;
    case 0xe:
      Clear(this);
      pEVar5 = *(EffectsProcessor **)(this + 0xf0);
      break;
    case 0xf:
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 0xc;
      ApplyCurve((uint)this,*(float *)(pEVar3 + 8));
      pEVar5 = *(EffectsProcessor **)(this + 0xf0);
      break;
    case 0x10:
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      fVar14 = *(float *)(pEVar3 + 4);
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 0xc;
      fVar13 = *(float *)(pEVar3 + 8);
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 0x10;
      ApplyBoxBlur(this,fVar14,fVar13,*(uint *)(pEVar3 + 0xc));
      pEVar5 = *(EffectsProcessor **)(this + 0xf0);
      break;
    case 0x11:
      Merge(this);
      pEVar5 = *(EffectsProcessor **)(this + 0xf0);
      break;
    case 0x12:
      plVar7 = *(long **)(this + 0x338);
      *(EffectsProcessor **)(this + 0xf0) = pEVar3 + 8;
      pEVar5 = pEVar3 + 8;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x10))
                  (plVar7,*(undefined4 *)(pEVar3 + 4),this,this_00,*(undefined8 *)(this + 0x340));
        pEVar5 = *(EffectsProcessor **)(this + 0xf0);
      }
    }
  }
  iVar10 = *(int *)(this + 0x28);
  iVar12 = *(int *)(this + 800);
  if (iVar10 < *(int *)(this + 800)) {
    *(int *)(this + 800) = iVar10;
    iVar12 = iVar10;
  }
  iVar9 = *(int *)(this + 0x310) - iVar12;
  iVar11 = *(int *)(this + 0x314) - iVar12;
  iVar10 = iVar12 + *(int *)(this + 0x318);
  *(int *)(this + 0x310) = iVar9;
  iVar12 = iVar12 + *(int *)(this + 0x31c);
  *(int *)(this + 0x314) = iVar11;
  *(int *)(this + 0x318) = iVar10;
  *(int *)(this + 0x31c) = iVar12;
  if (iVar9 < 0) {
    *(undefined4 *)(this + 0x310) = 0;
    iVar9 = 0;
  }
  if (iVar11 < 0) {
    *(undefined4 *)(this + 0x314) = 0;
    iVar11 = 0;
  }
  iVar4 = DAT_06bc5b48;
  if (DAT_06bc5b48 <= iVar10) {
    *(int *)(this + 0x318) = DAT_06bc5b48;
    iVar10 = iVar4;
  }
  iVar4 = DAT_06bc5b4c;
  if (DAT_06bc5b4c <= iVar12) {
    *(int *)(this + 0x31c) = DAT_06bc5b4c;
    iVar12 = iVar4;
  }
  fVar14 = 0.0;
  lVar8 = *(long *)(*(long *)(this + 0xf8) + 0x3d0);
  if (*(int *)(lVar8 + 0x108) != 0) {
    fVar14 = (float)*(int *)(lVar8 + 0x10c) * 1.5258789e-05;
  }
  *(float *)(this + 0x324) = (float)(iVar10 - iVar9);
  *(float *)(this + 0x328) = (float)(iVar12 - iVar11);
  *(float *)(this + 0x32c) = (float)(iVar9 - *(int *)(this + 0x308));
  *(float *)(this + 0x330) = (float)(*(int *)(this + 0x30c) - iVar11);
  *(float *)(this + 0x334) = fVar14;
  if ((((float)(iVar10 - iVar9) != 0.0) || (*(int *)(*(long *)(this + 0xf8) + 0x84) == 1)) &&
     (fVar14 != 0.0)) {
    *(float *)(this + 0x32c) =
         (float)(iVar9 - *(int *)(this + 0x308)) + (float)*(int *)(this + 0x18);
    *(float *)(this + 0x334) = (float)*(int *)(this + 0x20) + (float)*(int *)(this + 0x18) + fVar14;
  }
  plVar7 = *(long **)(this + 0x338);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7,1,this,this_00,*(undefined8 *)(this + 0x340));
  }
  SetCurrentGlyphState(this,0);
  return;
}

