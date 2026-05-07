// Class: Sexy::Font


/* Sexy::Font::GetLineSpacingOffset() */

undefined4 __thiscall Sexy::Font::GetLineSpacingOffset(Font *this)

{
  return *(undefined4 *)(this + 0x24);
}


/* Sexy::Font::CharWidthKern(wchar_t, wchar_t) */

void Sexy::Font::CharWidthKern(wchar_t param_1,wchar_t param_2)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x88))((long *)(ulong)(uint)param_1,param_2);
  return;
}


/* Sexy::Font::StaticNew() */

undefined8 Sexy::Font::StaticNew(void)

{
  return 0;
}


/* Sexy::Font::GetDescent() */

int __thiscall Sexy::Font::GetDescent(Font *this)

{
  return *(int *)(this + 0x20) - *(int *)(this + 0x18);
}


/* Sexy::Font::GetLineSpacing() */

int __thiscall Sexy::Font::GetLineSpacing(Font *this)

{
  return *(int *)(this + 0x20) + *(int *)(this + 0x24);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Font::CharWidth(wchar_t) */

void __thiscall Sexy::Font::CharWidth(Font *this,wchar_t param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476bf8(auStack_10,1,param_1,auStack_18);
  nop();
  uVar1 = (**(code **)(*(long *)this + 0x80))(this,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::Font::StaticClassInit() */

void Sexy::Font::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = StaticGetClass();
  uVar2 = ResourceInfoTypes::FontRes::StaticGetClass();
  FUN_0514da4c(lVar1 + 0x48,uVar2);
  return;
}


/* Sexy::Font::StaticGetClass() */

long * Sexy::Font::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,&DAT_055ba688,uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::Font::GetClass() const */

long * Sexy::Font::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,&DAT_055ba688,uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::Font::Font() */

void __thiscall Sexy::Font::Font(Font *this)

{
  BaseResource::BaseResource((BaseResource *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR_GetClass_06a2e440;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* Sexy::Font::Font(Sexy::Font const&) */

void __thiscall Sexy::Font::Font(Font *this,Font *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  BaseResource::BaseResource((BaseResource *)this);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined ***)this = &PTR_GetClass_06a2e440;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar3;
  return;
}


/* Sexy::Font::~Font() */

void __thiscall Sexy::Font::~Font(Font *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2e440;
  BaseResource::~BaseResource((BaseResource *)this);
  return;
}


/* Sexy::Font::~Font() */

void __thiscall Sexy::Font::~Font(Font *this)

{
  ~Font(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::Font::DrawString_Simple(Sexy::Graphics*, float, float, std::wstring, Sexy::Color,
   Sexy::PrimeTextExtraParameters*) */

void Sexy::Font::DrawString_Simple
               (float param_2,float param_3,Effect_Barrage *param_1,Graphics *param_4,
               wstring *param_5,Color *param_6)

{
  Graphics::PopState(param_4);
  Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_4,param_1);
  Graphics::SetColor(param_4,param_6);
  Graphics::WriteString(param_4,param_5,(int)param_2,(int)param_3,-1,0,true,0,-1,-1);
  Graphics::PushState(param_4);
  return;
}


/* Sexy::Font::DrawString_Line(Sexy::Graphics*, float, float, float, std::wstring,
   EA::Text::HAlignment, Sexy::Color, Sexy::PrimeTextExtraParameters*) */

void Sexy::Font::DrawString_Line
               (float param_2,float param_3,float param_4,Effect_Barrage *param_1,Graphics *param_5,
               wstring *param_6,int param_7,Color *param_8)

{
  int iVar1;
  
  Graphics::PopState(param_5);
  if (param_7 == 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
    if (param_7 == 2) {
      iVar1 = 1;
    }
  }
  Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_5,param_1);
  Graphics::SetColor(param_5,param_8);
  Graphics::WriteString(param_5,param_6,(int)param_2,(int)param_3,(int)param_4,iVar1,true,0,-1,-1);
  Graphics::PushState(param_5);
  return;
}


/* Sexy::Font::DrawString_Paragraph(Sexy::Graphics*, Sexy::TRect<int>, std::wstring,
   EA::Text::HAlignment, EA::Text::VAlignment, Sexy::Color, Sexy::PrimeTextExtraParameters*) */

void Sexy::Font::DrawString_Paragraph
               (Effect_Barrage *param_1,Graphics *param_2,TRect *param_3,wstring *param_4,
               int param_5,undefined8 param_6,Color *param_7)

{
  int iVar1;
  
  Graphics::PopState(param_2);
  if (param_5 == 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
    if (param_5 == 2) {
      iVar1 = 1;
    }
  }
  Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_2,param_1);
  Graphics::SetColor(param_2,param_7);
  Graphics::WriteWordWrapped
            (param_2,param_3,param_4,-1,iVar1,(int *)0x0,-1,(int *)0x0,(int *)0x0,true);
  Graphics::PushState(param_2);
  return;
}


/* Sexy::Font::SizeString_Line(std::wstring) */

void Sexy::Font::SizeString_Line(long *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  return;
}


/* Sexy::Font::GetLineHeight() */

float __thiscall Sexy::Font::GetLineHeight(Font *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)this + 0x68))();
  return (float)iVar1;
}


