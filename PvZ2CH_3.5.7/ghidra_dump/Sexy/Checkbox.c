// Class: Sexy::Checkbox


/* Sexy::Checkbox::MouseDown(int, int, int) */

void __thiscall Sexy::Checkbox::MouseDown(Checkbox *this,int param_1,int param_2,int param_3)

{
  if (param_3 == 3) {
    (**(code **)(*(long *)this + 0x218))(this,param_1,param_2,2,1);
  }
  else {
    if (param_3 < 0) {
      (**(code **)(*(long *)this + 0x218))();
      return;
    }
    (**(code **)(*(long *)this + 0x218))();
  }
  return;
}


/* Sexy::Checkbox::SetChecked(bool, bool) */

void __thiscall Sexy::Checkbox::SetChecked(Checkbox *this,bool param_1,bool param_2)

{
  undefined8 *puVar1;
  
  this[0xe4] = (Checkbox)param_1;
  if ((param_2) && (puVar1 = *(undefined8 **)(this + 0xd8), puVar1 != (undefined8 *)0x0)) {
    if (*(code **)*puVar1 != CheckboxListener::CheckboxChecked) {
      (**(code **)*puVar1)(puVar1,*(undefined4 *)(this + 0xe0),param_1);
      (**(code **)(*(long *)this + 0xd8))(this);
      return;
    }
  }
  (**(code **)(*(long *)this + 0xd8))(this);
  return;
}


/* Sexy::Checkbox::IsChecked() */

Checkbox __thiscall Sexy::Checkbox::IsChecked(Checkbox *this)

{
  return this[0xe4];
}


/* Sexy::Checkbox::~Checkbox() */

void __thiscall Sexy::Checkbox::~Checkbox(Checkbox *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2d270;
  Widget::~Widget((Widget *)this);
  return;
}


/* Sexy::Checkbox::~Checkbox() */

void __thiscall Sexy::Checkbox::~Checkbox(Checkbox *this)

{
  ~Checkbox(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::Checkbox::Checkbox(Sexy::Image*, Sexy::Image*, int, Sexy::CheckboxListener*) */

void __thiscall
Sexy::Checkbox::Checkbox
          (Checkbox *this,Image *param_1,Image *param_2,int param_3,CheckboxListener *param_4)

{
  Widget::Widget((Widget *)this);
  *(int *)(this + 0xe0) = param_3;
  *(Image **)(this + 0xf0) = param_2;
  *(Image **)(this + 0xe8) = param_1;
  *(CheckboxListener **)(this + 0xd8) = param_4;
  this[0xe4] = (Checkbox)0x0;
  *(undefined ***)this = &PTR_GetClass_06a2d270;
  Insets::Insets((Insets *)(this + 0xf8));
  Insets::Insets((Insets *)(this + 0x108));
  Color::Color((Color *)(this + 0x118),1);
  Color::Color((Color *)(this + 0x128),0x50,0x50,0x50);
  Color::Color((Color *)(this + 0x138),0xff,0xff,0);
  this[0xa0] = (Checkbox)0x1;
  return;
}


/* Sexy::Checkbox::Draw(Sexy::Graphics*) */

void __thiscall Sexy::Checkbox::Draw(Checkbox *this,Graphics *param_1)

{
  long lVar1;
  Image *pIVar2;
  
  nop();
  if (*(int *)(this + 0x100) == 0) {
    if (*(Image **)(this + 0xf0) != (Image *)0x0) {
      if (*(Image **)(this + 0xe8) == (Image *)0x0) {
        return;
      }
      if (this[0xe4] != (Checkbox)0x0) {
        Graphics::DrawImage(param_1,*(Image **)(this + 0xf0),0,0);
        return;
      }
      Graphics::DrawImage(param_1,*(Image **)(this + 0xe8),0,0);
      return;
    }
    lVar1 = *(long *)(this + 0xe8);
  }
  else {
    pIVar2 = *(Image **)(this + 0xe8);
    if (pIVar2 != (Image *)0x0) {
      if (this[0xe4] != (Checkbox)0x0) {
        Graphics::DrawImage(param_1,pIVar2,0,0,(TRect *)(this + 0xf8));
        return;
      }
      Graphics::DrawImage(param_1,pIVar2,0,0,(TRect *)(this + 0x108));
      return;
    }
    lVar1 = *(long *)(this + 0xf0);
  }
  if (lVar1 == 0) {
    Graphics::SetColor(param_1,(Color *)(this + 0x118));
    Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Graphics::SetColor(param_1,(Color *)(this + 0x128));
    Graphics::FillRect(param_1,1,1,*(int *)(this + 0x50) + -2,*(int *)(this + 0x54) + -2);
    if (this[0xe4] != (Checkbox)0x0) {
      Graphics::SetColor(param_1,(Color *)(this + 0x138));
      Graphics::DrawLine(param_1,1.0,1.0,(float)(*(int *)(this + 0x50) + -2),
                         (float)(*(int *)(this + 0x54) + -2));
      Graphics::DrawLine(param_1,(float)(*(int *)(this + 0x50) + -1),1.0,1.0,
                         (float)(*(int *)(this + 0x54) + -2));
      return;
    }
  }
  return;
}


/* Sexy::Checkbox::MouseDown(int, int, int, int) */

void Sexy::Checkbox::MouseDown(int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(ulong)(uint)param_1;
  nop();
  puVar2 = (undefined8 *)plVar1[0x1b];
  *(byte *)((long)plVar1 + 0xe4) = *(byte *)((long)plVar1 + 0xe4) ^ 1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(code **)*puVar2 != CheckboxListener::CheckboxChecked) {
      (**(code **)*puVar2)(puVar2,(int)plVar1[0x1c]);
    }
  }
  (**(code **)(*plVar1 + 0xd8))(plVar1);
  return;
}

