// Class: PVZ2UIImageWidget


/* PVZ2UIImageWidget::~PVZ2UIImageWidget() */

void __thiscall PVZ2UIImageWidget::~PVZ2UIImageWidget(PVZ2UIImageWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06837740;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIImageWidget::~PVZ2UIImageWidget() */

void __thiscall PVZ2UIImageWidget::~PVZ2UIImageWidget(PVZ2UIImageWidget *this)

{
  ~PVZ2UIImageWidget(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIImageWidget::PVZ2UIImageWidget() */

void __thiscall PVZ2UIImageWidget::PVZ2UIImageWidget(PVZ2UIImageWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  this[0xe0] = (PVZ2UIImageWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_06837740;
  return;
}


/* PVZ2UIImageWidget::SetImageAndResize(Sexy::Image*) */

void __thiscall PVZ2UIImageWidget::SetImageAndResize(PVZ2UIImageWidget *this,Image *param_1)

{
  LevelEditorWaveEventPortalPanel::SetBgImage((LevelEditorWaveEventPortalPanel *)this,param_1);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(*(long *)(this + 0xd8) + 0x38),
             *(undefined4 *)(*(long *)(this + 0xd8) + 0x3c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIImageWidget::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIImageWidget::Draw(PVZ2UIImageWidget *this,Graphics *param_1)

{
  Image *pIVar1;
  undefined8 uVar2;
  GraphicsAutoState aGStack_30 [8];
  TRect aTStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xd8) != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
    if (this[0xe0] == (PVZ2UIImageWidget)0x0) {
      Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xd8),0,0);
    }
    else {
      uVar2 = *(undefined8 *)(this + 0xd8);
      Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      StretchAndCenterImageInRect(aTStack_28,uVar2,aIStack_18);
      pIVar1 = *(Image **)(this + 0xd8);
      Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(pIVar1 + 0x38),*(int *)(pIVar1 + 0x3c));
      Sexy::Graphics::DrawImage(param_1,pIVar1,aTStack_28,(TRect *)aIStack_18);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

