// Class: EA::Text


/* EA::Text::GetAllocator() */

undefined8 EA::Text::GetAllocator(void)

{
  return gpCoreAllocator;
}


/* EA::Text::SetAllocator(EA::Allocator::ICoreAllocator*) */

void EA::Text::SetAllocator(ICoreAllocator *param_1)

{
  gpCoreAllocator = param_1;
  return;
}


/* EA::Text::SetAssertionFailureFunction(void (*)(char const*, void*), void*) */

void EA::Text::SetAssertionFailureFunction(_func_void_char_ptr_void_ptr *param_1,void *param_2)

{
  gpAssertionFailureFunction = param_1;
  gpAssertionFailureFunctionContext = param_2;
  return;
}


/* EA::Text::AssertionFailure(char const*) */

char * EA::Text::AssertionFailure(char *param_1)

{
  if (gpAssertionFailureFunction != (code *)0x0) {
    param_1 = (char *)(*gpAssertionFailureFunction)(param_1,gpAssertionFailureFunctionContext);
  }
  return param_1;
}


/* EA::Text::TEMPNAMEPLACEHOLDERVALUE(EA::Text::Point const&, EA::Text::Point const&) */

bool EA::Text::operator<(Point *param_1,Point *param_2)

{
  if (*(float *)param_1 != *(float *)param_2) {
    return *(float *)param_1 < *(float *)param_2;
  }
  return *(float *)(param_1 + 4) < *(float *)(param_2 + 4);
}


/* EA::Text::TEMPNAMEPLACEHOLDERVALUE(EA::Text::Rectangle const&, EA::Text::Rectangle const&) */

bool EA::Text::operator<(Rectangle *param_1,Rectangle *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)param_1;
  fVar1 = *(float *)param_2;
  if (fVar2 == fVar1) {
    fVar2 = *(float *)(param_1 + 4);
    fVar1 = *(float *)(param_2 + 4);
    if (fVar2 == fVar1) {
      fVar2 = *(float *)(param_1 + 8);
      fVar1 = *(float *)(param_2 + 8);
      if (fVar2 == fVar1) {
        fVar2 = *(float *)(param_1 + 0xc);
        fVar1 = *(float *)(param_2 + 0xc);
      }
    }
  }
  return fVar2 < fVar1;
}


/* EA::Text::GetFontServer(bool) */

FontServer * EA::Text::GetFontServer(bool param_1)

{
  FontServer *this;
  
  if ((param_1) && (DAT_06bc53f0 == (FontServer *)0x0)) {
    if (DAT_06bc5400 == (FontServer *)0x0) {
      if (gpCoreAllocator == 0) {
        gpCoreAllocator = Allocator::ICoreAllocator::GetDefaultAllocator();
      }
      this = (FontServer *)FUN_0535713c();
      FontServer::FontServer(this,(ICoreAllocator *)0x0);
      DAT_06bc5400 = this;
    }
    DAT_06bc53f0 = DAT_06bc5400;
    (**(code **)(*(long *)DAT_06bc5400 + 0x10))(DAT_06bc5400);
  }
  return DAT_06bc53f0;
}


/* EA::Text::GetDefaultLayout(bool) */

void EA::Text::GetDefaultLayout(bool param_1)

{
  int iVar1;
  
  if (((DAT_06bc5ac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06bc5ac0), iVar1 != 0)) {
    Layout::Layout((Layout *)&DAT_06bc5408);
    __cxa_guard_release(&DAT_06bc5ac0);
    __cxa_atexit(Layout::~Layout,&DAT_06bc5408,&DAT_06a88000);
  }
  if ((param_1) && (DAT_06bc5b08 == (undefined *)0x0)) {
    DAT_06bc5b08 = &DAT_06bc5408;
  }
  return;
}


/* EA::Text::SetDefaultLayout(EA::Text::Layout const*) */

undefined8 EA::Text::SetDefaultLayout(Layout *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_06bc5b08;
  DAT_06bc5b08 = param_1;
  return uVar1;
}


/* EA::Text::GetStyleManager(bool) */

void EA::Text::GetStyleManager(bool param_1)

{
  if ((param_1) && (DAT_06bc53e8 == 0)) {
    DAT_06bc53e8 = FUN_05357070();
  }
  return;
}


/* EA::Text::SetStyleManager(EA::Text::StyleManager*) */

undefined8 EA::Text::SetStyleManager(StyleManager *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_06bc53e8;
  DAT_06bc53e8 = param_1;
  return uVar1;
}


/* EA::Text::ShutdownStyleManager() */

void EA::Text::ShutdownStyleManager(void)

{
  StyleManager *this;
  
  this = (StyleManager *)FUN_05357070();
  if (this != (StyleManager *)0x0) {
    StyleManager::Shutdown(this);
    return;
  }
  return;
}


/* EA::Text::SetFontServer(EA::Text::FontServer*) */

Font * EA::Text::SetFontServer(FontServer *param_1)

{
  Font *pFVar1;
  bool bVar2;
  
  pFVar1 = (Font *)DAT_06bc53f0;
  if (DAT_06bc53f0 != param_1) {
    bVar2 = DAT_06bc53f0 == (FontServer *)DAT_06bc5400;
    DAT_06bc53f0 = param_1;
    if ((bVar2) && (DAT_06bc5400 != (Font *)0x0)) {
      (**(code **)(*(long *)DAT_06bc5400 + 0x28))();
      Allocator::detail::DeleteObject<EA::Text::Font>(gpCoreAllocator,DAT_06bc5400);
      DAT_06bc5400 = (Font *)0x0;
    }
  }
  return pFVar1;
}


/* EA::Text::ShutdownFontServer() */

void EA::Text::ShutdownFontServer(void)

{
  if (DAT_06bc5400 != (Font *)0x0) {
    if (DAT_06bc5400 == DAT_06bc53f0) {
      DAT_06bc53f0 = (Font *)0x0;
    }
    (**(code **)(*(long *)DAT_06bc5400 + 0x28))();
    Allocator::detail::DeleteObject<EA::Text::Font>(gpCoreAllocator,DAT_06bc5400);
    DAT_06bc5400 = (Font *)0x0;
  }
  return;
}


/* EA::Text::Shutdown() */

void EA::Text::Shutdown(void)

{
  OutlineFont::ResetEffectBitmaps();
  ShutdownFontServer();
  ShutdownLayout();
  ShutdownStyleManager();
  return;
}


/* EA::Text::Text32PtrToText16Ptr(wchar_t const*) */

