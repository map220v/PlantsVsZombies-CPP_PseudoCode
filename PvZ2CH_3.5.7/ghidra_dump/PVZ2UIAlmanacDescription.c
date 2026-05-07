// Class: PVZ2UIAlmanacDescription


/* PVZ2UIAlmanacDescription::~PVZ2UIAlmanacDescription() */

void __thiscall PVZ2UIAlmanacDescription::~PVZ2UIAlmanacDescription(PVZ2UIAlmanacDescription *this)

{
  PrimeText *this_00;
  PrimeGlyphMesh *pPVar1;
  
  *(undefined ***)this = &PTR_GetClass_0683ab70;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  pPVar1 = *(PrimeGlyphMesh **)(this + 0xe8);
  if (pPVar1 != (PrimeGlyphMesh *)0x0) {
    Sexy::PrimeGlyphMesh::~PrimeGlyphMesh(pPVar1);
    AK::FreeHook(pPVar1);
    *(undefined8 *)(this + 0xe8) = 0;
  }
  pPVar1 = *(PrimeGlyphMesh **)(this + 0xf0);
  if (pPVar1 != (PrimeGlyphMesh *)0x0) {
    Sexy::PrimeGlyphMesh::~PrimeGlyphMesh(pPVar1);
    AK::FreeHook(pPVar1);
    *(undefined8 *)(this + 0xf0) = 0;
  }
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIAlmanacDescription::~PVZ2UIAlmanacDescription() */

void __thiscall PVZ2UIAlmanacDescription::~PVZ2UIAlmanacDescription(PVZ2UIAlmanacDescription *this)

{
  ~PVZ2UIAlmanacDescription(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIAlmanacDescription::PVZ2UIAlmanacDescription(std::wstring const&, std::wstring const&) */

void __thiscall
PVZ2UIAlmanacDescription::PVZ2UIAlmanacDescription
          (PVZ2UIAlmanacDescription *this,wstring *param_1,wstring *param_2)

{
  PrimeText *this_00;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0683ab70;
  FUN_05476574(this + 0xd8);
  FUN_05476574(this + 0xe0);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  thunk_FUN_05477b9c(this + 0xd8,param_1);
  thunk_FUN_05477b9c(this + 0xe0,param_2);
  *(undefined4 *)(this + 0xd4) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacDescription::CreateTextMeshes() */

void __thiscall PVZ2UIAlmanacDescription::CreateTextMeshes(PVZ2UIAlmanacDescription *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  PrimeGlyphMesh *pPVar7;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  pPVar7 = *(PrimeGlyphMesh **)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  if (pPVar7 != (PrimeGlyphMesh *)0x0) {
    Sexy::PrimeGlyphMesh::~PrimeGlyphMesh(pPVar7);
    AK::FreeHook(pPVar7);
    *(undefined8 *)(this + 0xe8) = 0;
  }
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(this + 0x54);
  FUN_05477b24(aIStack_18,this + 0xd8);
  uVar5 = Sexy::PrimeTypeface::PrepareString_Paragraph
                    ((PrimeTypeface *)0x0,0,(float)iVar1,(float)iVar2,uVar5,aIStack_18,0,0,
                     &PrimeText_Game::Color_AlmanacHead);
  *(undefined8 *)(this + 0xe8) = uVar5;
  FUN_05476c50(aIStack_18);
  pPVar7 = *(PrimeGlyphMesh **)(this + 0xf0);
  if (pPVar7 != (PrimeGlyphMesh *)0x0) {
    Sexy::PrimeGlyphMesh::~PrimeGlyphMesh(pPVar7);
    AK::FreeHook(pPVar7);
    *(undefined8 *)(this + 0xf0) = 0;
  }
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar1 = *(int *)(this + 0xd4);
  iVar2 = *(int *)(this + 0x50);
  iVar3 = *(int *)(this + 0x54);
  FUN_05477b24(auStack_20,this + 0xe0);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_AlmanacDesc);
  uVar5 = Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                    (0,(float)iVar1,(float)iVar2,(float)iVar3,uVar5,auStack_20,0,0,aIStack_18);
  *(undefined8 *)(this + 0xf0) = uVar5;
  FUN_05476c50(auStack_20);
  lVar6 = Sexy::PrimeText::Instance();
  uVar4 = FUN_04376eac(*(undefined4 *)(lVar6 + 0x24));
  *(undefined4 *)(this + 0xf8) = uVar4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacDescription::Resize(int, int, int, int) */

void __thiscall
PVZ2UIAlmanacDescription::Resize
          (PVZ2UIAlmanacDescription *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x50) == param_3) && (*(int *)(this + 0x54) == param_4)) {
    Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = FUN_043772fc(0x2d);
    *(undefined4 *)(this + 0xd4) = uVar2;
    local_18 = 0;
    local_14 = 0;
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    FUN_05477b24(auStack_10,this + 0xd8);
    Sexy::PrimeTypeface::SizeString_Paragraph((float)param_3,uVar4,auStack_10,&local_18,&local_14);
    FUN_05476c50(auStack_10);
    iVar1 = local_14;
    if (*(int *)(this + 0xd4) < local_14) {
      iVar3 = FUN_043772fc(10);
      *(int *)(this + 0xd4) = iVar1 + iVar3;
    }
    local_14 = 0;
    local_18 = 0;
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    FUN_05477b24(auStack_10,this + 0xe0);
    Sexy::PrimeTypeface::SizeString_Paragraph((float)param_3,uVar4,auStack_10,&local_18,&local_14);
    FUN_05476c50(auStack_10);
    Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,*(int *)(this + 0xd4) + local_14);
    CreateTextMeshes(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIAlmanacDescription::DrawTextMeshes(Sexy::Graphics*) */

void __thiscall
PVZ2UIAlmanacDescription::DrawTextMeshes(PVZ2UIAlmanacDescription *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(this + 0xf8);
  lVar3 = Sexy::PrimeText::Instance();
  iVar2 = FUN_04376eac(*(undefined4 *)(lVar3 + 0x24));
  if (iVar1 != iVar2) {
    CreateTextMeshes(this);
  }
  if (*(Graphics **)(this + 0xe8) != (Graphics *)0x0) {
    Sexy::PrimeGlyphMesh::Draw(*(Graphics **)(this + 0xe8),(uint)param_1,0);
  }
  if (*(Graphics **)(this + 0xf0) != (Graphics *)0x0) {
    Sexy::PrimeGlyphMesh::Draw(*(Graphics **)(this + 0xf0),(uint)param_1,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAlmanacDescription::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIAlmanacDescription::Draw(PVZ2UIAlmanacDescription *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  DrawTextMeshes(this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

