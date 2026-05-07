// Class: EA::Text::OutlineFont


/* EA::Text::OutlineFont::SetSmoothing(EA::Text::Smooth) */

void __thiscall EA::Text::OutlineFont::SetSmoothing(OutlineFont *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x8c) = param_2;
  return;
}


/* EA::Text::OutlineFont::GetOTF() */

OutlineFont * __thiscall EA::Text::OutlineFont::GetOTF(OutlineFont *this)

{
  return this + 0x1b8;
}


/* EA::Text::OutlineFont::SetOption(int, int) */

void __thiscall EA::Text::OutlineFont::SetOption(OutlineFont *this,int param_1,int param_2)

{
  switch(param_1) {
  case 1:
    this[0x1b0] = (OutlineFont)(param_2 != 0);
    return;
  case 2:
    *(short *)(this + 0x162) = (short)param_2;
    return;
  case 3:
    this[0x166] = (OutlineFont)(param_2 != 0);
    return;
  case 4:
    this[0x167] = (OutlineFont)(param_2 != 0);
    return;
  case 5:
    this[0x168] = (OutlineFont)(param_2 != 0);
  }
  return;
}


/* EA::Text::OutlineFont::GetFontType() */

undefined4 __thiscall EA::Text::OutlineFont::GetFontType(OutlineFont *this)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (this[0x169] == (OutlineFont)0x0) {
    uVar1 = 0;
  }
  return uVar1;
}


/* EA::Text::OutlineFont::GetBitmapFormat() const */

undefined4 __thiscall EA::Text::OutlineFont::GetBitmapFormat(OutlineFont *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x90) != 0) {
    return 0x20;
  }
  uVar1 = 8;
  if (*(int *)(this + 0x8c) != 1) {
    uVar1 = 1;
  }
  return uVar1;
}


/* EA::Text::OutlineFont::GetFontDescription(EA::Text::FontDescription&) */

bool __thiscall
EA::Text::OutlineFont::GetFontDescription(OutlineFont *this,FontDescription *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)this + 0x58))();
  if (iVar1 != 0) {
    memcpy(param_1,this + 0x34,0x74);
  }
  return iVar1 != 0;
}


/* EA::Text::OutlineFont::SetEffect(unsigned int, float, float, unsigned int, unsigned int, unsigned
   int) */

void __thiscall
EA::Text::OutlineFont::SetEffect
          (OutlineFont *this,uint param_1,float param_2,float param_3,uint param_4,uint param_5,
          uint param_6)

{
  EffectsProcessor *this_00;
  
  *(uint *)(this + 0x90) = param_1;
  *(uint *)(this + 0x9c) = param_4;
  *(uint *)(this + 0xa0) = param_5;
  *(uint *)(this + 0xa4) = param_6;
  *(float *)(this + 0x94) = param_2;
  *(float *)(this + 0x98) = param_3;
  if ((param_1 != 0) && (*(long *)(this + 0x170) == 0)) {
    this_00 = (EffectsProcessor *)FUN_053651a8(*(undefined8 *)(this + 8));
    EffectsProcessor::EffectsProcessor(this_00,*(ICoreAllocator **)(this + 8));
    *(EffectsProcessor **)(this + 0x170) = this_00;
    this[0x165] = (OutlineFont)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::GetGlyphIds(char const*, unsigned int, unsigned short*, bool, unsigned
   int, bool) */

void __thiscall
EA::Text::OutlineFont::GetGlyphIds
          (OutlineFont *this,char *param_1,uint param_2,ushort *param_3,bool param_4,uint param_5,
          bool param_6)

{
  byte *pbVar1;
  OutlineFont *pOVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ushort *puVar12;
  ushort uStack_a;
  long local_8;
  
  uVar11 = (ulong)param_5;
  uVar10 = (uint)param_4;
  lVar9 = *(long *)(this + 0x3d0);
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  if (lVar9 != 0) {
    pbVar1 = (byte *)(param_1 + param_2);
    puVar12 = param_3;
    if (param_3 == (ushort *)0x0) {
      puVar12 = &uStack_a;
    }
    if (param_1 < pbVar1) {
      pOVar2 = this + 0x3d8;
      iVar6 = (int)param_1;
      if (param_6) {
        if (param_3 != (ushort *)0x0) {
          if (param_4) {
            while( true ) {
              uVar5 = T2K_GetGlyphIndex(lVar9,*param_1,pOVar2);
              if ((uVar5 == 0) &&
                 (iVar8 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*param_1,0,pOVar2),
                 iVar8 == 0)) {
                cVar4 = IsCharZeroWidth((ushort)(byte)*param_1);
                if (cVar4 == '\0') {
                  *puVar12 = *(ushort *)(this + 0x20);
                }
                else {
                  *puVar12 = 0xfffe;
                }
              }
              else {
                *puVar12 = uVar5;
              }
              param_1 = param_1 + 1;
              puVar12 = (ushort *)((long)puVar12 + uVar11);
              if ((byte *)param_1 == pbVar1) break;
              lVar9 = *(long *)(this + 0x3d0);
            }
          }
          else {
            uVar5 = T2K_GetGlyphIndex(lVar9,*param_1,pOVar2);
            if (uVar5 == 0) goto LAB_05365430;
LAB_05365404:
            param_1 = param_1 + 1;
            *puVar12 = uVar5;
            if ((byte *)param_1 != pbVar1) {
              while( true ) {
                puVar12 = (ushort *)((long)puVar12 + uVar11);
                uVar5 = T2K_GetGlyphIndex(*(undefined8 *)(this + 0x3d0),*param_1,pOVar2);
                if (uVar5 != 0) break;
LAB_05365430:
                iVar8 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*param_1,uVar5,pOVar2);
                if (iVar8 != 0) break;
                bVar3 = *param_1;
                param_1 = param_1 + 1;
                cVar4 = IsCharZeroWidth((ushort)bVar3);
                uVar5 = 0xfffe;
                if (cVar4 == '\0') {
                  uVar5 = 0xffff;
                }
                *puVar12 = uVar5;
                if ((byte *)param_1 == pbVar1) goto LAB_05365474;
              }
              goto LAB_05365404;
            }
          }
LAB_05365474:
          uVar7 = (int)param_1 - iVar6;
          goto LAB_053653a8;
        }
        if (param_4) {
          while( true ) {
            uVar5 = T2K_GetGlyphIndex(lVar9,*param_1,pOVar2);
            if ((uVar5 == 0) &&
               (iVar8 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*param_1,0,pOVar2), iVar8 == 0)
               ) {
              cVar4 = IsCharZeroWidth((ushort)(byte)*param_1);
              if (cVar4 == '\0') {
                *puVar12 = *(ushort *)(this + 0x20);
              }
              else {
                *puVar12 = 0xfffe;
              }
            }
            else {
              *puVar12 = uVar5;
            }
            param_1 = param_1 + 1;
            if ((byte *)param_1 == pbVar1) break;
            lVar9 = *(long *)(this + 0x3d0);
          }
        }
        else {
          while( true ) {
            uVar5 = T2K_GetGlyphIndex(lVar9,*param_1,pOVar2);
            if ((uVar5 == 0) &&
               (iVar8 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*param_1,0,pOVar2), iVar8 == 0)
               ) {
              cVar4 = IsCharZeroWidth((ushort)(byte)*param_1);
              uVar5 = 0xffff;
              if (cVar4 != '\0') {
                uVar5 = 0xfffe;
              }
              *puVar12 = uVar5;
            }
            else {
              *puVar12 = uVar5;
            }
            param_1 = param_1 + 1;
            if ((byte *)param_1 == pbVar1) break;
            lVar9 = *(long *)(this + 0x3d0);
          }
        }
      }
      else {
        if (param_3 != (ushort *)0x0) {
          if (!param_4) {
            uVar5 = T2K_GetGlyphIndex(lVar9,*param_1,pOVar2);
            if (uVar5 == 0) goto LAB_05365370;
LAB_05365340:
            *puVar12 = uVar5;
            do {
              uVar10 = uVar10 + 1;
              puVar12 = (ushort *)((long)puVar12 + uVar11);
              do {
                param_1 = param_1 + 1;
                uVar7 = uVar10;
                if ((byte *)param_1 == pbVar1) goto LAB_053653a8;
                uVar5 = T2K_GetGlyphIndex(*(undefined8 *)(this + 0x3d0),*param_1,pOVar2);
                if (uVar5 != 0) goto LAB_05365340;
LAB_05365370:
                iVar6 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*param_1,uVar5,pOVar2);
                if (iVar6 != 0) goto LAB_05365340;
                cVar4 = IsCharZeroWidth((ushort)(byte)*param_1);
              } while (cVar4 == '\0');
              *puVar12 = 0xfffe;
            } while( true );
          }
          uVar5 = T2K_GetGlyphIndex(lVar9,*param_1,pOVar2);
          if (uVar5 == 0) goto LAB_05365534;
          do {
            *puVar12 = uVar5;
            while( true ) {
              param_1 = param_1 + 1;
              puVar12 = (ushort *)((long)puVar12 + uVar11);
              if ((byte *)param_1 == pbVar1) goto LAB_05365474;
              uVar5 = T2K_GetGlyphIndex(*(undefined8 *)(this + 0x3d0),*param_1,pOVar2);
              if (uVar5 != 0) break;
LAB_05365534:
              iVar8 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*param_1,uVar5,pOVar2);
              if (iVar8 != 0) break;
              cVar4 = IsCharZeroWidth((ushort)(byte)*param_1);
              if (cVar4 == '\0') {
                *puVar12 = *(ushort *)(this + 0x20);
              }
              else {
                *puVar12 = 0xfffe;
              }
            }
          } while( true );
        }
        if (!param_4) {
          uVar7 = 0;
          do {
            uVar5 = T2K_GetGlyphIndex(lVar9,*param_1,pOVar2);
            if ((uVar5 == 0) &&
               (iVar6 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*param_1,0,pOVar2), iVar6 == 0)
               ) {
              cVar4 = IsCharZeroWidth((ushort)(byte)*param_1);
              if (cVar4 != '\0') {
                *puVar12 = 0xfffe;
                goto LAB_0536559c;
              }
            }
            else {
              *puVar12 = uVar5;
LAB_0536559c:
              uVar7 = uVar7 + 1;
            }
            param_1 = param_1 + 1;
            if ((byte *)param_1 == pbVar1) goto LAB_053653a8;
            lVar9 = *(long *)(this + 0x3d0);
          } while( true );
        }
        while( true ) {
          uVar5 = T2K_GetGlyphIndex(lVar9,*param_1,pOVar2);
          if ((uVar5 == 0) &&
             (iVar8 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*param_1,0,pOVar2), iVar8 == 0))
          {
            cVar4 = IsCharZeroWidth((ushort)(byte)*param_1);
            if (cVar4 == '\0') {
              *puVar12 = *(ushort *)(this + 0x20);
            }
            else {
              *puVar12 = 0xfffe;
            }
          }
          else {
            *puVar12 = uVar5;
          }
          param_1 = param_1 + 1;
          if ((byte *)param_1 == pbVar1) break;
          lVar9 = *(long *)(this + 0x3d0);
        }
      }
      uVar7 = (int)param_1 - iVar6;
    }
    else {
      uVar7 = 0;
    }
  }
