// Class: UIWidgetText


/* UIWidgetText::SetViewRect(Sexy::TRect<int>) */

void __thiscall UIWidgetText::SetViewRect(UIWidgetText *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0xf4) = *param_2;
  *(undefined8 *)(this + 0xfc) = uVar1;
  return;
}


/* UIWidgetText::~UIWidgetText() */

void __thiscall UIWidgetText::~UIWidgetText(UIWidgetText *this)

{
  *(undefined ***)this = &PTR_GetClass_0696fd40;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UIWidgetText::~UIWidgetText() */

void __thiscall UIWidgetText::~UIWidgetText(UIWidgetText *this)

{
  ~UIWidgetText(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetText::SetString(std::string const&) */

void __thiscall UIWidgetText::SetString(UIWidgetText *this,string *param_1)

{
  undefined1 auStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::UTF8StringToWString((Sexy *)param_1,___stack_chk_guard);
  FUN_054766c8(this + 0xd8,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWidgetText::SetFontIndex(int) */

void __thiscall UIWidgetText::SetFontIndex(UIWidgetText *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = StringHelper::ToFont(param_1);
  FUN_04b7fcd4(this + 0xe8,uVar1);
  return;
}


/* UIWidgetText::GetFontIndex() */

void __thiscall UIWidgetText::GetFontIndex(UIWidgetText *this)

{
  StringHelper::ToFontIndex(*(PrimeTypeface **)(this + 0xe8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetText::FormatByWidth() */

void __thiscall UIWidgetText::FormatByWidth(UIWidgetText *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_18 = 0;
  uVar2 = *(undefined8 *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  local_14 = 0;
  FUN_05477b24(auStack_10,this + 0xd8);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)*(int *)(this + 0x50),uVar2,auStack_10,&local_18,&local_14);
  FUN_05476c50(auStack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x54) = local_14;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetText::FormatByHeight() */

void __thiscall UIWidgetText::FormatByHeight(UIWidgetText *this)

{
  undefined4 uVar1;
  PrimeTypeface *pPVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  pPVar2 = *(PrimeTypeface **)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  FUN_05477b24(auStack_10,this + 0xd8);
  uVar1 = Sexy::PrimeTypeface::SizeString_Line(pPVar2,auStack_10);
  FUN_05476c50(auStack_10);
  *(undefined4 *)(this + 0x50) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetText::UIWidgetText(std::wstring const&) */

void __thiscall UIWidgetText::UIWidgetText(UIWidgetText *this,wstring *param_1)

{
  undefined8 uVar1;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0696fd40;
  FUN_05476574(this + 0xd8);
  *(undefined4 *)(this + 0xe0) = 3;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  this[0xf0] = (UIWidgetText)0x0;
  *(undefined8 *)(this + 0xe8) = uVar1;
  Sexy::Insets::Insets((Insets *)(this + 0xf4));
  Sexy::Color::Color(aCStack_18,8);
  Sexy::Widget::SetColor((Widget *)this,0,aCStack_18);
  PuzzleTip::SetTip(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetText::Draw(Sexy::Graphics*) */

void __thiscall UIWidgetText::Draw(UIWidgetText *this,Graphics *param_1)

{
  char cVar1;
  Insets *pIVar2;
  undefined8 uVar3;
  Insets aIStack_28 [16];
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0xf0] != (UIWidgetText)0x0) && (*(long *)(this + 0x20) != 0)) {
    Sexy::Insets::Insets
              (aIStack_28,*(int *)(this + 0xf4),-*(int *)(*(long *)(this + 0x20) + 0x4c),
               *(int *)(this + 0xfc),*(int *)(this + 0x100));
    (**(code **)(*(long *)this + 0x48))(aTStack_18,this);
    cVar1 = Sexy::TRect<int>::Intersects((TRect<int> *)aIStack_28,aTStack_18);
    if (cVar1 == '\0') goto LAB_04b80040;
  }
  if (*(long *)(this + 0xe8) != 0) {
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar3 = *(undefined8 *)(this + 0xe8);
    pIVar2 = (Insets *)(**(code **)(*(long *)this + 0x178))(this,0);
    Sexy::Insets::Insets((Insets *)aTStack_18,pIVar2);
    WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar3,(Insets *)aTStack_18,
                    *(undefined4 *)(this + 0xe0),1);
  }
LAB_04b80040:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

