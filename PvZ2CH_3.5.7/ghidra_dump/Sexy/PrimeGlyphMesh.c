// Class: Sexy::PrimeGlyphMesh


/* Sexy::PrimeGlyphMesh::SetLineLayout(EA::Text::LineLayout*) */

void __thiscall Sexy::PrimeGlyphMesh::SetLineLayout(PrimeGlyphMesh *this,LineLayout *param_1)

{
  *(LineLayout **)(this + 0x18) = param_1;
  return;
}


/* Sexy::PrimeGlyphMesh::SetColorRGBA(unsigned int) */

void __thiscall Sexy::PrimeGlyphMesh::SetColorRGBA(PrimeGlyphMesh *this,uint param_1)

{
  *(uint *)(this + 0x20) = param_1;
  return;
}


/* Sexy::PrimeGlyphMesh::SetMVPMatrix(float, float, float, float) */

void __thiscall
Sexy::PrimeGlyphMesh::SetMVPMatrix
          (PrimeGlyphMesh *this,float param_1,float param_2,float param_3,float param_4)

{
  this[0xb8] = (PrimeGlyphMesh)0x1;
  this[0xb9] = (PrimeGlyphMesh)0x1;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  *(undefined4 *)(this + 0xa4) = 0;
  *(float *)(this + 0x78) = 2.0 / (param_2 - param_1);
  *(undefined4 *)(this + 0xac) = 0x3f800000;
  *(undefined4 *)(this + 0xa8) = 0xbf800000;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0x3f800000;
  *(float *)(this + 0x8c) = 2.0 / (param_3 - param_4);
  return;
}


/* Sexy::PrimeGlyphMesh::SetMVPMatrix(float*) */

void __thiscall Sexy::PrimeGlyphMesh::SetMVPMatrix(PrimeGlyphMesh *this,float *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x80) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(this + 0x90) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xa0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(this + 0xb0) = uVar1;
  this[0xb8] = (PrimeGlyphMesh)0x1;
  this[0xb9] = (PrimeGlyphMesh)0x1;
  return;
}


/* Sexy::PrimeGlyphMesh::SetPostScale(float, float, float, float, float, float) */

void __thiscall
Sexy::PrimeGlyphMesh::SetPostScale
          (PrimeGlyphMesh *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  this[0xba] = (PrimeGlyphMesh)0x1;
  *(float *)(this + 0xc4) = param_1;
  *(float *)(this + 200) = param_2;
  *(float *)(this + 0xbc) = param_3;
  *(float *)(this + 0xc0) = param_4;
  *(float *)(this + 0xcc) = param_5;
  *(float *)(this + 0xd0) = param_6;
  return;
}


/* Sexy::PrimeGlyphMesh::SetTextStyleColorEnabled(bool) */

void __thiscall Sexy::PrimeGlyphMesh::SetTextStyleColorEnabled(PrimeGlyphMesh *this,bool param_1)

{
  this[0x24] = (PrimeGlyphMesh)param_1;
  return;
}


/* Sexy::PrimeGlyphMesh::SetColor(unsigned int) */

void __thiscall Sexy::PrimeGlyphMesh::SetColor(PrimeGlyphMesh *this,uint param_1)

{
  *(uint *)(this + 0x20) = param_1 >> 0x10 & 0xff | (param_1 & 0xff) << 0x10 | param_1 & 0xff00ff00;
  return;
}


/* Sexy::PrimeGlyphMesh::SetClippingEnabled(bool) */

void __thiscall Sexy::PrimeGlyphMesh::SetClippingEnabled(PrimeGlyphMesh *this,bool param_1)

{
  this[0x25] = (PrimeGlyphMesh)param_1;
  return;
}


/* Sexy::PrimeGlyphMesh::IsClippingEnabled() const */

PrimeGlyphMesh __thiscall Sexy::PrimeGlyphMesh::IsClippingEnabled(PrimeGlyphMesh *this)

{
  return this[0x25];
}


/* Sexy::PrimeGlyphMesh::SetClippingRect(float, float, float, float) */