void __thiscall EA::Text::Text32PtrToText16Ptr(Text *this,wchar_t *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_05357104(DAT_06bc5a98,DAT_06bc5aa8);
  if (lVar2 == 0) {
    eastl::basic_string<char16_t,eastl::allocator>::resize
              ((basic_string<char16_t,eastl::allocator> *)&DAT_06bc5a98,0x400);
  }
  if (((DAT_06bc5a90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06bc5a90), iVar1 != 0)) {
    eastl::basic_string<char16_t,eastl::allocator>::basic_string
              ((basic_string<char16_t,eastl::allocator> *)&DAT_06bc5ad8);
    __cxa_guard_release(&DAT_06bc5a90);
    __cxa_atexit(eastl::basic_string<char16_t,eastl::allocator>::~basic_string,&DAT_06bc5ad8,
                 &DAT_06a88000);
  }
  StdC::Strlcpy<eastl::basic_string<char16_t,eastl::allocator>,wchar_t>
            ((basic_string *)&DAT_06bc5ad8,(wchar_t *)this,0xffffffffffffffff);
  FUN_05357100(DAT_06bc5ad8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::CreateInstructionList(char const*, EA::Text::EffectsInstructionWord*, unsigned int,
   int*) */

void EA::Text::CreateInstructionList
               (char *param_1,EffectsInstructionWord *param_2,uint param_3,int *param_4)

{
  char *pcVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  long lVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  char *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  sVar8 = strlen(param_1);
  pcVar1 = param_1 + sVar8;
  iVar12 = 2;
  uVar15 = 0;
  local_d8 = param_1;
  do {
    local_d0 = local_d8;
    iVar11 = iVar12 + -1;
    iVar7 = 0;
    lVar9 = StdC::GetTextLine(local_d8,pcVar1,&local_d8);
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    pcVar10 = (char *)&local_c8;
    do {
      cVar4 = StdC::SplitTokenSeparated(local_d0,lVar9 - (long)local_d0,' ',pcVar10,0x20,&local_d0);
      iVar13 = (int)uVar15;
      if (cVar4 == '\0') {
        if (iVar7 == 0) goto LAB_05357b74;
        iVar6 = StdC::Stricmp((char *)&local_c8,"SetExpansion");
        if (iVar6 != 0) goto LAB_05357c64;
        if (2 < iVar7) {
          iVar11 = -1;
        }
        goto LAB_05357bac;
      }
      iVar7 = iVar7 + 1;
      pcVar10 = pcVar10 + 0x20;
    } while (iVar7 != 6);
    iVar6 = StdC::Stricmp((char *)&local_c8,"SetExpansion");
    if (iVar6 == 0) {
      iVar11 = -1;
LAB_05357bac:
      *(undefined4 *)(param_2 + uVar15 * 4) = 1;
      uVar15 = (ulong)(iVar13 + 3);
      uVar5 = StdC::AtoU32((char *)&local_a8);
      *(undefined4 *)(param_2 + (ulong)(iVar13 + 1) * 4) = uVar5;
      uVar5 = StdC::AtoU32((char *)&local_88);
      *(undefined4 *)(param_2 + (ulong)(iVar13 + 2) * 4) = uVar5;
      goto LAB_05357be4;
    }
LAB_05357c64:
    iVar6 = StdC::Stricmp((char *)&local_c8,"SetGlyphMinAlpha");
    if (iVar6 == 0) {
      *(undefined4 *)(param_2 + uVar15 * 4) = 2;
      if (iVar7 != 1) {
        iVar11 = -1;
      }
      uVar14 = iVar13 + 2;
      uVar15 = (ulong)uVar14;
      uVar5 = StdC::AtoU32((char *)&local_a8);
      *(undefined4 *)(param_2 + (ulong)(iVar13 + 1) * 4) = uVar5;
joined_r0x05357ca8:
      if (local_d8 == pcVar1) {
        if (iVar11 != -1) {
          uVar14 = 0;
        }
        uVar15 = (ulong)uVar14;
        goto LAB_05357bfc;
      }
      if (iVar11 != -1) {
LAB_05357bf8:
        uVar15 = 0;
        goto LAB_05357bfc;
      }
    }
    else {
      iVar6 = StdC::Stricmp((char *)&local_c8,"SetGlyphColor");
      if (iVar6 == 0) {
        *(undefined4 *)(param_2 + uVar15 * 4) = 3;
        if (iVar7 != 1) {
          iVar11 = -1;
        }
        uVar15 = (ulong)(iVar13 + 2);
        uVar5 = StdC::StrtoU32((char *)&local_a8,(char **)0x0,0x10);
        *(undefined4 *)(param_2 + (ulong)(iVar13 + 1) * 4) = uVar5;
        goto LAB_05357be4;
      }
      iVar6 = StdC::Stricmp((char *)&local_c8,"SetGlyphOffset");
      if (iVar6 == 0) {
        bVar3 = iVar7 + -3 < 0;
        lVar9 = (ulong)(iVar13 + 1) << 2;
        uVar5 = 4;
LAB_05357d30:
        if (bVar3 == SBORROW4(iVar7,3)) {
          iVar11 = -1;
        }
        *(undefined4 *)(param_2 + uVar15 * 4) = uVar5;
        uVar15 = (ulong)(iVar13 + 3);
        uVar5 = StdC::AtoI32((char *)&local_a8);
        *(undefined4 *)(param_2 + lVar9) = uVar5;
        uVar5 = StdC::AtoI32((char *)&local_88);
        *(undefined4 *)(param_2 + (ulong)(iVar13 + 2) * 4) = uVar5;
LAB_05357be4:
        uVar14 = (uint)uVar15;
        goto joined_r0x05357ca8;
      }
      iVar6 = StdC::Stricmp((char *)&local_c8,"SetGlyphHSpace");
      if (iVar6 == 0) {
        bVar3 = iVar7 + -3 < 0;
        lVar9 = (ulong)(iVar13 + 1) << 2;
        uVar5 = 5;
        goto LAB_05357d30;
      }
      iVar6 = StdC::Stricmp((char *)&local_c8,"SetGlyphVSpace");
      if (iVar6 == 0) {
        bVar3 = iVar7 + -3 < 0;
        lVar9 = (ulong)(iVar13 + 1) << 2;
        uVar5 = 6;
        goto LAB_05357d30;
      }
      iVar6 = StdC::Stricmp((char *)&local_c8,"SetGlyphSmooth");
      if (iVar6 == 0) {
        *(undefined4 *)(param_2 + uVar15 * 4) = 7;
        if (iVar7 != 1) {
          iVar11 = -1;
        }
        uVar15 = (ulong)(iVar13 + 2);
        iVar7 = StdC::AtoU32((char *)&local_a8);
        *(uint *)(param_2 + (ulong)(iVar13 + 1) * 4) = (uint)(iVar7 != 0);
        goto LAB_05357be4;
      }
      iVar6 = StdC::Stricmp((char *)&local_c8,"SetGlyphBrush");
      if (iVar6 == 0) {
        if (4 < iVar7) {
          iVar11 = -1;
        }
        *(undefined4 *)(param_2 + uVar15 * 4) = 8;
        uVar5 = StdC::AtoU32((char *)&local_a8);
        uVar15 = (ulong)(iVar13 + 5);
        *(undefined4 *)(param_2 + (ulong)(iVar13 + 1) * 4) = uVar5;
        uVar5 = StdC::AtoU32((char *)&local_88);
        *(undefined4 *)(param_2 + (ulong)(iVar13 + 2) * 4) = uVar5;
        dVar2 = (double)StdC::Atof((char *)&local_68);
        *(float *)(param_2 + (ulong)(iVar13 + 3) * 4) = (float)dVar2;
        dVar2 = (double)StdC::Atof((char *)&local_48);
        *(float *)(param_2 + (ulong)(iVar13 + 4) * 4) = (float)dVar2;
        goto LAB_05357be4;
      }
      iVar6 = StdC::Stricmp((char *)&local_c8,"SetTargetImage");
      if (iVar6 == 0) {
        uVar5 = 9;
LAB_05357ec4:
        if (iVar7 != 1) {
          iVar11 = -1;
        }
        *(undefined4 *)(param_2 + uVar15 * 4) = uVar5;
        uVar15 = (ulong)(iVar13 + 2);
        uVar5 = StdC::AtoU32((char *)&local_a8);
        *(undefined4 *)(param_2 + (ulong)(iVar13 + 1) * 4) = uVar5;
        goto LAB_05357be4;
      }
      iVar6 = StdC::Stricmp((char *)&local_c8,"SetTargetMask");
      if (iVar6 == 0) {
        uVar5 = 10;
        goto LAB_05357ec4;
      }
      iVar6 = StdC::Stricmp((char *)&local_c8,"DrawGlyphSmearOutline");
      if (iVar6 != 0) {
        iVar6 = StdC::Stricmp((char *)&local_c8,"DrawGlyphBrushOutline");
        if (iVar6 == 0) {
          *(undefined4 *)(param_2 + uVar15 * 4) = 0xc;
          uVar15 = (ulong)(iVar13 + 1);
          goto LAB_05357b74;
        }
        iVar6 = StdC::Stricmp((char *)&local_c8,"DrawGlyph");
        if (iVar6 == 0) {
          *(undefined4 *)(param_2 + uVar15 * 4) = 0xd;
          uVar15 = (ulong)(iVar13 + 1);
          goto LAB_05357b74;
        }
        iVar6 = StdC::Stricmp((char *)&local_c8,"Clear");
        if (iVar6 == 0) {
          *(undefined4 *)(param_2 + uVar15 * 4) = 0xe;
          uVar15 = (ulong)(iVar13 + 1);
          goto LAB_05357b74;
        }
        iVar6 = StdC::Stricmp((char *)&local_c8,"ApplyCurve");
        if (iVar6 == 0) {
          *(undefined4 *)(param_2 + uVar15 * 4) = 0xf;
          if (2 < iVar7) {
            iVar11 = -1;
          }
          uVar15 = (ulong)(iVar13 + 3);
          uVar5 = StdC::AtoU32((char *)&local_a8);
          *(undefined4 *)(param_2 + (ulong)(iVar13 + 1) * 4) = uVar5;
          dVar2 = (double)StdC::Atof((char *)&local_88);
          *(float *)(param_2 + (ulong)(iVar13 + 2) * 4) = (float)dVar2;
          goto LAB_05357be4;
        }
        iVar6 = StdC::Stricmp((char *)&local_c8,"ApplyBoxBlur");
        if (iVar6 == 0) {
          if (3 < iVar7) {
            iVar11 = -1;
          }
          *(undefined4 *)(param_2 + uVar15 * 4) = 0x10;
          dVar2 = (double)StdC::Atof((char *)&local_a8);
          uVar15 = (ulong)(iVar13 + 4);
          *(float *)(param_2 + (ulong)(iVar13 + 1) * 4) = (float)dVar2;
          dVar2 = (double)StdC::Atof((char *)&local_88);
          *(float *)(param_2 + (ulong)(iVar13 + 2) * 4) = (float)dVar2;
          uVar5 = StdC::AtoU32((char *)&local_68);
          *(undefined4 *)(param_2 + (ulong)(iVar13 + 3) * 4) = uVar5;
          goto LAB_05357be4;
        }
        iVar6 = StdC::Stricmp((char *)&local_c8,"Merge");
        if (iVar6 == 0) {
          *(undefined4 *)(param_2 + uVar15 * 4) = 0x11;
          uVar15 = (ulong)(iVar13 + 1);
          goto LAB_05357b74;
        }
        iVar6 = StdC::Stricmp((char *)&local_c8,"CallUser");
        if (iVar6 == 0) {
          *(undefined4 *)(param_2 + uVar15 * 4) = 0x12;
          if (iVar7 != 1) {
            iVar11 = -1;
          }
          uVar15 = (ulong)(iVar13 + 2);
          uVar5 = StdC::StrtoU32((char *)&local_a8,(char **)0x0,0);
          *(undefined4 *)(param_2 + (ulong)(iVar13 + 1) * 4) = uVar5;
          goto LAB_05357be4;
        }
        pcVar10 = (char *)StdC::Strstr((char *)&local_c8,"//");
        if ((char *)&local_c8 == pcVar10) goto LAB_05357b74;
        goto LAB_05357bf8;
      }
      *(undefined4 *)(param_2 + uVar15 * 4) = 0xb;
      uVar15 = (ulong)(iVar13 + 1);
LAB_05357b74:
      if (local_d8 == pcVar1) {
        iVar11 = -1;
LAB_05357bfc:
        if (param_4 != (int *)0x0) {
          *param_4 = iVar11;
        }
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar15);
      }
    }
    iVar12 = iVar12 + 1;
  } while( true );
}


/* EA::Text::CreateInstructionList(char const*, EA::Text::EffectsState&, int*) */

void EA::Text::CreateInstructionList(char *param_1,EffectsState *param_2,int *param_3)

{
  undefined4 uVar1;
  
  EffectsState::ClearInstructionList(param_2);
  EffectsState::ResetParameters(param_2);
  uVar1 = CreateInstructionList(param_1,(EffectsInstructionWord *)(param_2 + 0x40),0x28,param_3);
  *(undefined4 *)(param_2 + 0xe0) = uVar1;
  return;
}


/* EA::Text::GetSystemFontDirectory(char16_t*, unsigned int) */

undefined1  [16] EA::Text::GetSystemFontDirectory(wchar16 *param_1,uint param_2)

{
  if (param_1 != (wchar16 *)0x0) {
    *param_1 = L'\0';
  }
  return ZEXT416(param_2) << 0x40;
}


/* EA::Text::GetFontTypeFromFilePath(char16_t const*) */

undefined4 EA::Text::GetFontTypeFromFilePath(wchar16 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  wchar16 *pwVar3;
  
  pwVar3 = (wchar16 *)IO::Path::GetFileExtension(param_1,(wchar16 *)0x0);
  iVar1 = StdC::Stricmp(pwVar3,L".bmpFont");
  uVar2 = 1;
  if (iVar1 != 0) {
    iVar1 = StdC::Stricmp(pwVar3,L".polygonFont");
    uVar2 = 4;
    if (iVar1 != 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GetBaselineAndDescent(EA::Text::GlyphAttributes*, unsigned int,
   EA::Text::LayoutMetrics*) */

void EA::Text::GetBaselineAndDescent(GlyphAttributes *param_1,uint param_2,LayoutMetrics *param_3)

{
  GlyphAttributes *pGVar1;
  long *plVar2;
  long *plVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = param_1 + (ulong)param_2 * 0x30;
  FontMetrics::FontMetrics((FontMetrics *)&local_50);
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  plVar2 = (long *)0x0;
  do {
    if (pGVar1 <= param_1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    plVar3 = *(long **)param_1;
    if ((plVar2 == (long *)0x0) || (plVar3 != plVar2)) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x68))(plVar3,(FontMetrics *)&local_50);
        plVar2 = plVar3;
        goto LAB_05361e7c;
      }
      local_40._4_4_ = 0.0;
      uStack_38._4_4_ = 0.0;
      local_10 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      uStack_28 = 0;
      local_20 = 0;
      uStack_18 = 0;
    }
    else {
LAB_05361e7c:
      plVar3 = plVar2;
    }
    if (*(float *)(param_3 + 0x10) < uStack_38._4_4_) {
      *(float *)(param_3 + 0x10) = uStack_38._4_4_;
    }
    if (local_40._4_4_ < *(float *)(param_3 + 0x14)) {
      *(float *)(param_3 + 0x14) = local_40._4_4_;
    }
    param_1 = param_1 + 0x30;
    plVar2 = plVar3;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GetWord(EA::Text::TextRunIterator&, char16_t&) */

void EA::Text::GetWord(TextRunIterator *param_1,wchar16 *param_2)

{
  char cVar1;
  wchar16 wVar2;
  int iVar3;
  uint uVar4;
  LineBreakIterator aLStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_05361860(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  if (cVar1 == '\0') {
    LineBreakIterator::LineBreakIterator(aLStack_50,param_1,(LayoutContext *)0x0);
    iVar3 = FUN_05361898(*(undefined4 *)(param_1 + 0x28));
    uVar4 = LineBreakIterator::GetNextLineBreak(aLStack_50,0xc);
    wVar2 = TextRunIterator::operator[](param_1,uVar4 - 1);
    *param_2 = wVar2;
    TextRunIterator::SetPosition(param_1,uVar4);
    iVar3 = uVar4 - iVar3;
  }
  else {
    *param_2 = L'\0';
    iVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* EA::Text::IsCharNewline(char16_t) */

bool EA::Text::IsCharNewline(wchar16 param_1)

{
  return param_1 == L'\x2029' || param_1 == L'\n';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GetLayoutLineAnalysisArray() */

void EA::Text::GetLayoutLineAnalysisArray(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06bdfce0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06bdfce0), iVar2 != 0)) {
    std::_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::_Vector_base
              ((_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&DAT_06bdfcb0)
    ;
    __cxa_guard_release(&DAT_06bdfce0);
    __cxa_atexit(eastl::vector<EA::Text::Analysis,eastl::allocator>::~vector,&DAT_06bdfcb0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06bdfcb0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GetParagraphAnalysisArray() */

void EA::Text::GetParagraphAnalysisArray(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06bdfc98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06bdfc98), iVar2 != 0)) {
    std::_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::_Vector_base
              ((_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&DAT_06bc5c30)
    ;
    __cxa_guard_release(&DAT_06bdfc98);
    __cxa_atexit(eastl::vector<EA::Text::Analysis,eastl::allocator>::~vector,&DAT_06bc5c30,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06bc5c30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GetLineBreakAnalysysArray() */

void EA::Text::GetLineBreakAnalysysArray(void)

{
  long lVar1;
  int iVar2;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06bc5c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06bc5c28), iVar2 != 0)) {
    std::_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::_Vector_base
              ((_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&DAT_06bc5c50)
    ;
    __cxa_guard_release(&DAT_06bc5c28);
    __cxa_atexit(eastl::vector<EA::Text::Analysis,eastl::allocator>::~vector,&DAT_06bc5c50,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06bc5c50);
}


/* EA::Text::ShutdownLayout() */

void EA::Text::ShutdownLayout(void)

{
  vector<EA::Text::Analysis,eastl::allocator> *pvVar1;
  
  pvVar1 = (vector<EA::Text::Analysis,eastl::allocator> *)GetLayoutLineAnalysisArray();
  eastl::vector<EA::Text::Analysis,eastl::allocator>::set_capacity(pvVar1,0);
  pvVar1 = (vector<EA::Text::Analysis,eastl::allocator> *)GetLineBreakAnalysysArray();
  eastl::vector<EA::Text::Analysis,eastl::allocator>::set_capacity(pvVar1,0);
  pvVar1 = (vector<EA::Text::Analysis,eastl::allocator> *)GetParagraphAnalysisArray();
  eastl::vector<EA::Text::Analysis,eastl::allocator>::set_capacity(pvVar1,0);
  return;
}


/* EA::Text::IsCharZeroWidth(char16_t) */

bool EA::Text::IsCharZeroWidth(wchar16 param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = (uint)(ushort)param_1;
  if ((uVar2 & 0xffffff80) == 0x2000) {
    if (uVar2 - 0x200b < 5 || uVar2 - 0x202a < 5) {
      return true;
    }
    bVar1 = uVar2 - 0x2060 < 4;
    if (param_1 == L'\x2028' || bVar1) {
      return param_1 == L'\x2028' || bVar1;
    }
  }
  return param_1 == L'\xfeff' || (param_1 == L'͏' || param_1 == L'­');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GetScriptProperties(EA::Text::Script, EA::Text::ScriptProperties*, bool) */

void EA::Text::GetScriptProperties(undefined4 param_1,uint *param_2,undefined1 param_3)

{
  long lVar1;
  undefined2 uVar2;
  uint3 uVar3;
  undefined4 local_10;
  
  lVar1 = ___stack_chk_guard;
  local_10._0_2_ = CONCAT11(0x82,(byte)param_1 & 0x7f);
  uVar2 = (ushort)local_10;
  local_10._0_3_ = CONCAT12(2,(ushort)local_10);
  uVar3 = (uint3)local_10;
  local_10 = (uint)(uint3)local_10;
  switch(param_1) {
  case 2:
    param_3 = 1;
    local_10._0_2_ = CONCAT11(2,(byte)param_1) & 0xff7f | 0x1800;
    local_10 = CONCAT12(2,(ushort)local_10) | 0x50000;
    break;
  default:
    local_10 = CONCAT31(uVar3 >> 8,0x1e);
    break;
  case 0xc:
  case 0x12:
  case 0x1e:
  case 0x2c:
    param_3 = 1;
    break;
  case 0xe:
    param_3 = 1;
    local_10 = CONCAT12(2,uVar2) | 0x800;
    break;
  case 0x15:
  case 0x16:
  case 0x19:
  case 0x1b:
    param_3 = 1;
    local_10 = CONCAT12(2,uVar2) | 0x2000;
    break;
  case 0x18:
    param_3 = 1;
    local_10 = CONCAT12(2,uVar2) & 0xffff7fff | 0x1800;
    break;
  case 0x32:
    param_3 = 1;
    local_10._0_3_ = CONCAT12(10,uVar2) | 0x4800;
    local_10 = (uint)(uint3)local_10;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = local_10;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GetScriptFromLocale(char16_t const*, int) */

void EA::Text::GetScriptFromLocale(wchar16 *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  wchar16 wVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  char local_10 [8];
  long local_8;
  
  puVar2 = gpScriptLocaleEntryArray;
  local_8 = ___stack_chk_guard;
  if (param_2 < 3) {
    wVar3 = *param_1;
    uVar5 = (uint)(ushort)wVar3;
    if (wVar3 == L'e') {
      wVar3 = param_1[1];
      if ((wVar3 == L'n') && ((param_1[2] == L'\0' || (param_1[2] == L'-')))) {
        uVar5 = 0x1e;
        if (param_2 != 0) {
          uVar5 = 0xffffffff;
        }
        uVar6 = (ulong)uVar5;
        goto LAB_0536c214;
      }
      local_10[0] = 'e';
LAB_0536c188:
      if (wVar3 == L'\0') {
        uVar5 = 1;
      }
      else {
        local_10[1] = (char)wVar3;
        if ((ushort)((wVar3 & 0xffU) - 0x41U & 0xffU) < 0x1a) {
          local_10[1] = local_10[1] + ' ';
        }
        uVar5 = 2;
      }
    }
    else if (wVar3 != L'\0') {
      local_10[0] = (char)wVar3;
      wVar3 = param_1[1];
      if ((byte)(local_10[0] + 0xbfU) < 0x1a) {
        local_10[0] = local_10[0] + ' ';
      }
      goto LAB_0536c188;
    }
    local_10[(int)uVar5] = '\0';
    if (-1 < gnScriptLocaleEntryArrayCount) {
      iVar8 = 0;
      iVar7 = gnScriptLocaleEntryArrayCount;
      do {
        while( true ) {
          iVar1 = iVar8 + iVar7 >> 1;
          iVar4 = strcmp(puVar2 + (long)iVar1 * 8,local_10);
          if (iVar4 == 0) {
            uVar6 = (ulong)(char)(puVar2 + (long)iVar1 * 8)[(long)param_2 + 5];
            goto LAB_0536c214;
          }
          if (0 < iVar4) break;
          iVar8 = iVar1 + 1;
          if (iVar7 < iVar8) goto LAB_0536c210;
        }
        iVar7 = iVar1 + -1;
      } while (iVar8 <= iVar7);
    }
  }
LAB_0536c210:
  uVar6 = 0xffffffff;
LAB_0536c214:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* EA::Text::LocaleUsesScript(char16_t const*, EA::Text::Script) */

undefined8 EA::Text::LocaleUsesScript(wchar16 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = GetScriptFromLocale(param_1,iVar2);
    if (iVar1 == -1) {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar1 != param_2);
  return 1;
}


/* EA::Text::GetScriptFromChar(char16_t) */

long EA::Text::GetScriptFromChar(wchar16 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = 8;
  if (0xfe < (ushort)param_1) {
    iVar2 = 0x5f;
  }
  iVar4 = 0;
  do {
    iVar1 = iVar4 + iVar2 >> 1;
    lVar3 = (long)iVar1 * 6;
    if ((uint)(ushort)param_1 < (uint)*(ushort *)(gScriptTableEntryArray + lVar3)) {
      iVar2 = iVar1 + -1;
    }
    else {
      iVar4 = iVar1 + 1;
      if ((uint)(ushort)param_1 <
          (uint)*(ushort *)(gScriptTableEntryArray + lVar3) +
          (uint)*(ushort *)(gScriptTableEntryArray + lVar3 + 2)) {
        return (long)(char)gScriptTableEntryArray[lVar3 + 4];
      }
    }
  } while (iVar4 <= iVar2);
  return 0;
}


/* EA::Text::GetLayoutScriptFromChar(char16_t) */

undefined8 EA::Text::GetLayoutScriptFromChar(wchar16 param_1)

{
  undefined8 uVar1;
  
  if (param_1 != L'ـ') {
    uVar1 = GetScriptFromChar(param_1);
    return uVar1;
  }
  return 1;
}


/* EA::Text::GetLocaleFromScript(EA::Text::Script, bool) */

undefined * EA::Text::GetLocaleFromScript(undefined4 param_1,char param_2)

{
  undefined *puVar1;
  
  switch(param_1) {
  case 2:
    return &DAT_05766630;
  case 0xc:
    return &DAT_05766600;
  case 0xe:
    return &DAT_057665a0;
  case 0x12:
    return &DAT_057665b0;
  case 0x15:
  case 0x19:
  case 0x1b:
    return &DAT_05766620;
  case 0x16:
    return &DAT_057665c0;
  case 0x18:
    return &DAT_057665d0;
  case 0x1e:
    return &DAT_057665f0;
  case 0x2c:
    return &DAT_05766610;
  case 0x32:
    return &DAT_057665e0;
  }
  puVar1 = &DAT_057665f0;
  if (param_2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}


/* EA::Text::TEMPNAMEPLACEHOLDERVALUE(EA::Text::FontStyle const&, EA::Text::FontStyle const&) */

undefined8 EA::Text::operator==(FontStyle *param_1,FontStyle *param_2)

{
  FontStyle *pFVar1;
  int iVar2;
  undefined8 uVar3;
  FontStyle *pFVar4;
  
  if ((((((*(float *)(param_1 + 0x200) == *(float *)(param_2 + 0x200)) &&
         (*(int *)(param_1 + 0x204) == *(int *)(param_2 + 0x204))) &&
        (*(float *)(param_1 + 0x208) == *(float *)(param_2 + 0x208))) &&
       ((*(int *)(param_1 + 0x20c) == *(int *)(param_2 + 0x20c) &&
        (*(int *)(param_1 + 0x210) == *(int *)(param_2 + 0x210))))) &&
      ((*(int *)(param_1 + 0x214) == *(int *)(param_2 + 0x214) &&
       ((*(int *)(param_1 + 0x218) == *(int *)(param_2 + 0x218) &&
        (*(float *)(param_1 + 0x21c) == *(float *)(param_2 + 0x21c))))))) &&
     (*(float *)(param_1 + 0x220) == *(float *)(param_2 + 0x220))) {
    pFVar4 = param_1;
    do {
      pFVar1 = pFVar4 + 0x40;
      iVar2 = StdC::Strcmp((wchar16 *)pFVar4,(wchar16 *)param_2);
      if (iVar2 != 0) goto LAB_0536c6a4;
      pFVar4 = pFVar1;
      param_2 = param_2 + 0x40;
    } while (pFVar1 != param_1 + 0x200);
    uVar3 = 1;
  }
  else {
LAB_0536c6a4:
    uVar3 = 0;
  }
  return uVar3;
}


/* EA::Text::TEMPNAMEPLACEHOLDERVALUE(EA::Text::TextStyle const&, EA::Text::TextStyle const&) */

bool EA::Text::operator==(TextStyle *param_1,TextStyle *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = operator==((FontStyle *)param_1,(FontStyle *)param_2);
  bVar1 = false;
  if (cVar2 != '\0') {
    iVar3 = StdC::Strcmp((wchar16 *)(param_1 + 0x224),(wchar16 *)(param_2 + 0x224));
    bVar1 = false;
    if (((((((iVar3 == 0) && (*(int *)(param_1 + 0x264) == *(int *)(param_2 + 0x264))) &&
           (*(int *)(param_1 + 0x268) == *(int *)(param_2 + 0x268))) &&
          (((*(int *)(param_1 + 0x26c) == *(int *)(param_2 + 0x26c) &&
            (*(int *)(param_1 + 0x27c) == *(int *)(param_2 + 0x27c))) &&
           ((*(int *)(param_1 + 0x280) == *(int *)(param_2 + 0x280) &&
            ((*(int *)(param_1 + 0x284) == *(int *)(param_2 + 0x284) &&
             (*(int *)(param_1 + 0x288) == *(int *)(param_2 + 0x288))))))))) &&
         ((*(int *)(param_1 + 0x28c) == *(int *)(param_2 + 0x28c) &&
          (((*(int *)(param_1 + 0x290) == *(int *)(param_2 + 0x290) &&
            (*(int *)(param_1 + 0x294) == *(int *)(param_2 + 0x294))) &&
           (*(int *)(param_1 + 0x298) == *(int *)(param_2 + 0x298))))))) &&
        (((*(int *)(param_1 + 0x29c) == *(int *)(param_2 + 0x29c) &&
          (*(int *)(param_1 + 0x2a0) == *(int *)(param_2 + 0x2a0))) &&
         (((*(int *)(param_1 + 0x2a4) == *(int *)(param_2 + 0x2a4) &&
           ((*(int *)(param_1 + 0x2a8) == *(int *)(param_2 + 0x2a8) &&
            (*(float *)(param_1 + 0x2ac) == *(float *)(param_2 + 0x2ac))))) &&
          (*(float *)(param_1 + 0x2b0) == *(float *)(param_2 + 0x2b0))))))) &&
       (((*(float *)(param_1 + 0x2b4) == *(float *)(param_2 + 0x2b4) &&
         (*(float *)(param_1 + 0x2b8) == *(float *)(param_2 + 0x2b8))) &&
        (*(int *)(param_1 + 0x274) == *(int *)(param_2 + 0x274))))) {
      bVar1 = *(int *)(param_1 + 0x278) == *(int *)(param_2 + 0x278);
    }
  }
  return bVar1;
}


/* EA::Text::GetStyleId(char const*) */

uint EA::Text::GetStyleId(char *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != (char *)0x0) {
    uVar2 = (uint)(byte)*param_1;
    uVar1 = 0;
    if (*param_1 != 0) {
      uVar1 = 0x811c9dc5;
      do {
        param_1 = param_1 + 1;
        uVar1 = uVar2 ^ uVar1 * 0x1000193;
        uVar2 = (uint)(byte)*param_1;
      } while (uVar2 != 0);
    }
    return uVar1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::ParseStyleText(char const*&, char*, unsigned int&, EA::Text::TextStyle&, bool
   (*)(unsigned int, EA::Text::TextStyle&, void*), void*, void (*)(char const*, void*), void*) */

void EA::Text::ParseStyleText
               (char **param_1,char *param_2,uint *param_3,TextStyle *param_4,
               _func_bool_uint_TextStyle_ptr_void_ptr *param_5,void *param_6,
               _func_void_char_ptr_void_ptr *param_7,void *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  char *local_6d0;
  TextStyle aTStack_6c8 [62];
  undefined2 auStack_68a [225];
  float local_4c8;
  undefined4 local_4c4;
  float local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  uint local_460;
  uint local_45c;
  uint local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  float local_41c;
  float local_418;
  float local_414;
  float local_410;
  char local_408;
  char acStack_407 [255];
  char acStack_308 [256];
  char acStack_208 [256];
  char acStack_108 [256];
  long local_8;
  
  cVar11 = '\0';
  local_8 = ___stack_chk_guard;
  TextStyle::TextStyle(aTStack_6c8);
LAB_0536d13c:
  cVar9 = Parse::GetTextLine(param_1,&local_408);
  do {
    cVar10 = '\0';
    if (cVar9 == '\0') {
LAB_0536d188:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(cVar10);
      }
      return;
    }
    Parse::StripSpace(&local_408);
    if (local_408 != '@') {
      cVar10 = Parse::IsUsableLine(&local_408);
      if (cVar10 != '\0') {
        if (cVar11 == '\0') {
          pcVar14 = strchr(&local_408,0x7b);
          if (pcVar14 != (char *)0x0) {
            *pcVar14 = '\0';
            pcVar14 = strchr(&local_408,0x3a);
            if (pcVar14 != (char *)0x0) {
              *pcVar14 = '\0';
              cVar11 = Parse::GetNameAndId(pcVar14 + 1,acStack_108,(uint *)&local_6d0);
              if ((cVar11 != '\0') && (param_5 != (_func_bool_uint_TextStyle_ptr_void_ptr *)0x0)) {
                (*param_5)((uint)local_6d0,aTStack_6c8,param_6);
              }
            }
            cVar11 = Parse::GetNameAndId(&local_408,param_2,param_3);
          }
        }
        else if (cVar11 == '\x01') {
          if (local_408 == '}') {
            TextStyle::operator=(param_4,aTStack_6c8);
            goto LAB_0536d188;
          }
          local_6d0 = &local_408;
          uVar1 = local_440;
          uVar2 = local_43c;
          uVar3 = local_438;
          uVar4 = local_434;
          uVar5 = local_430;
          uVar6 = local_42c;
          uVar7 = local_424;
          uVar8 = local_420;
          break;
        }
      }
      goto LAB_0536d13c;
    }
    if (param_7 == (_func_void_char_ptr_void_ptr *)0x0) goto LAB_0536d13c;
    (*param_7)(acStack_407,param_8);
    cVar9 = Parse::GetTextLine(param_1,&local_408);
  } while( true );
LAB_0536d210:
  local_420 = uVar8;
  local_424 = uVar7;
  local_42c = uVar6;
  local_430 = uVar5;
  local_434 = uVar4;
  local_438 = uVar3;
  local_43c = uVar2;
  local_440 = uVar1;
  cVar9 = Parse::GetProperty(&local_6d0,acStack_308,acStack_208);
  if (cVar9 != '\0') {
    iVar12 = StdC::Strcmp(acStack_308,"font-family");
    if (iVar12 == 0) {
      pcVar14 = acStack_208;
      uVar15 = 0;
      do {
        pcVar13 = strchr(pcVar14,0x2c);
        if (pcVar13 == (char *)0x0) {
          cVar9 = Parse::StripSpace(pcVar14);
          uVar1 = local_440;
          uVar2 = local_43c;
          uVar3 = local_438;
          uVar4 = local_434;
          uVar5 = local_430;
          uVar6 = local_42c;
          uVar7 = local_424;
          uVar8 = local_420;
          if ((cVar9 != '\0') &&
             (cVar9 = Parse::StripQuotes(pcVar14), uVar1 = local_440, uVar2 = local_43c,
             uVar3 = local_438, uVar4 = local_434, uVar5 = local_430, uVar6 = local_42c,
             uVar7 = local_424, uVar8 = local_420, cVar9 != '\0')) {
            Parse::Strncpy8ToChar((wchar16 *)(aTStack_6c8 + uVar15 * 0x40),pcVar14,0x1f);
            auStack_68a[uVar15 * 0x20] = 0;
            uVar1 = local_440;
            uVar2 = local_43c;
            uVar3 = local_438;
            uVar4 = local_434;
            uVar5 = local_430;
            uVar6 = local_42c;
            uVar7 = local_424;
            uVar8 = local_420;
          }
          break;
        }
        *pcVar13 = '\0';
        cVar9 = Parse::StripSpace(pcVar14);
        uVar16 = uVar15;
        if ((cVar9 != '\0') && (cVar9 = Parse::StripQuotes(pcVar14), cVar9 != '\0')) {
          uVar16 = (ulong)((int)uVar15 + 1);
          Parse::Strncpy8ToChar((wchar16 *)(aTStack_6c8 + uVar15 * 0x40),pcVar14,0x1f);
          auStack_68a[uVar15 * 0x20] = 0;
        }
        pcVar14 = pcVar13 + 1;
        uVar15 = uVar16;
        uVar1 = local_440;
        uVar2 = local_43c;
        uVar3 = local_438;
        uVar4 = local_434;
        uVar5 = local_430;
        uVar6 = local_42c;
        uVar7 = local_424;
        uVar8 = local_420;
      } while ((uint)uVar16 < 8);
    }
    else {
      iVar12 = StdC::Strcmp(acStack_308,"font-size");
      if (iVar12 == 0) {
        dVar17 = atof(acStack_208);
        local_4c8 = (float)dVar17;
        uVar1 = local_440;
        uVar2 = local_43c;
        uVar3 = local_438;
        uVar4 = local_434;
        uVar5 = local_430;
        uVar6 = local_42c;
        uVar7 = local_424;
        uVar8 = local_420;
      }
      else {
        iVar12 = StdC::Strcmp(acStack_308,"font-style");
        if (iVar12 == 0) {
          iVar12 = StdC::Strcmp(acStack_208,"normal");
          if (iVar12 == 0) {
            local_4c4 = 0;
            uVar1 = local_440;
            uVar2 = local_43c;
            uVar3 = local_438;
            uVar4 = local_434;
            uVar5 = local_430;
            uVar6 = local_42c;
            uVar7 = local_424;
            uVar8 = local_420;
          }
          else {
            iVar12 = StdC::Strcmp(acStack_208,"italic");
            if (iVar12 == 0) {
              local_4c4 = 2;
              uVar1 = local_440;
              uVar2 = local_43c;
              uVar3 = local_438;
              uVar4 = local_434;
              uVar5 = local_430;
              uVar6 = local_42c;
              uVar7 = local_424;
              uVar8 = local_420;
            }
            else {
              iVar12 = StdC::Strcmp(acStack_208,"oblique");
              uVar1 = local_440;
              uVar2 = local_43c;
              uVar3 = local_438;
              uVar4 = local_434;
              uVar5 = local_430;
              uVar6 = local_42c;
              uVar7 = local_424;
              uVar8 = local_420;
              if (iVar12 == 0) {
                local_4c4 = 1;
              }
            }
          }
        }
        else {
          iVar12 = StdC::Strcmp(acStack_308,"font-weight");
          if (iVar12 == 0) {
            iVar12 = StdC::Strcmp(acStack_208,"normal");
            if (iVar12 == 0) {
              local_4c0 = 400.0;
              uVar1 = local_440;
              uVar2 = local_43c;
              uVar3 = local_438;
              uVar4 = local_434;
              uVar5 = local_430;
              uVar6 = local_42c;
              uVar7 = local_424;
              uVar8 = local_420;
            }
            else {
              iVar12 = StdC::Strcmp(acStack_208,"bold");
              if (iVar12 == 0) {
                local_4c0 = 700.0;
                uVar1 = local_440;
                uVar2 = local_43c;
                uVar3 = local_438;
                uVar4 = local_434;
                uVar5 = local_430;
                uVar6 = local_42c;
                uVar7 = local_424;
                uVar8 = local_420;
              }
              else {
                dVar17 = atof(acStack_208);
                local_4c0 = (float)dVar17;
                uVar1 = local_440;
                uVar2 = local_43c;
                uVar3 = local_438;
                uVar4 = local_434;
                uVar5 = local_430;
                uVar6 = local_42c;
                uVar7 = local_424;
                uVar8 = local_420;
              }
            }
          }
          else {
            iVar12 = StdC::Strcmp(acStack_308,"font-variant");
            if (iVar12 == 0) {
              iVar12 = StdC::Strcmp(acStack_208,"normal");
              if (iVar12 == 0) {
                local_4bc = 0;
                uVar1 = local_440;
                uVar2 = local_43c;
                uVar3 = local_438;
                uVar4 = local_434;
                uVar5 = local_430;
                uVar6 = local_42c;
                uVar7 = local_424;
                uVar8 = local_420;
              }
              else {
                iVar12 = StdC::Strcmp(acStack_208,"small-caps");
                uVar1 = local_440;
                uVar2 = local_43c;
                uVar3 = local_438;
                uVar4 = local_434;
                uVar5 = local_430;
                uVar6 = local_42c;
                uVar7 = local_424;
                uVar8 = local_420;
                if (iVar12 == 0) {
                  local_4bc = 1;
                }
              }
            }
            else {
              iVar12 = StdC::Strcmp(acStack_308,"font-pitch");
              if (iVar12 == 0) {
                iVar12 = StdC::Strcmp(acStack_208,"variable");
                if (iVar12 == 0) {
                  local_4b8 = 0;
                  uVar1 = local_440;
                  uVar2 = local_43c;
                  uVar3 = local_438;
                  uVar4 = local_434;
                  uVar5 = local_430;
                  uVar6 = local_42c;
                  uVar7 = local_424;
                  uVar8 = local_420;
                }
                else {
                  iVar12 = StdC::Strcmp(acStack_208,"fixed");
                  uVar1 = local_440;
                  uVar2 = local_43c;
                  uVar3 = local_438;
                  uVar4 = local_434;
                  uVar5 = local_430;
                  uVar6 = local_42c;
                  uVar7 = local_424;
                  uVar8 = local_420;
                  if (iVar12 == 0) {
                    local_4b8 = 1;
                  }
                }
              }
              else {
                iVar12 = StdC::Strcmp(acStack_308,"font-smooth");
                if (iVar12 == 0) {
                  iVar12 = StdC::Strcmp(acStack_208,"auto");
                  if ((iVar12 == 0) || (iVar12 = StdC::Strcmp(acStack_208,"never"), iVar12 == 0)) {
                    local_4b4 = 0;
                    uVar1 = local_440;
                    uVar2 = local_43c;
                    uVar3 = local_438;
                    uVar4 = local_434;
                    uVar5 = local_430;
                    uVar6 = local_42c;
                    uVar7 = local_424;
                    uVar8 = local_420;
                  }
                  else {
                    iVar12 = StdC::Strcmp(acStack_208,"always");
                    uVar1 = local_440;
                    uVar2 = local_43c;
                    uVar3 = local_438;
                    uVar4 = local_434;
                    uVar5 = local_430;
                    uVar6 = local_42c;
                    uVar7 = local_424;
                    uVar8 = local_420;
                    if (iVar12 == 0) {
                      local_4b4 = 1;
                    }
                  }
                }
                else {
                  iVar12 = StdC::Strcmp(acStack_308,"color");
                  if (iVar12 == 0) {
                    if (*local_6d0 == '#') {
                      local_6d0 = local_6d0 + 1;
                    }
                    local_460 = StdC::StrtoU32(local_6d0,(char **)0x0,0x10);
                    local_460 = local_460 | 0xff000000;
                    uVar1 = local_440;
                    uVar2 = local_43c;
                    uVar3 = local_438;
                    uVar4 = local_434;
                    uVar5 = local_430;
                    uVar6 = local_42c;
                    uVar7 = local_424;
                    uVar8 = local_420;
                  }
                  else {
                    iVar12 = StdC::Strcmp(acStack_308,"background-color");
                    if (iVar12 == 0) {
                      if (*local_6d0 == '#') {
                        local_6d0 = local_6d0 + 1;
                      }
                      local_45c = StdC::StrtoU32(local_6d0,(char **)0x0,0x10);
                      local_45c = local_45c | 0xff000000;
                      uVar1 = local_440;
                      uVar2 = local_43c;
                      uVar3 = local_438;
                      uVar4 = local_434;
                      uVar5 = local_430;
                      uVar6 = local_42c;
                      uVar7 = local_424;
                      uVar8 = local_420;
                    }
                    else {
                      iVar12 = StdC::Strcmp(acStack_308,"text-decoration");
                      if (iVar12 == 0) {
                        local_44c = 0;
                        pcVar14 = acStack_208;
                        while( true ) {
                          while (pcVar13 = strchr(pcVar14,0x2c), pcVar13 != (char *)0x0) {
                            *pcVar13 = '\0';
                            cVar9 = Parse::StripSpace(pcVar14);
                            if (cVar9 != '\0') goto LAB_0536d680;
                            pcVar14 = pcVar13 + 1;
                          }
                          cVar9 = Parse::StripSpace(pcVar14);
                          uVar1 = local_440;
                          uVar2 = local_43c;
                          uVar3 = local_438;
                          uVar4 = local_434;
                          uVar5 = local_430;
                          uVar6 = local_42c;
                          uVar7 = local_424;
                          uVar8 = local_420;
                          if (cVar9 == '\0') break;
LAB_0536d680:
                          iVar12 = StdC::Strcmp(pcVar14,"underline");
                          if (iVar12 == 0) {
                            local_44c = local_44c | 1;
                          }
                          else {
                            iVar12 = StdC::Strcmp(pcVar14,"overline");
                            if (iVar12 == 0) {
                              local_44c = local_44c | 4;
                            }
                            else {
                              iVar12 = StdC::Strcmp(pcVar14,"line-through");
                              if (iVar12 == 0) {
                                local_44c = local_44c | 2;
                              }
                            }
                          }
                          uVar1 = local_440;
                          uVar2 = local_43c;
                          uVar3 = local_438;
                          uVar4 = local_434;
                          uVar5 = local_430;
                          uVar6 = local_42c;
                          uVar7 = local_424;
                          uVar8 = local_420;
                          if (pcVar13 == (char *)0x0) break;
                          pcVar14 = pcVar13 + 1;
                        }
                      }
                      else {
                        iVar12 = StdC::Strcmp(acStack_308,"writing-mode");
                        if (iVar12 == 0) {
                          local_448 = 0;
                          local_444 = 0;
                          uVar1 = local_440;
                          uVar2 = local_43c;
                          uVar3 = local_438;
                          uVar4 = local_434;
                          uVar5 = local_430;
                          uVar6 = local_42c;
                          uVar7 = local_424;
                          uVar8 = local_420;
                        }
                        else {
                          iVar12 = StdC::Strcmp(acStack_308,"text-align");
                          if (iVar12 == 0) {
                            iVar12 = StdC::Strcmp(acStack_208,"left");
                            uVar1 = 0;
                            uVar2 = local_43c;
                            uVar3 = local_438;
                            uVar4 = local_434;
                            uVar5 = local_430;
                            uVar6 = local_42c;
                            uVar7 = local_424;
                            uVar8 = local_420;
                            if (iVar12 != 0) {
                              iVar12 = StdC::Strcmp(acStack_208,"center");
                              if (iVar12 == 0) {
                                uVar1 = 1;
                                uVar2 = local_43c;
                                uVar3 = local_438;
                                uVar4 = local_434;
                                uVar5 = local_430;
                                uVar6 = local_42c;
                                uVar7 = local_424;
                                uVar8 = local_420;
                              }
                              else {
                                iVar12 = StdC::Strcmp(acStack_208,"right");
                                if (iVar12 == 0) {
                                  local_440 = 2;
                                  uVar1 = local_440;
                                  uVar2 = local_43c;
                                  uVar3 = local_438;
                                  uVar4 = local_434;
                                  uVar5 = local_430;
                                  uVar6 = local_42c;
                                  uVar7 = local_424;
                                  uVar8 = local_420;
                                }
                                else {
                                  iVar12 = StdC::Strcmp(acStack_208,"justify");
                                  uVar1 = local_440;
                                  uVar2 = local_43c;
                                  uVar3 = local_438;
                                  uVar4 = local_434;
                                  uVar5 = local_430;
                                  uVar6 = local_42c;
                                  uVar7 = local_424;
                                  uVar8 = local_420;
                                  if (iVar12 == 0) {
                                    local_440 = 3;
                                    uVar1 = local_440;
                                  }
                                }
                              }
                            }
                          }
                          else {
                            iVar12 = StdC::Strcmp(acStack_308,"text-valign");
                            if (iVar12 == 0) {
                              iVar12 = StdC::Strcmp(acStack_208,"top");
                              uVar1 = local_440;
                              uVar2 = 0;
                              uVar3 = local_438;
                              uVar4 = local_434;
                              uVar5 = local_430;
                              uVar6 = local_42c;
                              uVar7 = local_424;
                              uVar8 = local_420;
                              if (iVar12 != 0) {
                                iVar12 = StdC::Strcmp(acStack_208,"middle");
                                if (iVar12 == 0) {
                                  uVar1 = local_440;
                                  uVar2 = 1;
                                  uVar3 = local_438;
                                  uVar4 = local_434;
                                  uVar5 = local_430;
                                  uVar6 = local_42c;
                                  uVar7 = local_424;
                                  uVar8 = local_420;
                                }
                                else {
                                  iVar12 = StdC::Strcmp(acStack_208,"bottom");
                                  uVar1 = local_440;
                                  uVar2 = local_43c;
                                  uVar3 = local_438;
                                  uVar4 = local_434;
                                  uVar5 = local_430;
                                  uVar6 = local_42c;
                                  uVar7 = local_424;
                                  uVar8 = local_420;
                                  if (iVar12 == 0) {
                                    local_43c = 2;
                                    uVar2 = local_43c;
                                  }
                                }
                              }
                            }
                            else {
                              iVar12 = StdC::Strcmp(acStack_308,"text-justify");
                              if (iVar12 == 0) {
                                iVar12 = StdC::Strcmp(acStack_208,"inter-word");
                                uVar1 = local_440;
                                uVar2 = local_43c;
                                uVar3 = 0;
                                uVar4 = local_434;
                                uVar5 = local_430;
                                uVar6 = local_42c;
                                uVar7 = local_424;
                                uVar8 = local_420;
                                if (iVar12 != 0) {
                                  iVar12 = StdC::Strcmp(acStack_208,"inter-ideograph");
                                  if (iVar12 == 0) {
                                    uVar1 = local_440;
                                    uVar2 = local_43c;
                                    uVar3 = 1;
                                    uVar4 = local_434;
                                    uVar5 = local_430;
                                    uVar6 = local_42c;
                                    uVar7 = local_424;
                                    uVar8 = local_420;
                                  }
                                  else {
                                    iVar12 = StdC::Strcmp(acStack_208,"distribute");
                                    if (iVar12 == 0) {
                                      local_438 = 2;
                                      uVar1 = local_440;
                                      uVar2 = local_43c;
                                      uVar3 = local_438;
                                      uVar4 = local_434;
                                      uVar5 = local_430;
                                      uVar6 = local_42c;
                                      uVar7 = local_424;
                                      uVar8 = local_420;
                                    }
                                    else {
                                      iVar12 = StdC::Strcmp(acStack_208,"newspaper");
                                      if (iVar12 == 0) {
                                        local_438 = 3;
                                        uVar1 = local_440;
                                        uVar2 = local_43c;
                                        uVar3 = local_438;
                                        uVar4 = local_434;
                                        uVar5 = local_430;
                                        uVar6 = local_42c;
                                        uVar7 = local_424;
                                        uVar8 = local_420;
                                      }
                                      else {
                                        iVar12 = StdC::Strcmp(acStack_208,"inter-cluster");
                                        if (iVar12 == 0) {
                                          local_438 = 4;
                                          uVar1 = local_440;
                                          uVar2 = local_43c;
                                          uVar3 = local_438;
                                          uVar4 = local_434;
                                          uVar5 = local_430;
                                          uVar6 = local_42c;
                                          uVar7 = local_424;
                                          uVar8 = local_420;
                                        }
                                        else {
                                          iVar12 = StdC::Strcmp(acStack_208,"kashida");
                                          uVar1 = local_440;
                                          uVar2 = local_43c;
                                          uVar3 = local_438;
                                          uVar4 = local_434;
                                          uVar5 = local_430;
                                          uVar6 = local_42c;
                                          uVar7 = local_424;
                                          uVar8 = local_420;
                                          if (iVar12 == 0) {
                                            local_438 = 5;
                                            uVar3 = local_438;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                iVar12 = StdC::Strcmp(acStack_308,"wrap-option");
                                if (iVar12 == 0) {
                                  iVar12 = StdC::Strcmp(acStack_208,"wrap");
                                  if (iVar12 == 0) {
                                    local_434 = 1;
                                    uVar1 = local_440;
                                    uVar2 = local_43c;
                                    uVar3 = local_438;
                                    uVar4 = local_434;
                                    uVar5 = local_430;
                                    uVar6 = local_42c;
                                    uVar7 = local_424;
                                    uVar8 = local_420;
                                  }
                                  else {
                                    iVar12 = StdC::Strcmp(acStack_208,"no-wrap");
                                    uVar1 = local_440;
                                    uVar2 = local_43c;
                                    uVar3 = local_438;
                                    uVar4 = 0;
                                    uVar5 = local_430;
                                    uVar6 = local_42c;
                                    uVar7 = local_424;
                                    uVar8 = local_420;
                                    if (iVar12 != 0) {
                                      iVar12 = StdC::Strcmp(acStack_208,"soft-wrap");
                                      if (iVar12 == 0) {
                                        uVar1 = local_440;
                                        uVar2 = local_43c;
                                        uVar3 = local_438;
                                        uVar4 = 2;
                                        uVar5 = local_430;
                                        uVar6 = local_42c;
                                        uVar7 = local_424;
                                        uVar8 = local_420;
                                      }
                                      else {
                                        iVar12 = StdC::Strcmp(acStack_208,"hard-wrap");
                                        if (iVar12 == 0) {
                                          local_434 = 3;
                                          uVar1 = local_440;
                                          uVar2 = local_43c;
                                          uVar3 = local_438;
                                          uVar4 = local_434;
                                          uVar5 = local_430;
                                          uVar6 = local_42c;
                                          uVar7 = local_424;
                                          uVar8 = local_420;
                                        }
                                        else {
                                          iVar12 = StdC::Strcmp(acStack_208,"emergency");
                                          uVar1 = local_440;
                                          uVar2 = local_43c;
                                          uVar3 = local_438;
                                          uVar4 = local_434;
                                          uVar5 = local_430;
                                          uVar6 = local_42c;
                                          uVar7 = local_424;
                                          uVar8 = local_420;
                                          if (iVar12 == 0) {
                                            local_434 = 4;
                                            uVar4 = local_434;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                else {
                                  iVar12 = StdC::Strcmp(acStack_308,"text-overflow-mode");
                                  if (iVar12 == 0) {
                                    iVar12 = StdC::Strcmp(acStack_208,"none");
                                    uVar1 = local_440;
                                    uVar2 = local_43c;
                                    uVar3 = local_438;
                                    uVar4 = local_434;
                                    uVar5 = 0;
                                    uVar6 = local_42c;
                                    uVar7 = local_424;
                                    uVar8 = local_420;
                                    if (iVar12 != 0) {
                                      iVar12 = StdC::Strcmp(acStack_208,"clip");
                                      if (iVar12 == 0) {
                                        uVar1 = local_440;
                                        uVar2 = local_43c;
                                        uVar3 = local_438;
                                        uVar4 = local_434;
                                        uVar5 = 1;
                                        uVar6 = local_42c;
                                        uVar7 = local_424;
                                        uVar8 = local_420;
                                      }
                                      else {
                                        iVar12 = StdC::Strcmp(acStack_208,"ellipsis");
                                        uVar1 = local_440;
                                        uVar2 = local_43c;
                                        uVar3 = local_438;
                                        uVar4 = local_434;
                                        uVar5 = local_430;
                                        uVar6 = local_42c;
                                        uVar7 = local_424;
                                        uVar8 = local_420;
                                        if (iVar12 == 0) {
                                          local_430 = 2;
                                          uVar5 = local_430;
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    iVar12 = StdC::Strcmp(acStack_308,"font-emphasize-style");
                                    if (iVar12 == 0) {
                                      iVar12 = StdC::Strcmp(acStack_208,"none");
                                      uVar1 = local_440;
                                      uVar2 = local_43c;
                                      uVar3 = local_438;
                                      uVar4 = local_434;
                                      uVar5 = local_430;
                                      uVar6 = 0;
                                      uVar7 = local_424;
                                      uVar8 = local_420;
                                      if (iVar12 != 0) {
                                        iVar12 = StdC::Strcmp(acStack_208,"accent");
                                        if (iVar12 == 0) {
                                          uVar1 = local_440;
                                          uVar2 = local_43c;
                                          uVar3 = local_438;
                                          uVar4 = local_434;
                                          uVar5 = local_430;
                                          uVar6 = 1;
                                          uVar7 = local_424;
                                          uVar8 = local_420;
                                        }
                                        else {
                                          iVar12 = StdC::Strcmp(acStack_208,"dot");
                                          if (iVar12 == 0) {
                                            local_42c = 2;
                                            uVar1 = local_440;
                                            uVar2 = local_43c;
                                            uVar3 = local_438;
                                            uVar4 = local_434;
                                            uVar5 = local_430;
                                            uVar6 = local_42c;
                                            uVar7 = local_424;
                                            uVar8 = local_420;
                                          }
                                          else {
                                            iVar12 = StdC::Strcmp(acStack_208,"circle");
                                            if (iVar12 == 0) {
                                              local_42c = 3;
                                              uVar1 = local_440;
                                              uVar2 = local_43c;
                                              uVar3 = local_438;
                                              uVar4 = local_434;
                                              uVar5 = local_430;
                                              uVar6 = local_42c;
                                              uVar7 = local_424;
                                              uVar8 = local_420;
                                            }
                                            else {
                                              iVar12 = StdC::Strcmp(acStack_208,"disc");
                                              uVar1 = local_440;
                                              uVar2 = local_43c;
                                              uVar3 = local_438;
                                              uVar4 = local_434;
                                              uVar5 = local_430;
                                              uVar6 = local_42c;
                                              uVar7 = local_424;
                                              uVar8 = local_420;
                                              if (iVar12 == 0) {
                                                local_42c = 4;
                                                uVar6 = local_42c;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      iVar12 = StdC::Strcmp(acStack_308,"font-emphasize-position");
                                      if (iVar12 == 0) {
                                        iVar12 = StdC::Strcmp(acStack_208,"before");
                                        if (iVar12 == 0) {
                                          local_428 = 0;
                                          uVar1 = local_440;
                                          uVar2 = local_43c;
                                          uVar3 = local_438;
                                          uVar4 = local_434;
                                          uVar5 = local_430;
                                          uVar6 = local_42c;
                                          uVar7 = local_424;
                                          uVar8 = local_420;
                                        }
                                        else {
                                          iVar12 = StdC::Strcmp(acStack_208,"after");
                                          uVar1 = local_440;
                                          uVar2 = local_43c;
                                          uVar3 = local_438;
                                          uVar4 = local_434;
                                          uVar5 = local_430;
                                          uVar6 = local_42c;
                                          uVar7 = local_424;
                                          uVar8 = local_420;
                                          if (iVar12 == 0) {
                                            local_428 = 1;
                                          }
                                        }
                                      }
                                      else {
                                        iVar12 = StdC::Strcmp(acStack_308,"digit-substitution");
                                        if (iVar12 == 0) {
                                          iVar12 = StdC::Strcmp(acStack_208,"none");
                                          uVar1 = local_440;
                                          uVar2 = local_43c;
                                          uVar3 = local_438;
                                          uVar4 = local_434;
                                          uVar5 = local_430;
                                          uVar6 = local_42c;
                                          uVar7 = 0;
                                          uVar8 = local_420;
                                          if (iVar12 != 0) {
                                            iVar12 = StdC::Strcmp(acStack_208,"context");
                                            if (iVar12 == 0) {
                                              uVar1 = local_440;
                                              uVar2 = local_43c;
                                              uVar3 = local_438;
                                              uVar4 = local_434;
                                              uVar5 = local_430;
                                              uVar6 = local_42c;
                                              uVar7 = 1;
                                              uVar8 = local_420;
                                            }
                                            else {
                                              iVar12 = StdC::Strcmp(acStack_208,"western");
                                              if (iVar12 == 0) {
                                                local_424 = 2;
                                                uVar1 = local_440;
                                                uVar2 = local_43c;
                                                uVar3 = local_438;
                                                uVar4 = local_434;
                                                uVar5 = local_430;
                                                uVar6 = local_42c;
                                                uVar7 = local_424;
                                                uVar8 = local_420;
                                              }
                                              else {
                                                iVar12 = StdC::Strcmp(acStack_208,"national");
                                                if (iVar12 == 0) {
                                                  local_424 = 3;
                                                  uVar1 = local_440;
                                                  uVar2 = local_43c;
                                                  uVar3 = local_438;
                                                  uVar4 = local_434;
                                                  uVar5 = local_430;
                                                  uVar6 = local_42c;
                                                  uVar7 = local_424;
                                                  uVar8 = local_420;
                                                }
                                                else {
                                                  iVar12 = StdC::Strcmp(acStack_208,"traditional");
                                                  uVar1 = local_440;
                                                  uVar2 = local_43c;
                                                  uVar3 = local_438;
                                                  uVar4 = local_434;
                                                  uVar5 = local_430;
                                                  uVar6 = local_42c;
                                                  uVar7 = local_424;
                                                  uVar8 = local_420;
                                                  if (iVar12 == 0) {
                                                    local_424 = 4;
                                                    uVar7 = local_424;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          iVar12 = StdC::Strcmp(acStack_308,"password-mode");
                                          if (iVar12 == 0) {
                                            iVar12 = StdC::Strcmp(acStack_208,"none");
                                            uVar1 = local_440;
                                            uVar2 = local_43c;
                                            uVar3 = local_438;
                                            uVar4 = local_434;
                                            uVar5 = local_430;
                                            uVar6 = local_42c;
                                            uVar7 = local_424;
                                            uVar8 = 0;
                                            if ((iVar12 != 0) &&
                                               (iVar12 = StdC::Strcmp(acStack_208,"password"),
                                               uVar1 = local_440, uVar2 = local_43c,
                                               uVar3 = local_438, uVar4 = local_434,
                                               uVar5 = local_430, uVar6 = local_42c,
                                               uVar7 = local_424, uVar8 = local_420, iVar12 == 0)) {
                                              uVar8 = 1;
                                            }
                                          }
                                          else {
                                            iVar12 = StdC::Strcmp(acStack_308,"font-stretch");
                                            if (iVar12 == 0) {
                                              dVar17 = atof(acStack_208);
                                              local_41c = (float)dVar17;
                                              uVar1 = local_440;
                                              uVar2 = local_43c;
                                              uVar3 = local_438;
                                              uVar4 = local_434;
                                              uVar5 = local_430;
                                              uVar6 = local_42c;
                                              uVar7 = local_424;
                                              uVar8 = local_420;
                                            }
                                            else {
                                              iVar12 = StdC::Strcmp(acStack_308,"letter-spacing");
                                              if (iVar12 == 0) {
                                                dVar17 = atof(acStack_208);
                                                local_418 = (float)dVar17;
                                                uVar1 = local_440;
                                                uVar2 = local_43c;
                                                uVar3 = local_438;
                                                uVar4 = local_434;
                                                uVar5 = local_430;
                                                uVar6 = local_42c;
                                                uVar7 = local_424;
                                                uVar8 = local_420;
                                              }
                                              else {
                                                iVar12 = StdC::Strcmp(acStack_308,"word-spacing");
                                                if (iVar12 == 0) {
                                                  dVar17 = atof(acStack_208);
                                                  local_414 = (float)dVar17;
                                                  uVar1 = local_440;
                                                  uVar2 = local_43c;
                                                  uVar3 = local_438;
                                                  uVar4 = local_434;
                                                  uVar5 = local_430;
                                                  uVar6 = local_42c;
                                                  uVar7 = local_424;
                                                  uVar8 = local_420;
                                                }
                                                else {
                                                  iVar12 = StdC::Strcmp(acStack_308,"line-spacing");
                                                  uVar1 = local_440;
                                                  uVar2 = local_43c;
                                                  uVar3 = local_438;
                                                  uVar4 = local_434;
                                                  uVar5 = local_430;
                                                  uVar6 = local_42c;
                                                  uVar7 = local_424;
                                                  uVar8 = local_420;
                                                  if (iVar12 == 0) {
                                                    dVar17 = atof(acStack_208);
                                                    local_410 = (float)dVar17;
                                                    uVar1 = local_440;
                                                    uVar2 = local_43c;
                                                    uVar3 = local_438;
                                                    uVar4 = local_434;
                                                    uVar5 = local_430;
                                                    uVar6 = local_42c;
                                                    uVar7 = local_424;
                                                    uVar8 = local_420;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_0536d210;
  }
  goto LAB_0536d13c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::ParseStyleText(char const*, char (*) [32], unsigned int*, EA::Text::TextStyle*,
   unsigned int, EA::Text::StyleManager const*) */

void EA::Text::ParseStyleText
               (char *param_1,char *param_2,uint *param_3,TextStyle *param_4,uint param_5,
               StyleManager *param_6)

{
  char cVar1;
  char *local_318;
  uint uStack_30c;
  StyleManager *local_308;
  uint *local_300;
  TextStyle *local_2f8;
  uint local_2f0;
  undefined4 uStack_2ec;
  TextStyle aTStack_2e8 [704];
  char acStack_28 [32];
  long local_8;
  
  local_2f0 = 0;
  uStack_2ec = 0;
  local_8 = ___stack_chk_guard;
  local_318 = param_1;
  local_308 = param_6;
  local_300 = param_3;
  local_2f8 = param_4;
  if (param_5 != 0) {
    do {
      cVar1 = ParseStyleText(&local_318,param_2 + (ulong)local_2f0 * 0x20,param_3 + local_2f0,
                             param_4 + (ulong)local_2f0 * 700,FUN_0536e238,&local_308,
                             (_func_void_char_ptr_void_ptr *)0x0,(void *)0x0);
      if (cVar1 == '\0') goto LAB_0536dd44;
      local_2f0 = local_2f0 + 1;
    } while (local_2f0 < param_5);
  }
  do {
    TextStyle::TextStyle(aTStack_2e8);
    cVar1 = ParseStyleText(&local_318,acStack_28,&uStack_30c,aTStack_2e8,FUN_0536e238,&local_308,
                           (_func_void_char_ptr_void_ptr *)0x0,(void *)0x0);
  } while (cVar1 != '\0');
LAB_0536dd44:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_2f0);
  }
  return;
}


bool EA::Text::operator<(Rectangle *param_1,Rectangle *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)param_1;
  fVar1 = *(float *)param_2;
  if (fVar2 == fVar1) {
    fVar2 = *(float *)(param_1 + 4);
    fVar1 = *(float *)(param_2 + 4);
    if (fVar2 == fVar1) {
      fVar2 = *(float *)(param_1 + 8);
      fVar1 = *(float *)(param_2 + 8);
      if (fVar2 == fVar1) {
        fVar2 = *(float *)(param_1 + 0xc);
        fVar1 = *(float *)(param_2 + 0xc);
      }
    }
  }
  return fVar2 < fVar1;
}


/* EA::Text::IsCharJoinControl(char16_t) */

bool EA::Text::IsCharJoinControl(wchar16 param_1)

{
  return (ushort)param_1 - 0x200c < 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GetMaxFontMetrics(eastl::fixed_set<EA::Text::AutoRefCount<EA::Text::Font>, 8ul, true,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::allocator> const&, float&, float&)
    */

void EA::Text::GetMaxFontMetrics(fixed_set *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  exception_ptr *this;
  long *plVar2;
  float *pfVar3;
  undefined8 local_60;
  undefined8 local_58;
  FontMetrics aFStack_50 [20];
  float afStack_3c [2];
  float afStack_34 [11];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FontMetrics::FontMetrics(aFStack_50);
  local_60 = FUN_05371344(*(undefined8 *)(param_1 + 0x10));
  local_58 = std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_1);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_60,(rbtree_iterator *)&local_58), bVar1
        ) {
    this = (exception_ptr *)
           eastl::
           rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
           ::operator*((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                        *)&local_60);
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get(this);
    (**(code **)(*plVar2 + 0x68))(plVar2,aFStack_50);
    pfVar3 = eastl::max_alt<float>(param_2,afStack_34);
    *param_2 = *pfVar3;
    pfVar3 = eastl::min_alt<float>(param_3,afStack_3c);
    *param_3 = *pfVar3;
    eastl::
    rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>::
    operator++((rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>
                *)&local_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::GetDefaultLayoutSettings() */

undefined * EA::Text::GetDefaultLayoutSettings(void)

{
  int iVar1;
  
  if (((DAT_06bdfd98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06bdfd98), iVar1 != 0)) {
    LayoutSettings::LayoutSettings((LayoutSettings *)&DAT_06bdfdb0);
    __cxa_guard_release(&DAT_06bdfd98);
    __cxa_atexit(LayoutSettings::~LayoutSettings,&DAT_06bdfdb0,&DAT_06a88000);
    return &DAT_06bdfdb0;
  }
  return &DAT_06bdfdb0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::LayoutSimple(char16_t const*, unsigned long, float, float, EA::Text::Font*, unsigned
   short*, EA::Text::GlyphLayoutInfo*, EA::Text::LayoutSettings*, EA::Text::LineMetrics*, unsigned
   long*) */

void EA::Text::LayoutSimple
               (wchar16 *param_1,ulong param_2,float param_3,float param_4,Font *param_5,
               ushort *param_6,GlyphLayoutInfo *param_7,LayoutSettings *param_8,LineMetrics *param_9
               ,ulong *param_10)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  char cVar3;
  exception_ptr *this;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined8 local_50 [2];
  undefined4 local_3c;
  float local_34;
  float local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_8 == (LayoutSettings *)0x0) {
    param_8 = (LayoutSettings *)GetDefaultLayoutSettings();
  }
  fVar9 = param_3;
  if (param_5 == (Font *)0x0) {
    cVar3 = FUN_0536f3f8(*(undefined8 *)(param_8 + 0x40));
    if (cVar3 == '\0') {
      local_50[0] = FUN_05371494(*(undefined8 *)(param_8 + 0x28));
      this = (exception_ptr *)
             eastl::
             rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
             ::operator*((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                          *)local_50);
      param_5 = (Font *)std::__exception_ptr::exception_ptr::_M_get(this);
      if (param_5 != (Font *)0x0) goto LAB_053730fc;
    }
    uVar4 = 1;
  }
  else {
LAB_053730fc:
    if (param_8[0x4a1] != (LayoutSettings)0x0) {
      FontMetrics::FontMetrics((FontMetrics *)local_50);
      (**(code **)(*(long *)param_5 + 0x68))(param_5,(FontMetrics *)local_50);
      param_4 = param_4 + (float)(int)(*(float *)(param_8 + 0x4a4) * local_34);
    }
    pwVar1 = param_1 + param_2;
    uVar4 = 1;
    (**(code **)(*(long *)param_5 + 0x78))(param_5,param_1,param_2 & 0xffffffff,param_6,1,2,0);
    if (param_1 < pwVar1) {
      fVar10 = 0.0;
      fVar6 = param_3;
      do {
        while( true ) {
          if (fVar9 <= fVar6) {
            fVar9 = fVar6;
          }
          wVar2 = *param_1;
          (**(code **)(*(long *)param_5 + 0x70))(param_5,*param_6,&local_68);
          *(Font **)param_7 = param_5;
          *(float *)(param_7 + 8) = fVar6;
          fVar7 = fVar6 + local_60;
          *(float *)(param_7 + 0xc) = param_4;
          *(float *)(param_7 + 0x14) = fVar7;
          fVar8 = *(float *)(param_8 + 0x4a4);
          fVar5 = param_4 - local_5c * fVar8;
          *(float *)(param_7 + 0x10) = local_58;
          *(float *)(param_7 + 0x18) = fVar5;
          if (wVar2 != L'\n') break;
          *(float *)(param_7 + 0x1c) = fVar7;
          if (fVar10 == 0.0) {
            FontMetrics::FontMetrics((FontMetrics *)local_50);
            (**(code **)(*(long *)param_5 + 0x68))(param_5,(FontMetrics *)local_50);
            fVar10 = (float)(int)(local_30 + 0.5);
          }
          param_1 = param_1 + 1;
          uVar4 = uVar4 + 1;
          param_6 = param_6 + 1;
          param_4 = param_4 + *(float *)(param_8 + 0x4a4) * fVar10;
          param_7 = param_7 + 0x28;
          fVar6 = param_3;
          if (pwVar1 <= param_1) goto LAB_05373214;
        }
        param_1 = param_1 + 1;
        param_6 = param_6 + 1;
        fVar6 = fVar6 + local_58;
        *(float *)(param_7 + 0x1c) = fVar7 + local_68;
        *(float *)(param_7 + 0x20) = fVar5 + fVar8 * local_64;
        param_7 = param_7 + 0x28;
      } while (param_1 < pwVar1);
    }
  }
LAB_05373214:
  if (param_9 != (LineMetrics *)0x0) {
    FontMetrics::FontMetrics((FontMetrics *)local_50);
    (**(code **)(*(long *)param_5 + 0x68))(param_5,(FontMetrics *)local_50);
    *(ulong *)param_9 = param_2;
    fVar6 = 0.0;
    *(float *)(param_9 + 0x18) = local_34;
    *(undefined4 *)(param_9 + 0x1c) = local_3c;
    if (param_2 != 0) {
      fVar6 = fVar9 - param_3;
    }
    *(float *)(param_9 + 0x10) = fVar6;
  }
  if (param_10 != (ulong *)0x0) {
    *param_10 = uVar4;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::LayoutSimple(char const*, unsigned long, float, float, EA::Text::Font*, unsigned
   short*, EA::Text::GlyphLayoutInfo*, EA::Text::LayoutSettings*, EA::Text::LineMetrics*, unsigned
   long*) */

void EA::Text::LayoutSimple
               (char *param_1,ulong param_2,float param_3,float param_4,Font *param_5,
               ushort *param_6,GlyphLayoutInfo *param_7,LayoutSettings *param_8,LineMetrics *param_9
               ,ulong *param_10)

{
  char *pcVar1;
  char cVar2;
  exception_ptr *this;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined8 local_50 [2];
  undefined4 local_3c;
  float local_34;
  float local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_8 == (LayoutSettings *)0x0) {
    param_8 = (LayoutSettings *)GetDefaultLayoutSettings();
  }
  fVar8 = param_3;
  if (param_5 == (Font *)0x0) {
    cVar2 = FUN_0536f3f8(*(undefined8 *)(param_8 + 0x40));
    if (cVar2 == '\0') {
      local_50[0] = FUN_05371494(*(undefined8 *)(param_8 + 0x28));
      this = (exception_ptr *)
             eastl::
             rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
             ::operator*((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                          *)local_50);
      param_5 = (Font *)std::__exception_ptr::exception_ptr::_M_get(this);
      if (param_5 != (Font *)0x0) goto LAB_053733e8;
    }
    uVar3 = 1;
  }
  else {
LAB_053733e8:
    if (param_8[0x4a1] != (LayoutSettings)0x0) {
      FontMetrics::FontMetrics((FontMetrics *)local_50);
      (**(code **)(*(long *)param_5 + 0x68))(param_5,(FontMetrics *)local_50);
      param_4 = param_4 + (float)(int)(*(float *)(param_8 + 0x4a4) * local_34);
    }
    pcVar1 = param_1 + param_2;
    uVar3 = 1;
    (**(code **)(*(long *)param_5 + 0x80))(param_5,param_1,param_2 & 0xffffffff,param_6,1,2,0);
    if (param_1 < pcVar1) {
      fVar9 = 0.0;
      fVar5 = param_3;
      do {
        while( true ) {
          if (fVar8 <= fVar5) {
            fVar8 = fVar5;
          }
          cVar2 = *param_1;
          (**(code **)(*(long *)param_5 + 0x70))(param_5,*param_6,&local_68);
          *(Font **)param_7 = param_5;
          *(float *)(param_7 + 8) = fVar5;
          fVar6 = fVar5 + local_60;
          *(float *)(param_7 + 0xc) = param_4;
          *(float *)(param_7 + 0x14) = fVar6;
          fVar7 = *(float *)(param_8 + 0x4a4);
          fVar4 = param_4 - local_5c * fVar7;
          *(float *)(param_7 + 0x10) = local_58;
          *(float *)(param_7 + 0x18) = fVar4;
          if (cVar2 != '\n') break;
          *(float *)(param_7 + 0x1c) = fVar6;
          if (fVar9 == 0.0) {
            FontMetrics::FontMetrics((FontMetrics *)local_50);
            (**(code **)(*(long *)param_5 + 0x68))(param_5,(FontMetrics *)local_50);
            fVar9 = (float)(int)(local_30 + 0.5);
          }
          param_1 = param_1 + 1;
          uVar3 = uVar3 + 1;
          param_6 = param_6 + 1;
          param_4 = param_4 + *(float *)(param_8 + 0x4a4) * fVar9;
          param_7 = param_7 + 0x28;
          fVar5 = param_3;
          if (param_1 == pcVar1) goto LAB_05373500;
        }
        param_1 = param_1 + 1;
        param_6 = param_6 + 1;
        fVar5 = fVar5 + local_58;
        *(float *)(param_7 + 0x1c) = fVar6 + local_68;
        *(float *)(param_7 + 0x20) = fVar4 + fVar7 * local_64;
        param_7 = param_7 + 0x28;
      } while (param_1 != pcVar1);
    }
  }
LAB_05373500:
  if (param_9 != (LineMetrics *)0x0) {
    FontMetrics::FontMetrics((FontMetrics *)local_50);
    (**(code **)(*(long *)param_5 + 0x68))(param_5,(FontMetrics *)local_50);
    *(ulong *)param_9 = param_2;
    fVar5 = 0.0;
    *(float *)(param_9 + 0x18) = local_34;
    *(undefined4 *)(param_9 + 0x1c) = local_3c;
    if (param_2 != 0) {
      fVar5 = fVar8 - param_3;
    }
    *(float *)(param_9 + 0x10) = fVar5;
  }
  if (param_10 != (ulong *)0x0) {
    *param_10 = uVar3;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


/* EA::Text::LayoutSimple(char16_t const*, unsigned long, float, float, EA::Text::Font*,
   EA::Text::LineLayout&, EA::Text::LayoutSettings*, unsigned int) */

undefined8
EA::Text::LayoutSimple
          (wchar16 *param_1,ulong param_2,float param_3,float param_4,Font *param_5,
          LineLayout *param_6,LayoutSettings *param_7,uint param_8)

{
  ushort *puVar1;
  GlyphLayoutInfo *pGVar2;
  undefined8 uVar3;
  
  param_6[0x150] = (LineLayout)0x1;
  eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  resize((vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *)(param_6 + 0x58),param_2);
  eastl::
  vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::resize((vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(param_6 + 0xa8),param_2);
  puVar1 = (ushort *)FUN_0536f404(*(undefined8 *)(param_6 + 0x58));
  pGVar2 = (GlyphLayoutInfo *)FUN_0536f408(*(undefined8 *)(param_6 + 0xa8));
  uVar3 = LayoutSimple(param_1,param_2,param_3,param_4,param_5,puVar1,pGVar2,param_7,
                       (LineMetrics *)(param_6 + 0x120),(ulong *)(param_6 + 0x140));
  if ((param_8 & 1) != 0) {
    eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::assign((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(param_6 + 8),param_1,param_2);
  }
  return uVar3;
}


/* EA::Text::LayoutSimple(char const*, unsigned long, float, float, EA::Text::Font*,
   EA::Text::LineLayout&, EA::Text::LayoutSettings*, unsigned int) */

undefined8
EA::Text::LayoutSimple
          (char *param_1,ulong param_2,float param_3,float param_4,Font *param_5,LineLayout *param_6
          ,LayoutSettings *param_7,uint param_8)

{
  byte *pbVar1;
  ushort *puVar2;
  GlyphLayoutInfo *pGVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  param_6[0x150] = (LineLayout)0x1;
  eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  resize((vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *)(param_6 + 0x58),param_2);
  eastl::
  vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::resize((vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(param_6 + 0xa8),param_2);
  puVar2 = (ushort *)FUN_0536f404(*(undefined8 *)(param_6 + 0x58));
  pGVar3 = (GlyphLayoutInfo *)FUN_0536f408(*(undefined8 *)(param_6 + 0xa8));
  uVar4 = LayoutSimple(param_1,param_2,param_3,param_4,param_5,puVar2,pGVar3,param_7,
                       (LineMetrics *)(param_6 + 0x120),(ulong *)(param_6 + 0x140));
  if (((param_8 & 1) != 0) &&
     (eastl::
      basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
      resize((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(param_6 + 8),param_2), param_2 != 0)) {
    uVar6 = *(undefined8 *)(param_6 + 8);
    uVar5 = 0;
    do {
      puVar2 = (ushort *)FUN_0536f364(uVar6,uVar5);
      pbVar1 = (byte *)(param_1 + uVar5);
      uVar5 = uVar5 + 1;
      *puVar2 = (ushort)*pbVar1;
    } while (uVar5 != param_2);
    return uVar4;
  }
  return uVar4;
}


/* EA::Text::IsSpace(char16_t, int, bool) */

bool EA::Text::IsSpace(wchar16 param_1,int param_2,bool param_3)

{
  uint uVar1;
  
  uVar1 = FUN_05378bcc(param_1);
  if (!param_3) {
    return (uVar1 & param_2) != 0;
  }
  return (uVar1 & param_2) == param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GetCharName(char16_t, char16_t*, unsigned int) */

void EA::Text::GetCharName(wchar16 param_1,wchar16 *param_2,uint param_3)

{
  undefined8 uVar1;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  long local_8;
  
  uVar1 = 0;
  local_8 = ___stack_chk_guard;
  if (6 < param_3) {
    StdC::Sprintf((char *)&local_28,"0x%04x",(ulong)(ushort)param_1);
    param_2[6] = L'\0';
    uVar1 = 6;
    *param_2 = (ushort)local_28;
    param_2[1] = (ushort)local_27;
    param_2[2] = (ushort)local_26;
    param_2[3] = (ushort)local_25;
    param_2[4] = (ushort)local_24;
    param_2[5] = (ushort)local_23;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* EA::Text::GetMirrorChar(char16_t) */

wchar16 EA::Text::GetMirrorChar(wchar16 param_1)

{
  wchar16 wVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  if (gnMirrorPairArrayCount < 0) {
    return param_1;
  }
  uVar3 = (ulong)(uint)(gnMirrorPairArrayCount >> 1);
  uVar6 = -(ulong)((uint)(gnMirrorPairArrayCount >> 1) >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
  wVar1 = *(wchar16 *)(gpMirrorPairArray + uVar6);
  iVar5 = 0;
  iVar4 = gnMirrorPairArrayCount;
  do {
    if (wVar1 == param_1) {
      return *(wchar16 *)(gpMirrorPairArray + uVar6 + 2);
    }
    if ((ushort)param_1 < (ushort)wVar1) {
      iVar4 = (int)uVar3 + -1;
      iVar2 = (iVar4 + iVar5) - (iVar4 + iVar5 >> 0x1f);
      if (iVar4 < iVar5) {
        return param_1;
      }
    }
    else {
      iVar5 = (int)uVar3 + 1;
      iVar2 = (iVar4 + iVar5) - (iVar4 + iVar5 >> 0x1f);
      if (iVar4 < iVar5) {
        return param_1;
      }
    }
    uVar3 = (ulong)(uint)(iVar2 >> 1);
    uVar6 = -(ulong)((uint)(iVar2 >> 1) >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
    wVar1 = *(wchar16 *)(gpMirrorPairArray + uVar6);
  } while( true );
}


/* EA::Text::IsCharIdeographic(char16_t) */

bool EA::Text::IsCharIdeographic(wchar16 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  
  bVar3 = false;
  if (0x3000 < (ushort)param_1) {
    uVar4 = (uint)(ushort)param_1;
    bVar1 = uVar4 - 0x3400 < 0x19b6;
    bVar2 = uVar4 - 0x4e00 < 0x51bc;
    bVar3 = bVar1 || bVar2;
    if ((((!bVar1 && !bVar2) && (bVar3 = true, 0x12d < uVar4 - 0xf900)) && (0x69 < uVar4 - 0xfa70))
       && ((1 < uVar4 - 0x3006 && (8 < uVar4 - 0x3021)))) {
      bVar3 = uVar4 - 0x3038 < 3;
    }
  }
  return bVar3;
}


/* EA::Text::IsCharWhiteSpace(char16_t) */

bool EA::Text::IsCharWhiteSpace(wchar16 param_1)

{
  bool bVar1;
  uint uVar2;
  
  if ((ushort)param_1 < 0x2000) {
    bVar1 = (ushort)param_1 - 9 < 5 || ((ushort)param_1 & 0xffffff7f) == 0x20;
  }
  else {
    uVar2 = (uint)(ushort)param_1;
    bVar1 = true;
    if ((10 < uVar2 - 0x2000) && (1 < (uVar2 - 0x2028 & 0xffff))) {
      return uVar2 == 0x3000 || (uVar2 == 0x205f || uVar2 == 0x202f);
    }
  }
  return bVar1;
}


/* EA::Text::IsCharDigit(char16_t, int&) */

undefined8 EA::Text::IsCharDigit(wchar16 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (ushort)param_1 - 0x30;
  if ((9 < uVar2) && (uVar2 = (ushort)param_1 - 0xff10, 9 < uVar2)) {
    uVar1 = (uint)(ushort)param_1;
    uVar2 = uVar1 - 0xe50;
    if ((9 < uVar2) && ((uVar2 = uVar1 - 0x660, 9 < uVar2 && (uVar2 = uVar1 - 0x966, 9 < uVar2)))) {
      return 0;
    }
  }
  *param_2 = uVar2;
  return 1;
}


/* EA::Text::GetBidiClass(char16_t) */

undefined1 EA::Text::GetBidiClass(wchar16 param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (uint)(ushort)param_1;
  if ((ushort)param_1 < 0x100) {
    return (&DAT_05766ce0)[(int)uVar2];
  }
  uVar1 = 1;
  if ((((0x6bbb < uVar2 - 0x3400) && (uVar3 = (uint)(ushort)param_1, 0x2ba3 < uVar3 - 0xac00)) &&
      (uVar1 = 4, 9 < uVar3 - 0xff10)) && (uVar1 = 0xc, 10 < uVar3 - 0x2000)) {
    if ((uVar3 == 0x2028) || (uVar3 == 0x3000)) {
      return 0xc;
    }
    uVar1 = 6;
    if (0x6f < uVar3 - 0x300) {
      if ((uVar3 == 0x60c) || (uVar3 == 0x202f)) {
        return 7;
      }
      uVar1 = 9;
      if (0x2f < uVar3 - 0x20a0) {
        uVar4 = (uint)(ushort)param_1;
        uVar1 = 6;
        if (6 < uVar4 - 0xe34) {
          if ((uVar4 == 0xe31) || (uVar4 - 0xe47 < 8)) {
            return 6;
          }
          if (uVar4 - 0x590 < 0x70) {
            uVar1 = 2;
            if (uVar4 < 0x5c5) {
              uVar1 = 6;
            }
            return uVar1;
          }
          if (uVar4 - 0x600 < 0x100) {
            return (&DAT_05766be0)[uVar4 - 0x600];
          }
          uVar1 = 10;
          if ((((uVar4 != 0xfeff) && (2 < uVar3 - 0x200b)) && (3 < uVar3 - 0x2060)) &&
             (5 < uVar3 - 0x2018)) {
            switch(uVar3) {
            case 0x202a:
              return 0x11;
            case 0x202b:
              return 0xf;
            case 0x202c:
              return 0x12;
            case 0x202d:
              return 0x10;
            case 0x202e:
              return 0xe;
            }
            if (uVar4 != 0x200e) {
              if (uVar4 == 0x200f) {
                return 2;
              }
              if (uVar4 - 0xeb4 < 6) {
                return 6;
              }
              if (uVar4 - 0xebb < 2) {
                return 6;
              }
              if (uVar2 - 0xec8 < 6) {
                return 6;
              }
              if (uVar2 == 0xeb1) {
                return 6;
              }
            }
            return 1;
          }
        }
      }
    }
  }
  return uVar1;
}


/* EA::Text::IsCharSTerm(char16_t) */

bool EA::Text::IsCharSTerm(wchar16 param_1)

{
  bool bVar1;
  bool bVar2;
  
  if ((ushort)param_1 < 0x500) {
    bVar2 = param_1 == L'?' || (param_1 == L'.' || param_1 == L'!');
  }
  else if ((ushort)param_1 < 0xfe52) {
    if ((ushort)param_1 < 0x1362) {
      bVar2 = true;
      if ((((param_1 & 0xfffdU) != 0x55c) &&
          (bVar2 = param_1 == L'։' || param_1 == L'؟', param_1 != L'։' && param_1 != L'؟')) &&
         (bVar1 = (ushort)(param_1 + L'豈') < 3, bVar2 = param_1 == L'۔' || bVar1,
         param_1 != L'۔' && !bVar1)) {
        if ((ushort)(param_1 + L'\xf69c') < 2) {
          return true;
        }
        return (ushort)(param_1 + L'\xefb6') < 2;
      }
    }
    else {
      bVar1 = (ushort)(param_1 + L'\xec99') < 2;
      bVar2 = param_1 == L'።' || bVar1;
      if (((param_1 != L'።' && !bVar1) && (bVar2 = true, param_1 != L'᙮')) &&
         (bVar2 = param_1 == L'᠃' || param_1 == L'᠉', param_1 != L'᠃' && param_1 != L'᠉')) {
        if ((ushort)(param_1 + L'\xe6bc') < 2) {
          return true;
        }
        if ((ushort)(param_1 + L'\xdfc4') < 2) {
          return true;
        }
        if ((ushort)(param_1 + L'\xdfb9') < 2) {
          return true;
        }
        return param_1 == L'。' || param_1 == L'⁉';
      }
    }
  }
  else {
    bVar1 = (ushort)(param_1 + L'ƪ') < 2;
    bVar2 = param_1 == L'﹒' || bVar1;
    if ((param_1 != L'﹒' && !bVar1) && (bVar2 = true, param_1 != L'！')) {
      return param_1 == L'｡' || (param_1 == L'？' || param_1 == L'．');
    }
  }
  return bVar2;
}


/* EA::Text::IsCharHyphen(char16_t) */

undefined8 EA::Text::IsCharHyphen(wchar16 param_1)

{
  if ((ushort)param_1 < 0x2012) {
    if (((ushort)param_1 < 0x2010) && (param_1 != L'­')) {
      if ((ushort)param_1 < 0xae) {
        if (param_1 == L'-') {
          return 1;
        }
      }
      else {
        if (param_1 == L'֊') {
          return 1;
        }
        if (param_1 == L'᠆') {
          return 1;
        }
      }
      return 0;
    }
  }
  else if (param_1 != L'﹣') {
    if (0xfe63 < (ushort)param_1) {
      if (param_1 == L'－') {
        return 1;
      }
      if (param_1 != L'･') {
        return 0;
      }
      return 1;
    }
    if (param_1 == L'⸗') {
      return 1;
    }
    if (param_1 != L'・') {
      return 0;
    }
    return 1;
  }
  return 1;
}


/* EA::Text::GetCharBlock(char16_t) */

long EA::Text::GetCharBlock(wchar16 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if ((ushort)param_1 < 0x80) {
    return 1;
  }
  iVar3 = gnBlockTableEntryArrayCount + -1;
  if (-1 < iVar3) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + iVar3 >> 1;
      lVar2 = (long)iVar1 * 6;
      if ((uint)(ushort)param_1 < (uint)*(ushort *)(gBlockTableEntryArray + lVar2)) {
        iVar3 = iVar1 + -1;
      }
      else {
        iVar4 = iVar1 + 1;
        if ((uint)(ushort)param_1 <
            (uint)*(ushort *)(gBlockTableEntryArray + lVar2) +
            (uint)*(ushort *)(gBlockTableEntryArray + lVar2 + 2)) {
          return (long)(char)gBlockTableEntryArray[lVar2 + 4];
        }
      }
    } while (iVar4 <= iVar3);
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GetCharCategory(char16_t) */

void EA::Text::GetCharCategory(wchar16 param_1)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  ulong local_18 [3];
  
  local_18[1] = 0;
  local_18[0] = (ulong)(ushort)param_1;
  local_18[2] = ___stack_chk_guard;
  lVar3 = FUN_05378ca8(local_18);
  if ((*(long *)(lVar3 + -8) == 0) ||
     (uVar2 = (uint)(ushort)param_1 - (uint)*(ushort *)(lVar3 + -0x10),
     ((int)(uint)*(byte *)(*(long *)(lVar3 + -8) + (long)((int)uVar2 >> 3)) >> (uVar2 & 7) & 1U) ==
     0)) {
    uVar1 = *(undefined1 *)(lVar3 + -0xe);
  }
  else {
    uVar1 = *(undefined1 *)(lVar3 + -0xd);
  }
  if (local_18[2] == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* EA::Text::IsCharCategory(char16_t, int) */

bool EA::Text::IsCharCategory(wchar16 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = GetCharCategory(param_1);
  return (1 << (ulong)(uVar1 & 0x1f) & param_2) != 0;
}


/* EA::Text::IsCharAlphabetic(char16_t) */

char EA::Text::IsCharAlphabetic(wchar16 param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar6;
  uint uVar5;
  
  cVar3 = IsCharCategory(param_1,0x43e0);
  if (cVar3 == '\0') {
    if (param_1 == L'ٰ') {
      return '\x01';
    }
    uVar4 = (uint)(ushort)param_1;
    uVar5 = (uint)(ushort)param_1;
    if ((ushort)param_1 < 0x671) {
      if (uVar5 == 0x5bf) {
        return '\x01';
      }
      if (uVar5 == 0x5c7) {
        return '\x01';
      }
      if (uVar4 == 0x345) {
        return '\x01';
      }
    }
    else {
      if (uVar5 == 0xe31) {
        return '\x01';
      }
      if (uVar4 < 0xe32) {
        if (uVar5 == 0x6ed) {
          return '\x01';
        }
      }
      else {
        if (uVar5 == 0xe4d) {
          return '\x01';
        }
        if (uVar5 == 0xfb1e) {
          return '\x01';
        }
      }
    }
    if (0x5af < uVar5) {
      uVar6 = (uint)(ushort)param_1;
      bVar1 = uVar6 - 0xe34 < 7;
      bVar2 = uVar6 - 0x5b0 < 10;
      cVar3 = bVar1 || bVar2;
      if ((((((!bVar1 && !bVar2) && (cVar3 = '\x01', 2 < uVar6 - 0x5bb)) && (1 < uVar6 - 0x5c1)) &&
           ((1 < uVar6 - 0x5c4 && (5 < uVar6 - 0x610)))) &&
          ((0xc < uVar6 - 0x64b && ((5 < uVar6 - 0x659 && (6 < uVar5 - 0x6d6)))))) &&
         (3 < uVar5 - 0x6e1)) {
        if (uVar5 - 0x6e7 < 2) {
          return '\x01';
        }
        cVar3 = '\x01';
        if ((2 < uVar5 - 0x901) && (0xe < (uVar4 - 0x93e & 0xffff))) {
          cVar3 = uVar4 - 0x962 < 2;
        }
      }
    }
  }
  return cVar3;
}


/* EA::Text::IsGraphemeExtend(char16_t) */

bool EA::Text::IsGraphemeExtend(wchar16 param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = IsCharCategory(param_1,0x1c00);
  bVar2 = false;
  if (cVar1 != '\0') {
    bVar2 = param_1 != L'͏' && (param_1 != L'ฺ' && param_1 != L'्');
  }
  return bVar2;
}


/* EA::Text::GetHangulSyllableType(char16_t) */

undefined4 EA::Text::GetHangulSyllableType(wchar16 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (0x10ff < (ushort)param_1) {
    if ((ushort)param_1 < 0x1200) {
      uVar2 = 1;
      if ((0x115f < (ushort)param_1) && (uVar2 = 2, 0x11a7 < (ushort)param_1)) {
        uVar2 = 3;
      }
    }
    else {
      uVar1 = (ushort)param_1 - 0xac00;
      if (uVar1 < 0x2ba4) {
        uVar2 = 4;
        if (uVar1 != ((int)uVar1 / 0x1c) * 0x1c) {
          uVar2 = 5;
        }
        return uVar2;
      }
    }
  }
  return uVar2;
}


/* EA::Text::GetLineBreakCategory(char16_t) */

undefined1 EA::Text::GetLineBreakCategory(wchar16 param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (uint)(ushort)param_1;
  if ((ushort)param_1 < 0x100) {
    return (&DAT_05766940)[(int)uVar2];
  }
  if (uVar2 - 0x3000 < 0x100) {
    return (&DAT_05766ae0)[uVar2 - 0x3000];
  }
  uVar3 = (uint)(ushort)param_1;
  if (uVar3 - 0xff00 < 0x100) {
    return (&DAT_057667c0)[uVar3 - 0xff00];
  }
  uVar1 = 0xc;
  if ((0x58ff < uVar3 - 0x4e00) && (uVar1 = 0x13, 0x73 < uVar3 - 0x300)) {
    if (uVar3 - 0x2000 < 0x62) {
      return (&DAT_05766750)[uVar3 - 0x2000];
    }
    uVar4 = uVar3 - 0xac00;
    if (uVar4 < 0x2ba4) {
      uVar1 = 0x16;
      if (uVar4 == (uVar4 / 0x1c) * 0x1c) {
        uVar1 = 0x15;
      }
      return uVar1;
    }
    if (uVar3 - 0x1100 < 0x100) {
      uVar1 = 0x17;
      if (0x5f < uVar3 - 0x1100) {
        uVar1 = 0x18;
        if (0x47 < uVar3 - 0x1160) {
          uVar1 = 0x19;
        }
        return uVar1;
      }
    }
    else if ((1 < uVar2 - 0x302e) && (uVar1 = 0xc, 0x5d < uVar2 - 0x3131)) {
      uVar4 = (uint)(ushort)param_1;
      if (uVar3 - 0x374 < 0x21c) {
        if (uVar3 - 0x374 < 0x10f) {
          uVar1 = 0xb;
          if (uVar2 == 0x37e) {
            uVar1 = 7;
          }
          return uVar1;
        }
        uVar1 = 0xb;
        if (uVar4 - 0x483 < 7) {
          uVar1 = 0x13;
        }
        return uVar1;
      }
      if (((0x6f < uVar3 - 0x590) ||
          ((uVar1 = 0x13, 0x3e < uVar4 - 0x591 && (uVar1 = 0xb, 0x7a < uVar4 - 0x5d0)))) &&
         ((0x12f < uVar4 - 0x600 ||
          ((((uVar1 = 0x13, 0x14 < uVar4 - 0x64b && (uVar1 = 10, 0xc < uVar4 - 0x660)) &&
            (uVar1 = 0xb, 0x66 < uVar4 - 0x66d)) &&
           (((uVar1 = 5, uVar4 != 0x6d4 && (uVar1 = 0x13, 0x24 < uVar4 - 0x6d5)) &&
            (uVar1 = 0xb, 0x35 < uVar2 - 0x6fa)))))))) {
        if (uVar2 - 0xe00 < 0x5c) {
          return (&DAT_057666f0)[uVar2 - 0xe00];
        }
        uVar1 = 0xb;
        if (uVar4 - 0x900 < 0x7e) {
          return (&DAT_057668c0)[uVar4 - 0x900];
        }
      }
    }
  }
  return uVar1;
}


/* EA::Text::GetDirection(char16_t const*, unsigned int) */

undefined8 EA::Text::GetDirection(wchar16 *param_1,uint param_2)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  int iVar3;
  
  pwVar1 = param_1 + param_2;
  while( true ) {
    if (param_1 == pwVar1) {
      return 2;
    }
    wVar2 = *param_1;
    param_1 = param_1 + 1;
    iVar3 = GetBidiClass(wVar2);
    if ((iVar3 == 2) || (iVar3 == 5)) break;
    if (iVar3 == 1) {
      return 0;
    }
  }
  return 1;
}


/* EA::Text::GetCombiningClass(char16_t) */

undefined1 EA::Text::GetCombiningClass(wchar16 param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  iVar2 = 0;
  if (0x2dff < ((ushort)param_1 - 0x300 & 0xffff)) {
    return 0;
  }
  iVar4 = 0x71;
  do {
    uVar1 = iVar2 + iVar4 >> 1;
    uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    if ((uint)(ushort)param_1 < (uint)*(ushort *)(gCombiningClassEntryArray + uVar3)) {
      iVar4 = uVar1 - 1;
    }
    else {
      iVar2 = uVar1 + 1;
      if ((uint)(ushort)param_1 <
          (uint)*(ushort *)(gCombiningClassEntryArray + uVar3) +
          (uint)(byte)gCombiningClassEntryArray[uVar3 + 2]) {
        return gCombiningClassEntryArray[uVar3 + 3];
      }
    }
  } while (iVar2 <= iVar4);
  return 0;
}


/* EA::Text::ASCIICompatibleEncoding(char16_t const*, unsigned int, char*, unsigned int) */

uint EA::Text::ASCIICompatibleEncoding(wchar16 *param_1,uint param_2,char *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
      if (uVar1 < param_4) {
        param_3[uVar3] = (char)*param_1;
        uVar3 = (ulong)((int)uVar3 + 1);
      }
      uVar2 = (uint)uVar3;
      param_1 = param_1 + 1;
    } while (uVar1 != param_2);
  }
  if (uVar2 < param_4) {
    param_3[uVar2] = '\0';
  }
  return param_2;
}


/* EA::Text::BidiClassify(char16_t const*, EA::Text::AnalysisInfo*, unsigned long) */

undefined8 EA::Text::BidiClassify(wchar16 *param_1,AnalysisInfo *param_2,ulong param_3)

{
  wchar16 *pwVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  pwVar1 = param_1 + param_3;
  uVar4 = 0;
  do {
    if (param_1 == pwVar1) {
      return uVar4;
    }
    while( true ) {
      uVar3 = GetBidiClass(*param_1);
      if ((uVar3 == 5) || (uVar3 == 2)) {
        uVar4 = 1;
      }
      uVar2 = *(ushort *)(param_2 + 0x10);
      if (2 < uVar3 - 0xb) break;
      param_1 = param_1 + 1;
      *(ushort *)(param_2 + 0x10) = uVar2 & 0xf07f;
      param_2 = param_2 + 0x18;
      if (pwVar1 == param_1) {
        return uVar4;
      }
    }
    param_1 = param_1 + 1;
    *(ushort *)(param_2 + 0x10) = uVar2 & 0xf000 | uVar2 & 0x7f | (ushort)((uVar3 & 0x1f) << 7);
    param_2 = param_2 + 0x18;
  } while( true );
}


/* EA::Text::BidiResolveExplicitImpl(int, EA::Text::AnalysisInfo*, unsigned long,
   EA::Text::BidiClass, int) */

ulong EA::Text::BidiResolveExplicitImpl
                (uint param_1,long param_2,ulong param_3,uint param_4,int param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    iVar8 = param_5;
    do {
      lVar7 = uVar6 * 0x18;
      lVar3 = param_2 + lVar7;
      uVar5 = *(ushort *)(lVar3 + 0x10) >> 7 & 0x1f;
      switch(uVar5) {
      case 0xe:
      case 0xf:
        uVar2 = FUN_05379b7c(param_1);
        if (0xf < (int)(uint)uVar2) {
LAB_05379e1c:
          iVar8 = iVar8 + 1;
          uVar5 = 10;
          *(ushort *)(lVar3 + 0x10) =
               *(ushort *)(lVar3 + 0x10) & 0xf000 | *(ushort *)(lVar3 + 0x10) & 0x7f | 0x500;
          goto switchD_05379d1c_default;
        }
        *(byte *)(lVar3 + 0x11) = *(byte *)(lVar3 + 0x11) & 0xf | (byte)(((uint)uVar2 & 0xf) << 4);
        uVar4 = 2;
        if (uVar5 == 0xf) {
          uVar4 = 0;
        }
        *(ushort *)(lVar3 + 0x10) =
             *(ushort *)(lVar3 + 0x10) & 0xf000 | *(ushort *)(lVar3 + 0x10) & 0x7f | 0x500;
        lVar3 = BidiResolveExplicitImpl(uVar2,param_2 + lVar7 + 0x18,(param_3 - 1) - uVar6,uVar4);
        uVar6 = uVar6 + lVar3;
        break;
      case 0x10:
      case 0x11:
        uVar2 = FUN_05379b70(param_1);
        if (0xf < (int)(uint)uVar2) goto LAB_05379e1c;
        *(byte *)(lVar3 + 0x11) = *(byte *)(lVar3 + 0x11) & 0xf | (byte)(((uint)uVar2 & 0xf) << 4);
        *(ushort *)(lVar3 + 0x10) =
             *(ushort *)(lVar3 + 0x10) & 0xf000 | *(ushort *)(lVar3 + 0x10) & 0x7f | 0x500;
        lVar3 = BidiResolveExplicitImpl
                          (uVar2,param_2 + lVar7 + 0x18,(param_3 - 1) - uVar6,uVar5 != 0x11);
        uVar6 = uVar6 + lVar3;
        break;
      case 0x12:
        *(ushort *)(lVar3 + 0x10) =
             *(ushort *)(lVar3 + 0x10) & 0xf000 | *(ushort *)(lVar3 + 0x10) & 0x7f | 0x500;
        uVar9 = param_3;
        if ((iVar8 < 1) || (uVar9 = uVar6, iVar8 <= param_5)) {
          uVar5 = 10;
          param_3 = uVar9;
        }
        else {
          iVar8 = iVar8 + -1;
          uVar5 = 10;
        }
      default:
switchD_05379d1c_default:
        if (param_4 != 0) {
          uVar5 = param_4;
        }
        *(byte *)(lVar3 + 0x11) = *(byte *)(lVar3 + 0x11) & 0xf | (byte)((param_1 & 0xf) << 4);
        uVar1 = *(ushort *)(lVar3 + 0x10);
        if ((uVar1 & 0xf80) != 0x500) {
          *(ushort *)(lVar3 + 0x10) = uVar1 & 0xf000 | uVar1 & 0x7f | (ushort)((uVar5 & 0x1f) << 7);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3);
  }
  return uVar6;
}


/* EA::Text::BidiResolveExplicit(int, EA::Text::AnalysisInfo*, unsigned long) */

void EA::Text::BidiResolveExplicit(int param_1,AnalysisInfo *param_2,ulong param_3)

{
  BidiResolveExplicitImpl(param_1,param_2,param_3,0,0);
  return;
}


/* EA::Text::BidiResolveWeak(int, EA::Text::AnalysisInfo*, unsigned long) */

void EA::Text::BidiResolveWeak(int param_1,AnalysisInfo *param_2,ulong param_3)

{
  AnalysisInfo AVar1;
  AnalysisInfo *pAVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if ((param_1 & 1U) == 0) {
    iVar3 = 2;
    iVar7 = 2;
  }
  else {
    iVar3 = 1;
    iVar7 = 1;
  }
  if (param_3 == 0) {
    uVar8 = (ulong)(uint)param_1;
    uVar9 = 0;
    lVar10 = 0;
    iVar7 = iVar3;
LAB_0537a020:
    iVar3 = FUN_05379b88(uVar8 & 0xffffffff);
    iVar7 = FUN_05379bd4(*(undefined4 *)(&DAT_05766df0 + ((long)iVar7 * 0xb + (long)iVar3) * 4));
    if (iVar7 != 0xf) {
      FUN_05379b9c(param_2 + (uVar9 - lVar10) * 0x18,lVar10,iVar7);
      return;
    }
    return;
  }
  uVar8 = (ulong)(uint)param_1;
  uVar9 = 1;
  lVar10 = 0;
  pAVar2 = param_2;
  do {
    uVar6 = *(ushort *)(pAVar2 + 0x10) >> 7 & 0x1f;
    if ((*(ushort *)(pAVar2 + 0x10) & 0xf80) == 0x500) {
      AVar1 = pAVar2[0x11];
      uVar6 = (uint)uVar8;
      pAVar2[0x11] = (AnalysisInfo)((byte)AVar1 & 0xf | (byte)((uVar6 & 0xf) << 4));
      if (uVar9 == param_3) {
        if (uVar6 == param_1) goto LAB_0537a0f4;
        uVar6 = FUN_05379b88(uVar8 & 0xffffffff);
        uVar6 = uVar6 & 0x1f;
        *(ushort *)(pAVar2 + 0x10) =
             *(ushort *)(pAVar2 + 0x10) & 0xf000 |
             *(ushort *)(pAVar2 + 0x10) & 0x7f | (ushort)(uVar6 << 7);
        goto LAB_05379eec;
      }
      if (param_3 <= uVar9) {
LAB_0537a0f4:
        if (lVar10 != 0) {
LAB_0537a014:
          lVar10 = lVar10 + 1;
          goto joined_r0x0537a018;
        }
        goto LAB_0537a020;
      }
      uVar5 = (uint)((long)((ulong)(byte)pAVar2[0x29] << 0x38) >> 0x3c);
      if ((uVar5 != uVar6) && ((*(ushort *)(pAVar2 + 0x28) & 0xf80) != 0x500)) {
        if ((int)uVar6 < (int)uVar5) {
          uVar6 = uVar5;
        }
        pAVar2[0x11] = (AnalysisInfo)((byte)AVar1 & 0xf | (byte)((uVar6 & 0xf) << 4));
        uVar6 = FUN_05379b88();
        uVar6 = uVar6 & 0x1f;
        *(ushort *)(pAVar2 + 0x10) =
             *(ushort *)(pAVar2 + 0x10) & 0xf000 |
             *(ushort *)(pAVar2 + 0x10) & 0x7f | (ushort)(uVar6 << 7);
        uVar8 = (long)((ulong)(byte)pAVar2[0x29] << 0x38) >> 0x3c;
        goto LAB_05379eec;
      }
      if (lVar10 != 0) goto LAB_0537a014;
    }
    else {
LAB_05379eec:
      uVar5 = *(uint *)(&DAT_05766df0 + ((long)iVar7 * 0xb + (long)(int)uVar6) * 4);
      iVar3 = FUN_05379bd4(uVar5);
      lVar11 = lVar10;
      if (iVar3 != 0xf) {
        lVar11 = 0;
        FUN_05379b9c(param_2 + ((uVar9 - 1) - lVar10) * 0x18,lVar10,iVar3);
      }
      uVar4 = FUN_05379bcc(uVar5);
      if (uVar4 != 0xf) {
        *(ushort *)(pAVar2 + 0x10) =
             *(ushort *)(pAVar2 + 0x10) & 0xf000 |
             *(ushort *)(pAVar2 + 0x10) & 0x7f | (ushort)((uVar4 & 0x1f) << 7);
      }
      lVar10 = lVar11 + ((ulong)(uVar5 >> 8) & 1);
      iVar7 = *(int *)(&DAT_057671e0 + ((long)(int)uVar6 + (long)iVar7 * 10) * 4);
joined_r0x0537a018:
      if (param_3 <= uVar9) goto LAB_0537a020;
    }
    uVar9 = uVar9 + 1;
    pAVar2 = pAVar2 + 0x18;
  } while( true );
}


/* EA::Text::BidiResolveNeutral(int, EA::Text::AnalysisInfo*, unsigned long) */

void EA::Text::BidiResolveNeutral(int param_1,AnalysisInfo *param_2,ulong param_3)

{
  AnalysisInfo *pAVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  AnalysisInfo *pAVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = (ulong)(uint)param_1;
  uVar5 = param_1 & 1U ^ 1;
  if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    uVar11 = 0;
    lVar9 = 0;
    pAVar6 = param_2;
    do {
      while( true ) {
        uVar8 = (ulong)(*(ushort *)(pAVar6 + 0x10) >> 7) & 0x1f;
        if ((*(ushort *)(pAVar6 + 0x10) & 0xf80) != 0x500) break;
        uVar11 = uVar11 + 1;
        if (lVar9 != 0) {
          lVar9 = lVar9 + 1;
        }
        pAVar6 = pAVar6 + 0x18;
        if (uVar11 == param_3) goto LAB_0537a1e4;
      }
      uVar2 = *(uint *)(&DAT_05767500 + ((long)(int)uVar5 * 5 + uVar8) * 4);
      iVar4 = FUN_05379bdc(uVar2,uVar7 & 0xffffffff);
      lVar10 = lVar9;
      if (iVar4 != 0) {
        lVar10 = 0;
        FUN_05379b9c(param_2 + (uVar11 - lVar9) * 0x18,lVar9,iVar4);
      }
      uVar3 = FUN_05379bf4(uVar2);
      lVar9 = lVar10 + ((ulong)(uVar2 >> 8) & 1);
      if (uVar3 != 0) {
        *(ushort *)(pAVar6 + 0x10) =
             *(ushort *)(pAVar6 + 0x10) & 0xf000 |
             *(ushort *)(pAVar6 + 0x10) & 0x7f | (ushort)((uVar3 & 0x1f) << 7);
      }
      uVar11 = uVar11 + 1;
      pAVar1 = pAVar6 + 0x11;
      pAVar6 = pAVar6 + 0x18;
      uVar5 = *(uint *)(&DAT_05767160 + ((long)(int)uVar5 * 5 + uVar8) * 4);
      uVar7 = (long)((ulong)(byte)*pAVar1 << 0x38) >> 0x3c;
    } while (uVar11 != param_3);
  }
LAB_0537a1e4:
  iVar4 = FUN_05379b88(uVar7 & 0xffffffff);
  iVar4 = FUN_05379bdc(*(undefined4 *)(&DAT_05767500 + ((long)(int)uVar5 * 5 + (long)iVar4) * 4),
                       uVar7 & 0xffffffff);
  if (iVar4 == 0) {
    return;
  }
  FUN_05379b9c(param_2 + (param_3 - lVar9) * 0x18,lVar9,iVar4);
  return;
}


/* EA::Text::BidiResolveImplicit(EA::Text::AnalysisInfo*, unsigned long) */

void EA::Text::BidiResolveImplicit(AnalysisInfo *param_1,ulong param_2)

{
  AnalysisInfo *pAVar1;
  long lVar2;
  
  if (param_2 != 0) {
    pAVar1 = param_1 + param_2 * 0x18;
    do {
      if ((*(ushort *)(param_1 + 0x10) & 0xf80) != 0x500) {
        lVar2 = (ulong)(byte)param_1[0x11] << 0x38;
        param_1[0x11] =
             (AnalysisInfo)
             ((byte)param_1[0x11] & 0xf |
             (byte)((*(int *)(&DAT_05767580 +
                             ((lVar2 >> 0x3c & 1U) * 4 +
                             (long)(int)((*(ushort *)(param_1 + 0x10) >> 7 & 0x1f) - 1)) * 4) +
                     (int)(lVar2 >> 0x3c) & 0xfU) << 4));
      }
      param_1 = param_1 + 0x18;
    } while (param_1 != pAVar1);
  }
  return;
}


/* EA::Text::Bidi(int, char16_t const*, EA::Text::AnalysisInfo*, unsigned long) */

void EA::Text::Bidi(int param_1,wchar16 *param_2,AnalysisInfo *param_3,ulong param_4)

{
  char cVar1;
  
  cVar1 = BidiClassify(param_2,param_3,param_4);
  if (cVar1 == '\0') {
    return;
  }
  BidiResolveExplicit(param_1,param_3,param_4);
  BidiResolveWeak(param_1,param_3,param_4);
  BidiResolveNeutral(param_1,param_3,param_4);
  BidiResolveImplicit(param_3,param_4);
  return;
}


/* EA::Text::StackAllocatorCoreAllocate(unsigned long, unsigned long*, void*) */

void EA::Text::StackAllocatorCoreAllocate(ulong param_1,ulong *param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)param_3;
  *param_2 = param_1;
  (**(code **)(lVar1 + 0x10))(param_3,param_1,"EAText/Stack",0);
  return;
}


/* EA::Text::StackAllocatorCoreFree(void*, void*) */

void EA::Text::StackAllocatorCoreFree(void *param_1,void *param_2)

{
  if (*(code **)(*(long *)param_2 + 0x20) != CoreAllocatorStack::Free) {
    (**(code **)(*(long *)param_2 + 0x20))(param_2,param_1,0);
  }
  return;
}


/* EA::Text::TEMPNAMEPLACEHOLDERVALUE(EA::Text::OTFTagStruct, unsigned int) */

bool EA::Text::operator==(int param_1,int param_2)

{
  return param_1 == param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::TEMPNAMEPLACEHOLDERVALUE(EA::Text::OTFTagStruct, char const*) */

void EA::Text::operator==(undefined4 param_1,char *param_2)

{
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,param_2);
  operator==(param_1,local_10[0]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::TEMPNAMEPLACEHOLDERVALUE(EA::Text::OTFTagStruct, unsigned int) */

bool EA::Text::operator!=(int param_1,int param_2)

{
  return param_1 != param_2;
}


/* EA::Text::OTFChainClassSet*
   EA::Text::create_array<EA::Text::OTFChainClassSet>(EA::Allocator::StackAllocator*, unsigned long)
    */

OTFChainClassSet *
EA::Text::create_array<EA::Text::OTFChainClassSet>(StackAllocator *param_1,ulong param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)Allocator::StackAllocator::Malloc(param_1,param_2 * 0x10 + 8,true);
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = param_2;
    return (OTFChainClassSet *)(puVar1 + 1);
  }
  return (OTFChainClassSet *)0x0;
}


/* unsigned short* EA::Text::create_array<unsigned short>(EA::Allocator::StackAllocator*, unsigned
   long) */

ushort * EA::Text::create_array<unsigned_short>(StackAllocator *param_1,ulong param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)Allocator::StackAllocator::Malloc(param_1,param_2 * 2 + 8,true);
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = param_2;
    return (ushort *)(puVar1 + 1);
  }
  return (ushort *)0x0;
}


/* EA::Text::OTFRangeRecord*
   EA::Text::create_array<EA::Text::OTFRangeRecord>(EA::Allocator::StackAllocator*, unsigned long)
    */

OTFRangeRecord *
EA::Text::create_array<EA::Text::OTFRangeRecord>(StackAllocator *param_1,ulong param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)Allocator::StackAllocator::Malloc(param_1,param_2 * 6 + 8,true);
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = param_2;
    return (OTFRangeRecord *)(puVar1 + 1);
  }
  return (OTFRangeRecord *)0x0;
}


/* EA::Text::OTFScript* EA::Text::create_array<EA::Text::OTFScript>(EA::Allocator::StackAllocator*,
   unsigned long) */

OTFScript * EA::Text::create_array<EA::Text::OTFScript>(StackAllocator *param_1,ulong param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)Allocator::StackAllocator::Malloc(param_1,param_2 * 0x28 + 8,true);
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = param_2;
    return (OTFScript *)(puVar1 + 1);
  }
  return (OTFScript *)0x0;
}


/* EA::Text::OTFLookup* EA::Text::create_array<EA::Text::OTFLookup>(EA::Allocator::StackAllocator*,
   unsigned long) */

OTFLookup * EA::Text::create_array<EA::Text::OTFLookup>(StackAllocator *param_1,ulong param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)Allocator::StackAllocator::Malloc(param_1,param_2 * 0x18 + 8,true);
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = param_2;
    return (OTFLookup *)(puVar1 + 1);
  }
  return (OTFLookup *)0x0;
}


/* EA::Text::OTFLookupSubTableGsub*
   EA::Text::create_array<EA::Text::OTFLookupSubTableGsub>(EA::Allocator::StackAllocator*, unsigned
   long) */

OTFLookupSubTableGsub *
EA::Text::create_array<EA::Text::OTFLookupSubTableGsub>(StackAllocator *param_1,ulong param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)Allocator::StackAllocator::Malloc(param_1,param_2 * 0x70 + 8,true);
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = param_2;
    return (OTFLookupSubTableGsub *)(puVar1 + 1);
  }
  return (OTFLookupSubTableGsub *)0x0;
}


/* EA::Text::OTFClassRule*
   EA::Text::create_array<EA::Text::OTFClassRule>(EA::Allocator::StackAllocator*, unsigned long) */

OTFClassRule * EA::Text::create_array<EA::Text::OTFClassRule>(StackAllocator *param_1,ulong param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)Allocator::StackAllocator::Malloc(param_1,param_2 * 0x20 + 8,true);
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = param_2;
    return (OTFClassRule *)(puVar1 + 1);
  }
  return (OTFClassRule *)0x0;
}


/* EA::Text::OTFLookupRecord*
   EA::Text::create_array<EA::Text::OTFLookupRecord>(EA::Allocator::StackAllocator*, unsigned long)
    */

OTFLookupRecord *
EA::Text::create_array<EA::Text::OTFLookupRecord>(StackAllocator *param_1,ulong param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)Allocator::StackAllocator::Malloc(param_1,param_2 * 4 + 8,true);
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = param_2;
    return (OTFLookupRecord *)(puVar1 + 1);
  }
  return (OTFLookupRecord *)0x0;
}


/* EA::Text::OTFChainClassRule*
   EA::Text::create_array<EA::Text::OTFChainClassRule>(EA::Allocator::StackAllocator*, unsigned
   long) */

OTFChainClassRule *
EA::Text::create_array<EA::Text::OTFChainClassRule>(StackAllocator *param_1,ulong param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)Allocator::StackAllocator::Malloc(param_1,param_2 * 0x40 + 8,true);
  if (puVar1 != (ulong *)0x0) {
    *puVar1 = param_2;
    return (OTFChainClassRule *)(puVar1 + 1);
  }
  return (OTFChainClassRule *)0x0;
}


/* EA::Text::AssignArabicCharProperties(char16_t const*, unsigned long, EA::Text::GlyphInfo*) */

void EA::Text::AssignArabicCharProperties(wchar16 *param_1,ulong param_2,GlyphInfo *param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  GlyphInfo *pGVar7;
  
  pGVar7 = param_3 + 2;
  uVar6 = 0;
  if (param_2 != 0) {
    do {
      while( true ) {
        uVar3 = FUN_0537d6f0(param_1,param_2,uVar6,0xffffffff);
        iVar4 = FUN_0537d6f0(param_1,param_2,uVar6,0);
        iVar5 = FUN_0537d6f0(param_1,param_2,uVar6,1);
        if (iVar4 == 5) break;
        bVar1 = (uVar3 & 0xfffffffd) == 1;
        bVar2 = uVar3 == 2;
        if ((bVar1) || (bVar2)) {
          if (iVar4 == 4) {
LAB_0537db8c:
            *pGVar7 = (GlyphInfo)0xd;
          }
          else {
            if (iVar4 == 3) {
              if ((iVar5 - 1U < 2) || (iVar5 == 4)) goto LAB_0537db04;
LAB_0537db4c:
              if (!bVar1) {
                if (!bVar2) goto LAB_0537da98;
                if (iVar4 == 2) goto LAB_0537db7c;
              }
              break;
            }
            if (iVar4 != 2) goto LAB_0537db4c;
            if ((1 < iVar5 - 1U) && (iVar5 != 4)) {
              if ((!bVar1) && (!bVar2)) goto LAB_0537da98;
LAB_0537db7c:
              if ((iVar5 - 1U < 2) || (iVar5 == 4)) goto LAB_0537da98;
              goto LAB_0537db8c;
            }
            *pGVar7 = (GlyphInfo)0xb;
          }
        }
        else {
          if ((iVar4 != 3) || ((1 < iVar5 - 1U && (iVar5 != 4)))) {
LAB_0537da98:
            if ((iVar4 != 2) || ((uVar3 - 1 < 3 || ((1 < iVar5 - 1U && (iVar5 != 4)))))) break;
          }
LAB_0537db04:
          *pGVar7 = (GlyphInfo)0x7;
        }
        uVar6 = uVar6 + 1;
        pGVar7 = pGVar7 + 4;
        if (uVar6 == param_2) {
          return;
        }
      }
      uVar6 = uVar6 + 1;
      *pGVar7 = (GlyphInfo)0xe;
      pGVar7 = pGVar7 + 4;
    } while (uVar6 != param_2);
  }
  return;
}


/* EA::Text::OTFLookupFlagMatch(unsigned int, unsigned int) */

bool EA::Text::OTFLookupFlagMatch(uint param_1,uint param_2)

{
  return (1 << (ulong)(param_1 & 0x1f) & param_2) == 0;
}


/* EA::Text::CompareGlyphIds(EA::Text::LineLayout const&, unsigned long, unsigned short const*,
   unsigned long, unsigned int) */

ulong EA::Text::CompareGlyphIds
                (LineLayout *param_1,ulong param_2,ushort *param_3,ulong param_4,uint param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  char cVar3;
  ushort *puVar4;
  ushort *puVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  
  puVar4 = (ushort *)FUN_0537d784(*(undefined8 *)(param_1 + 0x58));
  puVar5 = (ushort *)FUN_0537d78c(*(undefined8 *)(param_1 + 0x60));
  uVar8 = 0;
  lVar6 = FUN_0537d790(*(undefined8 *)(param_1 + 0x80),param_2);
  puVar7 = puVar4;
  if ((puVar4 < puVar5) && (param_4 != 0)) {
    do {
      pbVar1 = (byte *)(lVar6 + 3);
      lVar6 = lVar6 + 4;
      cVar3 = OTFLookupFlagMatch((uint)*pbVar1,param_5);
      if ((cVar3 != '\0') && (puVar2 = param_3 + uVar8, uVar8 = uVar8 + 1, *puVar7 != *puVar2)) {
        return 0xffffffff;
      }
      puVar7 = puVar7 + 1;
    } while ((uVar8 < param_4) && (puVar7 < puVar5));
  }
  if (uVar8 < param_4) {
    return 0xffffffff;
  }
  return (ulong)((long)puVar7 - (long)puVar4) >> 1;
}


/* EA::Text::SubstituteGlyphs2(EA::Text::LineLayout&, unsigned long, unsigned long, unsigned short,
   unsigned int) */

void EA::Text::SubstituteGlyphs2
               (LineLayout *param_1,ulong param_2,ulong param_3,ushort param_4,uint param_5)

{
  long lVar1;
  ushort *puVar2;
  byte *pbVar3;
  
  lVar1 = FUN_0537d7a0(*(undefined8 *)(param_1 + 0x58));
  FUN_0537df94(param_1 + 0x60,lVar1 + (param_2 + 1) * 2,lVar1 + (param_2 + param_3) * 2);
  lVar1 = FUN_0537d7a4(*(undefined8 *)(param_1 + 0x80));
  FUN_0537dfe4(param_1 + 0x88,lVar1 + (param_2 + 1) * 4,lVar1 + (param_2 + param_3) * 4);
  puVar2 = (ushort *)FUN_0537d7a8(*(undefined8 *)(param_1 + 0x58),param_2);
  *puVar2 = param_4;
  lVar1 = FUN_0537d798(*(undefined8 *)(param_1 + 0x80),param_2);
  *(byte *)(lVar1 + 1) = *(byte *)(lVar1 + 1) & 0xf8 | 1;
  pbVar3 = (byte *)FUN_0537d798(*(undefined8 *)(param_1 + 0x80),param_2);
  *pbVar3 = *pbVar3 & 0x1f;
  lVar1 = FUN_0537d798(*(undefined8 *)(param_1 + 0x80),param_2);
  *(byte *)(lVar1 + 1) =
       *(byte *)(lVar1 + 1) & 0xc0 | *(byte *)(lVar1 + 1) & 0xf | (byte)(((uint)param_3 & 3) << 4);
  lVar1 = FUN_0537d798(*(undefined8 *)(param_1 + 0x80),param_2);
  *(byte *)(lVar1 + 1) = *(byte *)(lVar1 + 1) | 8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::SubstituteGlyphs1(EA::Text::LineLayout&, unsigned long, unsigned short const*, unsigned
   long) */

void EA::Text::SubstituteGlyphs1(LineLayout *param_1,ulong param_2,ushort *param_3,ulong param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  ushort *puVar4;
  byte *pbVar5;
  ulong uVar6;
  ushort local_12;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 < 2) {
    puVar4 = (ushort *)FUN_0537d7a8(*(undefined8 *)(param_1 + 0x58));
    *puVar4 = *param_3;
  }
  else {
    puVar2 = (undefined4 *)FUN_0537d798(*(undefined8 *)(param_1 + 0x80));
    local_10[0] = *puVar2;
    lVar3 = FUN_0537d7a0(*(undefined8 *)(param_1 + 0x58));
    local_12 = 0;
    eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::insert((vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(param_1 + 0x58),(ushort *)(lVar3 + (param_2 + 1) * 2),param_4 - 1,&local_12);
    lVar3 = FUN_0537d7a4(*(undefined8 *)(param_1 + 0x80));
    eastl::
    vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
    insert((vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(param_1 + 0x80),(GlyphInfo *)(lVar3 + (param_2 + 1) * 4),param_4 - 1,
           (GlyphInfo *)local_10);
    uVar6 = 0;
    do {
      puVar4 = (ushort *)FUN_0537d7a8(*(undefined8 *)(param_1 + 0x58),uVar6);
      *puVar4 = param_3[uVar6];
      lVar3 = FUN_0537d798(*(undefined8 *)(param_1 + 0x80),uVar6);
      *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) & 0xf8 | (byte)param_4 & 7;
      pbVar5 = (byte *)FUN_0537d798(*(undefined8 *)(param_1 + 0x80),uVar6);
      *pbVar5 = *pbVar5 & 0x1f | (byte)(((uint)uVar6 & 7) << 5);
      lVar3 = FUN_0537d798(*(undefined8 *)(param_1 + 0x80),uVar6);
      uVar1 = uVar6 + 1;
      *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) & 0xc0 | *(byte *)(lVar3 + 1) & 0xf | 0x10;
      lVar3 = FUN_0537d798(*(undefined8 *)(param_1 + 0x80),uVar6);
      *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) & 0xf7;
      uVar6 = uVar1;
    } while (uVar1 != param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::DoGlyphSubstitution(EA::Text::LineLayout&, unsigned long, EA::Text::FeatureLookup
   const&, EA::Text::OTFLookup const&, EA::Text::OTF const*) */

ulong EA::Text::DoGlyphSubstitution
                (LineLayout *param_1,ulong param_2,FeatureLookup *param_3,OTFLookup *param_4,
                OTF *param_5)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  ushort uVar4;
  undefined2 uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  short *psVar11;
  undefined2 *puVar12;
  long lVar13;
  ulong uVar14;
  
  uVar4 = *(ushort *)(param_4 + 4);
  lVar8 = FUN_0537d798(*(undefined8 *)(param_1 + 0x80));
  if (((uint)*(byte *)(lVar8 + 2) & *(uint *)(param_3 + 4)) == 0) {
    uVar3 = uVar4 & 0xffffff0e;
    cVar6 = OTFLookupFlagMatch((uint)*(byte *)(lVar8 + 3),uVar3);
    if (cVar6 != '\0') {
      lVar8 = 0;
      uVar5 = *(undefined2 *)(param_4 + 2);
      uVar14 = 0;
      if (*(short *)(param_4 + 6) == 0) {
switchD_0537e91c_caseD_5:
      }
      else {
        do {
          lVar13 = *(long *)(param_4 + 0x10);
          puVar9 = (ushort *)FUN_0537d7a8(*(undefined8 *)(param_1 + 0x58),param_2);
          psVar2 = (short *)(lVar13 + lVar8);
          iVar7 = OTFCoverage::GetCoverageIndex((OTFCoverage *)(psVar2 + 4),*puVar9);
          if (-1 < iVar7) {
            switch(uVar5) {
            case 1:
              if (*psVar2 == 2) {
                puVar12 = (undefined2 *)FUN_0537d7a8(*(undefined8 *)(param_1 + 0x58),param_2);
                *puVar12 = *(undefined2 *)(*(long *)(psVar2 + 0x10) + (long)iVar7 * 2);
              }
              else {
                psVar11 = (short *)FUN_0537d7a8(*(undefined8 *)(param_1 + 0x58),param_2);
                *psVar11 = *psVar11 + psVar2[0xc];
              }
              uVar14 = param_2 + 1;
              goto LAB_0537ea60;
            case 2:
              if (*psVar2 != 1) goto switchD_0537e91c_caseD_5;
              lVar8 = *(long *)(psVar2 + 0x10) + (long)iVar7 * 0x10;
              SubstituteGlyphs1(param_1,param_2,*(ushort **)(lVar8 + 8),
                                (ulong)*(ushort *)(lVar8 + 2));
              uVar14 = param_2 + *(ushort *)(lVar8 + 2);
              goto LAB_0537ea60;
            case 4:
              uVar14 = param_2 + 1;
              if ((*psVar2 != 1) ||
                 (uVar10 = FUN_0537d7b0(*(undefined8 *)(param_1 + 0x58),
                                        *(undefined8 *)(param_1 + 0x60)), uVar10 <= uVar14))
              goto LAB_0537e924;
              lVar8 = *(long *)(psVar2 + 0x10) + (long)iVar7 * 0x10;
              uVar10 = 0;
              if (*(short *)(lVar8 + 2) == 0) goto LAB_0537e924;
              do {
                lVar13 = *(long *)(lVar8 + 8) + uVar10 * 0x10;
                iVar7 = CompareGlyphIds(param_1,uVar14,*(ushort **)(lVar13 + 8),
                                        (long)(int)(*(ushort *)(lVar13 + 4) - 1),uVar3);
                if (-1 < iVar7) {
                  SubstituteGlyphs2(param_1,param_2,(long)(iVar7 + 1),*(ushort *)(lVar13 + 2),uVar3)
                  ;
LAB_0537ea60:
                  if (uVar14 != param_2) {
                    return uVar14;
                  }
                  return uVar14 + 1;
                }
                uVar1 = (int)uVar10 + 1;
                uVar10 = (ulong)uVar1;
              } while (uVar1 < *(ushort *)(lVar8 + 2));
              goto LAB_0537e924;
            case 5:
            case 6:
              goto switchD_0537e91c_caseD_5;
            }
          }
          uVar14 = uVar14 + 1;
          lVar8 = lVar8 + 0x70;
        } while (uVar14 < *(ushort *)(param_4 + 6));
      }
      return param_2 + 1;
    }
  }
LAB_0537e924:
  return param_2 + 1;
}


/* EA::Text::DoGlyphSubstitution(EA::Text::LineLayout&, unsigned long,
   eastl::fixed_vector<EA::Text::FeatureLookup, 10ul, true, eastl::allocator> const&, EA::Text::OTF
   const*) */

void EA::Text::DoGlyphSubstitution
               (LineLayout *param_1,ulong param_2,fixed_vector *param_3,OTF *param_4)

{
  char cVar1;
  long lVar2;
  FeatureLookup *pFVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  OTFLookup *pOVar10;
  long lVar11;
  long lVar12;
  
  uVar8 = *(undefined8 *)param_3;
  lVar2 = FUN_0537d7bc(uVar8,*(undefined8 *)(param_3 + 8));
  if (lVar2 != 0) {
    lVar12 = 0;
    while( true ) {
      pFVar3 = (FeatureLookup *)FUN_0537d7dc(uVar8,lVar12);
      uVar9 = *(undefined8 *)(pFVar3 + 0x10);
      uVar8 = *(undefined8 *)(pFVar3 + 8);
      cVar1 = FUN_0537d7ec(uVar8,uVar9);
      if ((cVar1 == '\0') && (lVar4 = FUN_0537d7f8(uVar8,uVar9), lVar4 != 0)) {
        lVar11 = 0;
        uVar5 = FUN_0537d7b0(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
        while( true ) {
          puVar6 = (undefined8 *)FUN_0537d804(uVar8,lVar11);
          pOVar10 = (OTFLookup *)*puVar6;
          uVar7 = param_2;
          while (uVar7 < uVar5) {
            uVar7 = DoGlyphSubstitution(param_1,uVar7,pFVar3,pOVar10,param_4);
            uVar5 = FUN_0537d7b0(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
          }
          lVar11 = lVar11 + 1;
          if (lVar11 == lVar4) break;
          uVar8 = *(undefined8 *)(pFVar3 + 8);
        }
      }
      lVar12 = lVar12 + 1;
      if (lVar12 == lVar2) break;
      uVar8 = *(undefined8 *)param_3;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::SetupArabicGsubLookup(eastl::fixed_vector<EA::Text::FeatureLookup, 10ul, true,
   eastl::allocator>&, EA::Text::OTF const*) */

void EA::Text::SetupArabicGsubLookup(fixed_vector *param_1,OTF *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  OTFTagStruct aOStack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  eastl::
  vector<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
  ::resize((vector<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
            *)param_1,10);
  puVar1 = (undefined4 *)FUN_0537d840(*(undefined8 *)param_1,0);
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,0x63636d70);
  uVar3 = *(undefined8 *)param_1;
  *puVar1 = local_10[0];
  lVar2 = FUN_0537d840(uVar3,0);
  *(undefined4 *)(lVar2 + 4) = 0xffffffff;
  puVar1 = (undefined4 *)FUN_0537d840(uVar3,1);
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,0x69736f6c);
  uVar3 = *(undefined8 *)param_1;
  *puVar1 = local_10[0];
  lVar2 = FUN_0537d840(uVar3,1);
  *(undefined4 *)(lVar2 + 4) = 1;
  puVar1 = (undefined4 *)FUN_0537d840(uVar3,2);
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,0x66696e61);
  uVar3 = *(undefined8 *)param_1;
  *puVar1 = local_10[0];
  lVar2 = FUN_0537d840(uVar3,2);
  *(undefined4 *)(lVar2 + 4) = 2;
  puVar1 = (undefined4 *)FUN_0537d840(uVar3,3);
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,0x6d656469);
  uVar3 = *(undefined8 *)param_1;
  *puVar1 = local_10[0];
  lVar2 = FUN_0537d840(uVar3,3);
  *(undefined4 *)(lVar2 + 4) = 4;
  puVar1 = (undefined4 *)FUN_0537d840(uVar3,4);
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,0x696e6974);
  uVar3 = *(undefined8 *)param_1;
  *puVar1 = local_10[0];
  lVar2 = FUN_0537d840(uVar3,4);
  *(undefined4 *)(lVar2 + 4) = 8;
  puVar1 = (undefined4 *)FUN_0537d840(uVar3,5);
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,0x726c6967);
  uVar3 = *(undefined8 *)param_1;
  *puVar1 = local_10[0];
  lVar2 = FUN_0537d840(uVar3,5);
  *(undefined4 *)(lVar2 + 4) = 0;
  puVar1 = (undefined4 *)FUN_0537d840(uVar3,6);
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,0x63616c74);
  uVar3 = *(undefined8 *)param_1;
  *puVar1 = local_10[0];
  lVar2 = FUN_0537d840(uVar3,6);
  *(undefined4 *)(lVar2 + 4) = 0xffffffff;
  puVar1 = (undefined4 *)FUN_0537d840(uVar3,7);
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,0x6c696761);
  uVar3 = *(undefined8 *)param_1;
  *puVar1 = local_10[0];
  lVar2 = FUN_0537d840(uVar3,7);
  *(undefined4 *)(lVar2 + 4) = 0;
  puVar1 = (undefined4 *)FUN_0537d840(uVar3,8);
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,0x63737768);
  uVar3 = *(undefined8 *)param_1;
  *puVar1 = local_10[0];
  lVar2 = FUN_0537d840(uVar3,8);
  *(undefined4 *)(lVar2 + 4) = 0xffffffff;
  puVar1 = (undefined4 *)FUN_0537d840(uVar3,9);
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,0x6d736574);
  uVar3 = *(undefined8 *)param_1;
  *puVar1 = local_10[0];
  lVar2 = FUN_0537d840(uVar3,9);
  *(undefined4 *)(lVar2 + 4) = 0xffffffff;
  OTFTagStruct::OTFTagStruct(aOStack_18,0x61726162);
  OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,0);
  OTFGsubGpos::BuildFeatureLookup
            ((OTFGsubGpos *)(param_2 + 0x128),aOStack_18,(OTFTagStruct *)local_10,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::IsCharHebrew(char16_t) */

bool EA::Text::IsCharHebrew(wchar16 param_1)

{
  return (ushort)param_1 - 0x590 < 0x70;
}


/* EA::Text::IsCharThai(char16_t) */

bool EA::Text::IsCharThai(wchar16 param_1)

{
  return (ushort)param_1 - 0xe00 < 0x80;
}


/* EA::Text::GetThaiTableIndex(char16_t) */

long EA::Text::GetThaiTableIndex(wchar16 param_1)

{
  return (long)(int)((ushort)param_1 - 0xe00);
}


/* EA::Text::IsCharThaiLao(char16_t) */

bool EA::Text::IsCharThaiLao(wchar16 param_1)

{
  return (ushort)param_1 - 0xe00 < 0x100;
}


/* EA::Text::GetThaiCharClass(char16_t) */

undefined1 EA::Text::GetThaiCharClass(wchar16 param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = IsCharThaiLao(param_1);
  uVar2 = 1;
  if (cVar1 != '\0') {
    uVar2 = (&DAT_05767eb0)[(int)((ushort)param_1 - 0xe00)];
  }
  return uVar2;
}


/* EA::Text::IsThaiCharLayoutFlag(char16_t, unsigned int) */

bool EA::Text::IsThaiCharLayoutFlag(wchar16 param_1,uint param_2)

{
  return (*(ushort *)(&DAT_05767ab0 + (long)(int)((ushort)param_1 - 0xe00) * 2) & param_2) != 0;
}


/* EA::Text::GetThaiCharPairingResult(char16_t, char16_t) */

undefined1 EA::Text::GetThaiCharPairingResult(wchar16 param_1,wchar16 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetThaiCharClass(param_1);
  iVar2 = GetThaiCharClass(param_2);
  return (&DAT_05767fb0)[(long)iVar1 * 0x14 + (long)iVar2];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GetPrevChar(EA::Text::CharacterBreakIterator const&) */

void EA::Text::GetPrevChar(CharacterBreakIterator *param_1)

{
  char cVar1;
  undefined2 uVar2;
  CharacterBreakIterator aCStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CharacterBreakIterator::CharacterBreakIterator(aCStack_48,param_1);
  CharacterBreakIterator::GetPrevCharBreak(aCStack_48);
  cVar1 = BreakIteratorBase::AtBegin((BreakIteratorBase *)aCStack_48);
  uVar2 = 0xffff;
  if (cVar1 == '\0') {
    CharacterBreakIterator::GetPrevCharBreak(aCStack_48);
    uVar2 = BreakIteratorBase::operator*((BreakIteratorBase *)aCStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GetNextChar(EA::Text::CharacterBreakIterator const&) */

void EA::Text::GetNextChar(CharacterBreakIterator *param_1)

{
  CharacterBreakIterator aCStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CharacterBreakIterator::CharacterBreakIterator(aCStack_48,param_1);
  CharacterBreakIterator::GetNextCharBreak(aCStack_48);
  BreakIteratorBase::operator*((BreakIteratorBase *)aCStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

