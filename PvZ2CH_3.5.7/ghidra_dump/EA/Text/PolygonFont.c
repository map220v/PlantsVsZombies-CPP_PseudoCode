// Class: EA::Text::PolygonFont


/* EA::Text::PolygonFont::GetFontType() */

undefined8 EA::Text::PolygonFont::GetFontType(void)

{
  return 4;
}


/* EA::Text::PolygonFont::SetOption(int, int) */

void __thiscall EA::Text::PolygonFont::SetOption(PolygonFont *this,int param_1,int param_2)

{
  if (param_1 != 0x12d) {
    return;
  }
  this[0x34] = (PolygonFont)(param_2 != 0);
  return;
}


/* EA::Text::PolygonFont::GetFontDescription(EA::Text::FontDescription&) */

undefined8 __thiscall
EA::Text::PolygonFont::GetFontDescription(PolygonFont *this,FontDescription *param_1)

{
  memcpy(param_1,this + 0x38,0x74);
  return 1;
}


/* EA::Text::PolygonFont::GetFontMetrics(EA::Text::FontMetrics&) */

undefined8 __thiscall EA::Text::PolygonFont::GetFontMetrics(PolygonFont *this,FontMetrics *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0xb4);
  *(undefined8 *)param_1 = *(undefined8 *)(this + 0xac);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(this + 0xc4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(this + 0xbc);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(this + 0xd4);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(this + 0xcc);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(this + 0xe4);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(this + 0xdc);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(this + 0xec);
  return 1;
}


/* EA::Text::PolygonFont::GetSize() const */

undefined4 __thiscall EA::Text::PolygonFont::GetSize(PolygonFont *this)

{
  return *(undefined4 *)(this + 0x78);
}


/* EA::Text::PolygonFont::GetKerning(unsigned short, unsigned short, EA::Text::Kerning&, int, bool)
    */

undefined8
EA::Text::PolygonFont::GetKerning
          (ushort param_1,ushort param_2,Kerning *param_3,int param_4,bool param_5)

