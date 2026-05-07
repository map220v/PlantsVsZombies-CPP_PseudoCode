// Class: EA::Text::EffectsState


/* EA::Text::EffectsState::ResetParameters() */

void __thiscall EA::Text::EffectsState::ResetParameters(EffectsState *this)

{
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x30) = 0x3f000000;
  *(undefined4 *)(this + 4) = 0xff000000;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0xc;
  *(undefined4 *)(this + 0x24) = 1;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 3;
  *(undefined4 *)(this + 0x38) = 1;
  *(undefined4 *)(this + 0x3c) = 3;
  *(undefined4 *)(this + 0x34) = 0x3f800000;
  return;
}


/* EA::Text::EffectsState::EffectsState(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::EffectsState::EffectsState(EffectsState *this,ICoreAllocator *param_1)

{
  *(EffectsState **)(this + 0xe8) = this + 0x40;
  *(undefined2 *)(this + 0xf8) = 0xffff;
  this[0x2fc] = (EffectsState)0x1;
  this[0x2fd] = (EffectsState)0x1;
  *(undefined4 *)(this + 0x2f8) = 0xc;
  *(undefined4 *)(this + 0x300) = 0x7fffffff;
  *(undefined4 *)(this + 0x304) = 0x7fffffff;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x30c) = 0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined4 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x324) = 0;
  *(undefined4 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 0x32c) = 0;
  ResetParameters(this);
  this[0xfa] = (EffectsState)0x7f;
  Thread::AtomicInt<int>::Increment((AtomicInt<int> *)&DAT_06bc5ba8);
  return;
}


/* EA::Text::EffectsState::ResetExecution(EA::Text::OutlineFont*, unsigned short) */

void __thiscall
EA::Text::EffectsState::ResetExecution(EffectsState *this,OutlineFont *param_1,ushort param_2)

{
  *(OutlineFont **)(this + 0xf0) = param_1;
  this[0xfa] = (EffectsState)0x7f;
  *(EffectsState **)(this + 0xe8) = this + 0x40;
  *(ushort *)(this + 0xf8) = param_2;
  *(undefined4 *)(this + 0x2f8) = 0xc;
  *(undefined4 *)(this + 0x300) = 0x7fffffff;
  *(undefined4 *)(this + 0x304) = 0x7fffffff;
  *(undefined4 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x30c) = 0;
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x314) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  return;
}


/* EA::Text::EffectsState::ClearInstructionList() */

void __thiscall EA::Text::EffectsState::ClearInstructionList(EffectsState *this)

{
  *(undefined4 *)(this + 0xe0) = 0;
  return;
}


/* EA::Text::EffectsState::AppendInstructionList(EA::Text::EffectsInstructionWord const*, unsigned
   int) */

void __thiscall
EA::Text::EffectsState::AppendInstructionList
          (EffectsState *this,EffectsInstructionWord *param_1,uint param_2)

{
  memcpy(this + ((ulong)*(uint *)(this + 0xe0) + 0x10) * 4,param_1,(ulong)param_2 << 2);
  *(uint *)(this + 0xe0) = *(int *)(this + 0xe0) + param_2;
  return;
}


/* EA::Text::EffectsState::HashInstructionList(EA::Text::EffectsInstructionWord const*, unsigned
   int) */

int EA::Text::EffectsState::HashInstructionList(EffectsInstructionWord *param_1,uint param_2)

{
  EffectsInstructionWord *pEVar1;
  int iVar2;
  
  pEVar1 = param_1 + (ulong)param_2 * 4;
  iVar2 = 0;
  for (; param_1 != pEVar1; param_1 = param_1 + 1) {
    iVar2 = iVar2 * 0x1003f + (uint)(byte)*param_1;
  }
  return iVar2;
}


/* EA::Text::EffectsState::SetExpansion(unsigned int, unsigned int) */

