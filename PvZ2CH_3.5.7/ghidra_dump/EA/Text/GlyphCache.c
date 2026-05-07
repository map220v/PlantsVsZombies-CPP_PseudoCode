// Class: EA::Text::GlyphCache


/* EA::Text::GlyphCache::IsUpdating(EA::Text::TextureInfo*) const */

bool __thiscall EA::Text::GlyphCache::IsUpdating(GlyphCache *this,TextureInfo *param_1)

{
  if (param_1 != (TextureInfo *)0x0) {
    return *(long *)(param_1 + 0x70) != 0;
  }
  return false;
}


/* EA::Text::GlyphCache::GetOption(int) const */

uint __thiscall EA::Text::GlyphCache::GetOption(GlyphCache *this,int param_1)

{
  uint uVar1;
  
  if (param_1 == 3) {
    return (uint)(byte)this[0x115];
  }
  if (param_1 < 4) {
    if (param_1 == 1) {
      return *(uint *)(this + 0x88);
    }
    if (1 < param_1) {
      return (uint)(byte)this[0x114];
    }
    if (param_1 == 0) {
      return *(uint *)(this + 0x84);
    }
  }
  else {
    if (param_1 == 5) {
      return *(uint *)(this + 0x80);
    }
    if (param_1 < 5) {
      return *(uint *)(this + 0x118);
    }
    if (param_1 == 6) {
      return (int)(*(float *)(this + 0x8c) * 65536.0);
    }
    if (param_1 == 99) {
      return *(uint *)(this + 0x90);
    }
  }
  uVar1 = 0;
  if (param_1 - 100U < 0x20) {
    uVar1 = *(uint *)(this + (long)(int)(param_1 - 100U) * 4 + 0x94);
  }
  return uVar1;
}


/* EA::Text::GlyphCache::GetGlyphTextureInfo(EA::Text::Font*, unsigned short,
   EA::Text::GlyphTextureInfo&) const */

void EA::Text::GlyphCache::GetGlyphTextureInfo
               (Font *param_1,ushort param_2,GlyphTextureInfo *param_3)

{
  (**(code **)(*(long *)param_1 + 0x40))(0x3f800000,0x3f800000,param_1,param_2);
  return;
}


/* EA::Text::GlyphCache::SetGlyphTextureInfo(EA::Text::Font*, unsigned short,
   EA::Text::GlyphTextureInfo const&) */

void EA::Text::GlyphCache::SetGlyphTextureInfo
               (Font *param_1,ushort param_2,GlyphTextureInfo *param_3)

{
  (**(code **)(*(long *)param_1 + 0x50))(0x3f800000,0x3f800000,param_1,param_2);
  return;
}


/* EA::Text::GlyphCache::AddGlyphTexture(EA::Text::Font*, unsigned short, void const*, unsigned int,
   unsigned int, unsigned int, unsigned int, EA::Text::GlyphTextureInfo&) */

void EA::Text::GlyphCache::AddGlyphTexture
               (Font *param_1,ushort param_2,void *param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,GlyphTextureInfo *param_8)

{
  (**(code **)(*(long *)param_1 + 0x68))
            (0x3f800000,0x3f800000,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* EA::Text::GlyphCache::TryAllocateTextureArea(unsigned int, unsigned int, EA::Text::TextureInfo&,
   unsigned int&, unsigned int&) */

undefined8 __thiscall
EA::Text::GlyphCache::TryAllocateTextureArea
          (GlyphCache *this,uint param_1,uint param_2,TextureInfo *param_3,uint *param_4,
          uint *param_5)

{
  ulong uVar1;
  int iVar2;
  TextureInfo TVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  TextureInfo *pTVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  TVar3 = param_3[0x11c];
  uVar9 = (uint)(byte)TVar3;
  if ((byte)TVar3 == 0) {
    uVar11 = *(uint *)(param_3 + 0x88);
  }
  else {
    uVar11 = *(uint *)(param_3 + 0x88);
    pTVar8 = param_3 + 0x90;
    uVar9 = 0;
    uVar5 = 0;
    do {
      uVar10 = uVar5 & 0xffffffff;
      uVar1 = uVar5 + 1;
      if ((param_1 < (byte)param_3[uVar5 + 0x11d]) && (param_2 < uVar11 - *(int *)pTVar8)) {
        *param_4 = uVar9;
        *param_5 = *(uint *)(param_3 + uVar10 * 4 + 0x90);
        uVar9 = param_2 + *(int *)(this + 0x118) + *(int *)(param_3 + uVar10 * 4 + 0x90);
        if ((uVar9 & 3) == 0) {
          *(uint *)(param_3 + uVar10 * 4 + 0x90) = uVar9;
          return 1;
        }
        *(uint *)(param_3 + uVar10 * 4 + 0x90) = uVar9 + 3 & 0xfffffffc;
        return 1;
      }
      uVar9 = uVar9 + (byte)param_3[uVar5 + 0x11d];
      pTVar8 = pTVar8 + 4;
      uVar5 = uVar1;
    } while (uVar1 != (ulong)((byte)TVar3 - 1) + 1);
  }
  if (((uVar9 < uVar11) && (param_1 <= uVar11 - uVar9)) &&
     (uVar4 = *(uint *)(param_3 + 0x114), param_2 + uVar4 <= uVar11)) {
    uVar7 = *(uint *)(param_3 + 0x110);
    if (param_1 + *(uint *)(param_3 + 0x110) <= uVar11) {
LAB_05414078:
      *param_4 = uVar7;
      *param_5 = *(uint *)(param_3 + 0x114);
      uVar9 = *(int *)(this + 0x118) + *(int *)(param_3 + 0x110) + param_1;
      if ((uVar9 & 3) != 0) {
        uVar9 = uVar9 + 3 & 0xfffffffc;
      }
      *(uint *)(param_3 + 0x110) = uVar9;
      if (*(uint *)(param_3 + 0x118) < param_2) {
        *(uint *)(param_3 + 0x118) = param_2;
      }
      return 1;
    }
    iVar6 = *(int *)(param_3 + 0x118);
    iVar2 = *(int *)(this + 0x118);
    if (uVar11 < uVar9 + param_1) {
      do {
        while( true ) {
          uVar4 = uVar4 + iVar6 + iVar2;
          if ((uVar4 & 3) != 0) break;
          *(uint *)(param_3 + 0x114) = uVar4;
          iVar6 = 0;
          if (uVar11 < uVar4 + param_2) goto LAB_05413fec;
        }
        uVar4 = uVar4 + 3 & 0xfffffffc;
        *(uint *)(param_3 + 0x114) = uVar4;
        iVar6 = 0;
      } while (uVar4 + param_2 <= uVar11);
    }
    else {
      uVar4 = iVar6 + uVar4 + iVar2;
      if ((uVar4 & 3) != 0) {
        uVar4 = uVar4 + 3 & 0xfffffffc;
      }
      *(uint *)(param_3 + 0x114) = uVar4;
      if (uVar4 + param_2 <= uVar11) {
        *(undefined4 *)(param_3 + 0x118) = 0;
        *(uint *)(param_3 + 0x110) = uVar9;
        uVar7 = uVar9;
        goto LAB_05414078;
      }
    }
LAB_05413fec:
    *(undefined4 *)(param_3 + 0x118) = 0;
    *(uint *)(param_3 + 0x110) = uVar9;
  }
  return 0;
}


/* EA::Text::GlyphCache::ClearTextureInternal(EA::Text::TextureInfo*) */

void __thiscall EA::Text::GlyphCache::ClearTextureInternal(GlyphCache *this,TextureInfo *param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xb0))();
  if (*(code **)(*(long *)this + 0xb8) == IsUpdating) {
    cVar2 = IsUpdating(this,param_1);
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0xb8))();
  }
  if (cVar2 != '\0') {
    (**(code **)(*(long *)this + 0xa0))
              (this,*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x88),
               *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x84));
  }
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0xc0))(this,param_1);
  }
  return;
}


/* EA::Text::GlyphCache::GetTextureInfoCount() const */

void __thiscall EA::Text::GlyphCache::GetTextureInfoCount(GlyphCache *this)

{
  FUN_054142b8(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58));
  return;
}


/* EA::Text::GlyphCache::GetTextureInfo(unsigned int) */

undefined8 __thiscall EA::Text::GlyphCache::GetTextureInfo(GlyphCache *this,uint param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x50);
  uVar1 = FUN_054142b8(uVar3,*(undefined8 *)(this + 0x58));
  if (param_1 < uVar1) {
    puVar2 = (undefined8 *)FUN_054142e4(uVar3,param_1);
    return *puVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::WriteTextureArea(EA::Text::TextureInfo*, unsigned int, unsigned int, void
   const*, unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
EA::Text::GlyphCache::WriteTextureArea
          (GlyphCache *this,TextureInfo *param_1,uint param_2,uint param_3,void *param_4,
          uint param_5,uint param_6,uint param_7,uint param_8)

{
  long lVar1;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x120));
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    (**(code **)(*(long *)this + 0xd0))
              (this,lVar1,param_2,param_3,*(undefined8 *)(param_1 + 0x78),
               *(undefined4 *)(param_1 + 0x84),param_4,param_5,param_6,param_7,param_8);
  }
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar1 != 0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::ClearTextureImage(void*, unsigned int, unsigned int, unsigned int) */