{
  *(undefined4 *)(ulong)(uint)param_4 = 0;
  ((undefined4 *)(ulong)(uint)param_4)[1] = 0;
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::PolygonFont::Open(void const*, unsigned int) */

void __thiscall EA::Text::PolygonFont::Open(PolygonFont *this,void *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ICoreAllocator *pIVar3;
  MemoryStream aMStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           eastl::
           hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                            *)(this + 0x160));
  pIVar3 = (ICoreAllocator *)FUN_05368590(*puVar2);
  IO::MemoryStream::MemoryStream(aMStack_60,param_1,(ulong)param_2,true,false,pIVar3,(char *)0x0);
  uVar1 = (**(code **)(*(long *)this + 200))(this,aMStack_60);
  IO::MemoryStream::~MemoryStream(aMStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::PolygonFont::Close() */

void __thiscall EA::Text::PolygonFont::Close(PolygonFont *this)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  AutoFutex aAStack_30 [8];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_30,(Futex *)(this + 0x1e0));
  if (this[0x34] == (PolygonFont)0x0) {
    puVar3 = (undefined8 *)
             eastl::
             hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                              *)(this + 0x160));
    plVar4 = (long *)FUN_05368590(*puVar3);
    FUN_05368acc((hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
                  *)local_28,*(undefined8 *)(this + 0x168));
    while( true ) {
      FUN_05368b18(local_18,*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
      uVar1 = local_28[0];
      cVar2 = FUN_053685b0(local_28[0],local_18[0]);
      if (cVar2 == '\0') break;
      lVar5 = FUN_053685bc(uVar1);
      PolygonGlyph::~PolygonGlyph(*(PolygonGlyph **)(lVar5 + 8));
      (**(code **)(*plVar4 + 0x20))(plVar4,*(undefined8 *)(lVar5 + 8),8);
      eastl::
      hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
      ::operator++((hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
                    *)local_28);
    }
  }
  Thread::AutoFutex::~AutoFutex(aAStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::PolygonFont::GetGlyphMetrics(unsigned short, EA::Text::GlyphMetrics&) */

void __thiscall
EA::Text::PolygonFont::GetGlyphMetrics(PolygonFont *this,ushort param_1,GlyphMetrics *param_2)

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
  FUN_05368d10((hashtable_iterator *)local_18,*(undefined8 *)(this + 0x128),
               *(undefined8 *)(this + 0x130),local_32);
  eastl::
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::hashtable_iterator
            ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
              *)local_28,(hashtable_iterator *)local_18);
  FUN_05368ce8((hashtable_iterator *)local_18,*(undefined8 *)(this + 0x128),
               *(undefined8 *)(this + 0x130));
  cVar2 = FUN_053685c0(local_28[0],local_18[0]);
  if (cVar2 != '\0') {
    lVar3 = FUN_053685cc(local_28[0]);
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
/* EA::Text::PolygonFont::GetGlyphIds(char16_t const*, unsigned int, unsigned short*, bool, unsigned
   int, bool) */

void __thiscall
EA::Text::PolygonFont::GetGlyphIds
          (PolygonFont *this,wchar16 *param_1,uint param_2,ushort *param_3,bool param_4,uint param_5
          ,bool param_6)

{
  wchar16 *pwVar1;
  PolygonFont *pPVar2;
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
    goto LAB_05369100;
  }
  pPVar2 = this + 0x1a0;
  if (param_6) {
    if (param_3 == (ushort *)0x0) {
      pwVar11 = param_1;
      if (param_4) {
        do {
          eastl::
          rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
          ::find((wchar16 *)pPVar2);
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
          ::find((wchar16 *)pPVar2);
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
          ::find((wchar16 *)pPVar2);
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
            ::find((wchar16 *)pPVar2);
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
            if (pwVar1 <= pwVar3) goto LAB_053690f0;
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
        ::find((wchar16 *)pPVar2);
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
LAB_053693d8:
          iVar9 = iVar9 + 1;
        }
        else {
          cVar5 = IsCharZeroWidth(*param_1);
          if (cVar5 != '\0') {
            *puVar8 = 0xfffe;
            goto LAB_053693d8;
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 < pwVar1);
      goto LAB_05369100;
    }
    pwVar11 = param_1;
    do {
      eastl::
      rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
      ::find((wchar16 *)pPVar2);
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
        ::find((wchar16 *)pPVar2);
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
LAB_05368fe0:
          iVar9 = iVar9 + 1;
          puVar8 = (ushort *)((long)puVar8 + (ulong)param_5);
        }
        else {
          cVar5 = IsCharZeroWidth(*param_1);
          if (cVar5 != '\0') {
            *puVar8 = 0xfffe;
            goto LAB_05368fe0;
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 < pwVar1);
      goto LAB_05369100;
    }
    pwVar11 = param_1;
    do {
      eastl::
      rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
      ::find((wchar16 *)pPVar2);
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
LAB_053690f0:
  iVar9 = (int)(~(ulong)param_1 + (long)pwVar1 >> 1) + 1;
LAB_05369100:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::PolygonFont::GetGlyphIds(char const*, unsigned int, unsigned short*, bool, unsigned
   int, bool) */

void __thiscall
EA::Text::PolygonFont::GetGlyphIds
          (PolygonFont *this,char *param_1,uint param_2,ushort *param_3,bool param_4,uint param_5,
          bool param_6)

{
  byte *pbVar1;
  PolygonFont *pPVar2;
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
    goto LAB_0536964c;
  }
  pPVar2 = this + 0x1a0;
  pbVar9 = (byte *)param_1;
  if (param_6) {
    if (param_3 == (ushort *)0x0) {
      if (param_4) {
        do {
          local_1a = (ushort)*pbVar9;
          eastl::
          rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
          ::find((wchar16 *)pPVar2);
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
          ::find((wchar16 *)pPVar2);
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
          ::find((wchar16 *)pPVar2);
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
            ::find((wchar16 *)pPVar2);
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
            if (pbVar9 == pbVar1) goto LAB_05369648;
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
        ::find((wchar16 *)pPVar2);
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
LAB_053699e0:
          iVar7 = iVar7 + 1;
        }
        else {
          cVar4 = IsCharZeroWidth((ushort)(byte)*param_1);
          if (cVar4 != '\0') {
            *puVar10 = 0xfffe;
            goto LAB_053699e0;
          }
        }
        param_1 = param_1 + 1;
      } while ((byte *)param_1 != pbVar1);
      goto LAB_0536964c;
    }
    do {
      local_1a = (ushort)*pbVar9;
      eastl::
      rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
      ::find((wchar16 *)pPVar2);
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
        ::find((wchar16 *)pPVar2);
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
LAB_05369524:
          iVar7 = iVar7 + 1;
          puVar10 = (ushort *)((long)puVar10 + (ulong)param_5);
        }
        else {
          cVar4 = IsCharZeroWidth((ushort)(byte)*param_1);
          if (cVar4 != '\0') {
            *puVar10 = 0xfffe;
            goto LAB_05369524;
          }
        }
        param_1 = param_1 + 1;
      } while ((byte *)param_1 != pbVar1);
      goto LAB_0536964c;
    }
    do {
      local_1a = (ushort)*pbVar9;
      eastl::
      rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
      ::find((wchar16 *)pPVar2);
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
LAB_05369648:
  iVar7 = (int)pbVar9 - (int)param_1;
LAB_0536964c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::PolygonFont::IsCharSupported(char16_t, EA::Text::Script) */

void __thiscall EA::Text::PolygonFont::IsCharSupported(PolygonFont *this,ushort param_1,int param_3)

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
      ::find((wchar16 *)(this + 0x1a0));
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
/* EA::Text::PolygonFont::SetUserGlyphInfo(unsigned short, void*) */

void __thiscall
EA::Text::PolygonFont::SetUserGlyphInfo(PolygonFont *this,ushort param_1,void *param_2)

{
  char cVar1;
  long lVar2;
  ushort local_32;
  AutoFutex aAStack_30 [8];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_32 = param_1;
  Thread::AutoFutex::AutoFutex(aAStack_30,(Futex *)(this + 0x1e0));
  FUN_05369b00(local_28,*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170),&local_32);
  FUN_05368b18(local_18,*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
  cVar1 = FUN_053685b0(local_28[0],local_18[0]);
  if (cVar1 != '\0') {
    lVar2 = FUN_053685d0(local_28[0]);
    *(void **)(lVar2 + 8) = param_2;
  }
  Thread::AutoFutex::~AutoFutex(aAStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::PolygonFont::RenderGlyphBitmap(EA::Text::Font::GlyphBitmap const**, unsigned short,
   unsigned int, float, float) */

void EA::Text::PolygonFont::RenderGlyphBitmap
               (GlyphBitmap **param_1,ushort param_2,uint param_3,float param_4,float param_5)

{
  char cVar1;
  long lVar2;
  undefined2 local_32;
  AutoFutex aAStack_30 [8];
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  long local_8;
  
  local_32 = (undefined2)param_3;
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_30,(Futex *)(param_1 + 0x3c));
  FUN_05369b00((hashtable_iterator *)local_18,param_1[0x2d],param_1[0x2e],&local_32);
  eastl::
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::hashtable_iterator
            ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
              *)local_28,(hashtable_iterator *)local_18);
  FUN_05368b18((hashtable_iterator *)local_18,param_1[0x2d],param_1[0x2e]);
  cVar1 = FUN_053685b0(local_28[0],local_18[0]);
  if (cVar1 != '\0') {
    lVar2 = FUN_053685d4(local_28[0]);
    (**(code **)(*param_1 + 0x70))(param_1,local_32,param_1 + 0x1f);
    *(undefined4 *)(param_1 + 0x23) = 0;
    param_1[0x22] = (GlyphBitmap *)(lVar2 + 8);
    *(int *)(param_1 + 0x1e) = (int)*(float *)(param_1 + 0x1f);
    *(int *)((long)param_1 + 0xf4) = (int)*(float *)((long)param_1 + 0xfc);
    *(GlyphBitmap ***)(ulong)param_2 = param_1 + 0x1e;
  }
  Thread::AutoFutex::~AutoFutex(aAStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::PolygonFont::PolygonFont(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::PolygonFont::PolygonFont(PolygonFont *this,ICoreAllocator *param_1)

{
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Font::Font((Font *)this,param_1);
  this[0x34] = (PolygonFont)0x0;
  *(undefined ***)this = &PTR__PolygonFont_06a36a10;
  FontDescription::FontDescription((FontDescription *)(this + 0x38));
  FontMetrics::FontMetrics((FontMetrics *)(this + 0xac));
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
            (aCStack_18,"EAText/PolygonFont/GlyphMetricsMap",*(ICoreAllocator **)(this + 8));
  eastl::
  hash_map<unsigned_short,EA::Text::GlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
  ::hash_map((CoreAllocatorAdapter *)(this + 0x120));
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/PolygonFont/GlyphMetricsMap",*(ICoreAllocator **)(this + 8));
  eastl::
  hash_map<unsigned_short,EA::Text::PolygonGlyphPtr,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
  ::hash_map((CoreAllocatorAdapter *)(this + 0x160));
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/PolygonFont/GlyphMetricsMap",*(ICoreAllocator **)(this + 8));
  eastl::
  map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::map((map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
         *)(this + 0x1a0),(CoreAllocatorAdapter *)aCStack_18);
  Thread::Futex::Futex((Futex *)(this + 0x1e0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::PolygonFont::~PolygonFont() */

void __thiscall EA::Text::PolygonFont::~PolygonFont(PolygonFont *this)

{
  *(undefined ***)this = &PTR__PolygonFont_06a36a10;
  Close(this);
  Thread::Futex::~Futex((Futex *)(this + 0x1e0));
  eastl::
  map<char16_t,unsigned_short,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::~map((map<char16_t,unsigned_short,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *)(this + 0x1a0));
  eastl::
  hash_map<unsigned_short,EA::Text::PolygonGlyphPtr,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
  ::~hash_map((hash_map<unsigned_short,EA::Text::PolygonGlyphPtr,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
               *)(this + 0x160));
  eastl::
  hash_map<unsigned_short,EA::Text::GlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
  ::~hash_map((hash_map<unsigned_short,EA::Text::GlyphMetrics,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
               *)(this + 0x120));
  nop();
  return;
}


/* EA::Text::PolygonFont::~PolygonFont() */

void __thiscall EA::Text::PolygonFont::~PolygonFont(PolygonFont *this)

{
  ~PolygonFont(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::PolygonFont::Open(EA::IO::IStream*) */

void __thiscall EA::Text::PolygonFont::Open(PolygonFont *this,IStream *param_1)

{
  void *pvVar1;
  void *pvVar2;
  double dVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  char *pcVar16;
  undefined2 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  PolygonGlyph *this_00;
  undefined4 *puVar23;
  undefined8 uVar24;
  void *pvVar25;
  char *pcVar26;
  void *pvVar27;
  undefined4 uVar28;
  ushort local_1076;
  uint local_1074;
  uint local_1070 [2];
  AutoFutex aAStack_1068 [8];
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined4 local_1050 [2];
  undefined4 local_1048;
  undefined4 uStack_1044;
  undefined8 local_1030;
  undefined8 local_1028;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_1068,(Futex *)(this + 0x1e0));
  uVar10 = (**(code **)(*(long *)param_1 + 0x50))(param_1,0);
  FontFileLineReader::FontFileLineReader((FontFileLineReader *)&local_1030);
LAB_0536b58c:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              while( true ) {
                                while( true ) {
                                  while( true ) {
                                    while( true ) {
                                      while( true ) {
                                        while( true ) {
                                          while( true ) {
                                            while( true ) {
                                              do {
                                                uVar13 = FontFileLineReader::ReadLine
                                                                   ((FontFileLineReader *)
                                                                    &local_1030,param_1);
                                                uVar5 = local_1028;
                                                uVar24 = local_1030;
                                                if (0xfffffffffffffffd < uVar13) {
                                                  uVar24 = 0;
                                                  cVar6 = FUN_05368594(*(undefined8 *)(this + 0x1c8)
                                                                      );
                                                  if ((cVar6 == '\0') &&
                                                     (cVar6 = FUN_053685a0(*(undefined8 *)
                                                                            (this + 0x138)),
                                                     cVar6 == '\0')) {
                                                    Font::SetupSupportedScriptSet((Font *)this);
                                                    FUN_05368c9c((
                                                  pair<unsigned_short_const,EA::Text::GlyphMetrics>
                                                  *)&local_1048,*(undefined8 *)(this + 0x128));
                                                  puVar17 = (undefined2 *)
                                                            FUN_053685ac(CONCAT44(uStack_1044,
                                                                                  local_1048));
                                                  *(undefined2 *)(this + 0x20) = *puVar17;
                                                  local_1070[0] = CONCAT22(local_1070[0]._2_2_,0x5f)
                                                  ;
                                                  (**(code **)(*(long *)this + 0x78))
                                                            (this,local_1070,1,this + 0x20,0,2,0);
                                                  local_1050[0] = 0;
                                                  local_1060 = 0;
                                                  uStack_1058 = 0;
                                                  eastl::
                                                  pair<unsigned_short_const,EA::Text::GlyphMetrics>
                                                  ::pair((
                                                  pair<unsigned_short_const,EA::Text::GlyphMetrics>
                                                  *)&local_1048,(ushort *)&DAT_05766534,
                                                  (GlyphMetrics *)&local_1060);
                                                  uVar24 = 1;
                                                  eastl::
                                                  hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                                                  ::insert((pair *)(this + 0x120));
                                                  }
                                                  (**(code **)(*(long *)param_1 + 0x58))
                                                            (param_1,uVar10,0);
                                                  FontFileLineReader::~FontFileLineReader
                                                            ((FontFileLineReader *)&local_1030);
                                                  Thread::AutoFutex::~AutoFutex(aAStack_1068);
                                                  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
                                                    __stack_chk_fail(uVar24);
                                                  }
                                                  return;
                                                }
                                                uVar11 = FUN_05368a50(local_1030,local_1028);
                                                uVar12 = FUN_0536857c(uVar24,uVar5);
                                              } while (uVar12 <= uVar11);
                                              puVar14 = (undefined1 *)FUN_05368584(uVar24,uVar11);
                                              *puVar14 = 0;
                                              uVar12 = eastl::
                                                  basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
                                                  ::find_first_not_of((
                                                  basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
                                                  *)&local_1030," \t",uVar11 + 1);
                                              uVar24 = local_1030;
                                              pcVar15 = (char *)FUN_0536858c(local_1030);
                                              uVar11 = FUN_0536857c(uVar24,local_1028);
                                              if (uVar12 < uVar11) {
                                                uVar11 = uVar12;
                                              }
                                              pcVar26 = pcVar15 + uVar11;
                                              iVar9 = StdC::Stricmp(pcVar15,"Family");
                                              if (iVar9 != 0) break;
                                              StdC::Strlcpy((wchar16 *)(this + 0x38),pcVar26,0x20,
                                                            0xffffffffffffffff);
                                            }
                                            pcVar16 = (char *)FUN_0536858c(local_1030);
                                            iVar9 = StdC::Stricmp(pcVar16,"Size");
                                            if (iVar9 != 0) break;
                                            dVar3 = (double)StdC::Atof(pcVar26);
                                            *(float *)(this + 0x78) = (float)dVar3;
                                          }
                                          pcVar16 = (char *)FUN_0536858c(local_1030);
                                          iVar9 = StdC::Stricmp(pcVar16,"Style");
                                          if (iVar9 != 0) break;
                                          lVar18 = StdC::Stristr(pcVar26,"italic");
                                          if (lVar18 == 0) {
                                            lVar18 = StdC::Stristr(pcVar26,"oblique");
                                            if (lVar18 == 0) {
                                              *(undefined4 *)(this + 0x7c) = 0;
                                            }
                                            else {
                                              *(undefined4 *)(this + 0x7c) = 1;
                                            }
                                          }
                                          else {
                                            *(undefined4 *)(this + 0x7c) = 2;
                                          }
                                        }
                                        pcVar16 = (char *)FUN_0536858c(local_1030);
                                        iVar9 = StdC::Stricmp(pcVar16,"Weight");
                                        if (iVar9 != 0) break;
                                        dVar3 = (double)StdC::Atof(pcVar26);
                                        *(float *)(this + 0x80) = (float)dVar3;
                                      }
                                      pcVar16 = (char *)FUN_0536858c(local_1030);
                                      iVar9 = StdC::Stricmp(pcVar16,"Stretch");
                                      if (iVar9 != 0) break;
                                      dVar3 = (double)StdC::Atof(pcVar26);
                                      *(float *)(this + 0x84) = (float)dVar3;
                                    }
                                    pcVar16 = (char *)FUN_0536858c(local_1030);
                                    iVar9 = StdC::Stricmp(pcVar16,"Smooth");
                                    if (iVar9 != 0) break;
                                    lVar18 = StdC::Stristr(pcVar26,"Yes");
                                    if (lVar18 == 0) {
                                      *(undefined4 *)(this + 0x90) = 0;
                                    }
                                    else {
                                      *(undefined4 *)(this + 0x90) = 1;
                                    }
                                  }
                                  pcVar16 = (char *)FUN_0536858c(local_1030);
                                  iVar9 = StdC::Stricmp(pcVar16,"Variant");
                                  if (iVar9 != 0) break;
                                  lVar18 = StdC::Stristr(pcVar26,"SmallCaps");
                                  if (lVar18 == 0) {
                                    *(undefined4 *)(this + 0x8c) = 0;
                                  }
                                  else {
                                    *(undefined4 *)(this + 0x8c) = 1;
                                  }
                                }
                                pcVar16 = (char *)FUN_0536858c(local_1030);
                                iVar9 = StdC::Stricmp(pcVar16,"FixedPitch");
                                if (iVar9 != 0) break;
                                lVar18 = StdC::Stristr(pcVar26,"Enabled");
                                if (lVar18 == 0) {
                                  *(undefined4 *)(this + 0xb0) = 1;
                                  *(undefined4 *)(this + 0x88) = 1;
                                }
                                else {
                                  *(undefined4 *)(this + 0xb0) = 0;
                                  *(undefined4 *)(this + 0x88) = 0;
                                }
                              }
                              pcVar16 = (char *)FUN_0536858c(local_1030);
                              iVar9 = StdC::Stricmp(pcVar16,"HAdvanceXMax");
                              if (iVar9 != 0) break;
                              dVar3 = (double)StdC::Atof(pcVar26);
                              *(float *)(this + 0xb4) = (float)dVar3;
                            }
                            pcVar16 = (char *)FUN_0536858c(local_1030);
                            iVar9 = StdC::Stricmp(pcVar16,"VAdvanceYMax");
                            if (iVar9 != 0) break;
                            dVar3 = (double)StdC::Atof(pcVar26);
                            *(float *)(this + 0xb8) = (float)dVar3;
                          }
                          pcVar16 = (char *)FUN_0536858c(local_1030);
                          iVar9 = StdC::Stricmp(pcVar16,"Ascent");
                          if (iVar9 != 0) break;
                          dVar3 = (double)StdC::Atof(pcVar26);
                          *(float *)(this + 0xbc) = (float)dVar3;
                        }
                        pcVar16 = (char *)FUN_0536858c(local_1030);
                        iVar9 = StdC::Stricmp(pcVar16,"Descent");
                        if (iVar9 != 0) break;
                        dVar3 = (double)StdC::Atof(pcVar26);
                        *(float *)(this + 0xc0) = (float)dVar3;
                      }
                      pcVar16 = (char *)FUN_0536858c(local_1030);
                      iVar9 = StdC::Stricmp(pcVar16,"Leading");
                      if (iVar9 != 0) break;
                      dVar3 = (double)StdC::Atof(pcVar26);
                      *(float *)(this + 0xc4) = (float)dVar3;
                    }
                    pcVar16 = (char *)FUN_0536858c(local_1030);
                    iVar9 = StdC::Stricmp(pcVar16,"Baseline");
                    if (iVar9 != 0) break;
                    dVar3 = (double)StdC::Atof(pcVar26);
                    *(float *)(this + 200) = (float)dVar3;
                  }
                  pcVar16 = (char *)FUN_0536858c(local_1030);
                  iVar9 = StdC::Stricmp(pcVar16,"LineHeight");
                  if (iVar9 != 0) break;
                  dVar3 = (double)StdC::Atof(pcVar26);
                  *(float *)(this + 0xcc) = (float)dVar3;
                }
                pcVar16 = (char *)FUN_0536858c(local_1030);
                iVar9 = StdC::Stricmp(pcVar16,"XHeight");
                if (iVar9 != 0) break;
                dVar3 = (double)StdC::Atof(pcVar26);
                *(float *)(this + 0xd0) = (float)dVar3;
              }
              pcVar16 = (char *)FUN_0536858c(local_1030);
              iVar9 = StdC::Stricmp(pcVar16,"CapsHeight");
              if (iVar9 != 0) break;
              dVar3 = (double)StdC::Atof(pcVar26);
              *(float *)(this + 0xd4) = (float)dVar3;
            }
            pcVar16 = (char *)FUN_0536858c(local_1030);
            iVar9 = StdC::Stricmp(pcVar16,"UnderlinePosition");
            if (iVar9 != 0) break;
            dVar3 = (double)StdC::Atof(pcVar26);
            *(float *)(this + 0xd8) = (float)dVar3;
          }
          pcVar16 = (char *)FUN_0536858c(local_1030);
          iVar9 = StdC::Stricmp(pcVar16,"UnderlineThickness");
          if (iVar9 != 0) break;
          dVar3 = (double)StdC::Atof(pcVar26);
          *(float *)(this + 0xdc) = (float)dVar3;
        }
        pcVar16 = (char *)FUN_0536858c(local_1030);
        iVar9 = StdC::Stricmp(pcVar16,"StrikethroughPosition");
        if (iVar9 != 0) break;
        dVar3 = (double)StdC::Atof(pcVar26);
        *(float *)(this + 0xe0) = (float)dVar3;
      }
      pcVar16 = (char *)FUN_0536858c(local_1030);
      iVar9 = StdC::Stricmp(pcVar16,"StrikethroughThickness");
      if (iVar9 != 0) break;
      dVar3 = (double)StdC::Atof(pcVar26);
      *(float *)(this + 0xe4) = (float)dVar3;
    }
    pcVar16 = (char *)FUN_0536858c(local_1030);
    iVar9 = StdC::Stricmp(pcVar16,"GlyphMetricsMap");
    if (iVar9 == 0) {
      cVar6 = pcVar15[uVar11];
      while (cVar6 != ' ') {
        pcVar26 = pcVar26 + 1;
        cVar6 = *pcVar26;
      }
LAB_0536bb90:
      StdC::Sscanf(pcVar26,"%u %f %f %f %f %f",local_1070,(GlyphMetrics *)&local_1060,
                   (long)&local_1060 + 4,&uStack_1058,(long)&uStack_1058 + 4,local_1050);
      local_1074 = CONCAT22(local_1074._2_2_,(short)local_1070[0]);
      eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>::pair
                ((pair<unsigned_short_const,EA::Text::GlyphMetrics> *)&local_1048,
                 (ushort *)&local_1074,(GlyphMetrics *)&local_1060);
      eastl::
      hashtable<unsigned_short,eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>>,eastl::equal_to<unsigned_short>,eastl::hash<unsigned_int>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
      ::insert((pair *)(this + 0x120));
      lVar18 = StdC::Strchr(pcVar26,0x2c);
      uVar24 = local_1030;
      pcVar26 = (char *)(lVar18 + 1);
      if (lVar18 != 0) break;
      goto LAB_0536bc28;
    }
    pcVar16 = (char *)FUN_0536858c(local_1030);
    iVar9 = StdC::Stricmp(pcVar16,"CharMapSet");
    if (iVar9 == 0) {
      cVar6 = pcVar15[uVar11];
      while (cVar6 != ' ') {
        pcVar26 = pcVar26 + 1;
        cVar6 = *pcVar26;
      }
LAB_0536bcc0:
      StdC::Sscanf(pcVar26,"%u %u",(GlyphMetrics *)&local_1060,&local_1048);
      local_1074 = CONCAT22(local_1074._2_2_,(short)local_1048);
      local_1076 = (ushort)local_1060;
      eastl::pair<unsigned_short,unsigned_short>::pair
                ((pair<unsigned_short,unsigned_short> *)local_1070,&local_1076,(ushort *)&local_1074
                );
      eastl::
      rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
      ::insert((pair *)(this + 0x1a0));
      lVar18 = StdC::Strchr(pcVar26,0x2c);
      uVar24 = local_1030;
      pcVar26 = (char *)(lVar18 + 1);
      if (lVar18 != 0) goto code_r0x0536bd34;
      goto LAB_0536bd58;
    }
    pcVar15 = (char *)FUN_0536858c(local_1030);
    lVar18 = StdC::Stristr(pcVar15,"Glyph");
    lVar19 = FUN_0536858c(local_1030);
    if ((lVar18 == lVar19) && (this[0x34] == (PolygonFont)0x0)) {
      puVar20 = (undefined8 *)
                eastl::
                hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                                 *)(this + 0x160));
      plVar21 = (long *)FUN_05368590(*puVar20);
      uVar7 = StdC::AtoU32((char *)(lVar18 + 5));
      StdC::Sscanf(pcVar26,"%u %u %u %u",&local_1074,local_1070,(GlyphMetrics *)&local_1060,
                   &local_1048);
      local_1076 = uVar7;
      plVar22 = (long *)eastl::
                        hash_map<unsigned_short,EA::Text::PolygonGlyphPtr,eastl::hash<unsigned_int>,eastl::equal_to<unsigned_short>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
                        ::operator[]((ushort *)(this + 0x160));
      lVar18 = (**(code **)(*plVar21 + 0x10))(plVar21,0x58,"PolygonGlyph",0);
      *plVar22 = lVar18;
      if (lVar18 != 0) {
        this_00 = (PolygonGlyph *)FUN_0536853c();
        if (this_00 != (PolygonGlyph *)0x0) {
          PolygonGlyph::PolygonGlyph(this_00);
        }
        *plVar22 = (long)this_00;
        if (local_1074 != 0) {
          eastl::
          vector<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          ::resize((vector<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    *)(this_00 + 8),(ulong)local_1074);
          eastl::
          vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          ::resize((vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    *)(this_00 + 0x30),(ulong)local_1070[0]);
          lVar18 = StdC::Strchr(pcVar26,0x2c);
          uVar4 = local_1074;
          pvVar27 = (void *)(lVar18 + 1);
          if (local_1074 != 0) {
            uVar24 = *(undefined8 *)(this_00 + 8);
            lVar18 = 0;
            pvVar25 = pvVar27;
            do {
              lVar19 = lVar18 + 1;
              pvVar1 = (void *)((long)pvVar25 + 0x14);
              puVar23 = (undefined4 *)FUN_02fd47e8(uVar24,lVar18);
              uVar28 = PolygonFontInternal::ReadFromBigEndianFloat(pvVar25);
              *puVar23 = uVar28;
              uVar28 = PolygonFontInternal::ReadFromBigEndianFloat((void *)((long)pvVar25 + 4));
              puVar23[1] = uVar28;
              uVar28 = PolygonFontInternal::ReadFromBigEndianFloat((void *)((long)pvVar25 + 8));
              puVar23[2] = uVar28;
              uVar28 = PolygonFontInternal::ReadFromBigEndianFloat((void *)((long)pvVar25 + 0xc));
              pvVar2 = (void *)((long)pvVar25 + 0x10);
              pvVar25 = (void *)((long)pvVar25 + 0x18);
              puVar23[3] = uVar28;
              uVar28 = PolygonFontInternal::ReadFromBigEndianFloat(pvVar2);
              puVar23[4] = uVar28;
              uVar28 = PolygonFontInternal::ReadFromBigEndianFloat(pvVar1);
              puVar23[5] = uVar28;
              lVar18 = lVar19;
            } while ((uint)lVar19 < uVar4);
            pvVar27 = (void *)((long)pvVar27 + ((ulong)(uVar4 - 1) + 1) * 0x18);
          }
          if (local_1070[0] != 0) {
            uVar11 = (ulong)local_1070[0];
            uVar24 = *(undefined8 *)(this_00 + 0x30);
            uVar13 = 0;
            do {
              uVar12 = uVar13 + 1;
              puVar17 = (undefined2 *)FUN_02fd47f4(uVar24,uVar13);
              uVar8 = PolygonFontInternal::ReadFromBigEndianUint16(pvVar27);
              *puVar17 = uVar8;
              uVar13 = uVar12;
              pvVar27 = (void *)((long)pvVar27 + 2);
            } while (uVar12 != uVar11);
          }
        }
      }
    }
  } while( true );
  lVar18 = FUN_05368570(local_1030);
  lVar19 = FUN_0536857c(uVar24,local_1028);
  if ((char *)(lVar18 + lVar19) <= pcVar26) {
LAB_0536bc28:
    pcVar15 = (char *)FUN_05368584(uVar24,uVar13 - 1);
    if (*pcVar15 == ',') {
      uVar13 = FontFileLineReader::ReadLine((FontFileLineReader *)&local_1030,param_1);
      pcVar26 = (char *)FUN_0536858c(local_1030);
      goto LAB_0536bb90;
    }
    goto LAB_0536b58c;
  }
  goto LAB_0536bb90;
code_r0x0536bd34:
  lVar18 = FUN_05368570(local_1030);
  lVar19 = FUN_0536857c(uVar24,local_1028);
  if ((char *)(lVar18 + lVar19) <= pcVar26) {
LAB_0536bd58:
    pcVar15 = (char *)FUN_05368584(uVar24,uVar13 - 1);
    if (*pcVar15 == ',') {
      uVar13 = FontFileLineReader::ReadLine((FontFileLineReader *)&local_1030,param_1);
      pcVar26 = (char *)FUN_0536858c(local_1030);
      goto LAB_0536bcc0;
    }
    goto LAB_0536b58c;
  }
  goto LAB_0536bcc0;
}


/* EA::Text::PolygonFont::SetAllocator(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::PolygonFont::SetAllocator(PolygonFont *this,ICoreAllocator *param_1)

{
  undefined8 uVar1;
  
  eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> *)this,param_1);
  uVar1 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                           *)(this + 0x120));
  FUN_05368574(uVar1,param_1);
  uVar1 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                           *)(this + 0x160));
  FUN_05368574(uVar1,param_1);
  uVar1 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                           *)(this + 0x1a0));
  FUN_05368574(uVar1,param_1);
  return;
}

