// Class: PuzzleRotatePanel


/* PuzzleRotatePanel::GetCurrentIndex() const */

undefined4 __thiscall PuzzleRotatePanel::GetCurrentIndex(PuzzleRotatePanel *this)

{
  return *(undefined4 *)(this + 0x108);
}


/* PuzzleRotatePanel::SetTargetIndex(int) */

void __thiscall PuzzleRotatePanel::SetTargetIndex(PuzzleRotatePanel *this,int param_1)

{
  *(int *)(this + 0x10c) = param_1;
  return;
}


/* PuzzleRotatePanel::BeginRotate() */

void __thiscall PuzzleRotatePanel::BeginRotate(PuzzleRotatePanel *this)

{
  *(undefined4 *)(this + 0x120) = 1;
  return;
}


/* PuzzleRotatePanel::IsRotating() const */

bool __thiscall PuzzleRotatePanel::IsRotating(PuzzleRotatePanel *this)

{
  return *(int *)(this + 0x120) - 2U < 3;
}


/* PuzzleRotatePanel::IsFinishRotating() const */

bool __thiscall PuzzleRotatePanel::IsFinishRotating(PuzzleRotatePanel *this)

{
  return *(int *)(this + 0x120) == 5;
}


/* PuzzleRotatePanel::GetDistanceIndexStep(float, float, int) */

int __thiscall
PuzzleRotatePanel::GetDistanceIndexStep
          (PuzzleRotatePanel *this,float param_1,float param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = (int)(param_1 / param_2) / param_3;
  }
  return (int)(param_1 / param_2) - iVar1 * param_3;
}


/* PuzzleRotatePanel::UpdateStepNext() */

void __thiscall PuzzleRotatePanel::UpdateStepNext(PuzzleRotatePanel *this)

{
  int iVar1;
  
  iVar1 = GetDistanceIndexStep
                    (this,*(float *)(this + 0x13c),*(float *)(this + 0x130),*(int *)(this + 0x110));
  if (*(int *)(this + 0x108) != iVar1) {
    *(int *)(this + 0x108) = iVar1;
    *(int *)(this + 0x144) = *(int *)(this + 0x144) + 1;
  }
  return;
}


/* PuzzleRotatePanel::AddSpeed(PuzzleRotateConfig) */

float __thiscall PuzzleRotatePanel::AddSpeed(PuzzleRotatePanel *this,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 0x14);
  fVar1 = *(float *)(param_2 + 0x10) + *(float *)(this + 0x140);
  *(float *)(this + 0x140) = fVar1;
  if (fVar2 <= fVar1) {
    *(float *)(this + 0x140) = fVar2;
    fVar1 = fVar2;
  }
  return fVar1;
}


/* PuzzleRotatePanel::DeclineSpeed(PuzzleRotateConfig) */

float __thiscall PuzzleRotatePanel::DeclineSpeed(PuzzleRotatePanel *this,long param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x140) - *(float *)(param_2 + 0x10);
  if (fVar1 <= 10.0) {
    *(undefined4 *)(this + 0x140) = 0x41200000;
    return 10.0;
  }
  *(float *)(this + 0x140) = fVar1;
  return fVar1;
}


/* PuzzleRotatePanel::CalcTargetIndex(std::vector<PuzzleRotateButton*,
   std::allocator<PuzzleRotateButton*> >, CoreItemDataBase*) */

ulong __thiscall
PuzzleRotatePanel::CalcTargetIndex(undefined8 param_1,undefined8 *param_2,CoreItemDataBase *param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  CoreItemDataBase *this;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  uVar2 = FUN_04c40764(uVar5,param_2[1]);
  if (0 < (int)uVar2) {
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      puVar3 = (undefined8 *)FUN_04c40770(uVar5,uVar4);
      this = (CoreItemDataBase *)Sexy::ProfileManager::GetListener((ProfileManager *)*puVar3);
      if (*(code **)(*(long *)this + 0x10) == CoreItemDataBase::IsSame) {
        cVar1 = CoreItemDataBase::IsSame(this,param_3);
      }
      else {
        cVar1 = (**(code **)(*(long *)this + 0x10))(this,param_3);
      }
      if (cVar1 != '\0') {
        return uVar4 & 0xffffffff;
      }
      uVar5 = *param_2;
      uVar2 = FUN_04c40764(uVar5,param_2[1]);
    }
  }
  return 0xffffffff;
}


/* PuzzleRotatePanel::GetCurrentButton() const */