void __thiscall
EA::Text::GlyphCache::ClearTextureImage
          (GlyphCache *this,void *param_1,uint param_2,uint param_3,uint param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar5;
  uint uVar6;
  AutoFutex aAStack_20 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  undefined8 *puVar4;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_20,(Futex *)(this + 0x120));
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_18,param_1,(hash_node **)(ulong)param_3);
  if (param_4 == 3) {
    uVar5 = param_2 + 3 >> 2;
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        puVar2 = (undefined8 *)FUN_05414294(ahStack_18);
        puVar3 = puVar2;
        do {
          puVar4 = puVar3 + 2;
          puVar3[1] = 0xffffffff;
          *puVar3 = 0;
          puVar3 = puVar4;
        } while (puVar4 != puVar2 + ((ulong)(uVar5 - 1) + 1) * 2);
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
  }
  else if (param_4 == 8) {
    if (param_2 != 0) {
      uVar5 = 0;
      do {
        uVar5 = uVar5 + 1;
        pvVar1 = (void *)FUN_05414294(ahStack_18);
        memset(pvVar1,0,(ulong)param_2);
      } while (uVar5 != param_2);
    }
  }
  else if ((param_4 - 0x20 < 3) && (param_2 != 0)) {
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      pvVar1 = (void *)FUN_05414294(ahStack_18);
      memset(pvVar1,0,(ulong)param_2 << 2);
    } while (uVar5 != param_2);
  }
  Thread::AutoFutex::~AutoFutex(aAStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::AllocateTextureArea(unsigned int, unsigned int, unsigned int&, unsigned
   int&) */

void __thiscall
EA::Text::GlyphCache::AllocateTextureArea
          (GlyphCache *this,uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x120));
  uVar5 = *(undefined8 *)(this + 0x50);
  lVar2 = FUN_054142b8(uVar5,*(undefined8 *)(this + 0x58));
  if (lVar2 != 0) {
    lVar6 = 0;
    while( true ) {
      plVar3 = (long *)FUN_054142e4(uVar5,lVar6);
      lVar7 = *plVar3;
      if ((*(char *)(lVar7 + 0x13d) != '\0') &&
         (cVar1 = (**(code **)(*(long *)this + 0xe8))(this,param_1,param_2,lVar7,param_3,param_4),
         cVar1 != '\0')) goto LAB_054148e4;
      lVar6 = lVar6 + 1;
      if (lVar6 == lVar2) break;
      uVar5 = *(undefined8 *)(this + 0x50);
    }
  }
  if ((this[0x114] != (GlyphCache)0x0) &&
     (uVar4 = FUN_054142b8(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58)),
     uVar4 < *(uint *)(this + 0x80))) {
    if ((this[0x11c] == (GlyphCache)0x0) &&
       (lVar2 = (**(code **)(*(long *)this + 0x90))(this,0,0), lVar2 != 0)) {
      this[0x11c] = (GlyphCache)((char)this[0x11c] + '\x01');
      lVar7 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2,param_3,param_4);
      this[0x11c] = (GlyphCache)((char)this[0x11c] + -1);
      goto LAB_054148e4;
    }
  }
  lVar7 = 0;
LAB_054148e4:
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar7);
}


/* EA::Text::GlyphCache::SetAllocator(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::GlyphCache::SetAllocator(GlyphCache *this,ICoreAllocator *param_1)

{
  undefined8 uVar1;
  
  *(ICoreAllocator **)(this + 8) = param_1;
  uVar1 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
                           *)(this + 0x10));
  FUN_054142b0(uVar1,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::SetOption(int, int) */

void __thiscall EA::Text::GlyphCache::SetOption(GlyphCache *this,int param_1,int param_2)

