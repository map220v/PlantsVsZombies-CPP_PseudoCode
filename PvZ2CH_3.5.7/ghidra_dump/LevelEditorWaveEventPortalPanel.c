// Class: LevelEditorWaveEventPortalPanel


/* LevelEditorWaveEventPortalPanel::SetBgImage(Sexy::Image*) */

void __thiscall
LevelEditorWaveEventPortalPanel::SetBgImage(LevelEditorWaveEventPortalPanel *this,Image *param_1)

{
  *(Image **)(this + 0xd8) = param_1;
  return;
}


/* LevelEditorWaveEventPortalPanel::~LevelEditorWaveEventPortalPanel() */

void __thiscall
LevelEditorWaveEventPortalPanel::~LevelEditorWaveEventPortalPanel
          (LevelEditorWaveEventPortalPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_0696a160;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorWaveEventPortalPanel::~LevelEditorWaveEventPortalPanel() */

void __thiscall
LevelEditorWaveEventPortalPanel::~LevelEditorWaveEventPortalPanel
          (LevelEditorWaveEventPortalPanel *this)

{
  ~LevelEditorWaveEventPortalPanel(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorWaveEventPortalPanel::LevelEditorWaveEventPortalPanel() */

void __thiscall
LevelEditorWaveEventPortalPanel::LevelEditorWaveEventPortalPanel
          (LevelEditorWaveEventPortalPanel *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_0696a160;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventPortalPanel::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorWaveEventPortalPanel::Draw(LevelEditorWaveEventPortalPanel *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xd8) == 0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86360);
    Draw9SliceImage(param_1,aIStack_18,uVar1);
  }
  else {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xd8));
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