undefined8 __thiscall PuzzleRotatePanel::GetCurrentButton(PuzzleRotatePanel *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0xd8);
  iVar1 = *(int *)(this + 0x108);
  uVar2 = FUN_04c40764(uVar4,*(undefined8 *)(this + 0xe0));
  if ((ulong)(long)iVar1 < uVar2) {
    puVar3 = (undefined8 *)FUN_04c40794(uVar4,(long)iVar1);
    return *puVar3;
  }
  return 0;
}


/* PuzzleRotatePanel::GetCurrentUIRewardFrame() const */

undefined8 __thiscall PuzzleRotatePanel::GetCurrentUIRewardFrame(PuzzleRotatePanel *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)(this + 0x108);
  uVar2 = FUN_04c40764(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  if ((ulong)(long)iVar1 < uVar2) {
    puVar3 = (undefined8 *)FUN_04c4079c(*(undefined8 *)(this + 0xf0),(long)iVar1);
    return *puVar3;
  }
  return 0;
}


/* PuzzleRotatePanel::GetCurrentButtonData() const */

void __thiscall PuzzleRotatePanel::GetCurrentButtonData(PuzzleRotatePanel *this)

{
  ProfileManager *this_00;
  
  this_00 = (ProfileManager *)GetCurrentButton(this);
  if (this_00 != (ProfileManager *)0x0) {
    Sexy::ProfileManager::GetListener(this_00);
    return;
  }
  return;
}


/* PuzzleRotatePanel::OnCloseGiftDialog() */

void PuzzleRotatePanel::OnCloseGiftDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  UISingletonDialog<PuzzlePlatformGiftPanel>::CloseDialog();
  WorldMap_PlatformGiftButton::SetButtonEnable(false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotatePanel::ShowItemDialog(CoreItemDataBase*) */

void __thiscall PuzzleRotatePanel::ShowItemDialog(PuzzleRotatePanel *this,CoreItemDataBase *param_1)

{
  long lVar1;
  LawnApp *this_00;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this_01;
  long *plVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_60,"");
  std::string::string(asStack_58,"");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCloseGiftDialog);
  Sexy::Delegate0::Delegate0<PuzzleRotatePanel,void(PuzzleRotatePanel::*)()>(aDStack_38,aCStack_50);
  LawnApp::ShowMessageDialog(this_00,asStack_60,asStack_58,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  this_01 = (PVZ2UIDialog *)LawnApp::GetPVZ2Dialog(gLawnApp);
  if (this_01 != (PVZ2UIDialog *)0x0) {
    iVar2 = FUN_04c40588(*(undefined4 *)(param_1 + 8));
    iVar3 = FUN_04c4058c(*(undefined4 *)(param_1 + 0xc));
    plVar4 = (long *)UIRewardFrame::CreateUIRewardFrame(iVar2,iVar3,true);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*(long *)this_01 + 0x60))(this_01,plVar4);
      lVar1 = plVar4[10];
      iVar2 = *(int *)(this_01 + 0x50);
      iVar3 = FUN_04c409f4(0x28);
      (**(code **)(*plVar4 + 0x1a8))
                (plVar4,iVar2 / 2 - (int)lVar1 / 2,*(int *)(this_01 + 0x54) / 2 - iVar3);
    }
    PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.7);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotatePanel::Update() */

void __thiscall PuzzleRotatePanel::Update(PuzzleRotatePanel *this)

