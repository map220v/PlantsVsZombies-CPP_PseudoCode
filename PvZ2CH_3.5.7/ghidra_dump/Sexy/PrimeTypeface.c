// Class: Sexy::PrimeTypeface


/* Sexy::PrimeTypeface::GetCharWidthKern(wchar_t, wchar_t) */

wchar_t Sexy::PrimeTypeface::GetCharWidthKern(wchar_t param_1,wchar_t param_2)

{
  return param_1;
}


/* Sexy::PrimeTypeface::CharWidth(wchar_t) */

wchar_t Sexy::PrimeTypeface::CharWidth(wchar_t param_1)

{
  return param_1;
}


/* Sexy::PrimeTypeface::PrimeTypeface(EA::Text::Font*, EA::Text::TextStyle&) */

void __thiscall
Sexy::PrimeTypeface::PrimeTypeface(PrimeTypeface *this,Font *param_1,TextStyle *param_2)

{
  EA::Text::TextStyle::TextStyle((TextStyle *)(this + 8));
  *(Font **)this = param_1;
  EA::Text::TextStyle::operator=((TextStyle *)(this + 8),param_2);
  *(undefined8 *)(this + 0x2c8) = 0;
  return;
}


/* Sexy::PrimeTypeface::~PrimeTypeface() */

void __thiscall Sexy::PrimeTypeface::~PrimeTypeface(PrimeTypeface *this)

{
  (**(code **)(**(long **)this + 0x20))(*(long **)this);
  return;
}


/* Sexy::PrimeTypeface::PrepareTypesetter(EA::Text::TextStyle&, float, float, float, float,
   EA::Text::HAlignment, EA::Text::VAlignment, Sexy::Color const&) */

Typesetter * __thiscall
Sexy::PrimeTypeface::PrepareTypesetter
          (Typesetter *param_1_00,float param_2,float param_3,float param_4,PrimeTypeface *this,
          TextStyle *param_1,undefined4 param_7,undefined4 param_8,Color *param_9)

{
  char cVar1;
  undefined4 uVar2;
  
  EA::Text::Typesetter::Typesetter(param_1_00,(ICoreAllocator *)0x0);
  EA::Text::Typesetter::SetLayoutSpace(param_1_00,param_4,param_2,param_3);
  EA::Text::TextStyle::operator=(param_1,(TextStyle *)(this + 8));
  *(undefined4 *)(param_1 + 0x288) = param_7;
  *(undefined4 *)(param_1 + 0x28c) = param_8;
  cVar1 = Color::IsInvalid(param_9);
  if (cVar1 == '\0') {
    uVar2 = Color::ToInt(param_9);
    *(undefined4 *)(param_1 + 0x268) = uVar2;
  }
  EA::Text::Typesetter::SetDefaultTextStyle(param_1_00,param_1);
  return param_1_00;
}


/* Sexy::PrimeTypeface::PrepareGlyphMesh(EA::Text::LineLayout&, Sexy::Color const&, bool) */

PrimeGlyphMesh * __thiscall
Sexy::PrimeTypeface::PrepareGlyphMesh
          (PrimeTypeface *this,LineLayout *param_1,Color *param_2,bool param_3)

{
  uint uVar1;
  PrimeText *this_00;
  PrimeGlyphMesh *this_01;
  
  this_00 = (PrimeText *)PrimeText::Instance();
  this_01 = (PrimeGlyphMesh *)PrimeText::GlyphMesh(this_00);
  uVar1 = Color::ToInt(param_2);
  PrimeGlyphMesh::SetColorRGBA(this_01,uVar1);
  PrimeGlyphMesh::SetLineLayout(this_01,param_1);
  PrimeGlyphMesh::SetTextStyleColorEnabled(this_01,param_3);
  PrimeGlyphMesh::Build(this_01,1.0);
  return this_01;
}


/* Sexy::PrimeTypeface::ApplyOptionalParameters(Sexy::PrimeGlyphMesh*,
   Sexy::PrimeTextExtraParameters*, float, float, float, float) */