LAB_053653a8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


/* EA::Text::OutlineFont::GetCurrentGlyphMetrics(EA::Text::GlyphMetrics&) */

void __thiscall
EA::Text::OutlineFont::GetCurrentGlyphMetrics(OutlineFont *this,GlyphMetrics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 0x3d0);
  iVar1 = *(int *)(lVar5 + 0x120);
  iVar2 = *(int *)(lVar5 + 0x11c);
  iVar3 = *(int *)(lVar5 + 0x10c);
  iVar4 = *(int *)(lVar5 + 0x150);
  *(float *)param_1 = (float)*(int *)(lVar5 + 0x14c);
  *(float *)(param_1 + 8) = (float)iVar1 * 0.015625;
  *(float *)(param_1 + 4) = (float)iVar4;
  *(float *)(param_1 + 0xc) = (float)iVar2 * 0.015625;
  *(float *)(param_1 + 0x10) = (float)iVar3 * 1.5258789e-05;
  return;
}


/* EA::Text::OutlineFont::ResetEffectBitmaps() */

void EA::Text::OutlineFont::ResetEffectBitmaps(void)

{
  EffectsBitmaps::Reset((EffectsBitmaps *)&EffectsState::mEffectsBitmaps);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::InitEffectsProcessor() */

void __thiscall EA::Text::OutlineFont::InitEffectsProcessor(OutlineFont *this)

{
  char cVar1;
  FontServer *this_00;
  EffectsState *this_01;
  EffectsProcessor *this_02;
  uint local_344;
  EffectsInstructionWord *local_340;
  EffectsState aEStack_338 [64];
  EffectsInstructionWord aEStack_2f8 [160];
  uint local_258;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x164] = (OutlineFont)0x1;
  if (*(long *)(this + 0x170) == 0) {
    this_02 = (EffectsProcessor *)FUN_053651a8(*(undefined8 *)(this + 8));
    EffectsProcessor::EffectsProcessor(this_02,*(ICoreAllocator **)(this + 8));
    *(EffectsProcessor **)(this + 0x170) = this_02;
    this[0x165] = (OutlineFont)0x0;
  }
  local_344 = 0;
  local_340 = (EffectsInstructionWord *)0x0;
  EffectsState::EffectsState(aEStack_338,(ICoreAllocator *)0x0);
  switch(*(undefined4 *)(this + 0x90)) {
  case 1:
    EffectsState::SetGlyphColor(aEStack_338,*(uint *)(this + 0xa0));
    EffectsState::SetGlyphBrush(aEStack_338,0,(int)*(float *)(this + 0x94) * 2 + 1,0.5,1.0);
    EffectsState::DrawGlyphSmearOutline(aEStack_338);
    EffectsState::Merge(aEStack_338);
    EffectsState::Clear(aEStack_338);
    EffectsState::SetGlyphColor(aEStack_338,*(uint *)(this + 0x9c));
    break;
  case 2:
    EffectsState::SetGlyphColor(aEStack_338,*(uint *)(this + 0xa0));
    EffectsState::SetGlyphOffset
              (aEStack_338,(int)*(float *)(this + 0x94),(int)*(float *)(this + 0x98));
    EffectsState::DrawGlyph(aEStack_338);
    EffectsState::ApplyBoxBlur(aEStack_338,2.0,1.1,2);
    EffectsState::Merge(aEStack_338);
    EffectsState::Clear(aEStack_338);
    EffectsState::SetGlyphColor(aEStack_338,*(uint *)(this + 0x9c));
    EffectsState::SetGlyphOffset(aEStack_338,0,0);
    break;
  case 3:
  case 4:
    goto switchD_0536593c_caseD_3;
  default:
    this_00 = (FontServer *)GetFontServer(false);
    cVar1 = FontServer::GetEffect(this_00,*(uint *)(this + 0x90),&local_340,&local_344);
    if (cVar1 == '\0') goto switchD_0536593c_caseD_3;
    goto LAB_053659dc;
  }
  EffectsState::DrawGlyph(aEStack_338);
  EffectsState::Merge(aEStack_338);
  EffectsState::SetGlyphHSpace(aEStack_338,1,0);
  local_340 = aEStack_2f8;
  local_344 = local_258;
LAB_053659dc:
  this_01 = (EffectsState *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       **)(this + 0x170));
  EffectsState::AppendInstructionList(this_01,local_340,local_344);
switchD_0536593c_caseD_3:
  EffectsState::~EffectsState(aEStack_338);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::GetFontMetrics(EA::Text::FontMetrics&) */

