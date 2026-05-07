// Class: CustomLevelCreateLevelChooseItemWidget


/* CustomLevelCreateLevelChooseItemWidget::~CustomLevelCreateLevelChooseItemWidget() */

void __thiscall
CustomLevelCreateLevelChooseItemWidget::~CustomLevelCreateLevelChooseItemWidget
          (CustomLevelCreateLevelChooseItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06664fb0;
  *(undefined ***)(this + 0x198) = &PTR__CustomLevelCreateLevelChooseItemWidget_06665318;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06665340;
  CustomLevelFilterItemWidget::~CustomLevelFilterItemWidget((CustomLevelFilterItemWidget *)this);
  return;
}


/* non-virtual thunk to
   CustomLevelCreateLevelChooseItemWidget::~CustomLevelCreateLevelChooseItemWidget() */

void __thiscall
CustomLevelCreateLevelChooseItemWidget::~CustomLevelCreateLevelChooseItemWidget
          (CustomLevelCreateLevelChooseItemWidget *this)

{
  ~CustomLevelCreateLevelChooseItemWidget(this + -0x198);
  return;
}


/* CustomLevelCreateLevelChooseItemWidget::~CustomLevelCreateLevelChooseItemWidget() */

void __thiscall
CustomLevelCreateLevelChooseItemWidget::~CustomLevelCreateLevelChooseItemWidget
          (CustomLevelCreateLevelChooseItemWidget *this)

{
  ~CustomLevelCreateLevelChooseItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   CustomLevelCreateLevelChooseItemWidget::~CustomLevelCreateLevelChooseItemWidget() */

void __thiscall
CustomLevelCreateLevelChooseItemWidget::~CustomLevelCreateLevelChooseItemWidget
          (CustomLevelCreateLevelChooseItemWidget *this)

{
  ~CustomLevelCreateLevelChooseItemWidget(this + -0x198);
  return;
}


/* CustomLevelCreateLevelChooseItemWidget::CustomLevelCreateLevelChooseItemWidget(int) */

void __thiscall
CustomLevelCreateLevelChooseItemWidget::CustomLevelCreateLevelChooseItemWidget
          (CustomLevelCreateLevelChooseItemWidget *this,int param_1)

{
  CustomLevelFilterItemWidget::CustomLevelFilterItemWidget
            ((CustomLevelFilterItemWidget *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_06664fb0;
  *(undefined ***)(this + 0x198) = &PTR__CustomLevelCreateLevelChooseItemWidget_06665318;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06665340;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreateLevelChooseItemWidget::InitView() */

void __thiscall
CustomLevelCreateLevelChooseItemWidget::InitView(CustomLevelCreateLevelChooseItemWidget *this)

{
  undefined8 uVar1;
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd4) < 0xce4) {
    Sexy::StrFormat("IMAGE_UI_CUSTOM_LEVEL_LEVELMODE_%d",asStack_28,(ulong)*(uint *)(this + 0x308));
    uVar1 = StringHelper::ToImage(asStack_28,false);
    *(undefined8 *)(this + 0x310) = uVar1;
    Sexy::StrFormat("[CUSTOM_LEVEL_LEVEL_MODE_TYPE_%d]",asStack_20,(ulong)*(uint *)(this + 0x308));
    StringHelper::ToStringValue(asStack_20);
    FUN_054766c8(this + 0x328,&local_18);
    FUN_05476c50(&local_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
  }
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7fd8);
  *(undefined8 *)(this + 0x318) = uVar1;
  Sexy::Insets::Insets
            ((Insets *)&local_18,0,(*(int *)(this + 0x54) / 3) * 2,*(int *)(this + 0x50),
             *(int *)(this + 0x54) / 3);
  *(undefined8 *)(this + 0x330) = local_18;
  *(undefined8 *)(this + 0x338) = uStack_10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

