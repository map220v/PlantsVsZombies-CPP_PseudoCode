// Class: TopHUDLayoutHelper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TopHUDLayoutHelper::LayoutWidgetsFromTopRight(std::vector<std::string, std::allocator<std::string
   > > const&) */

void __thiscall
TopHUDLayoutHelper::LayoutWidgetsFromTopRight(TopHUDLayoutHelper *this,vector *param_1)

{
  bool bVar1;
  string *psVar2;
  UIWidget *this_00;
  undefined1 auVar3 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName((RtName *)local_18,L"UIScreen");
  UIWidget::CreateWidget((RtName *)local_18,1);
  Sexy::RtName::~RtName((RtName *)local_18);
  local_30 = FUN_03844cd4(*(undefined8 *)param_1);
  local_28 = FUN_03844d24(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    auVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Sexy::StringToWString(auVar3._0_8_,auVar3._8_8_);
    Sexy::RtName::RtName((RtName *)local_18,(wstring *)&local_20);
    UIWidget::CreateWidget((RtName *)local_18,1);
    Sexy::RtName::~RtName((RtName *)local_18);
    FUN_05476c50((exception_ptr *)&local_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  local_20 = FUN_03844cd4(*(undefined8 *)param_1);
  local_18[0] = FUN_03844d24(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18)
        , bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(psVar2);
    UIWidget::SetIgnoreParentVisibility(this_00,true);
    UIWidget::SetVisible(this_00,true);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TopHUDLayoutHelper::ConfigureTopHUD(TopHUDLayoutHelperParams const&) */

void __thiscall
TopHUDLayoutHelper::ConfigureTopHUD(TopHUDLayoutHelper *this,TopHUDLayoutHelperParams *param_1)

{
  LayoutWidgetsFromTopRight(this,(vector *)param_1);
  LayoutWidgetsFromTopRight(this,(vector *)(param_1 + 0x18));
  if (param_1[0x30] == (TopHUDLayoutHelperParams)0x0) {
    nop();
  }
  else {
    nop();
  }
  if (param_1[0x31] != (TopHUDLayoutHelperParams)0x0) {
    nop();
  }
  nop();
  return;
}

