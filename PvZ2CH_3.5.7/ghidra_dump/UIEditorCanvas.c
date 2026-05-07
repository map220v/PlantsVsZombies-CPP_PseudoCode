// Class: UIEditorCanvas


/* UIEditorCanvas::MouseDown(int, int, int, int) */

void UIEditorCanvas::MouseDown(int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)((ulong)(uint)param_1 + 0xd8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x218))(plVar1,param_2,param_3,param_4);
  }
  return;
}


/* UIEditorCanvas::MouseUp(int, int, int, int) */

void UIEditorCanvas::MouseUp(int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)((ulong)(uint)param_1 + 0xd8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x230))(plVar1,param_2,param_3,param_4);
  }
  return;
}


/* UIEditorCanvas::MouseDrag(int, int) */

void UIEditorCanvas::MouseDrag(int param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)((ulong)(uint)param_1 + 0xd8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x238))(plVar1,param_2);
  }
  return;
}


/* UIEditorCanvas::~UIEditorCanvas() */

void __thiscall UIEditorCanvas::~UIEditorCanvas(UIEditorCanvas *this)

{
  *(undefined ***)this = &PTR_GetClass_0696e750;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UIEditorCanvas::~UIEditorCanvas() */

void __thiscall UIEditorCanvas::~UIEditorCanvas(UIEditorCanvas *this)

{
  ~UIEditorCanvas(this);
  AK::FreeHook(this);
  return;
}


/* UIEditorCanvas::UIEditorCanvas(UIEditor*) */

void __thiscall UIEditorCanvas::UIEditorCanvas(UIEditorCanvas *this,UIEditor *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(UIEditor **)(this + 0xd8) = param_1;
  *(undefined ***)this = &PTR_GetClass_0696e750;
  return;
}