void __thiscall EA::Text::OutlineFont::GetFontMetrics(OutlineFont *this,FontMetrics *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = (**(code **)(*(long *)this + 0x58))();
  uVar3 = 0;
  if (iVar2 != 0) {
    if ((*(int *)(this + 0x90) != 0) && (this[0x165] == (OutlineFont)0x0)) {
      Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(*(long *)(this + 0x178) + 0x10));
      if (this[0x164] == (OutlineFont)0x0) {
        InitEffectsProcessor(this);
      }
      EffectsProcessor::AdjustFontMetrics
                (*(EffectsProcessor **)(this + 0x170),(FontMetrics *)(this + 0xa8));
      this[0x165] = (OutlineFont)0x1;
      Thread::AutoFutex::~AutoFutex(aAStack_10);
    }
    uVar3 = *(undefined8 *)(this + 0xb0);
    *(undefined8 *)param_1 = *(undefined8 *)(this + 0xa8);
    *(undefined8 *)(param_1 + 8) = uVar3;
    uVar3 = 1;
    uVar1 = *(undefined8 *)(this + 0xc0);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 0xb8);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)(this + 0xd0);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(this + 200);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)(this + 0xe0);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(this + 0xd8);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(this + 0xe8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::GetGlyphIds(char16_t const*, unsigned int, unsigned short*, bool, unsigned
   int, bool) */

void __thiscall
EA::Text::OutlineFont::GetGlyphIds
          (OutlineFont *this,wchar16 *param_1,uint param_2,ushort *param_3,bool param_4,uint param_5
          ,bool param_6)

{
  wchar16 *pwVar1;
  OutlineFont *pOVar2;
  wchar16 wVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  wchar16 *pwVar11;
  ushort uStack_12;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  uVar9 = (ulong)param_5;
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(*(long *)(this + 0x178) + 0x10));
  lVar8 = *(long *)(this + 0x3d0);
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    pwVar1 = param_1 + param_2;
    puVar10 = param_3;
    if (param_3 == (ushort *)0x0) {
      puVar10 = &uStack_12;
    }
    if (param_1 < pwVar1) {
      pOVar2 = this + 0x3d8;
      if (param_6) {
        if (param_3 == (ushort *)0x0) {
          pwVar11 = param_1;
          if (param_4) {
            while( true ) {
              uVar5 = T2K_GetGlyphIndex(lVar8,*pwVar11,pOVar2);
              if ((uVar5 == 0) &&
                 (iVar7 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*pwVar11,0,pOVar2),
                 iVar7 == 0)) {
                cVar4 = IsCharZeroWidth(*pwVar11);
                if (cVar4 == '\0') {
                  *puVar10 = *(ushort *)(this + 0x20);
                }
                else {
                  *puVar10 = 0xfffe;
                }
              }
              else {
                *puVar10 = uVar5;
              }
              if (pwVar1 <= pwVar11 + 1) break;
              lVar8 = *(long *)(this + 0x3d0);
              pwVar11 = pwVar11 + 1;
            }
          }
          else {
            while( true ) {
              uVar5 = T2K_GetGlyphIndex(lVar8,*pwVar11,pOVar2);
              if ((uVar5 == 0) &&
                 (iVar7 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*pwVar11,0,pOVar2),
                 iVar7 == 0)) {
                cVar4 = IsCharZeroWidth(*pwVar11);
                uVar5 = 0xfffe;
                if (cVar4 == '\0') {
                  uVar5 = 0xffff;
                }
                *puVar10 = uVar5;
              }
              else {
                *puVar10 = uVar5;
              }
              if (pwVar1 <= pwVar11 + 1) break;
              lVar8 = *(long *)(this + 0x3d0);
              pwVar11 = pwVar11 + 1;
            }
          }
        }
        else {
          if (param_4) {
            uVar5 = T2K_GetGlyphIndex(lVar8,*param_1,pOVar2);
            pwVar11 = param_1;
            if (uVar5 == 0) goto LAB_05365e1c;
LAB_05365df0:
            *puVar10 = uVar5;
            while (pwVar11 = pwVar11 + 1, pwVar11 < pwVar1) {
              while( true ) {
                puVar10 = (ushort *)((long)puVar10 + uVar9);
                uVar5 = T2K_GetGlyphIndex(*(undefined8 *)(this + 0x3d0),*pwVar11,pOVar2);
                if (uVar5 != 0) goto LAB_05365df0;
LAB_05365e1c:
                iVar7 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*pwVar11,uVar5,pOVar2);
                if (iVar7 != 0) goto LAB_05365df0;
                cVar4 = IsCharZeroWidth(*pwVar11);
                if (cVar4 != '\0') break;
                pwVar11 = pwVar11 + 1;
                *puVar10 = *(ushort *)(this + 0x20);
                if (pwVar1 <= pwVar11) goto LAB_05365e5c;
              }
              *puVar10 = 0xfffe;
            }
LAB_05365e5c:
            iVar7 = (int)(~(ulong)param_1 + (long)pwVar1 >> 1) + 1;
            goto LAB_05365d20;
          }
          uVar5 = T2K_GetGlyphIndex(lVar8,*param_1,pOVar2);
          pwVar11 = param_1;
          if (uVar5 == 0) goto LAB_05365ccc;
LAB_05365ca0:
          pwVar11 = pwVar11 + 1;
          *puVar10 = uVar5;
          if (pwVar11 < pwVar1) {
            while( true ) {
              puVar10 = (ushort *)((long)puVar10 + uVar9);
              uVar5 = T2K_GetGlyphIndex(*(undefined8 *)(this + 0x3d0),*pwVar11,pOVar2);
              if (uVar5 != 0) break;
LAB_05365ccc:
              iVar7 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*pwVar11,uVar5,pOVar2);
              if (iVar7 != 0) break;
              wVar3 = *pwVar11;
              pwVar11 = pwVar11 + 1;
              cVar4 = IsCharZeroWidth(wVar3);
              uVar5 = 0xfffe;
              if (cVar4 == '\0') {
                uVar5 = 0xffff;
              }
              *puVar10 = uVar5;
              if (pwVar1 <= pwVar11) goto LAB_05365d10;
            }
            goto LAB_05365ca0;
          }
        }
      }
      else {
        if (param_3 != (ushort *)0x0) {
          if (!param_4) {
            uVar5 = T2K_GetGlyphIndex(lVar8,*param_1,pOVar2);
            iVar7 = 0;
            if (uVar5 == 0) goto LAB_05365c48;
LAB_05365c18:
            *puVar10 = uVar5;
            do {
              iVar7 = iVar7 + 1;
              puVar10 = (ushort *)((long)puVar10 + uVar9);
              do {
                param_1 = param_1 + 1;
                if (pwVar1 <= param_1) goto LAB_05365d20;
                uVar5 = T2K_GetGlyphIndex(*(undefined8 *)(this + 0x3d0),*param_1,pOVar2);
                if (uVar5 != 0) goto LAB_05365c18;
LAB_05365c48:
                iVar6 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*param_1,uVar5,pOVar2);
                if (iVar6 != 0) goto LAB_05365c18;
                cVar4 = IsCharZeroWidth(*param_1);
              } while (cVar4 == '\0');
              *puVar10 = 0xfffe;
            } while( true );
          }
          uVar5 = T2K_GetGlyphIndex(lVar8,*param_1,pOVar2);
          pwVar11 = param_1;
          if (uVar5 == 0) goto LAB_05365da4;
          do {
            *puVar10 = uVar5;
            while( true ) {
              pwVar11 = pwVar11 + 1;
              puVar10 = (ushort *)((long)puVar10 + uVar9);
              if (pwVar1 <= pwVar11) goto LAB_05365d10;
              uVar5 = T2K_GetGlyphIndex(*(undefined8 *)(this + 0x3d0),*pwVar11,pOVar2);
              if (uVar5 != 0) break;
LAB_05365da4:
              iVar7 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*pwVar11,uVar5,pOVar2);
              if (iVar7 != 0) break;
              cVar4 = IsCharZeroWidth(*pwVar11);
              if (cVar4 == '\0') {
                *puVar10 = *(ushort *)(this + 0x20);
              }
              else {
                *puVar10 = 0xfffe;
              }
            }
          } while( true );
        }
        pwVar11 = param_1;
        if (!param_4) {
          iVar7 = 0;
          do {
            uVar5 = T2K_GetGlyphIndex(lVar8,*param_1,pOVar2);
            if ((uVar5 == 0) &&
               (iVar6 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*param_1,0,pOVar2), iVar6 == 0)
               ) {
              cVar4 = IsCharZeroWidth(*param_1);
              if (cVar4 != '\0') {
                *puVar10 = 0xfffe;
                goto LAB_05365ec4;
              }
            }
            else {
              *puVar10 = uVar5;
LAB_05365ec4:
              iVar7 = iVar7 + 1;
            }
            param_1 = param_1 + 1;
            if (pwVar1 <= param_1) goto LAB_05365d20;
            lVar8 = *(long *)(this + 0x3d0);
          } while( true );
        }
        while( true ) {
          uVar5 = T2K_GetGlyphIndex(lVar8,*pwVar11,pOVar2);
          if ((uVar5 == 0) &&
             (iVar7 = FF_GlyphExists(*(undefined8 *)(this + 0x3d0),*pwVar11,0,pOVar2), iVar7 == 0))
          {
            cVar4 = IsCharZeroWidth(*pwVar11);
            if (cVar4 == '\0') {
              *puVar10 = *(ushort *)(this + 0x20);
            }
            else {
              *puVar10 = 0xfffe;
            }
          }
          else {
            *puVar10 = uVar5;
          }
          if (pwVar1 <= pwVar11 + 1) break;
          lVar8 = *(long *)(this + 0x3d0);
          pwVar11 = pwVar11 + 1;
        }
      }