/* Sexy::Font::GetCharWidth(wchar_t) */

float Sexy::Font::GetCharWidth(wchar_t param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)(ulong)(uint)param_1 + 0x88))();
  return (float)iVar1;
}


/* Sexy::Font::SizeString_Paragraph(std::wstring, int&, int&, float) */

void __thiscall
Sexy::Font::SizeString_Paragraph
          (float param_1,Font *this,undefined8 param_3,int *param_4,int *param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  float fVar6;
  
  *param_4 = 0;
  *param_5 = 0;
  uVar5 = 0;
  lVar2 = FUN_054765c4(param_3);
  if (lVar2 != 0) {
    do {
      FUN_05476f5c(param_3,uVar5);
      fVar6 = (float)GetCharWidth((wchar_t)this);
      iVar1 = *param_4;
      *param_4 = (int)(fVar6 + (float)iVar1);
      if ((param_1 <= (float)(int)(fVar6 + (float)iVar1)) ||
         (piVar4 = (int *)FUN_05476f5c(param_3,uVar5), *piVar4 == 10)) {
        *param_4 = 0;
        fVar6 = (float)GetLineHeight(this);
        iVar1 = (**(code **)(*(long *)this + 0x78))(this);
        *param_5 = (int)(fVar6 + (float)*param_5 + (float)iVar1);
      }
      uVar5 = uVar5 + 1;
      uVar3 = FUN_054765c4(param_3);
    } while (uVar5 < uVar3);
  }
  return;
}


/* Sexy::Font::GetCharWidthKern(wchar_t, wchar_t) */

float Sexy::Font::GetCharWidthKern(wchar_t param_1,wchar_t param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)(ulong)(uint)param_1 + 0x90))((long *)(ulong)(uint)param_1,param_2);
  return (float)iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Font::DrawString_Paragraph(Sexy::Graphics*, float, float, float, float, std::wstring,
   EA::Text::HAlignment, EA::Text::VAlignment, Sexy::Color, Sexy::PrimeTextExtraParameters*) */

void Sexy::Font::DrawString_Paragraph
               (float param_2,float param_3,float param_4,float param_5,Effect_Barrage *param_1,
               Graphics *param_6,wstring *param_7,int param_8,undefined8 param_9,Color *param_10)

{
  int iVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Graphics::PopState(param_6);
  if (param_8 == 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
    if (param_8 == 2) {
      iVar1 = 1;
    }
  }
  Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_6,param_1);
  Graphics::SetColor(param_6,param_10);
  Insets::Insets(aIStack_18,(int)param_2,(int)param_3,(int)param_4,(int)param_5);
  Graphics::WriteWordWrapped
            (param_6,(TRect *)aIStack_18,param_7,-1,iVar1,(int *)0x0,-1,(int *)0x0,(int *)0x0,true);
  Graphics::PushState(param_6);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

