// Class: Lua::CUIWidget


/* Lua::CUIWidget::~CUIWidget() */

void __thiscall Lua::CUIWidget::~CUIWidget(CUIWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2baf0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* Lua::CUIWidget::~CUIWidget() */

void __thiscall Lua::CUIWidget::~CUIWidget(CUIWidget *this)

{
  ~CUIWidget(this);
  AK::FreeHook(this);
  return;
}


/* Lua::CUIWidget::CUIWidget() */

void __thiscall Lua::CUIWidget::CUIWidget(CUIWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06a2baf0;
  return;
}

