// Class: SettingsDialogPane


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialogPane::SetTitle(std::wstring) */

void __thiscall SettingsDialogPane::SetTitle(SettingsDialogPane *this,wstring *param_2)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_2);
  FUN_054766c8(this + 0xd8,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SettingsDialogPane::~SettingsDialogPane() */

void __thiscall SettingsDialogPane::~SettingsDialogPane(SettingsDialogPane *this)

{
  *(undefined ***)this = &PTR_GetClass_0684b6f0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* SettingsDialogPane::~SettingsDialogPane() */

void __thiscall SettingsDialogPane::~SettingsDialogPane(SettingsDialogPane *this)

{
  ~SettingsDialogPane(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialogPane::SettingsDialogPane(std::wstring) */

void __thiscall SettingsDialogPane::SettingsDialogPane(SettingsDialogPane *this,undefined8 param_2)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0684b6f0;
  FUN_05476574(this + 0xd8);
  *(undefined8 *)(this + 0xe0) = 0;
  FUN_05477b24(auStack_10,param_2);
  SetTitle(this,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SettingsDialogPane::SetContentsWidget(Sexy::Widget*) */

void __thiscall SettingsDialogPane::SetContentsWidget(SettingsDialogPane *this,Widget *param_1)

{
  if (*(long *)(this + 0xe0) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    if (*(long **)(this + 0xe0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xe0) + 0x18))();
    }
  }
  *(Widget **)(this + 0xe0) = param_1;
  if (param_1 != (Widget *)0x0) {
    (**(code **)(*(long *)this + 0x60))(this,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsDialogPane::Draw(Sexy::Graphics*) */

void __thiscall SettingsDialogPane::Draw(SettingsDialogPane *this,Graphics *param_1)

{
  int iVar1;
  PrimeTypeface *pPVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)FUN_0445ae84(0x42940000);
  iVar1 = FUN_0445ae70(0x1e);
  fVar4 = (float)FUN_0445ae84(0x439b0000);
  fVar5 = (float)FUN_0445ae84(0x42a00000);
  Sexy::Insets::Insets(aIStack_38,(int)fVar3,iVar1,(int)fVar4,(int)fVar5);
  pPVar2 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Insets::Insets(aIStack_28,aIStack_38);
  FUN_05477b24(auStack_40,this + 0xd8);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_DangerRoom_LargeLabel);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar2,param_1,aIStack_28,auStack_40,1,0,aIStack_18,0);
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

