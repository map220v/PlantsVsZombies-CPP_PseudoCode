// Class: UICustomLevelCreateLevelChooseMode


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelCreateLevelChooseMode::GetLayoutName() */

void __thiscall
UICustomLevelCreateLevelChooseMode::GetLayoutName(UICustomLevelCreateLevelChooseMode *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelCreateLevelChooseMode");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICustomLevelCreateLevelChooseMode::OnClickItemWidget(int) */

void __thiscall
UICustomLevelCreateLevelChooseMode::OnClickItemWidget
          (UICustomLevelCreateLevelChooseMode *this,int param_1)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (0xc7f < param_1) {
    iVar1 = param_1 + -0xc80;
    uVar7 = *(undefined8 *)(this + 0x148);
    plVar3 = (long *)FUN_035e5eec(uVar7,(long)iVar1);
    cVar2 = FUN_035e5cf8(*(undefined1 *)(*plVar3 + 800));
    plVar3 = *(long **)(this + 0x140);
    if (cVar2 == '\0') {
      *(int *)(this + 0x138) = iVar1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x188))();
        uVar7 = *(undefined8 *)(this + 0x148);
      }
      uVar5 = 0;
      uVar4 = FUN_035e5ef4(uVar7,*(undefined8 *)(this + 0x150));
      while (uVar6 = uVar5, uVar5 < uVar4) {
        while (uVar5 = uVar6 + 1, iVar1 != (int)uVar6) {
          plVar3 = (long *)FUN_035e5eec(uVar7,uVar6);
          FUN_035e5cfc(*plVar3 + 800,0);
          uVar7 = *(undefined8 *)(this + 0x148);
          uVar4 = FUN_035e5ef4(uVar7,*(undefined8 *)(this + 0x150));
          uVar6 = uVar5;
          if (uVar4 <= uVar5) {
            return;
          }
        }
      }
    }
    else {
      *(undefined4 *)(this + 0x138) = 0xffffffff;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x188))(plVar3,1);
        return;
      }
    }
  }
  return;
}


/* UICustomLevelCreateLevelChooseMode::UICustomLevelCreateLevelChooseMode() */

void __thiscall
UICustomLevelCreateLevelChooseMode::UICustomLevelCreateLevelChooseMode
          (UICustomLevelCreateLevelChooseMode *this)

{
  UISingletonDialog<UICustomLevelCreateLevelChooseMode>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelCreateLevelChooseMode> *)this);
  *(undefined ***)this = &PTR_GetClass_06665390;
  *(undefined **)(this + 0xd8) = &DAT_066656e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  *(undefined4 *)(this + 0x134) = 0xffffffff;
  return;
}


/* UICustomLevelCreateLevelChooseMode::~UICustomLevelCreateLevelChooseMode() */

void __thiscall
UICustomLevelCreateLevelChooseMode::~UICustomLevelCreateLevelChooseMode
          (UICustomLevelCreateLevelChooseMode *this)

{
  *(undefined ***)this = &PTR_GetClass_06665390;
  *(undefined **)(this + 0xd8) = &DAT_066656e0;
  std::
  vector<CustomLevelCreateLevelChooseItemWidget*,std::allocator<CustomLevelCreateLevelChooseItemWidget*>>
  ::~vector((vector<CustomLevelCreateLevelChooseItemWidget*,std::allocator<CustomLevelCreateLevelChooseItemWidget*>>
             *)(this + 0x148));
  UISingletonDialog<UICustomLevelCreateLevelChooseMode>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelCreateLevelChooseMode> *)this);
  return;
}


/* UICustomLevelCreateLevelChooseMode::~UICustomLevelCreateLevelChooseMode() */

void __thiscall
UICustomLevelCreateLevelChooseMode::~UICustomLevelCreateLevelChooseMode
          (UICustomLevelCreateLevelChooseMode *this)

