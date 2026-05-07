// Class: CustomLevelDetailItemWidget


/* CustomLevelDetailItemWidget::Draw(Sexy::Graphics*) */

void __thiscall
CustomLevelDetailItemWidget::Draw(CustomLevelDetailItemWidget *this,Graphics *param_1)

{
  if (*(Image **)(this + 0xf8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf8),*(int *)(this + 0x100),*(int *)(this + 0x104),
               *(int *)(this + 0x108),*(int *)(this + 0x10c));
  }
  if (*(Image **)(this + 0x110) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x110),*(int *)(this + 0x118),*(int *)(this + 0x11c),
               *(int *)(this + 0x120),*(int *)(this + 0x124));
    return;
  }
  return;
}


/* CustomLevelDetailItemWidget::ButtonDepress(int) */

void __thiscall
CustomLevelDetailItemWidget::ButtonDepress(CustomLevelDetailItemWidget *this,int param_1)

{
  int iVar1;
  
  if ((param_1 == 0x3f0) &&
     (iVar1 = FUN_035e5c44(*(undefined8 *)(this + 0x398),*(undefined8 *)(this + 0x3a8)), iVar1 != 0)
     ) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x390));
    return;
  }
  return;
}


/* non-virtual thunk to CustomLevelDetailItemWidget::ButtonDepress(int) */

void __thiscall
CustomLevelDetailItemWidget::ButtonDepress(CustomLevelDetailItemWidget *this,int param_1)

{
  ButtonDepress(this + -0x2b0,param_1);
  return;
}


/* CustomLevelDetailItemWidget::SetDeleteFunc(Sexy::Delegate0) */

void __thiscall
CustomLevelDetailItemWidget::SetDeleteFunc(CustomLevelDetailItemWidget *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x390),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDetailItemWidget::InitView(bool) */

void __thiscall
CustomLevelDetailItemWidget::InitView(CustomLevelDetailItemWidget *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  PVZ2UIButton *pPVar5;
  string *extraout_x1;
  long *plVar6;
  undefined1 auStack_88 [8];
  Sexy aSStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  iVar3 = *(int *)(this + 0x54);
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x50);
  iVar2 = FUN_035e74e0(0x50);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8380);
  *(undefined8 *)(this + 0xe0) = uVar4;
  Sexy::Insets::Insets((Insets *)&local_40,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  *(undefined8 *)(this + 0xe8) = local_40;
  *(undefined8 *)(this + 0xf0) = uStack_38;
  Sexy::Insets::Insets((Insets *)&local_40,0,0,iVar1,iVar3 / 6);
  *(undefined8 *)(this + 0x1b8) = local_40;
  *(undefined8 *)(this + 0x1c0) = uStack_38;
  FUN_05475d88(aSStack_80,this + 0x260);
  Sexy::UTF8StringToWString(aSStack_80,extraout_x1);
  FUN_054766c8(this + 0x1b0,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  uVar4 = CustomLevelItemWidget::GetCurrentMainImage
                    ((CustomLevelItemWidget *)this,*(int *)(this + 0x2d8),*(int *)(this + 0x2dc));
  *(undefined8 *)(this + 0xf8) = uVar4;
  Sexy::Insets::Insets((Insets *)&local_40,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  *(undefined8 *)(this + 0x100) = local_40;
  *(undefined8 *)(this + 0x108) = uStack_38;
  if (*(int *)(this + 0x3c0) == 0) {
    if (*(int *)(this + 0x2f0) == 0) goto LAB_035ec530;
  }
  else if ((*(int *)(this + 0x2f0) == 0) || (this[0x3c4] == (CustomLevelDetailItemWidget)0x0))
  goto LAB_035ec530;
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8308);
  *(undefined8 *)(this + 0x110) = uVar4;
LAB_035ec530:
  Sexy::Insets::Insets((Insets *)&local_40,0,0,iVar2,iVar2);
  *(undefined8 *)(this + 0x118) = local_40;
  *(undefined8 *)(this + 0x120) = uStack_38;
  if (*(int *)(this + 0x3c0) == 1) {
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar5 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar5,0x3f0,(ButtonListener *)(this + 0x2b0),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x388) = pPVar5;
    FUN_05476c50(awStack_78);
    nop();
    pPVar5 = *(PVZ2UIButton **)(this + 0x388);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa7ea0,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06aa7ea0,2);
    PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
    plVar6 = *(long **)(this + 0x388);
    iVar3 = FUN_035e74e0(0x28);
    (**(code **)(*plVar6 + 0x198))
              (plVar6,*(int *)(this + 0x50) - iVar3,*(int *)(this + 0x54) - iVar3,iVar3,iVar3);
    (**(code **)(**(long **)(this + 0x388) + 0x158))(*(long **)(this + 0x388),!param_1);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x388));
  }
  std::string::~string((string *)aSStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDetailItemWidget::CustomLevelDetailItemWidget(int) */

void __thiscall
CustomLevelDetailItemWidget::CustomLevelDetailItemWidget
          (CustomLevelDetailItemWidget *this,int param_1)

{
  long lVar1;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CustomLevelItemWidget::CustomLevelItemWidget((CustomLevelItemWidget *)this,param_1);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x2b0));
  *(undefined ***)this = &PTR_GetClass_066627b0;
  *(undefined ***)(this + 0x2b0) = &PTR_ButtonPress_06662af0;
  CustomNetworkUploadData::CustomNetworkUploadData((CustomNetworkUploadData *)(this + 0x2b8));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x390),(DummyInit *)0x0);
  *(undefined8 *)(this + 0x388) = 0;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x390),(Delegate2 *)aDStack_38);
  *(undefined4 *)(this + 0x3c0) = 0;
  lVar1 = ___stack_chk_guard;
  this[0x3c4] = (CustomLevelDetailItemWidget)0x0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelDetailItemWidget::LoadData(CustomNetworkUploadData const&) */

void __thiscall
CustomLevelDetailItemWidget::LoadData
          (CustomLevelDetailItemWidget *this,CustomNetworkUploadData *param_1)

{
  CustomNetworkUploadData::operator=((CustomNetworkUploadData *)(this + 0x2b8),param_1);
  return;
}


/* CustomLevelDetailItemWidget::~CustomLevelDetailItemWidget() */

void __thiscall
CustomLevelDetailItemWidget::~CustomLevelDetailItemWidget(CustomLevelDetailItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066627b0;
  *(undefined ***)(this + 0x2b0) = &PTR_ButtonPress_06662af0;
  CustomNetworkUploadData::~CustomNetworkUploadData((CustomNetworkUploadData *)(this + 0x2b8));
  CustomLevelItemWidget::~CustomLevelItemWidget((CustomLevelItemWidget *)this);
  return;
}


/* CustomLevelDetailItemWidget::~CustomLevelDetailItemWidget() */

void __thiscall
CustomLevelDetailItemWidget::~CustomLevelDetailItemWidget(CustomLevelDetailItemWidget *this)

{
  ~CustomLevelDetailItemWidget(this);
  AK::FreeHook(this);
  return;
}

