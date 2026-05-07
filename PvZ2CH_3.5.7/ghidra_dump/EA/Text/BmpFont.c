// Class: EA::Text::BmpFont


/* EA::Text::BmpFont::GetSize() const */

undefined4 __thiscall EA::Text::BmpFont::GetSize(BmpFont *this)

{
  return *(undefined4 *)(this + 0x74);
}


/* EA::Text::BmpFont::GetGlyphCache() const */

undefined8 __thiscall EA::Text::BmpFont::GetGlyphCache(BmpFont *this)

{
  return *(undefined8 *)(this + 0x228);
}


/* EA::Text::BmpFont::SetGlyphCache(EA::Text::GlyphCache*) */

void __thiscall EA::Text::BmpFont::SetGlyphCache(BmpFont *this,GlyphCache *param_1)

{
  *(GlyphCache **)(this + 0x228) = param_1;
  return;
}


/* EA::Text::BmpFont::GetFontDescription(EA::Text::FontDescription&) */

bool __thiscall EA::Text::BmpFont::GetFontDescription(BmpFont *this,FontDescription *param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(this + 0x34);
  if (sVar1 != 0) {
    memcpy(param_1,this + 0x34,0x74);
  }
  return sVar1 != 0;
}


/* EA::Text::BmpFont::GetFontMetrics(EA::Text::FontMetrics&) */

bool __thiscall EA::Text::BmpFont::GetFontMetrics(BmpFont *this,FontMetrics *param_1)

{
  undefined8 uVar1;
  short sVar2;
  
  sVar2 = *(short *)(this + 0x34);
  if (sVar2 != 0) {
    uVar1 = *(undefined8 *)(this + 0xb0);
    *(undefined8 *)param_1 = *(undefined8 *)(this + 0xa8);
    *(undefined8 *)(param_1 + 8) = uVar1;
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
  return sVar2 != 0;
}


/* EA::Text::BmpFont::SetOption(int, int) */

void __thiscall EA::Text::BmpFont::SetOption(BmpFont *this,int param_1,int param_2)

{
  if (param_1 != 6) {
    if (param_1 == 7) {
      this[0x231] = (BmpFont)(param_2 != 0);
    }
    return;
  }
  this[0x230] = (BmpFont)(param_2 != 0);
  return;
}


/* EA::Text::BmpFont::GetTextureCount() const */

void __thiscall EA::Text::BmpFont::GetTextureCount(BmpFont *this)

{
  FUN_0540ecf4(*(undefined8 *)(this + 0x1a0),*(undefined8 *)(this + 0x1a8));
  return;
}


/* EA::Text::BmpFont::GetBmpTextureInfo(unsigned int) */

undefined8 __thiscall EA::Text::BmpFont::GetBmpTextureInfo(BmpFont *this,uint param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x1a0);
  uVar1 = FUN_0540ecf4(uVar3,*(undefined8 *)(this + 0x1a8));
  if (param_1 < uVar1) {
    puVar2 = (undefined8 *)FUN_0540ecd0(uVar3,param_1);
    return *puVar2;
  }
  return 0;
}


/* EA::Text::BmpFont::GetBitmapFormat() const */

undefined4 __thiscall EA::Text::BmpFont::GetBitmapFormat(BmpFont *this)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x1a0);
  cVar1 = FUN_0540ed80(uVar3,*(undefined8 *)(this + 0x1a8));
  if (cVar1 != '\0') {
    return 0x20;
  }
  plVar2 = (long *)FUN_0540ed74(uVar3,0);
  return *(undefined4 *)(*plVar2 + 0x84);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::DoneGlyphBitmap(EA::Text::Font::GlyphBitmap const*) */

void EA::Text::BmpFont::DoneGlyphBitmap(GlyphBitmap *param_1)

{
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(param_1 + 0x238));
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::SetBmpTexture(unsigned int, unsigned long, unsigned int) */

void __thiscall
EA::Text::BmpFont::SetBmpTexture(BmpFont *this,uint param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x238));
  plVar1 = (long *)FUN_0540ecd0(*(undefined8 *)(this + 0x1a0),param_1);
  lVar2 = *plVar1;
  plVar1 = *(long **)(this + 0x228);
  *(ulong *)(lVar2 + 0x68) = param_2;
  *(uint *)(lVar2 + 0x84) = param_3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1,lVar2,1,0);
  }
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::ReadBmpTexture(EA::IO::IStream*, unsigned int) */

void __thiscall EA::Text::BmpFont::ReadBmpTexture(BmpFont *this,IStream *param_1,uint param_2)

{
  BmpFont BVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x238));
  uVar7 = *(undefined8 *)(this + 0x1a0);
  uVar3 = FUN_0540ecf4(uVar7,*(undefined8 *)(this + 0x1a8));
  if (param_2 < uVar3) {
    bVar2 = true;
    plVar4 = (long *)FUN_0540ecd0(uVar7,(ulong)param_2);
    lVar6 = *plVar4;
    BVar1 = this[0x230];
    *(undefined8 *)(lVar6 + 0x68) = 0;
    *(undefined4 *)(lVar6 + 0x84) = 0x20;
    if ((BVar1 == (BmpFont)0x0) || (plVar4 = *(long **)(this + 0x228), plVar4 == (long *)0x0))
    goto LAB_0540f1a0;
    lVar5 = *plVar4;
    *(IStream **)(lVar6 + 0x38) = param_1;
    lVar5 = (**(code **)(lVar5 + 0x70))(plVar4,lVar6);
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(long *)(lVar6 + 0x68) = lVar5;
    if (lVar5 != 0) {
      lVar6 = (**(code **)(**(long **)(this + 0x228) + 0x90))(*(long **)(this + 0x228),lVar6,1,1);
      bVar2 = lVar6 != 0;
      goto LAB_0540f1a0;
    }
  }
  bVar2 = false;
LAB_0540f1a0:
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::RegisterGlyphMetrics() */

