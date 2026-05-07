// Class: Lua::CUILabel


/* Lua::CUILabel::SetTypeface(Sexy::PrimeTypeface*) */

void __thiscall Lua::CUILabel::SetTypeface(CUILabel *this,PrimeTypeface *param_1)

{
  *(PrimeTypeface **)(this + 0xe0) = param_1;
  return;
}


/* Lua::CUILabel::SetTypeface(PrimeText_PotentialTypeface*) */

void __thiscall Lua::CUILabel::SetTypeface(CUILabel *this,PrimeText_PotentialTypeface *param_1)

{
  PrimeTypeface *pPVar1;
  
  pPVar1 = (PrimeTypeface *)PrimeText_PotentialTypeface::Typeface(param_1);
  SetTypeface(this,pPVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUILabel::SetTextColorPreDefined(Sexy::Color::PredefinedColor) */

void Lua::CUILabel::SetTextColorPreDefined(long param_1)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)&local_18);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(param_1 + 0xec) = local_18;
  *(undefined8 *)(param_1 + 0xf4) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::CUILabel::SetTextColor(Sexy::Color const&) */

void __thiscall Lua::CUILabel::SetTextColor(CUILabel *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xec) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xf4) = uVar1;
  return;
}


/* Lua::CUILabel::SetHAlignment(EA::Text::HAlignment) */

void __thiscall Lua::CUILabel::SetHAlignment(CUILabel *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xe8) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUILabel::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall Lua::CUILabel::DrawAll(CUILabel *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  lVar4 = *(long *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  if (lVar4 == 0) {
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
    WriteWordInRect(param_2,this + 0xd8,aIStack_28,uVar3,aIStack_18,2,1);
  }
  else {
    iVar1 = *(int *)(this + 0x50);
    FUN_05477b24(aIStack_28,this + 0xd8);
    uVar2 = *(undefined4 *)(this + 0xe8);
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xec));
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)0x0,0,(float)iVar1,lVar4,param_2,aIStack_28,uVar2,aIStack_18,0);
    FUN_05476c50(aIStack_28);
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::CUILabel::~CUILabel() */

void __thiscall Lua::CUILabel::~CUILabel(CUILabel *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2b7d0;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* Lua::CUILabel::~CUILabel() */

void __thiscall Lua::CUILabel::~CUILabel(CUILabel *this)

{
  ~CUILabel(this);
  AK::FreeHook(this);
  return;
}


/* Lua::CUILabel::CUILabel() */

void __thiscall Lua::CUILabel::CUILabel(CUILabel *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a2b7d0;
  FUN_05476574(this + 0xd8);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  Sexy::Color::Color((Color *)(this + 0xec),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUILabel::CUILabel(std::string const&) */

void __thiscall Lua::CUILabel::CUILabel(CUILabel *this,string *param_1)

{
  string *extraout_x1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a2b7d0;
  FUN_05476574(this + 0xd8);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  Sexy::Color::Color((Color *)(this + 0xec));
  Sexy::StringToWString((Sexy *)param_1,extraout_x1);
  FUN_054766c8(this + 0xd8,auStack_10);
  FUN_05476c50(auStack_10);
  *(undefined8 *)(this + 0xe0) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::CUILabel::CUILabel(std::wstring const&) */

void __thiscall Lua::CUILabel::CUILabel(CUILabel *this,wstring *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a2b7d0;
  FUN_05476574(this + 0xd8);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  Sexy::Color::Color((Color *)(this + 0xec),0);
  thunk_FUN_05477b9c(this + 0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUILabel::SetStringByID(std::string const&) */

void __thiscall Lua::CUILabel::SetStringByID(CUILabel *this,string *param_1)

{
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::UTF8StringToWString((Sexy *)param_1,___stack_chk_guard);
  TodStringTranslate(awStack_18);
  FUN_054766c8(this + 0xd8,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUILabel::SetString(std::string const&, std::string const&, int) */

void __thiscall Lua::CUILabel::SetString(CUILabel *this,string *param_1,string *param_2,int param_3)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  string *extraout_x1;
  undefined1 auStack_38 [8];
  wstring awStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToWString((Sexy *)param_1,___stack_chk_guard);
  Sexy::StringToWString((Sexy *)param_2,extraout_x1);
  TodStringTranslate(awStack_30);
  uVar1 = FUN_054766ec(auStack_20);
  FUN_05478178(awStack_18,uVar1,auStack_38);
  pwVar2 = (wchar_t *)FUN_054766ec(auStack_28);
  TodReplaceNumberString(awStack_18,pwVar2,param_3);
  FUN_054766c8(this + 0xd8,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  nop();
  FUN_05476c50(auStack_20);
  FUN_05476c50(auStack_28);
  FUN_05476c50(awStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Lua::CUILabel::CUILabel(std::string const&, std::string const&, int) */

void __thiscall Lua::CUILabel::CUILabel(CUILabel *this,string *param_1,string *param_2,int param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a2b7d0;
  FUN_05476574(this + 0xd8);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  Sexy::Color::Color((Color *)(this + 0xec),0);
  SetString(this,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUILabel::SetString(std::string const&, std::string const&, char*) */

void __thiscall
Lua::CUILabel::SetString(CUILabel *this,string *param_1,string *param_2,char *param_3)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  undefined1 auStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToWString((Sexy *)param_1,param_1);
  Sexy::StringToWString((Sexy *)param_2,extraout_x1);
  std::string::string(asStack_10,param_3);
  Sexy::StringToWString((Sexy *)asStack_10,extraout_x1_00);
  std::string::~string(asStack_10);
  nop();
  TodStringTranslate(awStack_38);
  uVar1 = FUN_054766ec(auStack_20);
  FUN_05478178(awStack_18,uVar1,auStack_40);
  pwVar2 = (wchar_t *)FUN_054766ec(auStack_30);
  TodReplaceString(awStack_18,pwVar2,awStack_28);
  FUN_054766c8(this + 0xd8,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  nop();
  FUN_05476c50(auStack_20);
  FUN_05476c50(awStack_28);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Lua::CUILabel::CUILabel(std::string const&, std::string const&, char*) */

void __thiscall
Lua::CUILabel::CUILabel(CUILabel *this,string *param_1,string *param_2,char *param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a2b7d0;
  FUN_05476574(this + 0xd8);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  Sexy::Color::Color((Color *)(this + 0xec),0);
  SetString(this,param_1,param_2,param_3);
  return;
}

