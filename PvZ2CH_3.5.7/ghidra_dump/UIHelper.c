// Class: UIHelper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHelper::TriggerWorldMapBackButton() */

void UIHelper::TriggerWorldMapBackButton(void)

{
  undefined1 uVar1;
  RtObject *this;
  WorldMap_BackButton *pWVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapBackButton");
  this = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((this == (RtObject *)0x0) ||
     (pWVar2 = Sexy::RtObject::Cast<WorldMap_BackButton>(this), pWVar2 == (WorldMap_BackButton *)0x0
     )) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(long *)pWVar2 + 0x1a0))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

