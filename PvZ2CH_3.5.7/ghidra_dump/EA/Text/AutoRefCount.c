// Class: EA::Text::AutoRefCount<EA::Text::Font>


/* EA::Text::AutoRefCount<EA::Text::Font>::AutoRefCount(EA::Text::Font*) */

void __thiscall
EA::Text::AutoRefCount<EA::Text::Font>::AutoRefCount
          (AutoRefCount<EA::Text::Font> *this,Font *param_1)

{
  *(Font **)this = param_1;
  if (param_1 != (Font *)0x0) {
    (**(code **)(*(long *)param_1 + 0x18))(param_1);
  }
  return;
}


/* EA::Text::AutoRefCount<EA::Text::Font>::~AutoRefCount() */

void __thiscall
EA::Text::AutoRefCount<EA::Text::Font>::~AutoRefCount(AutoRefCount<EA::Text::Font> *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 0x20))();
  }
  return;
}


/* EA::Text::AutoRefCount<EA::Text::Font>::AutoRefCount(EA::Text::AutoRefCount<EA::Text::Font>
   const&) */

void __thiscall
EA::Text::AutoRefCount<EA::Text::Font>::AutoRefCount
          (AutoRefCount<EA::Text::Font> *this,AutoRefCount *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)param_1;
  *(long **)this = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}