void __thiscall EA::Text::BmpFont::RegisterGlyphMetrics(BmpFont *this)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined2 *puVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  long local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x228) != 0) {
    FUN_0540f2c8((hashtable_iterator *)&local_20,*(undefined8 *)(this + 0x128));
    eastl::
    hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
    ::hashtable_iterator
              ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                *)local_40,(hashtable_iterator *)&local_20);
    FUN_0540f314((hashtable_iterator *)&local_20,*(undefined8 *)(this + 0x128),
                 *(undefined8 *)(this + 0x130));
    eastl::
    hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
    ::hashtable_iterator
              ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                *)local_30,(hashtable_iterator *)&local_20);
    while( true ) {
      uVar4 = local_40[0];
      cVar5 = FUN_0540ecc0(local_40[0],local_30[0]);
      if (cVar5 == '\0') break;
      puVar6 = (undefined2 *)FUN_0540eccc(uVar4);
      fVar10 = *(float *)(puVar6 + 2);
      fVar9 = *(float *)(puVar6 + 4);
      uVar1 = *(uint *)(puVar6 + 0xc);
      fVar8 = *(float *)(puVar6 + 6);
      uVar2 = puVar6[0xd];
      fVar11 = *(float *)(puVar6 + 8);
      uVar3 = *puVar6;
      plVar7 = (long *)FUN_0540ecd0(*(undefined8 *)(this + 0x1a0),(long)*(char *)(puVar6 + 0xc));
      local_20 = *plVar7;
      local_c = *(float *)(local_20 + 0x80);
      fVar8 = fVar8 + (float)(int)((long)((ulong)uVar1 << 0x2c) >> 0x34);
      fVar11 = (float)(int)((long)((ulong)uVar2 << 0x30) >> 0x34) - fVar11;
      local_18 = fVar8 * local_c;
      local_14 = fVar11 * local_c;
      local_10 = (fVar8 + fVar10) * local_c;
      local_c = (fVar11 + fVar9) * local_c;
      (**(code **)(**(long **)(this + 0x228) + 0x48))
                (*(long **)(this + 0x228),this,uVar3,(hashtable_iterator *)&local_20);
      eastl::
      hashtable_iterator<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,true,false>::
      operator++((hashtable_iterator<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,true,false>
                  *)local_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::GetGlyphMetrics(unsigned short, EA::Text::GlyphMetrics&) */

void __thiscall
EA::Text::BmpFont::GetGlyphMetrics(BmpFont *this,ushort param_1,GlyphMetrics *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  ushort local_32 [5];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_32[0] = param_1;
  FUN_0540f5a0((hashtable_iterator *)local_18,*(undefined8 *)(this + 0x128),
               *(undefined8 *)(this + 0x130),local_32);
  eastl::
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::hashtable_iterator
            ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
              *)local_28,(hashtable_iterator *)local_18);
  FUN_0540f314((hashtable_iterator *)local_18,*(undefined8 *)(this + 0x128),
               *(undefined8 *)(this + 0x130));
  cVar2 = FUN_0540ecc0(local_28[0],local_18[0]);
  if (cVar2 != '\0') {
    lVar3 = FUN_0540eccc(local_28[0]);
    uVar1 = *(undefined8 *)(lVar3 + 0xc);
    *(undefined8 *)param_2 = *(undefined8 *)(lVar3 + 4);
    *(undefined8 *)(param_2 + 8) = uVar1;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x14);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::RenderGlyphBitmap(EA::Text::Font::GlyphBitmap const**, unsigned short,
   unsigned int, float, float) */

void EA::Text::BmpFont::RenderGlyphBitmap
               (GlyphBitmap **param_1,ushort param_2,uint param_3,float param_4,float param_5)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined2 local_32;
  AutoFutex aAStack_30 [8];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_32 = (undefined2)param_3;
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_30,(Futex *)(param_1 + 0x47));
  FUN_0540f5a0((hashtable_iterator *)local_18,param_1[0x25],param_1[0x26],&local_32);
  eastl::
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::hashtable_iterator
            ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
              *)local_28,(hashtable_iterator *)local_18);
  FUN_0540f314((hashtable_iterator *)local_18,param_1[0x25],param_1[0x26]);
  cVar2 = FUN_0540ecc0(local_28[0],local_18[0]);
  if (cVar2 != '\0') {
    lVar3 = FUN_0540eccc(local_28[0]);
    plVar4 = (long *)FUN_0540ecd0(param_1[0x34],(int)*(char *)(lVar3 + 0x18));
    lVar6 = *plVar4;
    (**(code **)(*param_1 + 0x70))(param_1,local_32,param_1 + 0x1f);
    iVar1 = *(int *)(lVar6 + 0x88);
    uVar5 = *(undefined8 *)(lVar6 + 0x40);
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar6 + 0x84);
    *(int *)((long)param_1 + 0x11c) = iVar1 << 2;
    *(int *)((long)param_1 + 0xf4) = (int)*(float *)((long)param_1 + 0xfc);
    *(int *)(param_1 + 0x1e) = (int)*(float *)(param_1 + 0x1f);
    lVar6 = FUN_0540ed7c(uVar5);
    param_1[0x22] =
         (GlyphBitmap *)
         (lVar6 + ((ulong)(uint)(((int)((long)((ulong)*(ushort *)(lVar3 + 0x1a) << 0x30) >> 0x34) -
                                 (int)*(float *)((long)param_1 + 0x104)) * iVar1) +
                  (long)((int)((long)((ulong)*(uint *)(lVar3 + 0x18) << 0x2c) >> 0x34) +
                        (int)*(float *)(param_1 + 0x20))) * 4);
    *(GlyphBitmap ***)(ulong)param_2 = param_1 + 0x1e;
  }
  Thread::AutoFutex::~AutoFutex(aAStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::GetGlyphIds(char16_t const*, unsigned int, unsigned short*, bool, unsigned
   int, bool) */

void __thiscall
EA::Text::BmpFont::GetGlyphIds
          (BmpFont *this,wchar16 *param_1,uint param_2,ushort *param_3,bool param_4,uint param_5,
          bool param_6)

{
  wchar16 *pwVar1;
  BmpFont *pBVar2;
  wchar16 *pwVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  long lVar7;
  ushort *puVar8;
  int iVar9;
  ulong uVar10;
  wchar16 *pwVar11;
  ushort uStack_1a;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
  arStack_18 [8];
  rbtree_iterator arStack_10 [8];
  long local_8;
  
  pwVar1 = param_1 + param_2;
  local_8 = ___stack_chk_guard;
  puVar8 = param_3;
  if (param_3 == (ushort *)0x0) {
    puVar8 = &uStack_1a;
  }
  if (pwVar1 <= param_1) {
    iVar9 = 0;
    goto LAB_0540fa14;
  }
  pBVar2 = this + 0x1e8;
  if (param_6) {
    if (param_3 == (ushort *)0x0) {
      pwVar11 = param_1;
      if (param_4) {
        do {
          eastl::
          rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
          ::find((wchar16 *)pBVar2);
          eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                    ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                     (TextureInfo ***)arStack_10);
          eastl::
          rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
          ::end();
          bVar4 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
          if (bVar4) {
            lVar7 = eastl::
                    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                    ::operator*(arStack_18);
            *puVar8 = *(ushort *)(lVar7 + 2);
          }
          else {
            cVar5 = IsCharZeroWidth(*pwVar11);
            if (cVar5 == '\0') {
              *puVar8 = *(ushort *)(this + 0x20);
            }
            else {
              *puVar8 = 0xfffe;
            }
          }
          pwVar11 = pwVar11 + 1;
        } while (pwVar11 < pwVar1);
      }
      else {
        do {
          eastl::
          rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
          ::find((wchar16 *)pBVar2);
          eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                    ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                     (TextureInfo ***)arStack_10);
          eastl::
          rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
          ::end();
          bVar4 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
          if (bVar4) {
            lVar7 = eastl::
                    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                    ::operator*(arStack_18);
            *puVar8 = *(ushort *)(lVar7 + 2);
          }
          else {
            cVar5 = IsCharZeroWidth(*pwVar11);
            uVar6 = 0xffff;
            if (cVar5 != '\0') {
              uVar6 = 0xfffe;
            }
            *puVar8 = uVar6;
          }
          pwVar11 = pwVar11 + 1;
        } while (pwVar11 < pwVar1);
      }
    }
    else {
      uVar10 = (ulong)param_5;
      pwVar11 = param_1;
      if (param_4) {
        do {
          eastl::
          rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
          ::find((wchar16 *)pBVar2);
          eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                    ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                     (TextureInfo ***)arStack_10);
          eastl::
          rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
          ::end();
          bVar4 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
          if (bVar4) {
            lVar7 = eastl::
                    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                    ::operator*(arStack_18);
            *puVar8 = *(ushort *)(lVar7 + 2);
          }
          else {
            cVar5 = IsCharZeroWidth(*pwVar11);
            if (cVar5 == '\0') {
              *puVar8 = *(ushort *)(this + 0x20);
            }
            else {
              *puVar8 = 0xfffe;
            }
          }
          pwVar11 = pwVar11 + 1;
          puVar8 = (ushort *)((long)puVar8 + uVar10);
        } while (pwVar11 < pwVar1);
      }
      else {
        do {
          while( true ) {
            eastl::
            rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
            ::find((wchar16 *)pBVar2);
            eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                      ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                       (TextureInfo ***)arStack_10);
            eastl::
            rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
            ::end();
            bVar4 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
            if (bVar4) break;
            pwVar3 = pwVar11 + 1;
            cVar5 = IsCharZeroWidth(*pwVar11);
            uVar6 = 0xfffe;
            if (cVar5 == '\0') {
              uVar6 = 0xffff;
            }
            *puVar8 = uVar6;
            puVar8 = (ushort *)((long)puVar8 + uVar10);
            pwVar11 = pwVar3;
            if (pwVar1 <= pwVar3) goto LAB_0540fa04;
          }
          pwVar11 = pwVar11 + 1;
          lVar7 = eastl::
                  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                  ::operator*(arStack_18);
          *puVar8 = *(ushort *)(lVar7 + 2);
          puVar8 = (ushort *)((long)puVar8 + uVar10);
        } while (pwVar11 < pwVar1);
      }
    }
  }
  else if (param_3 == (ushort *)0x0) {
    if (!param_4) {
      iVar9 = 0;
      do {
        eastl::
        rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
        ::find((wchar16 *)pBVar2);
        eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                  ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                   (TextureInfo ***)arStack_10);
        eastl::
        rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
        ::end();
        bVar4 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
        if (bVar4) {
          lVar7 = eastl::
                  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                  ::operator*(arStack_18);
          *puVar8 = *(ushort *)(lVar7 + 2);
LAB_0540fcec:
          iVar9 = iVar9 + 1;
        }
        else {
          cVar5 = IsCharZeroWidth(*param_1);
          if (cVar5 != '\0') {
            *puVar8 = 0xfffe;
            goto LAB_0540fcec;
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 < pwVar1);
      goto LAB_0540fa14;
    }
    pwVar11 = param_1;
    do {
      eastl::
      rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
      ::find((wchar16 *)pBVar2);
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                 (TextureInfo ***)arStack_10);
      eastl::
      rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
      ::end();
      bVar4 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
      if (bVar4) {
        lVar7 = eastl::
                rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                ::operator*(arStack_18);
        *puVar8 = *(ushort *)(lVar7 + 2);
      }
      else {
        cVar5 = IsCharZeroWidth(*pwVar11);
        if (cVar5 == '\0') {
          *puVar8 = *(ushort *)(this + 0x20);
        }
        else {
          *puVar8 = 0xfffe;
        }
      }
      pwVar11 = pwVar11 + 1;
    } while (pwVar11 < pwVar1);
  }
  else {
    if (!param_4) {
      iVar9 = 0;
      do {
        eastl::
        rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
        ::find((wchar16 *)pBVar2);
        eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                  ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                   (TextureInfo ***)arStack_10);
        eastl::
        rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
        ::end();
        bVar4 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
        if (bVar4) {
          lVar7 = eastl::
                  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                  ::operator*(arStack_18);
          *puVar8 = *(ushort *)(lVar7 + 2);
LAB_0540f8f4:
          iVar9 = iVar9 + 1;
          puVar8 = (ushort *)((long)puVar8 + (ulong)param_5);
        }
        else {
          cVar5 = IsCharZeroWidth(*param_1);
          if (cVar5 != '\0') {
            *puVar8 = 0xfffe;
            goto LAB_0540f8f4;
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 < pwVar1);
      goto LAB_0540fa14;
    }
    pwVar11 = param_1;
    do {
      eastl::
      rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
      ::find((wchar16 *)pBVar2);
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                 (TextureInfo ***)arStack_10);
      eastl::
      rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
      ::end();
      bVar4 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
      if (bVar4) {
        lVar7 = eastl::
                rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                ::operator*(arStack_18);
        *puVar8 = *(ushort *)(lVar7 + 2);
      }
      else {
        cVar5 = IsCharZeroWidth(*pwVar11);
        if (cVar5 == '\0') {
          *puVar8 = *(ushort *)(this + 0x20);
        }
        else {
          *puVar8 = 0xfffe;
        }
      }
      pwVar11 = pwVar11 + 1;
      puVar8 = (ushort *)((long)puVar8 + (ulong)param_5);
    } while (pwVar11 < pwVar1);
  }
