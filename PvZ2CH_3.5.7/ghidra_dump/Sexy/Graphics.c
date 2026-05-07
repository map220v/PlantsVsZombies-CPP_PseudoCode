// Class: Sexy::Graphics


/* Sexy::Graphics::operator new(unsigned long) */

void * __thiscall Sexy::Graphics::operator_new(Graphics *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)SimpleMemPool::GetMemory(0x6bad268);
  return pvVar1;
}


/* Sexy::Graphics::PFCompareInd(void const*, void const*) */

undefined4 Sexy::Graphics::PFCompareInd(void *param_1,void *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(mPFPoints + (long)*(int *)param_1 * 8 + 4) <=
      *(int *)(mPFPoints + (long)*(int *)param_2 * 8 + 4)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* Sexy::Graphics::PFCompareActive(void const*, void const*) */

undefined4 Sexy::Graphics::PFCompareActive(void *param_1,void *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(double *)param_1 <= *(double *)param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* Sexy::Graphics::GetFinalColor() */

Graphics * __thiscall Sexy::Graphics::GetFinalColor(Graphics *this)

{
  Graphics *pGVar1;
  long lVar2;
  
  lVar2 = FUN_0514e190(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  pGVar1 = this + 0x60;
  if (lVar2 != 0) {
    pGVar1 = this + 0x50;
  }
  return pGVar1;
}


/* Sexy::Graphics::operator delete(void*) */

void __thiscall Sexy::Graphics::operator_delete(Graphics *this,void *param_1)

{
  SimpleMemPool::ReturnMemory((SimpleMemPool *)msPool,(uchar *)this);
  return;
}


/* Sexy::Graphics::Get3D() */

undefined8 __thiscall Sexy::Graphics::Get3D(Graphics *this)

{
  return *(undefined8 *)(this + 0x98);
}


/* Sexy::Graphics::SetAsCurrentContext() */

void __thiscall Sexy::Graphics::SetAsCurrentContext(Graphics *this)

{
  (**(code **)(**(long **)(this + 0x88) + 0x30))(*(long **)(this + 0x88),this + 0x90);
  return;
}


/* Sexy::Graphics::SetDrawMode(int) */

void __thiscall Sexy::Graphics::SetDrawMode(Graphics *this,int param_1)

{
  *(int *)(this + 0x78) = param_1;
  return;
}


/* Sexy::Graphics::GetDrawMode() */

undefined4 __thiscall Sexy::Graphics::GetDrawMode(Graphics *this)

{
  return *(undefined4 *)(this + 0x78);
}


/* Sexy::Graphics::SetColorizeImages(bool) */

void __thiscall Sexy::Graphics::SetColorizeImages(Graphics *this,bool param_1)

{
  this[0x7c] = (Graphics)param_1;
  return;
}


/* Sexy::Graphics::GetColorizeImages() */

Graphics __thiscall Sexy::Graphics::GetColorizeImages(Graphics *this)

{
  return this[0x7c];
}


/* Sexy::Graphics::SetFastStretch(bool) */

void __thiscall Sexy::Graphics::SetFastStretch(Graphics *this,bool param_1)

{
  this[0x7d] = (Graphics)param_1;
  return;
}


/* Sexy::Graphics::GetFastStretch() */

Graphics __thiscall Sexy::Graphics::GetFastStretch(Graphics *this)

{
  return this[0x7d];
}


/* Sexy::Graphics::SetLinearBlend(bool) */

void __thiscall Sexy::Graphics::SetLinearBlend(Graphics *this,bool param_1)

{
  this[0x7f] = (Graphics)param_1;
  return;
}


/* Sexy::Graphics::GetLinearBlend() */

Graphics __thiscall Sexy::Graphics::GetLinearBlend(Graphics *this)

{
  return this[0x7f];
}


/* Sexy::Graphics::PFDelete(int) */

void __thiscall Sexy::Graphics::PFDelete(Graphics *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  void *__dest;
  void *pvVar7;
  
  iVar2 = *(int *)(this + 0xa8);
  if (iVar2 < 1) {
    return;
  }
  pvVar7 = *(void **)(this + 0xa0);
  if (*(int *)((long)pvVar7 + 0x10) == param_1) {
    lVar6 = 0x20;
    iVar5 = 0;
    __dest = pvVar7;
  }
  else {
    lVar6 = 1;
    pvVar4 = pvVar7;
    do {
      __dest = (void *)((long)pvVar4 + 0x20);
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 1;
      if (iVar2 <= iVar5) {
        return;
      }
      piVar1 = (int *)((long)pvVar4 + 0x30);
      pvVar4 = __dest;
    } while (*piVar1 != param_1);
    lVar6 = lVar6 * 0x20;
  }
  uVar3 = (iVar2 + -1) - iVar5;
  *(int *)(this + 0xa8) = iVar2 + -1;
  memmove(__dest,(void *)((long)pvVar7 + lVar6),
          -(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar3 << 5);
  return;
}


/* Sexy::Graphics::PFInsert(int, int) */

void __thiscall Sexy::Graphics::PFInsert(Graphics *this,int param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  
  uVar7 = 0;
  if (param_1 < *(int *)(this + 0xac) + -1) {
    uVar7 = -(ulong)(param_1 + 1U >> 0x1f) & 0xfffffff800000000 | (ulong)(param_1 + 1U) << 3;
  }
  piVar9 = (int *)(mPFPoints + (long)param_1 * 8);
  iVar3 = piVar9[1];
  piVar1 = (int *)(mPFPoints + uVar7);
  iVar4 = piVar1[1];
  piVar8 = piVar1;
  iVar6 = iVar3;
  if (iVar3 < iVar4) {
    piVar8 = piVar9;
    piVar9 = piVar1;
    iVar6 = iVar4;
    iVar4 = iVar3;
  }
  uVar5 = *(uint *)(this + 0xa8);
  lVar10 = *(long *)(this + 0xa0);
  fVar11 = *(float *)(this + 0x14);
  uVar7 = -(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5;
  lVar2 = lVar10 + uVar7;
  fVar14 = *(float *)(this + 0x10);
  dVar12 = (double)(*piVar9 - *piVar8) / (double)(iVar6 - iVar4);
  dVar13 = (double)*piVar8;
  *(double *)(lVar2 + 8) = dVar12;
  *(double *)(lVar10 + uVar7) =
       (double)fVar14 + dVar13 +
       dVar12 * (((0.5 - (double)fVar11) + (double)param_2) - (double)iVar4);
  *(int *)(lVar2 + 0x10) = param_1;
  *(double *)(lVar2 + 0x18) = (double)iVar4 - dVar13 * (1.0 / dVar12);
  *(uint *)(this + 0xa8) = uVar5 + 1;
  return;
}


/* Sexy::Graphics::DrawImageMatrix2(Sexy::Image*, Sexy::SexyMatrix3 const&, Sexy::TRect<int> const&,
   Sexy::Color const&) */

void __thiscall
Sexy::Graphics::DrawImageMatrix2
          (Graphics *this,Image *param_1,SexyMatrix3 *param_2,TRect *param_3,Color *param_4)

{
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 0x88) + 0x98))
            (*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14),*(long **)(this + 0x88),
             param_1,param_2,this + 0x28,param_4,*(undefined4 *)(this + 0x78),param_3,this[0x7f],0);
  return;
}


/* Sexy::Graphics::DrawTrianglesTex(Sexy::Image*, Sexy::SexyVertex2D const (*) [3], int, Sexy::Color
   const&, int, float, float, bool, Sexy::TRect<int> const*) */

void __thiscall
Sexy::Graphics::DrawTrianglesTex
          (Graphics *this,Image *param_1,SexyVertex2D *param_2,int param_3,Color *param_4,
          int param_5,float param_6,float param_7,bool param_8,TRect *param_9)

{
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 0x88) + 0xa8))
            (CONCAT44(in_register_00005004,param_6),CONCAT44(in_register_00005024,param_7),
             *(long **)(this + 0x88),param_1,param_2,param_3,param_4,param_5,param_8,param_9);
  return;
}


/* Sexy::Graphics::CopyIntoImage(Sexy::Image*, int, int, int, int, void*) */

void Sexy::Graphics::CopyIntoImage
               (Image *param_1,int param_2,int param_3,int param_4,int param_5,void *param_6)

{
  (**(code **)(**(long **)(param_1 + 0x88) + 0xc0))
            (*(long **)(param_1 + 0x88),param_2,param_3,param_4,param_5);
  return;
}


/* Sexy::Graphics::Translate(int, int) */

void __thiscall Sexy::Graphics::Translate(Graphics *this,int param_1,int param_2)

{
  *(float *)(this + 0x10) = *(float *)(this + 0x10) + (float)param_1;
  *(float *)(this + 0x14) = *(float *)(this + 0x14) + (float)param_2;
  return;
}


/* Sexy::Graphics::TranslateF(float, float) */

void __thiscall Sexy::Graphics::TranslateF(Graphics *this,float param_1,float param_2)

{
  *(float *)(this + 0x10) = *(float *)(this + 0x10) + param_1;
  *(float *)(this + 0x14) = *(float *)(this + 0x14) + param_2;
  return;
}


/* Sexy::Graphics::SetScale(float, float, float, float) */

void __thiscall
Sexy::Graphics::SetScale(Graphics *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x18) = param_1;
  *(float *)(this + 0x1c) = param_2;
  *(float *)(this + 0x20) = param_3 + *(float *)(this + 0x10);
  *(float *)(this + 0x24) = param_4 + *(float *)(this + 0x14);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::InitRenderInfo(Sexy::Graphics const*) */

void __thiscall Sexy::Graphics::InitRenderInfo(Graphics *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  RenderDevice3D *pRVar3;
  long *plVar4;
  long lVar5;
  Graphics3D *pGVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  CompiledMap *this_00;
  undefined8 uVar9;
  code *pcVar10;
  ulong local_18;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06bad230 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06bad230), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06bad230);
    __cxa_atexit(nop,&PTR_PTR_06a89eb0,&DAT_06a88000);
  }
  *(undefined8 *)(this + 0x98) = 0;
  this[0x80] = (Graphics)0x0;
  pRVar3 = (RenderDevice3D *)
           (**(code **)(**(long **)(gSexyAppBase + 0x20) + 0xb0))(*(long **)(gSexyAppBase + 0x20));
  if (pRVar3 == (RenderDevice3D *)0x0) {
LAB_0514e804:
    cVar1 = CompiledMap::Initialized((CompiledMap *)(this + 0x90));
  }
  else {
    eastl::
    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
    ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                       *)&local_18,(rbtree_node *)0x0);
    if (param_1 == (Graphics *)0x0) {
      uVar9 = *(undefined8 *)(this + 8);
      pcVar10 = *(code **)(*(long *)pRVar3 + 0x20);
      eastl::
      rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
      ::rbtree_iterator(arStack_10,(rbtree_node *)0x0);
      local_18 = (*pcVar10)(pRVar3,uVar9,arStack_10);
    }
    else {
      local_18 = (**(code **)(*(long *)pRVar3 + 0x20))
                           (pRVar3,*(undefined8 *)(this + 8),param_1 + 0x90);
    }
    cVar1 = CompiledMap::Initialized((CompiledMap *)&local_18);
    if (cVar1 == '\0') goto LAB_0514e804;
    *(RenderDevice3D **)(this + 0x88) = pRVar3;
    this_00 = (CompiledMap *)(this + 0x90);
    *(ulong *)this_00 = local_18;
    pGVar6 = Graphics3D::operator_new((Graphics3D *)0x18,local_18);
    Graphics3D::Graphics3D(pGVar6,this,pRVar3,(HRenderContext *)this_00);
    *(Graphics3D **)(this + 0x98) = pGVar6;
    this[0x80] = (Graphics)0x1;
    cVar1 = CompiledMap::Initialized(this_00);
  }
  if (cVar1 != '\0') goto LAB_0514e818;
  plVar4 = (long *)(**(code **)(**(long **)(gSexyAppBase + 0x20) + 0xa8))
                             (*(long **)(gSexyAppBase + 0x20));
  if (plVar4 != (long *)0x0) {
    eastl::
    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
    ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                       *)&local_18,(rbtree_node *)0x0);
    if (param_1 == (Graphics *)0x0) {
      uVar9 = *(undefined8 *)(this + 8);
      pcVar10 = *(code **)(*plVar4 + 0x20);
      eastl::
      rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
      ::rbtree_iterator(arStack_10,(rbtree_node *)0x0);
      local_18 = (*pcVar10)(plVar4,uVar9,arStack_10);
    }
    else {
      local_18 = (**(code **)(*plVar4 + 0x20))(plVar4,*(undefined8 *)(this + 8),param_1 + 0x90);
    }
    cVar1 = CompiledMap::Initialized((CompiledMap *)&local_18);
    if (cVar1 != '\0') {
      *(ulong *)(this + 0x90) = local_18;
      *(long **)(this + 0x88) = plVar4;
      *(undefined8 *)(this + 0x98) = 0;
      this[0x80] = (Graphics)0x1;
    }
  }
  cVar1 = CompiledMap::Initialized((CompiledMap *)(this + 0x90));
  if (cVar1 != '\0') goto LAB_0514e818;
  plVar4 = *(long **)(this + 8);
  uVar9 = 0;
  if (plVar4 == (long *)0x0) {
LAB_0514e9f8:
    ppuVar8 = &PTR_PTR_06a89eb0;
  }
  else {
    lVar5 = (**(code **)(*plVar4 + 0x48))(plVar4);
    if (lVar5 == 0) {
      uVar9 = *(undefined8 *)(this + 8);
      goto LAB_0514e9f8;
    }
    uVar9 = *(undefined8 *)(this + 8);
    ppuVar8 = (undefined **)(lVar5 + 0x68);
  }
  puVar7 = *ppuVar8;
  *(undefined ***)(this + 0x88) = ppuVar8;
  pcVar10 = *(code **)(puVar7 + 0x20);
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(arStack_10,(rbtree_node *)0x0);
  uVar9 = (*pcVar10)(ppuVar8,uVar9,arStack_10);
  *(undefined8 *)(this + 0x90) = uVar9;
  pGVar6 = *(Graphics3D **)(this + 0x98);
  if (pGVar6 != (Graphics3D *)0x0) {
    Graphics3D::operator_delete(pGVar6,pGVar6);
    *(undefined8 *)(this + 0x98) = 0;
  }
  this[0x80] = (Graphics)0x0;
LAB_0514e818:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::ClearClipRect() */

void __thiscall Sexy::Graphics::ClearClipRect(Graphics *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 8));
  iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 8));
  Insets::Insets((Insets *)&local_18,0,0,iVar2,iVar3);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x28) = local_18;
  *(undefined8 *)(this + 0x30) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawTrianglesTexStrip(Sexy::Image*, Sexy::SexyVertex2D const*, int, Sexy::Color
   const&, int, float, float, bool) */

void __thiscall
Sexy::Graphics::DrawTrianglesTexStrip
          (Graphics *this,Image *param_1,SexyVertex2D *param_2,int param_3,Color *param_4,
          int param_5,float param_6,float param_7,bool param_8)

