// Class: Sexy::PrimeText


/* Sexy::PrimeText::Instance() */

undefined8 Sexy::PrimeText::Instance(void)

{
  return DAT_06bc4ae8;
}


/* Sexy::PrimeText::~PrimeText() */

void __thiscall Sexy::PrimeText::~PrimeText(PrimeText *this)

{
  (**(code **)(**(long **)this + 0x28))(*(long **)this);
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8));
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  *(undefined8 *)(this + 8) = 0;
  EA::Text::Shutdown();
  return;
}


/* Sexy::PrimeText::CalculateGlyphCacheResolution(int, int&) */

undefined8 __thiscall
Sexy::PrimeText::CalculateGlyphCacheResolution(PrimeText *this,int param_1,int *param_2)

{
  if (0x7ff < param_1) {
    *param_2 = 1;
    return 0x800;
  }
  if (param_1 < 0x401) {
    *param_2 = 1;
    return 0x200;
  }
  *param_2 = 1;
  return 0x400;
}


/* Sexy::PrimeText::Font_AddUserEffect(unsigned int, EA::Text::EffectsInstructionWord const*,
   unsigned int) */

void __thiscall
Sexy::PrimeText::Font_AddUserEffect
          (PrimeText *this,uint param_1,EffectsInstructionWord *param_2,uint param_3)

{
  EA::Text::FontServer::AddEffect(*(FontServer **)this,param_1,param_2,param_3);
  return;
}


/* Sexy::PrimeText::Font_AddTrueType(void const*, unsigned long, EA::Text::FontDescription*) */

void __thiscall
Sexy::PrimeText::Font_AddTrueType
          (PrimeText *this,void *param_1,ulong param_2,FontDescription *param_3)

{
  EATextMemoryStream *this_00;
  
  this_00 = ::operator_new(0x60);
  EA::IO::EATextMemoryStream::EATextMemoryStream
            (this_00,param_1,param_2,true,true,(ICoreAllocator *)0x0);
  (**(code **)(*(long *)this_00 + 0x10))(this_00);
  (**(code **)(**(long **)this + 0x68))(*(long **)this,this_00,2,param_3);
  (**(code **)(*(long *)this_00 + 0x18))(this_00);
  return;
}


/* Sexy::PrimeText::Font_Remove(EA::Text::FontDescription&) */

void Sexy::PrimeText::Font_Remove(FontDescription *param_1)

{
  (**(code **)(**(long **)param_1 + 0x80))(*(long **)param_1);
  return;
}


/* Sexy::PrimeText::TextStyle_Create(char16_t*, int, Sexy::Color) */

TextStyle *
Sexy::PrimeText::TextStyle_Create
          (TextStyle *param_1,undefined8 param_2,wchar16 *param_3,int param_4,Color *param_5)

{
  undefined4 uVar1;
  
  EA::Text::TextStyle::TextStyle(param_1);
  EA::StdC::Strcpy((wchar16 *)param_1,param_3);
  *(float *)(param_1 + 0x200) = (float)param_4;
  uVar1 = Color::ToInt(param_5);
  *(undefined4 *)(param_1 + 0x268) = uVar1;
  *(undefined4 *)(param_1 + 0x214) = 1;
  return param_1;
}


/* Sexy::PrimeText::Typeface(EA::Text::TextStyle&) */

PrimeTypeface * __thiscall Sexy::PrimeText::Typeface(PrimeText *this,TextStyle *param_1)

{
  Font *pFVar1;
  PrimeTypeface *this_00;
  
  pFVar1 = (Font *)(**(code **)(**(long **)this + 0x40))
                             (*(long **)this,param_1,0,0,0xffffffff,0xffffffff,1);
  this_00 = ::operator_new(0x2d0);
  PrimeTypeface::PrimeTypeface(this_00,pFVar1,param_1);
  return this_00;
}


/* Sexy::PrimeText::GlyphMesh() */

PrimeGlyphMesh * __thiscall Sexy::PrimeText::GlyphMesh(PrimeText *this)

{
  PrimeGlyphMesh *this_00;
  ICoreAllocator *pIVar1;
  
  this_00 = ::operator_new(0xd8);
  PrimeGlyphMesh::PrimeGlyphMesh(this_00);
  pIVar1 = (ICoreAllocator *)GetPrimeAllocator();
  PrimeGlyphMesh::Init(this_00,pIVar1,*(GlyphCache **)(this + 8));
  return this_00;
}


/* Sexy::PrimeText::String16ToWString(char16_t*, int) */