void __thiscall
Sexy::PrimeGlyphMesh::SetClippingRect
          (PrimeGlyphMesh *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x28) = param_1;
  *(float *)(this + 0x2c) = param_2;
  *(float *)(this + 0x30) = param_3;
  *(float *)(this + 0x34) = param_4;
  return;
}


/* Sexy::PrimeGlyphMesh::BuildEnd() */

void __thiscall Sexy::PrimeGlyphMesh::BuildEnd(PrimeGlyphMesh *this)

{
  char cVar1;
  int iVar2;
  TextureInfo *pTVar3;
  undefined8 uVar4;
  GlyphCache *this_00;
  long *plVar5;
  int iVar6;
  code *pcVar7;
  
  iVar6 = 0;
  iVar2 = (**(code **)(**(long **)(this + 8) + 0x88))(*(long **)(this + 8));
  if (iVar2 != 0) {
    do {
      this_00 = *(GlyphCache **)(this + 8);
      pcVar7 = *(code **)(*(long *)this_00 + 0xb8);
      pTVar3 = (TextureInfo *)(**(code **)(*(long *)this_00 + 0x80))(this_00,iVar6);
      if (pcVar7 == EA::Text::GlyphCache::IsUpdating) {
        cVar1 = EA::Text::GlyphCache::IsUpdating(this_00,pTVar3);
      }
      else {
        cVar1 = (*pcVar7)(this_00,pTVar3);
      }
      if (cVar1 != '\0') {
        plVar5 = *(long **)(this + 8);
        pcVar7 = *(code **)(*plVar5 + 0xc0);
        uVar4 = (**(code **)(*plVar5 + 0x80))(plVar5,iVar6);
        (*pcVar7)(plVar5,uVar4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar2);
  }
  return;
}


/* Sexy::PrimeGlyphMesh::CalculateScaleTransform(float, float) */

SexyMatrix3 * Sexy::PrimeGlyphMesh::CalculateScaleTransform(float param_1,float param_2)

{
  long in_x0;
  SexyMatrix3 *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  SexyMatrix3::LoadIdentity(in_x8);
  fVar6 = *(float *)(in_x0 + 0xc4);
  fVar5 = *(float *)(in_x0 + 200);
  fVar2 = *(float *)(in_x0 + 0xc0);
  fVar1 = *(float *)(in_x0 + 0xbc);
  fVar3 = *(float *)(in_x0 + 0xd0);
  fVar4 = *(float *)(in_x0 + 0xcc);
  *(float *)in_x8 = fVar6;
  *(float *)(in_x8 + 0x10) = fVar5;
  *(float *)(in_x8 + 8) = (param_1 + fVar1) * (1.0 - fVar6) - (fVar6 + -1.0) * fVar4 * 0.5;
  *(float *)(in_x8 + 0x14) = (param_2 + fVar2) * (1.0 - fVar5) - (fVar5 + -1.0) * fVar3 * 0.5;
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeGlyphMesh::Draw_CharacterTriangles(Sexy::Graphics*, Sexy::Image*, Sexy::SexyVertex2D
   (*) [3], int) */

void __thiscall
Sexy::PrimeGlyphMesh::Draw_CharacterTriangles
          (PrimeGlyphMesh *this,Graphics *param_1,Image *param_2,SexyVertex2D *param_3,int param_4)

{
  SexyVertex2D *pSVar1;
  bool bVar2;
  SexyVertex2D *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  Color aCStack_40 [16];
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x20) != 0) || (this[0x24] != (PrimeGlyphMesh)0x0)) {
    auVar13 = Graphics::Get3D(param_1);
    Color::FromInt((Color *)(ulong)*(uint *)(this + 0x20),auVar13._8_8_);
    if ((this[0xb9] != (PrimeGlyphMesh)0x0) && (this[0xb8] != (PrimeGlyphMesh)0x0)) {
      if (0 < param_4) {
        fVar12 = *(float *)(this + 0x78);
        fVar11 = *(float *)(this + 0x7c);
        fVar10 = *(float *)(this + 0x80);
        fVar9 = *(float *)(this + 0x84);
        fVar8 = *(float *)(this + 0x88);
        fVar7 = *(float *)(this + 0x8c);
        pSVar3 = param_3;
        do {
          pSVar1 = pSVar3 + 0x60;
          fVar6 = *(float *)pSVar3;
          fVar5 = *(float *)(pSVar3 + 0x20);
          fVar4 = *(float *)(pSVar3 + 0x40);
          *(float *)pSVar3 = *(float *)(pSVar3 + 4) * fVar11 + fVar12 * fVar6 + fVar10;
          *(float *)(pSVar3 + 4) = *(float *)(pSVar3 + 4) * fVar8 + fVar9 * fVar6 + fVar7;
          *(float *)(pSVar3 + 0x20) = *(float *)(pSVar3 + 0x24) * fVar11 + fVar12 * fVar5 + fVar10;
          *(float *)(pSVar3 + 0x24) = *(float *)(pSVar3 + 0x24) * fVar8 + fVar9 * fVar5 + fVar7;
          *(float *)(pSVar3 + 0x40) = *(float *)(pSVar3 + 0x44) * fVar11 + fVar12 * fVar4 + fVar10;
          *(float *)(pSVar3 + 0x44) = *(float *)(pSVar3 + 0x44) * fVar8 + fVar9 * fVar4 + fVar7;
          pSVar3 = pSVar1;
        } while (pSVar1 != param_3 + ((ulong)(param_4 - 1) + 1) * 0x60);
      }
      this[0xb8] = (PrimeGlyphMesh)0x0;
    }
    Graphics::SetColor(param_1,aCStack_40);
    bVar2 = (bool)Graphics::GetColorizeImages(param_1);
    Graphics::SetColorizeImages(param_1,true);
    if (this[0xba] == (PrimeGlyphMesh)0x0) {
      Graphics::DrawTrianglesTex(param_1,param_2,param_3,param_4);
    }
    else {
      CalculateScaleTransform(*(float *)(param_1 + 0x10),*(float *)(param_1 + 0x14));
      Graphics3D::PushTransform(auVar13._0_8_,aSStack_30,true);
      Graphics::DrawTrianglesTex
                (param_1,param_2,param_3,param_4,aCStack_40,0,*(float *)(param_1 + 0x10),
                 *(float *)(param_1 + 0x14),(bool)param_1[0x7f],(TRect *)(param_1 + 0x28));
      Graphics3D::PopTransform(auVar13._0_8_);
    }
    Graphics::SetColorizeImages(param_1,bVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PrimeGlyphMesh::Draw_Characters(Sexy::Graphics*, int, bool) */

void __thiscall
Sexy::PrimeGlyphMesh::Draw_Characters
          (PrimeGlyphMesh *this,Graphics *param_1,int param_2,bool param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x50);
  puVar2 = (undefined8 *)FUN_053386cc(uVar5,(long)param_2);
  iVar1 = *(int *)(puVar2 + 1);
  if (param_3) {
    iVar4 = *(int *)(this + 0x4c) - iVar1;
  }
  else {
    lVar3 = FUN_053386cc(uVar5,(long)(param_2 + 1));
    iVar4 = *(int *)(lVar3 + 8) - iVar1;
  }
  Draw_CharacterTriangles
            (this,param_1,(Image *)*puVar2,
             (SexyVertex2D *)(*(long *)(this + 0x38) + (long)iVar1 * 0x60),iVar4);
  return;
}


/* Sexy::PrimeGlyphMesh::Draw(Sexy::Graphics*, unsigned int, unsigned int) */

void Sexy::PrimeGlyphMesh::Draw(Graphics *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = FUN_053386c0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),param_3);
  if (uVar1 == 0) {
    return;
  }
  nop();
  uVar2 = 0;
  uVar3 = 0;
  do {
    Draw_Characters((PrimeGlyphMesh *)param_1,(Graphics *)(ulong)param_2,uVar3,uVar1 - 1 == uVar2);
    uVar2 = (ulong)(uVar3 + 1);
    uVar3 = uVar3 + 1;
  } while (uVar2 < uVar1);
  nop();
  return;
}


