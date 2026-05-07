// Class: EditorButton


/* EditorButton::TEMPNAMEPLACEHOLDERVALUE(EditorButton&&) */

EditorButton * __thiscall EditorButton::operator=(EditorButton *this,EditorButton *param_1)

{
  undefined8 uVar1;
  
  FUN_054766c8();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  return this;
}


/* EditorButton::EditorButton() */

void __thiscall EditorButton::EditorButton(EditorButton *this)

{
  FUN_05476574();
  Sexy::Insets::Insets((Insets *)(this + 8));
  return;
}


/* EditorButton::EditorButton(EditorButton const&) */

void __thiscall EditorButton::EditorButton(EditorButton *this,EditorButton *param_1)

{
  FUN_05477b24();
  Sexy::Insets::Insets((Insets *)(this + 8),(Insets *)(param_1 + 8));
  return;
}

