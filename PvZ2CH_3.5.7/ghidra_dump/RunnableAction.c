// Class: RunnableAction


/* RunnableAction::RunnableAction() */

void __thiscall RunnableAction::RunnableAction(RunnableAction *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_nop_066747c0;
  return;
}


/* RunnableAction::Begin() */

void __thiscall RunnableAction::Begin(RunnableAction *this)

{
  *(undefined4 *)(this + 8) = 1;
  (**(code **)(*(long *)this + 0x10))();
  return;
}


/* RunnableAction::End() */

void __thiscall RunnableAction::End(RunnableAction *this)

{
  (**(code **)(*(long *)this + 0x20))();
  *(undefined4 *)(this + 8) = 2;
  return;
}