{
  int *piVar1;
  int local_14 [2];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = param_2;
  if (param_1 == 3) {
    this[0x115] = (GlyphCache)(param_2 != 0);
    goto LAB_05414adc;
  }
  if (param_1 < 4) {
    if (param_1 == 1) {
      *(int *)(this + 0x88) = param_2;
      goto LAB_05414adc;
    }
    if (1 < param_1) {
      this[0x114] = (GlyphCache)(param_2 != 0);
      goto LAB_05414adc;
    }
    if (param_1 == 0) {
      *(int *)(this + 0x84) = param_2;
      goto LAB_05414adc;
    }
  }
  else {
    if (param_1 == 6) {
      *(float *)(this + 0x8c) = (float)param_2 * 1.5258789e-05;
      goto LAB_05414adc;
    }
    if (param_1 < 7) {
      if (param_1 == 4) {
        local_c = 0;
        piVar1 = eastl::max_alt<int>(&local_c,local_14);
        *(int *)(this + 0x118) = *piVar1;
        goto LAB_05414adc;
      }
    }
    else {
      if (param_1 == 7) {
        this[0x116] = (GlyphCache)(param_2 != 0);
        goto LAB_05414adc;
      }
      if (param_1 == 99) {
        *(int *)(this + 0x90) = param_2;
        goto LAB_05414adc;
      }
    }
  }
  if (param_1 - 100U < 0x20) {
    *(int *)(this + (long)(int)(param_1 - 100U) * 4 + 0x94) = param_2;
  }
LAB_05414adc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::WriteTextureArea(void*, unsigned int, unsigned int, unsigned int, unsigned
   int, void const*, unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
EA::Text::GlyphCache::WriteTextureArea
          (GlyphCache *this,void *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          void *param_6,uint param_7,uint param_8,uint param_9,uint param_10)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  void *pvVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint6 uVar16;
  uint6 uVar17;
  void *__dest;
  int iVar18;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  byte *pbVar29;
  undefined8 *puVar30;
  uint *puVar31;
  undefined8 *puVar32;
  byte *pbVar33;
  char *pcVar34;
  uint *puVar35;
  hash_node **pphVar36;
  uint *puVar37;
  short *psVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  long lVar41;
  long lVar42;
  undefined4 uVar43;
  long lVar44;
  ulong uVar45;
  uint uVar46;
  undefined8 *puVar47;
  long lVar48;
  ulong uVar49;
  ulong uVar50;
  undefined8 *puVar51;
  uint *puVar52;
  ulong uVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  uint local_28;
  uint local_24;
  AutoFutex aAStack_20 [8];
  undefined8 local_18 [2];
  long local_8;
  
  pphVar36 = (hash_node **)(ulong)param_4;
  uVar53 = (ulong)param_2;
  local_8 = ___stack_chk_guard;
  uVar50 = (ulong)param_7;
  uVar49 = (ulong)param_9;
  Thread::AutoFutex::AutoFutex(aAStack_20,(Futex *)(this + 0x120));
  if (param_5 == 3) {
    if (param_10 - 0x20 < 2) {
      eastl::
      hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
      ::hashtable_iterator_base
                ((hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
                  *)local_18,param_1,pphVar36);
      TextureIterator::Offset((TextureIterator *)local_18,param_2 << 2,param_3 >> 2);
      if (param_8 != 0) {
        uVar10 = param_9 >> 2;
        uVar27 = 0;
        uVar46 = uVar27;
        do {
          pbVar23 = (byte *)FUN_0541428c(local_18[0]);
          local_28 = param_8 - uVar46;
          local_24 = 4;
          puVar24 = eastl::min_alt<unsigned_int>(&local_28,&local_24);
          uVar26 = *puVar24;
          if (param_7 != 0) {
            uVar49 = 0;
            pbVar29 = pbVar23 + ((ulong)(uVar26 - 1) + 1) * 2;
            do {
              puVar24 = (uint *)((long)param_6 + (uVar27 + uVar49) * 4);
              if (uVar26 != 0) {
                puVar31 = puVar24;
                pbVar33 = pbVar23;
                if (param_10 == 0x20) {
                  do {
                    pbVar2 = pbVar33 + 2;
                    *pbVar33 = *(byte *)((long)puVar31 + 7) & 0xf0 | (byte)(*puVar31 >> 0x1c);
                    pbVar33[1] = *(byte *)((long)puVar31 + 0xf) & 0xf0 | (byte)(puVar31[2] >> 0x1c);
                    puVar31 = puVar31 + uVar10;
                    pbVar33 = pbVar2;
                  } while (pbVar2 != pbVar29);
                }
                else {
                  do {
                    pbVar2 = pbVar33 + 2;
                    *pbVar33 = (byte)(*puVar31 >> 4) & 0xf | (byte)puVar31[1] & 0xf0;
                    pbVar33[1] = (byte)(puVar31[2] >> 4) & 0xf | (byte)puVar31[3] & 0xf0;
                    pbVar33 = pbVar2;
                    puVar31 = puVar31 + uVar10;
                  } while (pbVar2 != pbVar29);
                }
              }
              uVar1 = (int)uVar49 + 4;
              uVar49 = (ulong)uVar1;
              pbVar29 = pbVar29 + 0x10;
              EATextSquish::Compress((uchar *)puVar24,pbVar23,param_9,param_8 * param_9);
              pbVar23 = pbVar23 + 0x10;
            } while (uVar1 < param_7);
          }
          uVar46 = uVar46 + 4;
          uVar27 = uVar27 + uVar10 * 4;
          TextureIterator::operator++((TextureIterator *)local_18);
        } while (uVar46 < param_8);
      }
    }
    else {
      uVar10 = param_7 >> 2;
      uVar27 = param_7 & 3;
      eastl::
      hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
      ::hashtable_iterator_base
                ((hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
                  *)local_18,param_1,pphVar36);
      uVar46 = param_3 + param_8;
      TextureIterator::Offset((TextureIterator *)local_18,param_2 << 2,param_3 >> 2);
      if ((int)param_3 < (int)uVar46) {
        lVar41 = (ulong)(uVar10 - 1) + 1;
        pbVar23 = (byte *)((long)param_6 + lVar41 * 4);
        lVar42 = FUN_05414290(local_18[0]);
        psVar19 = (short *)(lVar42 + (ulong)(param_3 & 3) * 2);
        if (param_10 == 1) goto LAB_05414fdc;
LAB_05414f04:
        pbVar29 = param_6;
        psVar38 = psVar19;
        if (uVar10 != 0) {
          do {
            pbVar33 = pbVar29 + 4;
            *psVar38 = (pbVar29[1] & 0xf0) + (ushort)(*pbVar29 >> 4) + (pbVar29[3] & 0xf0) * 0x100 +
                       (pbVar29[2] & 0xf0) * 0x10;
            pbVar29 = pbVar33;
            psVar38 = psVar38 + 8;
          } while (pbVar33 != pbVar23);
          psVar19 = psVar19 + lVar41 * 8;
          pbVar29 = pbVar23;
        }
        if (uVar27 == 0) goto LAB_05414fa4;
        iVar18 = (int)(uint)pbVar29[(int)(uVar27 - 1)] >> 4;
        if ((uVar27 - 2 != -1) &&
           (iVar18 = ((int)(uint)pbVar29[(int)(uVar27 - 2)] >> 4) +
                     ((int)(uint)pbVar29[(int)(uVar27 - 1)] >> 4) * 0x10, uVar27 - 3 != -1)) {
          iVar18 = ((int)(uint)pbVar29[(int)(uVar27 - 3)] >> 4) + iVar18 * 0x10;
        }
        do {
          *psVar19 = (short)iVar18;
LAB_05414fa4:
          do {
            param_3 = param_3 + 1;
            if ((param_3 & 3) == 0) {
              TextureIterator::operator++((TextureIterator *)local_18);
            }
            param_6 = (void *)((long)param_6 + uVar49);
            pbVar23 = pbVar23 + uVar49;
            if (uVar46 == param_3) goto LAB_05414c54;
            lVar42 = FUN_05414290(local_18[0]);
            psVar19 = (short *)(lVar42 + (ulong)(param_3 & 3) * 2);
            if (param_10 != 1) goto LAB_05414f04;
LAB_05414fdc:
            iVar18 = 0xf;
            pbVar29 = param_6;
            if (uVar10 == 0) {
              uVar50 = 0x80;
            }
            else {
              psVar38 = psVar19 + lVar41 * 8;
              uVar50 = 0x80;
              psVar20 = psVar19;
              do {
                bVar54 = *pbVar29;
                uVar26 = (uint)uVar50;
                sVar8 = 0xf;
                if ((bVar54 & uVar26) == 0) {
                  sVar8 = 0;
                }
                sVar9 = sVar8 + 0xf0;
                if (((uint)bVar54 & uVar26 >> 1) == 0) {
                  sVar9 = sVar8;
                }
                sVar8 = sVar9 + 0xf00;
                if (((uint)bVar54 & uVar26 >> 2) == 0) {
                  sVar8 = sVar9;
                }
                uVar50 = uVar50 >> 4;
                sVar9 = sVar8 + -0x1000;
                if (((uint)bVar54 & uVar26 >> 3) == 0) {
                  sVar9 = sVar8;
                }
                if ((int)uVar50 == 0) {
                  pbVar29 = pbVar29 + 1;
                  uVar50 = 0x80;
                }
                psVar21 = psVar20 + 8;
                *psVar20 = sVar9;
                psVar20 = psVar21;
                psVar19 = psVar38;
              } while (psVar21 != psVar38);
            }
          } while (uVar27 == 0);
          bVar54 = *pbVar29;
          if (((uint)bVar54 & (uint)uVar50) == 0) {
            iVar18 = 0;
          }
          if (uVar27 != 1) {
            iVar11 = iVar18;
            if (((uint)bVar54 & (uint)(uVar50 >> 1)) != 0) {
              iVar11 = iVar18 + 0xf0;
            }
            iVar18 = iVar11;
            if ((uVar27 == 3) && (iVar18 = iVar11 + 0xf00, ((uint)uVar50 >> 2 & (uint)bVar54) == 0))
            {
              iVar18 = iVar11;
            }
          }
        } while( true );
      }
    }
  }
  else if (param_5 - 0x20 < 3) {
    if (param_10 == 8) {
      puVar6 = (undefined8 *)((long)param_6 + (ulong)(param_8 * param_9));
      puVar30 = (undefined8 *)((long)param_1 + (uVar53 + (param_4 * param_3 >> 2)) * 4);
      if (param_6 < puVar6) {
        puVar22 = (undefined8 *)((long)param_6 + uVar50);
        lVar42 = -(long)param_6;
        lVar41 = (long)param_6 + 1;
        puVar51 = (undefined8 *)((long)puVar30 + uVar50 * 4);
        if ((param_5 & 0xfffffffd) == 0x20) goto LAB_05415458;
        do {
          if (param_6 < puVar22) {
            uVar50 = (long)puVar22 + (1 - lVar41);
            if ((uVar50 < 0x10) || (puVar30 < puVar22 && param_6 < puVar51)) {
              lVar44 = 0;
              do {
                *(uint *)((long)puVar30 + lVar44 * 4) = *(byte *)((long)param_6 + lVar44) - 0x100;
                lVar44 = lVar44 + 1;
              } while (lVar44 != (long)puVar22 + lVar42);
            }
            else {
              uVar53 = ((ulong)((long)puVar22 + (-0xf - lVar41)) >> 4) + 1;
              uVar28 = 0;
              lVar44 = uVar53 * 0x10;
              puVar32 = puVar30;
              puVar47 = param_6;
              do {
                uVar59 = puVar47[1];
                uVar58 = *puVar47;
                uVar28 = uVar28 + 1;
                bVar54 = (byte)((ulong)uVar58 >> 8);
                bVar56 = (byte)((ulong)uVar58 >> 0x28);
                bVar55 = (byte)((ulong)uVar59 >> 8);
                bVar57 = (byte)((ulong)uVar59 >> 0x28);
                iVar14 = bVar54 - 0x100;
                iVar15 = (byte)((ulong)uVar58 >> 0x18) - 0x100;
                iVar18 = bVar56 - 0x100;
                iVar11 = (byte)((ulong)uVar58 >> 0x38) - 0x100;
                iVar12 = bVar55 - 0x100;
                iVar13 = (byte)((ulong)uVar59 >> 0x18) - 0x100;
                puVar32[1] = CONCAT17((char)((uint)iVar15 >> 0x18),
                                      CONCAT16((char)((uint)iVar15 >> 0x10),
                                               CONCAT15((char)((uint)iVar15 >> 8),
                                                        CONCAT14((char)iVar15,
                                                                 (byte)((ulong)uVar58 >> 0x10) -
                                                                 0x100))));
                *puVar32 = CONCAT17((char)((uint)iVar14 >> 0x18),
                                    CONCAT16((char)((uint)iVar14 >> 0x10),
                                             CONCAT15((char)((uint)iVar14 >> 8),
                                                      CONCAT14((char)iVar14,
                                                               (CONCAT12(bVar54,(ushort)(byte)uVar58
                                                                        ) & 0xffff) - 0x100))));
                puVar32[3] = CONCAT17((char)((uint)iVar11 >> 0x18),
                                      CONCAT16((char)((uint)iVar11 >> 0x10),
                                               CONCAT15((char)((uint)iVar11 >> 8),
                                                        CONCAT14((char)iVar11,
                                                                 (byte)((ulong)uVar58 >> 0x30) -
                                                                 0x100))));
                puVar32[2] = CONCAT17((char)((uint)iVar18 >> 0x18),
                                      CONCAT16((char)((uint)iVar18 >> 0x10),
                                               CONCAT15((char)((uint)iVar18 >> 8),
                                                        CONCAT14((char)iVar18,
                                                                 (CONCAT12(bVar56,(ushort)(byte)((
                                                  ulong)uVar58 >> 0x20)) & 0xffff) - 0x100))));
                puVar32[5] = CONCAT17((char)((uint)iVar13 >> 0x18),
                                      CONCAT16((char)((uint)iVar13 >> 0x10),
                                               CONCAT15((char)((uint)iVar13 >> 8),
                                                        CONCAT14((char)iVar13,
                                                                 (byte)((ulong)uVar59 >> 0x10) -
                                                                 0x100))));
                puVar32[4] = CONCAT17((char)((uint)iVar12 >> 0x18),
                                      CONCAT16((char)((uint)iVar12 >> 0x10),
                                               CONCAT15((char)((uint)iVar12 >> 8),
                                                        CONCAT14((char)iVar12,
                                                                 ((CONCAT12(bVar55,(short)uVar59) &
                                                                  0xff00ff) & 0xffff) - 0x100))));
                puVar32[7] = CONCAT44((byte)((ulong)uVar59 >> 0x38) - 0x100,
                                      (byte)((ulong)uVar59 >> 0x30) - 0x100);
                puVar32[6] = CONCAT44(bVar57 - 0x100,
                                      (CONCAT12(bVar57,(ushort)(byte)((ulong)uVar59 >> 0x20)) &
                                      0xffff) - 0x100);
                puVar32 = puVar32 + 8;
                puVar47 = puVar47 + 2;
              } while (uVar28 < uVar53);
              lVar48 = uVar53 * 0x40;
              if ((((((lVar44 - uVar50 != 0) &&
                     (*(uint *)(puVar30 + uVar53 * 8) =
                           *(byte *)((long)param_6 + uVar53 * 2 * 8) - 0x100,
                     (undefined8 *)((long)param_6 + lVar44 + 1) < puVar22)) &&
                    (*(uint *)((long)puVar30 + lVar48 + 4) =
                          *(byte *)((long)param_6 + lVar44 + 1) - 0x100,
                    (undefined8 *)((long)param_6 + lVar44 + 2) < puVar22)) &&
                   ((*(uint *)(puVar30 + uVar53 * 8 + 1) =
                          *(byte *)((long)param_6 + lVar44 + 2) - 0x100,
                    (undefined8 *)((long)param_6 + lVar44 + 3) < puVar22 &&
                    (*(uint *)((long)puVar30 + lVar48 + 0xc) =
                          *(byte *)((long)param_6 + lVar44 + 3) - 0x100,
                    (undefined8 *)((long)param_6 + lVar44 + 4) < puVar22)))) &&
                  ((*(uint *)(puVar30 + uVar53 * 8 + 2) =
                         *(byte *)((long)param_6 + lVar44 + 4) - 0x100,
                   (undefined8 *)((long)param_6 + lVar44 + 5) < puVar22 &&
                   ((*(uint *)((long)puVar30 + lVar48 + 0x14) =
                          *(byte *)((long)param_6 + lVar44 + 5) - 0x100,
                    (undefined8 *)((long)param_6 + lVar44 + 6) < puVar22 &&
                    (*(uint *)(puVar30 + uVar53 * 8 + 3) =
                          *(byte *)((long)param_6 + lVar44 + 6) - 0x100,
                    (undefined8 *)((long)param_6 + lVar44 + 7) < puVar22)))))) &&
                 ((*(uint *)((long)puVar30 + lVar48 + 0x1c) =
                        *(byte *)((long)param_6 + lVar44 + 7) - 0x100,
                  (undefined8 *)((long)param_6 + (uVar53 * 2 + 1) * 8) < puVar22 &&
                  ((((*(uint *)(puVar30 + uVar53 * 8 + 4) =
                           *(byte *)((long)param_6 + (uVar53 * 2 + 1) * 8) - 0x100,
                     (undefined8 *)((long)param_6 + lVar44 + 9) < puVar22 &&
                     (*(uint *)((long)puVar30 + lVar48 + 0x24) =
                           *(byte *)((long)param_6 + lVar44 + 9) - 0x100,
                     (undefined8 *)((long)param_6 + lVar44 + 10) < puVar22)) &&
                    (*(uint *)(puVar30 + uVar53 * 8 + 5) =
                          *(byte *)((long)param_6 + lVar44 + 10) - 0x100,
                    (undefined8 *)((long)param_6 + lVar44 + 0xb) < puVar22)) &&
                   (((*(uint *)((long)puVar30 + lVar48 + 0x2c) =
                           *(byte *)((long)param_6 + lVar44 + 0xb) - 0x100,
                     (undefined8 *)((long)param_6 + lVar44 + 0xc) < puVar22 &&
                     (*(uint *)(puVar30 + uVar53 * 8 + 6) =
                           *(byte *)((long)param_6 + lVar44 + 0xc) - 0x100,
                     (undefined8 *)((long)param_6 + lVar44 + 0xd) < puVar22)) &&
                    (*(uint *)((long)puVar30 + lVar48 + 0x34) =
                          *(byte *)((long)param_6 + lVar44 + 0xd) - 0x100,
                    (undefined8 *)((long)param_6 + lVar44 + 0xe) < puVar22)))))))) {
                *(uint *)(puVar30 + uVar53 * 8 + 7) =
                     *(byte *)((long)param_6 + lVar44 + 0xe) - 0x100;
              }
            }
          }
          while( true ) {
            param_6 = (void *)((long)param_6 + uVar49);
            puVar30 = (undefined8 *)((long)puVar30 + (long)pphVar36);
            puVar22 = (undefined8 *)((long)puVar22 + uVar49);
            lVar42 = lVar42 - uVar49;
            lVar41 = lVar41 + uVar49;
            puVar51 = (undefined8 *)((long)puVar51 + (long)pphVar36);
            if (puVar6 <= param_6) goto LAB_05414c54;
            if ((param_5 & 0xfffffffd) != 0x20) break;
LAB_05415458:
            if (param_6 < puVar22) {
              uVar50 = (long)puVar22 + (1 - lVar41);
              if ((uVar50 < 0x10) || (puVar30 < puVar22 && param_6 < puVar51)) {
                lVar44 = 0;
                do {
                  *(uint *)((long)puVar30 + lVar44 * 4) =
                       (uint)*(byte *)((long)param_6 + lVar44) * 0x1000000 + 0xffffff;
                  lVar44 = lVar44 + 1;
                } while (lVar44 != (long)puVar22 + lVar42);
              }
              else {
                uVar53 = ((ulong)((long)puVar22 + (-0xf - lVar41)) >> 4) + 1;
                uVar28 = 0;
                uVar45 = uVar53 * 0x10;
                puVar32 = puVar30;
                puVar47 = param_6;
                do {
                  uVar59 = puVar47[1];
                  uVar58 = *puVar47;
                  uVar28 = uVar28 + 1;
                  bVar54 = (byte)((ulong)uVar59 >> 8);
                  bVar55 = (byte)((ulong)uVar59 >> 0x28);
                  iVar14 = (uint)(byte)((ulong)uVar58 >> 8) * 0x1000000 + 0xffffff;
                  iVar15 = (uint)(byte)((ulong)uVar58 >> 0x18) * 0x1000000 + 0xffffff;
                  iVar18 = (uint)(byte)((ulong)uVar58 >> 0x28) * 0x1000000 + 0xffffff;
                  iVar11 = (uint)(byte)((ulong)uVar58 >> 0x38) * 0x1000000 + 0xffffff;
                  iVar12 = (uint)bVar54 * 0x1000000 + 0xffffff;
                  iVar13 = (uint)(byte)((ulong)uVar59 >> 0x18) * 0x1000000 + 0xffffff;
                  puVar32[1] = CONCAT17((char)((uint)iVar15 >> 0x18),
                                        CONCAT16((char)((uint)iVar15 >> 0x10),
                                                 CONCAT15((char)((uint)iVar15 >> 8),
                                                          CONCAT14((char)iVar15,
                                                                   (uint)(byte)((ulong)uVar58 >>
                                                                               0x10) * 0x1000000 +
                                                                   0xffffff))));
                  *puVar32 = CONCAT17((char)((uint)iVar14 >> 0x18),
                                      CONCAT16((char)((uint)iVar14 >> 0x10),
                                               CONCAT15((char)((uint)iVar14 >> 8),
                                                        CONCAT14((char)iVar14,
                                                                 (uint)(byte)uVar58 * 0x1000000 +
                                                                 0xffffff))));
                  puVar32[3] = CONCAT17((char)((uint)iVar11 >> 0x18),
                                        CONCAT16((char)((uint)iVar11 >> 0x10),
                                                 CONCAT15((char)((uint)iVar11 >> 8),
                                                          CONCAT14((char)iVar11,
                                                                   (uint)(byte)((ulong)uVar58 >>
                                                                               0x30) * 0x1000000 +
                                                                   0xffffff))));
                  puVar32[2] = CONCAT17((char)((uint)iVar18 >> 0x18),
                                        CONCAT16((char)((uint)iVar18 >> 0x10),
                                                 CONCAT15((char)((uint)iVar18 >> 8),
                                                          CONCAT14((char)iVar18,
                                                                   (uint)(byte)((ulong)uVar58 >>
                                                                               0x20) * 0x1000000 +
                                                                   0xffffff))));
                  puVar32[5] = CONCAT17((char)((uint)iVar13 >> 0x18),
                                        CONCAT16((char)((uint)iVar13 >> 0x10),
                                                 CONCAT15((char)((uint)iVar13 >> 8),
                                                          CONCAT14((char)iVar13,
                                                                   (uint)(byte)((ulong)uVar59 >>
                                                                               0x10) * 0x1000000 +
                                                                   0xffffff))));
                  puVar32[4] = CONCAT17((char)((uint)iVar12 >> 0x18),
                                        CONCAT16((char)((uint)iVar12 >> 0x10),
                                                 CONCAT15((char)((uint)iVar12 >> 8),
                                                          CONCAT14((char)iVar12,
                                                                   (uint)(CONCAT12(bVar54,(short)
                                                  uVar59) & 0xff00ff) * 0x1000000 + 0xffffff))));
                  puVar32[7] = CONCAT44((uint)(byte)((ulong)uVar59 >> 0x38) * 0x1000000 + 0xffffff,
                                        (uint)(byte)((ulong)uVar59 >> 0x30) * 0x1000000 + 0xffffff);
                  puVar32[6] = CONCAT44((uint)bVar55 * 0x1000000 + 0xffffff,
                                        (uint)CONCAT12(bVar55,(ushort)(byte)((ulong)uVar59 >> 0x20))
                                        * 0x1000000 + 0xffffff);
                  puVar32 = puVar32 + 8;
                  puVar47 = puVar47 + 2;
                } while (uVar28 < uVar53);
                lVar44 = uVar53 * 0x40;
                if (((((uVar50 != uVar45) &&
                      (*(uint *)(puVar30 + uVar53 * 8) =
                            (uint)*(byte *)((long)param_6 + uVar53 * 2 * 8) * 0x1000000 + 0xffffff,
                      (undefined8 *)((long)param_6 + uVar45 + 1) < puVar22)) &&
                     (*(uint *)((long)puVar30 + lVar44 + 4) =
                           (uint)*(byte *)((long)param_6 + uVar45 + 1) * 0x1000000 + 0xffffff,
                     (undefined8 *)((long)param_6 + uVar45 + 2) < puVar22)) &&
                    (((*(uint *)(puVar30 + uVar53 * 8 + 1) =
                            (uint)*(byte *)((long)param_6 + uVar45 + 2) * 0x1000000 + 0xffffff,
                      (undefined8 *)((long)param_6 + uVar45 + 3) < puVar22 &&
                      (*(uint *)((long)puVar30 + lVar44 + 0xc) =
                            (uint)*(byte *)((long)param_6 + uVar45 + 3) * 0x1000000 + 0xffffff,
                      (undefined8 *)((long)param_6 + uVar45 + 4) < puVar22)) &&
                     ((((*(uint *)(puVar30 + uVar53 * 8 + 2) =
                              (uint)*(byte *)((long)param_6 + uVar45 + 4) * 0x1000000 + 0xffffff,
                        (undefined8 *)((long)param_6 + uVar45 + 5) < puVar22 &&
                        ((*(uint *)((long)puVar30 + lVar44 + 0x14) =
                               (uint)*(byte *)((long)param_6 + uVar45 + 5) * 0x1000000 + 0xffffff,
                         (undefined8 *)((long)param_6 + uVar45 + 6) < puVar22 &&
                         (*(uint *)(puVar30 + uVar53 * 8 + 3) =
                               (uint)*(byte *)((long)param_6 + uVar45 + 6) * 0x1000000 + 0xffffff,
                         (undefined8 *)((long)param_6 + uVar45 + 7) < puVar22)))) &&
                       (*(uint *)((long)puVar30 + lVar44 + 0x1c) =
                             (uint)*(byte *)((long)param_6 + uVar45 + 7) * 0x1000000 + 0xffffff,
                       (undefined8 *)((long)param_6 + (uVar53 * 2 + 1) * 8) < puVar22)) &&
                      ((((*(uint *)(puVar30 + uVar53 * 8 + 4) =
                               (uint)*(byte *)((long)param_6 + (uVar53 * 2 + 1) * 8) * 0x1000000 +
                               0xffffff, (undefined8 *)((long)param_6 + uVar45 + 9) < puVar22 &&
                         (*(uint *)((long)puVar30 + lVar44 + 0x24) =
                               (uint)*(byte *)((long)param_6 + uVar45 + 9) * 0x1000000 + 0xffffff,
                         (undefined8 *)((long)param_6 + uVar45 + 10) < puVar22)) &&
                        (*(uint *)(puVar30 + uVar53 * 8 + 5) =
                              (uint)*(byte *)((long)param_6 + uVar45 + 10) * 0x1000000 + 0xffffff,
                        (undefined8 *)((long)param_6 + uVar45 + 0xb) < puVar22)) &&
                       ((*(uint *)((long)puVar30 + lVar44 + 0x2c) =
                              (uint)*(byte *)((long)param_6 + uVar45 + 0xb) * 0x1000000 + 0xffffff,
                        (undefined8 *)((long)param_6 + uVar45 + 0xc) < puVar22 &&
                        (*(uint *)(puVar30 + uVar53 * 8 + 6) =
                              (uint)*(byte *)((long)param_6 + uVar45 + 0xc) * 0x1000000 + 0xffffff,
                        (undefined8 *)((long)param_6 + uVar45 + 0xd) < puVar22)))))))))) &&
                   (*(uint *)((long)puVar30 + lVar44 + 0x34) =
                         (uint)*(byte *)((long)param_6 + uVar45 + 0xd) * 0x1000000 + 0xffffff,
                   (undefined8 *)((long)param_6 + uVar45 + 0xe) < puVar22)) {
                  *(uint *)(puVar30 + uVar53 * 8 + 7) =
                       (uint)*(byte *)((long)param_6 + uVar45 + 0xe) * 0x1000000 + 0xffffff;
                }
              }
            }
          }
        } while( true );
      }
    }
    else if (param_10 == 1) {
      pbVar23 = (byte *)((long)param_6 + (ulong)(param_8 * param_9));
      puVar3 = (undefined4 *)((long)param_1 + (uVar53 + (param_4 * param_3 >> 2)) * 4);
      for (; param_6 < pbVar23; param_6 = (void *)((long)param_6 + uVar49)) {
        if (puVar3 < puVar3 + uVar50) {
          uVar53 = 0x80;
          pbVar29 = param_6;
          puVar39 = puVar3;
          do {
            uVar28 = uVar53 >> 1;
            uVar46 = (uint)uVar28;
            uVar43 = 0xffffff;
            if (((uint)*pbVar29 & (uint)uVar53) != 0) {
              uVar43 = 0xffffffff;
            }
            puVar40 = puVar39 + 1;
            *puVar39 = uVar43;
            if (uVar28 == 0) {
              uVar46 = 0x80;
            }
            uVar53 = (ulong)uVar46;
            pbVar33 = pbVar29 + 1;
            if (uVar28 != 0) {
              pbVar33 = pbVar29;
            }
            pbVar29 = pbVar33;
            puVar39 = puVar40;
          } while (puVar40 < puVar3 + uVar50);
        }
        puVar3 = (undefined4 *)((long)puVar3 + (long)pphVar36);
      }
    }
    else if (param_10 == 0x20) {
      puVar24 = (uint *)((long)param_6 + ((ulong)(param_8 * param_9) & 0xfffffffc));
      puVar31 = (uint *)((long)param_1 + (uVar53 + (param_4 * param_3 >> 2)) * 4);
      if (param_5 == 0x20) {
        if (param_6 < puVar24) {
          do {
            puVar52 = (uint *)((long)param_6 + (uVar49 & 0xfffffffc));
            memcpy(puVar31,param_6,uVar50 << 2);
            puVar31 = (uint *)((long)puVar31 + ((ulong)pphVar36 & 0xfffffffc));
            param_6 = puVar52;
          } while (puVar52 < puVar24);
        }
      }
      else if (param_5 == 0x22) {
        if (param_6 < puVar24) {
          uVar49 = uVar49 & 0xfffffffc;
          lVar41 = (long)param_6 + 4;
          puVar52 = (uint *)((long)param_6 + uVar50 * 4);
          do {
            if (param_6 < puVar52) {
              uVar28 = (long)puVar52 + (3 - lVar41);
              uVar53 = uVar28 >> 2;
              uVar50 = uVar53 + 1;
              puVar25 = param_6;
              puVar35 = puVar31;
              if ((uVar50 < 5) ||
                 (puVar31 < (uint *)((long)param_6 + 0x10) && param_6 < puVar31 + 4)) {
                do {
                  puVar37 = puVar25 + 1;
                  uVar46 = *puVar25;
                  *puVar35 = uVar46 >> 0x10 & 0xff | (uVar46 & 0xff) << 0x10 | uVar46 & 0xff00ff00;
                  puVar25 = puVar37;
                  puVar35 = puVar35 + 1;
                } while (puVar37 < puVar52);
              }
              else {
                uVar53 = (uVar53 - 3 >> 2) + 1;
                puVar25 = puVar31;
                puVar35 = param_6;
                if (0xb < uVar28) {
                  uVar28 = 0;
                  do {
                    uVar59 = *(undefined8 *)(puVar35 + 2);
                    uVar58 = *(undefined8 *)puVar35;
                    uVar28 = uVar28 + 1;
                    *(ulong *)(puVar25 + 2) =
                         CONCAT17((char)((ulong)uVar59 >> 0x38),
                                  CONCAT16((char)((ulong)uVar59 >> 0x20),
                                           CONCAT15((char)((ulong)uVar59 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar59 >> 0x30),
                                                             CONCAT13((char)((ulong)uVar59 >> 0x18),
                                                                      CONCAT12((char)uVar59,
                                                                               CONCAT11((char)((
                                                  ulong)uVar59 >> 8),(char)((ulong)uVar59 >> 0x10)))
                                                  )))));
                    *(ulong *)puVar25 =
                         CONCAT17((char)((ulong)uVar58 >> 0x38),
                                  CONCAT16((char)((ulong)uVar58 >> 0x20),
                                           CONCAT15((char)((ulong)uVar58 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar58 >> 0x30),
                                                             CONCAT13((char)((ulong)uVar58 >> 0x18),
                                                                      CONCAT12((char)uVar58,
                                                                               CONCAT11((char)((
                                                  ulong)uVar58 >> 8),(char)((ulong)uVar58 >> 0x10)))
                                                  )))));
                    puVar25 = puVar25 + 4;
                    puVar35 = puVar35 + 4;
                  } while (uVar28 < uVar53);
                  puVar25 = puVar31 + uVar53 * 4;
                  puVar35 = (uint *)((long)param_6 + uVar53 * 4 * 4);
                  if (uVar50 == uVar53 * 4) goto LAB_05415968;
                }
                uVar46 = *puVar35;
                *puVar25 = uVar46 >> 0x10 & 0xff | (uVar46 & 0xff) << 0x10 | uVar46 & 0xff00ff00;
                if (puVar35 + 1 < puVar52) {
                  uVar46 = puVar35[1];
                  puVar25[1] = uVar46 >> 0x10 & 0xff | (uVar46 & 0xff) << 0x10 | uVar46 & 0xff00ff00
                  ;
                  if (puVar35 + 2 < puVar52) {
                    uVar46 = puVar35[2];
                    puVar25[2] = uVar46 >> 0x10 & 0xff | (uVar46 & 0xff) << 0x10 |
                                 uVar46 & 0xff00ff00;
                  }
                }
              }
            }
LAB_05415968:
            param_6 = (void *)((long)param_6 + uVar49);
            puVar31 = (uint *)((long)puVar31 + ((ulong)pphVar36 & 0xfffffffc));
            puVar52 = (uint *)((long)puVar52 + uVar49);
            lVar41 = lVar41 + uVar49;
          } while (param_6 < puVar24);
        }
      }
      else if (param_6 < puVar24) {
        uVar49 = uVar49 & 0xfffffffc;
        lVar41 = (long)param_6 + 4;
        puVar52 = (uint *)((long)param_6 + uVar50 * 4);
        do {
          if (param_6 < puVar52) {
            uVar28 = (long)puVar52 + (3 - lVar41);
            uVar53 = uVar28 >> 2;
            uVar50 = uVar53 + 1;
            puVar25 = param_6;
            puVar35 = puVar31;
            if ((uVar50 < 4) || (puVar31 < (uint *)((long)param_6 + 0x10) && param_6 < puVar31 + 4))
            {
              do {
                puVar37 = puVar25 + 1;
                uVar46 = *puVar25;
                *puVar35 = (uVar46 & 0xffff00) << 8 | uVar46 >> 0x18 | (uVar46 & 0xff) << 8;
                puVar25 = puVar37;
                puVar35 = puVar35 + 1;
              } while (puVar37 < puVar52);
            }
            else {
              uVar53 = (uVar53 - 3 >> 2) + 1;
              puVar25 = puVar31;
              puVar35 = param_6;
              if (0xb < uVar28) {
                uVar28 = 0;
                do {
                  uVar59 = *(undefined8 *)(puVar35 + 2);
                  uVar58 = *(undefined8 *)puVar35;
                  uVar28 = uVar28 + 1;
                  uVar16 = CONCAT15((char)((ulong)uVar58 >> 0x20),(uint5)(uint)((int)uVar58 << 8)) &
                           0xffff0000ffff;
                  uVar17 = CONCAT15((char)((ulong)uVar59 >> 0x20),(uint5)(uint)((int)uVar59 << 8)) &
                           0xffff0000ffff;
                  *(ulong *)(puVar25 + 2) =
                       CONCAT17((char)((ulong)uVar59 >> 0x30),
                                CONCAT16((char)((ulong)uVar59 >> 0x28),
                                         CONCAT15((char)(uVar17 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar59 >> 0x38),
                                                           CONCAT13((char)((ulong)uVar59 >> 0x10),
                                                                    CONCAT12((char)((ulong)uVar59 >>
                                                                                   8),CONCAT11((char
                                                  )(uVar17 >> 8),(char)((ulong)uVar59 >> 0x18)))))))
                               );
                  *(ulong *)puVar25 =
                       CONCAT17((char)((ulong)uVar58 >> 0x30),
                                CONCAT16((char)((ulong)uVar58 >> 0x28),
                                         CONCAT15((char)(uVar16 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar58 >> 0x38),
                                                           CONCAT13((char)((ulong)uVar58 >> 0x10),
                                                                    CONCAT12((char)((ulong)uVar58 >>
                                                                                   8),CONCAT11((char
                                                  )(uVar16 >> 8),(char)((ulong)uVar58 >> 0x18)))))))
                               );
                  puVar25 = puVar25 + 4;
                  puVar35 = puVar35 + 4;
                } while (uVar28 < uVar53);
                puVar25 = puVar31 + uVar53 * 4;
                puVar35 = (uint *)((long)param_6 + uVar53 * 4 * 4);
                if (uVar50 == uVar53 * 4) goto LAB_05414dd0;
              }
              uVar46 = *puVar35;
              *puVar25 = (uVar46 & 0xffff00) << 8 | uVar46 >> 0x18 | (uVar46 & 0xff) << 8;
              if (puVar35 + 1 < puVar52) {
                uVar46 = puVar35[1];
                puVar25[1] = (uVar46 & 0xffff00) << 8 | uVar46 >> 0x18 | (uVar46 & 0xff) << 8;
                if (puVar35 + 2 < puVar52) {
                  uVar46 = puVar35[2];
                  puVar25[2] = (uVar46 & 0xffff00) << 8 | uVar46 >> 0x18 | (uVar46 & 0xff) << 8;
                }
              }
            }
          }
LAB_05414dd0:
          param_6 = (void *)((long)param_6 + uVar49);
          puVar31 = (uint *)((long)puVar31 + ((ulong)pphVar36 & 0xfffffffc));
          puVar52 = (uint *)((long)puVar52 + uVar49);
          lVar41 = lVar41 + uVar49;
        } while (param_6 < puVar24);
      }
    }
  }
  else if (param_5 == 8) {
    if (param_10 == 8) {
      pvVar7 = (void *)((long)param_6 + (ulong)(param_8 * param_9));
      __dest = (void *)((long)param_1 + (ulong)(param_4 * param_3) + (ulong)param_2);
      for (; param_6 < pvVar7; param_6 = (void *)((long)param_6 + uVar49)) {
        memcpy(__dest,param_6,uVar50);
        __dest = (void *)((long)__dest + (long)pphVar36);
      }
    }
    else if (param_10 == 1) {
      pcVar4 = (char *)((long)param_1 + (ulong)(param_4 * param_3) + (ulong)param_2);
      pbVar23 = (byte *)((long)param_6 + (ulong)(param_8 * param_9));
      for (; param_6 < pbVar23; param_6 = (void *)((long)param_6 + uVar49)) {
        pcVar5 = pcVar4 + uVar50;
        if (pcVar4 < pcVar5) {
          uVar46 = 0x40;
          *pcVar4 = (char)*(byte *)param_6 >> 7;
          pcVar34 = pcVar4;
          pbVar29 = param_6;
          while (pcVar34 = pcVar34 + 1, pcVar34 != pcVar5) {
            while( true ) {
              uVar27 = *pbVar29 & uVar46;
              uVar46 = uVar46 >> 1;
              *pcVar34 = -(uVar27 != 0);
              if (uVar46 != 0) break;
              pcVar34 = pcVar34 + 1;
              pbVar29 = pbVar29 + 1;
              uVar46 = 0x80;
              if (pcVar34 == pcVar5) goto LAB_054151b4;
            }
          }
        }
LAB_054151b4:
        pcVar4 = pcVar4 + (long)pphVar36;
      }
    }
  }
