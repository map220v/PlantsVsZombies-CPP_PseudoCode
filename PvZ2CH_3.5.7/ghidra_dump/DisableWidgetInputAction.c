// Class: DisableWidgetInputAction


/* DisableWidgetInputAction::DisableWidgetInputAction(Sexy::WidgetContainer*) */

void __thiscall
DisableWidgetInputAction::DisableWidgetInputAction
          (DisableWidgetInputAction *this,WidgetContainer *param_1)

{
  SetWidgetInputEnabledAction::SetWidgetInputEnabledAction
            ((SetWidgetInputEnabledAction *)this,param_1,false);
  *(undefined ***)this = &PTR_nop_06674800;
  return;
}

