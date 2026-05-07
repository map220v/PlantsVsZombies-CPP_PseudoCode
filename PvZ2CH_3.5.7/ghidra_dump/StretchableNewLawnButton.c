// Class: StretchableNewLawnButton


/* StretchableNewLawnButton::~StretchableNewLawnButton() */

void __thiscall StretchableNewLawnButton::~StretchableNewLawnButton(StretchableNewLawnButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0676a160;
  NewLawnButton::~NewLawnButton((NewLawnButton *)this);
  return;
}


/* StretchableNewLawnButton::~StretchableNewLawnButton() */

void __thiscall StretchableNewLawnButton::~StretchableNewLawnButton(StretchableNewLawnButton *this)

{
  ~StretchableNewLawnButton(this);
  AK::FreeHook(this);
  return;
}


/* StretchableNewLawnButton::StretchableNewLawnButton(Sexy::Image*, int, Sexy::ButtonListener*) */

void __thiscall
StretchableNewLawnButton::StretchableNewLawnButton
          (StretchableNewLawnButton *this,Image *param_1,int param_2,ButtonListener *param_3)

{
  NewLawnButton::NewLawnButton((NewLawnButton *)this,param_1,param_2,param_3);
  *(undefined4 *)(this + 0x20c) = 10;
  *(undefined4 *)(this + 0x210) = 10;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined ***)this = &PTR_GetClass_0676a160;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StretchableNewLawnButton::DrawStretchableNewLawnButton(Sexy::Graphics*, Sexy::Image*,
   Sexy::TRect<int> const&) */

void __thiscall
StretchableNewLawnButton::DrawStretchableNewLawnButton
          (StretchableNewLawnButton *this,Graphics *param_1,Image *param_2,TRect *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_58;
  undefined8 local_50;
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = (int)param_2;
  Sexy::Image::GetCelRect(iVar4);
  iVar5 = Sexy::Image::GetCelCount(param_2);
  if (1 < iVar5) {
    if (((this[0x70] == (StretchableNewLawnButton)0x0) ||
        (this[0x71] == (StretchableNewLawnButton)0x0)) ||
       (this[0x6e] != (StretchableNewLawnButton)0x0)) {
      Sexy::Image::GetCelCount(param_2);
      iVar5 = Sexy::Image::GetCelCount(param_2);
      if ((iVar5 == 3) && (this[0x71] != (StretchableNewLawnButton)0x0)) {
        Sexy::Image::GetCelRect(iVar4);
        local_58 = local_18;
        local_50 = uStack_10;
      }
    }
    else {
      iVar5 = Sexy::Image::GetCelCount(param_2);
      if (iVar5 == 2) {
        Sexy::Image::GetCelRect(iVar4);
        local_58 = local_18;
        local_50 = uStack_10;
      }
      iVar5 = Sexy::Image::GetCelCount(param_2);
      if (iVar5 == 3) {
        Sexy::Image::GetCelRect(iVar4);
        local_58 = local_18;
        local_50 = uStack_10;
      }
    }
  }
  iVar4 = *(int *)param_3;
  iVar5 = *(int *)(param_3 + 4);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)local_58,local_58._4_4_,*(int *)(this + 0x20c),local_50._4_4_)
  ;
  Sexy::Graphics::DrawImage(param_1,param_2,iVar4,iVar5,(TRect *)&local_18);
  iVar5 = *(int *)(param_3 + 8);
  iVar3 = ((int)local_50 - *(int *)(this + 0x20c)) - *(int *)(this + 0x210);
  iVar8 = *(int *)(param_3 + 0xc);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = iVar5 / iVar3;
  }
  Sexy::Insets::Insets
            (aIStack_48,*(int *)(this + 0x20c) + (int)local_58,local_58._4_4_,iVar3,local_50._4_4_);
  iVar2 = 0;
  if (local_50._4_4_ != 0) {
    iVar2 = iVar8 / local_50._4_4_;
  }
  if (iVar5 != iVar4 * iVar3) {
    iVar4 = iVar4 + 1;
  }
  if (iVar8 != iVar2 * local_50._4_4_) {
    iVar2 = iVar2 + 1;
  }
  Sexy::Graphics::PushState(param_1);
  Sexy::Insets::Insets(aIStack_38,(Insets *)(param_1 + 0x28));
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0x20c) + *(int *)param_3,*(int *)(param_3 + 4),
             (*(int *)(param_3 + 8) - *(int *)(this + 0x20c)) - *(int *)(this + 0x210),
             *(int *)(param_3 + 0xc));
  Sexy::Graphics::SetClipRect(param_1,(TRect *)aIStack_28);
  if (0 < iVar4) {
    iVar8 = 0;
    iVar5 = 0;
    do {
      if (0 < iVar2) {
        iVar6 = 0;
        iVar7 = 0;
        do {
          iVar7 = iVar7 + 1;
          iVar1 = iVar6 + *(int *)(param_3 + 4);
          iVar6 = iVar6 + local_50._4_4_;
          Sexy::Graphics::DrawImage
                    (param_1,param_2,iVar8 + *(int *)param_3 + *(int *)(this + 0x20c),iVar1,
                     (TRect *)aIStack_48);
        } while (iVar7 != iVar2);
      }
      iVar8 = iVar8 + iVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar4);
  }
  Sexy::Graphics::PopState(param_1);
  iVar4 = *(int *)(param_3 + 8);
  iVar5 = *(int *)(this + 0x210);
  iVar8 = *(int *)(param_3 + 4);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)local_50 - iVar5,local_58._4_4_,iVar5,local_50._4_4_);
  Sexy::Graphics::DrawImage(param_1,param_2,iVar4 - iVar5,iVar8,(TRect *)&local_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StretchableNewLawnButton::DrawStretchableNewLawnButton(Sexy::Graphics*, Sexy::Image*, int, int,
   int, int) */

void __thiscall
StretchableNewLawnButton::DrawStretchableNewLawnButton
          (StretchableNewLawnButton *this,Graphics *param_1,Image *param_2,int param_3,int param_4,
          int param_5,int param_6)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,param_3,param_4,param_5,param_6);
  DrawStretchableNewLawnButton(this,param_1,param_2,(TRect *)aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StretchableNewLawnButton::DrawButtonImage(Sexy::Graphics*, Sexy::Image*, Sexy::TRect<int> const&,
   int, int) */

void __thiscall
StretchableNewLawnButton::DrawButtonImage
          (StretchableNewLawnButton *this,Graphics *param_1,Image *param_2,TRect *param_3,
          int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_3 + 8) == 0) {
    iVar1 = *(int *)(this + 0x1c8);
    iVar2 = *(int *)(this + 0x1cc);
    iVar3 = *(int *)(this + 0x50);
    iVar4 = Sexy::Image::GetCelHeight(param_2);
    Sexy::Insets::Insets(aIStack_18,param_4 + iVar1,param_5 + iVar2,iVar3,iVar4);
    DrawStretchableNewLawnButton(this,param_1,param_2,(TRect *)aIStack_18);
  }
  else {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xe8),param_4 + *(int *)(this + 0x1c8),
               param_5 + *(int *)(this + 0x1cc),*(int *)(param_3 + 8),*(int *)(param_3 + 0xc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

