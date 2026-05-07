// Class: ActiveCenterTabBase


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveCenterTabBase::GetGoToButtonTitle() */

void __thiscall ActiveCenterTabBase::GetGoToButtonTitle(ActiveCenterTabBase *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"[GO_TO_EVENT]");
  StringHelper::ToStringValue(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveCenterTabBase::GetTabContent() */

void __thiscall ActiveCenterTabBase::GetTabContent(ActiveCenterTabBase *this)

{
  undefined8 uVar1;
  Dialog *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(Dialog **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar1 = 0;
  if (this_00 != (Dialog *)0x0) {
    std::string::string(asStack_10,"TabContent");
    uVar1 = UI::Dialog::GetWidget(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveCenterTabBase::DrawForeground(Sexy::Graphics*) */

void __thiscall ActiveCenterTabBase::DrawForeground(ActiveCenterTabBase *this,Graphics *param_1)

{
  char cVar1;
  long *plVar2;
  GraphicsAutoState aGStack_70 [8];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  Insets aIStack_50 [16];
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x18) != 0) &&
     (cVar1 = FUN_04b9048c(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar1 != '\0')) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_70,param_1);
    plVar2 = *(long **)(*(long *)(*(long *)(this + 0x18) + 0x20) + 0x20);
    (**(code **)(*plVar2 + 0xd0))(&local_68,plVar2);
    plVar2 = *(long **)(*(long *)(*(long *)(this + 0x18) + 0x20) + 0x20);
    (**(code **)(*plVar2 + 0x48))((TRect *)&local_60,plVar2);
    local_60 = (undefined4)local_68;
    local_5c = local_68._4_4_;
    Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_60);
    (**(code **)(**(long **)(this + 0x18) + 0xd0))((PVZ2UIImage *)local_40,*(long **)(this + 0x18));
    local_68 = local_40[0];
    Sexy::Graphics::Translate(param_1,(int)local_40[0],(int)((ulong)local_40[0] >> 0x20));
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b887c0,5);
    Sexy::Insets::Insets
              (aIStack_50,0,0,*(int *)(*(long *)(this + 0x18) + 0x50),
               *(int *)(*(long *)(this + 0x18) + 0x54));
    PVZ2UIImage::Draw((PVZ2UIImage *)local_40,param_1,aIStack_50);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveCenterTabBase::SetSelect(bool) */

void __thiscall ActiveCenterTabBase::SetSelect(ActiveCenterTabBase *this,bool param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  Image *pIVar4;
  PVZ2UIButton *pPVar5;
  Dialog *this_00;
  string asStack_10 [8];
  long local_8;
  
  pPVar5 = *(PVZ2UIButton **)(this + 0x18);
  local_8 = ___stack_chk_guard;
  if ((pPVar5 != (PVZ2UIButton *)0x0) && (*(long *)(this + 0x10) != 0)) {
    cVar1 = FUN_04b9048c(pPVar5[0x1a8]);
    if ((param_1 == (bool)cVar1) || (!param_1)) {
      plVar2 = *(long **)(this + 0x20);
      cVar1 = *(char *)((long)plVar2 + 0x6c);
    }
    else {
      PVZ2UIButton::SetRadioButtonSelected(pPVar5);
      plVar2 = *(long **)(this + 0x20);
      cVar1 = *(char *)((long)plVar2 + 0x6c);
    }
    if ((bool)cVar1 != param_1) {
      (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
    }
    if (param_1) {
      this_00 = *(Dialog **)(this + 0x10);
      std::string::string(asStack_10,"Btn_Goto");
      pPVar5 = UI::Dialog::GetWidget<PVZ2UIButton>(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (pPVar5 != (PVZ2UIButton *)0x0) {
        (**(code **)(*(long *)this + 0x38))(asStack_10,this);
        FUN_054766c8(pPVar5 + 0xd8,asStack_10);
        FUN_05476c50(asStack_10);
      }
      (**(code **)(*(long *)this + 0x30))(asStack_10,this);
      lVar3 = FUN_05474184(asStack_10);
      if (lVar3 == 0) {
        UIWidgetImage::SetImage(*(UIWidgetImage **)(this + 0x20),(Image *)0x0);
      }
      else {
        pIVar4 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIWidgetImage::SetImage(*(UIWidgetImage **)(this + 0x20),pIVar4);
      }
      std::string::~string(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveCenterTabBase::ActiveCenterTabBase(int, UI::Dialog*) */

void __thiscall
ActiveCenterTabBase::ActiveCenterTabBase(ActiveCenterTabBase *this,int param_1,Dialog *param_2)

{
  PVZ2UIButton *pPVar1;
  UIWidgetImage *pUVar2;
  Dialog *this_00;
  undefined4 local_10 [2];
  long local_8;
  
  *(int *)(this + 8) = param_1;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_nop_06973020;
  *(Dialog **)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (param_2 != (Dialog *)0x0) {
    Sexy::StrFormat("UIButton_%d",(string *)local_10);
    pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(param_2,(string *)local_10);
    *(PVZ2UIButton **)(this + 0x18) = pPVar1;
    std::string::~string((string *)local_10);
    if (*(long *)(this + 0x18) != 0) {
      FUN_05476f98(*(long *)(this + 0x18) + 0xd8);
    }
    this_00 = *(Dialog **)(this + 0x10);
    std::string::string((string *)local_10,"TabDefault");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>(this_00,(string *)local_10);
    *(UIWidgetImage **)(this + 0x20) = pUVar2;
    std::string::~string((string *)local_10);
    nop();
    if (*(UIWidgetImage **)(this + 0x20) != (UIWidgetImage *)0x0) {
      local_10[0] = 1;
      UIWidgetImage::SetImageType(*(UIWidgetImage **)(this + 0x20),(string *)local_10,0.0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