void __thiscall
Sexy::PrimeTypeface::ApplyOptionalParameters
          (PrimeTypeface *this,PrimeGlyphMesh *param_1,PrimeTextExtraParameters *param_2,
          float param_3,float param_4,float param_5,float param_6)

{
  if (param_2 != (PrimeTextExtraParameters *)0x0) {
    if ((*(float *)param_2 != 1.0) || (*(float *)(param_2 + 4) != 1.0)) {
      PrimeGlyphMesh::SetPostScale
                (param_1,*(float *)param_2,*(float *)(param_2 + 4),param_3,param_4,param_5,param_6);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::SizeString_Paragraph(std::wstring, int&, int&, float) */

void Sexy::PrimeTypeface::SizeString_Paragraph
               (float param_1,float param_2,long param_3,undefined8 param_4,int *param_5,
               int *param_6)

{
  undefined8 uVar1;
  wchar16 *pwVar2;
  ulong uVar3;
  float fVar4;
  undefined1 auStack_7e0 [8];
  undefined1 auStack_7d8 [8];
  Typesetter aTStack_7d0 [1992];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::Typesetter::Typesetter(aTStack_7d0,(ICoreAllocator *)0x0);
  uVar1 = FUN_054766ec(param_4);
  FUN_05478178(auStack_7d8,uVar1,auStack_7e0);
  pwVar2 = (wchar16 *)PrimeText::String32to16(auStack_7d8);
  uVar3 = FUN_054765d0(param_4);
  fVar4 = (float)EA::Text::Typesetter::GetParagraphSize
                           (aTStack_7d0,pwVar2,uVar3,(TextStyle *)(param_3 + 8),param_1);
  FUN_05476c50(auStack_7d8);
  nop();
  *param_5 = (int)fVar4;
  *param_6 = (int)param_2;
  EA::Text::Typesetter::~Typesetter(aTStack_7d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::SizeString_Line(std::wstring) */

void __thiscall Sexy::PrimeTypeface::SizeString_Line(PrimeTypeface *this,undefined8 param_2)

{
  undefined8 uVar1;
  wchar16 *pwVar2;
  ulong uVar3;
  float fVar4;
  undefined1 auStack_7e0 [8];
  undefined1 auStack_7d8 [8];
  Typesetter aTStack_7d0 [1992];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::Typesetter::Typesetter(aTStack_7d0,(ICoreAllocator *)0x0);
  uVar1 = FUN_054766ec(param_2);
  FUN_05478178(auStack_7d8,uVar1,auStack_7e0);
  pwVar2 = (wchar16 *)PrimeText::String32to16(auStack_7d8);
  uVar3 = FUN_054765d0(param_2);
  fVar4 = (float)EA::Text::Typesetter::GetParagraphSize
                           (aTStack_7d0,pwVar2,uVar3,(TextStyle *)(this + 8),0.0);
  FUN_05476c50(auStack_7d8);
  nop();
  EA::Text::Typesetter::~Typesetter(aTStack_7d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)fVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::StringWidth(std::wstring) */

void Sexy::PrimeTypeface::StringWidth(PrimeTypeface *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05477b24(auStack_10);
  uVar1 = SizeString_Line(param_1,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::PrimeTypeface::SetTypefaceIfShrunk(Sexy::PrimeTypeface*) */

void __thiscall Sexy::PrimeTypeface::SetTypefaceIfShrunk(PrimeTypeface *this,PrimeTypeface *param_1)

{
  *(PrimeTypeface **)(this + 0x2c8) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::GetHeight() */

void __thiscall Sexy::PrimeTypeface::GetHeight(PrimeTypeface *this)

{
  FontMetrics aFStack_50 [40];
  undefined4 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::FontMetrics::FontMetrics(aFStack_50);
  (**(code **)(**(long **)this + 0x68))(*(long **)this,aFStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::GetLineHeight() */

void __thiscall Sexy::PrimeTypeface::GetLineHeight(PrimeTypeface *this)

{
  FontMetrics aFStack_50 [32];
  undefined4 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::FontMetrics::FontMetrics(aFStack_50);
  (**(code **)(**(long **)this + 0x68))(*(long **)this,aFStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::GetLineSpacing() */

void __thiscall Sexy::PrimeTypeface::GetLineSpacing(PrimeTypeface *this)

{
  FontMetrics aFStack_50 [24];
  undefined4 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::FontMetrics::FontMetrics(aFStack_50);
  (**(code **)(**(long **)this + 0x68))(*(long **)this,aFStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::GetAscent() */

void __thiscall Sexy::PrimeTypeface::GetAscent(PrimeTypeface *this)

{
  FontMetrics aFStack_50 [16];
  undefined4 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::FontMetrics::FontMetrics(aFStack_50);
  (**(code **)(**(long **)this + 0x68))(*(long **)this,aFStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_40);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::GetDescent() */

void __thiscall Sexy::PrimeTypeface::GetDescent(PrimeTypeface *this)

{
  FontMetrics aFStack_50 [20];
  undefined4 local_3c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::FontMetrics::FontMetrics(aFStack_50);
  (**(code **)(**(long **)this + 0x68))(*(long **)this,aFStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_3c);
}


/* Sexy::PrimeTypeface::ShrunkTypeface() */

undefined8 __thiscall Sexy::PrimeTypeface::ShrunkTypeface(PrimeTypeface *this)

{
  return *(undefined8 *)(this + 0x2c8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::FitString_Paragraph(std::wstring, int, int, int&) */

void __thiscall
Sexy::PrimeTypeface::FitString_Paragraph
          (PrimeTypeface *this,undefined8 param_2,int param_3,int param_4,int *param_5)

{
  PrimeTypeface *this_00;
  undefined1 auStack_7e0 [4];
  int local_7dc;
  undefined1 auStack_7d8 [8];
  Typesetter aTStack_7d0 [1992];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::Typesetter::Typesetter(aTStack_7d0,(ICoreAllocator *)0x0);
  param_4 = param_4 + ParagraphFitSlack;
  do {
    this_00 = this;
    FUN_05477b24(auStack_7d8,param_2);
    SizeString_Paragraph((float)param_3,this_00,auStack_7d8,auStack_7e0,&local_7dc);
    FUN_05476c50(auStack_7d8);
    if (local_7dc <= param_4) break;
    this = (PrimeTypeface *)ShrunkTypeface(this_00);
  } while (this != (PrimeTypeface *)0x0);
  *param_5 = local_7dc;
  EA::Text::Typesetter::~Typesetter(aTStack_7d0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::FitString_Line(std::wstring, int, int&) */

void __thiscall
Sexy::PrimeTypeface::FitString_Line(PrimeTypeface *this,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  PrimeTypeface *this_00;
  undefined1 auStack_7d8 [8];
  Typesetter aTStack_7d0 [1992];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::Typesetter::Typesetter(aTStack_7d0,(ICoreAllocator *)0x0);
  do {
    this_00 = this;
    FUN_05477b24(auStack_7d8,param_2);
    iVar1 = SizeString_Line(this_00,auStack_7d8);
    FUN_05476c50(auStack_7d8);
    if (iVar1 <= param_3) break;
    this = (PrimeTypeface *)ShrunkTypeface(this_00);
  } while (this != (PrimeTypeface *)0x0);
  *param_4 = iVar1;
  EA::Text::Typesetter::~Typesetter(aTStack_7d0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::PrepareString_Simple(float, float, std::wstring, Sexy::Color const&) */

void __thiscall
Sexy::PrimeTypeface::PrepareString_Simple
          (float param_1,float param_2,PrimeTypeface *this,undefined8 param_4,Color *param_5)

{
  char cVar1;
  undefined8 uVar2;
  wchar16 *pwVar3;
  ulong uVar4;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  Insets aIStack_170 [16];
  LineLayout aLStack_160 [344];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Color::IsInvalid(param_5);
  if (cVar1 == '\0') {
    Insets::Insets(aIStack_170,(Insets *)param_5);
  }
  else {
    Color::Color((Color *)aIStack_170,*(int *)(this + 0x270));
  }
  EA::Text::LineLayout::LineLayout(aLStack_160,(ICoreAllocator *)0x0);
  uVar2 = FUN_054766ec(param_4);
  FUN_05478178(auStack_178,uVar2,auStack_180);
  pwVar3 = (wchar16 *)PrimeText::String32to16(auStack_178);
  uVar4 = FUN_054765d0(param_4);
  EA::Text::LayoutSimple
            (pwVar3,uVar4,param_1,param_2,*(Font **)this,aLStack_160,(LayoutSettings *)0x0,0x14);
  FUN_05476c50(auStack_178);
  nop();
  uVar2 = PrepareGlyphMesh(this,aLStack_160,(Color *)aIStack_170,false);
  EA::Text::LineLayout::~LineLayout(aLStack_160);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::DrawString_Simple(Sexy::Graphics*, float, float, std::wstring, Sexy::Color,
   Sexy::PrimeTextExtraParameters*) */

void __thiscall
Sexy::PrimeTypeface::DrawString_Simple
          (PrimeTypeface *param_1,float param_3,PrimeTypeface *this,uint param_4,undefined8 param_5,
          undefined8 param_6,PrimeTextExtraParameters *param_7)

{
  Graphics *this_00;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05477b24(auStack_10,param_5);
  this_00 = (Graphics *)PrepareString_Simple(param_1._0_4_,param_3,this,auStack_10,param_6);
  FUN_05476c50(auStack_10);
  ApplyOptionalParameters
            (this,(PrimeGlyphMesh *)this_00,param_7,(float)param_1._0_4_,param_3,0.0,0.0);
  PrimeGlyphMesh::Draw(this_00,param_4,0);
  if (this_00 != (Graphics *)0x0) {
    PrimeGlyphMesh::~PrimeGlyphMesh((PrimeGlyphMesh *)this_00);
    AK::FreeHook(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::PrepareString_Line(float, float, float, std::wstring, EA::Text::HAlignment,
   Sexy::Color const&) */

void __thiscall
Sexy::PrimeTypeface::PrepareString_Line
          (float param_1,float param_2,float param_3,PrimeTypeface *this,undefined8 param_5,
          undefined4 param_6,Color *param_7)

{
  undefined4 uVar1;
  char cVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  TextStyle *pTVar3;
  wchar16 *pwVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_944 [4];
  undefined1 auStack_940 [8];
  Insets aIStack_938 [16];
  LineLayout aLStack_928 [344];
  Typesetter aTStack_7d0 [1992];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Color::IsInvalid(param_7);
  if (cVar2 == '\0') {
    Insets::Insets(aIStack_938,(Insets *)param_7);
  }
  else {
    Color::Color((Color *)aIStack_938,*(int *)(this + 0x270));
  }
  EA::Text::Typesetter::Typesetter(aTStack_7d0,(ICoreAllocator *)0x0);
  EA::Text::LineLayout::LineLayout(aLStack_928,(ICoreAllocator *)0x0);
  FUN_05477b24(auStack_940,param_5);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)FitString_Line(this,auStack_940,(int)param_3,auStack_944);
  FUN_05476c50(auStack_940);
  pTVar3 = (TextStyle *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  uVar1 = *(undefined4 *)(pTVar3 + 0x288);
  *(undefined4 *)(pTVar3 + 0x288) = param_6;
  FUN_05477b24(auStack_940,param_5);
  pwVar4 = (wchar16 *)PrimeText::String32to16(auStack_940);
  uVar5 = FUN_054765d0(param_5);
  EA::Text::Typesetter::LayoutParagraph
            (aTStack_7d0,pwVar4,uVar5,param_1,param_2,param_3 + param_1,param_2,pTVar3,aLStack_928,
             0x7f);
  FUN_05476c50(auStack_940);
  *(undefined4 *)(pTVar3 + 0x288) = uVar1;
  uVar6 = PrepareGlyphMesh(this,aLStack_928,(Color *)aIStack_938,false);
  EA::Text::LineLayout::~LineLayout(aLStack_928);
  EA::Text::Typesetter::~Typesetter(aTStack_7d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::DrawString_Line(Sexy::Graphics*, float, float, float, std::wstring,
   EA::Text::HAlignment, Sexy::Color, Sexy::PrimeTextExtraParameters*) */

void __thiscall
Sexy::PrimeTypeface::DrawString_Line
          (PrimeTypeface *param_1,float param_3,float param_4,PrimeTypeface *this,uint param_5,
          undefined8 param_6,undefined4 param_7,undefined8 param_8,PrimeTextExtraParameters *param_9
          )

{
  Graphics *this_00;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05477b24(auStack_10,param_6);
  this_00 = (Graphics *)
            PrepareString_Line(param_1._0_4_,param_3,param_4,this,auStack_10,param_7,param_8);
  FUN_05476c50(auStack_10);
  ApplyOptionalParameters
            (this,(PrimeGlyphMesh *)this_00,param_9,(float)param_1._0_4_,param_3,param_4,0.0);
  PrimeGlyphMesh::Draw(this_00,param_5,0);
  if (this_00 != (Graphics *)0x0) {
    PrimeGlyphMesh::~PrimeGlyphMesh((PrimeGlyphMesh *)this_00);
    AK::FreeHook(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::PrepareString_Paragraph(float, float, float, float, std::wstring,
   EA::Text::HAlignment, EA::Text::VAlignment, Sexy::Color const&) */

void __thiscall
Sexy::PrimeTypeface::PrepareString_Paragraph
          (float param_1,float param_2,float param_3,float param_4,PrimeTypeface *this,
          undefined8 param_6,undefined4 param_7,undefined4 param_8,Color *param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  TextStyle *pTVar4;
  undefined8 uVar5;
  wchar16 *pwVar6;
  ulong uVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined1 auStack_948 [8];
  undefined1 auStack_940 [8];
  Color aCStack_938 [16];
  LineLayout aLStack_928 [344];
  Typesetter aTStack_7d0 [1992];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = Color::IsInvalid(param_9);
  if (cVar3 == '\0') {
    Insets::Insets((Insets *)aCStack_938,(Insets *)param_9);
  }
  else {
    Color::Color(aCStack_938,*(int *)(this + 0x270));
  }
  EA::Text::Typesetter::Typesetter(aTStack_7d0,(ICoreAllocator *)0x0);
  EA::Text::LineLayout::LineLayout(aLStack_928,(ICoreAllocator *)0x0);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)this;
  if (param_4 < (float)ParagraphHeightUnlimited) {
    FUN_05477b24(auStack_940,param_6);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)FitString_Paragraph(this,auStack_940,(int)param_3,(int)param_4,auStack_948);
    FUN_05476c50(auStack_940);
  }
  pTVar4 = (TextStyle *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  uVar1 = *(undefined4 *)(pTVar4 + 0x288);
  uVar2 = *(undefined4 *)(pTVar4 + 0x28c);
  *(undefined4 *)(pTVar4 + 0x288) = param_7;
  *(undefined4 *)(pTVar4 + 0x28c) = param_8;
  uVar5 = FUN_054766ec(param_6);
  FUN_05478178(auStack_940,uVar5,auStack_948);
  pwVar6 = (wchar16 *)PrimeText::String32to16(auStack_940);
  uVar7 = FUN_054765d0(param_6);
  EA::Text::Typesetter::LayoutParagraph
            (aTStack_7d0,pwVar6,uVar7,param_1,param_2,param_3 + param_1,param_4 + param_2,pTVar4,
             aLStack_928,0x7f);
  FUN_05476c50(auStack_940);
  nop();
  *(undefined4 *)(pTVar4 + 0x288) = uVar1;
  *(undefined4 *)(pTVar4 + 0x28c) = uVar2;
  uVar5 = PrepareGlyphMesh(this,aLStack_928,aCStack_938,false);
  EA::Text::LineLayout::~LineLayout(aLStack_928);
  EA::Text::Typesetter::~Typesetter(aTStack_7d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::DrawString_Paragraph(Sexy::Graphics*, float, float, float, float,
   std::wstring, EA::Text::HAlignment, EA::Text::VAlignment, Sexy::Color,
   Sexy::PrimeTextExtraParameters*) */

void __thiscall
Sexy::PrimeTypeface::DrawString_Paragraph
          (PrimeTypeface *param_1,float param_3,float param_4,float param_5,PrimeTypeface *this,
          uint param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9,undefined8 param_10,
          PrimeTextExtraParameters *param_11)

{
  Graphics *this_00;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05477b24(auStack_10,param_7);
  this_00 = (Graphics *)
            PrepareString_Paragraph
                      (param_1._0_4_,param_3,param_4,param_5,this,auStack_10,param_8,param_9,
                       param_10);
  FUN_05476c50(auStack_10);
  ApplyOptionalParameters
            (this,(PrimeGlyphMesh *)this_00,param_11,(float)param_1._0_4_,param_3,param_4,param_5);
  PrimeGlyphMesh::Draw(this_00,param_6,0);
  if (this_00 != (Graphics *)0x0) {
    PrimeGlyphMesh::~PrimeGlyphMesh((PrimeGlyphMesh *)this_00);
    AK::FreeHook(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::DrawString_Paragraph(Sexy::Graphics*, Sexy::TRect<int>, std::wstring,
   EA::Text::HAlignment, EA::Text::VAlignment, Sexy::Color, Sexy::PrimeTextExtraParameters*) */

void __thiscall
Sexy::PrimeTypeface::DrawString_Paragraph
          (PrimeTypeface *this,uint param_2,int *param_3,undefined8 param_4,undefined4 param_5,
          undefined4 param_6,undefined8 param_7,PrimeTextExtraParameters *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Graphics *this_00;
  undefined1 auStack_10 [8];
  long local_8;
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  iVar4 = param_3[3];
  local_8 = ___stack_chk_guard;
  FUN_05477b24(auStack_10,param_4);
  this_00 = (Graphics *)
            PrepareString_Paragraph
                      ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)iVar3,(float)iVar4,this,
                       auStack_10,param_5,param_6,param_7);
  FUN_05476c50(auStack_10);
  ApplyOptionalParameters
            (this,(PrimeGlyphMesh *)this_00,param_8,(float)*param_3,(float)param_3[1],
             (float)param_3[2],(float)param_3[3]);
  PrimeGlyphMesh::Draw(this_00,param_2,0);
  if (this_00 != (Graphics *)0x0) {
    PrimeGlyphMesh::~PrimeGlyphMesh((PrimeGlyphMesh *)this_00);
    AK::FreeHook(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeTypeface::PrepareString_Typesetter(EA::Text::Typesetter&, float, bool) */

void __thiscall
Sexy::PrimeTypeface::PrepareString_Typesetter
          (PrimeTypeface *this,Typesetter *param_1,float param_2,bool param_3)

{
  LineLayout *pLVar1;
  long lVar2;
  undefined8 uVar3;
  Color aCStack_170 [16];
  LineLayout aLStack_160 [344];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::LineLayout::LineLayout(aLStack_160,(ICoreAllocator *)0x0);
  EA::Text::Typesetter::FinalizeParagraph(param_1,param_2);
  pLVar1 = (LineLayout *)EA::Text::Typesetter::GetLineLayout(param_1);
  EA::Text::LineLayout::operator=(aLStack_160,pLVar1);
  lVar2 = EA::Text::Typesetter::GetDefaultTextStyle(param_1);
  Color::Color(aCStack_170,*(int *)(lVar2 + 0x268));
  uVar3 = PrepareGlyphMesh(this,aLStack_160,aCStack_170,param_3);
  EA::Text::LineLayout::~LineLayout(aLStack_160);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* Sexy::PrimeTypeface::DrawString_Typesetter(Sexy::Graphics*, EA::Text::Typesetter&, float, bool)
    */

void __thiscall
Sexy::PrimeTypeface::DrawString_Typesetter
          (PrimeTypeface *this,Graphics *param_1,Typesetter *param_2,float param_3,bool param_4)

{
  Graphics *this_00;
  
  this_00 = (Graphics *)PrepareString_Typesetter(this,param_2,param_3,param_4);
  PrimeGlyphMesh::Draw(this_00,(uint)param_1,0);
  if (this_00 != (Graphics *)0x0) {
    PrimeGlyphMesh::~PrimeGlyphMesh((PrimeGlyphMesh *)this_00);
    AK::FreeHook(this_00);
    return;
  }
  return;
}

