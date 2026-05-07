// Class: SetWidgetInputEnabledAction


/* SetWidgetInputEnabledAction::onBegin() */

void __thiscall SetWidgetInputEnabledAction::onBegin(SetWidgetInputEnabledAction *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x90))(*(long **)(this + 0x10),(byte)this[0x18] ^ 1);
  RunnableAction::End((RunnableAction *)this);
  return;
}


/* SetWidgetInputEnabledAction::SetWidgetInputEnabledAction(Sexy::WidgetContainer*, bool) */

void __thiscall
SetWidgetInputEnabledAction::SetWidgetInputEnabledAction
          (SetWidgetInputEnabledAction *this,WidgetContainer *param_1,bool param_2)

{
  RunnableAction::RunnableAction((RunnableAction *)this);
  *(WidgetContainer **)(this + 0x10) = param_1;
  this[0x18] = (SetWidgetInputEnabledAction)param_2;
  *(undefined ***)this = &PTR_nop_06675de0;
  return;
}

