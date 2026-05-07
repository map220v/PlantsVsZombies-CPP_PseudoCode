// Class: SettingsWidget


/* SettingsWidget::~SettingsWidget() */

void __thiscall SettingsWidget::~SettingsWidget(SettingsWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0684bd90;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* SettingsWidget::~SettingsWidget() */

void __thiscall SettingsWidget::~SettingsWidget(SettingsWidget *this)

{
  ~SettingsWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsWidget::SettingsWidget(std::wstring const&) */

void __thiscall SettingsWidget::SettingsWidget(SettingsWidget *this,wstring *param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0684bd90;
  FUN_05476574(this + 0xd8);
  TodStringTranslate(param_1);
  FUN_054766c8(this + 0xd8,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsWidget::Draw(Sexy::Graphics*) */

void __thiscall SettingsWidget::Draw(SettingsWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Image *pIVar5;
  PrimeTypeface *pPVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_60 [8];
  Insets aIStack_58 [4];
  int local_54;
  int local_50;
  int local_4c;
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_58,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar1 = local_54 + local_4c;
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b08fd8);
  iVar2 = *(int *)(lVar4 + 0x3c);
  iVar3 = local_50 + -4;
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b08fd8);
  Sexy::Insets::Insets(aIStack_48,2,iVar1 - iVar2,iVar3,*(int *)(lVar4 + 0x3c));
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b08fd8);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b08fd8);
  iVar1 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b08fd8);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,*(int *)(lVar4 + 0x3c));
  Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)aIStack_48,(TRect *)aIStack_18);
  fVar7 = (float)FUN_0445ae84(0x41f00000);
  fVar8 = (float)FUN_0445ae84(0x42400000);
  Sexy::Insets::Insets
            (aIStack_38,(int)fVar7,local_54,(int)(((float)local_50 - fVar7) - fVar8),local_4c);
  pPVar6 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,aIStack_38);
  FUN_05477b24(auStack_60,this + 0xd8);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar6,param_1,aIStack_28,auStack_60,0,1,aIStack_18,0);
  FUN_05476c50(auStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