/* Sexy::PrimeGlyphMesh::ClearSexyVerts() */

void __thiscall Sexy::PrimeGlyphMesh::ClearSexyVerts(PrimeGlyphMesh *this)

{
  if (*(ColourFit **)(this + 0x38) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
  }
  if (*(ColourFit **)(this + 0x40) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x40));
    *(undefined8 *)(this + 0x40) = 0;
  }
  this[0xb8] = (PrimeGlyphMesh)0x1;
  return;
}


/* Sexy::PrimeGlyphMesh::AllocateSexyVerts(int) */

void __thiscall Sexy::PrimeGlyphMesh::AllocateSexyVerts(PrimeGlyphMesh *this,int param_1)

{
  SexyVertex2D *pSVar1;
  ulong uVar2;
  SexyVertex2D *pSVar3;
  ulong uVar4;
  SexyVertex2D *this_00;
  SexyVertex2D *pSVar5;
  long lVar6;
  
  ClearSexyVerts(this);
  uVar4 = (ulong)(param_1 << 1);
  uVar2 = 0xffffffffffffffff;
  if (uVar4 < 0x154000000000001) {
    uVar2 = uVar4 * 0x60;
  }
  pSVar3 = operator_new__(uVar2);
  lVar6 = uVar4 - 1;
  pSVar5 = pSVar3;
  if (uVar4 != 0) {
    do {
      this_00 = pSVar5;
      do {
        pSVar1 = this_00 + 0x20;
        SexyVertex2D::SexyVertex2D(this_00);
        this_00 = pSVar1;
      } while (pSVar5 + 0x60 != pSVar1);
      lVar6 = lVar6 + -1;
      pSVar5 = pSVar5 + 0x60;
    } while (lVar6 != -1);
  }
  *(int *)(this + 0x48) = param_1 << 1;
  *(SexyVertex2D **)(this + 0x38) = pSVar3;
  return;
}