{
  ~UICustomLevelCreateLevelChooseMode(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelCreateLevelChooseMode::CreateSelectItemWidgets(Sexy::Widget*, std::vector<int,
   std::allocator<int> >, int) */

void UICustomLevelCreateLevelChooseMode::CreateSelectItemWidgets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1_00,
               ReceivedDataCallback *param_1,long *param_3,undefined8 *param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CustomLevelCreateLevelChooseItemWidget *pCVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  CustomLevelCreateLevelChooseItemWidget *local_68;
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1_00);
  if (param_3 != (long *)0x0) {
    iVar2 = FUN_035e74e0(0x1e);
    iVar3 = FUN_035e74e0(0xf);
    iVar4 = FUN_035e5c60((int)param_3[10]);
    iVar4 = (iVar4 + iVar2 * -2 + iVar3 * -2) / 3;
    iVar5 = FUN_035e5d44(*param_4,param_4[1]);
    if (0 < iVar5) {
      lVar9 = 0;
      do {
        iVar8 = (int)lVar9;
        Sexy::Insets::Insets
                  (aIStack_60,iVar2 + (iVar3 + iVar4) * (iVar8 % 3),
                   iVar3 + (iVar8 / 3) * (iVar3 + (int)((float)iVar4 * 0.42553192)),iVar4,
                   (int)((float)iVar4 * 0.42553192));
        pCVar6 = ::operator_new(0x370);
        CustomLevelCreateLevelChooseItemWidget::CustomLevelCreateLevelChooseItemWidget
                  (pCVar6,param_5 + iVar8);
        lVar1 = lVar9 + 1;
        local_68 = pCVar6;
        puVar7 = (undefined4 *)FUN_035e5ee4(*param_4,lVar9);
        FUN_035e5cec(pCVar6 + 0x308,*puVar7);
        (**(code **)(*(long *)local_68 + 0x1a0))(local_68,aIStack_60);
        (**(code **)(*(long *)local_68 + 0x350))(local_68);
        pCVar6 = local_68;
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  (param_1,OnClickItemWidget);
        Sexy::Delegate1<int>::
        Delegate1<UICustomLevelCreateLevelChooseMode,void(UICustomLevelCreateLevelChooseMode::*)(int)>
                  (aDStack_38,aCStack_50);
        CustomLevelFilterItemWidget::SetClickFunc((CustomLevelFilterItemWidget *)pCVar6,aDStack_38);
        (**(code **)(*param_3 + 0x60))(param_3,local_68);
        std::
        vector<CustomLevelCreateLevelChooseItemWidget*,std::allocator<CustomLevelCreateLevelChooseItemWidget*>>
        ::push_back((vector<CustomLevelCreateLevelChooseItemWidget*,std::allocator<CustomLevelCreateLevelChooseItemWidget*>>
                     *)param_1_00,&local_68);
        lVar9 = lVar1;
      } while ((int)lVar1 < iVar5);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelCreateLevelChooseMode::InitView() */

void __thiscall
UICustomLevelCreateLevelChooseMode::InitView(UICustomLevelCreateLevelChooseMode *this)

{
  UIWidgetImage *pUVar1;
  undefined8 uVar2;
  PVZ2UIButton *pPVar3;
  long *plVar4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<int,std::allocator<int>> avStack_38 [24];
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_20,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_20);
  std::string::~string((string *)local_20);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar1,true);
  std::string::string((string *)local_20,"styleContainer");
  uVar2 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_20);
  std::string::~string((string *)local_20);
  nop();
  std::string::string((string *)local_20,"ConfirmBtn");
  pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_20);
  *(PVZ2UIButton **)(this + 0x140) = pPVar3;
  std::string::~string((string *)local_20);
  nop();
  plVar4 = *(long **)(this + 0x140);
  if (plVar4 == (long *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
    local_20[0] = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x188))(plVar4,1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
    local_20[0] = 0;
  }
  do {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_50,local_20);
    local_20[0] = local_20[0] + 1;
  } while (local_20[0] < 8);
  std::vector<int,std::allocator<int>>::vector(avStack_38,(vector *)avStack_50);
  CreateSelectItemWidgets((string *)local_20,this,uVar2,avStack_38,0xc80);
  std::
  vector<CustomLevelCreateLevelChooseItemWidget*,std::allocator<CustomLevelCreateLevelChooseItemWidget*>>
  ::operator=((vector<CustomLevelCreateLevelChooseItemWidget*,std::allocator<CustomLevelCreateLevelChooseItemWidget*>>
               *)(this + 0x148),(vector *)local_20);
  std::
  vector<CustomLevelCreateLevelChooseItemWidget*,std::allocator<CustomLevelCreateLevelChooseItemWidget*>>
  ::~vector((vector<CustomLevelCreateLevelChooseItemWidget*,std::allocator<CustomLevelCreateLevelChooseItemWidget*>>
             *)local_20);
  std::vector<int,std::allocator<int>>::~vector(avStack_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomLevelCreateLevelChooseMode::OnCreate() */

undefined4 __thiscall
UICustomLevelCreateLevelChooseMode::OnCreate(UICustomLevelCreateLevelChooseMode *this)

{
  undefined4 uVar1;
  
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelCreateLevelChooseMode::ButtonDepress(int) */

void __thiscall
UICustomLevelCreateLevelChooseMode::ButtonDepress
          (UICustomLevelCreateLevelChooseMode *this,int param_1)

{
  CustomLevelMgr *pCVar1;
  long lVar2;
  char *pcVar3;
  TGALogMgr *this_00;
  size_t in_x2;
  DString aDStack_a0 [16];
  TGACustomLevelData aTStack_90 [80];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1000) {
    UISingletonDialog<UICustomLevelCreateLevelChooseMode>::CloseDialog();
  }
  else if (((param_1 == 0x3f0) && (*(int *)(this + 0x134) != -1)) && (*(int *)(this + 0x138) != -1))
  {
    UISingletonDialog<UICustomLevelCreateLevelChooseMode>::CloseDialog();
    CustomLevelUtils::TryLoadLevel(*(int *)(this + 0x134));
    pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::SetMode(pCVar1,*(undefined4 *)(this + 0x138));
    lVar2 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    FUN_035e5cc0(*(undefined4 *)(lVar2 + 0x30c));
    LevelEditor::CreateEditor();
    TGACustomLevelData::TGACustomLevelData(aTStack_90);
    DString::DString(aDStack_a0,0x11);
    pcVar3 = (char *)DString::c_str(aDStack_a0);
    std::string::append((string *)aTStack_90,pcVar3,in_x2);
    DString::~DString(aDStack_a0);
    DString::DString(aDStack_a0,*(int *)(this + 0x138));
    pcVar3 = (char *)DString::c_str(aDStack_a0);
    std::string::append(asStack_38,pcVar3,in_x2);
    DString::~DString(aDStack_a0);
    DString::DString(aDStack_a0,1);
    pcVar3 = (char *)DString::c_str(aDStack_a0);
    std::string::append(asStack_40,pcVar3,in_x2);
    DString::~DString(aDStack_a0);
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCustomLevel(this_00,aTStack_90);
    TGACustomLevelData::~TGACustomLevelData(aTStack_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICustomLevelCreateLevelChooseMode::ButtonDepress(int) */

void __thiscall
UICustomLevelCreateLevelChooseMode::ButtonDepress
          (UICustomLevelCreateLevelChooseMode *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

