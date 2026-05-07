// Class: Sexy::PrimeGlyphCache


/* Sexy::PrimeGlyphCache::SetGlyphPadding(int) */

void __thiscall Sexy::PrimeGlyphCache::SetGlyphPadding(PrimeGlyphCache *this,int param_1)

{
  *(int *)(this + 0x118) = param_1;
  return;
}


/* Sexy::PrimeGlyphCache::DestroyTexture(EA::Text::TextureInfo*) */

undefined8 __thiscall
Sexy::PrimeGlyphCache::DestroyTexture(PrimeGlyphCache *this,TextureInfo *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if (puVar2 != (undefined8 *)0x0) {
    if ((long *)puVar2[1] != (long *)0x0) {
      (**(code **)(*(long *)puVar2[1] + 0x18))();
    }
    plVar1 = *(long **)(this + 8);
    puVar2[1] = 0;
    (**(code **)(*plVar1 + 0x20))(plVar1,*puVar2);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),puVar2,0);
  }
  return 1;
}


/* Sexy::PrimeGlyphCache::CreateTexture(EA::Text::TextureInfo*) */

undefined8 * __thiscall
Sexy::PrimeGlyphCache::CreateTexture(PrimeGlyphCache *this,TextureInfo *param_1)

{
  int iVar1;
  DeviceImage *this_00;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  
  *(undefined4 *)(param_1 + 0x84) = 0x22;
  this_00 = ::operator_new(0x160);
  DeviceImage::DeviceImage(this_00);
  (**(code **)(*(long *)this_00 + 0x130))(this_00,1,1);
  (**(code **)(*(long *)this_00 + 200))
            (this_00,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x88));
  puVar2 = (undefined8 *)
           (**(code **)(**(long **)(this + 8) + 0x10))
                     (*(long **)(this + 8),0x10,"EAText::Cache::TextureStruct",1);
  plVar4 = *(long **)(this + 8);
  iVar1 = *(int *)(param_1 + 0x88);
  puVar2[1] = this_00;
  uVar3 = (**(code **)(*plVar4 + 0x10))
                    (plVar4,((ulong)(uint)(iVar1 * iVar1) & 0x3fffffff) << 2,
                     "EAText::Cache::Texture",1);
  *puVar2 = uVar3;
  return puVar2;
}


/* Sexy::PrimeGlyphCache::~PrimeGlyphCache() */

void __thiscall Sexy::PrimeGlyphCache::~PrimeGlyphCache(PrimeGlyphCache *this)

{
  *(undefined ***)this = &PTR__PrimeGlyphCache_06a37b70;
  EA::Text::GlyphCache::~GlyphCache((GlyphCache *)this);
  return;
}


/* Sexy::PrimeGlyphCache::~PrimeGlyphCache() */

void __thiscall Sexy::PrimeGlyphCache::~PrimeGlyphCache(PrimeGlyphCache *this)

{
  ~PrimeGlyphCache(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::PrimeGlyphCache::PrimeGlyphCache(EA::Allocator::ICoreAllocator*, Sexy::SexyAppBase*, int)
    */

void __thiscall
Sexy::PrimeGlyphCache::PrimeGlyphCache
          (PrimeGlyphCache *this,ICoreAllocator *param_1,SexyAppBase *param_2,int param_3)

{
  EA::Text::GlyphCache::GlyphCache((GlyphCache *)this,param_1);
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined ***)this = &PTR__PrimeGlyphCache_06a37b70;
  this[0x201f5] = (PrimeGlyphCache)0x0;
  this[0x201f4] = (PrimeGlyphCache)0x1;
  *(undefined8 *)(this + 0x201f8) = 0;
  *(SexyAppBase **)(this + 0x20200) = param_2;
  *(int *)(this + 0x84) = param_3;
  return;
}


/* Sexy::PrimeGlyphCache::CopyEntireGlyphImage(EA::Text::TextureInfo*) */

void __thiscall
Sexy::PrimeGlyphCache::CopyEntireGlyphImage(PrimeGlyphCache *this,TextureInfo *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != (TextureInfo *)0x0) &&
     (plVar1 = *(long **)(param_1 + 0x68), plVar1 != (long *)0x0)) {
    lVar2 = *plVar1;
    if ((lVar2 != 0) && (lVar3 = plVar1[1], lVar3 != 0)) {
      plVar1 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x20200) + 0x20) + 0xa8))
                                 (*(long **)(*(long *)(this + 0x20200) + 0x20));
      if (*(code **)(*plVar1 + 0xc0) != MemoryImage::CopyIntoImage) {
        (**(code **)(*plVar1 + 0xc0))
                  (plVar1,lVar3,0,0,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x88),
                   lVar2);
        return;
      }
    }
  }
  return;
}