LAB_05414c54:
  Thread::AutoFutex::~AutoFutex(aAStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::GlyphCache::Init(unsigned int, unsigned int) */

int __thiscall EA::Text::GlyphCache::Init(GlyphCache *this,uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0541447c((AtomicInt *)(this + 0x148));
  if ((iVar2 == 0) && (*(uint *)(this + 0x80) = param_1, param_2 != 0)) {
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
      (**(code **)(*(long *)this + 0x90))(this,0,0,0);
    } while (uVar1 != param_2);
  }
  iVar2 = Thread::AtomicInt::operator_cast_to_int((AtomicInt *)(this + 0x148));
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::GetGlyphTextureInfo(EA::Text::Font*, unsigned short, float, float,
   EA::Text::GlyphTextureInfo&) const */

void __thiscall
EA::Text::GlyphCache::GetGlyphTextureInfo
          (GlyphCache *this,Font *param_1,ushort param_2,float param_3,float param_4,
          GlyphTextureInfo *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  AutoFutex aAStack_20 [8];
  GlyphInfo aGStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_20,(Futex *)(this + 0x120));
  GlyphInfo::GlyphInfo(aGStack_18,param_1,param_2,param_3,param_4);
  uVar2 = FUN_05415c28(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20),aGStack_18);
  uVar3 = FUN_05415bd8(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  cVar1 = FUN_05414340(uVar2,uVar3);
  if (cVar1 != '\0') {
    lVar4 = FUN_0541434c(uVar2);
    uVar2 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)param_5 = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(param_5 + 8) = uVar2;
    *(undefined8 *)(param_5 + 0x10) = *(undefined8 *)(lVar4 + 0x20);
  }
  Thread::AutoFutex::~AutoFutex(aAStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* EA::Text::GlyphCache::Shutdown() */

int __thiscall EA::Text::GlyphCache::Shutdown(GlyphCache *this)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  iVar1 = Thread::AtomicInt::operator_cast_to_int((AtomicInt *)(this + 0x148));
  if (iVar1 < 1) {
    return 0;
  }
  iVar1 = Thread::AtomicInt<int>::operator--((AtomicInt<int> *)(this + 0x148));
  if (iVar1 != 0) {
    return iVar1;
  }
  uVar4 = 0;
  eastl::
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  ::clear((hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
           *)(this + 0x10));
  do {
    uVar7 = *(undefined8 *)(this + 0x50);
    uVar3 = FUN_054142b8(uVar7,*(undefined8 *)(this + 0x58));
    uVar5 = uVar4;
    do {
      uVar4 = uVar5 + 1;
      if (uVar3 <= uVar5) {
        FUN_054143d4(uVar7,this + 0x58);
        return 0;
      }
      puVar2 = (undefined8 *)FUN_054142e4(uVar7,uVar5);
      plVar6 = (long *)*puVar2;
      uVar5 = uVar4;
    } while (plVar6 == (long *)0x0);
    (**(code **)(*(long *)this + 0x78))(this,plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  } while( true );
}


/* EA::Text::GlyphCache::~GlyphCache() */

void __thiscall EA::Text::GlyphCache::~GlyphCache(GlyphCache *this)

{
  *(undefined **)this = &DAT_06a37ee0;
  Thread::AtomicInt<int>::operator=((AtomicInt<int> *)(this + 0x148),1);
  Shutdown(this);
  Thread::Futex::~Futex((Futex *)(this + 0x120));
  eastl::fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator>::~fixed_vector
            ((fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator> *)(this + 0x50));
  eastl::
  hash_map<EA::Text::GlyphCache::GlyphInfo,EA::Text::GlyphTextureInfo,EA::Text::GlyphCache::GlyphInfoHash,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
  ::~hash_map((hash_map<EA::Text::GlyphCache::GlyphInfo,EA::Text::GlyphTextureInfo,EA::Text::GlyphCache::GlyphInfoHash,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
               *)(this + 0x10));
  return;
}


/* EA::Text::GlyphCache::~GlyphCache() */

void __thiscall EA::Text::GlyphCache::~GlyphCache(GlyphCache *this)

{
  ~GlyphCache(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::RemoveTextureInfo(EA::Text::Font const*) */

void __thiscall EA::Text::GlyphCache::RemoveTextureInfo(GlyphCache *this,Font *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 local_38 [2];
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ahStack_28 [16];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05415dd0((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                *)local_38,*(undefined8 *)(this + 0x18));
  while( true ) {
    FUN_05415e1c(local_18,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
    uVar1 = local_38[0];
    cVar2 = FUN_05414340(local_38[0],local_18[0]);
    if (cVar2 == '\0') break;
    puVar3 = (undefined8 *)FUN_05414350(uVar1);
    if ((Font *)*puVar3 == param_1) {
      eastl::
      hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
      ::hashtable_iterator(ahStack_28,(hashtable_iterator *)local_38);
      eastl::
      hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
      ::erase(local_18,this + 0x10,ahStack_28);
      local_38[0] = local_18[0];
    }
    else {
      eastl::
      hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
      ::operator++((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                    *)local_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::ClearTexture(EA::Text::TextureInfo*) */

void __thiscall EA::Text::GlyphCache::ClearTexture(GlyphCache *this,TextureInfo *param_1)

{
  int iVar1;
  TextureInfo TVar2;
  TextureInfo TVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  undefined1 auStack_50 [16];
  AutoFutex aAStack_40 [8];
  undefined8 local_38 [2];
  hashtable_iterator ahStack_28 [16];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_40,(Futex *)(this + 0x120));
  (**(code **)(*(long *)this + 0xf0))(this,param_1);
  FUN_05415dd0((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                *)local_38,*(undefined8 *)(this + 0x18));
  while( true ) {
    FUN_05415e1c((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                  *)local_18,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
    uVar16 = local_38[0];
    cVar5 = FUN_05414340(local_38[0],local_18[0]);
    if (cVar5 == '\0') break;
    lVar9 = FUN_0541435c(uVar16);
    if (*(TextureInfo **)(lVar9 + 0x10) == param_1) {
      FUN_054162a0(ahStack_28,
                   (hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                    *)local_38);
      eastl::
      hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
      ::hashtable_iterator
                ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                  *)local_18,ahStack_28);
      eastl::
      hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
      ::erase(auStack_50,this + 0x10,
              (hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
               *)local_18);
    }
    else {
      eastl::
      hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
      ::operator++((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
                    *)local_38);
    }
  }
  TVar2 = param_1[0x11c];
  *(undefined4 *)(param_1 + 0x110) = 0;
  uVar10 = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  if ((byte)TVar2 == 0) goto LAB_0541668c;
  uVar6 = (uint)(byte)TVar2;
  iVar1 = (uVar6 - 0x10 >> 4) + 1;
  uVar4 = iVar1 * 0x10;
  iVar15 = 0;
  if ((byte)TVar2 - 1 < 0xf) {
LAB_054164b0:
    uVar4 = uVar10 + 1;
    TVar3 = param_1[(ulong)uVar10 + 0x11d];
    *(undefined4 *)(param_1 + ((ulong)uVar10 + 0x24) * 4) = 0;
    iVar15 = iVar15 + (uint)(byte)TVar3;
    if (uVar4 < uVar6) {
      uVar8 = uVar10 + 2;
      uVar7 = (uint)(byte)TVar2;
      TVar3 = param_1[(ulong)uVar4 + 0x11d];
      *(undefined4 *)(param_1 + ((ulong)uVar4 + 0x24) * 4) = 0;
      iVar15 = iVar15 + (uint)(byte)TVar3;
      if (uVar8 <= uVar6 && uVar7 != uVar8) {
        uVar4 = uVar10 + 3;
        TVar3 = param_1[(ulong)uVar8 + 0x11d];
        *(undefined4 *)(param_1 + ((ulong)uVar8 + 0x24) * 4) = 0;
        iVar15 = iVar15 + (uint)(byte)TVar3;
        if (uVar4 < uVar7) {
          uVar6 = uVar10 + 4;
          TVar3 = param_1[(ulong)uVar4 + 0x11d];
          *(undefined4 *)(param_1 + ((ulong)uVar4 + 0x24) * 4) = 0;
          iVar15 = iVar15 + (uint)(byte)TVar3;
          if (uVar6 < uVar7) {
            uVar4 = uVar10 + 5;
            TVar3 = param_1[(ulong)uVar6 + 0x11d];
            *(undefined4 *)(param_1 + ((ulong)uVar6 + 0x24) * 4) = 0;
            iVar15 = iVar15 + (uint)(byte)TVar3;
            if (uVar4 < uVar7) {
              uVar6 = uVar10 + 6;
              uVar8 = (uint)(byte)TVar2;
              TVar3 = param_1[(ulong)uVar4 + 0x11d];
              *(undefined4 *)(param_1 + ((ulong)uVar4 + 0x24) * 4) = 0;
              iVar15 = iVar15 + (uint)(byte)TVar3;
              if (uVar6 <= uVar7 && uVar8 != uVar6) {
                uVar4 = uVar10 + 7;
                TVar3 = param_1[(ulong)uVar6 + 0x11d];
                *(undefined4 *)(param_1 + ((ulong)uVar6 + 0x24) * 4) = 0;
                iVar15 = iVar15 + (uint)(byte)TVar3;
                if (uVar4 < uVar8) {
                  uVar6 = uVar10 + 8;
                  TVar3 = param_1[(ulong)uVar4 + 0x11d];
                  *(undefined4 *)(param_1 + ((ulong)uVar4 + 0x24) * 4) = 0;
                  iVar15 = iVar15 + (uint)(byte)TVar3;
                  if (uVar6 < uVar8) {
                    uVar4 = uVar10 + 9;
                    TVar3 = param_1[(ulong)uVar6 + 0x11d];
                    *(undefined4 *)(param_1 + ((ulong)uVar6 + 0x24) * 4) = 0;
                    iVar15 = iVar15 + (uint)(byte)TVar3;
                    if (uVar4 < uVar8) {
                      uVar6 = uVar10 + 10;
                      TVar3 = param_1[(ulong)uVar4 + 0x11d];
                      *(undefined4 *)(param_1 + ((ulong)uVar4 + 0x24) * 4) = 0;
                      iVar15 = iVar15 + (uint)(byte)TVar3;
                      if (uVar6 < uVar8) {
                        uVar4 = uVar10 + 0xb;
                        TVar3 = param_1[(ulong)uVar6 + 0x11d];
                        *(undefined4 *)(param_1 + ((ulong)uVar6 + 0x24) * 4) = 0;
                        iVar15 = iVar15 + (uint)(byte)TVar3;
                        if (uVar4 < uVar8) {
                          uVar6 = uVar10 + 0xc;
                          TVar3 = param_1[(ulong)uVar4 + 0x11d];
                          *(undefined4 *)(param_1 + ((ulong)uVar4 + 0x24) * 4) = 0;
                          iVar15 = iVar15 + (uint)(byte)TVar3;
                          if (uVar6 < uVar8) {
                            uVar4 = uVar10 + 0xd;
                            TVar3 = param_1[(ulong)uVar6 + 0x11d];
                            *(undefined4 *)(param_1 + ((ulong)uVar6 + 0x24) * 4) = 0;
                            iVar15 = iVar15 + (uint)(byte)TVar3;
                            if (uVar4 < uVar8) {
                              uVar10 = uVar10 + 0xe;
                              TVar3 = param_1[(ulong)uVar4 + 0x11d];
                              *(undefined4 *)(param_1 + ((ulong)uVar4 + 0x24) * 4) = 0;
                              iVar15 = iVar15 + (uint)(byte)TVar3;
                              if (uVar10 <= uVar8 && (byte)TVar2 != uVar10) {
                                TVar2 = param_1[(ulong)uVar10 + 0x11d];
                                *(undefined4 *)(param_1 + ((ulong)uVar10 + 0x24) * 4) = 0;
                                iVar15 = iVar15 + (uint)(byte)TVar2;
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
  else {
    uVar19 = *(undefined8 *)(param_1 + 0x125);
    uVar16 = *(undefined8 *)(param_1 + 0x11d);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    bVar11 = (byte)((ulong)uVar16 >> 8);
    bVar13 = (byte)((ulong)uVar16 >> 0x28);
    bVar12 = (byte)((ulong)uVar19 >> 8);
    bVar14 = (byte)((ulong)uVar19 >> 0x28);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    iVar15 = (CONCAT12(bVar14,(ushort)(byte)((ulong)uVar19 >> 0x20)) & 0xffff) +
             ((CONCAT12(bVar12,(short)uVar19) & 0xff00ff) & 0xffff) +
             ((CONCAT12(bVar11,(short)uVar16) & 0xff00ff) & 0xffff) +
             (CONCAT12(bVar13,(ushort)(byte)((ulong)uVar16 >> 0x20)) & 0xffff);
    iVar17 = (uint)bVar14 + (uint)bVar12 + (uint)bVar11 + (uint)bVar13;
    iVar18 = (uint)(byte)((ulong)uVar19 >> 0x30) +
             (uint)(byte)((ulong)uVar19 >> 0x10) +
             (uint)(byte)((ulong)uVar16 >> 0x10) + (uint)(byte)((ulong)uVar16 >> 0x30);
    iVar20 = (uint)(byte)((ulong)uVar19 >> 0x38) +
             (uint)(byte)((ulong)uVar19 >> 0x18) +
             (uint)(byte)((ulong)uVar16 >> 0x18) + (uint)(byte)((ulong)uVar16 >> 0x38);
    if (iVar1 != 1) {
      uVar19 = *(undefined8 *)(param_1 + 0x135);
      uVar16 = *(undefined8 *)(param_1 + 0x12d);
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
      bVar11 = (byte)((ulong)uVar16 >> 8);
      bVar13 = (byte)((ulong)uVar16 >> 0x28);
      bVar12 = (byte)((ulong)uVar19 >> 8);
      bVar14 = (byte)((ulong)uVar19 >> 0x28);
      iVar15 = (CONCAT12(bVar14,(ushort)(byte)((ulong)uVar19 >> 0x20)) & 0xffff) +
               (CONCAT12(bVar12,(ushort)(byte)uVar19) & 0xffff) +
               (CONCAT12(bVar13,(ushort)(byte)((ulong)uVar16 >> 0x20)) & 0xffff) +
               (CONCAT12(bVar11,(ushort)(byte)uVar16) & 0xffff) + iVar15;
      iVar17 = (uint)bVar14 + (uint)bVar12 + (uint)bVar13 + (uint)bVar11 + iVar17;
      iVar18 = (uint)(byte)((ulong)uVar19 >> 0x30) +
               (uint)(byte)((ulong)uVar19 >> 0x10) +
               (uint)(byte)((ulong)uVar16 >> 0x30) + (uint)(byte)((ulong)uVar16 >> 0x10) + iVar18;
      iVar20 = (uint)(byte)((ulong)uVar19 >> 0x38) +
               (uint)(byte)((ulong)uVar19 >> 0x18) +
               (uint)(byte)((ulong)uVar16 >> 0x38) + (uint)(byte)((ulong)uVar16 >> 0x18) + iVar20;
    }
    iVar15 = iVar15 + iVar17 + iVar18 + iVar20;
    uVar10 = uVar4;
    if (uVar6 != uVar4) goto LAB_054164b0;
  }
  *(int *)(param_1 + 0x110) = iVar15;
LAB_0541668c:
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  Thread::AutoFutex::~AutoFutex(aAStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::GlyphCache(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::GlyphCache::GlyphCache(GlyphCache *this,ICoreAllocator *param_1)

{
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined **)this = &DAT_06a37ee0;
  if (param_1 == (ICoreAllocator *)0x0) {
    param_1 = (ICoreAllocator *)GetAllocator();
  }
  *(ICoreAllocator **)(this + 8) = param_1;
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/GlyphTextureMap",param_1);
  eastl::
  hash_map<EA::Text::GlyphCache::GlyphInfo,EA::Text::GlyphTextureInfo,EA::Text::GlyphCache::GlyphInfoHash,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
  ::hash_map((CoreAllocatorAdapter *)(this + 0x10));
  eastl::fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator>::fixed_vector
            ((fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator> *)(this + 0x50));
  *(undefined4 *)(this + 0x80) = 1;
  *(undefined4 *)(this + 0x84) = 0x800;
  *(undefined4 *)(this + 0x90) = 0;
  this[0x114] = (GlyphCache)0x0;
  *(undefined4 *)(this + 0x88) = 3;
  this[0x115] = (GlyphCache)0x0;
  this[0x116] = (GlyphCache)0x1;
  *(undefined4 *)(this + 0x118) = 1;
  this[0x11c] = (GlyphCache)0x0;
  *(undefined4 *)(this + 0x8c) = 0x3f800000;
  Thread::Futex::Futex((Futex *)(this + 0x120));
  Thread::AtomicInt<int>::AtomicInt((AtomicInt<int> *)(this + 0x148),0);
  this[0x114] = (GlyphCache)0x1;
  *(undefined4 *)(this + 0x98) = 8;
  *(undefined4 *)(this + 0xac) = 0x14;
  *(undefined4 *)(this + 0xb0) = 0x14;
  *(undefined4 *)(this + 0x90) = 8;
  *(undefined4 *)(this + 0x94) = 4;
  *(undefined4 *)(this + 0x9c) = 0xc;
  *(undefined4 *)(this + 0xa0) = 0xc;
  *(undefined4 *)(this + 0xa4) = 0x10;
  *(undefined4 *)(this + 0xa8) = 0x10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::GlyphCache(EA::Text::GlyphCache const&) */

void __thiscall EA::Text::GlyphCache::GlyphCache(GlyphCache *this,GlyphCache *param_1)

{
  ICoreAllocator *pIVar1;
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined **)this = &DAT_06a37ee0;
  pIVar1 = (ICoreAllocator *)Allocator::ICoreAllocator::GetDefaultAllocator();
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EASTL hash_map",pIVar1);
  eastl::
  hash_map<EA::Text::GlyphCache::GlyphInfo,EA::Text::GlyphTextureInfo,EA::Text::GlyphCache::GlyphInfoHash,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
  ::hash_map((CoreAllocatorAdapter *)(this + 0x10));
  eastl::fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator>::fixed_vector
            ((fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator> *)(this + 0x50));
  Thread::Futex::Futex((Futex *)(this + 0x120));
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::SetGlyphTextureInfo(EA::Text::Font*, unsigned short, float, float,
   EA::Text::GlyphTextureInfo const&) */

void __thiscall
EA::Text::GlyphCache::SetGlyphTextureInfo
          (GlyphCache *this,Font *param_1,ushort param_2,float param_3,float param_4,
          GlyphTextureInfo *param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  GlyphInfo aGStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GlyphInfo::GlyphInfo(aGStack_18,param_1,param_2,param_3,param_4);
  puVar3 = (undefined8 *)
           eastl::
           hash_map<EA::Text::GlyphCache::GlyphInfo,EA::Text::GlyphTextureInfo,EA::Text::GlyphCache::GlyphInfoHash,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
           ::operator[]((GlyphInfo *)(this + 0x10));
  lVar2 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(param_5 + 8);
  *puVar3 = *(undefined8 *)param_5;
  puVar3[1] = uVar1;
  puVar3[2] = *(undefined8 *)(param_5 + 0x10);
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::AddGlyphTexture(EA::Text::Font*, unsigned short, float, float, void const*,
   unsigned int, unsigned int, unsigned int, unsigned int, EA::Text::GlyphTextureInfo&) */

void __thiscall
EA::Text::GlyphCache::AddGlyphTexture
          (GlyphCache *this,Font *param_1,ushort param_2,float param_3,float param_4,void *param_5,
          uint param_6,uint param_7,uint param_8,uint param_9,GlyphTextureInfo *param_10)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  uint local_28;
  uint local_24;
  AutoFutex aAStack_20 [8];
  GlyphInfo aGStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_20,(Futex *)(this + 0x120));
  lVar2 = (**(code **)(*(long *)this + 0xa8))(this,param_6,param_7,&local_28,&local_24);
  if (lVar2 != 0) {
    if ((*(long *)(lVar2 + 0x70) == 0) &&
       (cVar1 = (**(code **)(*(long *)this + 0xb0))(this,lVar2), cVar1 == '\0')) {
      lVar2 = 0;
    }
    cVar1 = (**(code **)(*(long *)this + 200))
                      (this,lVar2,local_28,local_24,param_5,param_6,param_7,param_8,param_9);
    if (cVar1 != '\0') {
      uVar4 = 1;
      GlyphInfo::GlyphInfo(aGStack_18,param_1,param_2,param_3,param_4);
      plVar3 = (long *)eastl::
                       hash_map<EA::Text::GlyphCache::GlyphInfo,EA::Text::GlyphTextureInfo,EA::Text::GlyphCache::GlyphInfoHash,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,false>
                       ::operator[]((GlyphInfo *)(this + 0x10));
      fVar5 = *(float *)(lVar2 + 0x80);
      *plVar3 = lVar2;
      *(float *)(plVar3 + 1) = (float)local_28 * fVar5;
      *(float *)((long)plVar3 + 0xc) = (float)local_24 * fVar5;
      *(float *)(plVar3 + 2) = (float)(param_6 + local_28) * fVar5;
      lVar2 = plVar3[1];
      *(float *)((long)plVar3 + 0x14) = (float)(param_7 + local_24) * fVar5;
      *(long *)param_10 = *plVar3;
      *(long *)(param_10 + 8) = lVar2;
      *(long *)(param_10 + 0x10) = plVar3[2];
      goto LAB_05416ff4;
    }
  }
  uVar4 = 0;
LAB_05416ff4:
  Thread::AutoFutex::~AutoFutex(aAStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphCache::AddTextureInfo(EA::Text::TextureInfo*, bool, bool) */

void __thiscall
EA::Text::GlyphCache::AddTextureInfo
          (GlyphCache *this,TextureInfo *param_1,bool param_2,bool param_3)

{
  uint uVar1;
  TextureInfo **ppTVar2;
  TextureInfo **ppTVar3;
  ulong uVar4;
  TextureInfo *pTVar5;
  uint uVar6;
  int iVar7;
  TextureInfo *pTVar8;
  GlyphCache *pGVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  TextureInfo *local_18;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x120));
  uVar11 = *(undefined8 *)(this + 0x50);
  ppTVar2 = (TextureInfo **)FUN_05414354(uVar11);
  uVar10 = *(undefined8 *)(this + 0x58);
  ppTVar3 = (TextureInfo **)FUN_05414358(uVar10);
  ppTVar2 = eastl::find<EA::Text::TextureInfo**,EA::Text::TextureInfo*>(ppTVar2,ppTVar3,&local_18);
  pTVar5 = local_18;
  if (ppTVar3 != ppTVar2) goto LAB_05417314;
  if ((!param_3) && (uVar4 = FUN_054142b8(uVar11,uVar10), *(uint *)(this + 0x80) <= uVar4)) {
    pTVar5 = (TextureInfo *)0x0;
    goto LAB_05417314;
  }
  if (local_18 == (TextureInfo *)0x0) {
    pTVar5 = (TextureInfo *)FUN_05414454(*(undefined8 *)(this + 8));
    TextureInfo::TextureInfo(pTVar5);
    local_18 = pTVar5;
    (**(code **)(*(long *)pTVar5 + 0x10))(pTVar5);
    *(undefined8 *)(local_18 + 0x148) = *(undefined8 *)(this + 8);
    param_2 = false;
    if (*(long *)(local_18 + 0x68) == 0) goto LAB_05417374;
    *(float *)(local_18 + 0x80) = 1.0 / (float)*(uint *)(local_18 + 0x88);
LAB_05417410:
    local_18[0x11c] = SUB41(*(undefined4 *)(this + 0x90),0);
    *(undefined4 *)(local_18 + 0x8c) = 1;
    iVar7 = *(int *)(this + 0x90);
    local_18[0x13d] = (TextureInfo)0x1;
    *(undefined4 *)(local_18 + 0x110) = 0;
    *(undefined4 *)(local_18 + 0x114) = 0;
    *(undefined4 *)(local_18 + 0x118) = 0;
    if (iVar7 != 0) {
      iVar7 = 0;
      uVar6 = 0;
      pTVar5 = local_18 + 0x90;
      pTVar8 = local_18 + 0x11d;
      pGVar9 = this + 0x94;
      do {
        uVar1 = *(uint *)pGVar9;
        uVar6 = uVar6 + 1;
        fVar12 = *(float *)(this + 0x8c);
        *pTVar8 = SUB41((int)((float)uVar1 * fVar12),0);
        *(undefined4 *)pTVar5 = 0;
        iVar7 = iVar7 + ((int)((float)uVar1 * fVar12) & 0xffU);
        pTVar5 = pTVar5 + 4;
        pTVar8 = pTVar8 + 1;
        pGVar9 = pGVar9 + 4;
      } while (uVar6 < *(uint *)(this + 0x90));
      *(int *)(local_18 + 0x110) = iVar7;
    }
    (**(code **)(*(long *)this + 0xf0))(this,local_18);
  }
  else {
    (**(code **)(*(long *)local_18 + 0x10))();
    if (*(long *)(local_18 + 0x68) == 0) {
LAB_05417374:
      pTVar5 = local_18;
      if (*(uint *)(local_18 + 0x88) == 0) {
        *(undefined4 *)(local_18 + 0x88) = *(undefined4 *)(this + 0x84);
      }
      else if (*(uint *)(local_18 + 0x88) < 0x40) {
        *(undefined4 *)(local_18 + 0x88) = 0x40;
      }
      if (*(int *)(local_18 + 0x84) == 0) {
        *(undefined4 *)(local_18 + 0x84) = *(undefined4 *)(this + 0x88);
      }
      uVar10 = (**(code **)(*(long *)this + 0x70))(this,local_18);
      *(undefined8 *)(pTVar5 + 0x68) = uVar10;
      if (*(long *)(local_18 + 0x68) == 0) {
        (**(code **)(*(long *)local_18 + 0x18))(local_18);
        pTVar5 = (TextureInfo *)0x0;
        goto LAB_05417314;
      }
    }
    *(float *)(local_18 + 0x80) = 1.0 / (float)*(uint *)(local_18 + 0x88);
    if (param_2 == false) goto LAB_05417410;
  }
  eastl::fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator>::push_back
            ((fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator> *)(this + 0x50),
             &local_18);
  pTVar5 = local_18;
LAB_05417314:
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pTVar5);
  }
  return;
}