{
  SexyVertex2D *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  int *piVar14;
  SexyVertex2D *pSVar15;
  SexyVertex2D *pSVar16;
  ulong uVar17;
  int local_2590;
  int local_258c;
  SexyVertex2D local_2588 [9600];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetAsCurrentContext(this);
  pSVar15 = local_2588;
  do {
    pSVar16 = pSVar15;
    do {
      pSVar1 = pSVar16 + 0x20;
      SexyVertex2D::SexyVertex2D(pSVar16);
      pSVar16 = pSVar1;
    } while (pSVar1 != pSVar15 + 0x60);
    pSVar15 = pSVar15 + 0x60;
  } while (pSVar1 != (SexyVertex2D *)&local_8);
  uVar17 = 0;
  if (0 < param_3) {
    do {
      local_2590 = 100;
      local_258c = param_3 - (int)uVar17;
      piVar14 = eastl::min_alt<int>(&local_2590,&local_258c);
      iVar13 = *piVar14;
      if (0 < iVar13) {
        pSVar15 = local_2588;
        pSVar16 = param_2 + (-(uVar17 >> 0x1f) & 0xffffffe000000000 | uVar17 << 5);
        do {
          pSVar1 = pSVar15 + 0x60;
          uVar7 = *(undefined8 *)(pSVar16 + 8);
          uVar2 = *(undefined8 *)(pSVar16 + 0x10);
          uVar8 = *(undefined8 *)(pSVar16 + 0x18);
          uVar3 = *(undefined8 *)(pSVar16 + 0x20);
          uVar9 = *(undefined8 *)(pSVar16 + 0x28);
          uVar4 = *(undefined8 *)(pSVar16 + 0x40);
          uVar10 = *(undefined8 *)(pSVar16 + 0x48);
          uVar5 = *(undefined8 *)(pSVar16 + 0x50);
          uVar11 = *(undefined8 *)(pSVar16 + 0x58);
          uVar6 = *(undefined8 *)(pSVar16 + 0x30);
          uVar12 = *(undefined8 *)(pSVar16 + 0x38);
          *(undefined8 *)pSVar15 = *(undefined8 *)pSVar16;
          *(undefined8 *)(pSVar15 + 8) = uVar7;
          *(undefined8 *)(pSVar15 + 0x10) = uVar2;
          *(undefined8 *)(pSVar15 + 0x18) = uVar8;
          *(undefined8 *)(pSVar15 + 0x20) = uVar3;
          *(undefined8 *)(pSVar15 + 0x28) = uVar9;
          *(undefined8 *)(pSVar15 + 0x40) = uVar4;
          *(undefined8 *)(pSVar15 + 0x48) = uVar10;
          *(undefined8 *)(pSVar15 + 0x30) = uVar6;
          *(undefined8 *)(pSVar15 + 0x38) = uVar12;
          *(undefined8 *)(pSVar15 + 0x50) = uVar5;
          *(undefined8 *)(pSVar15 + 0x58) = uVar11;
          pSVar15 = pSVar1;
          pSVar16 = pSVar16 + 0x20;
        } while (pSVar1 != local_2588 + ((ulong)(iVar13 - 1) + 1) * 0x60);
        uVar17 = (ulong)(uint)((int)uVar17 + iVar13);
      }
      (**(code **)(**(long **)(this + 0x88) + 0xa8))
                (param_6,param_7,*(long **)(this + 0x88),param_1,local_2588,iVar13,param_4,param_5,
                 param_8,0);
    } while ((int)uVar17 < param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::ClearRect(int, int, int, int) */

void __thiscall
Sexy::Graphics::ClearRect(Graphics *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined1 auStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetAsCurrentContext(this);
  Insets::Insets(aIStack_18,(int)*(float *)(this + 0x10) + param_1,
                 (int)*(float *)(this + 0x14) + param_2,param_3,param_4);
  TRect<int>::Intersection((TRect *)aIStack_18);
  (**(code **)(**(long **)(this + 0x88) + 0x50))(*(long **)(this + 0x88),auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::ClearRect(Sexy::TRect<int> const&) */

void __thiscall Sexy::Graphics::ClearRect(Graphics *this,TRect *param_1)

{
  ClearRect(this,*(int *)param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8),*(int *)(param_1 + 0xc)
           );
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::FillRect(int, int, int, int) */

void __thiscall
Sexy::Graphics::FillRect(Graphics *this,int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  undefined1 auStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetFinalColor(this);
  if (*(int *)(lVar1 + 0xc) != 0) {
    SetAsCurrentContext(this);
    Insets::Insets(aIStack_18,(int)*(float *)(this + 0x10) + param_1,
                   (int)*(float *)(this + 0x14) + param_2,param_3,param_4);
    TRect<int>::Intersection((TRect *)aIStack_18);
    (**(code **)(**(long **)(this + 0x88) + 0x58))
              (*(long **)(this + 0x88),auStack_28,lVar1,*(undefined4 *)(this + 0x78));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::FillRect(Sexy::TRect<int> const&) */

void __thiscall Sexy::Graphics::FillRect(Graphics *this,TRect *param_1)

{
  FillRect(this,*(int *)param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8),*(int *)(param_1 + 0xc))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawRect(int, int, int, int) */

void __thiscall
Sexy::Graphics::DrawRect(Graphics *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = GetFinalColor(this);
  if (*(int *)(lVar3 + 0xc) != 0) {
    iVar1 = param_3 + 1;
    Insets::Insets(aIStack_38,(int)*(float *)(this + 0x10) + param_1,
                   (int)*(float *)(this + 0x14) + param_2,param_3,param_4);
    Insets::Insets(aIStack_28,(int)*(float *)(this + 0x10) + param_1,
                   (int)*(float *)(this + 0x14) + param_2,iVar1,param_4 + 1);
    TRect<int>::Intersection((TRect *)aIStack_28);
    cVar2 = Sexy::operator==((Color *)aIStack_28,aCStack_18);
    if (cVar2 == '\0') {
      FillRect(this,param_1,param_2,iVar1,1);
      FillRect(this,param_1,param_2 + param_4,iVar1,1);
      FillRect(this,param_1,param_2 + 1,1,param_4 + -1);
      FillRect(this,param_1 + param_3,param_2 + 1,1,param_4 + -1);
    }
    else {
      SetAsCurrentContext(this);
      (**(code **)(**(long **)(this + 0x88) + 0xd0))
                (*(long **)(this + 0x88),aIStack_38,lVar3,*(undefined4 *)(this + 0x78));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::DrawRect(Sexy::TRect<int> const&) */

void __thiscall Sexy::Graphics::DrawRect(Graphics *this,TRect *param_1)

{
  DrawRect(this,*(int *)param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8),*(int *)(param_1 + 0xc))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::SetClipRect(int, int, int, int) */

void __thiscall
Sexy::Graphics::SetClipRect(Graphics *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 8));
  iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 8));
  Insets::Insets(aIStack_38,0,0,iVar2,iVar3);
  Insets::Insets(aIStack_28,(int)*(float *)(this + 0x10) + param_1,
                 (int)*(float *)(this + 0x14) + param_2,param_3,param_4);
  TRect<int>::Intersection((TRect *)aIStack_38);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x28) = local_18;
  *(undefined8 *)(this + 0x30) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::SetClipRect(Sexy::TRect<int> const&) */

void __thiscall Sexy::Graphics::SetClipRect(Graphics *this,TRect *param_1)

{
  SetClipRect(this,*(int *)param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8),
              *(int *)(param_1 + 0xc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::ClipRect(int, int, int, int) */

void __thiscall
Sexy::Graphics::ClipRect(Graphics *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_28,(int)*(float *)(this + 0x10) + param_1,
                 (int)*(float *)(this + 0x14) + param_2,param_3,param_4);
  TRect<int>::Intersection((TRect *)(this + 0x28));
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x28) = local_18;
  *(undefined8 *)(this + 0x30) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::ClipRect(Sexy::TRect<int> const&) */

void __thiscall Sexy::Graphics::ClipRect(Graphics *this,TRect *param_1)

{
  ClipRect(this,*(int *)param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8),*(int *)(param_1 + 0xc))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::PolyFill(Sexy::Point const*, int, bool) */

void __thiscall Sexy::Graphics::PolyFill(Graphics *this,Point *param_1,int param_2,bool param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  Point *pPVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  ColourFit *this_00;
  ulong uVar10;
  void *pvVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  long *plVar23;
  ColourFit *pCVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  int iStack_18014;
  int iStack_18010;
  int iStack_1800c;
  int aiStack_18008 [24578];
  
  lVar7 = ___stack_chk_guard;
  SetAsCurrentContext(this);
  if ((param_3) &&
     (cVar8 = (**(code **)(**(long **)(this + 0x88) + 0x18))(*(long **)(this + 0x88)), cVar8 != '\0'
     )) {
    plVar23 = *(long **)(this + 0x88);
    uVar14 = GetFinalColor(this);
    (**(code **)(*plVar23 + 0x68))
              (plVar23,param_1,(ulong)(uint)param_2,this + 0x28,uVar14,*(undefined4 *)(this + 0x78),
               (int)*(float *)(this + 0x10),(int)*(float *)(this + 0x14));
  }
  else {
    *(int *)(this + 0xac) = param_2;
    iStack_18014 = *(int *)(this + 0x2c);
    iStack_18010 = iStack_18014 + *(int *)(this + 0x34) + -1;
    iVar2 = *(int *)(this + 0x28);
    iVar3 = *(int *)(this + 0x30);
    mPFPoints = param_1;
    if (0 < param_2) {
      this_00 = operator_new__(-(ulong)((uint)param_2 >> 0x1f) & 0xfffffffc00000000 |
                               (ulong)(uint)param_2 << 2);
      uVar10 = (long)*(int *)(this + 0xac) << 5;
      if (0x3f8000000000000 < (ulong)(long)*(int *)(this + 0xac)) {
        uVar10 = 0xffffffffffffffff;
      }
      pvVar11 = operator_new__(uVar10);
      *(void **)(this + 0xa0) = pvVar11;
      iVar16 = *(int *)(this + 0xac);
      if (0 < iVar16) {
        iVar9 = 0;
        pCVar24 = this_00;
        do {
          *(int *)pCVar24 = iVar9;
          iVar9 = iVar9 + 1;
          iVar16 = *(int *)(this + 0xac);
          pCVar24 = pCVar24 + 4;
        } while (iVar9 < iVar16);
      }
      iVar9 = 0;
      qsort(this_00,(long)iVar16,4,PFCompareInd);
      *(undefined4 *)(this + 0xa8) = 0;
      pPVar6 = mPFPoints;
      fVar29 = *(float *)(this + 0x14);
      iStack_1800c = (int)((float)*(int *)(mPFPoints + (long)*(int *)this_00 * 8 + 4) + fVar29 +
                          -0.5);
      piVar12 = eastl::max_alt<int>(&iStack_18014,&iStack_1800c);
      iVar19 = *(int *)(this + 0xac);
      iVar16 = *piVar12;
      iStack_1800c = (int)(fVar29 + (float)*(int *)(pPVar6 + (long)*(int *)(this_00 +
                                                                           (long)iVar19 * 4 + -4) *
                                                             8 + 4) + -0.5);
      piVar12 = eastl::min_alt<int>(&iStack_18010,&iStack_1800c);
      iVar4 = *piVar12;
      if (iVar16 <= iVar4) {
        uVar10 = 0;
        iVar3 = iVar2 + iVar3 + -1;
        do {
          if ((int)uVar10 < iVar19) {
            uVar13 = -(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2;
            fVar26 = *(float *)(this + 0x14);
            pCVar24 = this_00 + uVar13;
            iVar22 = *(int *)(this_00 + uVar13);
            fVar29 = (float)iVar16 + 0.5;
            fVar5 = (float)iVar16 - 0.5;
            fVar25 = (float)*(int *)(mPFPoints + (long)iVar22 * 8 + 4) + fVar26;
            while (fVar25 <= fVar29) {
              iVar21 = iVar19;
              if (0 < iVar22) {
                iVar21 = iVar22;
              }
              iVar21 = iVar21 + -1;
              if (fVar5 < fVar26 + (float)*(int *)(mPFPoints + (long)iVar21 * 8 + 4)) {
                if (fVar29 < fVar26 + (float)*(int *)(mPFPoints + (long)iVar21 * 8 + 4)) {
                  PFInsert(this,iVar21,iVar16);
                  iVar19 = *(int *)(this + 0xac);
                  fVar26 = *(float *)(this + 0x14);
                }
              }
              else {
                PFDelete(this,iVar21);
                iVar19 = *(int *)(this + 0xac);
                fVar26 = *(float *)(this + 0x14);
              }
              uVar13 = 0;
              if (iVar22 < iVar19 + -1) {
                uVar13 = -(ulong)(iVar22 + 1U >> 0x1f) & 0xfffffff800000000 |
                         (ulong)(iVar22 + 1U) << 3;
              }
              if ((float)*(int *)(mPFPoints + uVar13 + 4) + fVar26 <= fVar5) {
                uVar1 = (int)uVar10 + 1;
                uVar10 = (ulong)uVar1;
                PFDelete(this,iVar22);
                iVar19 = *(int *)(this + 0xac);
                if (iVar19 <= (int)uVar1) break;
              }
              else {
                if (fVar29 < (float)*(int *)(mPFPoints + uVar13 + 4) + fVar26) {
                  PFInsert(this,iVar22,iVar16);
                  iVar19 = *(int *)(this + 0xac);
                }
                uVar1 = (int)uVar10 + 1;
                uVar10 = (ulong)uVar1;
                if (iVar19 <= (int)uVar1) break;
              }
              pCVar24 = pCVar24 + 4;
              iVar22 = *(int *)pCVar24;
              fVar26 = *(float *)(this + 0x14);
              fVar25 = (float)*(int *)(mPFPoints + (long)iVar22 * 8 + 4) + fVar26;
            }
          }
          qsort(*(void **)(this + 0xa0),(long)*(int *)(this + 0xa8),0x20,PFCompareActive);
          iVar19 = *(int *)(this + 0xa8);
          if (0 < iVar19) {
            lVar20 = *(long *)(this + 0xa0);
            pdVar17 = (double *)(lVar20 + 0x20);
            do {
              dVar28 = pdVar17[-4];
              dVar27 = *pdVar17;
              iVar22 = (int)(dVar28 - 0.5);
              iVar21 = (int)(dVar27 - 0.5);
              if (iVar22 < iVar2) {
                iVar22 = iVar2;
              }
              if (iVar3 < iVar21) {
                iVar21 = iVar3;
              }
              if ((iVar22 <= iVar21) && (iVar9 < 0x2000)) {
                lVar15 = (long)iVar9;
                iVar9 = iVar9 + 1;
                aiStack_18008[lVar15 * 3] = iVar16;
                aiStack_18008[lVar15 * 3 + 1] = iVar22;
                aiStack_18008[lVar15 * 3 + 2] = (iVar21 - iVar22) + 1;
              }
              pdVar17[-4] = pdVar17[-3] + dVar28;
              pdVar18 = pdVar17 + 8;
              *pdVar17 = dVar27 + pdVar17[1];
              pdVar17 = pdVar18;
            } while (pdVar18 != (double *)(lVar20 + (ulong)(iVar19 - 1U >> 1) * 0x40 + 0x60));
          }
          iVar16 = iVar16 + 1;
          if (iVar4 < iVar16) break;
          iVar19 = *(int *)(this + 0xac);
        } while( true );
      }
      plVar23 = *(long **)(this + 0x88);
      uVar14 = GetFinalColor(this);
      (**(code **)(*plVar23 + 0xd8))
                (plVar23,aiStack_18008,iVar9,uVar14,*(undefined4 *)(this + 0x78));
      EATextSquish::ColourFit::~ColourFit(this_00);
      if (*(ColourFit **)(this + 0xa0) != (ColourFit *)0x0) {
        EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0xa0));
      }
    }
  }
  if (lVar7 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::PolyFillAA(Sexy::Point const*, int, bool) */

void __thiscall Sexy::Graphics::PolyFillAA(Graphics *this,Point *param_1,int param_2,bool param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  int *piVar9;
  ColourFit *this_00;
  ulong uVar10;
  void *pvVar11;
  undefined8 uVar12;
  double *pdVar13;
  long lVar14;
  int iVar15;
  size_t __n;
  int iVar16;
  double *pdVar17;
  int iVar18;
  long *plVar19;
  int iVar20;
  Point *pPVar21;
  int iVar22;
  int iVar23;
  ColourFit *pCVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  ColourFit *pCStack_18060;
  int iStack_18054;
  int iStack_18040;
  uint uStack_1803c;
  long lStack_18038;
  int iStack_18028;
  int iStack_18024;
  int iStack_18020;
  int iStack_1801c;
  int iStack_18018;
  int iStack_18014;
  int iStack_18010;
  int iStack_1800c;
  int aiStack_18008 [24578];
  
  lVar7 = ___stack_chk_guard;
  SetAsCurrentContext(this);
  if ((param_3) &&
     (cVar8 = (**(code **)(**(long **)(this + 0x88) + 0x18))(*(long **)(this + 0x88)), cVar8 != '\0'
     )) {
    plVar19 = *(long **)(this + 0x88);
    uVar12 = GetFinalColor(this);
    (**(code **)(*plVar19 + 0x68))
              (plVar19,param_1,param_2,this + 0x28,uVar12,*(undefined4 *)(this + 0x78),
               (int)*(float *)(this + 0x10),(int)*(float *)(this + 0x14));
  }
  else {
    if (0 < param_2) {
      iVar15 = 0;
      pPVar21 = param_1;
      do {
        if (iVar15 == 0) {
          iVar20 = *(int *)pPVar21;
          iVar22 = *(int *)(pPVar21 + 4);
          iVar18 = iVar20;
          iStack_1801c = iVar22;
        }
        else {
          piVar9 = eastl::min_alt<int>(&iStack_18028,(int *)pPVar21);
          iVar20 = *piVar9;
          iStack_18028 = iVar20;
          piVar9 = eastl::max_alt<int>(&iStack_18024,(int *)pPVar21);
          iVar18 = *piVar9;
          iStack_18024 = iVar18;
          piVar9 = eastl::min_alt<int>(&iStack_18020,(int *)(pPVar21 + 4));
          iVar22 = *piVar9;
          iStack_18020 = iVar22;
          piVar9 = eastl::max_alt<int>(&iStack_1801c,(int *)(pPVar21 + 4));
          iStack_1801c = *piVar9;
        }
        iVar15 = iVar15 + 1;
        iStack_18020 = iVar22 + -5;
        iStack_18028 = iVar20 + -5;
        iStack_18024 = iVar18 + 5;
        iStack_1801c = iStack_1801c + 5;
        pPVar21 = pPVar21 + 8;
      } while (iVar15 != param_2);
    }
    uVar2 = (iStack_1801c - iStack_18020) + 5U & 0xfffffffc;
    uVar3 = (iStack_18024 - iStack_18028) + 5U & 0xfffffffc;
    if (((int)uVar2 < 0x101) && ((int)uVar3 < 0x101)) {
      pCStack_18060 = (ColourFit *)&DAT_06bad2c0;
      __n = (size_t)(int)(uVar3 * uVar2);
    }
    else {
      __n = (size_t)(int)(uVar3 * uVar2);
      pCStack_18060 = operator_new__(__n);
    }
    memset(pCStack_18060,0,__n);
    *(int *)(this + 0xac) = param_2;
    iStack_18018 = *(int *)(this + 0x2c);
    iVar15 = *(int *)(this + 0x30);
    iStack_18014 = iStack_18018 + *(int *)(this + 0x34) + -1;
    iVar20 = *(int *)(this + 0x28);
    mPFPoints = param_1;
    if (0 < param_2) {
      this_00 = operator_new__(-(ulong)((uint)param_2 >> 0x1f) & 0xfffffffc00000000 |
                               (ulong)(uint)param_2 << 2);
      uVar10 = (long)*(int *)(this + 0xac) << 5;
      if (0x3f8000000000000 < (ulong)(long)*(int *)(this + 0xac)) {
        uVar10 = 0xffffffffffffffff;
      }
      pvVar11 = operator_new__(uVar10);
      *(void **)(this + 0xa0) = pvVar11;
      iVar18 = *(int *)(this + 0xac);
      if (0 < iVar18) {
        iVar22 = 0;
        pCVar24 = this_00;
        do {
          *(int *)pCVar24 = iVar22;
          iVar22 = iVar22 + 1;
          iVar18 = *(int *)(this + 0xac);
          pCVar24 = pCVar24 + 4;
        } while (iVar22 < iVar18);
      }
      qsort(this_00,(long)iVar18,4,PFCompareInd);
      *(undefined4 *)(this + 0xa8) = 0;
      pPVar21 = mPFPoints;
      fVar32 = *(float *)(this + 0x14);
      iStack_1800c = (int)((float)*(int *)(mPFPoints + (long)*(int *)this_00 * 8 + 4) + fVar32 +
                          -0.5);
      piVar9 = eastl::max_alt<int>(&iStack_18018,&iStack_1800c);
      iVar22 = *(int *)(this + 0xac);
      iStack_18040 = *piVar9;
      iStack_1800c = (int)(fVar32 + (float)*(int *)(pPVar21 +
                                                   (long)*(int *)(this_00 + (long)iVar22 * 4 + -4) *
                                                   8 + 4) + -0.5);
      piVar9 = eastl::min_alt<int>(&iStack_18014,&iStack_1800c);
      iVar18 = *piVar9;
      if (iStack_18040 <= iVar18) {
        iVar23 = 0;
        uStack_1803c = 0;
        iVar15 = iVar20 + iVar15 + -1;
        do {
          if ((int)uStack_1803c < iVar22) {
            uVar10 = -(ulong)(uStack_1803c >> 0x1f) & 0xfffffffc00000000 | (ulong)uStack_1803c << 2;
            pCVar24 = this_00 + uVar10;
            iVar27 = *(int *)(this_00 + uVar10);
            fVar31 = *(float *)(this + 0x14);
            fVar32 = (float)iStack_18040 + 0.5;
            fVar5 = (float)iStack_18040 - 0.5;
            fVar28 = (float)*(int *)(mPFPoints + (long)iVar27 * 8 + 4) + fVar31;
            uVar6 = uStack_1803c;
            while (uStack_1803c = uVar6, fVar28 <= fVar32) {
              iVar16 = iVar22;
              if (0 < iVar27) {
                iVar16 = iVar27;
              }
              iVar16 = iVar16 + -1;
              if (fVar5 < fVar31 + (float)*(int *)(mPFPoints + (long)iVar16 * 8 + 4)) {
                if (fVar32 < fVar31 + (float)*(int *)(mPFPoints + (long)iVar16 * 8 + 4)) {
                  PFInsert(this,iVar16,iStack_18040);
                  iVar22 = *(int *)(this + 0xac);
                  fVar31 = *(float *)(this + 0x14);
                }
              }
              else {
                PFDelete(this,iVar16);
                iVar22 = *(int *)(this + 0xac);
                fVar31 = *(float *)(this + 0x14);
              }
              uVar10 = 0;
              if (iVar27 < iVar22 + -1) {
                uVar10 = -(ulong)(iVar27 + 1U >> 0x1f) & 0xfffffff800000000 |
                         (ulong)(iVar27 + 1U) << 3;
              }
              if ((float)*(int *)(mPFPoints + uVar10 + 4) + fVar31 <= fVar5) {
                PFDelete(this,iVar27);
                iVar22 = *(int *)(this + 0xac);
                uStack_1803c = uVar6 + 1;
                if (iVar22 <= (int)uStack_1803c) break;
              }
              else {
                if (fVar32 < (float)*(int *)(mPFPoints + uVar10 + 4) + fVar31) {
                  PFInsert(this,iVar27,iStack_18040);
                  iVar22 = *(int *)(this + 0xac);
                }
                uStack_1803c = uVar6 + 1;
                if (iVar22 <= (int)(uVar6 + 1)) break;
              }
              uStack_1803c = uVar6 + 1;
              pCVar24 = pCVar24 + 4;
              iVar27 = *(int *)pCVar24;
              fVar31 = *(float *)(this + 0x14);
              uVar6 = uStack_1803c;
              fVar28 = (float)*(int *)(mPFPoints + (long)iVar27 * 8 + 4) + fVar31;
            }
          }
          qsort(*(void **)(this + 0xa0),(long)*(int *)(this + 0xa8),0x20,PFCompareActive);
          iVar22 = *(int *)(this + 0xa8);
          if (0 < iVar22) {
            lVar14 = *(long *)(this + 0xa0);
            lStack_18038 = 0;
            do {
              lVar25 = lStack_18038 * 0x40;
              pdVar17 = (double *)(lVar14 + lVar25);
              dVar29 = *(double *)(lVar14 + lVar25);
              iVar27 = (int)(dVar29 - 0.5);
              if (iVar27 < iVar20) {
                iVar16 = 0xff;
                iVar27 = iVar20;
              }
              else {
                iVar16 = (int)(ABS((dVar29 - (double)iVar27) - 0.5) * 255.0);
              }
              lVar1 = lVar25 + 0x20;
              pdVar13 = (double *)(lVar14 + lVar1);
              iVar26 = (int)(*(double *)(lVar14 + lVar1) - 0.5);
              if (iVar15 < iVar26) {
                iStack_18054 = 0xff;
                iVar26 = iVar15;
              }
              else {
                iStack_18054 = (int)(ABS((*(double *)(lVar14 + lVar1) - (double)iVar26) - 0.5) *
                                    255.0);
              }
              if ((iVar27 <= iVar26) && (iVar23 < 0x2000)) {
                lVar14 = (long)iVar23;
                iVar22 = uVar3 * (iStack_18040 - iStack_18020);
                aiStack_18008[lVar14 * 3] = iStack_18040;
                aiStack_18008[lVar14 * 3 + 1] = iVar27;
                aiStack_18008[lVar14 * 3 + 2] = (iVar26 - iVar27) + 1;
                if (iVar26 == iVar27) {
                  iVar26 = iVar26 - iStack_18028;
                  iStack_18010 = 0xff;
                  iStack_1800c = (uint)(byte)pCStack_18060[(long)iVar26 + (long)iVar22] +
                                 (iVar16 * iStack_18054 >> 8);
                  piVar9 = eastl::min_alt<int>(&iStack_18010,&iStack_1800c);
                  pCStack_18060[(long)iVar26 + (long)iVar22] = SUB41(*piVar9,0);
                  lVar14 = *(long *)(this + 0xa0);
                }
                else {
                  dVar29 = pdVar17[1];
                  dVar33 = ABS(dVar29);
                  if (dVar33 <= 1.0) {
                    iStack_18010 = 0xff;
                    iVar4 = iVar27 - iStack_18028;
                    iVar27 = iVar27 + 1;
                    iStack_1800c = (uint)(byte)pCStack_18060[(long)iVar4 + (long)iVar22] + iVar16;
                    piVar9 = eastl::min_alt<int>(&iStack_18010,&iStack_1800c);
                    pCStack_18060[(long)iVar4 + (long)iVar22] = SUB41(*piVar9,0);
                  }
                  else {
                    dVar30 = pdVar17[3];
                    do {
                      dVar33 = dVar33 - 1.0;
                      iStack_18010 = 0xff;
                      iStack_1800c = (int)(ABS(((dVar30 - 0.5) - (double)iStack_18040) +
                                               (1.0 / dVar29) * (double)iVar27) * 255.0);
                      piVar9 = eastl::min_alt<int>(&iStack_18010,&iStack_1800c);
                      iVar16 = iVar27 - iStack_18028;
                      iVar27 = iVar27 + 1;
                      iStack_1800c = (uint)(byte)pCStack_18060[(long)iVar16 + (long)iVar22] +
                                     *piVar9;
                      piVar9 = eastl::min_alt<int>(&iStack_18010,&iStack_1800c);
                      pCStack_18060[(long)iVar16 + (long)iVar22] = SUB41(*piVar9,0);
                      if (iVar26 < iVar27) break;
                    } while (0.0 < dVar33);
                  }
                  dVar29 = *(double *)(*(long *)(this + 0xa0) + lVar1 + 8);
                  dVar33 = ABS(dVar29);
                  if (dVar33 <= 1.0) {
                    iStack_18010 = 0xff;
                    iVar16 = iVar26 - iStack_18028;
                    iVar26 = iVar26 + -1;
                    iStack_1800c = (uint)(byte)pCStack_18060[(long)iVar16 + (long)iVar22] +
                                   iStack_18054;
                    piVar9 = eastl::min_alt<int>(&iStack_18010,&iStack_1800c);
                    pCStack_18060[(long)iVar16 + (long)iVar22] = SUB41(*piVar9,0);
                  }
                  else {
                    dVar30 = *(double *)(*(long *)(this + 0xa0) + lVar1 + 0x18);
                    do {
                      dVar33 = dVar33 - 1.0;
                      iStack_18010 = 0xff;
                      iStack_1800c = (int)(ABS(((dVar30 - 0.5) - (double)iStack_18040) +
                                               (1.0 / dVar29) * (double)iVar26) * 255.0);
                      piVar9 = eastl::min_alt<int>(&iStack_18010,&iStack_1800c);
                      iVar16 = iVar26 - iStack_18028;
                      iVar26 = iVar26 + -1;
                      iStack_1800c = (uint)(byte)pCStack_18060[(long)iVar16 + (long)iVar22] +
                                     *piVar9;
                      piVar9 = eastl::min_alt<int>(&iStack_18010,&iStack_1800c);
                      pCStack_18060[(long)iVar16 + (long)iVar22] = SUB41(*piVar9,0);
                      if (iVar26 < iVar27) break;
                    } while (0.0 < dVar33);
                  }
                  if (iVar26 < iVar27) {
                    lVar14 = *(long *)(this + 0xa0);
                  }
                  else {
                    memset(pCStack_18060 + (long)(iVar27 - iStack_18028) + (long)iVar22,0xff,
                           (long)((iVar26 - iVar27) + 1));
                    lVar14 = *(long *)(this + 0xa0);
                  }
                }
                dVar29 = *(double *)(lVar14 + lVar25);
                iVar22 = *(int *)(this + 0xa8);
                pdVar17 = (double *)(lVar14 + lVar25);
                pdVar13 = (double *)(lVar14 + lVar1);
                iVar23 = iVar23 + 1;
              }
              dVar33 = pdVar13[1];
              iVar27 = (int)lStack_18038;
              lStack_18038 = lStack_18038 + 1;
              *pdVar17 = dVar29 + pdVar17[1];
              *pdVar13 = *pdVar13 + dVar33;
            } while ((iVar27 + 1) * 2 < iVar22);
          }
          iStack_18040 = iStack_18040 + 1;
          if (iVar18 < iStack_18040) goto LAB_05150888;
          iVar22 = *(int *)(this + 0xac);
        } while( true );
      }
      iVar23 = 0;
LAB_05150888:
      plVar19 = *(long **)(this + 0x88);
      uVar12 = GetFinalColor(this);
      (**(code **)(*plVar19 + 0x60))
                (plVar19,aiStack_18008,iVar23,uVar12,*(undefined4 *)(this + 0x78),pCStack_18060,
                 iStack_18028,iStack_18020,uVar3,uVar2);
      if (pCStack_18060 != (ColourFit *)&DAT_06bad2c0) {
        EATextSquish::ColourFit::~ColourFit(pCStack_18060);
      }
      EATextSquish::ColourFit::~ColourFit(this_00);
      if (*(ColourFit **)(this + 0xa0) != (ColourFit *)0x0) {
        EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0xa0));
      }
    }
  }
  if (lVar7 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawLineClipHelper(double*, double*, double*, double*) */

void __thiscall
Sexy::Graphics::DrawLineClipHelper
          (Graphics *this,double *param_1,double *param_2,double *param_3,double *param_4)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  long local_8;
  
  local_28 = *param_1;
  local_18 = *param_3;
  local_20 = *param_2;
  local_10 = *param_4;
  local_8 = ___stack_chk_guard;
  if (local_18 < local_28) {
    std::swap<double>(&local_28,&local_18);
    std::swap<double>(&local_20,&local_10);
  }
  dVar5 = (double)*(int *)(this + 0x28);
  if (dVar5 <= local_28) {
LAB_05150f80:
    iVar1 = *(int *)(this + 0x28) + *(int *)(this + 0x30);
    dVar5 = (double)iVar1;
    if (dVar5 <= local_18) {
      if (dVar5 <= local_28) goto LAB_05151020;
      dVar5 = (double)(iVar1 + -1);
      local_10 = local_10 + ((local_10 - local_20) / (local_18 - local_28)) * (dVar5 - local_18);
      local_18 = dVar5;
    }
    if (local_10 < local_20) {
      std::swap<double>(&local_28,&local_18);
      std::swap<double>(&local_20,&local_10);
    }
    dVar5 = (double)*(int *)(this + 0x2c);
    if (local_20 < dVar5) {
      if (local_10 < dVar5) goto LAB_05151020;
      local_28 = local_28 + ((local_18 - local_28) / (local_10 - local_20)) * (dVar5 - local_20);
      local_20 = dVar5;
    }
    iVar1 = *(int *)(this + 0x2c) + *(int *)(this + 0x34);
    dVar3 = (double)iVar1;
    dVar5 = local_10;
    dVar4 = local_18;
    if (dVar3 <= local_10) {
      if (dVar3 <= local_20) goto LAB_05151020;
      dVar5 = (double)(iVar1 + -1);
      dVar4 = local_18 + (dVar5 - local_10) * ((local_18 - local_28) / (local_10 - local_20));
    }
    *param_1 = local_28;
    uVar2 = 1;
    *param_2 = local_20;
    *param_3 = dVar4;
    *param_4 = dVar5;
  }
  else {
    if (dVar5 <= local_18) {
      local_20 = local_20 + ((local_10 - local_20) / (local_18 - local_28)) * (dVar5 - local_28);
      local_28 = dVar5;
      goto LAB_05150f80;
    }
LAB_05151020:
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawLine(float, float, float, float) */

void __thiscall
Sexy::Graphics::DrawLine(Graphics *this,float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  long local_8;
  
  local_28 = (double)(param_1 + *(float *)(this + 0x10));
  local_20 = (double)(param_2 + *(float *)(this + 0x14));
  local_8 = ___stack_chk_guard;
  local_18 = (double)(param_3 + *(float *)(this + 0x10));
  local_10 = (double)(param_4 + *(float *)(this + 0x14));
  cVar4 = DrawLineClipHelper(this,&local_28,&local_20,&local_18,&local_10);
  if (cVar4 != '\0') {
    SetAsCurrentContext(this);
    dVar3 = local_18;
    dVar2 = local_20;
    dVar1 = local_28;
    plVar6 = *(long **)(this + 0x88);
    uVar5 = GetFinalColor(this);
    (**(code **)(*plVar6 + 0x70))
              (dVar1,dVar2,dVar3,local_10,plVar6,uVar5,*(undefined4 *)(this + 0x78),0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawLineAA(float, float, float, float) */

void __thiscall
Sexy::Graphics::DrawLineAA(Graphics *this,float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  long local_8;
  
  local_28 = (double)(param_1 + *(float *)(this + 0x10));
  local_20 = (double)(param_2 + *(float *)(this + 0x14));
  local_8 = ___stack_chk_guard;
  local_18 = (double)(param_3 + *(float *)(this + 0x10));
  local_10 = (double)(param_4 + *(float *)(this + 0x14));
  cVar4 = DrawLineClipHelper(this,&local_28,&local_20,&local_18,&local_10);
  if (cVar4 != '\0') {
    SetAsCurrentContext(this);
    dVar3 = local_18;
    dVar2 = local_20;
    dVar1 = local_28;
    plVar6 = *(long **)(this + 0x88);
    uVar5 = GetFinalColor(this);
    (**(code **)(*plVar6 + 0x70))
              (dVar1,dVar2,dVar3,local_10,plVar6,uVar5,*(undefined4 *)(this + 0x78),1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::CalcFinalColor() */

void __thiscall Sexy::Graphics::CalcFinalColor(Graphics *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int local_38;
  int local_34 [3];
  int local_28;
  int local_24 [3];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_0514e190(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  if (lVar4 == 0) {
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x68);
  }
  else {
    piVar5 = (int *)std::
                    vector<std::pair<FEAST::CPrsCSTNode*,bool>,std::allocator<std::pair<FEAST::CPrsCSTNode*,bool>>>
                    ::back((vector<std::pair<FEAST::CPrsCSTNode*,bool>,std::allocator<std::pair<FEAST::CPrsCSTNode*,bool>>>
                            *)(this + 0x38));
    local_38 = 0xff;
    local_34[0] = (*piVar5 * *(int *)(this + 0x60)) / 0xff;
    piVar6 = eastl::min_alt<int>(&local_38,local_34);
    iVar1 = *piVar6;
    local_34[1] = 0xff;
    local_34[2] = (piVar5[1] * *(int *)(this + 100)) / 0xff;
    piVar6 = eastl::min_alt<int>(local_34 + 1,local_34 + 2);
    iVar2 = *piVar6;
    local_28 = 0xff;
    local_24[0] = (piVar5[2] * *(int *)(this + 0x68)) / 0xff;
    piVar6 = eastl::min_alt<int>(&local_28,local_24);
    iVar3 = *piVar6;
    local_24[1] = 0xff;
    local_24[2] = (piVar5[3] * *(int *)(this + 0x6c)) / 0xff;
    piVar5 = eastl::min_alt<int>(local_24 + 1,local_24 + 2);
    Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,*piVar5);
    *(undefined8 *)(this + 0x50) = local_18;
    *(undefined8 *)(this + 0x58) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::SetColor(Sexy::Color const&) */

void __thiscall Sexy::Graphics::SetColor(Graphics *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x68) = uVar1;
  CalcFinalColor(this);
  return;
}


/* Sexy::Graphics::PopColorMult() */

void __thiscall Sexy::Graphics::PopColorMult(Graphics *this)

{
  FUN_0514e1b0(this + 0x40);
  CalcFinalColor(this);
  return;
}


/* Sexy::Graphics::GetImageColor() */

Graphics * __thiscall Sexy::Graphics::GetImageColor(Graphics *this)

{
  long lVar1;
  Graphics *pGVar2;
  
  lVar1 = FUN_0514e190(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
  if (lVar1 == 0) {
    if (this[0x7c] != (Graphics)0x0) {
      return this + 0x60;
    }
    return (Graphics *)mDefaultImageColor;
  }
  if (this[0x7c] != (Graphics)0x0) {
    return this + 0x50;
  }
  pGVar2 = (Graphics *)
           std::
           vector<std::pair<FEAST::CPrsCSTNode*,bool>,std::allocator<std::pair<FEAST::CPrsCSTNode*,bool>>>
           ::back((vector<std::pair<FEAST::CPrsCSTNode*,bool>,std::allocator<std::pair<FEAST::CPrsCSTNode*,bool>>>
                   *)(this + 0x38));
  return pGVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImage(Sexy::Image*, int, int, Sexy::TRect<int> const&) */

void __thiscall
Sexy::Graphics::DrawImage(Graphics *this,Image *param_1,int param_2,int param_3,TRect *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)param_4;
  iVar2 = *(int *)(param_4 + 8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
  if ((iVar1 + iVar2 <= iVar3) &&
     (iVar1 = *(int *)(param_4 + 4), iVar2 = *(int *)(param_4 + 0xc),
     iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1), iVar1 + iVar2 <= iVar3)
     ) {
    fVar8 = *(float *)(this + 0x18);
    fVar7 = *(float *)(this + 0x1c);
    iVar1 = (int)*(float *)(this + 0x10) + param_2;
    iVar2 = (int)*(float *)(this + 0x14) + param_3;
    if ((fVar8 == 1.0) && (fVar7 == 1.0)) {
      Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(param_4 + 8),*(int *)(param_4 + 0xc));
      TRect<int>::Intersection((TRect *)aIStack_18);
      Insets::Insets(aIStack_18,(*(int *)param_4 + local_28) - iVar1,
                     (*(int *)(param_4 + 4) + local_24) - iVar2,local_20,local_1c);
      if ((0 < local_10) && (0 < local_c)) {
        SetAsCurrentContext(this);
        plVar5 = *(long **)(this + 0x88);
        pcVar6 = *(code **)(*plVar5 + 0x78);
        uVar4 = GetImageColor(this);
        (*pcVar6)(plVar5,param_1,local_28,local_24,aIStack_18,uVar4,*(undefined4 *)(this + 0x78));
      }
    }
    else {
      Insets::Insets(aIStack_18,
                     (int)((float)(int)(((float)iVar1 - *(float *)(this + 0x20)) * fVar8) +
                          *(float *)(this + 0x20)),
                     (int)((float)(int)(fVar7 * ((float)iVar2 - *(float *)(this + 0x24))) +
                          *(float *)(this + 0x24)),(int)((float)*(int *)(param_4 + 8) * fVar8),
                     (int)(fVar7 * (float)*(int *)(param_4 + 0xc)));
      SetAsCurrentContext(this);
      plVar5 = *(long **)(this + 0x88);
      pcVar6 = *(code **)(*plVar5 + 0xb8);
      uVar4 = GetImageColor(this);
      (*pcVar6)(plVar5,param_1,aIStack_18,param_4,this + 0x28,uVar4,*(undefined4 *)(this + 0x78),
                this[0x7d],0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageCel(Sexy::Image*, int, int, int, int) */

void __thiscall
Sexy::Graphics::DrawImageCel
          (Graphics *this,Image *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((-1 < param_5) && (-1 < param_4)) && (iVar1 = *(int *)(param_1 + 0x40), param_5 < iVar1)) &&
     (iVar2 = *(int *)(param_1 + 0x44), param_4 < iVar2)) {
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x38) / iVar2;
    }
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x3c) / iVar1;
    }
    Insets::Insets(aIStack_18,iVar3 * param_4,iVar2 * param_5,iVar3,iVar2);
    DrawImage(this,param_1,param_2,param_3,(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::DrawImageCel(Sexy::Image*, int, int, int) */

void __thiscall
Sexy::Graphics::DrawImageCel(Graphics *this,Image *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = param_4 / iVar1;
  }
  DrawImageCel(this,param_1,param_2,param_3,param_4 - iVar2 * iVar1,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImage(Sexy::Image*, int, int) */

void __thiscall Sexy::Graphics::DrawImage(Graphics *this,Image *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(float *)(this + 0x18) == 1.0) && (*(float *)(this + 0x1c) == 1.0)) {
    fVar7 = *(float *)(this + 0x10);
    fVar6 = *(float *)(this + 0x14);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
    iVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
    Insets::Insets(aIStack_18,(int)fVar7 + param_2,(int)fVar6 + param_3,iVar1,iVar2);
    TRect<int>::Intersection((TRect *)aIStack_18);
    Insets::Insets(aIStack_18,local_28 - ((int)fVar7 + param_2),local_24 - ((int)fVar6 + param_3),
                   local_20,local_1c);
    if ((0 < local_10) && (0 < local_c)) {
      SetAsCurrentContext(this);
      plVar4 = *(long **)(this + 0x88);
      pcVar5 = *(code **)(*plVar4 + 0x78);
      uVar3 = GetImageColor(this);
      (*pcVar5)(plVar4,param_1,local_28,local_24,aIStack_18,uVar3,*(undefined4 *)(this + 0x78));
    }
  }
  else {
    Insets::Insets(aIStack_18,0,0,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c));
    DrawImage(this,param_1,param_2,param_3,(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageMirror(Sexy::Image*, int, int, Sexy::TRect<int> const&, bool) */

void __thiscall
Sexy::Graphics::DrawImageMirror
          (Graphics *this,Image *param_1,int param_2,int param_3,TRect *param_4,bool param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_5) {
    fVar8 = *(float *)(this + 0x10);
    iVar1 = *(int *)param_4;
    fVar7 = *(float *)(this + 0x14);
    iVar2 = *(int *)(param_4 + 8);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
    if ((iVar1 + iVar2 <= iVar3) &&
       (iVar1 = *(int *)(param_4 + 4), iVar2 = *(int *)(param_4 + 0xc),
       iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1),
       iVar1 + iVar2 <= iVar3)) {
      Insets::Insets(aIStack_18,(int)fVar8 + param_2,(int)fVar7 + param_3,*(int *)(param_4 + 8),
                     *(int *)(param_4 + 0xc));
      TRect<int>::Intersection((TRect *)aIStack_18);
      Insets::Insets(aIStack_18,
                     ((*(int *)(param_4 + 8) - local_20) - (local_28 - ((int)fVar8 + param_2))) +
                     *(int *)param_4,(*(int *)(param_4 + 4) + local_24) - ((int)fVar7 + param_3),
                     local_20,local_1c);
      if ((0 < local_10) && (0 < local_c)) {
        SetAsCurrentContext(this);
        plVar5 = *(long **)(this + 0x88);
        pcVar6 = *(code **)(*plVar5 + 0xb0);
        uVar4 = GetImageColor(this);
        (*pcVar6)(plVar5,param_1,local_28,local_24,aIStack_18,uVar4,*(undefined4 *)(this + 0x78));
      }
    }
  }
  else {
    DrawImage(this,param_1,param_2,param_3,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageMirror(Sexy::Image*, int, int, bool) */

void __thiscall
Sexy::Graphics::DrawImageMirror(Graphics *this,Image *param_1,int param_2,int param_3,bool param_4)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_18,0,0,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c));
  DrawImageMirror(this,param_1,param_2,param_3,(TRect *)aIStack_18,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImage(Sexy::Image*, int, int, int, int) */

void __thiscall
Sexy::Graphics::DrawImage
          (Graphics *this,Image *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_28,(int)*(float *)(this + 0x10) + param_2,
                 (int)*(float *)(this + 0x14) + param_3,param_4,param_5);
  Insets::Insets(aIStack_18,0,0,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c));
  SetAsCurrentContext(this);
  plVar2 = *(long **)(this + 0x88);
  pcVar3 = *(code **)(*plVar2 + 0xb8);
  uVar1 = GetImageColor(this);
  (*pcVar3)(plVar2,param_1,aIStack_28,aIStack_18,this + 0x28,uVar1,*(undefined4 *)(this + 0x78),
            this[0x7d],0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImage(Sexy::Image*, Sexy::TRect<int> const&, Sexy::TRect<int> const&) */

void __thiscall
Sexy::Graphics::DrawImage(Graphics *this,Image *param_1,TRect *param_2,TRect *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets((Insets *)&local_28,(int)*(float *)(this + 0x10) + *(int *)param_2,
                 (int)*(float *)(this + 0x14) + *(int *)(param_2 + 4),*(int *)(param_2 + 8),
                 *(int *)(param_2 + 0xc));
  fVar5 = *(float *)(this + 0x18);
  fVar4 = *(float *)(this + 0x1c);
  if ((fVar5 != 1.0) || (fVar4 != 1.0)) {
    Insets::Insets((Insets *)&local_18,
                   (int)((float)(int)(((float)(int)local_28 - *(float *)(this + 0x20)) * fVar5) +
                        *(float *)(this + 0x20)),
                   (int)((float)(int)(fVar4 * ((float)local_28._4_4_ - *(float *)(this + 0x24))) +
                        *(float *)(this + 0x24)),(int)((float)(int)local_20 * fVar5),
                   (int)(fVar4 * (float)local_20._4_4_));
    local_28 = local_18;
    local_20 = uStack_10;
  }
  SetAsCurrentContext(this);
  plVar2 = *(long **)(this + 0x88);
  pcVar3 = *(code **)(*plVar2 + 0xb8);
  uVar1 = GetImageColor(this);
  (*pcVar3)(plVar2,param_1,(Insets *)&local_28,param_3,this + 0x28,uVar1,
            *(undefined4 *)(this + 0x78),this[0x7d],0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageBox(Sexy::TRect<int> const&, Sexy::TRect<int> const&, Sexy::Image*) */

void __thiscall
Sexy::Graphics::DrawImageBox(Graphics *this,TRect *param_1,TRect *param_2,Image *param_3)

{
  Insets *pIVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  Graphics *local_a0;
  int local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar6 = *(int *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  if ((iVar6 < 1) || (iVar7 = *(int *)(param_1 + 0xc), iVar7 < 1)) goto LAB_051526f0;
  uVar8 = *(uint *)(param_2 + 8);
  iVar15 = *(int *)param_1;
  iVar19 = *(int *)(param_1 + 4);
  iVar11 = iVar7 / 3;
  iVar13 = iVar6 / 3;
  iVar14 = iVar11 * -2;
  iVar20 = iVar13 * -2;
  iVar6 = iVar6 + iVar20;
  iVar7 = iVar7 + iVar14;
  uVar9 = *(uint *)(param_2 + 0xc);
  if ((int)uVar8 < iVar13 * 2) {
    iVar2 = (uVar8 & 1) + (int)uVar8 / 2;
    if ((int)uVar9 < iVar11 * 2) {
      local_48 = iVar2 * -2;
LAB_05152108:
      iVar12 = (uVar9 & 1) + (int)uVar9 / 2;
      Insets::Insets((Insets *)&local_38,(Insets *)(this + 0x28));
      iVar5 = iVar12 * -2;
    }
    else {
      local_48 = iVar2 * -2;
      Insets::Insets((Insets *)&local_38,(Insets *)(this + 0x28));
      iVar5 = iVar14;
      iVar12 = iVar11;
    }
    local_a0 = this + 0x28;
    iVar18 = iVar15 + iVar13;
    Insets::Insets(aIStack_28,*(int *)param_2,*(int *)(param_2 + 4),iVar2,iVar12);
    iVar16 = iVar18 + iVar6;
    iVar3 = iVar19 + iVar11;
    iVar4 = iVar3 + iVar7;
    Insets::Insets(aIStack_18,iVar15,iVar19,iVar13,iVar11);
    DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
    Insets::Insets(aIStack_28,(*(int *)param_2 + *(int *)(param_2 + 8)) - iVar2,
                   *(int *)(param_2 + 4),iVar2,iVar12);
    Insets::Insets(aIStack_18,iVar16,iVar19,iVar13,iVar11);
    DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
    Insets::Insets(aIStack_28,*(int *)param_2,
                   (*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc)) - iVar12,iVar2,iVar12);
    Insets::Insets(aIStack_18,iVar15,iVar4,iVar13,iVar11);
    DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
    Insets::Insets(aIStack_28,(*(int *)param_2 + *(int *)(param_2 + 8)) - iVar2,
                   (*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc)) - iVar12,iVar2,iVar12);
    Insets::Insets(aIStack_18,iVar16,iVar4,iVar13,iVar11);
    DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
    ClipRect(this,iVar2 + *(int *)param_2,*(int *)(param_2 + 4),local_48 + *(int *)(param_2 + 8),
             *(int *)(param_2 + 0xc));
    iVar17 = 0;
    iVar10 = 0;
    if (iVar6 != 0) {
      iVar10 = (iVar20 + *(int *)(param_2 + 8) + iVar6 + -1) / iVar6;
    }
    iVar21 = 0;
    if (0 < iVar10) {
      do {
        iVar17 = iVar17 + 1;
        Insets::Insets(aIStack_28,iVar2 + *(int *)param_2 + iVar21,*(int *)(param_2 + 4),iVar6,
                       iVar12);
        Insets::Insets(aIStack_18,iVar18,iVar19,iVar6,iVar11);
        DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
        Insets::Insets(aIStack_28,iVar21 + iVar2 + *(int *)param_2,
                       (*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc)) - iVar12,iVar6,iVar12);
        Insets::Insets(aIStack_18,iVar18,iVar4,iVar6,iVar11);
        DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
        iVar10 = 0;
        if (iVar6 != 0) {
          iVar10 = (iVar20 + *(int *)(param_2 + 8) + iVar6 + -1) / iVar6;
        }
        iVar21 = iVar21 + iVar6;
      } while (iVar17 < iVar10);
    }
    iVar11 = 0;
    *(undefined8 *)local_a0 = local_38;
    *(undefined8 *)(this + 0x30) = uStack_30;
    ClipRect(this,*(int *)param_2,iVar12 + *(int *)(param_2 + 4),*(int *)(param_2 + 8),
             iVar5 + *(int *)(param_2 + 0xc));
    iVar20 = 0;
    iVar17 = 0;
    if (iVar7 != 0) {
      iVar17 = (iVar14 + *(int *)(param_2 + 0xc) + iVar7 + -1) / iVar7;
    }
    if (0 < iVar17) {
      do {
        iVar20 = iVar20 + 1;
        Insets::Insets(aIStack_28,*(int *)param_2,iVar12 + *(int *)(param_2 + 4) + iVar11,iVar2,
                       iVar7);
        Insets::Insets(aIStack_18,iVar15,iVar3,iVar13,iVar7);
        DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
        iVar17 = iVar11 + iVar12 + *(int *)(param_2 + 4);
        iVar11 = iVar11 + iVar7;
        Insets::Insets(aIStack_28,(*(int *)param_2 + *(int *)(param_2 + 8)) - iVar2,iVar17,iVar2,
                       iVar7);
        Insets::Insets(aIStack_18,iVar16,iVar3,iVar13,iVar7);
        DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
        iVar17 = 0;
        if (iVar7 != 0) {
          iVar17 = (iVar14 + *(int *)(param_2 + 0xc) + iVar7 + -1) / iVar7;
        }
      } while (iVar20 < iVar17);
    }
    *(undefined8 *)local_a0 = local_38;
    *(undefined8 *)(this + 0x30) = uStack_30;
    ClipRect(this,iVar2 + *(int *)param_2,iVar12 + *(int *)(param_2 + 4),
             local_48 + *(int *)(param_2 + 8),iVar5 + *(int *)(param_2 + 0xc));
    iVar14 = *(int *)(param_2 + 8);
    iVar20 = 0;
    if (iVar6 != 0) {
      iVar20 = (local_48 + iVar14 + iVar6 + -1) / iVar6;
    }
    if (0 < iVar20) {
      iVar13 = *(int *)(param_2 + 0xc);
      iVar11 = 0;
      iVar20 = iVar11;
      do {
        iVar17 = 0;
        if (iVar7 != 0) {
          iVar17 = (iVar5 + iVar13 + iVar7 + -1) / iVar7;
        }
        if (0 < iVar17) {
          iVar17 = 0;
          iVar14 = 0;
          do {
            iVar18 = *(int *)param_2;
            iVar14 = iVar14 + 1;
            iVar13 = iVar12 + *(int *)(param_2 + 4) + iVar17;
            iVar17 = iVar17 + iVar7;
            Insets::Insets(aIStack_18,iVar15 + iVar2,iVar19 + iVar12,iVar6,iVar7);
            DrawImage(this,param_3,iVar2 + iVar18 + iVar11,iVar13,(TRect *)aIStack_18);
            iVar13 = *(int *)(param_2 + 0xc);
            iVar18 = 0;
            if (iVar7 != 0) {
              iVar18 = (iVar5 + iVar13 + iVar7 + -1) / iVar7;
            }
          } while (iVar14 < iVar18);
          iVar14 = *(int *)(param_2 + 8);
        }
        iVar20 = iVar20 + 1;
        iVar17 = 0;
        if (iVar6 != 0) {
          iVar17 = (local_48 + iVar14 + iVar6 + -1) / iVar6;
        }
        iVar11 = iVar11 + iVar6;
      } while (iVar20 < iVar17);
    }
  }
  else {
    local_48 = iVar20;
    iVar2 = iVar13;
    if ((int)uVar9 < iVar11 * 2) goto LAB_05152108;
    pIVar1 = (Insets *)(this + 0x28);
    iVar2 = iVar15 + iVar13;
    Insets::Insets((Insets *)&local_38,pIVar1);
    iVar12 = iVar2 + iVar6;
    iVar18 = *(int *)param_2;
    iVar16 = *(int *)(param_2 + 4);
    iVar5 = iVar19 + iVar11;
    Insets::Insets(aIStack_18,iVar15,iVar19,iVar13,iVar11);
    iVar17 = iVar5 + iVar7;
    DrawImage(this,param_3,iVar18,iVar16,(TRect *)aIStack_18);
    iVar18 = *(int *)(param_2 + 8);
    iVar16 = *(int *)param_2;
    iVar3 = *(int *)(param_2 + 4);
    Insets::Insets(aIStack_18,iVar12,iVar19,iVar13,iVar11);
    DrawImage(this,param_3,(iVar16 + iVar18) - iVar13,iVar3,(TRect *)aIStack_18);
    iVar18 = *(int *)(param_2 + 4);
    iVar16 = *(int *)(param_2 + 0xc);
    iVar3 = *(int *)param_2;
    Insets::Insets(aIStack_18,iVar15,iVar17,iVar13,iVar11);
    DrawImage(this,param_3,iVar3,(iVar18 + iVar16) - iVar11,(TRect *)aIStack_18);
    iVar18 = *(int *)param_2;
    iVar16 = *(int *)(param_2 + 0xc);
    iVar3 = *(int *)(param_2 + 8);
    iVar4 = *(int *)(param_2 + 4);
    Insets::Insets(aIStack_18,iVar12,iVar17,iVar13,iVar11);
    DrawImage(this,param_3,(iVar18 + iVar3) - iVar13,(iVar4 + iVar16) - iVar11,(TRect *)aIStack_18);
    ClipRect(this,iVar13 + *(int *)param_2,*(int *)(param_2 + 4),iVar20 + *(int *)(param_2 + 8),
             *(int *)(param_2 + 0xc));
    iVar18 = 0;
    if (iVar6 != 0) {
      iVar18 = (iVar20 + *(int *)(param_2 + 8) + iVar6 + -1) / iVar6;
    }
    if (0 < iVar18) {
      iVar16 = 0;
      iVar18 = 0;
      do {
        iVar3 = *(int *)param_2;
        iVar18 = iVar18 + 1;
        iVar4 = *(int *)(param_2 + 4);
        Insets::Insets(aIStack_18,iVar2,iVar19,iVar6,iVar11);
        DrawImage(this,param_3,iVar13 + iVar3 + iVar16,iVar4,(TRect *)aIStack_18);
        iVar4 = *(int *)(param_2 + 4);
        iVar10 = *(int *)(param_2 + 0xc);
        iVar3 = iVar16 + iVar13 + *(int *)param_2;
        iVar16 = iVar16 + iVar6;
        Insets::Insets(aIStack_18,iVar2,iVar17,iVar6,iVar11);
        DrawImage(this,param_3,iVar3,(iVar4 + iVar10) - iVar11,(TRect *)aIStack_18);
        iVar3 = 0;
        if (iVar6 != 0) {
          iVar3 = (iVar20 + *(int *)(param_2 + 8) + iVar6 + -1) / iVar6;
        }
      } while (iVar18 < iVar3);
    }
    *(undefined8 *)pIVar1 = local_38;
    *(undefined8 *)(this + 0x30) = uStack_30;
    ClipRect(this,*(int *)param_2,iVar11 + *(int *)(param_2 + 4),*(int *)(param_2 + 8),
             iVar14 + *(int *)(param_2 + 0xc));
    iVar19 = 0;
    iVar17 = 0;
    iVar18 = 0;
    if (iVar7 != 0) {
      iVar18 = (iVar14 + *(int *)(param_2 + 0xc) + iVar7 + -1) / iVar7;
    }
    if (0 < iVar18) {
      do {
        iVar18 = *(int *)(param_2 + 4);
        iVar19 = iVar19 + 1;
        iVar16 = *(int *)param_2;
        Insets::Insets(aIStack_18,iVar15,iVar5,iVar13,iVar7);
        DrawImage(this,param_3,iVar16,iVar11 + iVar18 + iVar17,(TRect *)aIStack_18);
        iVar16 = *(int *)(param_2 + 8);
        iVar3 = *(int *)param_2;
        iVar18 = iVar17 + iVar11 + *(int *)(param_2 + 4);
        iVar17 = iVar17 + iVar7;
        Insets::Insets(aIStack_18,iVar12,iVar5,iVar13,iVar7);
        DrawImage(this,param_3,(iVar3 + iVar16) - iVar13,iVar18,(TRect *)aIStack_18);
        iVar18 = 0;
        if (iVar7 != 0) {
          iVar18 = (iVar14 + *(int *)(param_2 + 0xc) + iVar7 + -1) / iVar7;
        }
      } while (iVar19 < iVar18);
    }
    *(undefined8 *)pIVar1 = local_38;
    *(undefined8 *)(this + 0x30) = uStack_30;
    ClipRect(this,iVar13 + *(int *)param_2,iVar11 + *(int *)(param_2 + 4),
             iVar20 + *(int *)(param_2 + 8),iVar14 + *(int *)(param_2 + 0xc));
    iVar15 = *(int *)(param_2 + 8);
    iVar19 = 0;
    if (iVar6 != 0) {
      iVar19 = (iVar20 + iVar15 + iVar6 + -1) / iVar6;
    }
    if (0 < iVar19) {
      iVar17 = *(int *)(param_2 + 0xc);
      iVar12 = 0;
      iVar19 = iVar12;
      do {
        iVar18 = 0;
        if (iVar7 != 0) {
          iVar18 = (iVar14 + iVar17 + iVar7 + -1) / iVar7;
        }
        if (0 < iVar18) {
          iVar18 = 0;
          iVar15 = 0;
          do {
            iVar16 = *(int *)param_2;
            iVar15 = iVar15 + 1;
            iVar17 = iVar11 + *(int *)(param_2 + 4) + iVar18;
            iVar18 = iVar18 + iVar7;
            Insets::Insets(aIStack_18,iVar2,iVar5,iVar6,iVar7);
            DrawImage(this,param_3,iVar13 + iVar16 + iVar12,iVar17,(TRect *)aIStack_18);
            iVar17 = *(int *)(param_2 + 0xc);
            iVar16 = 0;
            if (iVar7 != 0) {
              iVar16 = (iVar14 + iVar17 + iVar7 + -1) / iVar7;
            }
          } while (iVar15 < iVar16);
          iVar15 = *(int *)(param_2 + 8);
        }
        iVar19 = iVar19 + 1;
        iVar18 = 0;
        if (iVar6 != 0) {
          iVar18 = (iVar20 + iVar15 + iVar6 + -1) / iVar6;
        }
        iVar12 = iVar12 + iVar6;
      } while (iVar19 < iVar18);
      *(undefined8 *)pIVar1 = local_38;
      *(undefined8 *)(this + 0x30) = uStack_30;
      goto LAB_051526f0;
    }
  }
  local_a0 = this + 0x28;
  *(undefined8 *)local_a0 = local_38;
  *(undefined8 *)(this + 0x30) = uStack_30;
LAB_051526f0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageBox(Sexy::TRect<int> const&, Sexy::Image*) */

void __thiscall Sexy::Graphics::DrawImageBox(Graphics *this,TRect *param_1,Image *param_2)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_18,0,0,*(int *)(param_2 + 0x38),*(int *)(param_2 + 0x3c));
  DrawImageBox(this,(TRect *)aIStack_18,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageBoxStretch(Sexy::TRect<int> const&, Sexy::TRect<int> const&,
   Sexy::Image*) */

void __thiscall
Sexy::Graphics::DrawImageBoxStretch(Graphics *this,TRect *param_1,TRect *param_2,Image *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_34;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  iVar7 = *(int *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  if ((0 < iVar7) && (iVar8 = *(int *)(param_1 + 0xc), 0 < iVar8)) {
    uVar9 = *(uint *)(param_2 + 8);
    iVar10 = *(int *)param_1;
    iVar11 = *(int *)(param_1 + 4);
    iVar12 = iVar7 / 3;
    iVar13 = iVar8 / 3;
    local_34 = iVar12 * -2;
    iVar14 = iVar13 * -2;
    iVar7 = iVar7 + local_34;
    iVar8 = iVar8 + iVar14;
    iVar5 = iVar12;
    if ((int)uVar9 < iVar12 * 2) {
      iVar5 = (int)uVar9 / 2;
      if ((uVar9 & 1) != 0) {
        iVar5 = iVar5 + 1;
      }
      local_34 = iVar5 * -2;
    }
    uVar9 = *(uint *)(param_2 + 0xc);
    iVar6 = iVar13;
    if ((int)uVar9 < iVar13 * 2) {
      iVar6 = (int)uVar9 / 2;
      if ((uVar9 & 1) != 0) {
        iVar6 = iVar6 + 1;
      }
      iVar14 = iVar6 * -2;
    }
    iVar1 = iVar10 + iVar12;
    Insets::Insets(aIStack_28,*(int *)param_2,*(int *)(param_2 + 4),iVar5,iVar6);
    iVar2 = iVar1 + iVar7;
    iVar3 = iVar11 + iVar13;
    iVar4 = iVar3 + iVar8;
    Insets::Insets(aIStack_18,iVar10,iVar11,iVar12,iVar13);
    DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
    Insets::Insets(aIStack_28,(*(int *)param_2 + *(int *)(param_2 + 8)) - iVar5,
                   *(int *)(param_2 + 4),iVar5,iVar6);
    Insets::Insets(aIStack_18,iVar2,iVar11,iVar12,iVar13);
    DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
    Insets::Insets(aIStack_28,*(int *)param_2,
                   (*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc)) - iVar6,iVar5,iVar6);
    Insets::Insets(aIStack_18,iVar10,iVar4,iVar12,iVar13);
    DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
    Insets::Insets(aIStack_28,(*(int *)param_2 + *(int *)(param_2 + 8)) - iVar5,
                   (*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc)) - iVar6,iVar5,iVar6);
    Insets::Insets(aIStack_18,iVar2,iVar4,iVar12,iVar13);
    DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
    if (0 < local_34 + *(int *)(param_2 + 8)) {
      Insets::Insets(aIStack_28,iVar5 + *(int *)param_2,*(int *)(param_2 + 4),
                     local_34 + *(int *)(param_2 + 8),iVar6);
      Insets::Insets(aIStack_18,iVar1,iVar11,iVar7,iVar13);
      DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
      Insets::Insets(aIStack_28,iVar5 + *(int *)param_2,
                     (*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc)) - iVar6,
                     local_34 + *(int *)(param_2 + 8),iVar6);
      Insets::Insets(aIStack_18,iVar1,iVar4,iVar7,iVar13);
      DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
    }
    if (0 < iVar14 + *(int *)(param_2 + 0xc)) {
      Insets::Insets(aIStack_28,*(int *)param_2,iVar6 + *(int *)(param_2 + 4),iVar5,
                     iVar14 + *(int *)(param_2 + 0xc));
      Insets::Insets(aIStack_18,iVar10,iVar3,iVar12,iVar8);
      DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
      Insets::Insets(aIStack_28,(*(int *)param_2 + *(int *)(param_2 + 8)) - iVar5,
                     iVar6 + *(int *)(param_2 + 4),iVar5,iVar14 + *(int *)(param_2 + 0xc));
      Insets::Insets(aIStack_18,iVar2,iVar3,iVar12,iVar8);
      DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
      if ((0 < local_34 + *(int *)(param_2 + 8)) && (0 < iVar14 + *(int *)(param_2 + 0xc))) {
        Insets::Insets(aIStack_28,iVar5 + *(int *)param_2,iVar6 + *(int *)(param_2 + 4),
                       local_34 + *(int *)(param_2 + 8),iVar14 + *(int *)(param_2 + 0xc));
        Insets::Insets(aIStack_18,iVar1,iVar3,iVar7,iVar8);
        DrawImage(this,param_3,(TRect *)aIStack_28,(TRect *)aIStack_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageBoxStretch(Sexy::TRect<int> const&, Sexy::Image*) */

void __thiscall Sexy::Graphics::DrawImageBoxStretch(Graphics *this,TRect *param_1,Image *param_2)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_18,0,0,*(int *)(param_2 + 0x38),*(int *)(param_2 + 0x3c));
  DrawImageBoxStretch(this,(TRect *)aIStack_18,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageCel(Sexy::Image*, Sexy::TRect<int> const&, int, int) */

void __thiscall
Sexy::Graphics::DrawImageCel(Graphics *this,Image *param_1,TRect *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((-1 < param_4) && (-1 < param_3)) && (iVar1 = *(int *)(param_1 + 0x40), param_4 < iVar1)) &&
     (iVar2 = *(int *)(param_1 + 0x44), param_3 < iVar2)) {
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x38) / iVar2;
    }
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x3c) / iVar1;
    }
    Insets::Insets(aIStack_18,iVar3 * param_3,iVar2 * param_4,iVar3,iVar2);
    DrawImage(this,param_1,param_2,(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::DrawImageCel(Sexy::Image*, Sexy::TRect<int> const&, int) */

void __thiscall
Sexy::Graphics::DrawImageCel(Graphics *this,Image *param_1,TRect *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = param_3 / iVar1;
  }
  DrawImageCel(this,param_1,param_2,param_3 - iVar2 * iVar1,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageMirror(Sexy::Image*, Sexy::TRect<int> const&, Sexy::TRect<int> const&,
   bool) */

void __thiscall
Sexy::Graphics::DrawImageMirror
          (Graphics *this,Image *param_1,TRect *param_2,TRect *param_3,bool param_4)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4) {
    Insets::Insets(aIStack_18,(int)*(float *)(this + 0x10) + *(int *)param_2,
                   (int)*(float *)(this + 0x14) + *(int *)(param_2 + 4),*(int *)(param_2 + 8),
                   *(int *)(param_2 + 0xc));
    SetAsCurrentContext(this);
    plVar2 = *(long **)(this + 0x88);
    pcVar3 = *(code **)(*plVar2 + 0xb8);
    uVar1 = GetImageColor(this);
    (*pcVar3)(plVar2,param_1,aIStack_18,param_3,this + 0x28,uVar1,*(undefined4 *)(this + 0x78),
              this[0x7d],1);
  }
  else {
    DrawImage(this,param_1,param_2,param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageF(Sexy::Image*, float, float) */

void __thiscall
Sexy::Graphics::DrawImageF(Graphics *this,Image *param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  fVar5 = *(float *)(this + 0x10);
  fVar4 = *(float *)(this + 0x14);
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_18,0,0,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c));
  SetAsCurrentContext(this);
  plVar2 = *(long **)(this + 0x88);
  pcVar3 = *(code **)(*plVar2 + 0x80);
  uVar1 = GetImageColor(this);
  (*pcVar3)(param_2 + fVar5,param_3 + fVar4,plVar2,param_1,aIStack_18,this + 0x28,uVar1,
            *(undefined4 *)(this + 0x78));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::DrawImageF(Sexy::Image*, float, float, Sexy::TRect<int> const&) */

void __thiscall
Sexy::Graphics::DrawImageF(Graphics *this,Image *param_1,float param_2,float param_3,TRect *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(this + 0x10);
  fVar4 = *(float *)(this + 0x14);
  SetAsCurrentContext(this);
  plVar2 = *(long **)(this + 0x88);
  pcVar3 = *(code **)(*plVar2 + 0x80);
  uVar1 = GetImageColor(this);
  (*pcVar3)(param_2 + fVar5,param_3 + fVar4,plVar2,param_1,param_4,this + 0x28,uVar1,
            *(undefined4 *)(this + 0x78));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageRotatedF(Sexy::Image*, float, float, double, float, float,
   Sexy::TRect<int> const*) */

void __thiscall
Sexy::Graphics::DrawImageRotatedF
          (Graphics *this,Image *param_1,float param_2,float param_3,double param_4,float param_5,
          float param_6,TRect *param_7)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 in_register_00005064;
  undefined4 in_register_00005084;
  float fVar4;
  float fVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  fVar5 = *(float *)(this + 0x10);
  fVar4 = *(float *)(this + 0x14);
  local_8 = ___stack_chk_guard;
  SetAsCurrentContext(this);
  if (param_7 == (TRect *)0x0) {
    param_7 = (TRect *)aIStack_18;
    Insets::Insets((Insets *)param_7,0,0,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c));
    plVar2 = *(long **)(this + 0x88);
    pcVar3 = *(code **)(*plVar2 + 0x88);
    uVar1 = GetImageColor(this);
  }
  else {
    plVar2 = *(long **)(this + 0x88);
    pcVar3 = *(code **)(*plVar2 + 0x88);
    uVar1 = GetImageColor(this);
  }
  (*pcVar3)(param_2 + fVar5,param_3 + fVar4,param_4,CONCAT44(in_register_00005064,param_5),
            CONCAT44(in_register_00005084,param_6),plVar2,param_1,param_7,this + 0x28,uVar1,
            *(undefined4 *)(this + 0x78));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::DrawImageRotated(Sexy::Image*, int, int, double, Sexy::TRect<int> const*) */

void __thiscall
Sexy::Graphics::DrawImageRotated
          (Graphics *this,Image *param_1,int param_2,int param_3,double param_4,TRect *param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_5 != (TRect *)0x0) {
    DrawImageRotatedF(this,param_1,(float)param_2,(float)param_3,param_4,
                      (float)(*(int *)(param_5 + 8) / 2),(float)(*(int *)(param_5 + 0xc) / 2),
                      param_5);
    return;
  }
  iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
  iVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
  DrawImageRotatedF(this,param_1,(float)param_2,(float)param_3,param_4,(float)(iVar1 / 2),
                    (float)(iVar2 / 2),(TRect *)0x0);
  return;
}


/* Sexy::Graphics::DrawImageRotatedF(Sexy::Image*, float, float, double, Sexy::TRect<int> const*) */

void __thiscall
Sexy::Graphics::DrawImageRotatedF
          (Graphics *this,Image *param_1,float param_2,float param_3,double param_4,TRect *param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_5 != (TRect *)0x0) {
    DrawImageRotatedF(this,param_1,param_2,param_3,param_4,(float)*(int *)(param_5 + 8) * 0.5,
                      (float)*(int *)(param_5 + 0xc) * 0.5,param_5);
    return;
  }
  iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
  iVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
  DrawImageRotatedF(this,param_1,param_2,param_3,param_4,(float)iVar1 * 0.5,(float)iVar2 * 0.5,
                    (TRect *)0x0);
  return;
}


/* Sexy::Graphics::DrawImageRotated(Sexy::Image*, int, int, double, int, int, Sexy::TRect<int>
   const*) */

void __thiscall
Sexy::Graphics::DrawImageRotated
          (Graphics *this,Image *param_1,int param_2,int param_3,double param_4,int param_5,
          int param_6,TRect *param_7)

{
  DrawImageRotatedF(this,param_1,(float)param_2,(float)param_3,param_4,(float)param_5,(float)param_6
                    ,param_7);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageRotatedAndStretched(Sexy::Image*, int, int, int, int, double, float,
   float, Sexy::TRect<int> const*) */

void Sexy::Graphics::DrawImageRotatedAndStretched
               (Image *param_1,int param_2,int param_3,int param_4,int param_5,double param_6,
               float param_7,float param_8,TRect *param_9)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  uVar2 = (ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_28,(int)*(float *)(param_1 + 0x10) + param_3,
                 (int)*(float *)(param_1 + 0x14) + param_4,param_5,(int)param_9);
  Insets::Insets(aIStack_18,0,0,*(int *)(uVar2 + 0x38),*(int *)(uVar2 + 0x3c));
  SetAsCurrentContext((Graphics *)param_1);
  plVar3 = *(long **)(param_1 + 0x88);
  pcVar4 = *(code **)(*plVar3 + 200);
  uVar1 = GetImageColor((Graphics *)param_1);
  (*pcVar4)(param_6,CONCAT44(in_register_00005024,param_7),CONCAT44(in_register_00005044,param_8),
            plVar3,uVar2,aIStack_28,aIStack_18,param_1 + 0x28,uVar1,*(undefined4 *)(param_1 + 0x78),
            param_1[0x7d],0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageMatrix2(Sexy::Image*, Sexy::SexyMatrix3 const&) */

void __thiscall Sexy::Graphics::DrawImageMatrix2(Graphics *this,Image *param_1,SexyMatrix3 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_18,0,0,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c));
  SetAsCurrentContext(this);
  plVar2 = *(long **)(this + 0x88);
  uVar4 = *(undefined4 *)(this + 0x10);
  uVar5 = *(undefined4 *)(this + 0x14);
  pcVar3 = *(code **)(*plVar2 + 0x98);
  uVar1 = GetImageColor(this);
  (*pcVar3)(uVar4,uVar5,plVar2,param_1,param_2,this + 0x28,uVar1,*(undefined4 *)(this + 0x78),
            aIStack_18,this[0x7f],0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::DrawImageMatrix2(Sexy::Image*, Sexy::SexyMatrix3 const&, Sexy::TRect<int> const&)
    */

void __thiscall
Sexy::Graphics::DrawImageMatrix2(Graphics *this,Image *param_1,SexyMatrix3 *param_2,TRect *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  SetAsCurrentContext(this);
  plVar2 = *(long **)(this + 0x88);
  uVar4 = *(undefined4 *)(this + 0x10);
  uVar5 = *(undefined4 *)(this + 0x14);
  pcVar3 = *(code **)(*plVar2 + 0x98);
  uVar1 = GetImageColor(this);
  (*pcVar3)(uVar4,uVar5,plVar2,param_1,param_2,this + 0x28,uVar1,*(undefined4 *)(this + 0x78),
            param_3,this[0x7f],0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageMatrix(Sexy::Image*, Sexy::SexyMatrix3 const&, float, float) */

void __thiscall
Sexy::Graphics::DrawImageMatrix
          (Graphics *this,Image *param_1,SexyMatrix3 *param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_18,0,0,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c));
  SetAsCurrentContext(this);
  plVar2 = *(long **)(this + 0x88);
  fVar4 = *(float *)(this + 0x10);
  fVar5 = *(float *)(this + 0x14);
  pcVar3 = *(code **)(*plVar2 + 0x90);
  uVar1 = GetImageColor(this);
  (*pcVar3)(param_3 + fVar4,param_4 + fVar5,plVar2,param_1,param_2,this + 0x28,uVar1,
            *(undefined4 *)(this + 0x78),aIStack_18,this[0x7f]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::DrawImageMatrix(Sexy::Image*, Sexy::SexyMatrix3 const&, Sexy::TRect<int> const&,
   float, float) */

void __thiscall
Sexy::Graphics::DrawImageMatrix
          (Graphics *this,Image *param_1,SexyMatrix3 *param_2,TRect *param_3,float param_4,
          float param_5)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  
  SetAsCurrentContext(this);
  fVar4 = *(float *)(this + 0x10);
  plVar2 = *(long **)(this + 0x88);
  fVar5 = *(float *)(this + 0x14);
  pcVar3 = *(code **)(*plVar2 + 0x90);
  uVar1 = GetImageColor(this);
  (*pcVar3)(param_4 + fVar4,param_5 + fVar5,plVar2,param_1,param_2,this + 0x28,uVar1,
            *(undefined4 *)(this + 0x78),param_3,this[0x7f]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageTransformHelper(Sexy::Image*, Sexy::Transform const&, Sexy::TRect<int>
   const&, float, float, bool) */

void __thiscall
Sexy::Graphics::DrawImageTransformHelper
          (Graphics *this,Image *param_1,Transform *param_2,TRect *param_3,float param_4,
          float param_5,bool param_6)

{
  SexyMatrix3 *pSVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2[0x25] != (Transform)0x0) || ((lVar2 = Get3D(this), lVar2 != 0 && (param_6)))) {
    pSVar1 = (SexyMatrix3 *)Transform::GetMatrix(param_2);
    DrawImageMatrix(this,param_1,pSVar1,param_3,param_4,param_5);
  }
  else {
    fVar6 = (float)*(int *)(param_3 + 8) * 0.5;
    fVar7 = (float)*(int *)(param_3 + 0xc) * 0.5;
    if (param_2[0x26] == (Transform)0x0) {
      if (param_2[0x27] == (Transform)0x0) {
        fVar6 = (*(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x30) + 0.5 + param_4) - fVar6;
        fVar7 = (*(float *)(param_2 + 0x2c) + *(float *)(param_2 + 0x34) + 0.5 + param_5) - fVar7;
        if (param_6) {
          DrawImageF(this,param_1,fVar6,fVar7,param_3);
        }
        else {
          DrawImage(this,param_1,(int)fVar6,(int)fVar7,param_3);
        }
      }
      else {
        if (*(float *)(param_2 + 0x38) == -1.0) {
          bVar3 = true;
          if (*(float *)(param_2 + 0x3c) == 1.0) {
            DrawImageMirror(this,param_1,
                            (int)((*(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x30) + 0.5 +
                                  param_4) - fVar6),
                            (int)((*(float *)(param_2 + 0x2c) + *(float *)(param_2 + 0x34) + 0.5 +
                                  param_5) - fVar7),param_3,true);
            goto LAB_05153d00;
          }
        }
        else {
          bVar3 = false;
        }
        fVar6 = fVar6 * *(float *)(param_2 + 0x38);
        fVar7 = *(float *)(param_2 + 0x3c) * fVar7;
        Insets::Insets(aIStack_18,(int)((param_4 + *(float *)(param_2 + 0x30)) - fVar6),
                       (int)((param_5 + *(float *)(param_2 + 0x34)) - fVar7),(int)(fVar6 + fVar6),
                       (int)(fVar7 + fVar7));
        DrawImageMirror(this,param_1,(TRect *)aIStack_18,param_3,bVar3);
      }
    }
    else {
      fVar6 = fVar6 - *(float *)(param_2 + 0x28);
      fVar7 = fVar7 - *(float *)(param_2 + 0x2c);
      fVar5 = (*(float *)(param_2 + 0x34) + 0.5 + param_5) - fVar7;
      fVar4 = (*(float *)(param_2 + 0x30) + 0.5 + param_4) - fVar6;
      if (param_6) {
        DrawImageRotatedF(this,param_1,fVar4,fVar5,(double)*(float *)(param_2 + 0x40),fVar6,fVar7,
                          param_3);
      }
      else {
        DrawImageRotated(this,param_1,(int)fVar4,(int)fVar5,(double)*(float *)(param_2 + 0x40),
                         (int)fVar6,(int)fVar7,param_3);
      }
    }
  }
LAB_05153d00:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageTransform(Sexy::Image*, Sexy::Transform const&, float, float) */

void __thiscall
Sexy::Graphics::DrawImageTransform
          (Graphics *this,Image *param_1,Transform *param_2,float param_3,float param_4)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_18,0,0,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c));
  DrawImageTransformHelper(this,param_1,param_2,(TRect *)aIStack_18,param_3,param_4,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawImageTransformF(Sexy::Image*, Sexy::Transform const&, float, float) */

void __thiscall
Sexy::Graphics::DrawImageTransformF
          (Graphics *this,Image *param_1,Transform *param_2,float param_3,float param_4)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_18,0,0,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c));
  DrawImageTransformHelper(this,param_1,param_2,(TRect *)aIStack_18,param_3,param_4,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::DrawImageTransform(Sexy::Image*, Sexy::Transform const&, Sexy::TRect<int> const&,
   float, float) */

void __thiscall
Sexy::Graphics::DrawImageTransform
          (Graphics *this,Image *param_1,Transform *param_2,TRect *param_3,float param_4,
          float param_5)

{
  DrawImageTransformHelper(this,param_1,param_2,param_3,param_4,param_5,false);
  return;
}


/* Sexy::Graphics::DrawImageTransformF(Sexy::Image*, Sexy::Transform const&, Sexy::TRect<int>
   const&, float, float) */

void __thiscall
Sexy::Graphics::DrawImageTransformF
          (Graphics *this,Image *param_1,Transform *param_2,TRect *param_3,float param_4,
          float param_5)

{
  DrawImageTransformHelper(this,param_1,param_2,param_3,param_4,param_5,true);
  return;
}


/* Sexy::Graphics::DrawImageMatrixOptimized(Sexy::Image*, Sexy::SexyMatrix3 const&, bool) */

void __thiscall
Sexy::Graphics::DrawImageMatrixOptimized
          (Graphics *this,Image *param_1,SexyMatrix3 *param_2,bool param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  SetAsCurrentContext(this);
  plVar3 = *(long **)(this + 0x88);
  uVar4 = *(undefined4 *)(this + 0x10);
  uVar5 = *(undefined4 *)(this + 0x14);
  pcVar2 = *(code **)(*plVar3 + 0xa0);
  uVar1 = GetImageColor(this);
  if (pcVar2 != RenderDevice::BltMatrixOptimized) {
    (*pcVar2)(uVar4,uVar5,plVar3,param_1,param_2,this + 0x28,uVar1,*(undefined4 *)(this + 0x78),
              this[0x7f],param_3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawTriangleTex(Sexy::Image*, Sexy::SexyVertex2D const&, Sexy::SexyVertex2D
   const&, Sexy::SexyVertex2D const&) */

void __thiscall
Sexy::Graphics::DrawTriangleTex
          (Graphics *this,Image *param_1,SexyVertex2D *param_2,SexyVertex2D *param_3,
          SexyVertex2D *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
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
  
  local_28 = *(undefined8 *)param_4;
  uStack_20 = *(undefined8 *)(param_4 + 8);
  local_48 = *(undefined8 *)param_3;
  uStack_40 = *(undefined8 *)(param_3 + 8);
  local_68 = *(undefined8 *)param_2;
  uStack_60 = *(undefined8 *)(param_2 + 8);
  local_58 = *(undefined8 *)(param_2 + 0x10);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  local_38 = *(undefined8 *)(param_3 + 0x10);
  uStack_30 = *(undefined8 *)(param_3 + 0x18);
  local_18 = *(undefined8 *)(param_4 + 0x10);
  uStack_10 = *(undefined8 *)(param_4 + 0x18);
  local_8 = ___stack_chk_guard;
  SetAsCurrentContext(this);
  plVar2 = *(long **)(this + 0x88);
  pcVar3 = *(code **)(*plVar2 + 0xa8);
  uVar1 = GetImageColor(this);
  (*pcVar3)(*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14),plVar2,param_1,&local_68,1,
            uVar1,*(undefined4 *)(this + 0x78),this[0x7f],this + 0x28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::DrawTrianglesTex(Sexy::Image*, Sexy::SexyVertex2D const (*) [3], int) */

void __thiscall
Sexy::Graphics::DrawTrianglesTex(Graphics *this,Image *param_1,SexyVertex2D *param_2,int param_3)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  
  SetAsCurrentContext(this);
  plVar2 = *(long **)(this + 0x88);
  pcVar3 = *(code **)(*plVar2 + 0xa8);
  uVar1 = GetImageColor(this);
  (*pcVar3)(*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14),plVar2,param_1,param_2,param_3
            ,uVar1,*(undefined4 *)(this + 0x78),this[0x7f],this + 0x28);
  return;
}


/* Sexy::Graphics::DrawTrianglesTexStrip(Sexy::Image*, Sexy::SexyVertex2D const*, int) */

void __thiscall
Sexy::Graphics::DrawTrianglesTexStrip
          (Graphics *this,Image *param_1,SexyVertex2D *param_2,int param_3)

{
  Color *pCVar1;
  
  pCVar1 = (Color *)GetImageColor(this);
  DrawTrianglesTexStrip
            (this,param_1,param_2,param_3,pCVar1,*(int *)(this + 0x78),*(float *)(this + 0x10),
             *(float *)(this + 0x14),(bool)this[0x7f]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::Graphics(Sexy::Image*) */

void __thiscall Sexy::Graphics::Graphics(Graphics *this,Image *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GraphicsState::GraphicsState((GraphicsState *)(this + 8));
  *(undefined ***)this = &PTR__Graphics_06a2e6e0;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)(this + 0x90),(rbtree_node *)0x0);
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)&local_18,(rbtree_node *)GraphicsState::msGraphicsStatePoolAllocator);
  std::list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>>::list
            ((list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>> *)
             (this + 0xb0),(PooledAllocator *)&local_18);
  *(undefined8 *)(this + 0x70) = 0;
  *(Image **)(this + 8) = param_1;
  *(undefined4 *)(this + 0x78) = 0;
  this[0x7c] = (Graphics)0x0;
  this[0x7d] = (Graphics)0x0;
  this[0x7e] = (Graphics)0x1;
  this[0x7f] = (Graphics)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  *(undefined4 *)(this + 0x1c) = 0x3f800000;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  if (param_1 != (Image *)0x0) {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
    iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 8));
    Insets::Insets((Insets *)&local_18,0,0,iVar1,iVar2);
    *(undefined8 *)(this + 0x28) = local_18;
    *(undefined8 *)(this + 0x30) = uStack_10;
    InitRenderInfo(this,(Graphics *)0x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::~Graphics() */

void __thiscall Sexy::Graphics::~Graphics(Graphics *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR__Graphics_06a2e6e0;
  if (*(Graphics3D **)(this + 0x98) != (Graphics3D *)0x0) {
    Graphics3D::operator_delete(*(Graphics3D **)(this + 0x98),&PTR__Graphics_06a2e6e0);
  }
  plVar1 = *(long **)(this + 0x88);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,this + 0x90);
  }
  std::list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>>::~list
            ((list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>> *)
             (this + 0xb0));
  GraphicsState::~GraphicsState((GraphicsState *)(this + 8));
  return;
}


/* Sexy::Graphics::~Graphics() */

void __thiscall Sexy::Graphics::~Graphics(Graphics *this)

{
  void *extraout_x1;
  
  ~Graphics(this);
  operator_delete(this,extraout_x1);
  return;
}


/* Sexy::Graphics::PushColorMult() */

void __thiscall Sexy::Graphics::PushColorMult(Graphics *this)

{
  std::vector<Sexy::Color,std::allocator<Sexy::Color>>::push_back
            ((vector<Sexy::Color,std::allocator<Sexy::Color>> *)(this + 0x38),(Color *)(this + 0x50)
            );
  CalcFinalColor(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::Graphics(Sexy::Graphics const&) */

void __thiscall Sexy::Graphics::Graphics(Graphics *this,Graphics *param_1)

{
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GraphicsState::GraphicsState((GraphicsState *)(this + 8));
  *(undefined ***)this = &PTR__Graphics_06a2e6e0;
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)(this + 0x90),(rbtree_node *)0x0);
  eastl::
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(arStack_10,(rbtree_node *)GraphicsState::msGraphicsStatePoolAllocator);
  std::list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>>::list
            ((list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>> *)
             (this + 0xb0),(PooledAllocator *)arStack_10);
  GraphicsState::CopyStateFrom((GraphicsState *)(this + 8),(GraphicsState *)(param_1 + 8));
  InitRenderInfo(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::PopState() */

void __thiscall Sexy::Graphics::PopState(Graphics *this)

{
  list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>> *this_00;
  long lVar1;
  GraphicsState *pGVar2;
  
  this_00 = (list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>> *)
            (this + 0xb0);
  lVar1 = std::list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>>::
          size(this_00);
  if (lVar1 != 0) {
    pGVar2 = (GraphicsState *)
             std::list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>>
             ::back(this_00);
    GraphicsState::CopyStateFrom((GraphicsState *)(this + 8),pGVar2);
    std::list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>>::
    pop_back(this_00);
  }
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 0x88) + 0x48))(*(long **)(this + 0x88));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::PushState() */

void __thiscall Sexy::Graphics::PushState(Graphics *this)

{
  GraphicsState *this_00;
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
  
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_8 = ___stack_chk_guard;
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
  GraphicsState::GraphicsState((GraphicsState *)&local_88);
  std::list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>>::push_back
            ((list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>> *)
             (this + 0xb0),(GraphicsState *)&local_88);
  GraphicsState::~GraphicsState((GraphicsState *)&local_88);
  this_00 = (GraphicsState *)
            std::list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>>
            ::back((list<Sexy::GraphicsState,PooledAllocator<Sexy::GraphicsState,Sexy::SimpleMemPool>>
                    *)(this + 0xb0));
  GraphicsState::CopyStateFrom(this_00,(GraphicsState *)(this + 8));
  SetAsCurrentContext(this);
  (**(code **)(**(long **)(this + 0x88) + 0x40))(*(long **)(this + 0x88));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Graphics::DrawString(std::wstring const&, int, int) */

void __thiscall Sexy::Graphics::DrawString(Graphics *this,wstring *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x70);
  if (plVar2 != (long *)0x0) {
    uVar1 = GetFinalColor(this);
    (**(code **)(*plVar2 + 0x98))(plVar2,this,param_2,param_3,param_1,uVar1,this + 0x28);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::WriteString(std::wstring const&, int, int, int, int, bool, int, int, int) */

void __thiscall
Sexy::Graphics::WriteString
          (Graphics *this,wstring *param_1,int param_2,int param_3,int param_4,int param_5,
          bool param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  Color *this_00;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  wstring awStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_9 == -1) {
    this_00 = (Color *)GetFinalColor(this);
    param_9 = Color::ToInt(this_00);
  }
  if (param_6) {
    if (param_5 == 0) {
      iVar4 = WriteString(this,param_1,param_2,param_3,param_4,-1,false,param_7,param_8,param_9);
      param_2 = param_2 + (param_4 - iVar4) / 2;
    }
    else if (param_5 == 1) {
      iVar4 = WriteString(this,param_1,param_2,param_3,param_4,-1,false,param_7,param_8,param_9);
      param_2 = param_2 + (param_4 - iVar4);
    }
  }
  if (param_8 < 0) {
    iVar4 = FUN_054765d0(param_1);
  }
  else {
    iVar2 = FUN_054765d0(param_1);
    iVar4 = param_7 + param_8;
    if (iVar2 < param_7 + param_8) {
      iVar4 = iVar2;
    }
  }
  iVar2 = 0;
  FUN_05476574(awStack_20);
  if (param_7 < iVar4) {
LAB_0515518c:
    do {
      piVar5 = (int *)FUN_054765fc(param_1,(long)param_7);
      if ((*piVar5 == 0x5e) && (this[0x7e] != (Graphics)0x0)) {
        iVar3 = param_7 + 1;
        if ((iVar4 <= iVar3) || (piVar5 = (int *)FUN_054765fc(param_1,(long)iVar3), *piVar5 != 0x5e)
           ) {
          if (iVar4 + -7 <= param_7) break;
          piVar5 = (int *)FUN_054765fc(param_1,(long)iVar3);
          iVar3 = *piVar5;
          if (iVar3 == 0x6f) {
            lVar7 = FUN_054766ec(param_1);
            iVar3 = wcsncmp((wchar_t *)(lVar7 + ((long)param_7 + 1) * 4),L"oldclr",6);
            uVar9 = param_9;
            if (iVar3 != 0) {
              uVar9 = 0;
            }
            uVar13 = (ulong)uVar9;
          }
          else {
            iVar10 = (iVar3 - 0x30U) * 0x100000;
            if (9 < iVar3 - 0x30U) {
              if (iVar3 - 0x41U < 6) {
                iVar10 = (iVar3 + -0x37) * 0x100000;
              }
              else {
                iVar10 = 0;
                if (iVar3 - 0x61U < 6) {
                  iVar10 = (iVar3 + -0x57) * 0x100000;
                }
              }
            }
            piVar5 = (int *)FUN_054765fc(param_1,(long)(param_7 + 2));
            iVar3 = *piVar5;
            iVar8 = (iVar3 - 0x30U) * 0x10000;
            if (9 < iVar3 - 0x30U) {
              if (iVar3 - 0x41U < 6) {
                iVar8 = (iVar3 + -0x37) * 0x10000;
              }
              else {
                iVar8 = 0;
                if (iVar3 - 0x61U < 6) {
                  iVar8 = (iVar3 + -0x57) * 0x10000;
                }
              }
            }
            piVar5 = (int *)FUN_054765fc(param_1,(long)(param_7 + 3));
            iVar3 = *piVar5;
            iVar11 = (iVar3 - 0x30U) * 0x1000;
            if (9 < iVar3 - 0x30U) {
              if (iVar3 - 0x41U < 6) {
                iVar11 = (iVar3 + -0x37) * 0x1000;
              }
              else {
                iVar11 = 0;
                if (iVar3 - 0x61U < 6) {
                  iVar11 = (iVar3 + -0x57) * 0x1000;
                }
              }
            }
            piVar5 = (int *)FUN_054765fc(param_1,(long)(param_7 + 4));
            iVar3 = *piVar5;
            iVar12 = (iVar3 - 0x30U) * 0x100;
            if (9 < iVar3 - 0x30U) {
              if (iVar3 - 0x41U < 6) {
                iVar12 = (iVar3 + -0x37) * 0x100;
              }
              else {
                iVar12 = 0;
                if (iVar3 - 0x61U < 6) {
                  iVar12 = (iVar3 + -0x57) * 0x100;
                }
              }
            }
            piVar5 = (int *)FUN_054765fc(param_1,(long)(param_7 + 5));
            iVar1 = *piVar5;
            iVar3 = (iVar1 - 0x30U) * 0x10;
            if (9 < iVar1 - 0x30U) {
              if (iVar1 - 0x41U < 6) {
                iVar3 = (iVar1 + -0x37) * 0x10;
              }
              else {
                iVar3 = 0;
                if (iVar1 - 0x61U < 6) {
                  iVar3 = (iVar1 + -0x57) * 0x10;
                }
              }
            }
            iVar3 = iVar10 + iVar8 + iVar11 + iVar12 + iVar3;
            piVar5 = (int *)FUN_054765fc(param_1,(long)(param_7 + 6));
            iVar10 = *piVar5;
            uVar9 = iVar10 - 0x30;
            if (9 < uVar9) {
              if (5 < iVar10 - 0x41U) {
                iVar8 = iVar10 + -0x57;
                if (5 < iVar10 - 0x61U) {
                  iVar8 = 0;
                }
                uVar13 = (ulong)(uint)(iVar3 + iVar8);
                goto LAB_0515538c;
              }
              uVar9 = iVar10 - 0x37;
            }
            uVar13 = (ulong)(iVar3 + uVar9);
          }
LAB_0515538c:
          if (param_6) {
            DrawString(this,awStack_20,param_2 + iVar2,param_3);
            lVar7 = PVPManager::GetSkillDatas((PVPManager *)this);
            Insets::Insets(aIStack_18,(uint)(uVar13 >> 0x10) & 0xff,(uint)(uVar13 >> 8) & 0xff,
                           (uint)uVar13 & 0xff,*(int *)(lVar7 + 0xc));
            SetColor(this,(Color *)aIStack_18);
          }
          param_7 = param_7 + 8;
          plVar6 = (long *)Effect_Barrage::GetViceBarrage((Effect_Barrage *)this);
          iVar3 = (**(code **)(*plVar6 + 0x80))(plVar6,awStack_20);
          iVar2 = iVar2 + iVar3;
          FUN_054772c4(awStack_20,&DAT_056f11a8);
          if (iVar4 <= param_7) break;
          goto LAB_0515518c;
        }
        FUN_05477a88(awStack_20);
        param_7 = iVar3;
      }
      else {
        FUN_05477a88(awStack_20);
      }
      param_7 = param_7 + 1;
    } while (param_7 < iVar4);
  }
  if (param_6) {
    DrawString(this,awStack_20,param_2 + iVar2,param_3);
  }
  plVar6 = (long *)Effect_Barrage::GetViceBarrage((Effect_Barrage *)this);
  iVar4 = (**(code **)(*plVar6 + 0x80))(plVar6,awStack_20);
  FUN_05476c50(awStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 + iVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::WriteWordWrapped(Sexy::TRect<int> const&, std::wstring const&, int, int, int*,
   int, int*, int*, bool) */

void __thiscall
Sexy::Graphics::WriteWordWrapped
          (Graphics *this,TRect *param_1,wstring *param_2,int param_3,int param_4,int *param_5,
          int param_6,int *param_7,int *param_8,bool param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Insets *pIVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar9 = (Insets *)PVPManager::GetSkillDatas((PVPManager *)this);
  Insets::Insets(aIStack_18,pIVar9);
  uVar3 = Color::ToInt((Color *)aIStack_18);
  uVar2 = uVar3 & 0xffffff;
  if ((uVar3 & 0xff000000) != 0xff000000) {
    uVar2 = uVar3;
  }
  if (param_6 < 0) {
    param_6 = FUN_054765d0(param_2);
  }
  plVar10 = (long *)Effect_Barrage::GetViceBarrage((Effect_Barrage *)this);
  iVar4 = (**(code **)(*plVar10 + 0x50))();
  iVar5 = (**(code **)(*plVar10 + 0x58))(plVar10);
  iVar4 = iVar4 - iVar5;
  if (param_3 == -1) {
    param_3 = (**(code **)(*plVar10 + 0x78))(plVar10);
  }
  FUN_05476574();
  if (param_7 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *param_7;
  }
  iVar16 = 0;
  iVar14 = 0;
  iVar15 = 0;
  uVar11 = FUN_054765d0(param_2);
  iVar18 = iVar14;
  iVar8 = iVar15;
  iVar7 = -1;
  iVar19 = iVar5;
  iVar6 = 0;
LAB_05155758:
  iVar17 = iVar16;
  iVar1 = iVar19;
  if (uVar11 <= (ulong)(long)iVar16) {
LAB_0515587c:
    iVar5 = (int)uVar11;
    if (iVar8 < iVar5) {
LAB_05155ae0:
      iVar8 = FUN_051555dc(this,param_2,iVar19 + *(int *)param_1,iVar4 + *(int *)(param_1 + 4),
                           *(undefined4 *)(param_1 + 8),param_4,param_9,iVar8,iVar5 - iVar8,uVar2,
                           param_6);
      iVar5 = iVar15;
      if (-1 < iVar8) {
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if ((param_5 != (int *)0x0) && (*param_5 < iVar8)) {
          *param_5 = iVar8;
        }
        if (param_7 != (int *)0x0) {
          *param_7 = iVar8;
        }
        iVar4 = param_3 + iVar4;
      }
    }
    else {
LAB_05155890:
      iVar5 = iVar15;
      if ((iVar18 == 10) && (iVar4 = param_3 + iVar4, param_7 != (int *)0x0)) {
        *param_7 = 0;
      }
    }
    SetColor(this,(Color *)aIStack_18);
    if (param_5 != (int *)0x0) {
      *param_5 = iVar5;
    }
    if (param_8 != (int *)0x0) {
      *param_8 = iVar14;
    }
    iVar5 = (**(code **)(*plVar10 + 0x60))(plVar10);
    FUN_05476c50(auStack_20);
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail((iVar5 + iVar4) - param_3);
  }
  do {
    iVar19 = iVar1;
    piVar12 = (int *)FUN_054765fc(param_2);
    iVar18 = *piVar12;
    iVar16 = iVar17;
    if (iVar18 == 0x5e) {
      if (this[0x7e] != (Graphics)0x0) {
        iVar1 = iVar17 + 1;
        if (((ulong)(long)iVar1 < uVar11) &&
           (piVar12 = (int *)FUN_054765fc(param_2,(long)iVar1,iVar6), iVar16 = iVar1,
           *piVar12 != 0x5e)) {
          iVar16 = iVar17 + 8;
          goto LAB_05155758;
        }
      }
LAB_05155790:
      iVar6 = (**(code **)(*plVar10 + 0x90))(plVar10,iVar18);
      iVar5 = iVar5 + iVar6;
      iVar6 = *(int *)(param_1 + 8);
      iVar17 = iVar7;
      if (iVar5 <= iVar6) break;
      if (iVar7 != -1) goto LAB_051557c8;
      if (iVar16 <= iVar8) {
        iVar16 = iVar16 + 1;
      }
      iVar5 = FUN_051555dc(this,param_2,iVar19 + *(int *)param_1,iVar4 + *(int *)(param_1 + 4),iVar6
                           ,param_4,param_9,iVar8,iVar16 - iVar8,uVar2,param_6);
      if (iVar5 < 0) goto LAB_05155ac0;
      if ((param_5 != (int *)0x0) && (*param_5 < iVar5)) {
        *param_5 = iVar5;
      }
      iVar8 = iVar16;
      if (param_7 != (int *)0x0) {
        *param_7 = iVar5;
      }
    }
    else {
      if (iVar18 != 0x20) {
        if (iVar18 != 10) goto LAB_05155790;
        iVar5 = *(int *)(param_1 + 8) + 1;
        iVar16 = iVar17 + 1;
      }
      iVar7 = (**(code **)(*plVar10 + 0x90))(plVar10,iVar18);
      iVar5 = iVar5 + iVar7;
      iVar6 = *(int *)(param_1 + 8);
      if (iVar5 <= iVar6) break;
LAB_051557c8:
      iVar16 = iVar4 + *(int *)(param_1 + 4) + (int)*(float *)(this + 0x14);
      if ((*(int *)(this + 0x2c) <= iVar16) &&
         (iVar16 < *(int *)(this + 0x2c) + *(int *)(this + 0x34) + param_3)) {
        FUN_051555dc(this,param_2,iVar19 + *(int *)param_1,iVar4 + *(int *)(param_1 + 4),iVar6,
                     param_4,param_9,iVar8,iVar17 - iVar8,uVar2,param_6);
      }
      if (iVar5 + iVar19 < 0) {
LAB_05155ac0:
        iVar14 = iVar14 + 1;
        iVar5 = FUN_054765d0(param_2);
        if (iVar8 < iVar5) goto LAB_05155ae0;
        goto LAB_05155890;
      }
      iVar5 = iVar5 + iVar19;
      iVar8 = iVar17 + 1;
      if (iVar18 != 10) {
        uVar13 = FUN_054765d0(param_2);
        uVar11 = (long)iVar8;
        while (uVar11 < uVar13) {
          piVar12 = (int *)FUN_054765fc(param_2,uVar11);
          if (*piVar12 != 0x20) break;
          iVar8 = iVar8 + 1;
          uVar11 = uVar11 + 1;
        }
      }
    }
    iVar14 = iVar14 + 1;
    iVar19 = 0;
    iVar7 = -1;
    if (iVar15 < iVar5) {
      iVar15 = iVar5;
    }
    iVar5 = 0;
    iVar4 = iVar4 + param_3;
    uVar11 = FUN_054765d0(param_2);
    iVar6 = 0;
    iVar17 = iVar8;
    iVar1 = 0;
    if (uVar11 <= (ulong)(long)iVar8) goto LAB_0515587c;
  } while( true );
  iVar16 = iVar16 + 1;
  uVar11 = FUN_054765d0(param_2);
  iVar7 = iVar17;
  iVar6 = iVar18;
  goto LAB_05155758;
}


/* Sexy::Graphics::DrawStringColor(std::wstring const&, int, int, int) */

void __thiscall
Sexy::Graphics::DrawStringColor(Graphics *this,wstring *param_1,int param_2,int param_3,int param_4)

{
  WriteString(this,param_1,param_2,param_3,-1,-1,true,0,-1,param_4);
  return;
}


/* Sexy::Graphics::StringWidth(std::wstring const&) */

void Sexy::Graphics::StringWidth(wstring *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x70) + 0x80))(*(long **)(param_1 + 0x70));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::DrawStringWordWrapped(std::wstring const&, int, int, int, int, int, int*) */

void __thiscall
Sexy::Graphics::DrawStringWordWrapped
          (Graphics *this,wstring *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = (**(code **)(**(long **)(this + 0x70) + 0x50))(*(long **)(this + 0x70));
  iVar2 = (**(code **)(**(long **)(this + 0x70) + 0x58))(*(long **)(this + 0x70));
  Insets::Insets(aIStack_18,param_2,param_3 - (iVar1 - iVar2),param_4,0);
  WriteWordWrapped(this,(TRect *)aIStack_18,param_1,param_5,param_6,param_7,-1,(int *)0x0,(int *)0x0
                   ,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Graphics::GetWordWrappedHeight(int, std::wstring const&, int, int*, int*) */

void __thiscall
Sexy::Graphics::GetWordWrappedHeight
          (Graphics *this,int param_1,wstring *param_2,int param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  Insets aIStack_e0 [16];
  Graphics aGStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Graphics(aGStack_d0,(Image *)0x0);
  Effect_Barrage::SetViceBarrage((Effect_Barrage *)aGStack_d0,*(Effect_Barrage **)(this + 0x70));
  Insets::Insets(aIStack_e0,0,0,param_1,0);
  uVar1 = WriteWordWrapped(aGStack_d0,(TRect *)aIStack_e0,param_2,param_3,-1,param_4,-1,(int *)0x0,
                           param_5,true);
  ~Graphics(aGStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