/* Sexy::PrimeGlyphMesh::Reserve(unsigned int) */

undefined8 __thiscall Sexy::PrimeGlyphMesh::Reserve(PrimeGlyphMesh *this,uint param_1)

{
  AllocateSexyVerts(this,param_1);
  return 1;
}


/* Sexy::PrimeGlyphMesh::BuildBegin(unsigned int) */

undefined8 __thiscall Sexy::PrimeGlyphMesh::BuildBegin(PrimeGlyphMesh *this,uint param_1)

{
  long lVar1;
  
  FUN_05338718(*(undefined8 *)(this + 0x50),this + 0x58);
  ClearSexyVerts(this);
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 != 0) {
    if (param_1 == 0xffffffff) {
      param_1 = FUN_053386a4(*(undefined8 *)(lVar1 + 0xa8),*(undefined8 *)(lVar1 + 0xb0));
    }
    Reserve(this,param_1);
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeGlyphMesh::Init(EA::Allocator::ICoreAllocator*, EA::Text::GlyphCache*) */

void __thiscall
Sexy::PrimeGlyphMesh::Init(PrimeGlyphMesh *this,ICoreAllocator *param_1,GlyphCache *param_2)

{
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_18 [16];
  long local_8;
  
  *(GlyphCache **)(this + 8) = param_2;
  local_8 = ___stack_chk_guard;
  *(ICoreAllocator **)this = param_1;
  EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText::PrimeGlyphMesh::mTextures",param_1);
  eastl::
  VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::set_allocator((VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                   *)(this + 0x50),(CoreAllocatorAdapter *)aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeGlyphMesh::Draw_DebugCharacterRects(Sexy::Graphics*, Sexy::SexyVertex2D (*) [3], int)
    */

void __thiscall
Sexy::PrimeGlyphMesh::Draw_DebugCharacterRects
          (PrimeGlyphMesh *this,Graphics *param_1,SexyVertex2D *param_2,int param_3)

{
  SexyVertex2D *pSVar1;
  SexyVertex2D *pSVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < param_3 / 2) {
    pSVar2 = param_2;
    do {
      pSVar1 = pSVar2 + 0xc0;
      Insets::Insets((Insets *)&local_18);
      local_18 = (int)*(float *)pSVar2;
      local_14 = (int)*(float *)(pSVar2 + 4);
      local_10 = (int)(*(float *)(pSVar2 + 0x40) - (float)local_18);
      local_c = (int)(*(float *)(pSVar2 + 0x24) - (float)local_14);
      Graphics::DrawRect(param_1,local_18,local_14,local_10,local_c);
      pSVar2 = pSVar1;
    } while (pSVar1 != param_2 + ((ulong)(param_3 / 2 - 1) + 1) * 0xc0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PrimeGlyphMesh::PrimeGlyphMesh() */

void __thiscall Sexy::PrimeGlyphMesh::PrimeGlyphMesh(PrimeGlyphMesh *this)

{
  *(undefined4 *)(this + 0x20) = 0xff000000;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x24] = (PrimeGlyphMesh)0x0;
  this[0x25] = (PrimeGlyphMesh)0x0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x28) = 0xc7c35000;
  *(undefined4 *)(this + 0x2c) = 0xc7c35000;
  *(undefined4 *)(this + 0x30) = 0x47c35000;
  *(undefined4 *)(this + 0x34) = 0x47c35000;
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::vector((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0x50));
  this[0xb9] = (PrimeGlyphMesh)0x0;
  this[0xb8] = (PrimeGlyphMesh)0x1;
  this[0xba] = (PrimeGlyphMesh)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeGlyphMesh::BuildPart(float, unsigned int, unsigned int) */

void __thiscall
Sexy::PrimeGlyphMesh::BuildPart(PrimeGlyphMesh *this,float param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  undefined2 *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 *local_38;
  long local_30;
  uint local_28;
  undefined1 local_24;
  long local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  uVar8 = (ulong)param_3;
  uVar15 = (ulong)param_2;
  lVar16 = *(long *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  if (lVar16 == 0) {
    uVar13 = 0;
    uVar4 = 0;
    goto LAB_05339534;
  }
  if (param_3 == 0xffffffff) {
    uVar8 = FUN_053386a4(*(undefined8 *)(lVar16 + 0xa8),*(undefined8 *)(lVar16 + 0xb0));
    uVar8 = uVar8 & 0xffffffff;
  }
  if (param_2 < (uint)uVar8) {
    lVar6 = FUN_053386b8(*(undefined8 *)(lVar16 + 0xa8));
    puVar12 = (undefined8 *)(lVar6 + uVar15 * 0x28);
    puVar1 = (undefined8 *)(lVar6 + uVar8 * 0x28);
    lVar16 = FUN_053386bc(*(undefined8 *)(lVar16 + 0x58));
    puVar17 = (undefined2 *)(lVar16 + uVar15 * 2);
    uVar7 = (**(code **)(**(long **)(this + 8) + 0x80))(*(long **)(this + 8),0);
    *(undefined8 *)(this + 0x10) = uVar7;
    if (puVar12 == puVar1) goto LAB_0533952c;
    iVar14 = 0;
    uVar13 = 0;
    local_60 = 0.0;
    local_68 = 1.0;
    local_64 = 1.0;
    local_5c = 0.0;
    do {
      uVar2 = *puVar17;
      plVar11 = (long *)*puVar12;
      fVar25 = (float)(int)*(float *)((long)puVar12 + 0x14);
      fVar24 = (float)(int)*(float *)((long)puVar12 + 0x1c);
      fVar22 = (float)(int)*(float *)(puVar12 + 3);
      fVar26 = (float)(int)*(float *)(puVar12 + 4);
      if (param_1 < 0.0) {
        fVar22 = (float)(int)*(float *)(puVar12 + 4);
        fVar26 = (float)(int)*(float *)(puVar12 + 3);
      }
      if ((fVar22 < fVar26) && (fVar25 < fVar24)) {
        if (this[0x25] != (PrimeGlyphMesh)0x0) {
          fVar18 = *(float *)(this + 0x28);
          if ((((fVar24 < fVar18) || (fVar19 = *(float *)(this + 0x30), fVar19 < fVar25)) ||
              (fVar20 = *(float *)(this + 0x2c), fVar26 < fVar20)) ||
             (fVar21 = *(float *)(this + 0x34), fVar21 < fVar22)) goto LAB_053398b8;
          if (fVar18 < fVar25) {
            local_5c = 0.0;
          }
          else {
            local_5c = (fVar18 - fVar25) / (fVar24 - fVar25);
            fVar25 = fVar18;
          }
          if (fVar24 < fVar19) {
            local_64 = 1.0;
          }
          else {
            local_64 = (fVar19 - fVar25) / (fVar24 - fVar25);
            fVar24 = fVar19;
          }
          if (fVar20 < fVar22) {
            local_60 = 0.0;
          }
          else {
            local_60 = (fVar20 - fVar22) / (fVar26 - fVar22);
            fVar22 = fVar20;
          }
          if (fVar26 < fVar21) {
            local_68 = 1.0;
          }
          else {
            local_68 = (fVar21 - fVar22) / (fVar26 - fVar22);
            fVar26 = fVar21;
          }
        }
        cVar5 = (**(code **)(**(long **)(this + 8) + 0x38))
                          (*(long **)(this + 8),plVar11,uVar2,&local_20);
        if (cVar5 == '\0') {
          cVar5 = (**(code **)(*plVar11 + 0xb0))(0,0,plVar11,&local_38,uVar2);
          if (cVar5 == '\0') {
            fwrite("[WARNING] PrimeGlyphMesh_General::BuildPart - Apparently this glyph cannot be rendered."
                   ,1,0x57,(FILE *)getaddrinfo);
            uVar4 = 0;
            goto LAB_05339534;
          }
          cVar5 = (**(code **)(**(long **)(this + 8) + 0x60))
                            (*(long **)(this + 8),plVar11,uVar2,*(undefined8 *)(local_38 + 8),
                             *local_38,local_38[1],local_38[0xb],local_38[10],&local_20);
          (**(code **)(*plVar11 + 0xb8))(plVar11,local_38);
          if (cVar5 == '\0') {
            fwrite("[WARNING] PrimeGlyphMesh_General::BuildPart - There is no place to put this glyph into the glyph cache.  You should clear the cache before building the parts."
                   ,1,0x9e,(FILE *)getaddrinfo);
            uVar4 = 0;
            goto LAB_05339534;
          }
        }
        fVar19 = local_18;
        fVar21 = local_14;
        fVar20 = local_c;
        fVar18 = local_10;
        if (this[0x25] != (PrimeGlyphMesh)0x0) {
          fVar18 = local_18 + local_64 * (local_10 - local_18);
          fVar20 = local_14 + local_68 * (local_c - local_14);
          fVar19 = local_18 + local_5c * (local_10 - local_18);
          fVar21 = local_14 + local_60 * (local_c - local_14);
        }
        fVar23 = fVar21;
        if (param_1 < 0.0) {
          fVar23 = fVar20;
          fVar20 = fVar21;
        }
        uVar7 = *(undefined8 *)(this + 0x50);
        lVar16 = FUN_053386c0(uVar7,*(undefined8 *)(this + 0x58));
        lVar6 = *(long *)(local_20 + 0x68);
        if (lVar16 == 0) {
          local_30 = *(long *)(lVar6 + 8);
          local_28 = 0;
          iVar14 = *(int *)(this + 0x20);
          local_24 = 1;
          eastl::
          vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          ::push_back((vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                       *)(this + 0x50),(TextureUsageInfo *)&local_30);
          if (this[0x24] != (PrimeGlyphMesh)0x0) goto LAB_053399b8;
LAB_053397ec:
          iVar3 = iVar14;
          if (*(int *)(this + 0x20) == iVar14) {
LAB_053399e8:
            iVar3 = iVar14;
            if (this[0x24] == (PrimeGlyphMesh)0x0) {
              iVar3 = 0;
            }
          }
        }
        else {
          plVar11 = (long *)FUN_053386cc(uVar7,lVar16 + -1);
          lVar16 = *(long *)(lVar6 + 8);
          if (*plVar11 != lVar16) {
            iVar14 = *(int *)(this + 0x20);
            local_24 = 1;
            local_30 = lVar16;
            local_28 = uVar13;
            eastl::
            vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            ::push_back((vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)(this + 0x50),(TextureUsageInfo *)&local_30);
          }
          if (this[0x24] == (PrimeGlyphMesh)0x0) goto LAB_053397ec;
LAB_053399b8:
          uVar7 = EA::Text::LineLayout::GetCharIndexFromGlyphIndex
                            (*(LineLayout **)(this + 0x18),uVar15);
          plVar11 = (long *)FUN_053386d4(*(undefined8 *)(*(long *)(this + 0x18) + 0x30),uVar7);
          iVar14 = *(int *)(*plVar11 + 0x268);
          iVar3 = iVar14;
          if (*(int *)(this + 0x20) == iVar14) goto LAB_053399e8;
        }
        uVar8 = (ulong)uVar13;
        lVar10 = *(long *)(this + 0x38);
        fVar19 = fVar19 + _FUN_05339a84;
        lVar16 = lVar10 + uVar8 * 0x60;
        fVar23 = fVar23 + _FUN_05339a84;
        fVar18 = fVar18 + _FUN_05339a84;
        lVar9 = (ulong)(uVar13 + 1) * 0x60;
        fVar20 = fVar20 - _FUN_05339a84;
        uVar13 = uVar13 + 2;
        *(float *)(lVar10 + uVar8 * 0x60) = fVar25;
        lVar6 = lVar10 + lVar9;
        *(int *)(lVar16 + 0x10) = iVar3;
        *(int *)(lVar16 + 0x30) = iVar3;
        *(int *)(lVar16 + 0x50) = iVar3;
        *(float *)(lVar16 + 4) = fVar22;
        *(float *)(lVar16 + 0x18) = fVar19;
        *(float *)(lVar16 + 0x1c) = fVar23;
        *(float *)(lVar16 + 0x20) = fVar25;
        *(float *)(lVar16 + 0x24) = fVar26;
        *(float *)(lVar16 + 0x38) = fVar19;
        *(float *)(lVar16 + 0x3c) = fVar20;
        *(float *)(lVar16 + 0x40) = fVar24;
        *(float *)(lVar16 + 0x44) = fVar22;
        *(float *)(lVar16 + 0x58) = fVar18;
        *(float *)(lVar16 + 0x5c) = fVar23;
        *(float *)(lVar10 + lVar9) = fVar25;
        *(int *)(lVar6 + 0x10) = iVar3;
        *(int *)(lVar6 + 0x30) = iVar3;
        *(int *)(lVar6 + 0x50) = iVar3;
        *(float *)(lVar6 + 4) = fVar26;
        *(float *)(lVar6 + 0x18) = fVar19;
        *(float *)(lVar6 + 0x1c) = fVar20;
        *(float *)(lVar6 + 0x20) = fVar24;
        *(float *)(lVar6 + 0x24) = fVar26;
        *(float *)(lVar6 + 0x38) = fVar18;
        *(float *)(lVar6 + 0x3c) = fVar20;
        *(float *)(lVar6 + 0x40) = fVar24;
        *(float *)(lVar6 + 0x44) = fVar22;
        *(float *)(lVar6 + 0x58) = fVar18;
        *(float *)(lVar6 + 0x5c) = fVar23;
      }
LAB_053398b8:
      puVar12 = puVar12 + 5;
      puVar17 = puVar17 + 1;
      uVar15 = (ulong)((int)uVar15 + 1);
    } while (puVar1 != puVar12);
  }
  else {
LAB_0533952c:
    uVar13 = 0;
  }
  uVar4 = 1;
LAB_05339534:
  *(uint *)(this + 0x4c) = uVar13;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* Sexy::PrimeGlyphMesh::Build(float) */

void __thiscall Sexy::PrimeGlyphMesh::Build(PrimeGlyphMesh *this,float param_1)

{
  BuildBegin(this,0xffffffff);
  BuildPart(this,param_1,0,0xffffffff);
  BuildEnd(this);
  return;
}


/* Sexy::PrimeGlyphMesh::Shutdown() */

undefined8 __thiscall Sexy::PrimeGlyphMesh::Shutdown(PrimeGlyphMesh *this)

{
  eastl::
  vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::set_capacity((vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                  *)(this + 0x50),0);
  ClearSexyVerts(this);
  return 1;
}


/* Sexy::PrimeGlyphMesh::~PrimeGlyphMesh() */

void __thiscall Sexy::PrimeGlyphMesh::~PrimeGlyphMesh(PrimeGlyphMesh *this)

{
  Shutdown(this);
  eastl::
  vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::~vector((vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 0x50));
  return;
}