LAB_0540fa04:
  iVar9 = (int)(~(ulong)param_1 + (long)pwVar1 >> 1) + 1;
LAB_0540fa14:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::GetGlyphIds(char const*, unsigned int, unsigned short*, bool, unsigned int,
   bool) */

void __thiscall
EA::Text::BmpFont::GetGlyphIds
          (BmpFont *this,char *param_1,uint param_2,ushort *param_3,bool param_4,uint param_5,
          bool param_6)

{
  byte *pbVar1;
  BmpFont *pBVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  ushort *puVar10;
  ulong uVar11;
  ushort uStack_1c;
  ushort local_1a;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
  arStack_18 [8];
  rbtree_iterator arStack_10 [8];
  long local_8;
  
  pbVar1 = (byte *)(param_1 + param_2);
  local_8 = ___stack_chk_guard;
  puVar10 = param_3;
  if (param_3 == (ushort *)0x0) {
    puVar10 = &uStack_1c;
  }
  if (pbVar1 <= param_1) {
    iVar7 = 0;
    goto LAB_0540ff60;
  }
  pBVar2 = this + 0x1e8;
  pbVar9 = (byte *)param_1;
  if (param_6) {
    if (param_3 == (ushort *)0x0) {
      if (param_4) {
        do {
          local_1a = (ushort)*pbVar9;
          eastl::
          rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
          ::find((wchar16 *)pBVar2);
          eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                    ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                     (TextureInfo ***)arStack_10);
          eastl::
          rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
          ::end();
          bVar3 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
          if (bVar3) {
            lVar6 = eastl::
                    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                    ::operator*(arStack_18);
            *puVar10 = *(ushort *)(lVar6 + 2);
          }
          else {
            cVar4 = IsCharZeroWidth((ushort)*pbVar9);
            if (cVar4 == '\0') {
              *puVar10 = *(ushort *)(this + 0x20);
            }
            else {
              *puVar10 = 0xfffe;
            }
          }
          pbVar9 = pbVar9 + 1;
        } while (pbVar9 != pbVar1);
      }
      else {
        do {
          local_1a = (ushort)*pbVar9;
          eastl::
          rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
          ::find((wchar16 *)pBVar2);
          eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                    ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                     (TextureInfo ***)arStack_10);
          eastl::
          rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
          ::end();
          bVar3 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
          if (bVar3) {
            lVar6 = eastl::
                    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                    ::operator*(arStack_18);
            *puVar10 = *(ushort *)(lVar6 + 2);
          }
          else {
            cVar4 = IsCharZeroWidth((ushort)*pbVar9);
            uVar5 = 0xfffe;
            if (cVar4 == '\0') {
              uVar5 = 0xffff;
            }
            *puVar10 = uVar5;
          }
          pbVar9 = pbVar9 + 1;
        } while (pbVar9 != pbVar1);
      }
    }
    else {
      uVar11 = (ulong)param_5;
      pbVar8 = (byte *)param_1;
      if (param_4) {
        do {
          local_1a = (ushort)*pbVar9;
          eastl::
          rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
          ::find((wchar16 *)pBVar2);
          eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                    ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                     (TextureInfo ***)arStack_10);
          eastl::
          rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
          ::end();
          bVar3 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
          if (bVar3) {
            lVar6 = eastl::
                    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                    ::operator*(arStack_18);
            *puVar10 = *(ushort *)(lVar6 + 2);
          }
          else {
            cVar4 = IsCharZeroWidth((ushort)*pbVar9);
            if (cVar4 == '\0') {
              *puVar10 = *(ushort *)(this + 0x20);
            }
            else {
              *puVar10 = 0xfffe;
            }
          }
          pbVar9 = pbVar9 + 1;
          puVar10 = (ushort *)((long)puVar10 + uVar11);
        } while (pbVar9 != pbVar1);
      }
      else {
        do {
          while( true ) {
            local_1a = (ushort)*pbVar8;
            eastl::
            rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
            ::find((wchar16 *)pBVar2);
            eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                      ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                       (TextureInfo ***)arStack_10);
            eastl::
            rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
            ::end();
            bVar3 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
            if (bVar3) break;
            pbVar9 = pbVar8 + 1;
            cVar4 = IsCharZeroWidth((ushort)*pbVar8);
            uVar5 = 0xfffe;
            if (cVar4 == '\0') {
              uVar5 = 0xffff;
            }
            *puVar10 = uVar5;
            puVar10 = (ushort *)((long)puVar10 + uVar11);
            pbVar8 = pbVar9;
            if (pbVar9 == pbVar1) goto LAB_0540ff5c;
          }
          pbVar9 = pbVar8 + 1;
          lVar6 = eastl::
                  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                  ::operator*(arStack_18);
          *puVar10 = *(ushort *)(lVar6 + 2);
          puVar10 = (ushort *)((long)puVar10 + uVar11);
          pbVar8 = pbVar9;
        } while (pbVar9 != pbVar1);
      }
    }
  }
  else if (param_3 == (ushort *)0x0) {
    if (!param_4) {
      iVar7 = 0;
      do {
        local_1a = (ushort)(byte)*param_1;
        eastl::
        rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
        ::find((wchar16 *)pBVar2);
        eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                  ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                   (TextureInfo ***)arStack_10);
        eastl::
        rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
        ::end();
        bVar3 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
        if (bVar3) {
          lVar6 = eastl::
                  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                  ::operator*(arStack_18);
          *puVar10 = *(ushort *)(lVar6 + 2);
LAB_054102f4:
          iVar7 = iVar7 + 1;
        }
        else {
          cVar4 = IsCharZeroWidth((ushort)(byte)*param_1);
          if (cVar4 != '\0') {
            *puVar10 = 0xfffe;
            goto LAB_054102f4;
          }
        }
        param_1 = param_1 + 1;
      } while ((byte *)param_1 != pbVar1);
      goto LAB_0540ff60;
    }
    do {
      local_1a = (ushort)*pbVar9;
      eastl::
      rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
      ::find((wchar16 *)pBVar2);
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                 (TextureInfo ***)arStack_10);
      eastl::
      rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
      ::end();
      bVar3 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
      if (bVar3) {
        lVar6 = eastl::
                rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                ::operator*(arStack_18);
        *puVar10 = *(ushort *)(lVar6 + 2);
      }
      else {
        cVar4 = IsCharZeroWidth((ushort)*pbVar9);
        if (cVar4 == '\0') {
          *puVar10 = *(ushort *)(this + 0x20);
        }
        else {
          *puVar10 = 0xfffe;
        }
      }
      pbVar9 = pbVar9 + 1;
    } while (pbVar9 != pbVar1);
  }
  else {
    if (!param_4) {
      iVar7 = 0;
      do {
        local_1a = (ushort)(byte)*param_1;
        eastl::
        rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
        ::find((wchar16 *)pBVar2);
        eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                  ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                   (TextureInfo ***)arStack_10);
        eastl::
        rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
        ::end();
        bVar3 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
        if (bVar3) {
          lVar6 = eastl::
                  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                  ::operator*(arStack_18);
          *puVar10 = *(ushort *)(lVar6 + 2);
LAB_0540fe38:
          iVar7 = iVar7 + 1;
          puVar10 = (ushort *)((long)puVar10 + (ulong)param_5);
        }
        else {
          cVar4 = IsCharZeroWidth((ushort)(byte)*param_1);
          if (cVar4 != '\0') {
            *puVar10 = 0xfffe;
            goto LAB_0540fe38;
          }
        }
        param_1 = param_1 + 1;
      } while ((byte *)param_1 != pbVar1);
      goto LAB_0540ff60;
    }
    do {
      local_1a = (ushort)*pbVar9;
      eastl::
      rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
      ::find((wchar16 *)pBVar2);
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)arStack_18,
                 (TextureInfo ***)arStack_10);
      eastl::
      rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
      ::end();
      bVar3 = eastl::operator!=((rbtree_iterator *)arStack_18,arStack_10);
      if (bVar3) {
        lVar6 = eastl::
                rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                ::operator*(arStack_18);
        *puVar10 = *(ushort *)(lVar6 + 2);
      }
      else {
        cVar4 = IsCharZeroWidth((ushort)*pbVar9);
        if (cVar4 == '\0') {
          *puVar10 = *(ushort *)(this + 0x20);
        }
        else {
          *puVar10 = 0xfffe;
        }
      }
      pbVar9 = pbVar9 + 1;
      puVar10 = (ushort *)((long)puVar10 + (ulong)param_5);
    } while (pbVar9 != pbVar1);
  }