/* Sexy::PrimeGlyphCache::GetGlyphImage(EA::Text::TextureInfo*) */

undefined8 __thiscall
Sexy::PrimeGlyphCache::GetGlyphImage(PrimeGlyphCache *this,TextureInfo *param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x68) + 8);
}


/* Sexy::PrimeGlyphCache::PrepareGlyphImage(EA::Text::TextureInfo*) */

long __thiscall Sexy::PrimeGlyphCache::PrepareGlyphImage(PrimeGlyphCache *this,TextureInfo *param_1)

{
  long lVar1;
  long lVar2;
  MemoryImage *this_00;
  long *plVar3;
  
  lVar1 = GetGlyphImage(this,param_1);
  lVar2 = FUN_053f6524(*(undefined8 *)(lVar1 + 0x20));
  if (lVar2 != 0) {
    return lVar1;
  }
  this_00 = (MemoryImage *)
            (**(code **)(**(long **)(*(long *)(this + 0x20200) + 0x20) + 0xa8))
                      (*(long **)(*(long *)(this + 0x20200) + 0x20));
  if (*(code **)(*(long *)this_00 + 0x10) == MemoryImage::Get3D) {
    plVar3 = (long *)MemoryImage::Get3D(this_00);
  }
  else {
    plVar3 = (long *)(**(code **)(*(long *)this_00 + 0x10))();
  }
  (**(code **)(*plVar3 + 0x118))(plVar3,lVar1);
  return lVar1;
}


/* Sexy::PrimeGlyphCache::DebugDrawCache(Sexy::Graphics*, int, int) */

void __thiscall
Sexy::PrimeGlyphCache::DebugDrawCache
          (PrimeGlyphCache *this,Graphics *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  Image *pIVar2;
  
  puVar1 = (undefined8 *)FUN_053f6528(*(undefined8 *)(this + 0x50));
  pIVar2 = (Image *)GetGlyphImage(this,(TextureInfo *)*puVar1);
  Graphics::DrawImage(param_1,pIVar2,param_2,param_3);
  return;
}


/* Sexy::PrimeGlyphCache::Clear() */

void __thiscall Sexy::PrimeGlyphCache::Clear(PrimeGlyphCache *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_053f6528(*(undefined8 *)(this + 0x50));
  (**(code **)(*(long *)this + 0x98))(this,*puVar1);
  this[0x201f5] = (PrimeGlyphCache)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeGlyphCache::BeginUpdate(EA::Text::TextureInfo*) */

void __thiscall Sexy::PrimeGlyphCache::BeginUpdate(PrimeGlyphCache *this,TextureInfo *param_1)

{
  long lVar1;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x120));
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x70) = **(undefined8 **)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x78) = ((ulong)*(uint *)(param_1 + 0x88) & 0x3fffffff) << 2;
    *(undefined4 *)(this + 0x1f0) = 0;
    *(undefined4 *)(this + 0x1ec) = 0;
    this[0x201f4] = (PrimeGlyphCache)0x1;
    *(TextureInfo **)(this + 0x201f8) = param_1;
    EA::Thread::Futex::Lock((Futex *)(this + 0x120));
  }
  EA::Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 == 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeGlyphCache::EndUpdate(EA::Text::TextureInfo*) */

