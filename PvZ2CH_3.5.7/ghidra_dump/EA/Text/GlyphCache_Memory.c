// Class: EA::Text::GlyphCache_Memory


/* EA::Text::GlyphCache_Memory::EndUpdate(EA::Text::TextureInfo*) */

undefined8 EA::Text::GlyphCache_Memory::EndUpdate(TextureInfo *param_1)

{
  return 1;
}


/* EA::Text::GlyphCache_Memory::CreateTexture(EA::Text::TextureInfo*) */

void __thiscall
EA::Text::GlyphCache_Memory::CreateTexture(GlyphCache_Memory *this,TextureInfo *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 4;
  if (2 < *(int *)(this + 0x14c) - 0x20U) {
    iVar2 = 1;
  }
  uVar1 = (**(code **)(**(long **)(this + 8) + 0x10))
                    (*(long **)(this + 8),
                     *(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x88) * iVar2,
                     "EAText/Cache/Texture",0);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(this + 0x14c);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(ulong *)(param_1 + 0x78) = (ulong)(uint)(iVar2 * *(int *)(param_1 + 0x88));
  return;
}


/* EA::Text::GlyphCache_Memory::DestroyTexture(EA::Text::TextureInfo*) */

undefined8 __thiscall
EA::Text::GlyphCache_Memory::DestroyTexture(GlyphCache_Memory *this,TextureInfo *param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    iVar1 = 4;
    if (2 < *(int *)(this + 0x14c) - 0x20U) {
      iVar1 = 1;
    }
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),*(long *)(param_1 + 0x68),
               *(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x88) * iVar1);
  }
  return 1;
}


/* EA::Text::GlyphCache_Memory::~GlyphCache_Memory() */

void __thiscall EA::Text::GlyphCache_Memory::~GlyphCache_Memory(GlyphCache_Memory *this)

{
  *(undefined ***)this = &PTR__GlyphCache_Memory_06a37ff0;
  GlyphCache::~GlyphCache((GlyphCache *)this);
  return;
}


/* EA::Text::GlyphCache_Memory::~GlyphCache_Memory() */

void __thiscall EA::Text::GlyphCache_Memory::~GlyphCache_Memory(GlyphCache_Memory *this)

{
  ~GlyphCache_Memory(this);
  AK::FreeHook(this);
  return;
}


/* EA::Text::GlyphCache_Memory::GlyphCache_Memory(EA::Text::TextureFormat) */

void __thiscall
EA::Text::GlyphCache_Memory::GlyphCache_Memory(GlyphCache_Memory *this,undefined4 param_2)

{
  GlyphCache::GlyphCache((GlyphCache *)this,(ICoreAllocator *)0x0);
  *(undefined4 *)(this + 0x14c) = param_2;
  *(undefined ***)this = &PTR__GlyphCache_Memory_06a37ff0;
  return;
}

