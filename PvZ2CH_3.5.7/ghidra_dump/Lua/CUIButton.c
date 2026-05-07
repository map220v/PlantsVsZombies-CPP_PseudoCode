// Class: Lua::CUIButton


/* Lua::CUIButton::SetImageType(PVZ2UIImageType) */

void __thiscall Lua::CUIButton::SetImageType(CUIButton *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x1d8) = param_2;
  *(undefined4 *)(this + 0x248) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIButton::TouchBegan(Sexy::Touch const&) */

void __thiscall Lua::CUIButton::TouchBegan(CUIButton *this,Touch *param_1)

{
  int iVar1;
  CLuaEngine *pCVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1a8] == (CUIButton)0x0) && (*(long *)(this + 0x2b0) == 0)) {
    iVar1 = *(int *)(this + 0x2fc);
    *(undefined8 *)(this + 0x2b0) = *(undefined8 *)param_1;
    this[0x2b8] = (CUIButton)0x1;
    pCVar2 = gLuaEngine;
    if (iVar1 != 0) {
      std::string::string(asStack_10,"ButtonPress");
      CLuaEngine::ExecuteListener(pCVar2,iVar1,asStack_10,*(undefined4 *)(this + 0xd4));
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIButton::TouchEnded(Sexy::Touch const&) */

void __thiscall Lua::CUIButton::TouchEnded(CUIButton *this,Touch *param_1)

{
  int iVar1;
  CLuaEngine *pCVar2;
  string asStack_10 [8];
  long local_8;
  
  pCVar2 = gLuaEngine;
  local_8 = ___stack_chk_guard;
  if ((this[0x1a8] == (CUIButton)0x0) && (*(long *)(this + 0x2b0) == *(long *)param_1)) {
    if (this[0x2b8] != (CUIButton)0x0) {
      iVar1 = *(int *)(this + 0x2fc);
      if (iVar1 != 0) {
        std::string::string(asStack_10,"ButtonDepress");
        CLuaEngine::ExecuteListener(pCVar2,iVar1,asStack_10,*(undefined4 *)(this + 0xd4));
        std::string::~string(asStack_10);
        nop();
      }
      if ((this[0x71] != (CUIButton)0x0) && (*(int *)(this + 0x1ac) == 1)) {
        PVZ2UIButton::SetRadioButtonSelected((PVZ2UIButton *)this);
      }
    }
    *(undefined8 *)(this + 0x2b0) = 0;
    this[0x2b8] = (CUIButton)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIButton::CUIButton(int, std::string const&, std::string const&, int) */

void __thiscall
Lua::CUIButton::CUIButton(CUIButton *this,int param_1,string *param_2,string *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)0x0,(wstring *)aPStack_78,
             (Color *)aPStack_40);
  FUN_05476c50(aPStack_78);
  nop();
  *(int *)(this + 0x2fc) = param_4;
  *(undefined ***)this = &PTR_GetClass_06a2a4b0;
  *(undefined ***)(this + 0x198) = &PTR__CUIButton_06a2a808;
  lVar1 = StringHelper::ToImage(param_2,false);
  lVar2 = StringHelper::ToImage(param_3,false);
  if ((lVar2 != 0) && (lVar1 != 0)) {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,lVar1,1);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,lVar2,1);
    PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this,aPStack_78,aPStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::CUIButton::UnregisterLuaHandler() */

void __thiscall Lua::CUIButton::UnregisterLuaHandler(CUIButton *this)

{
  if (*(int *)(this + 0x2fc) != 0) {
    CLuaEngine::RemoveScriptHandler((int)gLuaEngine);
    *(undefined4 *)(this + 0x2fc) = 0;
  }
  return;
}


/* Lua::CUIButton::~CUIButton() */

void __thiscall Lua::CUIButton::~CUIButton(CUIButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2a4b0;
  *(undefined ***)(this + 0x198) = &PTR__CUIButton_06a2a808;
  UnregisterLuaHandler(this);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to Lua::CUIButton::~CUIButton() */

void __thiscall Lua::CUIButton::~CUIButton(CUIButton *this)

{
  ~CUIButton(this + -0x198);
  return;
}


/* Lua::CUIButton::~CUIButton() */

void __thiscall Lua::CUIButton::~CUIButton(CUIButton *this)

{
  ~CUIButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Lua::CUIButton::~CUIButton() */

void __thiscall Lua::CUIButton::~CUIButton(CUIButton *this)

{
  ~CUIButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIButton::TouchMoved(Sexy::Touch const&) */

void __thiscall Lua::CUIButton::TouchMoved(CUIButton *this,Touch *param_1)

{
  CUIButton CVar1;
  Insets aIStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x2b0) == *(long *)param_1) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    CVar1 = (CUIButton)
            Sexy::TRect<int>::Contains
                      ((TRect<int> *)aIStack_18,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
    this[0x2b8] = CVar1;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::CUIButton::TouchesCanceled() */

void __thiscall Lua::CUIButton::TouchesCanceled(CUIButton *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x168);
  *(undefined8 *)(this + 0x2b0) = 0;
  this[0x2b8] = (CUIButton)0x0;
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 0x28) != Sexy::ButtonListener::ButtonMouseLeave) {
      (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined4 *)(this + 0xd4));
    }
  }
  return;
}