void __thiscall Sexy::PrimeGlyphCache::EndUpdate(PrimeGlyphCache *this,TextureInfo *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  MemoryImage *this_00;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(this + 0x120));
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar4 = 0;
    goto LAB_053f6978;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x68);
  if (*(int *)(this + 0x1ec) != 0) {
    lVar6 = puVar5[1];
    lVar2 = FUN_053f6524(*(undefined8 *)(lVar6 + 0x20));
    if (lVar2 == 0) {
      this_00 = (MemoryImage *)
                (**(code **)(**(long **)(*(long *)(this + 0x20200) + 0x20) + 0xa8))
                          (*(long **)(*(long *)(this + 0x20200) + 0x20));
      if (*(code **)(*(long *)this_00 + 0x10) == MemoryImage::Get3D) {
        plVar3 = (long *)MemoryImage::Get3D(this_00);
      }
      else {
        plVar3 = (long *)(**(code **)(*(long *)this_00 + 0x10))();
      }
      (**(code **)(*plVar3 + 0x118))(plVar3,lVar6);
    }
    uVar4 = *puVar5;
    if ((this[0x201f4] == (PrimeGlyphCache)0x0) || (this[0x201f5] != (PrimeGlyphCache)0x0)) {
      plVar3 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x20200) + 0x20) + 0xa8))
                                 (*(long **)(*(long *)(this + 0x20200) + 0x20));
      if (*(code **)(*plVar3 + 0xc0) != MemoryImage::CopyIntoImage) {
        (**(code **)(*plVar3 + 0xc0))
                  (plVar3,lVar6,0,0,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x88),
                   uVar4);
        this[0x201f5] = (PrimeGlyphCache)0x0;
        goto LAB_053f6964;
      }
    }
    else {
      iVar1 = *(int *)(this + 0x1ec);
      if (0 < iVar1) {
        if ((*(int *)(this + 0x154) != 0) && (*(int *)(this + 0x158) != 0)) {
          plVar3 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x20200) + 0x20) + 0xa8))
                                     (*(long **)(*(long *)(this + 0x20200) + 0x20));
          if (*(code **)(*plVar3 + 0xc0) == MemoryImage::CopyIntoImage) {
            iVar1 = *(int *)(this + 0x1ec);
          }
          else {
            (**(code **)(*plVar3 + 0xc0))
                      (plVar3,lVar6,*(undefined4 *)(this + 0x14c),*(undefined4 *)(this + 0x150),
                       *(undefined4 *)(this + 0x154),*(undefined4 *)(this + 0x158),
                       this + (long)*(int *)(this + 0x15c) + 500);
            iVar1 = *(int *)(this + 0x1ec);
          }
        }
        if (1 < iVar1) {
          if ((*(int *)(this + 0x168) != 0) && (*(int *)(this + 0x16c) != 0)) {
            plVar3 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x20200) + 0x20) + 0xa8))
                                       (*(long **)(*(long *)(this + 0x20200) + 0x20));
            if (*(code **)(*plVar3 + 0xc0) == MemoryImage::CopyIntoImage) {
              iVar1 = *(int *)(this + 0x1ec);
            }
            else {
              (**(code **)(*plVar3 + 0xc0))
                        (plVar3,lVar6,*(undefined4 *)(this + 0x160),*(undefined4 *)(this + 0x164),
                         *(undefined4 *)(this + 0x168),*(undefined4 *)(this + 0x16c),
                         this + (long)*(int *)(this + 0x170) + 500);
              iVar1 = *(int *)(this + 0x1ec);
            }
          }
          if (2 < iVar1) {
            if ((*(int *)(this + 0x17c) != 0) && (*(int *)(this + 0x180) != 0)) {
              plVar3 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x20200) + 0x20) + 0xa8))
                                         (*(long **)(*(long *)(this + 0x20200) + 0x20));
              if (*(code **)(*plVar3 + 0xc0) == MemoryImage::CopyIntoImage) {
                iVar1 = *(int *)(this + 0x1ec);
              }
              else {
                (**(code **)(*plVar3 + 0xc0))
                          (plVar3,lVar6,*(undefined4 *)(this + 0x174),*(undefined4 *)(this + 0x178),
                           *(undefined4 *)(this + 0x17c),*(undefined4 *)(this + 0x180),
                           this + (long)*(int *)(this + 0x184) + 500);
                iVar1 = *(int *)(this + 0x1ec);
              }
            }
            if (3 < iVar1) {
              if ((*(int *)(this + 400) != 0) && (*(int *)(this + 0x194) != 0)) {
                plVar3 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x20200) + 0x20) + 0xa8))
                                           (*(long **)(*(long *)(this + 0x20200) + 0x20));
                if (*(code **)(*plVar3 + 0xc0) == MemoryImage::CopyIntoImage) {
                  iVar1 = *(int *)(this + 0x1ec);
                }
                else {
                  (**(code **)(*plVar3 + 0xc0))
                            (plVar3,lVar6,*(undefined4 *)(this + 0x188),
                             *(undefined4 *)(this + 0x18c),*(undefined4 *)(this + 400),
                             *(undefined4 *)(this + 0x194),this + (long)*(int *)(this + 0x198) + 500
                            );
                  iVar1 = *(int *)(this + 0x1ec);
                }
              }
              if (4 < iVar1) {
                if ((*(int *)(this + 0x1a4) != 0) && (*(int *)(this + 0x1a8) != 0)) {
                  plVar3 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x20200) + 0x20) + 0xa8
                                               ))(*(long **)(*(long *)(this + 0x20200) + 0x20));
                  if (*(code **)(*plVar3 + 0xc0) == MemoryImage::CopyIntoImage) {
                    iVar1 = *(int *)(this + 0x1ec);
                  }
                  else {
                    (**(code **)(*plVar3 + 0xc0))
                              (plVar3,lVar6,*(undefined4 *)(this + 0x19c),
                               *(undefined4 *)(this + 0x1a0),*(undefined4 *)(this + 0x1a4),
                               *(undefined4 *)(this + 0x1a8),
                               this + (long)*(int *)(this + 0x1ac) + 500);
                    iVar1 = *(int *)(this + 0x1ec);
                  }
                }
                if (5 < iVar1) {
                  if ((*(int *)(this + 0x1b8) != 0) && (*(int *)(this + 0x1bc) != 0)) {
                    plVar3 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x20200) + 0x20) +
                                                 0xa8))(*(long **)(*(long *)(this + 0x20200) + 0x20)
                                                       );
                    if (*(code **)(*plVar3 + 0xc0) == MemoryImage::CopyIntoImage) {
                      iVar1 = *(int *)(this + 0x1ec);
                    }
                    else {
                      (**(code **)(*plVar3 + 0xc0))
                                (plVar3,lVar6,*(undefined4 *)(this + 0x1b0),
                                 *(undefined4 *)(this + 0x1b4),*(undefined4 *)(this + 0x1b8),
                                 *(undefined4 *)(this + 0x1bc),
                                 this + (long)*(int *)(this + 0x1c0) + 500);
                      iVar1 = *(int *)(this + 0x1ec);
                    }
                  }
                  if (6 < iVar1) {
                    if ((*(int *)(this + 0x1cc) != 0) && (*(int *)(this + 0x1d0) != 0)) {
                      plVar3 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x20200) + 0x20) +
                                                   0xa8))(*(long **)(*(long *)(this + 0x20200) +
                                                                    0x20));
                      if (*(code **)(*plVar3 + 0xc0) == MemoryImage::CopyIntoImage) {
                        iVar1 = *(int *)(this + 0x1ec);
                      }
                      else {
                        (**(code **)(*plVar3 + 0xc0))
                                  (plVar3,lVar6,*(undefined4 *)(this + 0x1c4),
                                   *(undefined4 *)(this + 0x1c8),*(undefined4 *)(this + 0x1cc),
                                   *(undefined4 *)(this + 0x1d0),
                                   this + (long)*(int *)(this + 0x1d4) + 500);
                        iVar1 = *(int *)(this + 0x1ec);
                      }
                    }
                    if (((7 < iVar1) && (*(int *)(this + 0x1e0) != 0)) &&
                       (*(int *)(this + 0x1e4) != 0)) {
                      plVar3 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x20200) + 0x20) +
                                                   0xa8))(*(long **)(*(long *)(this + 0x20200) +
                                                                    0x20));
                      if (*(code **)(*plVar3 + 0xc0) != MemoryImage::CopyIntoImage) {
                        (**(code **)(*plVar3 + 0xc0))
                                  (plVar3,lVar6,*(undefined4 *)(this + 0x1d8),
                                   *(undefined4 *)(this + 0x1dc),*(undefined4 *)(this + 0x1e0),
                                   *(undefined4 *)(this + 0x1e4),
                                   this + (long)*(int *)(this + 0x1e8) + 500);
                        this[0x201f5] = (PrimeGlyphCache)0x0;
                        goto LAB_053f6964;
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
    this[0x201f5] = (PrimeGlyphCache)0x0;
  }