LAB_0540ff5c:
  iVar7 = (int)pbVar9 - (int)param_1;
LAB_0540ff60:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::IsCharSupported(char16_t, EA::Text::Script) */

void __thiscall EA::Text::BmpFont::IsCharSupported(BmpFont *this,ushort param_1,int param_3)

{
  undefined1 uVar1;
  rbtree_iterator arStack_18 [8];
  rbtree_iterator arStack_10 [8];
  long local_8;
  
  uVar1 = 1;
  local_8 = ___stack_chk_guard;
  if (0x7f < param_1) {
    switch(param_3) {
    default:
      uVar1 = eastl::bitset<64ul,unsigned_long>::test
                        ((bitset<64ul,unsigned_long> *)(this + 0x28),(long)param_3);
      break;
    case -1:
      if (param_1 == 0xffff) {
        uVar1 = 1;
        break;
      }
    case 0:
    case 0x15:
    case 0x1e:
      eastl::
      rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
      ::find((wchar16 *)(this + 0x1e8));
      eastl::
      rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
      ::end();
      uVar1 = eastl::operator!=(arStack_18,arStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::GetGlyphTextureInfo(unsigned short, EA::Text::GlyphTextureInfo&) const */

void __thiscall
EA::Text::BmpFont::GetGlyphTextureInfo(BmpFont *this,ushort param_1,GlyphTextureInfo *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ushort local_12;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_12 = param_1;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x238));
  uVar5 = FUN_05410464(*(undefined8 *)(this + 0x128),*(undefined8 *)(this + 0x130),&local_12);
  uVar6 = FUN_05410414(*(undefined8 *)(this + 0x128),*(undefined8 *)(this + 0x130));
  cVar4 = FUN_0540ecc0(uVar5,uVar6);
  if (cVar4 != '\0') {
    lVar7 = FUN_0540eccc(uVar5);
    plVar8 = (long *)FUN_0540ed74(*(undefined8 *)(this + 0x1a0),(long)*(char *)(lVar7 + 0x18));
    fVar10 = *(float *)(lVar7 + 0xc);
    uVar1 = *(uint *)(lVar7 + 0x18);
    fVar9 = *(float *)(lVar7 + 0x10);
    uVar3 = *(ushort *)(lVar7 + 0x1a);
    uVar2 = *(uint *)(*plVar8 + 0x88);
    *(long *)param_2 = *plVar8;
    fVar12 = *(float *)(lVar7 + 4);
    fVar11 = 1.0 / (float)uVar2;
    fVar13 = *(float *)(lVar7 + 8);
    fVar10 = (float)((int)((long)((ulong)uVar1 << 0x2c) >> 0x34) + (int)fVar10) * fVar11;
    fVar9 = (float)((int)((long)((ulong)uVar3 << 0x30) >> 0x34) - (int)fVar9) * fVar11;
    *(float *)(param_2 + 8) = fVar10;
    *(float *)(param_2 + 0xc) = fVar9;
    *(float *)(param_2 + 0x10) = fVar10 + fVar12 * fVar11;
    *(float *)(param_2 + 0x14) = fVar9 + fVar13 * fVar11;
  }
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::BmpFont(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::BmpFont::BmpFont(BmpFont *this,ICoreAllocator *param_1)

{
  long lVar1;
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Font::Font((Font *)this,param_1);
  *(undefined ***)this = &PTR__BmpFont_06a37d90;
  FontDescription::FontDescription((FontDescription *)(this + 0x34));
  FontMetrics::FontMetrics((FontMetrics *)(this + 0xa8));
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/BmpFont/BmpGlyphMetricsMap",*(ICoreAllocator **)(this + 8));
  eastl::
  hash_map<unsigned_short,EA::Text::BmpGlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
  ::hash_map((CoreAllocatorAdapter *)(this + 0x120));
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/BmpFont/KerningMap",*(ICoreAllocator **)(this + 8));
  eastl::
  map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::map((map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
         *)(this + 0x160),(CoreAllocatorAdapter *)aCStack_18);
  eastl::fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator>::fixed_vector
            ((fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator> *)(this + 0x1a0));
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/BmpFont/CharGlyphMap",*(ICoreAllocator **)(this + 8));
  eastl::
  map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::map((map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
         *)(this + 0x1e8),(CoreAllocatorAdapter *)aCStack_18);
  *(undefined8 *)(this + 0x228) = 0;
  this[0x231] = (BmpFont)0x1;
  this[0x230] = (BmpFont)0x0;
  Thread::Futex::Futex((Futex *)(this + 0x238));
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::Close() */

void __thiscall EA::Text::BmpFont::Close(BmpFont *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x238));
  *(undefined2 *)(this + 0x34) = 0;
  eastl::
  hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)(this + 0x120));
  eastl::
  rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
  ::clear((rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
           *)(this + 0x160));
  eastl::
  rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
  ::clear((rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
           *)(this + 0x1e8));
  puVar1 = (undefined8 *)FUN_0540ecd8(*(undefined8 *)(this + 0x1a0));
  puVar2 = (undefined8 *)FUN_0540ecdc(*(undefined8 *)(this + 0x1a8));
  if (puVar1 != puVar2) {
    do {
      plVar3 = (long *)*puVar1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
        puVar2 = (undefined8 *)FUN_0540ecdc(*(undefined8 *)(this + 0x1a8));
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != puVar2);
  }
  FUN_0540ef00(*(undefined8 *)(this + 0x1a0),this + 0x1a8);
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* EA::Text::BmpFont::~BmpFont() */

void __thiscall EA::Text::BmpFont::~BmpFont(BmpFont *this)

{
  *(undefined ***)this = &PTR__BmpFont_06a37d90;
  Close(this);
  Thread::Futex::~Futex((Futex *)(this + 0x238));
  eastl::
  map<char16_t,unsigned_short,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::~map((map<char16_t,unsigned_short,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *)(this + 0x1e8));
  eastl::fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator>::~fixed_vector
            ((fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator> *)(this + 0x1a0));
  eastl::
  map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::~map((map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *)(this + 0x160));
  eastl::
  hash_map<unsigned_short,EA::Text::BmpGlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
  ::~hash_map((hash_map<unsigned_short,EA::Text::BmpGlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
               *)(this + 0x120));
  nop();
  return;
}


/* EA::Text::BmpFont::~BmpFont() */

void __thiscall EA::Text::BmpFont::~BmpFont(BmpFont *this)

{
  ~BmpFont(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::GetKerning(unsigned short, unsigned short, EA::Text::Kerning&, int, bool) */

void EA::Text::BmpFont::GetKerning
               (ushort param_1,ushort param_2,Kerning *param_3,int param_4,bool param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort local_24;
  ushort local_22;
  pair<unsigned_short,unsigned_short> apStack_20 [8];
  generic_iterator<EA::Text::TextureInfo**,void> agStack_18 [8];
  rbtree_iterator arStack_10 [8];
  long local_8;
  
  puVar3 = (undefined8 *)(ulong)(uint)param_4;
  local_24 = (ushort)param_3;
  local_8 = ___stack_chk_guard;
  local_22 = param_2;
  if (param_5) {
    eastl::swap<unsigned_short>(&local_22,&local_24);
  }
  eastl::pair<unsigned_short,unsigned_short>::pair(apStack_20,&local_22,&local_24);
  eastl::
  rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
  ::find((pair *)((ulong)param_1 + 0x160));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_18,(TextureInfo ***)arStack_10);
  eastl::
  rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
  ::end();
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_18,arStack_10);
  if (bVar1) {
    lVar2 = eastl::
            rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
            ::operator*((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                         *)agStack_18);
    *puVar3 = *(undefined8 *)(lVar2 + 4);
    bVar1 = true;
  }
  else {
    *(undefined4 *)puVar3 = 0;
    *(undefined4 *)((long)puVar3 + 4) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::ReadBmpFontInfo(EA::IO::IStream*) */

void __thiscall EA::Text::BmpFont::ReadBmpFontInfo(BmpFont *this,IStream *param_1)

{
  byte bVar1;
  char cVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  BmpTextureInfo *this_00;
  char *pcVar16;
  byte *pbVar17;
  ushort local_286;
  undefined4 local_284;
  undefined4 local_280;
  uint local_27c;
  uint local_278 [2];
  undefined4 local_270;
  undefined1 auStack_26c [4];
  undefined1 auStack_268 [4];
  undefined1 auStack_264 [4];
  undefined1 auStack_260 [4];
  undefined4 local_25c;
  BmpTextureInfo *local_258 [4];
  undefined8 local_238;
  undefined8 local_230;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_258[0] = (BmpTextureInfo *)((ulong)local_258[0] & 0xffffffffffffff00);
  eastl::fixed_string<char,513,true,eastl::allocator>::fixed_string
            ((fixed_string<char,513,true,eastl::allocator> *)&local_238,0x200,(char *)local_258);
  uVar7 = (**(code **)(*(long *)param_1 + 0x50))(param_1,0);
  do {
    pcVar8 = (char *)FUN_0540ece0(local_238,0);
    uVar9 = IO::ReadLine(param_1,pcVar8,0x200);
    if (0xfffffffffffffffd < uVar9) {
      (**(code **)(*(long *)param_1 + 0x58))(param_1,uVar7,0);
      eastl::fixed_string<char,513,true,eastl::allocator>::~fixed_string
                ((fixed_string<char,513,true,eastl::allocator> *)&local_238);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(1);
    }
    eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
    ::resize((basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
              *)&local_238,uVar9);
    uVar5 = local_230;
    uVar4 = local_238;
    uVar10 = FUN_0540f524(local_238,local_230);
    uVar11 = FUN_0540ece8(uVar4,uVar5);
    if (uVar10 < uVar11) {
      puVar12 = (undefined1 *)FUN_0540ece0(uVar4,uVar10);
      *puVar12 = 0;
      uVar11 = eastl::
               basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
               ::find_first_not_of((basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
                                    *)&local_238," \t",uVar10 + 1);
      uVar4 = local_238;
      pcVar8 = (char *)FUN_0540ecf0(local_238);
      uVar10 = FUN_0540ece8(uVar4,local_230);
      if (uVar11 < uVar10) {
        uVar10 = uVar11;
      }
      pcVar16 = pcVar8 + uVar10;
      iVar6 = StdC::Stricmp(pcVar8,"Family");
      if (iVar6 == 0) {
        StdC::Strlcpy((wchar16 *)(this + 0x34),pcVar16,0x20,0xffffffffffffffff);
      }
      else {
        pcVar13 = (char *)FUN_0540ecf0(local_238);
        iVar6 = StdC::Stricmp(pcVar13,"Size");
        if (iVar6 == 0) {
          dVar3 = (double)StdC::Atof(pcVar16);
          *(float *)(this + 0x74) = (float)dVar3;
        }
        else {
          pcVar13 = (char *)FUN_0540ecf0(local_238);
          iVar6 = StdC::Stricmp(pcVar13,"Style");
          if (iVar6 == 0) {
            lVar14 = StdC::Stristr(pcVar16,"italic");
            if (lVar14 == 0) {
              lVar14 = StdC::Stristr(pcVar16,"oblique");
              if (lVar14 == 0) {
                *(undefined4 *)(this + 0x78) = 0;
              }
              else {
                *(undefined4 *)(this + 0x78) = 1;
              }
            }
            else {
              *(undefined4 *)(this + 0x78) = 2;
            }
          }
          else {
            pcVar13 = (char *)FUN_0540ecf0(local_238);
            iVar6 = StdC::Stricmp(pcVar13,"Weight");
            if (iVar6 == 0) {
              dVar3 = (double)StdC::Atof(pcVar16);
              *(float *)(this + 0x7c) = (float)dVar3;
            }
            else {
              pcVar13 = (char *)FUN_0540ecf0(local_238);
              iVar6 = StdC::Stricmp(pcVar13,"Stretch");
              if (iVar6 == 0) {
                dVar3 = (double)StdC::Atof(pcVar16);
                *(float *)(this + 0x80) = (float)dVar3;
              }
              else {
                pcVar13 = (char *)FUN_0540ecf0(local_238);
                iVar6 = StdC::Stricmp(pcVar13,"Smooth");
                if (iVar6 == 0) {
                  lVar14 = StdC::Stristr(pcVar16,"Yes");
                  if (lVar14 == 0) {
                    *(undefined4 *)(this + 0x8c) = 0;
                  }
                  else {
                    *(undefined4 *)(this + 0x8c) = 1;
                  }
                }
                else {
                  pcVar13 = (char *)FUN_0540ecf0(local_238);
                  iVar6 = StdC::Stricmp(pcVar13,"Variant");
                  if (iVar6 == 0) {
                    lVar14 = StdC::Stristr(pcVar16,"SmallCaps");
                    if (lVar14 == 0) {
                      *(undefined4 *)(this + 0x88) = 0;
                    }
                    else {
                      *(undefined4 *)(this + 0x88) = 1;
                    }
                  }
                  else {
                    pcVar13 = (char *)FUN_0540ecf0(local_238);
                    iVar6 = StdC::Stricmp(pcVar13,"FixedPitch");
                    if (iVar6 == 0) {
                      lVar14 = StdC::Stristr(pcVar16,"Yes");
                      if (lVar14 == 0) {
                        *(undefined4 *)(this + 0xac) = 1;
                        *(undefined4 *)(this + 0x84) = 1;
                      }
                      else {
                        *(undefined4 *)(this + 0xac) = 0;
                        *(undefined4 *)(this + 0x84) = 0;
                      }
                    }
                    else {
                      pcVar13 = (char *)FUN_0540ecf0(local_238);
                      iVar6 = StdC::Stricmp(pcVar13,"HAdvanceXMax");
                      if (iVar6 == 0) {
                        dVar3 = (double)StdC::Atof(pcVar16);
                        *(float *)(this + 0xb0) = (float)dVar3;
                      }
                      else {
                        pcVar13 = (char *)FUN_0540ecf0(local_238);
                        iVar6 = StdC::Stricmp(pcVar13,"VAdvanceYMax");
                        if (iVar6 == 0) {
                          dVar3 = (double)StdC::Atof(pcVar16);
                          *(float *)(this + 0xb4) = (float)dVar3;
                        }
                        else {
                          pcVar13 = (char *)FUN_0540ecf0(local_238);
                          iVar6 = StdC::Stricmp(pcVar13,"Ascent");
                          if (iVar6 == 0) {
                            dVar3 = (double)StdC::Atof(pcVar16);
                            *(float *)(this + 0xb8) = (float)dVar3;
                          }
                          else {
                            pcVar13 = (char *)FUN_0540ecf0(local_238);
                            iVar6 = StdC::Stricmp(pcVar13,"Descent");
                            if (iVar6 == 0) {
                              dVar3 = (double)StdC::Atof(pcVar16);
                              *(float *)(this + 0xbc) = (float)dVar3;
                            }
                            else {
                              pcVar13 = (char *)FUN_0540ecf0(local_238);
                              iVar6 = StdC::Stricmp(pcVar13,"Leading");
                              if (iVar6 == 0) {
                                dVar3 = (double)StdC::Atof(pcVar16);
                                *(float *)(this + 0xc0) = (float)dVar3;
                              }
                              else {
                                pcVar13 = (char *)FUN_0540ecf0(local_238);
                                iVar6 = StdC::Stricmp(pcVar13,"Baseline");
                                if (iVar6 == 0) {
                                  dVar3 = (double)StdC::Atof(pcVar16);
                                  *(float *)(this + 0xc4) = (float)dVar3;
                                }
                                else {
                                  pcVar13 = (char *)FUN_0540ecf0(local_238);
                                  iVar6 = StdC::Stricmp(pcVar13,"LineHeight");
                                  if (iVar6 == 0) {
                                    dVar3 = (double)StdC::Atof(pcVar16);
                                    *(float *)(this + 200) = (float)dVar3;
                                  }
                                  else {
                                    pcVar13 = (char *)FUN_0540ecf0(local_238);
                                    iVar6 = StdC::Stricmp(pcVar13,"XHeight");
                                    if (iVar6 == 0) {
                                      dVar3 = (double)StdC::Atof(pcVar16);
                                      *(float *)(this + 0xcc) = (float)dVar3;
                                    }
                                    else {
                                      pcVar13 = (char *)FUN_0540ecf0(local_238);
                                      iVar6 = StdC::Stricmp(pcVar13,"CapsHeight");
                                      if (iVar6 == 0) {
                                        dVar3 = (double)StdC::Atof(pcVar16);
                                        *(float *)(this + 0xd0) = (float)dVar3;
                                      }
                                      else {
                                        pcVar13 = (char *)FUN_0540ecf0(local_238);
                                        iVar6 = StdC::Stricmp(pcVar13,"UnderlinePosition");
                                        if (iVar6 == 0) {
                                          dVar3 = (double)StdC::Atof(pcVar16);
                                          *(float *)(this + 0xd4) = (float)dVar3;
                                        }
                                        else {
                                          pcVar13 = (char *)FUN_0540ecf0(local_238);
                                          iVar6 = StdC::Stricmp(pcVar13,"UnderlineThickness");
                                          if (iVar6 == 0) {
                                            dVar3 = (double)StdC::Atof(pcVar16);
                                            *(float *)(this + 0xd8) = (float)dVar3;
                                          }
                                          else {
                                            pcVar13 = (char *)FUN_0540ecf0(local_238);
                                            iVar6 = StdC::Stricmp(pcVar13,"LinethroughPosition");
                                            if (iVar6 == 0) {
                                              dVar3 = (double)StdC::Atof(pcVar16);
                                              *(float *)(this + 0xdc) = (float)dVar3;
                                            }
                                            else {
                                              pcVar13 = (char *)FUN_0540ecf0(local_238);
                                              iVar6 = StdC::Stricmp(pcVar13,"LinethroughThickness");
                                              if (iVar6 == 0) {
                                                dVar3 = (double)StdC::Atof(pcVar16);
                                                *(float *)(this + 0xe0) = (float)dVar3;
                                              }
                                              else {
                                                pcVar13 = (char *)FUN_0540ecf0(local_238);
                                                iVar6 = StdC::Stricmp(pcVar13,"GlyphMetricsMap");
                                                if (iVar6 == 0) {
                                                  cVar2 = pcVar8[uVar10];
                                                  while (cVar2 != ' ') {
                                                    pcVar16 = pcVar16 + 1;
                                                    cVar2 = *pcVar16;
                                                  }
LAB_054121bc:
                                                  StdC::Sscanf(pcVar16,"%u %d %d %d %f %f %f %f %f",
                                                               &local_284,&local_280,&local_27c,
                                                               local_278,
                                                               (BmpGlyphMetrics *)&local_270,
                                                               auStack_26c,auStack_268,auStack_264,
                                                               auStack_260);
                                                  local_25c._2_2_ =
                                                       (ushort)((local_27c & 0xfff) >> 8);
                                                  local_25c = CONCAT22(local_25c._2_2_ |
                                                                       (ushort)((local_278[0] &
                                                                                0xfff) << 4),
                                                                       (ushort)local_280 & 0xff |
                                                                       (ushort)((local_27c & 0xfff)
                                                                               << 8));
                                                  local_286 = (ushort)local_284;
                                                  eastl::
                                                  pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>
                                                  ::pair((
                                                  pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>
                                                  *)local_258,&local_286,
                                                  (BmpGlyphMetrics *)&local_270);
                                                  eastl::
                                                  hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                                                  ::insert((pair *)(this + 0x120));
                                                  lVar14 = StdC::Strchr(pcVar16,0x2c);
                                                  uVar4 = local_238;
                                                  pcVar16 = (char *)(lVar14 + 1);
                                                  if (lVar14 != 0) break;
                                                  goto LAB_054122a8;
                                                }
                                                pcVar13 = (char *)FUN_0540ecf0(local_238);
                                                iVar6 = StdC::Stricmp(pcVar13,"KerningMap");
                                                if (iVar6 == 0) {
                                                  cVar2 = pcVar8[uVar10];
                                                  while (cVar2 != ' ') {
                                                    pcVar16 = pcVar16 + 1;
                                                    cVar2 = *pcVar16;
                                                  }
LAB_05412374:
                                                  StdC::Sscanf(pcVar16,"%u %u %f",&local_27c,
                                                               local_278,
                                                               (BmpGlyphMetrics *)&local_270);
                                                  local_286 = (ushort)local_27c;
                                                  local_284 = CONCAT22(local_284._2_2_,
                                                                       (short)local_278[0]);
                                                  eastl::pair<unsigned_short,unsigned_short>::pair
                                                            ((pair<unsigned_short,unsigned_short> *)
                                                             &local_280,&local_286,
                                                             (ushort *)&local_284);
                                                  eastl::
                                                  pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>
                                                  ::pair((
                                                  pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>
                                                  *)local_258,(pair *)&local_280,
                                                  (Kerning *)&local_270);
                                                  eastl::
                                                  rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                                                  ::insert((pair *)(this + 0x160));
                                                  lVar14 = StdC::Strchr(pcVar16,0x2c);
                                                  uVar4 = local_238;
                                                  pcVar16 = (char *)(lVar14 + 1);
                                                  if (lVar14 != 0) goto code_r0x054123f0;
                                                  goto LAB_05412424;
                                                }
                                                pcVar13 = (char *)FUN_0540ecf0(local_238);
                                                iVar6 = StdC::Stricmp(pcVar13,"CharMapSet");
                                                if (iVar6 == 0) {
                                                  cVar2 = pcVar8[uVar10];
                                                  while (cVar2 != ' ') {
                                                    pcVar16 = pcVar16 + 1;
                                                    cVar2 = *pcVar16;
                                                  }
LAB_054124e8:
                                                  StdC::Sscanf(pcVar16,"%u %u",
                                                               (BmpGlyphMetrics *)&local_270,
                                                               (
                                                  pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>
                                                  *)local_258);
                                                  local_27c = CONCAT22(local_27c._2_2_,
                                                                       (short)local_258[0]);
                                                  local_280 = CONCAT22(local_280._2_2_,
                                                                       (short)local_270);
                                                  eastl::pair<unsigned_short,unsigned_short>::pair
                                                            ((pair<unsigned_short,unsigned_short> *)
                                                             local_278,(ushort *)&local_280,
                                                             (ushort *)&local_27c);
                                                  eastl::
                                                  rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
                                                  ::insert((pair *)(this + 0x1e8));
                                                  lVar14 = StdC::Strchr(pcVar16,0x2c);
                                                  uVar4 = local_238;
                                                  pcVar16 = (char *)(lVar14 + 1);
                                                  if (lVar14 != 0) goto code_r0x05412554;
                                                  goto LAB_05412578;
                                                }
                                                pcVar8 = (char *)FUN_0540ecf0(local_238);
                                                lVar14 = StdC::Stristr(pcVar8,"Texture");
                                                lVar15 = FUN_0540ecf0(local_238);
                                                if (lVar14 == lVar15) {
                                                  this_00 = (BmpTextureInfo *)
                                                            FUN_02fd4a98(*(undefined8 *)(this + 8));
                                                  BmpTextureInfo::BmpTextureInfo(this_00);
                                                  local_258[0] = this_00;
                                                  (**(code **)(*(long *)this_00 + 0x10))(this_00);
                                                  *(undefined8 *)(local_258[0] + 0x148) =
                                                       *(undefined8 *)(this + 8);
                                                  StdC::Sscanf(pcVar16,"%u %u %u",
                                                               local_258[0] + 0x280,
                                                               local_258[0] + 0x88,
                                                               local_258[0] + 0x88);
                                                  *(float *)(local_258[0] + 0x80) =
                                                       1.0 / (float)*(uint *)(local_258[0] + 0x88);
                                                  lVar14 = StdC::Strchr(pcVar16,0x20);
                                                  lVar14 = StdC::Strchr((char *)(lVar14 + 1),0x20);
                                                  lVar14 = StdC::Strchr((char *)(lVar14 + 1),0x20);
                                                  pbVar17 = (byte *)(lVar14 + 1);
                                                  bVar1 = *(byte *)(lVar14 + 1);
                                                  while (bVar1 != 0) {
                                                    eastl::
                                                  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
                                                  ::operator+=((
                                                  basic_string<char16_t,eastl::fixed_vector_allocator<2ul,129ul,2ul,0ul,true,eastl::allocator>>
                                                  *)(local_258[0] + 0x150),(ushort)bVar1);
                                                  pbVar17 = pbVar17 + 1;
                                                  bVar1 = *pbVar17;
                                                  }
                                                  eastl::
                                                  fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator>
                                                  ::push_back((
                                                  fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator>
                                                  *)(this + 0x1a0),local_258);
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
LAB_05411bf4:
    eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
    ::resize((basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
              *)&local_238,0x200);
  } while( true );
  lVar14 = FUN_02fd4a94(local_238);
  lVar15 = FUN_0540ece8(uVar4,local_230);
  if ((char *)(lVar14 + lVar15) <= pcVar16) {
LAB_054122a8:
    pcVar8 = (char *)FUN_0540ece0(uVar4,uVar9 - 1);
    if (*pcVar8 == ',') {
      eastl::
      basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
      resize((basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
              *)&local_238,0x200);
      pcVar8 = (char *)FUN_0540ece0(local_238,0);
      uVar9 = IO::ReadLine(param_1,pcVar8,0x200);
      eastl::
      basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
      resize((basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
              *)&local_238,uVar9);
      pcVar16 = (char *)FUN_0540ecf0(local_238);
      goto LAB_054121bc;
    }
    goto LAB_05411bf4;
  }
  goto LAB_054121bc;
code_r0x054123f0:
  lVar14 = FUN_02fd4a94(local_238);
  lVar15 = FUN_0540ece8(uVar4,local_230);
  if ((char *)(lVar14 + lVar15) <= pcVar16) {
LAB_05412424:
    pcVar8 = (char *)FUN_0540ece0(uVar4,uVar9 - 1);
    if (*pcVar8 == ',') {
      eastl::
      basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
      resize((basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
              *)&local_238,0x200);
      pcVar8 = (char *)FUN_0540ece0(local_238,0);
      uVar9 = IO::ReadLine(param_1,pcVar8,0x200);
      eastl::
      basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
      resize((basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
              *)&local_238,uVar9);
      pcVar16 = (char *)FUN_0540ecf0(local_238);
      goto LAB_05412374;
    }
    goto LAB_05411bf4;
  }
  goto LAB_05412374;
code_r0x05412554:
  lVar14 = FUN_02fd4a94(local_238);
  lVar15 = FUN_0540ece8(uVar4,local_230);
  if ((char *)(lVar14 + lVar15) <= pcVar16) {
LAB_05412578:
    pcVar8 = (char *)FUN_0540ece0(uVar4,uVar9 - 1);
    if (*pcVar8 == ',') {
      eastl::
      basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
      resize((basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
              *)&local_238,0x200);
      pcVar8 = (char *)FUN_0540ece0(local_238,0);
      uVar9 = IO::ReadLine(param_1,pcVar8,0x200);
      eastl::
      basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>::
      resize((basic_string<char,eastl::fixed_vector_allocator<1ul,513ul,1ul,0ul,true,eastl::allocator>>
              *)&local_238,uVar9);
      pcVar16 = (char *)FUN_0540ecf0(local_238);
      goto LAB_054124e8;
    }
    goto LAB_05411bf4;
  }
  goto LAB_054124e8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::Open(EA::IO::IStream**, unsigned int) */

void __thiscall EA::Text::BmpFont::Open(BmpFont *this,IStream **param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  AutoFutex aAStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  pair<unsigned_short_const,EA::Text::BmpGlyphMetrics> apStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = '\x01';
  Thread::AutoFutex::AutoFutex(aAStack_48,(Futex *)(this + 0x238));
  cVar1 = FUN_0540ecb4(*(undefined8 *)(this + 0x138));
  if (cVar1 != '\0') {
    if (*param_1 != (IStream *)0x0) {
      cVar2 = ReadBmpFontInfo(this,*param_1);
      if (cVar2 != '\0') {
        if (1 < param_2) {
          iVar3 = 0;
          do {
            param_1 = param_1 + 1;
            cVar1 = (**(code **)(*(long *)this + 0x100))(this,*param_1,iVar3);
            if (cVar1 == '\0') goto LAB_05412770;
            iVar3 = iVar3 + 1;
          } while (iVar3 != param_2 - 1);
        }
        local_30 = 0;
        local_40 = 0;
        uStack_38 = 0;
        eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>::pair
                  (apStack_28,(ushort *)&DAT_05769b80,(BmpGlyphMetrics *)&local_40);
        eastl::
        hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
        ::insert((pair *)(this + 0x120));
        Font::SetupSupportedScriptSet((Font *)this);
        RegisterGlyphMetrics(this);
        goto LAB_05412784;
      }
    }
LAB_05412770:
    cVar2 = '\0';
    (**(code **)(*(long *)this + 0x40))(this);
  }
LAB_05412784:
  Thread::AutoFutex::~AutoFutex(aAStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpFont::SetBmpTextureInfo(unsigned int, EA::Text::BmpTextureInfo*) */

void __thiscall
EA::Text::BmpFont::SetBmpTextureInfo(BmpFont *this,uint param_1,BmpTextureInfo *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  uVar4 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x238));
  uVar1 = FUN_0540ecf4(*(undefined8 *)(this + 0x1a0),*(undefined8 *)(this + 0x1a8));
  if (uVar1 <= uVar4) {
    eastl::
    vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
    ::resize((vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
              *)(this + 0x1a0),(ulong)(param_1 + 1));
  }
  (**(code **)(*(long *)param_2 + 0x10))(param_2);
  plVar2 = (long *)FUN_0540ecd0(*(undefined8 *)(this + 0x1a0),uVar4);
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    plVar2 = (long *)FUN_0540ecd0(*(undefined8 *)(this + 0x1a0),uVar4);
  }
  *plVar2 = (long)param_2;
  plVar2 = *(long **)(this + 0x228);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x90))(plVar2,param_2,1,0);
  }
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::BmpFont::SetAllocator(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::BmpFont::SetAllocator(BmpFont *this,ICoreAllocator *param_1)

{
  undefined8 uVar1;
  
  eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> *)this,param_1);
  uVar1 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                           *)(this + 0x120));
  FUN_0540ecac(uVar1,param_1);
  uVar1 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                           *)(this + 0x160));
  FUN_0540ecac(uVar1,param_1);
  uVar1 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                           *)(this + 0x1e8));
  FUN_0540ecac(uVar1,param_1);
  return;
}

