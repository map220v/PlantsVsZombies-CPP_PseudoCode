// Class: EA::Text::GlyphCache::GlyphInfo


/* EA::Text::GlyphCache::GlyphInfo::GlyphInfo(EA::Text::Font*, unsigned short, float, float) */

void __thiscall
EA::Text::GlyphCache::GlyphInfo::GlyphInfo
          (GlyphInfo *this,Font *param_1,ushort param_2,float param_3,float param_4)

{
  *(Font **)this = param_1;
  *(ushort *)(this + 8) = param_2;
  *(short *)(this + 10) = (short)(int)(param_3 * 64.0);
  *(short *)(this + 0xc) = (short)(int)(param_4 * 64.0);
  return;
}


/* EA::Text::GlyphCache::GlyphInfo::TEMPNAMEPLACEHOLDERVALUE(EA::Text::GlyphCache::GlyphInfo const&)
   const */

bool __thiscall EA::Text::GlyphCache::GlyphInfo::operator==(GlyphInfo *this,GlyphInfo *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    return false;
  }
  return (*(ulong *)(this + 8) & 0xffffffffffff) == (*(ulong *)(param_1 + 8) & 0xffffffffffff);
}


bool __thiscall EA::Text::GlyphCache::GlyphInfo::operator==(GlyphInfo *this,GlyphInfo *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    return false;
  }
  return (*(ulong *)(this + 8) & 0xffffffffffff) == (*(ulong *)(param_1 + 8) & 0xffffffffffff);
}