LAB_053f6964:
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(this + 0x201f8) = 0;
  uVar4 = 1;
  EA::Thread::Futex::Unlock((Futex *)(this + 0x120));
LAB_053f6978:
  EA::Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* Sexy::PrimeGlyphCache::WriteTextureArea(EA::Text::TextureInfo*, unsigned int, unsigned int, void
   const*, unsigned int, unsigned int, unsigned int, unsigned int) */

undefined8 __thiscall
Sexy::PrimeGlyphCache::WriteTextureArea
          (PrimeGlyphCache *this,TextureInfo *param_1,uint param_2,uint param_3,void *param_4,
          uint param_5,uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  EA::Text::GlyphCache::WriteTextureArea
            ((GlyphCache *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (this[0x201f4] != (PrimeGlyphCache)0x0) {
    iVar3 = param_6 * 4 * param_5;
    if (((uint)(iVar3 + *(int *)(this + 0x1f0)) < 0x20000) && (*(uint *)(this + 0x1ec) < 8)) {
      (**(code **)(*(long *)this + 0xd0))
                (this,this + (long)*(int *)(this + 0x1f0) + 500,0,0,param_5 << 2,
                 *(undefined4 *)(param_1 + 0x84),param_4,param_5,param_6,param_7,param_8);
      uVar1 = *(uint *)(this + 0x1ec);
      *(uint *)(this + (ulong)uVar1 * 0x14 + 0x14c) = param_2;
      *(uint *)(this + (ulong)uVar1 * 0x14 + 0x150) = param_3;
      *(uint *)(this + (ulong)uVar1 * 0x14 + 0x154) = param_5;
      *(uint *)(this + (ulong)uVar1 * 0x14 + 0x158) = param_6;
      iVar2 = *(int *)(this + 0x1f0);
      *(int *)(this + (ulong)uVar1 * 0x14 + 0x15c) = iVar2;
      *(uint *)(this + 0x1ec) = uVar1 + 1;
      *(int *)(this + 0x1f0) = iVar3 + iVar2;
    }
    else {
      this[0x201f4] = (PrimeGlyphCache)0x0;
    }
  }
  return 1;
}


/* Sexy::PrimeGlyphCache::WriteTextureArea(void*, unsigned int, unsigned int, unsigned int, unsigned
   int, void const*, unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
Sexy::PrimeGlyphCache::WriteTextureArea
          (PrimeGlyphCache *this,void *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          void *param_6,uint param_7,uint param_8,uint param_9,uint param_10)

{
  EA::Text::GlyphCache::WriteTextureArea
            ((GlyphCache *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10);
  return;
}