void __thiscall EA::Text::EffectsState::SetExpansion(EffectsState *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 1;
  *(uint *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = param_1;
  *(uint *)(this + 0xe0) = uVar1 + 3;
  *(uint *)(this + ((ulong)(uVar1 + 2) + 0x10) * 4) = param_2;
  return;
}


/* EA::Text::EffectsState::SetGlyphMinAlpha(unsigned int) */

void __thiscall EA::Text::EffectsState::SetGlyphMinAlpha(EffectsState *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 2;
  *(uint *)(this + 0xe0) = uVar1 + 2;
  *(uint *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = param_1;
  return;
}


/* EA::Text::EffectsState::SetGlyphColor(unsigned int) */

void __thiscall EA::Text::EffectsState::SetGlyphColor(EffectsState *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 3;
  *(uint *)(this + 0xe0) = uVar1 + 2;
  *(uint *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = param_1;
  return;
}


/* EA::Text::EffectsState::SetGlyphOffset(int, int) */

void __thiscall EA::Text::EffectsState::SetGlyphOffset(EffectsState *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 4;
  *(int *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = param_1;
  *(uint *)(this + 0xe0) = uVar1 + 3;
  *(int *)(this + ((ulong)(uVar1 + 2) + 0x10) * 4) = param_2;
  return;
}


/* EA::Text::EffectsState::SetGlyphHSpace(int, int) */

void __thiscall EA::Text::EffectsState::SetGlyphHSpace(EffectsState *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 5;
  *(int *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = param_1;
  *(uint *)(this + 0xe0) = uVar1 + 3;
  *(int *)(this + ((ulong)(uVar1 + 2) + 0x10) * 4) = param_2;
  return;
}


/* EA::Text::EffectsState::SetGlyphVSpace(int, int) */

void __thiscall EA::Text::EffectsState::SetGlyphVSpace(EffectsState *this,int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 6;
  *(int *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = param_1;
  *(uint *)(this + 0xe0) = uVar1 + 3;
  *(int *)(this + ((ulong)(uVar1 + 2) + 0x10) * 4) = param_2;
  return;
}


/* EA::Text::EffectsState::SetGlyphSmooth(bool) */

void __thiscall EA::Text::EffectsState::SetGlyphSmooth(EffectsState *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 7;
  *(uint *)(this + 0xe0) = uVar1 + 2;
  *(uint *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = (uint)param_1;
  return;
}


/* EA::Text::EffectsState::SetGlyphBrush(unsigned int, unsigned int, float, float) */

void __thiscall
EA::Text::EffectsState::SetGlyphBrush
          (EffectsState *this,uint param_1,uint param_2,float param_3,float param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 8;
  *(uint *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = param_1;
  *(uint *)(this + ((ulong)(uVar1 + 2) + 0x10) * 4) = param_2;
  *(float *)(this + ((ulong)(uVar1 + 3) + 0x10) * 4) = param_3;
  *(uint *)(this + 0xe0) = uVar1 + 5;
  *(float *)(this + ((ulong)(uVar1 + 4) + 0x10) * 4) = param_4;
  return;
}


/* EA::Text::EffectsState::SetTargetImage(unsigned int) */

void __thiscall EA::Text::EffectsState::SetTargetImage(EffectsState *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 9;
  *(uint *)(this + 0xe0) = uVar1 + 2;
  *(uint *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = param_1;
  return;
}


/* EA::Text::EffectsState::SetTargetMask(unsigned int) */

void __thiscall EA::Text::EffectsState::SetTargetMask(EffectsState *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 10;
  *(uint *)(this + 0xe0) = uVar1 + 2;
  *(uint *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = param_1;
  return;
}


/* EA::Text::EffectsState::DrawGlyphSmearOutline() */

void __thiscall EA::Text::EffectsState::DrawGlyphSmearOutline(EffectsState *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(uint *)(this + 0xe0) = uVar1 + 1;
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 0xb;
  return;
}


/* EA::Text::EffectsState::DrawGlyphBrushOutline() */

void __thiscall EA::Text::EffectsState::DrawGlyphBrushOutline(EffectsState *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(uint *)(this + 0xe0) = uVar1 + 1;
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 0xc;
  return;
}


/* EA::Text::EffectsState::DrawGlyph() */

void __thiscall EA::Text::EffectsState::DrawGlyph(EffectsState *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(uint *)(this + 0xe0) = uVar1 + 1;
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 0xd;
  return;
}


/* EA::Text::EffectsState::Clear() */

void __thiscall EA::Text::EffectsState::Clear(EffectsState *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(uint *)(this + 0xe0) = uVar1 + 1;
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 0xe;
  return;
}


/* EA::Text::EffectsState::ApplyCurve(unsigned int, float) */

void __thiscall EA::Text::EffectsState::ApplyCurve(EffectsState *this,uint param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 0xf;
  *(uint *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = param_1;
  *(uint *)(this + 0xe0) = uVar1 + 3;
  *(float *)(this + ((ulong)(uVar1 + 2) + 0x10) * 4) = param_2;
  return;
}


/* EA::Text::EffectsState::ApplyBoxBlur(float, float, unsigned int) */

void __thiscall
EA::Text::EffectsState::ApplyBoxBlur(EffectsState *this,float param_1,float param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 0x10;
  *(float *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = param_1;
  *(float *)(this + ((ulong)(uVar1 + 2) + 0x10) * 4) = param_2;
  *(uint *)(this + 0xe0) = uVar1 + 4;
  *(uint *)(this + ((ulong)(uVar1 + 3) + 0x10) * 4) = param_3;
  return;
}


/* EA::Text::EffectsState::Merge() */

void __thiscall EA::Text::EffectsState::Merge(EffectsState *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(uint *)(this + 0xe0) = uVar1 + 1;
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 0x11;
  return;
}


/* EA::Text::EffectsState::CallUser(unsigned int) */

void __thiscall EA::Text::EffectsState::CallUser(EffectsState *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xe0);
  *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x40) = 0x12;
  *(uint *)(this + 0xe0) = uVar1 + 2;
  *(uint *)(this + ((ulong)(uVar1 + 1) + 0x10) * 4) = param_1;
  return;
}


/* EA::Text::EffectsState::~EffectsState() */

void __thiscall EA::Text::EffectsState::~EffectsState(EffectsState *this)

{
  int iVar1;
  
  iVar1 = Thread::AtomicInt<int>::Decrement((AtomicInt<int> *)&DAT_06bc5ba8);
  if (iVar1 != 0) {
    return;
  }
  EffectsBitmaps::Reset((EffectsBitmaps *)&mEffectsBitmaps);
  return;
}

