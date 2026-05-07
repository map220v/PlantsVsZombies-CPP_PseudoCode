// Class: PVZ2UICheckBox


/* PVZ2UICheckBox::SetRightAligned(bool) */

void __thiscall PVZ2UICheckBox::SetRightAligned(PVZ2UICheckBox *this,bool param_1)

{
  this[0x1a4] = (PVZ2UICheckBox)param_1;
  return;
}


/* PVZ2UICheckBox::~PVZ2UICheckBox() */

void __thiscall PVZ2UICheckBox::~PVZ2UICheckBox(PVZ2UICheckBox *this)

{
  *(undefined ***)this = &PTR_GetClass_06835f00;
  Sexy::ButtonWidget::~ButtonWidget((ButtonWidget *)this);
  return;
}


/* PVZ2UICheckBox::~PVZ2UICheckBox() */

void __thiscall PVZ2UICheckBox::~PVZ2UICheckBox(PVZ2UICheckBox *this)

{
  ~PVZ2UICheckBox(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UICheckBox::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UICheckBox::Draw(PVZ2UICheckBox *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  if (this[0x1a4] == (PVZ2UICheckBox)0x0) {
    iVar3 = *(int *)(this + 0x50);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe8));
    iVar3 = (iVar3 - iVar1) / 2;
  }
  else {
    iVar3 = *(int *)(this + 0x50);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe8));
    iVar3 = iVar3 - iVar1;
  }
  iVar1 = *(int *)(this + 0x54);
  iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xe8));
  iVar1 = (iVar1 - iVar2) / 2;
  Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xe8),iVar3,iVar1);
  if (this[0x198] != (PVZ2UICheckBox)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x100),iVar3 + *(int *)(this + 0x19c),
               iVar1 + *(int *)(this + 0x1a0));
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UICheckBox::PVZ2UICheckBox(int, Sexy::ButtonListener*, Sexy::CheckboxListener*) */

void __thiscall
PVZ2UICheckBox::PVZ2UICheckBox
          (PVZ2UICheckBox *this,int param_1,ButtonListener *param_2,CheckboxListener *param_3)

{
  Sexy::ButtonWidget::ButtonWidget((ButtonWidget *)this,param_1,param_2);
  *(CheckboxListener **)(this + 0x1a8) = param_3;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined ***)this = &PTR_GetClass_06835f00;
  this[0x198] = (PVZ2UICheckBox)0x0;
  this[0x1a4] = (PVZ2UICheckBox)0x0;
  return;
}


/* PVZ2UICheckBox::SetCheckboxStates(Sexy::Image*, Sexy::Image*, bool, int, int) */

void __thiscall
PVZ2UICheckBox::SetCheckboxStates
          (PVZ2UICheckBox *this,Image *param_1,Image *param_2,bool param_3,int param_4,int param_5)

{
  *(Image **)(this + 0xe8) = param_1;
  *(Image **)(this + 0x100) = param_2;
  this[0x198] = (PVZ2UICheckBox)param_3;
  *(int *)(this + 0x19c) = param_4;
  *(int *)(this + 0x1a0) = param_5;
  return;
}


/* PVZ2UICheckBox::MouseUp(int, int, int, int) */

void PVZ2UICheckBox::MouseUp(int param_1,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(char *)(uVar1 + 0x71) != '\0') {
    *(byte *)(uVar1 + 0x198) = *(byte *)(uVar1 + 0x198) ^ 1;
    Sexy::ButtonWidget::MouseUp(param_1,param_2,param_3,param_4);
    puVar2 = *(undefined8 **)(uVar1 + 0x1a8);
    if (puVar2 != (undefined8 *)0x0) {
      if (*(code **)*puVar2 != Sexy::CheckboxListener::CheckboxChecked) {
        (**(code **)*puVar2)(puVar2,*(undefined4 *)(uVar1 + 0xd4),*(undefined1 *)(uVar1 + 0x198));
        return;
      }
    }
  }
  return;
}

