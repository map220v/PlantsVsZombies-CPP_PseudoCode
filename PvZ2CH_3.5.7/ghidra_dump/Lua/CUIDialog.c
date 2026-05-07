// Class: Lua::CUIDialog


/* Lua::CUIDialog::GetLayoutName() */

undefined8 Lua::CUIDialog::GetLayoutName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIDialog::ButtonPress(int) */

void __thiscall Lua::CUIDialog::ButtonPress(CUIDialog *this,int param_1)

{
  int iVar1;
  CLuaEngine *pCVar2;
  string asStack_10 [8];
  long local_8;
  
  pCVar2 = gLuaEngine;
  iVar1 = *(int *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  if ((iVar1 != 0) && ((*(uint *)(this + 0x144) & 1) != 0)) {
    std::string::string(asStack_10,"ButtonPress");
    CLuaEngine::ExecuteListener(pCVar2,iVar1,asStack_10,param_1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Lua::CUIDialog::ButtonPress(int) */

void __thiscall Lua::CUIDialog::ButtonPress(CUIDialog *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIDialog::ButtonDepress(int) */

void __thiscall Lua::CUIDialog::ButtonDepress(CUIDialog *this,int param_1)

{
  int iVar1;
  CLuaEngine *pCVar2;
  string asStack_10 [8];
  long local_8;
  
  pCVar2 = gLuaEngine;
  iVar1 = *(int *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  if ((iVar1 != 0) && ((*(uint *)(this + 0x144) & 1) != 0)) {
    std::string::string(asStack_10,"ButtonDepress");
    CLuaEngine::ExecuteListener(pCVar2,iVar1,asStack_10,param_1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Lua::CUIDialog::ButtonDepress(int) */

void __thiscall Lua::CUIDialog::ButtonDepress(CUIDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIDialog::TabSelectionChanged(int) */

void __thiscall Lua::CUIDialog::TabSelectionChanged(CUIDialog *this,int param_1)

{
  int iVar1;
  CLuaEngine *pCVar2;
  string asStack_10 [8];
  long local_8;
  
  pCVar2 = gLuaEngine;
  iVar1 = *(int *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  if ((iVar1 != 0) && ((*(uint *)(this + 0x144) >> 3 & 1) != 0)) {
    std::string::string(asStack_10,"TabSelectionChanged");
    CLuaEngine::ExecuteListener(pCVar2,iVar1,asStack_10,param_1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Lua::CUIDialog::TabSelectionChanged(int) */

void __thiscall Lua::CUIDialog::TabSelectionChanged(CUIDialog *this,int param_1)

{
  TabSelectionChanged(this + -0x138,param_1);
  return;
}


/* Lua::CUIDialog::RegisterHandler(int, int) */

void __thiscall Lua::CUIDialog::RegisterHandler(CUIDialog *this,int param_1,int param_2)

{
  *(int *)(this + 0x140) = param_1;
  *(int *)(this + 0x144) = param_2;
  return;
}


/* Lua::CUIDialog::ModifyEventMask(int, int) */

void __thiscall Lua::CUIDialog::ModifyEventMask(CUIDialog *this,int param_1,int param_2)

{
  *(uint *)(this + 0x144) = (param_1 | *(uint *)(this + 0x144)) & (param_2 ^ 0xffffffffU);
  return;
}


/* Lua::CUIDialog::ShowDialog() */

void __thiscall Lua::CUIDialog::ShowDialog(CUIDialog *this)

{
  (**(code **)(*(long *)this + 0x310))();
  return;
}


/* Lua::CUIDialog::CloseDialog() */

void __thiscall Lua::CUIDialog::CloseDialog(CUIDialog *this)

{
  *(undefined4 *)(this + 0x140) = 0;
  (**(code **)(*(long *)this + 0x318))();
  return;
}


/* Lua::CUIDialog::AddListener(std::string const&, int) */

void __thiscall Lua::CUIDialog::AddListener(CUIDialog *this,string *param_1,int param_2)

{
  UITabControl *this_00;
  
  if ((param_2 == 1) &&
     (this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,param_1),
     this_00 != (UITabControl *)0x0)) {
    UITabControl::SetListener(this_00,(TabControlListener *)(this + 0x138));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIDialog::~CUIDialog() */

void __thiscall Lua::CUIDialog::~CUIDialog(CUIDialog *this)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined **)(this + 0xd8) = &DAT_06a2c488;
  *(undefined ***)this = &PTR_GetClass_06a2c130;
  *(undefined **)(this + 0x138) = &DAT_06a2c4d0;
  local_18 = std::
             map<std::string,Lua::CUIDialog*,std::less<std::string>,std::allocator<std::pair<std::string_const,Lua::CUIDialog*>>>
             ::find((map<std::string,Lua::CUIDialog*,std::less<std::string>,std::allocator<std::pair<std::string_const,Lua::CUIDialog*>>>
                     *)s_mapDlgs,(string *)(this + 0x158));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)s_mapDlgs);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if ((bVar1) &&
     (lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18),
     *(CUIDialog **)(lVar2 + 8) == this)) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    *(undefined8 *)(lVar2 + 8) = 0;
  }
  *(undefined4 *)(this + 0x140) = 0;
  std::string::~string((string *)(this + 0x158));
  if (local_8 == ___stack_chk_guard) {
    UI::Dialog::~Dialog((Dialog *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::CUIDialog::~CUIDialog() */

void __thiscall Lua::CUIDialog::~CUIDialog(CUIDialog *this)

{
  ~CUIDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIDialog::GetDialog(char const*) */

void Lua::CUIDialog::GetDialog(char *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (char *)0x0) {
    std::string::string((string *)&local_10,param_1);
    local_18 = std::
               map<std::string,Lua::CUIDialog*,std::less<std::string>,std::allocator<std::pair<std::string_const,Lua::CUIDialog*>>>
               ::find((map<std::string,Lua::CUIDialog*,std::less<std::string>,std::allocator<std::pair<std::string_const,Lua::CUIDialog*>>>
                       *)s_mapDlgs,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)s_mapDlgs);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar1 == '\0') {
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      uVar3 = *(undefined8 *)(lVar2 + 8);
      goto LAB_04fd9d34;
    }
  }
  uVar3 = 0;
LAB_04fd9d34:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIDialog::SetDialog(char const*, Lua::CUIDialog*) */

void Lua::CUIDialog::SetDialog(char *param_1,CUIDialog *param_2)

{
  undefined8 *puVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (char *)0x0) {
    std::string::string(asStack_10,param_1);
    puVar1 = (undefined8 *)
             std::
             map<std::string,Lua::CUIDialog*,std::less<std::string>,std::allocator<std::pair<std::string_const,Lua::CUIDialog*>>>
             ::operator[]((map<std::string,Lua::CUIDialog*,std::less<std::string>,std::allocator<std::pair<std::string_const,Lua::CUIDialog*>>>
                           *)s_mapDlgs,asStack_10);
    *puVar1 = param_2;
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Lua::CUIDialog::CUIDialog(char const*, Sexy::WidgetContainer*) */

void __thiscall Lua::CUIDialog::CUIDialog(CUIDialog *this,char *param_1,WidgetContainer *param_2)

{
  WidgetContainer *__n;
  
  __n = param_2;
  UI::Dialog::Dialog((Dialog *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  *(undefined4 *)(this + 0x144) = 1;
  *(undefined ***)this = &PTR_GetClass_06a2c130;
  *(undefined **)(this + 0xd8) = &DAT_06a2c488;
  *(undefined **)(this + 0x138) = &DAT_06a2c4d0;
  *(undefined4 *)(this + 0x140) = 0;
  this[0x148] = (CUIDialog)0x0;
  this[0x149] = (CUIDialog)0x0;
  *(undefined8 *)(this + 0x150) = 0;
  Set8BytesTo0((string *)(this + 0x158));
  *(undefined4 *)(this + 0x140) = 0;
  std::string::append((string *)(this + 0x158),param_1,(size_t)__n);
  *(undefined4 *)(this + 0x144) = 1;
  *(WidgetContainer **)(this + 0x150) = param_2;
  SetDialog(param_1,this);
  return;
}


/* Lua::CUIDialog::Create(char const*, Sexy::WidgetContainer*) */

CUIDialog * Lua::CUIDialog::Create(char *param_1,WidgetContainer *param_2)

{
  CUIDialog *this;
  
  this = ::operator_new(0x160);
  CUIDialog(this,param_1,param_2);
  return this;
}


/* Lua::CUIDialog::OnCreate() */

ulong __thiscall Lua::CUIDialog::OnCreate(CUIDialog *this)

{
  byte bVar1;
  ulong uVar2;
  
  this[0x149] = (CUIDialog)0x0;
  this[0x148] = (CUIDialog)0x0;
  if (*(long *)(this + 0x150) != 0) {
    bVar1 = UI::Dialog::CreateFromLayout((Dialog *)this);
    if (bVar1 != 0) {
      (**(code **)(**(long **)(this + 0x150) + 0x60))(*(long **)(this + 0x150),this);
    }
    return (ulong)bVar1;
  }
  uVar2 = UI::Dialog::OnCreate((Dialog *)this);
  return uVar2;
}


/* Lua::CUIDialog::OnClose() */

void __thiscall Lua::CUIDialog::OnClose(CUIDialog *this)

{
  char cVar1;
  long *plVar2;
  
  if (this[0x149] != (CUIDialog)0x0) {
    this[0x148] = (CUIDialog)0x1;
    return;
  }
  plVar2 = *(long **)(this + 0x150);
  if (plVar2 != (long *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x70))(plVar2);
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this + 0x150) + 0x68))(*(long **)(this + 0x150),this);
      (**(code **)(*gLawnApp + 0x150))(gLawnApp,this);
    }
    this[0x128] = (CUIDialog)0x1;
    return;
  }
  UI::Dialog::OnClose((Dialog *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIDialog::Draw(Sexy::Graphics*) */

void __thiscall Lua::CUIDialog::Draw(CUIDialog *this,Graphics *param_1)

{
  int iVar1;
  CLuaEngine *pCVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x128] == (CUIDialog)0x0) {
    iVar1 = *(int *)(this + 0x140);
    this[0x149] = (CUIDialog)0x1;
    pCVar2 = gLuaEngine;
    if ((iVar1 != 0) && ((*(uint *)(this + 0x144) >> 2 & 1) != 0)) {
      std::string::string(asStack_10,"PreDraw");
      CLuaEngine::ExecuteListener(pCVar2,iVar1,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    UI::Dialog::Draw((Dialog *)this,param_1);
    this[0x149] = (CUIDialog)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lua::CUIDialog::Update() */

void __thiscall Lua::CUIDialog::Update(CUIDialog *this)

{
  int iVar1;
  CLuaEngine *pCVar2;
  string asStack_10 [8];
  long local_8;
  
  pCVar2 = gLuaEngine;
  local_8 = ___stack_chk_guard;
  if (this[0x128] == (CUIDialog)0x0) {
    if ((this[0x148] == (CUIDialog)0x0) || (this[0x149] != (CUIDialog)0x0)) {
      iVar1 = *(int *)(this + 0x140);
      if ((iVar1 != 0) && ((*(uint *)(this + 0x144) >> 4 & 1) != 0)) {
        std::string::string(asStack_10,"Update");
        CLuaEngine::ExecuteListener(pCVar2,iVar1,asStack_10,0);
        std::string::~string(asStack_10);
        nop();
      }
      UIFutureGiftShop::Update((UIFutureGiftShop *)this);
    }
    else {
      this[0x148] = (CUIDialog)0x0;
      (**(code **)(*(long *)this + 0x318))();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