{
  ProfileManager *this_00;
  CoreItemDataBase *pCVar1;
  code *pcVar2;
  float fVar3;
  PuzzleRotateConfig aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0x120)) {
  case 1:
    *(undefined4 *)(this + 0x120) = 2;
    break;
  case 2:
    PuzzleRotateConfig::PuzzleRotateConfig(aPStack_20,(PuzzleRotateConfig *)(this + 0x124));
    fVar3 = (float)AddSpeed(this,aPStack_20);
    pcVar2 = *(code **)(*(long *)this + 0x310);
    *(float *)(this + 0x13c) = *(float *)(this + 0x13c) + fVar3;
    (*pcVar2)(this);
    if (*(int *)(this + 0x128) <= *(int *)(this + 0x144)) {
      *(undefined4 *)(this + 0x120) = 3;
    }
    break;
  case 3:
    pcVar2 = *(code **)(*(long *)this + 0x310);
    *(float *)(this + 0x13c) = *(float *)(this + 0x13c) + *(float *)(this + 0x140);
    (*pcVar2)(this);
    if (*(int *)(this + 0x10c) - *(int *)(this + 300) <= *(int *)(this + 0x144)) {
      *(undefined4 *)(this + 0x120) = 4;
    }
    break;
  case 4:
    PuzzleRotateConfig::PuzzleRotateConfig(aPStack_20,(PuzzleRotateConfig *)(this + 0x124));
    fVar3 = (float)DeclineSpeed(this,aPStack_20);
    pcVar2 = *(code **)(*(long *)this + 0x310);
    *(float *)(this + 0x13c) = *(float *)(this + 0x13c) + fVar3;
    (*pcVar2)(this);
    if (*(int *)(this + 0x10c) <= *(int *)(this + 0x144)) {
      *(undefined4 *)(this + 0x120) = 5;
    }
    break;
  case 5:
    *(undefined4 *)(this + 0x120) = 0;
    this_00 = (ProfileManager *)GetCurrentButton(this);
    pCVar1 = (CoreItemDataBase *)Sexy::ProfileManager::GetListener(this_00);
    ShowItemDialog(this,pCVar1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotatePanel::PuzzleRotatePanel(PuzzleRotateConfig) */

void __thiscall PuzzleRotatePanel::PuzzleRotatePanel(PuzzleRotatePanel *this,undefined8 *param_2)

{
  undefined8 uVar1;
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06986bc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  PuzzleRotateConfig::PuzzleRotateConfig((PuzzleRotateConfig *)(this + 0x124));
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x124) = *param_2;
  *(undefined8 *)(this + 300) = uVar1;
  *(undefined8 *)(this + 0x134) = param_2[2];
  std::vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>>::clear
            ((vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>> *)(this + 0xd8));
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotatePanel::~PuzzleRotatePanel() */

void __thiscall PuzzleRotatePanel::~PuzzleRotatePanel(PuzzleRotatePanel *this)

{
  LawnApp *this_00;
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  *(undefined ***)this = &PTR_GetClass_06986bc0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  uVar5 = *(undefined8 *)(this + 0xd8);
  uVar1 = FUN_04c40764(uVar5,*(undefined8 *)(this + 0xe0));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_04c40770(uVar5,uVar4);
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
        puVar3 = (undefined8 *)FUN_04c40770(*(undefined8 *)(this + 0xd8),uVar4);
        *puVar3 = 0;
        uVar5 = *(undefined8 *)(this + 0xd8);
        uVar1 = FUN_04c40764(uVar5,*(undefined8 *)(this + 0xe0));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  std::vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>>::clear
            ((vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>> *)(this + 0xd8));
  std::vector<UIRewardFrame*,std::allocator<UIRewardFrame*>>::~vector
            ((vector<UIRewardFrame*,std::allocator<UIRewardFrame*>> *)(this + 0xf0));
  std::vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>>::~vector
            ((vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PuzzleRotatePanel::~PuzzleRotatePanel() */

void __thiscall PuzzleRotatePanel::~PuzzleRotatePanel(PuzzleRotatePanel *this)

{
  ~PuzzleRotatePanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotatePanel::GetFinalTargetSteps(CoreItemDataBase*) */

void __thiscall
PuzzleRotatePanel::GetFinalTargetSteps(PuzzleRotatePanel *this,CoreItemDataBase *param_1)

{
  int iVar1;
  int iVar2;
  vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>>::vector
            (avStack_20,(vector *)(this + 0xd8));
  iVar1 = CalcTargetIndex(this,avStack_20,param_1);
  std::vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>>::~vector(avStack_20);
  iVar2 = FUN_04c40764(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + iVar2 * *(int *)(this + 0x124));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotatePanel::CreateItemRect(int, int, int, int, int) */

void PuzzleRotatePanel::CreateItemRect(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  TPoint *pTVar7;
  uint uVar8;
  int in_w5;
  Insets *in_x8;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  Point aPStack_68 [8];
  Point aPStack_60 [8];
  Point aPStack_58 [8];
  Point aPStack_50 [8];
  Point aPStack_48 [8];
  Point aPStack_40 [8];
  Point aPStack_38 [8];
  Point aPStack_30 [8];
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  iVar2 = *(int *)((ulong)(uint)param_1 + 0x50) + ~param_2 * param_4;
  iVar3 = *(int *)((ulong)(uint)param_1 + 0x54) + ~param_3 * param_5;
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  local_8 = ___stack_chk_guard;
  iVar2 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  local_78 = iVar1 >> 2;
  local_74 = iVar2 >> 2;
  piVar6 = eastl::min_alt<int>(&local_78,&local_74);
  iVar3 = *piVar6;
  iVar4 = FUN_04c409f4(0);
  uVar8 = (uint)DAT_06b90670 & 1;
  if (((DAT_06b90670 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06b90670), iVar5 != 0)) {
    Sexy::Point::Point(aPStack_68,uVar8,uVar8);
    Sexy::Point::Point(aPStack_60,1,uVar8);
    Sexy::Point::Point(aPStack_58,2,uVar8);
    Sexy::Point::Point(aPStack_50,3,uVar8);
    Sexy::Point::Point(aPStack_48,3,1);
    Sexy::Point::Point(aPStack_40,3,2);
    Sexy::Point::Point(aPStack_38,3,3);
    Sexy::Point::Point(aPStack_30,2,3);
    Sexy::Point::Point(aPStack_28,1,3);
    Sexy::Point::Point(aPStack_20,uVar8,3);
    Sexy::Point::Point(aPStack_18,uVar8,2);
    Sexy::Point::Point(aPStack_10,uVar8,1);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&DAT_06b90738,aPStack_68,0xc,
               &local_70);
    __cxa_guard_release(&DAT_06b90670);
    __cxa_atexit(std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector,&DAT_06b90738,
                 &DAT_06a88000);
  }
  pTVar7 = (TPoint *)FUN_04c4078c(DAT_06b90738,(long)in_w5);
  Sexy::Point::Point((Point *)&local_70,pTVar7);
  Sexy::Insets::Insets
            (in_x8,iVar4 + (param_4 + (iVar1 >> 2)) * local_70,
             iVar4 + (param_5 + (iVar2 >> 2)) * local_6c,iVar3,iVar3);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotatePanel::InitButtonList(std::vector<CoreItemDataBase*,
   std::allocator<CoreItemDataBase*> >) */

void __thiscall PuzzleRotatePanel::InitButtonList(PuzzleRotatePanel *this,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  PuzzleRotateButton *this_00;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  PuzzleRotateButton *local_28;
  UIRewardFrame *local_20;
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04c40778(*param_2,param_2[1]);
  if (iVar1 != 0) {
    *(int *)(this + 0x110) = iVar1;
    std::vector<UIRewardFrame*,std::allocator<UIRewardFrame*>>::clear
              ((vector<UIRewardFrame*,std::allocator<UIRewardFrame*>> *)(this + 0xf0));
    std::vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>>::clear
              ((vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>> *)(this + 0xd8));
    uVar2 = FUN_04c409f4(10);
    if (0 < iVar1) {
      uVar7 = 0;
      do {
        this_00 = ::operator_new(0x530);
        PuzzleRotateButton::PuzzleRotateButton(this_00,(int)uVar7);
        local_28 = this_00;
        puVar5 = (undefined8 *)FUN_04c40784(*param_2,uVar7);
        (**(code **)(*(long *)this_00 + 0x10))(this_00,*puVar5);
        (**(code **)(*(long *)this + 0x338))(auStack_18,this,4,4,uVar2,uVar2,uVar7 & 0xffffffff);
        (**(code **)(*(long *)local_28 + 0x20))(local_28,auStack_18);
        std::vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>>::push_back
                  ((vector<PuzzleRotateButton*,std::allocator<PuzzleRotateButton*>> *)(this + 0xd8),
                   &local_28);
        plVar6 = (long *)FUN_04c40784(*param_2,uVar7);
        lVar8 = *plVar6;
        iVar3 = FUN_04c40588(*(undefined4 *)(lVar8 + 8));
        iVar4 = FUN_04c4058c(*(undefined4 *)(lVar8 + 0xc));
        local_20 = (UIRewardFrame *)UIRewardFrame::CreateUIRewardFrame(iVar3,iVar4,true);
        if (local_20 != (UIRewardFrame *)0x0) {
          (**(code **)(*(long *)local_20 + 0x1a0))(local_20,auStack_18);
          std::vector<UIRewardFrame*,std::allocator<UIRewardFrame*>>::push_back
                    ((vector<UIRewardFrame*,std::allocator<UIRewardFrame*>> *)(this + 0xf0),
                     &local_20);
          (**(code **)(*(long *)this + 0x60))(this,local_20);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar1);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleRotatePanel::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PuzzleRotatePanel::DrawAll(PuzzleRotatePanel *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  Image *pIVar7;
  Insets aIStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04c409f4(10);
  Sexy::Insets::Insets(aIStack_28,-iVar2,-iVar2,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets((Insets *)&local_18,aIStack_28);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b90750);
  Draw9SliceImage(param_2,(Insets *)&local_18,uVar5);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  lVar6 = GetCurrentUIRewardFrame(this);
  if (lVar6 != 0) {
    iVar3 = FUN_04c409f4(10);
    iVar2 = *(int *)(lVar6 + 0x48);
    iVar1 = *(int *)(lVar6 + 0x4c);
    iVar4 = FUN_04c409f4(0x14);
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar2 - iVar3,iVar1 - iVar3,iVar4 + *(int *)(lVar6 + 0x50),
               iVar4 + *(int *)(lVar6 + 0x54));
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b90778);
    Sexy::Graphics::DrawImage(param_2,pIVar7,local_18,local_14,local_10,local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

