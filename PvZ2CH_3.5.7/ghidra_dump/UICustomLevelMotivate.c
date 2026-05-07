// Class: UICustomLevelMotivate


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMotivate::GetLayoutName() */

void __thiscall UICustomLevelMotivate::GetLayoutName(UICustomLevelMotivate *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelMotivate");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMotivate::ButtonDepress(int) */

void __thiscall UICustomLevelMotivate::ButtonDepress(UICustomLevelMotivate *this,int param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  plVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x76c) {
    pcVar2 = *(code **)(*gLawnApp + 0x168);
    std::string::string(asStack_10,"https://pvz2.hrgame.com.cn/diy");
    (*pcVar2)(plVar1,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICustomLevelMotivate::ButtonDepress(int) */

void __thiscall UICustomLevelMotivate::ButtonDepress(UICustomLevelMotivate *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UICustomLevelMotivate::~UICustomLevelMotivate() */

void __thiscall UICustomLevelMotivate::~UICustomLevelMotivate(UICustomLevelMotivate *this)

{
  *(undefined ***)this = &PTR_GetClass_06665730;
  *(undefined **)(this + 0xd8) = &DAT_06665a80;
  UISingletonDialog<UICustomLevelMotivate>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelMotivate> *)this);
  return;
}


/* UICustomLevelMotivate::~UICustomLevelMotivate() */

void __thiscall UICustomLevelMotivate::~UICustomLevelMotivate(UICustomLevelMotivate *this)

{
  ~UICustomLevelMotivate(this);
  AK::FreeHook(this);
  return;
}


/* UICustomLevelMotivate::UICustomLevelMotivate() */

void __thiscall UICustomLevelMotivate::UICustomLevelMotivate(UICustomLevelMotivate *this)

{
  UISingletonDialog<UICustomLevelMotivate>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelMotivate> *)this);
  *(undefined ***)this = &PTR_GetClass_06665730;
  *(undefined **)(this + 0xd8) = &DAT_06665a80;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelMotivate::OnCreate() */

void __thiscall UICustomLevelMotivate::OnCreate(UICustomLevelMotivate *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UIWidgetImage *pUVar3;
  PVZ2UIButton *pPVar4;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar3,true);
  std::string::string(asStack_10,"UIButton_0");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar4 != (PVZ2UIButton *)0x0) {
    lVar5 = Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
    uVar2 = FUN_035e5d40(*(undefined1 *)(lVar5 + 0x19));
    (**(code **)(*(long *)pPVar4 + 0x158))(pPVar4,uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