LAB_05365d10:
      iVar7 = (int)(~(ulong)param_1 + (long)pwVar1 >> 1) + 1;
    }
    else {
      iVar7 = 0;
    }
  }
LAB_05365d20:
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::SetTransform(float, float, float, float) */

void __thiscall
EA::Text::OutlineFont::SetTransform
          (OutlineFont *this,float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  AutoFutex aAStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_20,(Futex *)(*(long *)(this + 0x178) + 0x10));
  if (*(long *)(this + 0x3d0) == 0) {
    bVar4 = false;
  }
  else {
    local_18 = (int)(param_1 * 65536.0);
    local_14 = (int)(param_2 * 65536.0);
    local_10 = (int)(param_3 * 65536.0);
    local_c = (int)(param_4 * 65536.0);
    T2K_NewTransformation
              (*(long *)(this + 0x3d0),1,(long)*(short *)(this + 0x162),
               (long)*(short *)(this + 0x162) & 0xffffffff,&local_18,1,this + 0x3d8);
    iVar1 = *(int *)(this + 0x3d8);
    if (iVar1 == 0) {
      lVar6 = *(long *)(this + 0x3d0);
      *(undefined4 *)(this + 0xac) = *(undefined4 *)(this + 0x84);
      iVar2 = *(int *)(lVar6 + 0xbc);
      iVar3 = *(int *)(lVar6 + 0xa8);
      iVar5 = *(int *)(lVar6 + 0xb0);
      fVar9 = (float)iVar3 * 1.5258789e-05;
      *(undefined4 *)(this + 0xa8) = 0;
      *(float *)(this + 0xb0) = (float)iVar2 * 1.5258789e-05;
      *(float *)(this + 0xb8) = fVar9;
      if (0 < iVar5) {
        iVar5 = -iVar5;
        *(int *)(lVar6 + 0xb0) = iVar5;
      }
      iVar2 = *(int *)(lVar6 + 0xb8);
      iVar3 = iVar3 + iVar2;
      fVar10 = (float)iVar5 * 1.5258789e-05;
      fVar8 = (float)iVar3 * 1.5258789e-05;
      *(float *)(this + 0xbc) = fVar10;
      fVar7 = (float)(iVar3 - iVar5) * 1.5258789e-05;
      *(float *)(this + 0xc0) = (float)iVar2 * 1.5258789e-05;
      *(float *)(this + 0xc4) = fVar8;
      if ((fVar8 != (float)(int)fVar8) || (fVar10 != (float)(int)fVar10)) {
        fVar7 = fVar7 + 1.0;
      }
      iVar3 = *(int *)(lVar6 + 0xd4);
      *(float *)(this + 200) = fVar7;
      iVar2 = *(int *)(lVar6 + 0xd0);
      iVar5 = *(int *)(lVar6 + 0xa0);
      fVar7 = (float)iVar3 * 1.5258789e-05;
      *(float *)(this + 0xd0) = fVar9;
      *(float *)(this + 0xcc) = fVar9 * 0.5;
      *(float *)(this + 0xd8) = fVar7;
      *(float *)(this + 0xd4) = (float)iVar2 * 1.5258789e-05;
      *(float *)(this + 0xdc) = fVar9 * 0.5;
      *(float *)(this + 0xe0) = fVar7;
      *(float *)(this + 0xe8) = fVar7;
      *(float *)(this + 0xe4) = fVar9 + 1.0 + fVar7 * 0.5;
      if ((iVar5 == 0) || (iVar3 = *(int *)(lVar6 + 0xfc), iVar3 < 1)) {
        this[0x165] = (OutlineFont)(*(int *)(this + 0x90) == 0);
        *(undefined4 *)(this + 0xb4) = *(undefined4 *)(this + 200);
      }
      else {
        this[0x165] = (OutlineFont)(*(int *)(this + 0x90) == 0);
        *(float *)(this + 0xb4) = (float)iVar3 * 1.5258789e-05;
      }
    }
    bVar4 = iVar1 == 0;
  }
  Thread::AutoFutex::~AutoFutex(aAStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::SetTransform(float, float, float) */

void EA::Text::OutlineFont::SetTransform(float param_1,float param_2,float param_3)

{
  char cVar1;
  long *in_x0;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(in_x0[0x2f] + 0x10));
  cVar1 = (**(code **)(*in_x0 + 0xa0))(param_1,0,0,param_1);
  if (cVar1 != '\0') {
    *(float *)((long)in_x0 + 0x74) = param_1;
    *(float *)(in_x0 + 0x15) = param_1;
    if (*(float *)(in_x0 + 0x1b) == 0.0) {
      *(int *)(in_x0 + 0x1b) = (int)(param_1 * _FUN_053663b0);
    }
    if (*(float *)(in_x0 + 0x1c) == 0.0) {
      *(int *)(in_x0 + 0x1c) = (int)(param_1 * _FUN_053663b0);
    }
    if (*(float *)(in_x0 + 0x1d) == 0.0) {
      *(int *)(in_x0 + 0x1d) = (int)(param_1 * _FUN_053663b0);
    }
  }
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* EA::Text::OutlineFont::DoneGlyphBitmap(EA::Text::Font::GlyphBitmap const*) */

void EA::Text::OutlineFont::DoneGlyphBitmap(GlyphBitmap *param_1)

{
  char cVar1;
  
  cVar1 = EffectsProcessor::IsEffectBitmapsInUse(param_1);
  if (cVar1 != '\0') {
    EffectsProcessor::EndEffectBitmapsUse(param_1);
  }
  if (*(long *)(param_1 + 0x3d0) != 0) {
    T2K_PurgeMemory(*(long *)(param_1 + 0x3d0),1,param_1 + 0x3d8);
  }
  Thread::Futex::Unlock((Futex *)(*(long *)(param_1 + 0x178) + 0x10));
  return;
}


/* EA::Text::OutlineFont::SetFaceData(EA::Text::FaceData*) */

void __thiscall EA::Text::OutlineFont::SetFaceData(OutlineFont *this,FaceData *param_1)

{
  FaceData *this_00;
  
  this_00 = *(FaceData **)(this + 0x178);
  if (this_00 != param_1) {
    if (param_1 != (FaceData *)0x0) {
      FaceData::AddRef(param_1);
      this_00 = *(FaceData **)(this + 0x178);
    }
    if (this_00 != (FaceData *)0x0) {
      FaceData::Release(this_00);
    }
    *(FaceData **)(this + 0x178) = param_1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::CreateFaceData(EA::Allocator::ICoreAllocator*, EA::IO::IStream*, void
   const*, unsigned int, int) */

void EA::Text::OutlineFont::CreateFaceData
               (ICoreAllocator *param_1,IStream *param_2,void *param_3,uint param_4,int param_5)

{
  FaceData *this;
  FaceData *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (FaceData *)(**(code **)(*(long *)param_1 + 0x10))(param_1,0x48,"EAText/FaceData",0);
  if (this != (FaceData *)0x0) {
    this_00 = (FaceData *)FUN_0536501c();
    if (this_00 != (FaceData *)0x0) {
      FaceData::FaceData(this_00,param_1);
    }
    FaceData::AddRef(this);
    local_c = 0;
    uVar1 = tsi_NewCustomSizeMemhandler(&local_c,0x10);
    *(undefined8 *)this = uVar1;
    if (param_2 == (IStream *)0x0) {
      uVar1 = New_InputStream3(uVar1,param_3,param_4,&local_c);
      *(undefined8 *)(this + 8) = uVar1;
    }
    else {
      if (*(code **)(*(long *)param_2 + 0x40) == IO::FixedMemoryStream::GetSize) {
        uVar2 = IO::FixedMemoryStream::GetSize((FixedMemoryStream *)param_2);
      }
      else {
        uVar2 = (**(code **)(*(long *)param_2 + 0x40))();
      }
      uVar1 = New_NonRamInputStream(uVar1,param_2,FUN_05364eac,uVar2,&local_c);
      *(undefined8 *)(this + 8) = uVar1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* EA::Text::OutlineFont::Close() */

undefined8 __thiscall EA::Text::OutlineFont::Close(OutlineFont *this)

{
  if (*(EffectsProcessor **)(this + 0x170) != (EffectsProcessor *)0x0) {
    Allocator::detail::DeleteObject<EA::Text::EffectsProcessor>
              (*(ICoreAllocator **)(this + 8),*(EffectsProcessor **)(this + 0x170));
    *(undefined8 *)(this + 0x170) = 0;
  }
  if (*(long *)(this + 0x3d0) != 0) {
    DeleteT2K(*(long *)(this + 0x3d0),this + 0x3d8);
    *(undefined8 *)(this + 0x3d0) = 0;
  }
  if (*(long *)(this + 0x3e0) != 0) {
    FF_Delete_sfntClass(*(long *)(this + 0x3e0),this + 0x3d8);
    *(undefined8 *)(this + 0x3e0) = 0;
  }
  if (*(FaceData **)(this + 0x178) != (FaceData *)0x0) {
    FaceData::Release(*(FaceData **)(this + 0x178));
    *(undefined8 *)(this + 0x178) = 0;
  }
  if (*(long *)(this + 0x3c8) != 0) {
    tsi_DeleteMemhandler();
    *(undefined8 *)(this + 0x3c8) = 0;
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x18))();
    *(undefined8 *)(this + 0x18) = 0;
  }
  eastl::
  bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::clear((bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
           *)(this + 0x180));
  *(undefined2 *)(this + 0x160) = 0;
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::GetKerning(unsigned short, unsigned short, EA::Text::Kerning&, int, bool)
    */

void EA::Text::OutlineFont::GetKerning
               (ushort param_1,ushort param_2,Kerning *param_3,int param_4,bool param_5)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  undefined8 uVar4;
  ushort local_24;
  ushort local_22 [3];
  short local_1c;
  undefined1 auStack_1a [2];
  int local_18;
  int local_14;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  pfVar3 = (float *)(ulong)(uint)param_4;
  uVar1 = (ulong)param_1;
  local_24 = (ushort)param_3;
  local_8 = ___stack_chk_guard;
  local_22[0] = param_2;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(*(long *)(uVar1 + 0x178) + 0x10));
  if (*(long *)(uVar1 + 0x3d0) == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(uVar1 + 0x3d0) + 0x1d0);
    if ((*(long *)(lVar2 + 0xe8) != 0) && (*(int *)(uVar1 + 0xac) != 1)) {
      if (param_5) {
        eastl::swap<unsigned_short>(local_22,&local_24);
        lVar2 = *(long *)(*(long *)(uVar1 + 0x3d0) + 0x1d0);
      }
      GetSfntClassKernValue(lVar2,local_22[0],local_24,&local_1c,auStack_1a);
      if (local_1c != 0) {
        uVar4 = 1;
        T2K_TransformXFunits(*(undefined8 *)(uVar1 + 0x3d0),(long)local_1c,&local_18,&local_14);
        *pfVar3 = (float)local_18 * 1.5258789e-05;
        pfVar3[1] = (float)local_14 * 1.5258789e-05;
        goto LAB_053667a4;
      }
    }
    uVar4 = 0;
    *pfVar3 = 0.0;
    pfVar3[1] = 0.0;
  }
LAB_053667a4:
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::OutlineFont(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::OutlineFont::OutlineFont(OutlineFont *this,ICoreAllocator *param_1)

{
  long lVar1;
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Font::Font((Font *)this,param_1);
  *(undefined ***)this = &PTR__OutlineFont_06a36910;
  FontDescription::FontDescription((FontDescription *)(this + 0x34));
  FontMetrics::FontMetrics((FontMetrics *)(this + 0xa8));
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/OutlineFont/GlyphMetricsMap",*(ICoreAllocator **)(this + 8));
  eastl::
  hash_map<unsigned_short,EA::Text::GlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
  ::hash_map((CoreAllocatorAdapter *)(this + 0xf0));
  *(undefined4 *)(this + 0x130) = 0;
  this[0x166] = (OutlineFont)0x1;
  *(undefined2 *)(this + 0x162) = 0x60;
  this[0x16a] = (OutlineFont)0x1;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined2 *)(this + 0x160) = 0;
  this[0x164] = (OutlineFont)0x0;
  this[0x165] = (OutlineFont)0x0;
  this[0x167] = (OutlineFont)0x0;
  this[0x168] = (OutlineFont)0x0;
  this[0x169] = (OutlineFont)0x0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/OutlineFont/SupportedChars",*(ICoreAllocator **)(this + 8));
  eastl::
  bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::bitvector((bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
               *)(this + 0x180),(CoreAllocatorAdapter *)aCStack_18);
  OTF::OTF((OTF *)(this + 0x1b8),(ICoreAllocator *)0x0);
  this[0x1b0] = (OutlineFont)0x0;
  OTF::SetAllocator((OTF *)(this + 0x1b8),*(ICoreAllocator **)(this + 8));
  *(undefined8 *)(this + 0x3c8) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined4 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::OutlineFont(EA::Text::OutlineFont const&) */

void __thiscall EA::Text::OutlineFont::OutlineFont(OutlineFont *this,OutlineFont *param_1)

{
  ICoreAllocator *pIVar1;
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Font::Font((Font *)this,(Font *)param_1);
  *(undefined ***)this = &PTR__OutlineFont_06a36910;
  FontDescription::FontDescription((FontDescription *)(this + 0x34));
  FontMetrics::FontMetrics((FontMetrics *)(this + 0xa8));
  pIVar1 = (ICoreAllocator *)Allocator::ICoreAllocator::GetDefaultAllocator();
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EASTL hash_map",pIVar1);
  eastl::
  hash_map<unsigned_short,EA::Text::GlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
  ::hash_map((CoreAllocatorAdapter *)(this + 0xf0));
  eastl::
  bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::bitvector((bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
               *)(this + 0x180));
  OTF::OTF((OTF *)(this + 0x1b8),(ICoreAllocator *)0x0);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::OutlineFont::~OutlineFont() */

void __thiscall EA::Text::OutlineFont::~OutlineFont(OutlineFont *this)

{
  *(undefined ***)this = &PTR__OutlineFont_06a36910;
  Close(this);
  OTF::~OTF((OTF *)(this + 0x1b8));
  eastl::
  bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::~bitvector((bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                *)(this + 0x180));
  eastl::
  hash_map<unsigned_short,EA::Text::GlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
  ::~hash_map((hash_map<unsigned_short,EA::Text::GlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
               *)(this + 0xf0));
  nop();
  return;
}


/* EA::Text::OutlineFont::~OutlineFont() */

void __thiscall EA::Text::OutlineFont::~OutlineFont(OutlineFont *this)

{
  ~OutlineFont(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::GetGlyphMetrics(unsigned short, EA::Text::GlyphMetrics&) */

void __thiscall
EA::Text::OutlineFont::GetGlyphMetrics(OutlineFont *this,ushort param_1,GlyphMetrics *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort local_42 [5];
  AutoFutex aAStack_38 [8];
  undefined8 local_30 [2];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_42[0] = param_1;
  Thread::AutoFutex::AutoFutex(aAStack_38,(Futex *)(*(long *)(this + 0x178) + 0x10));
  FUN_053668f8((pair<unsigned_short_const,EA::Text::GlyphMetrics> *)local_20,
               *(undefined8 *)(this + 0xf8),*(undefined8 *)(this + 0x100),local_42);
  eastl::
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::hashtable_iterator
            ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
              *)local_30,(hashtable_iterator *)local_20);
  FUN_053668d0((pair<unsigned_short_const,EA::Text::GlyphMetrics> *)local_20,
               *(undefined8 *)(this + 0xf8),*(undefined8 *)(this + 0x100));
  cVar1 = FUN_05365050(local_30[0],local_20[0]);
  if (cVar1 == '\0') {
    *(short *)(this + 0x160) = *(short *)(this + 0x160) + 1;
    if (*(int *)(this + 0x90) == 0) {
      if (*(int *)(this + 0x8c) == 1) {
        if ((this[0x166] == (OutlineFont)0x0) || (this[0x16a] == (OutlineFont)0x0)) {
          uVar2 = 0x25a;
          uVar4 = 3;
        }
        else {
          uVar2 = 0x8b;
          uVar4 = 3;
        }
      }
      else {
        uVar2 = 0x25a;
        if ((this[0x166] != (OutlineFont)0x0) && (uVar2 = 0x25a, this[0x16a] != (OutlineFont)0x0)) {
          uVar2 = 0x8b;
        }
        T2K_RenderGlyph(*(undefined8 *)(this + 0x3d0),local_42[0],0,0,0,uVar2,this + 0x3d8);
        T2K_PurgeMemory(*(undefined8 *)(this + 0x3d0),1,this + 0x3d8);
        uVar4 = 0;
      }
      uVar5 = 0;
      T2K_RenderGlyph(*(undefined8 *)(this + 0x3d0),local_42[0],0,0,uVar4,uVar2,this + 0x3d8);
      if ((*(int *)(this + 0x3d8) == 0) && (*(int *)(*(long *)(this + 0x3d0) + 0xa0) != 0)) {
        uVar5 = 1;
        GetCurrentGlyphMetrics(this,param_2);
        eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>::pair
                  ((pair<unsigned_short_const,EA::Text::GlyphMetrics> *)local_20,local_42,param_2);
        eastl::
        hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        ::insert((pair *)(this + 0xf0));
        T2K_PurgeMemory(*(undefined8 *)(this + 0x3d0),1,this + 0x3d8);
      }
    }
    else {
      if (this[0x164] == (OutlineFont)0x0) {
        InitEffectsProcessor(this);
      }
      uVar5 = 1;
      EffectsProcessor::BeginEffectBitmapsUse(this,*(ICoreAllocator **)(this + 8));
      EffectsProcessor::Execute(*(EffectsProcessor **)(this + 0x170),this,local_42[0]);
      EffectsProcessor::EndEffectBitmapsUse(this);
      lVar3 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_end(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         **)(this + 0x170));
      eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>::pair
                ((pair<unsigned_short_const,EA::Text::GlyphMetrics> *)local_20,local_42,
                 (GlyphMetrics *)(lVar3 + 0x31c));
      eastl::
      hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
      ::insert((pair *)(this + 0xf0));
      uVar4 = *(undefined8 *)(lVar3 + 0x324);
      *(undefined8 *)param_2 = *(undefined8 *)(lVar3 + 0x31c);
      *(undefined8 *)(param_2 + 8) = uVar4;
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x32c);
    }
  }
  else {
    uVar5 = 1;
    lVar3 = FUN_0536505c(local_30[0]);
    uVar4 = *(undefined8 *)(lVar3 + 0xc);
    *(undefined8 *)param_2 = *(undefined8 *)(lVar3 + 4);
    *(undefined8 *)(param_2 + 8) = uVar4;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x14);
  }
  Thread::AutoFutex::~AutoFutex(aAStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* EA::Text::OutlineFont::IsCharSupported(char16_t, EA::Text::Script) */

void EA::Text::OutlineFont::IsCharSupported(long param_1,ushort param_2)

{
  eastl::
  bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::test((bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
          *)(param_1 + 0x180),(ulong)param_2,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::RenderGlyphBitmap(EA::Text::Font::GlyphBitmap const**, unsigned short,
   unsigned int, float, float) */

void EA::Text::OutlineFont::RenderGlyphBitmap
               (GlyphBitmap **param_1,ushort param_2,uint param_3,float param_4,float param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  GlyphBitmap *pGVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  ushort local_32;
  undefined8 local_30 [2];
  undefined8 local_20 [3];
  long local_8;
  
  local_32 = (ushort)param_3;
  local_8 = ___stack_chk_guard;
  Thread::Futex::Lock((Futex *)(param_1[0x2f] + 0x10));
  if (param_1[0x7a] == (GlyphBitmap *)0x0) {
    Thread::Futex::Unlock((Futex *)(param_1[0x2f] + 0x10));
    uVar10 = 0;
  }
  else if (local_32 == 0xfffe) {
    *(undefined4 *)(param_1 + 0x26) = 0;
    uVar8 = 8;
    if (*(int *)((long)param_1 + 0x8c) != 1) {
      uVar8 = 1;
    }
    *(undefined4 *)((long)param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x2b) = uVar8;
    *(undefined4 *)((long)param_1 + 0x15c) = 0;
    param_1[0x2a] = (GlyphBitmap *)0x0;
    puVar12 = (undefined8 *)
              eastl::
              hash_map<unsigned_short,EA::Text::GlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
              ::operator[]((ushort *)(param_1 + 0x1e));
    pGVar9 = (GlyphBitmap *)puVar12[1];
    uVar10 = 1;
    param_1[0x27] = (GlyphBitmap *)*puVar12;
    param_1[0x28] = pGVar9;
    *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(puVar12 + 2);
    *(long *)(ulong)param_2 = (long)(param_1 + 0x26);
  }
  else {
    if (*(int *)(param_1 + 0x12) == 0) {
      iVar5 = 0;
      if (param_4 != 0.0) {
        iVar5 = (int)(char)(int)(param_4 * 64.0);
      }
      iVar13 = 0;
      if (param_5 != 0.0) {
        iVar13 = (int)(char)(int)(param_5 * 64.0);
      }
      uVar7 = 0x25a;
      uVar8 = 3;
      if (*(int *)((long)param_1 + 0x8c) != 1) {
        uVar8 = 0;
      }
      if ((*(char *)((long)param_1 + 0x166) != '\0') &&
         (uVar7 = 0x25a, *(char *)((long)param_1 + 0x16a) != '\0')) {
        uVar7 = 0x8b;
      }
      T2K_RenderGlyph(param_1[0x7a],local_32,iVar5,iVar13,uVar8,uVar7,param_1 + 0x7b);
      if (*(int *)(param_1 + 0x7b) == 0) {
        pGVar9 = param_1[0x7a];
        uVar7 = *(undefined4 *)(pGVar9 + 0x14c);
        uVar1 = *(undefined4 *)(pGVar9 + 0x150);
        uVar2 = *(undefined4 *)(pGVar9 + 0x154);
        pGVar9 = *(GlyphBitmap **)(pGVar9 + 0x158);
        uVar8 = 8;
        if (*(int *)((long)param_1 + 0x8c) != 1) {
          uVar8 = 1;
        }
        *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + 1;
        *(undefined4 *)(param_1 + 0x26) = uVar7;
        *(undefined4 *)((long)param_1 + 0x134) = uVar1;
        *(undefined4 *)((long)param_1 + 0x15c) = uVar2;
        *(undefined4 *)(param_1 + 0x2b) = uVar8;
        param_1[0x2a] = pGVar9;
      }
      GetCurrentGlyphMetrics((OutlineFont *)param_1,(GlyphMetrics *)(param_1 + 0x27));
      FUN_053668f8(local_30,param_1[0x1f],param_1[0x20],&local_32);
      FUN_053668d0((pair<unsigned_short_const,EA::Text::GlyphMetrics> *)local_20,param_1[0x1f],
                   param_1[0x20]);
      cVar6 = FUN_05365060(local_30[0],local_20[0]);
      if (cVar6 != '\0') {
        eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>::pair
                  ((pair<unsigned_short_const,EA::Text::GlyphMetrics> *)local_20,&local_32,
                   (GlyphMetrics *)(param_1 + 0x27));
        eastl::
        hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        ::insert((pair *)(param_1 + 0x1e));
      }
    }
    else {
      if (*(char *)((long)param_1 + 0x164) == '\0') {
        InitEffectsProcessor((OutlineFont *)param_1);
      }
      EffectsProcessor::BeginEffectBitmapsUse(param_1,(ICoreAllocator *)param_1[1]);
      EffectsProcessor::Execute((EffectsProcessor *)param_1[0x2e],(OutlineFont *)param_1,local_32);
      lVar11 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1[0x2e]);
      iVar5 = *(int *)(lVar11 + 0x30c);
      iVar13 = *(int *)(lVar11 + 0x314);
      pGVar9 = *(GlyphBitmap **)(lVar11 + 0x324);
      iVar3 = *(int *)(lVar11 + 0x308);
      iVar4 = *(int *)(lVar11 + 0x310);
      param_1[0x27] = *(GlyphBitmap **)(lVar11 + 0x31c);
      param_1[0x28] = pGVar9;
      uVar8 = *(undefined4 *)(lVar11 + 0x32c);
      *(int *)((long)param_1 + 0x134) = iVar13 - iVar5;
      *(int *)(param_1 + 0x26) = iVar4 - iVar3;
      *(undefined4 *)(param_1 + 0x29) = uVar8;
      uVar8 = DAT_06bc5b68;
      uVar10 = DAT_06bc5b60;
      *(undefined4 *)((long)param_1 + 0x15c) = DAT_06bc5b70;
      pGVar9 = (GlyphBitmap *)FUN_05365034(uVar10,uVar8,iVar3,iVar5);
      param_1[0x2a] = pGVar9;
      *(undefined4 *)(param_1 + 0x2b) = 0x20;
      FUN_053668f8(local_30,param_1[0x1f],param_1[0x20],&local_32);
      FUN_053668d0((pair<unsigned_short_const,EA::Text::GlyphMetrics> *)local_20,param_1[0x1f],
                   param_1[0x20]);
      cVar6 = FUN_05365060(local_30[0],local_20[0]);
      if (cVar6 != '\0') {
        eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>::pair
                  ((pair<unsigned_short_const,EA::Text::GlyphMetrics> *)local_20,&local_32,
                   (GlyphMetrics *)(lVar11 + 0x31c));
        eastl::
        hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        ::insert((pair *)(param_1 + 0x1e));
      }
    }
    uVar10 = 1;
    *(long *)(ulong)param_2 = (long)(param_1 + 0x26);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OutlineFont::OpenInternal(int) */

void __thiscall EA::Text::OutlineFont::OpenInternal(OutlineFont *this,int param_1)

{
  OutlineFont *pOVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  wchar16 *pwVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  ushort uVar11;
  ulong uVar12;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  pair<unsigned_short_const,EA::Text::GlyphMetrics> apStack_220 [24];
  wchar16 awStack_208 [256];
  long local_8;
  
  pOVar1 = this + 0x3d8;
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x3c8) == 0) {
    uVar6 = tsi_NewCustomSizeMemhandler(pOVar1,0x60);
    *(undefined8 *)(this + 0x3c8) = uVar6;
  }
  lVar9 = *(long *)(this + 0x3e0);
  if (lVar9 == 0) {
    uVar5 = FF_FontTypeFromStream(*(undefined8 *)(*(long *)(this + 0x178) + 8),pOVar1);
    if ((short)uVar5 == -1) {
      lVar9 = *(long *)(this + 0x3e0);
    }
    else {
      lVar9 = FF_New_sfntClass(*(undefined8 *)(this + 0x3c8),uVar5,param_1,
                               *(undefined8 *)(*(long *)(this + 0x178) + 8),0,0,pOVar1);
      *(long *)(this + 0x3e0) = lVar9;
    }
    if (lVar9 != 0) goto LAB_05367f1c;
  }
  else {
LAB_05367f1c:
    uVar6 = *(undefined8 *)(this + 0x3c8);
    *(undefined2 *)(*(long *)(lVar9 + 0xa0) + 0x36) = 0;
    lVar9 = NewT2K(uVar6,lVar9,pOVar1);
    *(long *)(this + 0x3d0) = lVar9;
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar9 + 0x1d0);
      *(undefined2 *)(lVar10 + 0x100) = 3;
      *(undefined2 *)(lVar10 + 0x102) = 1;
      T2K_SetNameString(lVar9,0x409,4,pOVar1);
      lVar9 = *(long *)(this + 0x3d0);
      pwVar7 = *(wchar16 **)(lVar9 + 0x88);
      if (pwVar7 == (wchar16 *)0x0) {
        pcVar8 = *(char **)(lVar9 + 0x80);
        if (pcVar8 == (char *)0x0) {
          *(undefined2 *)(*(long *)(lVar9 + 0x1d0) + 0x102) = 0;
          T2K_SetNameString(lVar9,0x409,4,pOVar1);
          if (*(int *)(this + 0x3d8) == 0) {
            pwVar7 = *(wchar16 **)(*(long *)(this + 0x3d0) + 0x88);
            if (pwVar7 != (wchar16 *)0x0) goto LAB_05367f70;
            pcVar8 = *(char **)(*(long *)(this + 0x3d0) + 0x80);
            if (pcVar8 != (char *)0x0) goto LAB_053681d8;
          }
        }
        else if (*(int *)(this + 0x3d8) == 0) {
LAB_053681d8:
          StdC::Strlcpy(awStack_208,pcVar8,0x100,0xffffffffffffffff);
          goto LAB_05367f80;
        }
      }
      else if (*(int *)(this + 0x3d8) == 0) {
LAB_05367f70:
        StdC::Strlcpy(awStack_208,pwVar7,0x100);
LAB_05367f80:
        T2K_SetNameString(*(undefined8 *)(this + 0x3d0),0x409,1,pOVar1);
        pwVar7 = *(wchar16 **)(*(long *)(this + 0x3d0) + 0x88);
        if (pwVar7 == (wchar16 *)0x0) {
          pcVar8 = *(char **)(*(long *)(this + 0x3d0) + 0x80);
          if (pcVar8 == (char *)0x0) {
            StdC::Strlcpy((wchar16 *)(this + 0x34),awStack_208,0x20);
          }
          else {
            StdC::Strlcpy((wchar16 *)(this + 0x34),pcVar8,0x20,0xffffffffffffffff);
          }
        }
        else {
          StdC::Strlcpy((wchar16 *)(this + 0x34),pwVar7,0x20);
        }
        lVar9 = *(long *)(*(long *)(this + 0x3d0) + 0x1d0);
        *(undefined4 *)(this + 0x74) = 0;
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0xa0), lVar9 == 0)) {
          uVar11 = 0;
LAB_05367fd4:
          lVar9 = StdC::Stristr(awStack_208,L"italic");
          if (lVar9 != 0) goto LAB_05367fe8;
          lVar9 = StdC::Stristr(awStack_208,L"oblique");
          if (lVar9 != 0) {
            *(undefined4 *)(this + 0x78) = 1;
            goto joined_r0x053681b8;
          }
          *(undefined4 *)(this + 0x78) = 0;
          if (uVar11 == 0) goto LAB_05368164;
LAB_05367ff4:
          uVar5 = 0x442f0000;
        }
        else {
          uVar2 = *(ushort *)(lVar9 + 0x34);
          if (uVar2 == 0) {
            uVar11 = 0;
            goto LAB_05367fd4;
          }
          uVar11 = uVar2 & 1;
          if ((uVar2 >> 1 & 1) == 0) goto LAB_05367fd4;
LAB_05367fe8:
          *(undefined4 *)(this + 0x78) = 2;
joined_r0x053681b8:
          if (uVar11 != 0) goto LAB_05367ff4;
LAB_05368164:
          lVar9 = StdC::Stristr(awStack_208,L"bold");
          if (lVar9 != 0) goto LAB_05367ff4;
          uVar5 = 0x43c80000;
        }
        uVar12 = 0;
        iVar4 = *(int *)(*(long *)(this + 0x3d0) + 0x94);
        *(undefined4 *)(this + 0x7c) = uVar5;
        *(uint *)(this + 0x84) = (uint)(iVar4 != 0);
        *(undefined4 *)(this + 0x80) = 0x3f800000;
        lVar9 = StdC::Stristr(awStack_208,L"smallcaps");
        lVar10 = *(long *)(this + 0x3d0);
        *(undefined4 *)(this + 0x8c) = 0;
        *(uint *)(this + 0x88) = (uint)(lVar9 != 0);
        this[0x16a] = (OutlineFont)0x1;
        *(undefined4 *)(lVar10 + 0x70) = 1;
        while( true ) {
          iVar4 = FF_GlyphExists(lVar10,uVar12 & 0xffffffff,0,apStack_220);
          if (iVar4 != 0) {
            eastl::
            bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
            ::set((bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                   *)(this + 0x180),uVar12,true);
          }
          if (uVar12 == 0xffff) break;
          uVar12 = uVar12 + 1;
          lVar10 = *(long *)(this + 0x3d0);
        }
        Font::SetupSupportedScriptSet((Font *)this);
        uVar3 = T2K_GetGlyphIndex(*(undefined8 *)(this + 0x3d0),0x5f,pOVar1);
        *(undefined2 *)(this + 0x20) = uVar3;
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0;
        eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>::pair
                  (apStack_220,(ushort *)&DAT_05766510,(GlyphMetrics *)&local_238);
        eastl::
        hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        ::insert((pair *)(this + 0xf0));
        uVar6 = 1;
        goto LAB_0536812c;
      }
    }
  }
  uVar6 = 0;
LAB_0536812c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* EA::Text::OutlineFont::Open(EA::IO::IStream*, int) */

OutlineFont __thiscall EA::Text::OutlineFont::Open(OutlineFont *this,IStream *param_1,int param_2)

{
  OutlineFont OVar1;
  int iVar2;
  long lVar3;
  
  if (this[0x169] != (OutlineFont)0x0) {
    return (OutlineFont)0x1;
  }
  if (param_1 != (IStream *)0x0) {
    if (*(code **)(*(long *)param_1 + 0x28) == IO::FixedMemoryStream::GetAccessFlags) {
      iVar2 = IO::FixedMemoryStream::GetAccessFlags();
    }
    else {
      iVar2 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
    }
    if (iVar2 != 0) {
      lVar3 = *(long *)(this + 0x178);
      if (lVar3 == 0) {
        lVar3 = CreateFaceData(*(ICoreAllocator **)(this + 8),param_1,(void *)0x0,0,param_2);
        *(long *)(this + 0x178) = lVar3;
        if (lVar3 == 0) goto LAB_053682dc;
      }
      Thread::Futex::Lock((Futex *)(lVar3 + 0x10));
      OVar1 = (OutlineFont)OpenInternal(this,param_2);
      if (OVar1 != (OutlineFont)0x0) {
        lVar3 = *(long *)param_1;
        *(IStream **)(this + 0x18) = param_1;
        (**(code **)(lVar3 + 0x10))(param_1);
        if (this[0x1b0] != (OutlineFont)0x0) {
          OTF::Load((OTF *)(this + 0x1b8),*(IStream **)(this + 0x18));
        }
        if (*(long *)(this + 0x178) != 0) {
          Thread::Futex::Unlock((Futex *)(*(long *)(this + 0x178) + 0x10));
          this[0x169] = OVar1;
          return OVar1;
        }
        goto LAB_053682f0;
      }
      if (*(long *)(this + 0x178) != 0) {
        Thread::Futex::Unlock((Futex *)(*(long *)(this + 0x178) + 0x10));
      }
    }
  }
LAB_053682dc:
  OVar1 = (OutlineFont)0x0;
  (**(code **)(*(long *)this + 0x40))(this);
LAB_053682f0:
  this[0x169] = OVar1;
  return OVar1;
}


/* EA::Text::OutlineFont::Open(void const*, unsigned int, int) */

OutlineFont __thiscall
EA::Text::OutlineFont::Open(OutlineFont *this,void *param_1,uint param_2,int param_3)

{
  OutlineFont OVar1;
  long lVar2;
  
  if (this[0x169] != (OutlineFont)0x0) {
    return (OutlineFont)0x1;
  }
  if (param_1 != (void *)0x0) {
    lVar2 = *(long *)(this + 0x178);
    if (lVar2 == 0) {
      lVar2 = CreateFaceData(*(ICoreAllocator **)(this + 8),(IStream *)0x0,param_1,param_2,param_3);
      *(long *)(this + 0x178) = lVar2;
      if (lVar2 == 0) goto LAB_0536843c;
    }
    Thread::Futex::Lock((Futex *)(lVar2 + 0x10));
    OVar1 = (OutlineFont)OpenInternal(this,param_3);
    if (*(long *)(this + 0x178) != 0) {
      Thread::Futex::Unlock((Futex *)(*(long *)(this + 0x178) + 0x10));
    }
    if (OVar1 != (OutlineFont)0x0) {
      this[0x169] = OVar1;
      return OVar1;
    }
  }
LAB_0536843c:
  (**(code **)(*(long *)this + 0x40))(this);
  this[0x169] = (OutlineFont)0x0;
  return (OutlineFont)0x0;
}


/* EA::Text::OutlineFont::SetAllocator(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::OutlineFont::SetAllocator(OutlineFont *this,ICoreAllocator *param_1)

{
  undefined8 uVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  
  eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> *)this,param_1);
  uVar1 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                           *)(this + 0xf0));
  FUN_05365048(uVar1,param_1);
  nop();
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(this_00);
  FUN_05365048(uVar1,param_1);
  OTF::SetAllocator((OTF *)(this + 0x1b8),param_1);
  return;
}

