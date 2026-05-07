// Class: CommandConsole::CommandConsoleEdit


/* CommandConsole::CommandConsoleEdit::~CommandConsoleEdit() */

void __thiscall CommandConsole::CommandConsoleEdit::~CommandConsoleEdit(CommandConsoleEdit *this)

{
  *(undefined ***)this = &PTR_GetClass_067592b0;
  *(undefined ***)(this + 0xd8) = &PTR_getText_06759630;
  Sexy::EditWidget::~EditWidget((EditWidget *)this);
  return;
}


/* CommandConsole::CommandConsoleEdit::~CommandConsoleEdit() */

void __thiscall CommandConsole::CommandConsoleEdit::~CommandConsoleEdit(CommandConsoleEdit *this)

{
  ~CommandConsoleEdit(this);
  AK::FreeHook(this);
  return;
}


/* CommandConsole::CommandConsoleEdit::CommandConsoleEdit(int, Sexy::EditListener*) */

void __thiscall
CommandConsole::CommandConsoleEdit::CommandConsoleEdit
          (CommandConsoleEdit *this,int param_1,EditListener *param_2)

{
  Sexy::EditWidget::EditWidget((EditWidget *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_067592b0;
  *(undefined ***)(this + 0xd8) = &PTR_getText_06759630;
  return;
}


/* CommandConsole::CommandConsoleEdit::KeyDown(Sexy::KeyCode) */

void __thiscall
CommandConsole::CommandConsoleEdit::KeyDown(CommandConsoleEdit *this,undefined4 param_2)

{
  char cVar1;
  
  if ((*(long *)(this + 0x180) != 0) && (cVar1 = EditKeyCodeDown(), cVar1 != '\0')) {
    return;
  }
  Sexy::EditWidget::KeyDown((EditWidget *)this,param_2);
  return;
}


/* CommandConsole::CommandConsoleEdit::ProcessKey(Sexy::KeyCode, wchar_t) */

void CommandConsole::CommandConsoleEdit::ProcessKey(long param_1,undefined4 param_2)

{
  Sexy::EditWidget::ProcessKey();
  if (*(CommandConsole **)(param_1 + 0x180) != (CommandConsole *)0x0) {
    EditProcessKey(*(CommandConsole **)(param_1 + 0x180),param_2);
    return;
  }
  return;
}

