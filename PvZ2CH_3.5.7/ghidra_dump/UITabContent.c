// Class: UITabContent


/* UITabContent::GetTabImage() const */

UITabContent * __thiscall UITabContent::GetTabImage(UITabContent *this)

{
  return this + 0xf0;
}


/* UITabContent::~UITabContent() */

void __thiscall UITabContent::~UITabContent(UITabContent *this)

{
  *(undefined ***)this = &PTR_GetClass_06971080;
  std::string::~string((string *)(this + 0xf0));
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UITabContent::~UITabContent() */

void __thiscall UITabContent::~UITabContent(UITabContent *this)

{
  ~UITabContent(this);
  AK::FreeHook(this);
  return;
}


/* UITabContent::UITabContent() */

void __thiscall UITabContent::UITabContent(UITabContent *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_06971080;
  FUN_05476574(this + 0xe8);
  Set8BytesTo0(this + 0xf0);
  this[0xf8] = (UITabContent)0x1;
  return;
}


/* UITabContent::SetAttachTab(UIWidgetRadio*) */

void __thiscall UITabContent::SetAttachTab(UITabContent *this,UIWidgetRadio *param_1)

{
  *(UIWidgetRadio **)(this + 0xd8) = param_1;
  if (param_1 != (UIWidgetRadio *)0x0) {
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(this + 0xe0);
    thunk_FUN_05477b9c(param_1 + 0xd8,this + 0xe8);
    return;
  }
  return;
}


/* UITabContent::SetTabID(int) */

void __thiscall UITabContent::SetTabID(UITabContent *this,int param_1)

{
  if (*(long *)(this + 0xd8) != 0) {
    *(int *)(*(long *)(this + 0xd8) + 0xd4) = param_1;
  }
  *(int *)(this + 0xe0) = param_1;
  return;
}


/* UITabContent::GetTabID() const */

undefined4 __thiscall UITabContent::GetTabID(UITabContent *this)

{
  if (*(long *)(this + 0xd8) != 0) {
    return *(undefined4 *)(*(long *)(this + 0xd8) + 0xd4);
  }
  return *(undefined4 *)(this + 0xe0);
}


/* UITabContent::SetTabName(std::wstring const&) */

void __thiscall UITabContent::SetTabName(UITabContent *this,wstring *param_1)

{
  if (*(long *)(this + 0xd8) != 0) {
    thunk_FUN_05477b9c(*(long *)(this + 0xd8) + 0xd8);
  }
  thunk_FUN_05477b9c(this + 0xe8,param_1);
  return;
}


/* UITabContent::GetTabName() const */

UITabContent * __thiscall UITabContent::GetTabName(UITabContent *this)

{
  UITabContent *pUVar1;
  
  pUVar1 = this + 0xe8;
  if (*(long *)(this + 0xd8) != 0) {
    pUVar1 = (UITabContent *)(*(long *)(this + 0xd8) + 0xd8);
  }
  return pUVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabContent::SetTabImage(std::string const&, bool) */

void __thiscall UITabContent::SetTabImage(UITabContent *this,string *param_1,bool param_2)

{
  string *psVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    psVar1 = (string *)(this + 0xf0);
    Sexy::Upper((Sexy *)param_1,param_1);
    FUN_05474278(psVar1,asStack_10);
    std::string::~string(asStack_10);
    if (*(long *)(this + 0xd8) != 0) {
      if (((DAT_06b87a50 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b87a50), iVar3 != 0)) {
        std::string::string((string *)&DAT_06b87a58,"IMAGE_UI_GENERIC_TAB_");
        __cxa_guard_release(&DAT_06b87a50);
        __cxa_atexit(std::string::~string,&DAT_06b87a58,&DAT_06a88000);
        nop();
      }
      FUN_05475d88(asStack_28,&DAT_06b87a58);
      FUN_05475d88(asStack_20,&DAT_06b87a58);
      FUN_05475d88(asStack_18,&DAT_06b87a58);
      cVar2 = FUN_0547419c(param_1);
      if (cVar2 == '\0') {
        std::operator+(psVar1,"_N");
        thunk_FUN_054757c0(asStack_28,asStack_10);
        std::string::~string(asStack_10);
        std::operator+(psVar1,"_S");
        thunk_FUN_054757c0(asStack_20,asStack_10);
        std::string::~string(asStack_10);
        std::operator+(psVar1,"_BG");
        thunk_FUN_054757c0(asStack_18,asStack_10);
        std::string::~string(asStack_10);
      }
      else {
        FUN_05475ad8(asStack_28,&DAT_0559fb00);
        FUN_05475ad8(asStack_20,&DAT_0559fb28);
        FUN_05475ad8(asStack_18,&DAT_0567d810);
      }
      lVar6 = *(long *)(this + 0xd8);
      uVar4 = StringHelper::ToImage(asStack_28,false);
      lVar5 = *(long *)(this + 0xd8);
      *(undefined8 *)(lVar6 + 0xe8) = uVar4;
      uVar4 = StringHelper::ToImage(asStack_20,false);
      lVar6 = *(long *)(this + 0xd8);
      *(undefined8 *)(lVar5 + 0x100) = uVar4;
      uVar4 = StringHelper::ToImage(asStack_18,false);
      *(undefined8 *)(lVar6 + 0xf0) = uVar4;
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      std::string::~string(asStack_28);
    }
  }
  else {
    this[0xf8] = (UITabContent)0x0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