void __thiscall Sexy::PrimeText::String16ToWString(PrimeText *this,wchar16 *param_1,int param_2)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  ulong uVar3;
  uint *puVar4;
  
  uVar3 = (long)param_2 << 2;
  if (0x1fc0000000000000 < (ulong)(long)param_2) {
    uVar3 = 0xffffffffffffffff;
  }
  puVar4 = operator_new__(uVar3);
  if ((0 < param_2) && (wVar2 = *param_1, *puVar4 = (uint)(ushort)wVar2, (ushort)wVar2 != 0)) {
    pwVar1 = param_1 + (param_2 - 1);
    do {
      puVar4 = puVar4 + 1;
      if (param_1 == pwVar1) {
        return;
      }
      param_1 = param_1 + 1;
      wVar2 = *param_1;
      *puVar4 = (uint)(ushort)wVar2;
    } while ((ushort)wVar2 != 0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeText::Font_DebugOutputAllFontNames() */

void __thiscall Sexy::PrimeText::Font_DebugOutputAllFontNames(PrimeText *this)

{
  FontDescription *pFVar1;
  uint uVar2;
  ColourFit *this_00;
  FontDescription *pFVar3;
  FontDescription *pFVar4;
  FontDescription aFStack_490 [116];
  FontDescription aFStack_41c [1044];
  long local_8;
  
  pFVar3 = aFStack_490;
  local_8 = ___stack_chk_guard;
  pFVar4 = pFVar3;
  do {
    pFVar1 = pFVar4 + 0x74;
    EA::Text::FontDescription::FontDescription(pFVar4);
    pFVar4 = pFVar1;
  } while (pFVar1 != (FontDescription *)&local_8);
  uVar2 = (**(code **)(**(long **)this + 0x58))(*(long **)this,pFVar3,10);
  OutputDebugStrF((wchar_t *)"- Showing %d Fonts\n",(ulong)uVar2);
  if (0 < (int)uVar2) {
    pFVar4 = pFVar3 + (ulong)(uVar2 - 1) * 0x74 + 0x74;
    do {
      this_00 = (ColourFit *)String16ToWString(this,(wchar16 *)pFVar3,0x20);
      OutputDebugStrF(L"[");
      OutputDebugStrF((wchar_t *)this_00);
      OutputDebugStrF(L"]");
      OutputDebugStrF(L"\n");
      if (this_00 != (ColourFit *)0x0) {
        EATextSquish::ColourFit::~ColourFit(this_00);
      }
      pFVar3 = pFVar3 + 0x74;
    } while (pFVar3 != pFVar4);
  }
  OutputDebugStrF((wchar_t *)&DAT_056ebe70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeText::DrawDebugText(Sexy::Graphics*, std::wstring, int, int, Sexy::Color const&) */

void Sexy::PrimeText::DrawDebugText
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,Insets *param_5)

{
  BaseBufferResource *this;
  undefined8 uVar1;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (BaseBufferResource *)Instance();
  uVar1 = BaseBufferResource::GetPtr(this);
  FUN_05477b24(auStack_20,param_2);
  Insets::Insets(aIStack_18,param_5);
  PrimeTypeface::DrawString_Simple
            ((PrimeTypeface *)(float)param_3,(float)param_4,uVar1,param_1,auStack_20,aIStack_18,0);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PrimeText::DebugDrawCache(Sexy::Graphics*, int, int) */

void __thiscall
Sexy::PrimeText::DebugDrawCache(PrimeText *this,Graphics *param_1,int param_2,int param_3)

{
  PrimeGlyphCache::DebugDrawCache(*(PrimeGlyphCache **)(this + 8),param_1,param_2,param_3);
  return;
}


/* Sexy::PrimeText::GlyphCacheVersionIncrement() */

void __thiscall Sexy::PrimeText::GlyphCacheVersionIncrement(PrimeText *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = std::numeric_limits<int>::max();
  iVar2 = 1;
  if (*(int *)(this + 0x24) != iVar1) {
    iVar2 = *(int *)(this + 0x24) + 1;
  }
  *(int *)(this + 0x24) = iVar2;
  return;
}


/* Sexy::PrimeText::ClearGlyphCache() */

void __thiscall Sexy::PrimeText::ClearGlyphCache(PrimeText *this)

{
  PrimeGlyphCache::Clear(*(PrimeGlyphCache **)(this + 8));
  GlyphCacheVersionIncrement(this);
  return;
}


/* Sexy::PrimeText::String32to16(std::wstring) */

void Sexy::PrimeText::String32to16(undefined8 param_1)

{
  ulong uVar1;
  wchar16 *pwVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = DAT_06bc4ab8;
  uVar1 = FUN_0533a08c(DAT_06bc4ab8,DAT_06bc4ac8);
  if (uVar1 == 0) {
    eastl::basic_string<char16_t,eastl::allocator>::resize
              ((basic_string<char16_t,eastl::allocator> *)&DAT_06bc4ab8,0x400);
    uVar5 = DAT_06bc4ab8;
    uVar1 = FUN_0533a08c(DAT_06bc4ab8,DAT_06bc4ac8);
  }
  pwVar2 = (wchar16 *)FUN_0533a148(uVar5);
  pwVar3 = (wchar_t *)FUN_054766ec(param_1);
  uVar4 = FUN_054765d0(param_1);
  EA::StdC::Strlcpy(pwVar2,pwVar3,uVar1,uVar4);
  FUN_0533a088(DAT_06bc4ab8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeText::TextStyle_Create(std::wstring, int, Sexy::Color) */

void Sexy::PrimeText::TextStyle_Create
               (TextStyle *param_1,undefined8 param_2,undefined8 param_3,int param_4,Color *param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  wchar16 *pwVar4;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::TextStyle::TextStyle(param_1);
  uVar3 = FUN_054766ec(param_3);
  FUN_05478178(auStack_10,uVar3,auStack_18);
  pwVar4 = (wchar16 *)String32to16(auStack_10);
  FUN_05476c50(auStack_10);
  nop();
  EA::StdC::Strcpy((wchar16 *)param_1,pwVar4);
  *(float *)(param_1 + 0x200) = (float)param_4;
  uVar2 = Color::ToInt(param_5);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x268) = uVar2;
  *(undefined4 *)(param_1 + 0x214) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeText::Init(Sexy::SexyAppBase*) */

void Sexy::PrimeText::Init(SexyAppBase *param_1)

{
  ICoreAllocator *pIVar1;
  PrimeGlyphCache *this;
  FontServer *this_00;
  undefined8 uVar2;
  SexyAppBase *in_x1;
  wchar16 *extraout_x1;
  code *pcVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x4;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [8];
  Color aCStack_2d8 [16];
  TextStyle aTStack_2c8 [536];
  undefined4 local_b0;
  undefined4 local_54;
  LineBreakCategory *local_8;
  
  pcVar3 = FF_Realloc;
  local_8 = ___stack_chk_guard;
  pLVar4 = ___stack_chk_guard;
  FontFusionMemObject::SetAllocatorCallbacks(FF_Alloc,FF_Free,FF_Realloc);
  if (0x3ff < *(int *)(in_x1 + 0x750)) {
    EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
              ((wchar16 *)in_x1,extraout_x1,(LineBreakCategory *)pcVar3,pLVar4,in_x4);
  }
  pIVar1 = (ICoreAllocator *)GetPrimeAllocator();
  this = ::operator_new(0x20208);
  PrimeGlyphCache::PrimeGlyphCache(this,pIVar1,in_x1,0x400);
  *(PrimeGlyphCache **)(param_1 + 8) = this;
  PrimeGlyphCache::SetGlyphPadding(this,1);
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),2,1);
  pIVar1 = (ICoreAllocator *)GetPrimeAllocator();
  EA::Text::SetAllocator(pIVar1);
  this_00 = ::operator_new(0x5138);
  EA::Text::FontServer::FontServer(this_00,(ICoreAllocator *)0x0);
  *(FontServer **)param_1 = this_00;
  pIVar1 = (ICoreAllocator *)GetPrimeAllocator();
  EA::Text::FontServer::SetAllocator(this_00,pIVar1);
  EA::Text::SetFontServer(*(FontServer **)param_1);
  (**(code **)(**(long **)param_1 + 0x10))(*(long **)param_1);
  FUN_05478178(auStack_2e0,L"Embedded",auStack_2e8);
  Color::Color(aCStack_2d8,1);
  TextStyle_Create(aTStack_2c8,param_1,auStack_2e0,7,aCStack_2d8);
  FUN_05476c50(auStack_2e0);
  nop();
  Color::Color(aCStack_2d8,0);
  local_54 = Color::ToInt(aCStack_2d8);
  local_b0 = 1;
  uVar2 = Typeface((PrimeText *)param_1,aTStack_2c8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PrimeText::PrimeText(Sexy::SexyAppBase*) */

void __thiscall Sexy::PrimeText::PrimeText(PrimeText *this,SexyAppBase *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (PrimeText)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  Init((SexyAppBase *)this);
  return;
}


/* Sexy::PrimeText::InstanceCreate(Sexy::SexyAppBase*) */

void Sexy::PrimeText::InstanceCreate(SexyAppBase *param_1)

{
  PrimeText *this;
  
  this = ::operator_new(0x28);
  PrimeText(this,param_1);
  DAT_06bc4ae8 = this;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeText::TypefaceSimple(std::wstring, int, Sexy::Color) */

void __thiscall
Sexy::PrimeText::TypefaceSimple
          (PrimeText *this,undefined8 param_2,undefined8 param_3,Insets *param_4)

{
  undefined1 auStack_2e0 [8];
  Insets aIStack_2d8 [16];
  TextStyle aTStack_2c8 [704];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05477b24(auStack_2e0);
  Insets::Insets(aIStack_2d8,param_4);
  TextStyle_Create(aTStack_2c8,this,auStack_2e0,param_3,aIStack_2d8);
  FUN_05476c50(auStack_2e0);
  Typeface(this,aTStack_2c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

