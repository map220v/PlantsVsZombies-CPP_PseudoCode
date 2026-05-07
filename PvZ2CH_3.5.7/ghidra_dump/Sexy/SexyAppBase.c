// Class: Sexy::SexyAppBase


/* Sexy::SexyAppBase::AppEnteredBackground() */

void Sexy::SexyAppBase::AppEnteredBackground(void)

{
  return;
}


/* Sexy::SexyAppBase::StartSounds() */

void Sexy::SexyAppBase::StartSounds(void)

{
  return;
}


/* Sexy::SexyAppBase::AppCanRestore() */

byte __thiscall Sexy::SexyAppBase::AppCanRestore(SexyAppBase *this)

{
  return (byte)this[0x665] ^ 1;
}


/* Sexy::SexyAppBase::DoDialog(int, bool, std::wstring const&, std::wstring const&, std::wstring
   const&, int) */

undefined8 __thiscall
Sexy::SexyAppBase::DoDialog
          (SexyAppBase *this,int param_1,bool param_2,wstring *param_3,wstring *param_4,
          wstring *param_5,int param_6)

{
  undefined8 uVar1;
  
  (**(code **)(*(long *)this + 0x280))();
  uVar1 = (**(code **)(*(long *)this + 0xb8))(this,param_1,param_2,param_3,param_4,param_5,param_6);
  (**(code **)(*(long *)this + 0x268))(this,param_1,uVar1);
  return uVar1;
}


/* Sexy::SexyAppBase::KillDialog(int) */

void __thiscall Sexy::SexyAppBase::KillDialog(SexyAppBase *this,int param_1)

{
  (**(code **)(*(long *)this + 0x278))(this,param_1,1,1);
  return;
}


/* Sexy::SexyAppBase::KillDialog(Sexy::Dialog*) */

void __thiscall Sexy::SexyAppBase::KillDialog(SexyAppBase *this,Dialog *param_1)

{
  (**(code **)(*(long *)this + 0x280))(this,*(undefined4 *)(param_1 + 0x168));
  return;
}


/* Sexy::SexyAppBase::AddDialog(int, Sexy::Dialog*) */

void Sexy::SexyAppBase::AddDialog(int param_1,Dialog *param_2)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x260))();
  return;
}


/* Sexy::SexyAppBase::AddDialog(Sexy::Dialog*) */

void __thiscall Sexy::SexyAppBase::AddDialog(SexyAppBase *this,Dialog *param_1)

{
  (**(code **)(*(long *)this + 0x268))(this,*(undefined4 *)(param_1 + 0x168),param_1);
  return;
}


/* Sexy::SexyAppBase::DialogButtonPress(int, int) */

void __thiscall Sexy::SexyAppBase::DialogButtonPress(SexyAppBase *this,int param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_2 == 1000) {
    puVar2 = *(undefined8 **)this;
    iVar1 = param_1 + 2000;
  }
  else {
    if (param_2 != 0x3e9) {
      return;
    }
    puVar2 = *(undefined8 **)this;
    iVar1 = param_1 + 3000;
  }
  if ((code *)*puVar2 == ButtonListener::ButtonPress) {
    return;
  }
  (*(code *)*puVar2)(this,iVar1);
  return;
}


/* non-virtual thunk to Sexy::SexyAppBase::DialogButtonPress(int, int) */

void __thiscall Sexy::SexyAppBase::DialogButtonPress(SexyAppBase *this,int param_1,int param_2)

{
  DialogButtonPress(this + -8,param_1,param_2);
  return;
}


/* Sexy::SexyAppBase::DialogButtonDepress(int, int) */

void __thiscall Sexy::SexyAppBase::DialogButtonDepress(SexyAppBase *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 1000) {
    lVar2 = *(long *)this;
    iVar1 = param_1 + 2000;
  }
  else {
    if (param_2 != 0x3e9) {
      return;
    }
    lVar2 = *(long *)this;
    iVar1 = param_1 + 3000;
  }
  if (*(code **)(lVar2 + 0x10) == ButtonListener::ButtonDepress) {
    return;
  }
  (**(code **)(lVar2 + 0x10))(this,iVar1);
  return;
}


/* non-virtual thunk to Sexy::SexyAppBase::DialogButtonDepress(int, int) */

void __thiscall Sexy::SexyAppBase::DialogButtonDepress(SexyAppBase *this,int param_1,int param_2)

{
  DialogButtonDepress(this + -8,param_1,param_2);
  return;
}


/* Sexy::SexyAppBase::URLOpenFailed(std::string const&) */

void Sexy::SexyAppBase::URLOpenFailed(string *param_1)

{
  param_1[0x440] = (string)0x0;
  return;
}


/* Sexy::SexyAppBase::URLOpenSucceeded(std::string const&) */

void Sexy::SexyAppBase::URLOpenSucceeded(string *param_1)

{
  param_1[0x440] = (string)0x0;
  if (param_1[0x441] != (string)0x0) {
    (**(code **)(*(long *)param_1 + 0x180))();
  }
  return;
}


/* Sexy::SexyAppBase::OpenURL(std::string const&, bool) */

void Sexy::SexyAppBase::OpenURL(string *param_1,bool param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x80))(*(long **)(param_1 + 0x10),param_2);
  return;
}


/* Sexy::SexyAppBase::GetLoadingThreadProgress() */

void __thiscall Sexy::SexyAppBase::GetLoadingThreadProgress(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0xc0))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::Shutdown() */

void __thiscall Sexy::SexyAppBase::Shutdown(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x38))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::BeginPopup() */

void __thiscall Sexy::SexyAppBase::BeginPopup(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x50))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::EndPopup() */

void __thiscall Sexy::SexyAppBase::EndPopup(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x58))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::MsgBox(std::string const&, std::string const&, int) */

void Sexy::SexyAppBase::MsgBox(string *param_1,string *param_2,int param_3)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x60))(*(long **)(param_1 + 0x10),param_2,param_3);
  return;
}


/* Sexy::SexyAppBase::MsgBox(std::wstring const&, std::wstring const&, int) */

void Sexy::SexyAppBase::MsgBox(wstring *param_1,wstring *param_2,int param_3)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x68))(*(long **)(param_1 + 0x10),param_2,param_3);
  return;
}


/* Sexy::SexyAppBase::Popup(std::string const&) */

void Sexy::SexyAppBase::Popup(string *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x70))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::Popup(std::wstring const&) */

void Sexy::SexyAppBase::Popup(wstring *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x78))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::DebugKeyDown(int) */

void Sexy::SexyAppBase::DebugKeyDown(int param_1)

{
  (**(code **)(**(long **)((ulong)(uint)param_1 + 0x10) + 0x120))
            (*(long **)((ulong)(uint)param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::Vibrate(long long) */

void Sexy::SexyAppBase::Vibrate(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(long **)(param_1 + 0x10) + 0x1b8);
  if (pcVar1 != IAppDriver::Vibrate) {
    (*pcVar1)();
  }
  return;
}


/* Sexy::SexyAppBase::VibrateWithPattern(long long*, int) */

void Sexy::SexyAppBase::VibrateWithPattern(longlong *param_1,int param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)param_1[2] + 0x1c0);
  if (pcVar1 != IAppDriver::VibrateWithPattern) {
    (*pcVar1)((long *)param_1[2],param_2);
  }
  return;
}


/* Sexy::SexyAppBase::CancelVibrate() */

void __thiscall Sexy::SexyAppBase::CancelVibrate(SexyAppBase *this)

{
  if (*(code **)(**(long **)(this + 0x10) + 0x1c8) != IAppDriver::CancelVibrate) {
    (**(code **)(**(long **)(this + 0x10) + 0x1c8))();
  }
  return;
}


/* Sexy::SexyAppBase::ShowEmailKeyboard() */

void __thiscall Sexy::SexyAppBase::ShowEmailKeyboard(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x170))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::HideKeyboard() */

void __thiscall Sexy::SexyAppBase::HideKeyboard(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x198))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::IsKeyboardShowing() */

void __thiscall Sexy::SexyAppBase::IsKeyboardShowing(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x1a0))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::SetFPS(bool) */

void Sexy::SexyAppBase::SetFPS(bool param_1)

{
  (**(code **)(**(long **)((ulong)param_1 + 0x10) + 0x1a8))(*(long **)((ulong)param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::IsHighFPS() */

void __thiscall Sexy::SexyAppBase::IsHighFPS(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x1b0))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::IsFullScreen() */

void __thiscall Sexy::SexyAppBase::IsFullScreen(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x180))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::CalcFullScreenOffset() */

undefined4 __thiscall Sexy::SexyAppBase::CalcFullScreenOffset(SexyAppBase *this)

{
  return *(undefined4 *)(this + 0x934);
}


/* Sexy::SexyAppBase::SwitchScreenMode(bool, bool, bool) */

void Sexy::SexyAppBase::SwitchScreenMode(bool param_1,bool param_2,bool param_3)

{
  (**(code **)(**(long **)((ulong)param_1 + 0x10) + 0x108))
            (*(long **)((ulong)param_1 + 0x10),param_2,param_3);
  return;
}


/* Sexy::SexyAppBase::UpdateAppStep(bool*) */

void Sexy::SexyAppBase::UpdateAppStep(bool *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::UpdateApp() */

void __thiscall Sexy::SexyAppBase::UpdateApp(SexyAppBase *this)

{
  char cVar1;
  char local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  do {
    cVar1 = (**(code **)(*(long *)this + 0x3a8))(this,&local_9);
    if (cVar1 == '\0') break;
  } while (local_9 == '\0');
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyAppBase::GetGameSEHInfo() */

void Sexy::SexyAppBase::GetGameSEHInfo(void)

{
  long in_x0;
  
  (**(code **)(**(long **)(in_x0 + 0x10) + 0x88))(*(long **)(in_x0 + 0x10));
  return;
}


/* Sexy::SexyAppBase::Start() */

void __thiscall Sexy::SexyAppBase::Start(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x18))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::CheckSignature(Sexy::Buffer const&, std::string const&) */

void Sexy::SexyAppBase::CheckSignature(Buffer *param_1,string *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x1d0))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::DoParseCmdLine() */

void __thiscall Sexy::SexyAppBase::DoParseCmdLine(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0xa0))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::ParseCmdLine(std::string const&) */

void Sexy::SexyAppBase::ParseCmdLine(string *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0xa8))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::HandleCmdLineParam(std::string const&, std::string const&) */

void Sexy::SexyAppBase::HandleCmdLineParam(string *param_1,string *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb0))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::IsMuted() */

bool __thiscall Sexy::SexyAppBase::IsMuted(SexyAppBase *this)

{
  return 0 < *(int *)(this + 0x470);
}


/* Sexy::SexyAppBase::Mute(bool) */

void __thiscall Sexy::SexyAppBase::Mute(SexyAppBase *this,bool param_1)

{
  *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
  if (param_1) {
    *(int *)(this + 0x474) = *(int *)(this + 0x474) + 1;
  }
  (**(code **)(*(long *)this + 0x1f8))(*(undefined8 *)(this + 0xe0),this);
  (**(code **)(*(long *)this + 0x200))(*(undefined8 *)(this + 0xe8),this);
  return;
}


/* Sexy::SexyAppBase::Unmute(bool) */

void __thiscall Sexy::SexyAppBase::Unmute(SexyAppBase *this,bool param_1)

{
  if ((0 < *(int *)(this + 0x470)) &&
     (*(int *)(this + 0x470) = *(int *)(this + 0x470) + -1, param_1)) {
    *(int *)(this + 0x474) = *(int *)(this + 0x474) + -1;
  }
  (**(code **)(*(long *)this + 0x1f8))(*(undefined8 *)(this + 0xe0),this);
  (**(code **)(*(long *)this + 0x200))(*(undefined8 *)(this + 0xe8),this);
  return;
}


/* Sexy::SexyAppBase::GetMusicVolume() */

undefined1  [16] __thiscall Sexy::SexyAppBase::GetMusicVolume(SexyAppBase *this)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(this + 0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


/* Sexy::SexyAppBase::GetSfxVolume() */

undefined1  [16] __thiscall Sexy::SexyAppBase::GetSfxVolume(SexyAppBase *this)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(this + 0xe8);
  auVar1._8_8_ = 0;
  return auVar1;
}


/* Sexy::SexyAppBase::Set3DAcclerated(bool, bool) */

void Sexy::SexyAppBase::Set3DAcclerated(bool param_1,bool param_2)

{
  (**(code **)(**(long **)((ulong)param_1 + 0x10) + 0x148))
            (*(long **)((ulong)param_1 + 0x10),param_2);
  return;
}


/* Sexy::SexyAppBase::OnBackButtonPressed() */

void __thiscall Sexy::SexyAppBase::OnBackButtonPressed(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x360) + 0x148))(*(long **)(this + 0x360));
  return;
}


/* Sexy::SexyAppBase::IsUIOrientationAllowed(Sexy::UI_ORIENTATION) */

void Sexy::SexyAppBase::IsUIOrientationAllowed(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(long **)(param_1 + 0x10) + 0x150);
  if (pcVar1 == IAppDriver::IsUIOrientationAllowed) {
    IAppDriver::IsUIOrientationAllowed();
    return;
  }
  (*pcVar1)();
  return;
}


/* Sexy::SexyAppBase::GetUIOrientation() */

void __thiscall Sexy::SexyAppBase::GetUIOrientation(SexyAppBase *this)

{
  if (*(code **)(**(long **)(this + 0x10) + 0x158) == IAppDriver::GetUIOrientation) {
    IAppDriver::GetUIOrientation();
    return;
  }
  (**(code **)(**(long **)(this + 0x10) + 0x158))();
  return;
}


/* Sexy::SexyAppBase::SetCheatsEnabled(bool) */

void __thiscall Sexy::SexyAppBase::SetCheatsEnabled(SexyAppBase *this,bool param_1)

{
  this[0x6e4] = (SexyAppBase)param_1;
  return;
}


/* Sexy::SexyAppBase::GetCheatsEnabled() */

SexyAppBase __thiscall Sexy::SexyAppBase::GetCheatsEnabled(SexyAppBase *this)

{
  return this[0x6e4];
}


/* Sexy::SexyAppBase::NewDialog(int, bool, std::wstring const&, std::wstring const&, std::wstring
   const&, int) */

Dialog * __thiscall
Sexy::SexyAppBase::NewDialog
          (SexyAppBase *this,int param_1,bool param_2,wstring *param_3,wstring *param_4,
          wstring *param_5,int param_6)

{
  Dialog *this_00;
  
  this_00 = ::operator_new(0x1a0);
  Dialog::Dialog(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::GotFocus() */

void __thiscall Sexy::SexyAppBase::GotFocus(SexyAppBase *this)

{
  char cVar1;
  long *plVar2;
  ResStreamsManager *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)(**(code **)(**(long **)(this + 0x20) + 0xb0))(*(long **)(this + 0x20));
  if (*(code **)(*plVar2 + 0x2b0) != RenderDevice3D::GotFocus) {
    (**(code **)(*plVar2 + 0x2b0))();
  }
  this_00 = *(ResStreamsManager **)(this + 0x908);
  if (this_00 != (ResStreamsManager *)0x0) {
    std::string::string(asStack_10,"dynamic.rsb");
    cVar1 = ResStreamsManager::IsInitialized(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      ResStreamsManager::GotFocus(*(ResStreamsManager **)(this + 0x908));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::LostFocus() */

void __thiscall Sexy::SexyAppBase::LostFocus(SexyAppBase *this)

{
  char cVar1;
  long *plVar2;
  ResStreamsManager *this_00;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(ResStreamsManager **)(this + 0x908);
  local_8 = ___stack_chk_guard;
  if (this_00 != (ResStreamsManager *)0x0) {
    std::string::string(asStack_10,"dynamic.rsb");
    cVar1 = ResStreamsManager::IsInitialized(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      nop();
    }
  }
  if ((*(long **)(this + 0x20) != (long *)0x0) &&
     (plVar2 = (long *)(**(code **)(**(long **)(this + 0x20) + 0xb0))(), plVar2 != (long *)0x0)) {
    if (*(code **)(*plVar2 + 0x2a8) != RenderDevice3D::LostFocus) {
      (**(code **)(*plVar2 + 0x2a8))();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyAppBase::ActivateAudioSession() */

void __thiscall Sexy::SexyAppBase::ActivateAudioSession(SexyAppBase *this)

{
  if (*(InteractiveSoundManager **)(this + 0x648) != (InteractiveSoundManager *)0x0) {
    InteractiveSoundManager::PauseAll(*(InteractiveSoundManager **)(this + 0x648),false);
    return;
  }
  return;
}


/* Sexy::SexyAppBase::DeactivateAudioSession() */

void __thiscall Sexy::SexyAppBase::DeactivateAudioSession(SexyAppBase *this)

{
  if (*(InteractiveSoundManager **)(this + 0x648) != (InteractiveSoundManager *)0x0) {
    InteractiveSoundManager::PauseAll(*(InteractiveSoundManager **)(this + 0x648),true);
    return;
  }
  return;
}


/* Sexy::SexyAppBase::DrawScreen() */

void __thiscall Sexy::SexyAppBase::DrawScreen(SexyAppBase *this)

{
  WidgetManager::DrawScreen(*(WidgetManager **)(this + 0x360));
  return;
}


/* Sexy::SexyAppBase::SetMusicVolume(double) */

void __thiscall Sexy::SexyAppBase::SetMusicVolume(SexyAppBase *this,double param_1)

{
  *(double *)(this + 0xe0) = param_1;
  InteractiveSoundManager::SetMusicVolume
            (*(InteractiveSoundManager **)(this + 0x648),(float)param_1);
  return;
}


/* Sexy::SexyAppBase::SetSfxVolume(double) */

void __thiscall Sexy::SexyAppBase::SetSfxVolume(SexyAppBase *this,double param_1)

{
  if (*(InteractiveSoundManager **)(this + 0x648) != (InteractiveSoundManager *)0x0) {
    InteractiveSoundManager::SetSfxVolume
              (*(InteractiveSoundManager **)(this + 0x648),(float)param_1);
  }
  *(double *)(this + 0xe8) = param_1;
  return;
}


/* Sexy::SexyAppBase::GetMasterVolume() */

undefined1  [16] __thiscall Sexy::SexyAppBase::GetMasterVolume(SexyAppBase *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  if (*(InteractiveSoundManager **)(this + 0x648) != (InteractiveSoundManager *)0x0) {
    fVar1 = (float)InteractiveSoundManager::GetMasterVolume
                             (*(InteractiveSoundManager **)(this + 0x648));
    auVar2._0_8_ = (double)fVar1;
    auVar2._8_8_ = 0;
    return auVar2;
  }
  return ZEXT816(0);
}


/* Sexy::SexyAppBase::SetMasterVolume(double) */

void __thiscall Sexy::SexyAppBase::SetMasterVolume(SexyAppBase *this,double param_1)

{
  if (*(InteractiveSoundManager **)(this + 0x648) != (InteractiveSoundManager *)0x0) {
    InteractiveSoundManager::SetMasterVolume
              (*(InteractiveSoundManager **)(this + 0x648),(float)param_1);
    return;
  }
  return;
}


/* Sexy::SexyAppBase::TouchBegan(Sexy::Touch const&) */

void __thiscall Sexy::SexyAppBase::TouchBegan(SexyAppBase *this,Touch *param_1)

{
  WidgetManager::TouchBegan(*(WidgetManager **)(this + 0x360),param_1);
  return;
}


/* Sexy::SexyAppBase::TouchEnded(Sexy::Touch const&) */

void __thiscall Sexy::SexyAppBase::TouchEnded(SexyAppBase *this,Touch *param_1)

{
  WidgetManager::TouchEnded(*(WidgetManager **)(this + 0x360),param_1);
  return;
}


/* Sexy::SexyAppBase::TouchMoved(Sexy::Touch const&) */

void __thiscall Sexy::SexyAppBase::TouchMoved(SexyAppBase *this,Touch *param_1)

{
  WidgetManager::TouchMoved(*(WidgetManager **)(this + 0x360),param_1);
  return;
}


/* Sexy::SexyAppBase::TouchesCanceled() */

void __thiscall Sexy::SexyAppBase::TouchesCanceled(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x110))(*(long **)(this + 0x10));
  WidgetManager::TouchesCanceled(*(WidgetManager **)(this + 0x360));
  return;
}


/* Sexy::SexyAppBase::InitFileDriver() */

void Sexy::SexyAppBase::InitFileDriver(void)

{
  if (gFileDriver != 0) {
    return;
  }
  gFileDriver = IFileDriver::CreateFileDriver();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::SetResumeCachedFolder(std::string const&) */

void Sexy::SexyAppBase::SetResumeCachedFolder(string *param_1)

{
  ResumableRequestInfo *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ResumableRequestInfo *)thunk_FUN_05475e00(param_1 + 0xb0);
  ResumableRequestInfo::GetResumeCachedFolder(this);
  DFinder::createDirectory(asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyAppBase::ClearUpdateBacklog(bool) */

void Sexy::SexyAppBase::ClearUpdateBacklog(bool param_1)

{
  (**(code **)(**(long **)((ulong)param_1 + 0x10) + 0x30))(*(long **)((ulong)param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::IsScreenSaver() */

SexyAppBase __thiscall Sexy::SexyAppBase::IsScreenSaver(SexyAppBase *this)

{
  return this[0x3bc];
}


/* Sexy::SexyAppBase::SetCursorImage(int, Sexy::Image*) */

void Sexy::SexyAppBase::SetCursorImage(int param_1,Image *param_2)

{
  (**(code **)(**(long **)((ulong)(uint)param_1 + 0x10) + 0xf0))
            (*(long **)((ulong)(uint)param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::RegistryWriteString(std::string const&, std::string const&) */

void Sexy::SexyAppBase::RegistryWriteString(string *param_1,string *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x210))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::RegistryWriteString(std::string const&, std::wstring const&) */

void Sexy::SexyAppBase::RegistryWriteString(string *param_1,wstring *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x218))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::RegistryWriteInteger(std::string const&, int) */

void Sexy::SexyAppBase::RegistryWriteInteger(string *param_1,int param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x220))(*(long **)(param_1 + 0x10),param_2);
  return;
}


/* Sexy::SexyAppBase::RegistryWriteBoolean(std::string const&, bool) */

void Sexy::SexyAppBase::RegistryWriteBoolean(string *param_1,bool param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x228))(*(long **)(param_1 + 0x10),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::WriteToRegistry() */

void __thiscall Sexy::SexyAppBase::WriteToRegistry(SexyAppBase *this)

{
  int iVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"MusicVolume");
  iVar1 = (int)asStack_10;
  RegistryWriteInteger((string *)this,iVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SfxVolume");
  RegistryWriteInteger((string *)this,iVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Muted");
  RegistryWriteInteger((string *)this,iVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ScreenMode");
  RegistryWriteInteger((string *)this,iVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PreferredX");
  RegistryWriteInteger((string *)this,iVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PreferredY");
  RegistryWriteInteger((string *)this,iVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PreferredWidth");
  RegistryWriteInteger((string *)this,iVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PreferredHeight");
  RegistryWriteInteger((string *)this,iVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CustomCursors");
  RegistryWriteInteger((string *)this,iVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"InProgress");
  RegistryWriteInteger((string *)this,iVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"WaitForVSync");
  RegistryWriteBoolean((string *)this,SUB81(asStack_10,0));
  std::string::~string(asStack_10);
  nop();
  if (*(code **)(**(long **)(this + 0x10) + 0x250) != IAppDriver::WriteToConfig) {
    (**(code **)(**(long **)(this + 0x10) + 0x250))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyAppBase::RegistryWriteData(std::string const&, unsigned char const*, unsigned long) */

void Sexy::SexyAppBase::RegistryWriteData(string *param_1,uchar *param_2,ulong param_3)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x230))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::RegistryEraseKey(std::wstring const&) */

void Sexy::SexyAppBase::RegistryEraseKey(wstring *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x238))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::RegistryEraseValue(std::wstring const&) */

void Sexy::SexyAppBase::RegistryEraseValue(wstring *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x240))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::RegistryGetSubKeys(std::string const&, std::vector<std::string,
   std::allocator<std::string > >*) */

void Sexy::SexyAppBase::RegistryGetSubKeys(string *param_1,vector *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x1e0))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::RegistryReadString(std::string const&, std::string*) */

void Sexy::SexyAppBase::RegistryReadString(string *param_1,string *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x1e8))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::RegistryReadString(std::string const&, std::wstring*) */

void Sexy::SexyAppBase::RegistryReadString(string *param_1,wstring *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x1f0))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::RegistryReadInteger(std::string const&, int*) */

void Sexy::SexyAppBase::RegistryReadInteger(string *param_1,int *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x1f8))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::RegistryReadBoolean(std::string const&, bool*) */

void Sexy::SexyAppBase::RegistryReadBoolean(string *param_1,bool *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x200))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::RegistryReadData(std::string const&, unsigned char*, unsigned long*) */

void Sexy::SexyAppBase::RegistryReadData(string *param_1,uchar *param_2,ulong *param_3)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x208))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::WriteBytesToFile(std::string const&, void const*, unsigned long) */

void Sexy::SexyAppBase::WriteBytesToFile(string *param_1,void *param_2,ulong param_3)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x268))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::WriteBytesToFileAt(std::string const&, void const*, unsigned long, unsigned
   long) */

void Sexy::SexyAppBase::WriteBytesToFileAt
               (string *param_1,void *param_2,ulong param_3,ulong param_4)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x270))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::WriteBytesToFileEnd(std::string const&, void const*, unsigned long) */

void Sexy::SexyAppBase::WriteBytesToFileEnd(string *param_1,void *param_2,ulong param_3)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x278))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::CreateFileOfSize(std::string const&, unsigned long) */

void Sexy::SexyAppBase::CreateFileOfSize(string *param_1,ulong param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x280))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::CopyFile(std::string const&, std::string const&) */

void Sexy::SexyAppBase::CopyFile(string *param_1,string *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x288))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::RenameFile(std::string const&, std::string const&) */

void Sexy::SexyAppBase::RenameFile(string *param_1,string *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x290))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::WriteBufferToFile(std::string const&, Sexy::Buffer const*) */

void __thiscall
Sexy::SexyAppBase::WriteBufferToFile(SexyAppBase *this,string *param_1,Buffer *param_2)

{
  ulong uVar1;
  
  uVar1 = Buffer::GetDataPtr(param_2);
  Buffer::GetDataLen(param_2);
  WriteBytesToFile((string *)this,param_1,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::ReadBufferFromFile(std::string const&, Sexy::Buffer*, bool) */

void Sexy::SexyAppBase::ReadBufferFromFile(string *param_1,Buffer *param_2,bool param_3)

{
  string *psVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ColourFit *this;
  undefined1 *puVar7;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  Buffer *this_00;
  ResStreamsManager *this_01;
  undefined1 auVar8 [16];
  uint local_20 [2];
  string asStack_18 [8];
  uchar *local_10;
  long local_8;
  
  this_00 = (Buffer *)(ulong)param_3;
  psVar1 = param_1 + 0x78;
  local_8 = ___stack_chk_guard;
  FUN_05474ff8(psVar1);
  if (param_1[0x6d9] != (string)0x0) {
    GetFullPath((Sexy *)param_2,(string *)(ulong)(byte)param_1[0x6d9]);
    std::string::string((string *)&local_10,"Buffer");
    cVar3 = FUN_051d4488();
    std::string::~string((string *)&local_10);
    nop();
    std::string::~string(asStack_18);
    if (cVar3 != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1000,0x51d52d4);
      (*pcVar2)();
    }
  }
  this_01 = *(ResStreamsManager **)(param_1 + 0x908);
  if (this_01 != (ResStreamsManager *)0x0) {
    std::string::string((string *)&local_10,"dynamic.rsb");
    cVar3 = ResStreamsManager::IsInitialized(this_01,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    if (cVar3 != '\0') {
      FUN_05475d88(asStack_18,param_2);
      uVar4 = ResStreamsManager::GetGroupForFile
                        (*(ResStreamsManager **)(param_1 + 0x908),asStack_18,true,true);
      if (uVar4 == 0xffffffff) {
        FUN_05475ad8(psVar1," | UNKNOWN_GROUP ");
      }
      else {
        local_10 = (uchar *)0x0;
        cVar3 = ResStreamsManager::GetResidentFileBuffer
                          (*(ResStreamsManager **)(param_1 + 0x908),uVar4,asStack_18,&local_10,
                           local_20);
        if (cVar3 != '\0') {
          Buffer::Clear(this_00);
          Buffer::SetData(this_00,local_10,local_20[0]);
          std::string::~string(asStack_18);
          goto LAB_051d5244;
        }
        FUN_05475ad8(psVar1," | GetResidentFileBuffer() return false");
      }
      std::string::~string(asStack_18);
    }
  }
  FUN_0547429c(param_2);
  auVar8 = FUN_051d4828();
  lVar6 = auVar8._0_8_;
  if (lVar6 == 0) {
    if ((param_1[0x6d8] != (string)0x0) && (param_1[0x6d9] != (string)0x0)) {
      GetFullPath((Sexy *)param_2,auVar8._8_8_);
      std::string::string((string *)&local_10,"Buffer");
      puVar7 = (undefined1 *)FUN_051d4490();
      std::string::~string((string *)&local_10);
      nop();
      std::string::~string(asStack_18);
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 0;
        GetFullPath((Sexy *)param_2,extraout_x1_02);
        std::string::string((string *)&local_10,"Buffer");
        GetFullPath((Sexy *)param_2,extraout_x1_03);
        std::string::~string(asStack_18);
        std::string::~string((string *)&local_10);
        nop();
        std::string::~string((string *)local_20);
      }
    }
    cVar3 = '\0';
    FUN_05475ad8(psVar1,"aFP == NULL");
  }
  else {
    FUN_051d4788(lVar6,2);
    iVar5 = FUN_051d3840(lVar6);
    FUN_051d4788(lVar6,0);
    this = operator_new__((long)iVar5);
    FUN_051d46c8(this,iVar5,lVar6);
    FUN_051d4108(lVar6);
    Buffer::Clear(this_00);
    Buffer::SetData(this_00,(uchar *)this,iVar5);
    if ((param_1[0x6d8] != (string)0x0) && (param_1[0x6d9] != (string)0x0)) {
      GetFullPath((Sexy *)param_2,extraout_x1);
      std::string::string((string *)&local_10,"Buffer");
      puVar7 = (undefined1 *)FUN_051d4490();
      std::string::~string((string *)&local_10);
      nop();
      std::string::~string(asStack_18);
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 1;
        memcpy(puVar7 + 1,this,(long)iVar5);
        GetFullPath((Sexy *)param_2,extraout_x1_00);
        std::string::string((string *)&local_10,"Buffer");
        GetFullPath((Sexy *)param_2,extraout_x1_01);
        std::string::~string(asStack_18);
        std::string::~string((string *)&local_10);
        nop();
        std::string::~string((string *)local_20);
      }
    }
    cVar3 = '\x01';
    EATextSquish::ColourFit::~ColourFit(this);
  }
LAB_051d5244:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::ReadBufferFromFile(std::string const&, void*&, unsigned long&) */

void __thiscall
Sexy::SexyAppBase::ReadBufferFromFile
          (SexyAppBase *this,string *param_1,void **param_2,ulong *param_3)

{
  code *pcVar1;
  char cVar2;
  SexyAppBase SVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  void *__src;
  undefined1 *puVar7;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *__n;
  ResStreamsManager *this_00;
  ulong __n_00;
  undefined1 auVar8 [16];
  string asStack_28 [8];
  uint local_20 [2];
  string asStack_18 [8];
  void *local_10;
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  __n = (string *)param_2;
  if (this[0x6d9] != (SexyAppBase)0x0) {
    __n = (string *)local_20;
    GetFullPath((Sexy *)param_1,___stack_chk_guard);
    std::string::string((string *)&local_10,"Buffer");
    cVar2 = FUN_051d4488();
    std::string::~string((string *)&local_10);
    nop();
    std::string::~string(asStack_18);
    if (cVar2 != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1000,0x51d574c);
      (*pcVar1)();
    }
  }
  this_00 = *(ResStreamsManager **)(this + 0x908);
  if (this_00 != (ResStreamsManager *)0x0) {
    __n = asStack_18;
    std::string::string((string *)&local_10,"dynamic.rsb");
    cVar2 = ResStreamsManager::IsInitialized(this_00,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    if (cVar2 != '\0') {
      FUN_05475d88(asStack_18,param_1);
      __n = (string *)0x1;
      uVar4 = ResStreamsManager::GetGroupForFile
                        (*(ResStreamsManager **)(this + 0x908),asStack_18,true,true);
      if (uVar4 != 0xffffffff) {
        local_10 = (void *)0x0;
        local_20[0] = 0;
        __n = asStack_18;
        SVar3 = (SexyAppBase)
                ResStreamsManager::GetResidentFileBuffer
                          (*(ResStreamsManager **)(this + 0x908),uVar4,asStack_18,
                           (uchar **)&local_10,local_20);
        if (SVar3 != (SexyAppBase)0x0) {
          *param_2 = local_10;
          *param_3 = (ulong)local_20[0];
          std::string::~string(asStack_18);
          goto LAB_051d56bc;
        }
      }
      std::string::~string(asStack_18);
    }
  }
  FUN_0547429c(param_1);
  auVar8 = FUN_051d4828();
  lVar6 = auVar8._0_8_;
  if (lVar6 == 0) {
    if ((this[0x6d8] != (SexyAppBase)0x0) && (this[0x6d9] != (SexyAppBase)0x0)) {
      GetFullPath((Sexy *)param_1,auVar8._8_8_);
      __n = (string *)local_20;
      std::string::string((string *)&local_10,"Buffer");
      puVar7 = (undefined1 *)FUN_051d4490();
      std::string::~string((string *)&local_10);
      nop();
      std::string::~string(asStack_18);
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 0;
        __n = asStack_28;
        GetFullPath((Sexy *)param_1,extraout_x1_02);
        std::string::string((string *)&local_10,"Buffer");
        GetFullPath((Sexy *)param_1,extraout_x1_03);
        std::string::~string(asStack_18);
        std::string::~string((string *)&local_10);
        nop();
        std::string::~string((string *)local_20);
      }
    }
    SVar3 = (SexyAppBase)0x0;
    std::string::append((string *)(this + 0x78),"aFP == NULL",(size_t)__n);
  }
  else {
    FUN_051d4788(lVar6,2);
    iVar5 = FUN_051d3840(lVar6);
    __n_00 = (ulong)iVar5;
    FUN_051d4788(lVar6,0);
    __src = operator_new__(__n_00);
    FUN_051d46c8(__src,iVar5,lVar6);
    FUN_051d4108(lVar6);
    *param_2 = __src;
    SVar3 = this[0x6d8];
    *param_3 = __n_00;
    if ((SVar3 != (SexyAppBase)0x0) && (SVar3 = this[0x6d9], SVar3 != (SexyAppBase)0x0)) {
      GetFullPath((Sexy *)param_1,extraout_x1);
      std::string::string((string *)&local_10,"Buffer");
      puVar7 = (undefined1 *)FUN_051d4490();
      std::string::~string((string *)&local_10);
      nop();
      std::string::~string(asStack_18);
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 1;
        memcpy(puVar7 + 1,__src,__n_00);
        GetFullPath((Sexy *)param_1,extraout_x1_00);
        std::string::string((string *)&local_10,"Buffer");
        GetFullPath((Sexy *)param_1,extraout_x1_01);
        std::string::~string(asStack_18);
        std::string::~string((string *)&local_10);
        nop();
        std::string::~string((string *)local_20);
        goto LAB_051d56bc;
      }
    }
    SVar3 = (SexyAppBase)0x1;
  }
LAB_051d56bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(SVar3);
}


/* Sexy::SexyAppBase::FileExists(std::string const&) */

void __thiscall Sexy::SexyAppBase::FileExists(SexyAppBase *this,string *param_1)

{
  (**(code **)(**(long **)(this + 0x28) + 0x110))(*(long **)(this + 0x28),param_1,0);
  return;
}


/* Sexy::SexyAppBase::EraseFile(std::string const&) */

void Sexy::SexyAppBase::EraseFile(string *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x28) + 0x140))(*(long **)(param_1 + 0x28));
  return;
}


/* Sexy::SexyAppBase::DoExit(int) */

void Sexy::SexyAppBase::DoExit(int param_1)

{
  (**(code **)(**(long **)((ulong)(uint)param_1 + 0x10) + 0x40))
            (*(long **)((ulong)(uint)param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::UpdateAudio() */

void __thiscall Sexy::SexyAppBase::UpdateAudio(SexyAppBase *this)

{
  if (*(InteractiveSoundManager **)(this + 0x648) != (InteractiveSoundManager *)0x0) {
    InteractiveSoundManager::Update(*(InteractiveSoundManager **)(this + 0x648));
    return;
  }
  return;
}


/* Sexy::SexyAppBase::StartLoadingThread() */

void __thiscall Sexy::SexyAppBase::StartLoadingThread(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0xb8))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::ReloadAllResources() */

void __thiscall Sexy::SexyAppBase::ReloadAllResources(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x1d8))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::CopyToClipboard(std::string const&) */

void Sexy::SexyAppBase::CopyToClipboard(string *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 200))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::GetClipboard() */

void Sexy::SexyAppBase::GetClipboard(void)

{
  long in_x0;
  
  (**(code **)(**(long **)(in_x0 + 0x10) + 0xd0))(*(long **)(in_x0 + 0x10));
  return;
}


/* Sexy::SexyAppBase::SetCursor(int) */

void Sexy::SexyAppBase::SetCursor(int param_1)

{
  (**(code **)(**(long **)((ulong)(uint)param_1 + 0x10) + 0xd8))
            (*(long **)((ulong)(uint)param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::GetCursor() */

void __thiscall Sexy::SexyAppBase::GetCursor(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0xe0))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::EnableCustomCursors(bool) */

void Sexy::SexyAppBase::EnableCustomCursors(bool param_1)

{
  (**(code **)(**(long **)((ulong)param_1 + 0x10) + 0xe8))(*(long **)((ulong)param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::CreateCrossfadeImage(Sexy::Image*, Sexy::TRect<int> const&, Sexy::Image*,
   Sexy::TRect<int> const&, double) */

DeviceImage * __thiscall
Sexy::SexyAppBase::CreateCrossfadeImage
          (SexyAppBase *this,Image *param_1,TRect *param_2,Image *param_3,TRect *param_4,
          double param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  LotteryResultProgressBar *this_00;
  LotteryResultProgressBar *this_01;
  DeviceImage *this_02;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  
  if (param_1 == (Image *)0x0) {
    this_00 = (LotteryResultProgressBar *)0x0;
  }
  else {
    this_00 = (LotteryResultProgressBar *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  if ((((((param_3 != (Image *)0x0) &&
         (this_01 = (LotteryResultProgressBar *)(**(code **)(*(long *)param_3 + 0x48))(param_3),
         this_01 != (LotteryResultProgressBar *)0x0)) &&
        (this_00 != (LotteryResultProgressBar *)0x0)) &&
       ((iVar1 = *(int *)param_2, -1 < iVar1 && (-1 < *(int *)(param_2 + 4))))) &&
      ((iVar2 = *(int *)(param_2 + 8),
       iVar9 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1),
       iVar1 + iVar2 <= iVar9 &&
       ((iVar1 = *(int *)(param_2 + 4), iVar2 = *(int *)(param_2 + 0xc),
        iVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1),
        iVar1 + iVar2 <= iVar9 && (iVar1 = *(int *)param_4, -1 < iVar1)))))) &&
     ((-1 < *(int *)(param_4 + 4) &&
      ((iVar2 = *(int *)(param_4 + 8),
       iVar9 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_3),
       iVar1 + iVar2 <= iVar9 &&
       (iVar1 = *(int *)(param_4 + 4), iVar2 = *(int *)(param_4 + 0xc),
       iVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_3),
       iVar1 + iVar2 <= iVar9)))))) {
    iVar1 = *(int *)(param_2 + 0xc);
    iVar2 = *(int *)(param_2 + 8);
    this_02 = ::operator_new(0x160);
    DeviceImage::DeviceImage(this_02,this);
    (**(code **)(*(long *)this_02 + 200))(this_02,iVar2,iVar1);
    lVar11 = (**(code **)(*(long *)this_02 + 0xd0))(this_02,0,0,0,0);
    lVar12 = (**(code **)(*(long *)this_00 + 0xd0))(this_00,0,0,0,0);
    lVar13 = (**(code **)(*(long *)this_01 + 0xd0))(this_01,0,0,0,0);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    lVar14 = (long)(int)(param_5 * 256.0);
    lVar15 = 0x100 - lVar14;
    if (0 < iVar1) {
      iVar17 = 0;
      do {
        iVar3 = *(int *)(param_2 + 4);
        iVar4 = *(int *)(param_4 + 4);
        lVar16 = 0;
        iVar5 = *(int *)param_2;
        iVar6 = *(int *)param_4;
        if (0 < iVar2) {
          do {
            uVar7 = *(uint *)(lVar12 + (long)(iVar5 + (iVar17 + iVar3) * iVar9) * 4 + lVar16 * 4);
            uVar8 = *(uint *)(lVar13 + (long)(iVar6 + (iVar17 + iVar4) * iVar10) * 4 + lVar16 * 4);
            *(uint *)(lVar11 + lVar16 * 4) =
                 (uint)(((ulong)uVar7 & 0xff00) * lVar15 + ((ulong)uVar8 & 0xff00) * lVar14 >> 8) &
                 0xff00 | (uint)((ulong)(byte)uVar7 * lVar15 + (ulong)(byte)uVar8 * lVar14 >> 8) &
                          0xff |
                 (uint)(((ulong)uVar7 & 0xff0000) * lVar15 + ((ulong)uVar8 & 0xff0000) * lVar14 >> 8
                       ) & 0xff0000 |
                 ((int)lVar15 * (uVar7 >> 0x18) + (int)(param_5 * 256.0) * (uVar8 >> 0x18)) *
                 0x10000 & 0xff000000;
            lVar16 = lVar16 + 1;
          } while ((int)lVar16 < iVar2);
        }
        iVar17 = iVar17 + 1;
        lVar11 = lVar11 + (long)iVar2 * 4;
      } while (iVar17 != iVar1);
    }
    (**(code **)(*(long *)this_02 + 0x98))(this_02);
    return this_02;
  }
  return (DeviceImage *)0x0;
}


/* Sexy::SexyAppBase::ColorizeImage(Sexy::Image*, Sexy::Color const&) */

SexyAppBase * __thiscall
Sexy::SexyAppBase::ColorizeImage(SexyAppBase *this,Image *param_1,Color *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  SexyAppBase *pSVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  
  if (param_1 == (Image *)0x0) {
    return this;
  }
  plVar8 = (long *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (plVar8 == (long *)0x0) {
    return (SexyAppBase *)0x0;
  }
  lVar14 = plVar8[0x10];
  if (lVar14 == 0) {
    lVar14 = (**(code **)(*plVar8 + 0xd0))(plVar8,0,0,0,0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
    iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
    iVar10 = *(int *)(param_2 + 0xc);
    iVar6 = iVar6 * iVar7;
    if (((iVar10 < 0x100) && (iVar7 = *(int *)param_2, iVar7 < 0x100)) &&
       (iVar12 = *(int *)(param_2 + 4), iVar12 < 0x100)) {
LAB_051d5e40:
      uVar1 = *(uint *)(param_2 + 8);
      if (0xff < (int)uVar1) goto LAB_051d5f00;
      if (0 < iVar6) {
        lVar11 = 0;
        while( true ) {
          uVar2 = *(uint *)(lVar14 + lVar11 * 4);
          *(uint *)(lVar14 + lVar11 * 4) =
               (uint)(((ulong)uVar2 & 0xff0000) * (long)iVar7 >> 8) & 0xff0000 |
               (uVar2 >> 8 & 0xff0000) * *(int *)(param_2 + 0xc) & 0xff000000 |
               (uint)(((ulong)uVar2 & 0xff00) * (long)iVar12 >> 8) & 0xff00 |
               (uint)((ulong)(byte)uVar2 * (ulong)uVar1 >> 8) & 0xff;
          lVar11 = lVar11 + 1;
          if (iVar6 <= (int)lVar11) break;
          iVar7 = *(int *)param_2;
          iVar12 = *(int *)(param_2 + 4);
          uVar1 = *(uint *)(param_2 + 8);
        }
      }
    }
    else {
LAB_051d5f00:
      if (0 < iVar6) {
        iVar7 = *(int *)param_2;
        iVar12 = *(int *)(param_2 + 4);
        goto LAB_051d5f10;
      }
    }
    pSVar9 = (SexyAppBase *)(**(code **)(*plVar8 + 0x98))(plVar8);
  }
  else {
    iVar10 = *(int *)(param_2 + 0xc);
    iVar7 = *(int *)param_2;
    if (iVar10 < 0x100) {
      if (iVar7 < 0x100) {
        iVar12 = *(int *)(param_2 + 4);
        iVar6 = 0x100;
        if (iVar12 < 0x100) goto LAB_051d5e40;
      }
      else {
        iVar6 = 0x100;
        iVar12 = *(int *)(param_2 + 4);
      }
    }
    else {
      iVar12 = *(int *)(param_2 + 4);
      iVar6 = 0x100;
    }
LAB_051d5f10:
    lVar11 = 0;
    while( true ) {
      uVar13 = *(uint *)(lVar14 + lVar11 * 4);
      uVar3 = ((uVar13 >> 0x18) * iVar10) / 0xff;
      uVar4 = ((uVar13 >> 0x10 & 0xff) * iVar7) / 0xff;
      uVar1 = uVar3 << 0x18;
      uVar2 = uVar4 << 0x10;
      uVar5 = ((uVar13 >> 8 & 0xff) * iVar12) / 0xff;
      if (0xff < uVar3) {
        uVar1 = 0xff000000;
      }
      uVar3 = uVar5 << 8;
      uVar13 = ((uVar13 & 0xff) * *(int *)(param_2 + 8)) / 0xff;
      if (0xff < uVar4) {
        uVar2 = 0xff0000;
      }
      if (0xff < uVar5) {
        uVar3 = 0xff00;
      }
      if (0xff < uVar13) {
        uVar13 = 0xff;
      }
      *(uint *)(lVar14 + lVar11 * 4) = uVar2 | uVar1 | uVar3 | uVar13;
      lVar11 = lVar11 + 1;
      if (iVar6 <= (int)lVar11) break;
      iVar10 = *(int *)(param_2 + 0xc);
      iVar7 = *(int *)param_2;
      iVar12 = *(int *)(param_2 + 4);
    }
    pSVar9 = (SexyAppBase *)(**(code **)(*plVar8 + 0x98))(plVar8);
  }
  return pSVar9;
}


/* Sexy::SexyAppBase::CreateColorizedImage(Sexy::Image*, Sexy::Color const&) */

DeviceImage * __thiscall
Sexy::SexyAppBase::CreateColorizedImage(SexyAppBase *this,Image *param_1,Color *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  DeviceImage *this_00;
  void *pvVar11;
  void *__dest;
  long lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  code *pcVar16;
  long lVar17;
  
  if ((param_1 == (Image *)0x0) ||
     (plVar10 = (long *)(**(code **)(*(long *)param_1 + 0x48))(param_1), plVar10 == (long *)0x0)) {
    return (DeviceImage *)0x0;
  }
  this_00 = ::operator_new(0x160);
  DeviceImage::DeviceImage(this_00,this);
  pcVar16 = *(code **)(*(long *)this_00 + 200);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
  uVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
  (*pcVar16)(this_00,uVar6,uVar7);
  lVar17 = plVar10[0x10];
  if (lVar17 == 0) {
    lVar17 = (**(code **)(*plVar10 + 0xd0))(plVar10,0,0,0,0);
    pvVar11 = (void *)(**(code **)(*(long *)this_00 + 0xd0))(this_00,0,0,0,0);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
    iVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
    iVar13 = *(int *)(param_2 + 0xc);
    iVar8 = iVar8 * iVar9;
    if (((iVar13 < 0x100) && (iVar9 = *(int *)param_2, iVar9 < 0x100)) &&
       (iVar14 = *(int *)(param_2 + 4), iVar14 < 0x100)) {
LAB_051d62b4:
      uVar1 = *(uint *)(param_2 + 8);
      if ((int)uVar1 < 0x100) {
        if (0 < iVar8) {
          lVar12 = 0;
          while( true ) {
            uVar2 = *(uint *)(lVar17 + lVar12 * 4);
            *(uint *)((long)pvVar11 + lVar12 * 4) =
                 (uint)(((ulong)uVar2 & 0xff0000) * (long)iVar9 >> 8) & 0xff0000 |
                 (uVar2 >> 8 & 0xff0000) * *(int *)(param_2 + 0xc) & 0xff000000 |
                 (uint)(((ulong)uVar2 & 0xff00) * (long)iVar14 >> 8) & 0xff00 |
                 (uint)((ulong)(byte)uVar2 * (ulong)uVar1 >> 8) & 0xff;
            lVar12 = lVar12 + 1;
            if (iVar8 <= (int)lVar12) break;
            iVar9 = *(int *)param_2;
            iVar14 = *(int *)(param_2 + 4);
            uVar1 = *(uint *)(param_2 + 8);
          }
        }
        goto LAB_051d6274;
      }
    }
    if (iVar8 < 1) goto LAB_051d6274;
    iVar9 = *(int *)param_2;
    iVar14 = *(int *)(param_2 + 4);
  }
  else {
    pvVar11 = operator_new__(0x400);
    iVar13 = *(int *)(param_1 + 0x3c);
    *(void **)(this_00 + 0x80) = pvVar11;
    __dest = operator_new__((long)(*(int *)(this_00 + 0x38) * iVar13));
    iVar13 = *(int *)(param_1 + 0x3c);
    *(void **)(this_00 + 0x88) = __dest;
    memcpy(__dest,(void *)plVar10[0x11],(long)(*(int *)(this_00 + 0x38) * iVar13));
    iVar13 = *(int *)(param_2 + 0xc);
    if (iVar13 < 0x100) {
      iVar9 = *(int *)param_2;
      if (iVar9 < 0x100) {
        iVar14 = *(int *)(param_2 + 4);
        iVar8 = 0x100;
        if (iVar14 < 0x100) goto LAB_051d62b4;
      }
      else {
        iVar8 = 0x100;
        iVar14 = *(int *)(param_2 + 4);
      }
    }
    else {
      iVar8 = 0x100;
      iVar9 = *(int *)param_2;
      iVar14 = *(int *)(param_2 + 4);
    }
  }
  lVar12 = 0;
  while( true ) {
    uVar15 = *(uint *)(lVar17 + lVar12 * 4);
    uVar3 = ((uVar15 >> 0x18) * iVar13) / 0xff;
    uVar4 = ((uVar15 >> 0x10 & 0xff) * iVar9) / 0xff;
    uVar1 = uVar3 << 0x18;
    uVar2 = uVar4 << 0x10;
    uVar5 = ((uVar15 >> 8 & 0xff) * iVar14) / 0xff;
    if (0xff < uVar3) {
      uVar1 = 0xff000000;
    }
    uVar3 = uVar5 << 8;
    uVar15 = ((uVar15 & 0xff) * *(int *)(param_2 + 8)) / 0xff;
    if (0xff < uVar4) {
      uVar2 = 0xff0000;
    }
    if (0xff < uVar5) {
      uVar3 = 0xff00;
    }
    if (0xff < uVar15) {
      uVar15 = 0xff;
    }
    *(uint *)((long)pvVar11 + lVar12 * 4) = uVar2 | uVar1 | uVar3 | uVar15;
    lVar12 = lVar12 + 1;
    if (iVar8 <= (int)lVar12) break;
    iVar13 = *(int *)(param_2 + 0xc);
    iVar9 = *(int *)param_2;
    iVar14 = *(int *)(param_2 + 4);
  }
LAB_051d6274:
  (**(code **)(*(long *)this_00 + 0x98))(this_00);
  return this_00;
}


/* Sexy::SexyAppBase::MirrorImage(Sexy::Image*) */

void __thiscall Sexy::SexyAppBase::MirrorImage(SexyAppBase *this,Image *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  code *pcVar8;
  long *plVar9;
  undefined1 (*pauVar10) [16];
  undefined4 *puVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  int iVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  long lVar20;
  int iVar21;
  undefined1 (*pauVar22) [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  if (param_1 == (Image *)0x0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1000,0x51d65d8);
    (*pcVar8)();
  }
  plVar9 = (long *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
  pauVar10 = (undefined1 (*) [16])(**(code **)(*plVar9 + 0xd0))(plVar9,0,0,0,0);
  iVar17 = *(int *)((long)plVar9 + 0x3c);
  iVar3 = (int)plVar9[7];
  if (0 < iVar17) {
    uVar2 = iVar3 >> 1;
    lVar20 = (long)iVar3 * 4;
    lVar14 = 0;
    uVar1 = (uVar2 - 4 >> 2) + 1;
    uVar5 = uVar1 * 4;
    iVar21 = 0;
    pauVar16 = (undefined1 (*) [16])(pauVar10[-1] + lVar20);
    pauVar15 = pauVar10;
    do {
      while (puVar11 = (undefined4 *)(pauVar10[-1] + lVar20 + lVar14 + 0xc), 0 < (int)uVar2) {
        if ((lVar14 < (0x10 - (long)pauVar10) + (long)pauVar16 &&
             (long)(lVar14 + ((long)iVar3 - (ulong)uVar2) * 4) < (long)(lVar14 + (ulong)uVar2 * 4))
           || (uVar2 < 6)) {
          pauVar13 = pauVar15;
          do {
            uVar4 = *(undefined4 *)*pauVar13;
            puVar7 = *pauVar13;
            *(undefined4 *)*pauVar13 = *puVar11;
            *puVar11 = uVar4;
            puVar11 = puVar11 + -1;
            pauVar13 = (undefined1 (*) [16])(puVar7 + 4);
          } while ((undefined1 (*) [16])(puVar7 + 4) !=
                   (undefined1 (*) [16])(*pauVar10 + (ulong)(uVar2 - 1) * 4 + 4 + lVar14));
          iVar17 = *(int *)((long)plVar9 + 0x3c);
        }
        else {
          if (uVar2 - 1 < 3) {
            uVar4 = *(undefined4 *)*pauVar15;
            *(undefined4 *)*pauVar15 = *puVar11;
            *puVar11 = uVar4;
            pauVar13 = pauVar15;
            uVar12 = 0;
            if (1 < (int)uVar2) {
LAB_051d64bc:
              uVar4 = *(undefined4 *)(*pauVar13 + 4);
              *(undefined4 *)(*pauVar13 + 4) = puVar11[-1];
              puVar11[-1] = uVar4;
              if ((int)(uVar12 + 2) < (int)uVar2) {
                uVar4 = *(undefined4 *)(*pauVar13 + 8);
                *(undefined4 *)(*pauVar13 + 8) = puVar11[-2];
                puVar11[-2] = uVar4;
                iVar17 = *(int *)((long)plVar9 + 0x3c);
                break;
              }
            }
          }
          else {
            uVar12 = 0;
            pauVar13 = pauVar16;
            pauVar18 = pauVar16;
            pauVar19 = pauVar15;
            pauVar22 = pauVar15;
            do {
              auVar6 = *pauVar13;
              uVar12 = uVar12 + 1;
              pauVar13 = pauVar13 + -1;
              auVar23._8_8_ = 0x302010007060504;
              auVar23._0_8_ = 0xb0a09080f0e0d0c;
              auVar24 = a64_TBL(ZEXT816(0),auVar6,auVar23);
              auVar6._8_8_ = 0x302010007060504;
              auVar6._0_8_ = 0xb0a09080f0e0d0c;
              auVar23 = a64_TBL(ZEXT816(0),*pauVar19,auVar6);
              *(long *)(*pauVar22 + 8) = auVar24._8_8_;
              *(long *)*pauVar22 = auVar24._0_8_;
              *(long *)(*pauVar18 + 8) = auVar23._8_8_;
              *(long *)*pauVar18 = auVar23._0_8_;
              pauVar18 = pauVar18 + -1;
              pauVar19 = pauVar19 + 1;
              pauVar22 = pauVar22 + 1;
            } while (uVar12 < uVar1);
            pauVar13 = (undefined1 (*) [16])(*pauVar15 + (ulong)uVar5 * 4);
            puVar11 = puVar11 + -(ulong)uVar5;
            if (uVar5 != uVar2) {
              uVar4 = *(undefined4 *)*pauVar13;
              *(undefined4 *)*pauVar13 = *puVar11;
              *puVar11 = uVar4;
              uVar12 = uVar5;
              if ((int)(uVar5 + 1) < (int)uVar2) goto LAB_051d64bc;
            }
          }
          iVar17 = *(int *)((long)plVar9 + 0x3c);
        }
        iVar21 = iVar21 + 1;
        pauVar15 = (undefined1 (*) [16])(*pauVar15 + lVar20);
        lVar14 = lVar14 + lVar20;
        pauVar16 = (undefined1 (*) [16])(*pauVar16 + lVar20);
        if (iVar17 <= iVar21) goto LAB_051d6588;
      }
      iVar21 = iVar21 + 1;
      pauVar15 = (undefined1 (*) [16])(*pauVar15 + lVar20);
      lVar14 = lVar14 + lVar20;
      pauVar16 = (undefined1 (*) [16])(*pauVar16 + lVar20);
    } while (iVar21 < iVar17);
  }
LAB_051d6588:
  (**(code **)(*plVar9 + 0x98))(plVar9);
  return;
}


/* Sexy::SexyAppBase::FlipImage(Sexy::Image*) */

void __thiscall Sexy::SexyAppBase::FlipImage(SexyAppBase *this,Image *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  ulong uVar12;
  
  if (param_1 != (Image *)0x0) {
    plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
    puVar8 = (undefined4 *)(**(code **)(*plVar7 + 0xd0))(plVar7,0,0,0,0);
    uVar3 = *(uint *)(plVar7 + 7);
    iVar4 = *(int *)((long)plVar7 + 0x3c);
    if (0 < (int)uVar3) {
      uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
      iVar2 = iVar4 >> 1;
      puVar1 = puVar8 + (ulong)(uVar3 - 1) + 1;
      do {
        puVar9 = puVar8 + (int)((iVar4 + -1) * uVar3);
        iVar11 = 0;
        puVar10 = puVar8;
        if (0 < iVar2) {
          do {
            iVar11 = iVar11 + 1;
            uVar5 = *puVar10;
            *puVar10 = *puVar9;
            puVar10 = (undefined4 *)((long)puVar10 + uVar12);
            *puVar9 = uVar5;
            puVar9 = (undefined4 *)((long)puVar9 - uVar12);
          } while (iVar11 != iVar2);
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar1);
    }
    (**(code **)(*plVar7 + 0x98))(plVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1000,0x51d66cc);
  (*pcVar6)();
}


/* Sexy::SexyAppBase::HSLToRGB(int, int, int) */

uint __thiscall Sexy::SexyAppBase::HSLToRGB(SexyAppBase *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (param_3 < 0x80) {
    iVar3 = ((param_2 + 0xff) * param_3) / 0xff;
  }
  else {
    iVar3 = (param_3 + param_2) - (param_3 * param_2) / 0xff;
  }
  dVar9 = (double)iVar3;
  iVar1 = param_1 * 6;
  iVar3 = iVar1 + 0xff;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  uVar5 = (uint)((double)(param_3 << 1) - dVar9);
  dVar10 = (double)(int)uVar5;
  dVar8 = (double)((param_1 - ((iVar3 >> 8) << 8) / 6) * 6) * 0.00392156862745098;
  uVar4 = (uint)(dVar10 + dVar8 * (dVar9 - dVar10));
  uVar2 = (uint)(dVar9 + dVar8 * (dVar10 - dVar9));
  if (0xff < (int)uVar4) {
    uVar4 = 0xff;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  uVar7 = (int)dVar9;
  uVar6 = uVar5;
  switch(iVar3 >> 8) {
  case 0:
    return uVar5 | 0xff000000 | (int)dVar9 << 0x10 | uVar4 << 8;
  case 1:
    return uVar5 | 0xff000000 | uVar2 << 0x10 | (int)dVar9 << 8;
  case 2:
    return uVar4 | 0xff000000 | uVar5 << 0x10 | (int)dVar9 << 8;
  case 3:
    uVar6 = (uint)dVar9;
    uVar7 = uVar5;
    uVar4 = uVar2;
    break;
  case 4:
    return (int)dVar9 | 0xff000000U | uVar4 << 0x10 | uVar5 << 8;
  case 5:
    return uVar2 | 0xff000000 | (int)dVar9 << 0x10 | uVar5 << 8;
  }
  return uVar6 | 0xff000000 | uVar7 << 0x10 | uVar4 << 8;
}


/* Sexy::SexyAppBase::HSLToRGB(unsigned long const*, unsigned long*, int) */

void __thiscall
Sexy::SexyAppBase::HSLToRGB(SexyAppBase *this,ulong *param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (0 < param_3) {
    lVar3 = 0;
    do {
      uVar2 = param_1[lVar3];
      uVar1 = HSLToRGB(this,(uint)uVar2 & 0xff,(uint)(uVar2 >> 8) & 0xff,
                       (uint)(uVar2 >> 0x10) & 0xff);
      param_2[lVar3] = uVar2 & 0xff000000 | uVar1 & 0xffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 != (ulong)(param_3 - 1) + 1);
  }
  return;
}


/* Sexy::SexyAppBase::PrecacheAdditive(Sexy::MemoryImage*) */

void __thiscall Sexy::SexyAppBase::PrecacheAdditive(SexyAppBase *this,MemoryImage *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)param_1 + 0x68);
  uVar1 = (**(code **)(**(long **)(this + 0x20) + 0xa0))(*(long **)(this + 0x20));
  (*pcVar2)(param_1,uVar1);
  return;
}


/* Sexy::SexyAppBase::PrecacheAlpha(Sexy::MemoryImage*) */

void __thiscall Sexy::SexyAppBase::PrecacheAlpha(SexyAppBase *this,MemoryImage *param_1)

{
  (**(code **)(*(long *)param_1 + 0x60))(param_1);
  return;
}


/* Sexy::SexyAppBase::PrecacheNative(Sexy::MemoryImage*) */

void __thiscall Sexy::SexyAppBase::PrecacheNative(SexyAppBase *this,MemoryImage *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)param_1 + 0x58);
  uVar1 = (**(code **)(**(long **)(this + 0x20) + 0xa0))(*(long **)(this + 0x20));
  (*pcVar2)(param_1,uVar1);
  return;
}


/* Sexy::SexyAppBase::Remove3DData(Sexy::MemoryImage*) */

void Sexy::SexyAppBase::Remove3DData(MemoryImage *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x48))(*(long **)(param_1 + 0x10));
  return;
}


/* Sexy::SexyAppBase::Is3DAccelerated() */

void __thiscall Sexy::SexyAppBase::Is3DAccelerated(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x130))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::SwitchScreenMode(bool) */

void __thiscall Sexy::SexyAppBase::SwitchScreenMode(SexyAppBase *this,bool param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)this + 0x248);
  uVar1 = Is3DAccelerated(this);
  (*pcVar2)(this,param_1,uVar1,0);
  return;
}


/* Sexy::SexyAppBase::SwitchScreenMode() */

void __thiscall Sexy::SexyAppBase::SwitchScreenMode(SexyAppBase *this)

{
  SexyAppBase SVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  SVar1 = this[0x3af];
  pcVar3 = *(code **)(*(long *)this + 0x248);
  uVar2 = Is3DAccelerated(this);
  (*pcVar3)(this,SVar1,uVar2,1);
  return;
}


/* Sexy::SexyAppBase::Is3DAccelerationSupported() */

void __thiscall Sexy::SexyAppBase::Is3DAccelerationSupported(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x138))(*(long **)(this + 0x10));
  return;
}


/* Sexy::SexyAppBase::Is3DAccelerationRecommended() */

void __thiscall Sexy::SexyAppBase::Is3DAccelerationRecommended(SexyAppBase *this)

{
  (**(code **)(**(long **)(this + 0x10) + 0x140))(*(long **)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::UpdateFrames() */

void __thiscall Sexy::SexyAppBase::UpdateFrames(SexyAppBase *this)

{
  char cVar1;
  AsyncTaskManager *this_00;
  NetworkServiceManager *this_01;
  double dVar2;
  PerfTimer aPStack_20 [16];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x608) = *(int *)(this + 0x608) + 1;
  local_8 = ___stack_chk_guard;
  if (this[0x663] == (SexyAppBase)0x0) {
    PerfTimer::PerfTimer(aPStack_20);
    if ((this[0x688] != (SexyAppBase)0x0) && (*(uint *)(this + 0x68c) < 2)) {
      FUN_051d49a8(aPStack_20,auStack_10);
    }
    cVar1 = WidgetManager::UpdateFrame(*(WidgetManager **)(this + 0x360));
    if (cVar1 != '\0') {
      *(int *)(this + 0x67c) = *(int *)(this + 0x67c) + 1;
    }
    if ((this[0x688] != (SexyAppBase)0x0) && (*(uint *)(this + 0x68c) < 2)) {
      *(int *)(this + 0x698) = *(int *)(this + 0x698) + 1;
      dVar2 = (double)PerfTimer::GetDuration(aPStack_20);
      *(double *)(this + 0x690) = *(double *)(this + 0x690) + dVar2;
    }
  }
  if (*(ResStreamsManager **)(this + 0x908) != (ResStreamsManager *)0x0) {
    ResStreamsManager::Update(*(ResStreamsManager **)(this + 0x908));
  }
  UpdateAudio(this);
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 0x18))();
  }
  if (*(long **)(this + 0x918) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x918) + 0x18))();
  }
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 0x10))();
  }
  if (*(LeaderboardManager **)(this + 0x920) != (LeaderboardManager *)0x0) {
    LeaderboardManager::Update(*(LeaderboardManager **)(this + 0x920));
  }
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 0x18))();
  }
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 0x18))();
  }
  this_00 = (AsyncTaskManager *)AsyncTaskManager::DefaultAsyncTaskManager();
  if (this_00 != (AsyncTaskManager *)0x0) {
    AsyncTaskManager::Update(this_00);
  }
  this_01 = (NetworkServiceManager *)NetworkServiceManager::DefaultNetworkServiceManager();
  NetworkServiceManager::Update(this_01);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyAppBase::GetSharedRenderTargetPool() */

PIInterpolator * __thiscall Sexy::SexyAppBase::GetSharedRenderTargetPool(SexyAppBase *this)

{
  PIInterpolator *this_00;
  
  if (*(PIInterpolator **)(this + 0x8b0) != (PIInterpolator *)0x0) {
    return *(PIInterpolator **)(this + 0x8b0);
  }
  this_00 = ::operator_new(0x18);
  PIInterpolator::PIInterpolator(this_00);
  *(PIInterpolator **)(this + 0x8b0) = this_00;
  return this_00;
}


/* Sexy::SexyAppBase::GetManualReflection() */

CRefSymbolDb * Sexy::SexyAppBase::GetManualReflection(void)

{
  char cVar1;
  CRefSymbolDb *pCVar2;
  
  if (DAT_06bbd7e0 == (CRefSymbolDb *)0x0) {
    pCVar2 = ::operator_new(0x108);
    Reflection::CRefSymbolDb::CRefSymbolDb(pCVar2);
    DAT_06bbd7e0 = pCVar2;
    Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar2);
  }
  pCVar2 = DAT_06bbd7e0;
  cVar1 = FUN_0517ecec(*(undefined8 *)(DAT_06bbd7e0 + 0xf0));
  if (cVar1 == '\0') {
    pCVar2 = (CRefSymbolDb *)0x0;
  }
  return pCVar2;
}


/* Sexy::SexyAppBase::GetDeviceName() */

void Sexy::SexyAppBase::GetDeviceName(void)

{
  long in_x0;
  
  (**(code **)(**(long **)(in_x0 + 0x10) + 0x160))(*(long **)(in_x0 + 0x10));
  return;
}


/* Sexy::SexyAppBase::IsMainThread() const */

bool __thiscall Sexy::SexyAppBase::IsMainThread(SexyAppBase *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x910);
  lVar1 = EA::Thread::GetThreadId();
  return lVar2 == lVar1;
}


/* Sexy::SexyAppBase::SetMainThreadToCurrent() */

void __thiscall Sexy::SexyAppBase::SetMainThreadToCurrent(SexyAppBase *this)

{
  undefined8 uVar1;
  
  uVar1 = EA::Thread::GetThreadId();
  *(undefined8 *)(this + 0x910) = uVar1;
  return;
}


/* Sexy::SexyAppBase::Init() */

void __thiscall Sexy::SexyAppBase::Init(SexyAppBase *this)

{
  uint uVar1;
  
  SetMainThreadToCurrent(this);
  OutputDebugStrF((wchar_t *)"SexyAppBase Init");
  (**(code **)(**(long **)(this + 0x18) + 0x18))(*(long **)(this + 0x18));
  (**(code **)(**(long **)(this + 0x10) + 0x20))(*(long **)(this + 0x10));
  (**(code **)(**(long **)(this + 0x38) + 0x10))(*(long **)(this + 0x38));
  (**(code **)(**(long **)(this + 0x40) + 0x10))(*(long **)(this + 0x40));
  (**(code **)(**(long **)(this + 0x50) + 0x10))(*(long **)(this + 0x50));
  (**(code **)(**(long **)(this + 0x58) + 0x10))(*(long **)(this + 0x58));
  (**(code **)(**(long **)(this + 0x60) + 0x10))(*(long **)(this + 0x60));
  uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x188))(*(long **)(this + 0x10));
  *(uint *)(this + 0x934) = uVar1;
  OutputDebugStrF((wchar_t *)"fullScreen SexyAppBase::CalcFullScreenOffset offset = %d",(ulong)uVar1
                 );
  return;
}


/* Sexy::SexyAppBase::SetNativeScreenSize(int, int) */

void __thiscall Sexy::SexyAppBase::SetNativeScreenSize(SexyAppBase *this,int param_1,int param_2)

{
  *(int *)(this + 0x930) = param_2;
  *(int *)(this + 0x92c) = param_1;
  return;
}


/* Sexy::SexyAppBase::GetNativeScreenSize() */

Point * Sexy::SexyAppBase::GetNativeScreenSize(void)

{
  long in_x0;
  Point *in_x8;
  
  Point::Point(in_x8,*(int *)(in_x0 + 0x92c),*(int *)(in_x0 + 0x930));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::OnGestureLongPress(Sexy::Point) */

void __thiscall Sexy::SexyAppBase::OnGestureLongPress(SexyAppBase *this,TPoint *param_2)

{
  WidgetManager *pWVar1;
  Point aPStack_10 [8];
  long local_8;
  
  pWVar1 = *(WidgetManager **)(this + 0x360);
  local_8 = ___stack_chk_guard;
  Point::Point(aPStack_10,param_2);
  WidgetManager::OnGestureLongPress(pWVar1,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::OnGestureFlick(Sexy::GestureFlickDirection, Sexy::Point) */

void __thiscall
Sexy::SexyAppBase::OnGestureFlick(SexyAppBase *this,undefined4 param_2,TPoint *param_3)

{
  WidgetManager *pWVar1;
  Point aPStack_10 [8];
  long local_8;
  
  pWVar1 = *(WidgetManager **)(this + 0x360);
  local_8 = ___stack_chk_guard;
  Point::Point(aPStack_10,param_3);
  WidgetManager::OnGestureFlick(pWVar1,param_2,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::OnGesturePinch(Sexy::Point, int, float) */

void __thiscall
Sexy::SexyAppBase::OnGesturePinch
          (WidgetManager *param_1,SexyAppBase *this,TPoint *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  Point aPStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined8 *)(this + 0x360);
  local_8 = ___stack_chk_guard;
  Point::Point(aPStack_10,param_3);
  WidgetManager::OnGesturePinch(param_1,uVar1,aPStack_10,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::SexyAppBase::GetDialogCount() */

void __thiscall Sexy::SexyAppBase::GetDialogCount(SexyAppBase *this)

{
  std::map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>::
  size((map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>> *)
       (this + 0x368));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::RotateImageHue(Sexy::MemoryImage*, int) */

void __thiscall
Sexy::SexyAppBase::RotateImageHue(SexyAppBase *this,MemoryImage *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  uint local_14;
  uint local_10;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 < 0) {
    param_2 = param_2 + 0x100 + (~param_2 & 0xffffff00U);
  }
  iVar3 = *(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x3c);
  lVar6 = (**(code **)(*(long *)param_1 + 0xd0))(param_1,0,0,0,0);
  if (iVar3 < 1) {
LAB_051d7340:
    (**(code **)(*(long *)param_1 + 0x98))();
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar15 = 0;
LAB_051d7244:
  do {
    uVar2 = *(uint *)(lVar6 + lVar15 * 4);
    uVar5 = uVar2 >> 0x10 & 0xff;
    uVar14 = uVar2 >> 8 & 0xff;
    uVar4 = uVar2 & 0xff;
    local_14 = uVar5;
    local_10 = uVar14;
    local_c = uVar4;
    piVar7 = eastl::max_alt<int>((int *)&local_10,(int *)&local_c);
    puVar8 = (uint *)eastl::max_alt<int>((int *)&local_14,piVar7);
    uVar10 = *puVar8;
    piVar7 = eastl::min_alt<int>((int *)&local_10,(int *)&local_c);
    puVar8 = (uint *)eastl::min_alt<int>((int *)&local_14,piVar7);
    uVar11 = *puVar8;
    iVar12 = uVar11 + uVar10;
    iVar9 = uVar10 - uVar11;
    iVar1 = iVar12 / 2;
    if (iVar9 == 0) {
      iVar9 = param_2 + -0x100;
      if (param_2 < 0x100) {
        iVar9 = param_2;
      }
      iVar13 = 0;
      iVar12 = 0;
      if (iVar1 < 0x80) goto LAB_051d7160;
LAB_051d72d0:
      iVar12 = (iVar1 + iVar12) - (iVar1 * iVar12) / 0xff;
    }
    else {
      if (0x80 < iVar1) {
        iVar12 = (0x200 - uVar10) - uVar11;
      }
      iVar13 = 0;
      if (iVar12 != 0) {
        iVar13 = (iVar9 * 0x100) / iVar12;
      }
      if (uVar5 == uVar10) {
        if (uVar14 == uVar11) {
          iVar12 = 0;
          if (iVar9 != 0) {
            iVar12 = (int)((uVar5 - uVar4) * 0x100) / iVar9;
          }
          iVar12 = iVar12 + 0x500;
        }
        else {
          iVar12 = 0;
          if (iVar9 != 0) {
            iVar12 = (int)((uVar5 - uVar14) * 0x100) / iVar9;
          }
          iVar12 = 0x100 - iVar12;
        }
      }
      else if (uVar14 == uVar10) {
        if (uVar4 == uVar11) {
          iVar12 = 0;
          if (iVar9 != 0) {
            iVar12 = (int)((uVar14 - uVar5) * 0x100) / iVar9;
          }
          iVar12 = iVar12 + 0x100;
        }
        else {
          iVar12 = 0;
          if (iVar9 != 0) {
            iVar12 = (int)((uVar14 - uVar4) * 0x100) / iVar9;
          }
          iVar12 = 0x300 - iVar12;
        }
      }
      else if (uVar5 == uVar11) {
        iVar12 = 0;
        if (iVar9 != 0) {
          iVar12 = (int)((uVar10 - uVar14) * 0x100) / iVar9;
        }
        iVar12 = iVar12 + 0x300;
      }
      else {
        iVar12 = 0;
        if (iVar9 != 0) {
          iVar12 = (int)((uVar10 - uVar5) * 0x100) / iVar9;
        }
        iVar12 = 0x500 - iVar12;
      }
      iVar12 = iVar12 / 6 + param_2;
      iVar9 = iVar12 + -0x100;
      if (iVar12 < 0x100) {
        iVar9 = iVar12;
      }
      iVar12 = iVar13;
      if (0x7f < iVar1) goto LAB_051d72d0;
LAB_051d7160:
      iVar12 = ((iVar13 + 0xff) * iVar1) / 0xff;
    }
    dVar17 = (double)iVar12;
    iVar13 = iVar9 * 6;
    iVar12 = iVar13 + 0xff;
    if (-1 < iVar13) {
      iVar12 = iVar13;
    }
    uVar11 = (uint)((double)(iVar1 << 1) - dVar17);
    dVar18 = (double)(int)uVar11;
    dVar16 = (double)((iVar9 - ((iVar12 >> 8) << 8) / 6) * 6) * 0.00392156862745098;
    uVar4 = (uint)(dVar18 + dVar16 * (dVar17 - dVar18));
    uVar10 = (uint)(dVar17 + dVar16 * (dVar18 - dVar17));
    if (0xff < (int)uVar4) {
      uVar4 = 0xff;
    }
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    uVar5 = uVar11;
    uVar14 = uVar11;
    switch(iVar12 >> 8) {
    default:
      uVar5 = (int)dVar17;
      uVar11 = uVar4;
      break;
    case 1:
      uVar11 = (uint)dVar17;
      uVar5 = uVar10;
      break;
    case 2:
      uVar11 = (uint)dVar17;
      uVar14 = uVar4;
      break;
    case 3:
      uVar14 = (int)dVar17;
      uVar11 = uVar10;
      break;
    case 4:
      goto switchD_051d7310_caseD_4;
    case 5:
      uVar5 = (int)dVar17;
      uVar14 = uVar10;
    }
    *(uint *)(lVar6 + lVar15 * 4) = uVar14 | uVar2 & 0xff000000 | uVar5 << 0x10 | uVar11 << 8;
    lVar15 = lVar15 + 1;
  } while ((int)lVar15 < iVar3);
  goto LAB_051d7340;
switchD_051d7310_caseD_4:
  *(uint *)(lVar6 + lVar15 * 4) = (int)dVar17 | uVar2 & 0xff000000 | uVar4 << 0x10 | uVar11 << 8;
  lVar15 = lVar15 + 1;
  if (iVar3 <= (int)lVar15) goto LAB_051d7340;
  goto LAB_051d7244;
}


/* Sexy::SexyAppBase::RGBToHSL(int, int, int) */

uint __thiscall Sexy::SexyAppBase::RGBToHSL(SexyAppBase *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = param_3;
  local_8 = param_2;
  local_4 = param_1;
  piVar6 = eastl::max_alt<int>(&local_8,&local_c);
  piVar6 = eastl::max_alt<int>(&local_4,piVar6);
  iVar2 = *piVar6;
  piVar6 = eastl::min_alt<int>(&local_8,&local_c);
  piVar6 = eastl::min_alt<int>(&local_4,piVar6);
  iVar3 = *piVar6;
  iVar7 = iVar3 + iVar2;
  iVar5 = iVar2 - iVar3;
  iVar1 = iVar7 / 2;
  if (iVar5 == 0) {
    return iVar1 << 0x10 | 0xff000000;
  }
  if (iVar1 < 0x81) {
    iVar4 = 0;
    if (iVar7 != 0) {
      iVar4 = (iVar5 * 0x100) / iVar7;
    }
  }
  else {
    iVar7 = (0x200 - iVar2) - iVar3;
    iVar4 = 0;
    if (iVar7 != 0) {
      iVar4 = (iVar5 * 0x100) / iVar7;
    }
  }
  if (local_4 == iVar2) {
    if (local_8 == iVar3) {
      iVar7 = 0;
      if (iVar5 != 0) {
        iVar7 = ((iVar2 - local_c) * 0x100) / iVar5;
      }
      iVar7 = iVar7 + 0x500;
    }
    else {
      iVar7 = 0;
      if (iVar5 != 0) {
        iVar7 = ((iVar2 - local_8) * 0x100) / iVar5;
      }
      iVar7 = 0x100 - iVar7;
    }
  }
  else if (local_8 == iVar2) {
    if (local_c == iVar3) {
      iVar7 = 0;
      if (iVar5 != 0) {
        iVar7 = ((iVar2 - local_4) * 0x100) / iVar5;
      }
      iVar7 = iVar7 + 0x100;
    }
    else {
      iVar7 = 0;
      if (iVar5 != 0) {
        iVar7 = ((iVar2 - local_c) * 0x100) / iVar5;
      }
      iVar7 = 0x300 - iVar7;
    }
  }
  else if (iVar3 == local_4) {
    iVar7 = 0;
    if (iVar5 != 0) {
      iVar7 = ((iVar2 - local_8) * 0x100) / iVar5;
    }
    iVar7 = iVar7 + 0x300;
  }
  else {
    iVar7 = 0;
    if (iVar5 != 0) {
      iVar7 = ((iVar2 - local_4) * 0x100) / iVar5;
    }
    iVar7 = 0x500 - iVar7;
  }
  return iVar1 << 0x10 | 0xff000000U | iVar4 << 8 | iVar7 / 6;
}


/* Sexy::SexyAppBase::RGBToHSL(unsigned long const*, unsigned long*, int) */

void __thiscall
Sexy::SexyAppBase::RGBToHSL(SexyAppBase *this,ulong *param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (0 < param_3) {
    lVar3 = 0;
    do {
      uVar2 = param_1[lVar3];
      uVar1 = RGBToHSL(this,(uint)(uVar2 >> 0x10) & 0xff,(uint)(uVar2 >> 8) & 0xff,
                       (uint)uVar2 & 0xff);
      param_2[lVar3] = uVar2 & 0xff000000 | uVar1 & 0xffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 != (ulong)(param_3 - 1) + 1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::ProcessSafeDeleteList() */

void __thiscall Sexy::SexyAppBase::ProcessSafeDeleteList(SexyAppBase *this)

{
  bool bVar1;
  int *piVar2;
  MTAutoDisallowRand aMStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MTAutoDisallowRand::MTAutoDisallowRand(aMStack_20);
  local_18 = FUN_051d7978(*(undefined8 *)(this + 0x650));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 0x650));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        MTAutoDisallowRand::~MTAutoDisallowRand(aMStack_20);
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      piVar2 = (int *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      if (*piVar2 < *(int *)(this + 0x610)) break;
      if (*(long **)(piVar2 + 2) != (long *)0x0) {
        (**(code **)(**(long **)(piVar2 + 2) + 0x18))();
      }
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,
                 (TextureInfo ***)&local_18);
      local_18 = FUN_051d79c4(local_10);
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 0x650));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::CreateReadBufferFromFile(std::string const&, bool) */

void __thiscall
Sexy::SexyAppBase::CreateReadBufferFromFile(SexyAppBase *this,string *param_1,bool param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  RtSerialBuffer *this_00;
  undefined8 uVar4;
  uint local_1c;
  string asStack_18 [8];
  uchar *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x908) != 0) {
    FUN_05475d88(asStack_18);
    uVar2 = ResStreamsManager::GetGroupForFile
                      (*(ResStreamsManager **)(this + 0x908),asStack_18,true,true);
    if (uVar2 != 0xffffffff) {
      local_10 = (uchar *)0x0;
      cVar1 = ResStreamsManager::GetResidentFileBuffer
                        (*(ResStreamsManager **)(this + 0x908),uVar2,asStack_18,&local_10,&local_1c)
      ;
      if (cVar1 != '\0') {
        if (param_2) {
          this_00 = ::operator_new(0x30);
          RtSerialBuffer::RtSerialBuffer(this_00,local_10,local_1c);
        }
        else {
          this_00 = ::operator_new(0x30);
          RtSerialBuffer::RtSerialBuffer(this_00,(uchar *)0x0,0);
          RtSerialBuffer::Write(this_00,local_10,local_1c);
          FUN_051d49a0(this_00 + 0x28);
        }
        std::string::~string(asStack_18);
        goto LAB_051d7cc8;
      }
    }
    std::string::~string(asStack_18);
  }
  FUN_0547429c(param_1);
  lVar3 = FUN_051d4828();
  if (lVar3 == 0) {
    this_00 = (RtSerialBuffer *)0x0;
  }
  else {
    FUN_051d4788(lVar3,2);
    uVar2 = FUN_051d3840(lVar3);
    FUN_051d4788(lVar3,0);
    this_00 = ::operator_new(0x30);
    RtSerialBuffer::RtSerialBuffer(this_00,(uchar *)0x0,0);
    RtSerialBuffer::MaybeWrite(this_00,(void *)0x0,uVar2);
    uVar4 = RtSerialBuffer::GetDataPtr(this_00);
    FUN_051d46c8(uVar4,uVar2,lVar3);
    FUN_051d4108(lVar3);
  }
LAB_051d7cc8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* Sexy::SexyAppBase::SexyAppBase() */

void __thiscall Sexy::SexyAppBase::SexyAppBase(SexyAppBase *this)

{
  char cVar1;
  undefined8 uVar2;
  WidgetManager *this_00;
  ResourceManager *this_01;
  ResStreamsManager *this_02;
  undefined **__n;
  
  ButtonListener::ButtonListener((ButtonListener *)this);
  DialogListener::DialogListener((DialogListener *)(this + 8));
  __n = &PTR_ButtonPress_06a31860;
  *(undefined ***)this = &PTR_ButtonPress_06a31860;
  *(undefined ***)(this + 8) = &PTR_DialogButtonPress_06a31c88;
  Set8BytesTo0(this + 0x78);
  Set8BytesTo0(this + 0x80);
  Set8BytesTo0(this + 0x88);
  Set8BytesTo0(this + 0x90);
  FUN_05476574(this + 0x98);
  Set8BytesTo0(this + 0xa0);
  Set8BytesTo0(this + 0xa8);
  Set8BytesTo0((string *)(this + 0xb0));
  CritSect::CritSect((CritSect *)(this + 0x10c));
  CritSect::CritSect((CritSect *)(this + 0x134));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x368));
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x398));
  Set8BytesTo0(this + 0x3c8);
  Set8BytesTo0(this + 0x3d0);
  Set8BytesTo0(this + 0x448);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x480));
  CritSect::CritSect((CritSect *)(this + 0x4b0));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x4d8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x508));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x538));
  Condition::Condition((Condition *)(this + 0x568));
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x650));
  Set8BytesTo0(this + 0x6c0);
  Set8BytesTo0(this + 0x6c8);
  Insets::Insets((Insets *)(this + 0x71c));
  Ratio::Ratio((Ratio *)(this + 0x730));
  Ratio::Ratio((Ratio *)(this + 0x738));
  Ratio::Ratio((Ratio *)(this + 0x740));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x758));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x788));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x7b8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x7e8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x818));
  PopLoc::PopLoc((PopLoc *)(this + 0x850));
  Event2<char_const*,char_const*>::Event2((Event2<char_const*,char_const*> *)(this + 0x8c0));
  Point::Point((Point *)(this + 0x8fc));
  std::string::append((string *)(this + 0xb0),"",(size_t)__n);
  *(undefined8 *)(this + 0x908) = 0;
  SetMainThreadToCurrent(this);
  *(undefined4 *)(this + 0x930) = 0;
  this[0x928] = (SexyAppBase)0x1;
  *(undefined4 *)(this + 0xbc) = 200;
  this[0xc0] = (SexyAppBase)0x1;
  *(undefined4 *)(this + 0x92c) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x918) = 0;
  *(undefined8 *)(this + 0x920) = 0;
  InitFileDriver();
  *(undefined8 *)(this + 0x28) = gFileDriver;
  uVar2 = IAppDriver::CreateAppDriver(this);
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar2 = IInteractiveAudioDriver::CreateInteractiveAudioDriver(this);
  *(undefined8 *)(this + 0x18) = uVar2;
  uVar2 = IResStreamsDriver::CreateResStreamsDriver();
  *(undefined8 *)(this + 0x30) = uVar2;
  uVar2 = IProfileDriver::CreateProfileDriver();
  *(undefined8 *)(this + 0x38) = uVar2;
  uVar2 = ISaveGameDriver::CreateSaveGameDriver();
  *(undefined8 *)(this + 0x40) = uVar2;
  uVar2 = IHttpDriver::CreateHttpDriver(this);
  *(undefined8 *)(this + 0x48) = uVar2;
  uVar2 = ILeaderboardDriver::CreateLeaderboardDriver();
  *(undefined8 *)(this + 0x50) = uVar2;
  uVar2 = IAchievementDriver::CreateAchievementDriver();
  *(undefined8 *)(this + 0x58) = uVar2;
  uVar2 = IDiagDriver::CreateDiagDriver();
  *(undefined8 *)(this + 0x60) = uVar2;
  uVar2 = IAntiHackDriver::CreateAntiHackDriver();
  this[0x689] = (SexyAppBase)0x0;
  *(undefined8 *)(this + 0x68) = uVar2;
  gSexyAppBase = this;
  this_00 = ::operator_new(0x260);
  WidgetManager::WidgetManager(this_00,this);
  *(WidgetManager **)(this + 0x360) = this_00;
  this_01 = ::operator_new(0x210);
  ResourceManager::ResourceManager(this_01,this);
  *(ResourceManager **)(this + 0x848) = this_01;
  (**(code **)(**(long **)(this + 0x10) + 0x10))(*(long **)(this + 0x10));
  cVar1 = (**(code **)(**(long **)(this + 0x28) + 0x10))(*(long **)(this + 0x28),this);
  if (cVar1 != '\0') {
    this_02 = ::operator_new(0xa8);
    ResStreamsManager::ResStreamsManager(this_02,this);
    *(ResStreamsManager **)(this + 0x908) = this_02;
    PrimeText::InstanceCreate(this);
    this[0x929] = (SexyAppBase)0x0;
    this[0x92a] = (SexyAppBase)0x0;
    *(undefined4 *)(this + 0x934) = 0;
    this[0x8b8] = (SexyAppBase)0x0;
    return;
  }
  Shutdown(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::DeleteNativeImageData() */

void __thiscall Sexy::SexyAppBase::DeleteNativeImageData(SexyAppBase *this)

{
  bool bVar1;
  undefined8 *puVar2;
  AutoCrit aAStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_20,(CritSect *)(this + 0x4b0));
  local_18 = std::
             set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
             ::begin((set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
                      *)(this + 0x480));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x480));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0xa8))((long *)*puVar2);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_18);
  }
  AutoCrit::~AutoCrit(aAStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::DeleteExtraImageData() */

void __thiscall Sexy::SexyAppBase::DeleteExtraImageData(SexyAppBase *this)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  AutoCrit aAStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_20,(CritSect *)(this + 0x4b0));
  local_18 = std::
             set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
             ::begin((set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
                      *)(this + 0x480));
  plVar2 = (long *)(**(code **)(**(long **)(this + 0x20) + 0x60))(*(long **)(this + 0x20));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x480));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    plVar3 = (long *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if ((long *)*plVar3 != plVar2) {
      (**(code **)(*(long *)*plVar3 + 0x88))();
    }
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_18);
  }
  AutoCrit::~AutoCrit(aAStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::ReInitImages() */

void __thiscall Sexy::SexyAppBase::ReInitImages(SexyAppBase *this)

{
  bool bVar1;
  undefined8 *puVar2;
  AutoCrit aAStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_20,(CritSect *)(this + 0x4b0));
  local_18 = std::
             set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
             ::begin((set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
                      *)(this + 0x480));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x480));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x90))((long *)*puVar2);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_18);
  }
  AutoCrit::~AutoCrit(aAStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::SafeDeleteWidget(Sexy::Widget*) */

void __thiscall Sexy::SexyAppBase::SafeDeleteWidget(SexyAppBase *this,Widget *param_1)

{
  undefined4 local_18 [2];
  Widget *local_10;
  long local_8;
  
  local_18[0] = *(undefined4 *)(this + 0x610);
  local_8 = ___stack_chk_guard;
  local_10 = param_1;
  std::list<Sexy::WidgetSafeDeleteInfo,std::allocator<Sexy::WidgetSafeDeleteInfo>>::push_back
            ((list<Sexy::WidgetSafeDeleteInfo,std::allocator<Sexy::WidgetSafeDeleteInfo>> *)
             (this + 0x650),(WidgetSafeDeleteInfo *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::RemoveMemoryImage(Sexy::MemoryImage*) */

void __thiscall Sexy::SexyAppBase::RemoveMemoryImage(SexyAppBase *this,MemoryImage *param_1)

{
  set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>> *this_00;
  bool bVar1;
  MemoryImage *local_28;
  AutoCrit aAStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  if (*(long *)(this + 0x20) != 0) {
    this_00 = (set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
               *)(this + 0x480);
    AutoCrit::AutoCrit(aAStack_20,(CritSect *)(this + 0x4b0));
    local_18 = std::
               set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
               ::find(this_00,&local_28);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      std::set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
      ::erase_abi_cxx11_(this_00,local_18);
    }
    Remove3DData((MemoryImage *)this);
    AutoCrit::~AutoCrit(aAStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::AddMemoryImage(Sexy::MemoryImage*) */

void __thiscall Sexy::SexyAppBase::AddMemoryImage(SexyAppBase *this,MemoryImage *param_1)

{
  MemoryImage *local_18;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  if (*(long *)(this + 0x20) != 0) {
    AutoCrit::AutoCrit(aAStack_10,(CritSect *)(this + 0x4b0));
    std::set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>::
    insert((set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
            *)(this + 0x480),&local_18);
    AutoCrit::~AutoCrit(aAStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::~SexyAppBase() */

void __thiscall Sexy::SexyAppBase::~SexyAppBase(SexyAppBase *this)

{
  map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>> *this_00;
  bool bVar1;
  long lVar2;
  long *plVar3;
  Pool *this_01;
  LeaderboardManager *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>
             *)(this + 0x368);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_ButtonPress_06a31860;
  *(undefined ***)(this + 8) = &PTR_DialogButtonPress_06a31c88;
  CleanupSysFont();
  local_18 = std::
             map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>
             ::begin(this_00);
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      std::map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>
      ::clear(this_00);
      std::list<Sexy::Dialog*,std::allocator<Sexy::Dialog*>>::clear
                ((list<Sexy::Dialog*,std::allocator<Sexy::Dialog*>> *)(this + 0x398));
      if (*(long **)(this + 0x360) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x360) + 0x18))();
      }
      if (*(long **)(this + 0x848) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x848) + 8))();
      }
      this_01 = *(Pool **)(this + 0x8b0);
      if (this_01 != (Pool *)0x0) {
        SharedRenderTarget::Pool::~Pool(this_01);
        AK::FreeHook(this_01);
      }
      *(undefined8 *)(this + 0x8b0) = 0;
      (**(code **)(**(long **)(this + 0x10) + 0x38))(*(long **)(this + 0x10));
      if (*(long **)(this + 0x918) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x918) + 8))();
      }
      this_02 = *(LeaderboardManager **)(this + 0x920);
      *(undefined8 *)(this + 0x918) = 0;
      if (this_02 != (LeaderboardManager *)0x0) {
        LeaderboardManager::~LeaderboardManager(this_02);
        AK::FreeHook(this_02);
      }
      *(undefined8 *)(this + 0x920) = 0;
      if (*(long **)(this + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x18) + 8))();
      }
      *(undefined8 *)(this + 0x18) = 0;
      if (*(long **)(this + 0x40) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x40) + 8))();
      }
      *(undefined8 *)(this + 0x40) = 0;
      if (*(long **)(this + 0x38) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x38) + 8))();
      }
      *(undefined8 *)(this + 0x38) = 0;
      if (*(long **)(this + 0x48) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x48) + 8))();
      }
      *(undefined8 *)(this + 0x48) = 0;
      if (*(long **)(this + 0x50) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x50) + 8))();
      }
      *(undefined8 *)(this + 0x50) = 0;
      if (*(long **)(this + 0x58) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x58) + 8))();
      }
      *(undefined8 *)(this + 0x58) = 0;
      if (*(long **)(this + 0x60) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x60) + 8))();
      }
      *(undefined8 *)(this + 0x60) = 0;
      if (*(long **)(this + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x10) + 8))();
      }
      *(undefined8 *)(this + 0x10) = 0;
      if (*(long **)(this + 0x908) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x908) + 8))();
      }
      *(undefined8 *)(this + 0x908) = 0;
      if (*(long **)(this + 0x30) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x30) + 8))();
      }
      *(undefined8 *)(this + 0x30) = 0;
      if (gFileDriver != (long *)0x0) {
        (**(code **)(*gFileDriver + 8))();
      }
      *(undefined8 *)(this + 0x28) = 0;
      gFileDriver = (long *)0x0;
      gSexyAppBase = 0;
      Event2<char_const*,char_const*>::~Event2((Event2<char_const*,char_const*> *)(this + 0x8c0));
      PopLoc::~PopLoc((PopLoc *)(this + 0x850));
      std::
      map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
      ::~map((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
              *)(this + 0x818));
      std::
      map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
      ::~map((map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
              *)(this + 0x7e8));
      std::
      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
      ~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
            *)(this + 0x7b8));
      std::
      map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
      ::~map((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
              *)(this + 0x788));
      std::
      map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
      ::~map((map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
              *)(this + 0x758));
      std::string::~string((string *)(this + 0x6c8));
      std::string::~string((string *)(this + 0x6c0));
      std::list<Sexy::WidgetSafeDeleteInfo,std::allocator<Sexy::WidgetSafeDeleteInfo>>::~list
                ((list<Sexy::WidgetSafeDeleteInfo,std::allocator<Sexy::WidgetSafeDeleteInfo>> *)
                 (this + 0x650));
      Condition::~Condition((Condition *)(this + 0x568));
      std::set<Sexy::PIEffect*,std::less<Sexy::PIEffect*>,std::allocator<Sexy::PIEffect*>>::~set
                ((set<Sexy::PIEffect*,std::less<Sexy::PIEffect*>,std::allocator<Sexy::PIEffect*>> *)
                 (this + 0x538));
      std::set<Sexy::PrimeFont*,std::less<Sexy::PrimeFont*>,std::allocator<Sexy::PrimeFont*>>::~set
                ((set<Sexy::PrimeFont*,std::less<Sexy::PrimeFont*>,std::allocator<Sexy::PrimeFont*>>
                  *)(this + 0x508));
      std::set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>>::~set
                ((set<Sexy::ImageFont*,std::less<Sexy::ImageFont*>,std::allocator<Sexy::ImageFont*>>
                  *)(this + 0x4d8));
      EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x4b0));
      std::set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
      ::~set((set<Sexy::MemoryImage*,std::less<Sexy::MemoryImage*>,std::allocator<Sexy::MemoryImage*>>
              *)(this + 0x480));
      std::string::~string((string *)(this + 0x448));
      std::string::~string((string *)(this + 0x3d0));
      std::string::~string((string *)(this + 0x3c8));
      std::list<Sexy::Dialog*,std::allocator<Sexy::Dialog*>>::~list
                ((list<Sexy::Dialog*,std::allocator<Sexy::Dialog*>> *)(this + 0x398));
      std::map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>
      ::~map(this_00);
      EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x134));
      EA::Thread::Mutex::~Mutex((Mutex *)(this + 0x10c));
      std::string::~string((string *)(this + 0xb0));
      std::string::~string((string *)(this + 0xa8));
      std::string::~string((string *)(this + 0xa0));
      FUN_05476c50(this + 0x98);
      std::string::~string((string *)(this + 0x90));
      std::string::~string((string *)(this + 0x88));
      std::string::~string((string *)(this + 0x80));
      std::string::~string((string *)(this + 0x78));
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    plVar3 = *(long **)(lVar2 + 8);
    if ((long *)plVar3[4] == (long *)0x0) {
LAB_051d92dc:
      (**(code **)(*plVar3 + 0x18))();
    }
    else {
      (**(code **)(*(long *)plVar3[4] + 0x68))();
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      plVar3 = *(long **)(lVar2 + 8);
      if (plVar3 != (long *)0x0) goto LAB_051d92dc;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  } while( true );
}


/* Sexy::SexyAppBase::~SexyAppBase() */

void __thiscall Sexy::SexyAppBase::~SexyAppBase(SexyAppBase *this)

{
  ~SexyAppBase(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::GetDialog(int) */

void __thiscall Sexy::SexyAppBase::GetDialog(SexyAppBase *this,int param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::
             map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>
             ::find((map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>
                     *)(this + 0x368),local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x368));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::KillDialog(int, bool, bool) */

void __thiscall
Sexy::SexyAppBase::KillDialog(SexyAppBase *this,int param_1,bool param_2,bool param_3)

{
  map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>> *this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  int local_34 [3];
  undefined8 local_28;
  Widget *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>
             *)(this + 0x368);
  local_8 = ___stack_chk_guard;
  local_34[0] = param_1;
  local_28 = std::
             map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>
             ::find(this_00,local_34);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_10);
  if (!bVar1) goto LAB_051d9984;
  lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
  local_20 = *(Widget **)(lVar4 + 8);
  if (*(int *)(local_20 + 0x170) == -1) {
    *(undefined4 *)(local_20 + 0x170) = 0;
  }
  uVar5 = FUN_051d78d0(*(undefined8 *)(this + 0x398));
  uVar6 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)(this + 0x398));
  local_18 = std::find<std::_List_iterator<Sexy::Dialog*>,Sexy::Dialog*>(uVar5,uVar6,&local_20);
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(this + 0x398));
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar2) {
    eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,
               (TextureInfo ***)&local_18);
    FUN_051d791c(local_10);
    std::map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>::
    erase_abi_cxx11_(this_00,local_28);
    if (!param_2) goto LAB_051d9968;
LAB_051d99b8:
    plVar7 = *(long **)(local_20 + 0x20);
    if (plVar7 == (long *)0x0) goto LAB_051d996c;
    (**(code **)(*plVar7 + 0x68))(plVar7,local_20);
    cVar3 = (**(code **)(*(long *)local_20 + 0x348))();
  }
  else {
    std::map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>::
    erase_abi_cxx11_(this_00,local_28);
    if (param_2) goto LAB_051d99b8;
LAB_051d9968:
    if (param_3) goto LAB_051d99b8;
LAB_051d996c:
    cVar3 = (**(code **)(*(long *)local_20 + 0x348))();
  }
  if (cVar3 != '\0') {
    (**(code **)(*(long *)this + 0x2a0))(this);
    WidgetManager::RemoveBaseModal(*(WidgetManager **)(this + 0x360),local_20);
  }
  if (param_3) {
    (**(code **)(*(long *)this + 0x150))(this,local_20);
  }
LAB_051d9984:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::AddDialog(int, Sexy::Dialog*, Sexy::FlagsMod const&) */

void __thiscall
Sexy::SexyAppBase::AddDialog(SexyAppBase *this,int param_1,Dialog *param_2,FlagsMod *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Dialog *pDVar4;
  char cVar5;
  undefined4 uVar6;
  code *pcVar7;
  Dialog *local_30;
  int local_24 [3];
  pair<int_const,Sexy::Dialog*> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = param_2;
  local_24[0] = param_1;
  (**(code **)(*(long *)this + 0x280))();
  pDVar4 = local_30;
  if (*(int *)(local_30 + 0x50) == 0) {
    iVar2 = *(int *)(this + 0xd8);
    iVar3 = *(int *)(this + 0xd4);
    pcVar7 = *(code **)(*(long *)local_30 + 0x198);
    iVar1 = iVar3 / 2;
    uVar6 = (**(code **)(*(long *)local_30 + 0x340))(local_30,iVar1);
    (*pcVar7)(pDVar4,(iVar3 - iVar1) / 2,iVar2 / 5,iVar1,uVar6);
  }
  std::pair<int_const,Sexy::Dialog*>::pair<int&,Sexy::Dialog*&,void>(apStack_18,local_24,&local_30);
  std::map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>::
  insert<std::pair<int_const,Sexy::Dialog*>,void>
            ((map<int,Sexy::Dialog*,std::less<int>,std::allocator<std::pair<int_const,Sexy::Dialog*>>>
              *)(this + 0x368),(pair *)apStack_18);
  std::list<Sexy::Dialog*,std::allocator<Sexy::Dialog*>>::push_back
            ((list<Sexy::Dialog*,std::allocator<Sexy::Dialog*>> *)(this + 0x398),&local_30);
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),local_30);
  cVar5 = (**(code **)(*(long *)local_30 + 0x348))(local_30);
  if (cVar5 != '\0') {
    WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),(Widget *)local_30,param_3);
    (**(code **)(*(long *)this + 0x298))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::GetBoolean(std::string const&) */

void __thiscall Sexy::SexyAppBase::GetBoolean(SexyAppBase *this,string *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
             ::find((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
                     *)(this + 0x788),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x788));
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar1 = 0;
  if (bVar2) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar1 = *(undefined1 *)(lVar3 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::GetBoolean(std::string const&, bool) */

void __thiscall Sexy::SexyAppBase::GetBoolean(SexyAppBase *this,string *param_1,bool param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
             ::find((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
                     *)(this + 0x788),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x788));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    param_2 = *(bool *)(lVar2 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::GetInteger(std::string const&) */

void __thiscall Sexy::SexyAppBase::GetInteger(SexyAppBase *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     *)(this + 0x7b8),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x7b8));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar3 = 0;
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::GetInteger(std::string const&, int) */

void __thiscall Sexy::SexyAppBase::GetInteger(SexyAppBase *this,string *param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     *)(this + 0x7b8),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x7b8));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    param_2 = *(int *)(lVar2 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::GetDouble(std::string const&) */

void __thiscall Sexy::SexyAppBase::GetDouble(SexyAppBase *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
             ::find((map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
                     *)(this + 0x7e8),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x7e8));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar3 = 0;
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::GetDouble(std::string const&, double) */

void __thiscall Sexy::SexyAppBase::GetDouble(SexyAppBase *this,string *param_1,double param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
             ::find((map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
                     *)(this + 0x7e8),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x7e8));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    param_2 = *(double *)(lVar2 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::GetString(std::string const&) */

void Sexy::SexyAppBase::GetString(string *param_1)

{
  bool bVar1;
  string *in_x1;
  undefined1 auVar2 [16];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
             ::find((map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
                     *)(param_1 + 0x758),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 0x758));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    auVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    ToWString((Sexy *)(auVar2._0_8_ + 8),auVar2._8_8_);
  }
  else {
    FUN_05478178();
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::GetString(std::string const&, std::wstring const&) */

void Sexy::SexyAppBase::GetString(string *param_1,wstring *param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
             ::find((map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
                     *)(param_1 + 0x758),(string *)param_2);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 0x758));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    auVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    ToWString((Sexy *)(auVar2._0_8_ + 8),auVar2._8_8_);
  }
  else {
    FUN_05477b24();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::ReadFromRegistry() */

void __thiscall Sexy::SexyAppBase::ReadFromRegistry(SexyAppBase *this)

{
  string *psVar1;
  char cVar2;
  SexyAppBase SVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_28 [8];
  string asStack_20 [8];
  int local_18 [2];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x3c2] = (SexyAppBase)0x1;
  psVar1 = (string *)(this + 0xa0);
  std::string::string(asStack_20,"RegistryKey");
  ToWString(psVar1);
  GetString((string *)this,(wstring *)asStack_20);
  Sexy::ToString((wstring *)local_18);
  FUN_05474278(psVar1,asStack_10);
  std::string::~string(asStack_10);
  FUN_05476c50((wstring *)local_18);
  FUN_05476c50(auStack_28);
  std::string::~string(asStack_20);
  nop();
  lVar4 = FUN_05474184(psVar1);
  if (lVar4 != 0) {
    std::string::string(asStack_10,"MusicVolume");
    cVar2 = RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      *(double *)(this + 0xe0) = (double)local_18[0] * 0.01;
    }
    std::string::string(asStack_10,"SfxVolume");
    cVar2 = RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      *(double *)(this + 0xe8) = (double)local_18[0] * 0.01;
    }
    std::string::string(asStack_10,"Muted");
    cVar2 = RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      *(int *)(this + 0x470) = local_18[0];
    }
    std::string::string(asStack_10,"ScreenMode");
    cVar2 = RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      SVar3 = (SexyAppBase)0x0;
      if (local_18[0] == 0) {
        SVar3 = (SexyAppBase)((byte)this[0x3b2] ^ 1);
      }
      this[0x3af] = SVar3;
    }
    std::string::string(asStack_10,"PreferredX");
    RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"PreferredY");
    RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"PreferredWidth");
    RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"PreferredHeight");
    RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"CustomCursors");
    cVar2 = RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      EnableCustomCursors(SUB81(this,0));
    }
    std::string::string(asStack_10,"WaitForVSync");
    RegistryReadBoolean((string *)this,(bool *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"InProgress");
    cVar2 = RegistryReadInteger((string *)this,(int *)asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      this[0x6d6] = (SexyAppBase)(local_18[0] == 0);
    }
    cVar2 = IsScreenSaver(this);
    if (cVar2 == '\0') {
      std::string::string(asStack_10,"InProgress");
      RegistryWriteInteger((string *)this,(int)asStack_10);
      std::string::~string(asStack_10);
      nop();
      pcVar5 = *(code **)(**(long **)(this + 0x10) + 0x248);
      if (pcVar5 == IAppDriver::ReadFromConfig) goto LAB_051da7ec;
    }
    else {
      pcVar5 = *(code **)(**(long **)(this + 0x10) + 0x248);
      if (pcVar5 == IAppDriver::ReadFromConfig) goto LAB_051da7ec;
    }
    (*pcVar5)();
  }
LAB_051da7ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::GetStringVector(std::string const&) */

void Sexy::SexyAppBase::GetStringVector(string *param_1)

{
  bool bVar1;
  long lVar2;
  string *in_x1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
             ::find((map<std::string,std::vector<std::string,std::allocator<std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::vector<std::string,std::allocator<std::string>>>>>
                     *)(param_1 + 0x818),in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 0x818));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)in_x8,(vector *)(lVar2 + 8));
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::SetString(std::string const&, std::wstring const&) */

void __thiscall Sexy::SexyAppBase::SetString(SexyAppBase *this,string *param_1,wstring *param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int local_2c;
  _Rb_tree_iterator<std::pair<int_const,std::wstring>> local_28 [8];
  char local_20;
  pair<std::string_const,std::wstring> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::pair<std::string_const,std::wstring>::pair(apStack_18,param_1,param_2);
  _local_28 = std::
              map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
              ::insert<std::pair<std::string_const,std::wstring>,void>
                        ((map<std::string,std::wstring,std::less<std::string>,std::allocator<std::pair<std::string_const,std::wstring>>>
                          *)(this + 0x758),(pair *)apStack_18);
  std::pair<std::string_const,std::wstring>::~pair(apStack_18);
  if (local_20 == '\0') {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*(local_28);
    thunk_FUN_05477b9c(lVar3 + 8,param_2);
  }
  local_2c = 0;
  cVar2 = StringToInt(param_1,&local_2c);
  iVar1 = local_2c;
  if (cVar2 != '\0') {
    ToSexyString(param_2);
    PopLoc::SetString((PopLoc *)(this + 0x850),iVar1,(wstring *)apStack_18,false);
    FUN_05476c50(apStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::SetBoolean(std::string const&, bool) */

void __thiscall Sexy::SexyAppBase::SetBoolean(SexyAppBase *this,string *param_1,bool param_2)

{
  long lVar1;
  bool local_31 [9];
  _Rb_tree_iterator<std::pair<int_const,std::wstring>> local_28 [8];
  char local_20;
  pair<std::string_const,bool> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_31[0] = param_2;
  std::pair<std::string_const,bool>::pair<bool&,void>(apStack_18,param_1,local_31);
  _local_28 = std::
              map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
              ::insert<std::pair<std::string_const,bool>,void>
                        ((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
                          *)(this + 0x788),(pair *)apStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_18);
  if (local_20 == '\0') {
    lVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*(local_28);
    *(bool *)(lVar1 + 8) = local_31[0];
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::SetInteger(std::string const&, int) */

void __thiscall Sexy::SexyAppBase::SetInteger(SexyAppBase *this,string *param_1,int param_2)

{
  long lVar1;
  int local_34 [3];
  _Rb_tree_iterator<std::pair<int_const,std::wstring>> local_28 [8];
  char local_20;
  pair<std::string_const,int> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34[0] = param_2;
  std::pair<std::string_const,int>::pair<int&,void>(apStack_18,param_1,local_34);
  _local_28 = std::
              map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              ::insert<std::pair<std::string_const,int>,void>
                        ((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                          *)(this + 0x7b8),(pair *)apStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_18);
  if (local_20 == '\0') {
    lVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*(local_28);
    *(int *)(lVar1 + 8) = local_34[0];
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::SetDouble(std::string const&, double) */

void __thiscall Sexy::SexyAppBase::SetDouble(SexyAppBase *this,string *param_1,double param_2)

{
  long lVar1;
  double local_38 [2];
  _Rb_tree_iterator<std::pair<int_const,std::wstring>> local_28 [8];
  char local_20;
  pair<std::string_const,double> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = param_2;
  std::pair<std::string_const,double>::pair<double&,void>(apStack_18,param_1,local_38);
  _local_28 = std::
              map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
              ::insert<std::pair<std::string_const,double>,void>
                        ((map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string_const,double>>>
                          *)(this + 0x7e8),(pair *)apStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_18);
  if (local_20 == '\0') {
    lVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*(local_28);
    *(double *)(lVar1 + 8) = local_38[0];
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::LoadProperties(std::string const&, bool, bool, bool) */

void __thiscall
Sexy::SexyAppBase::LoadProperties
          (SexyAppBase *this,string *param_1,bool param_2,bool param_3,bool param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 auStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  wstring awStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  PropertiesParser aPStack_60 [40];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Buffer::Buffer(aBStack_38);
  bVar2 = SUB81(aBStack_38,0);
  cVar1 = ReadBufferFromFile((string *)this,(Buffer *)param_1,bVar2);
  if (cVar1 == '\0') {
    if ((param_4) && (*(long *)(this + 0x848) != 0)) {
      Buffer::Clear(aBStack_38);
      ResourceManager::GetLocaleFolder(SUB81(*(undefined8 *)(this + 0x848),0));
      std::operator+(asStack_68,param_1);
      cVar1 = ReadBufferFromFile((string *)this,(Buffer *)aPStack_60,bVar2);
      std::string::~string((string *)aPStack_60);
      std::string::~string(asStack_68);
      if (cVar1 != '\0') goto joined_r0x051dc74c;
    }
    if (param_2) {
      pcVar3 = *(code **)(*(long *)this + 0x148);
      std::string::string(asStack_80,"UNABLE_OPEN_PROPERTIES");
      FUN_05478178(awStack_78,L"Unable to open properties file ",asStack_88);
      GetString((string *)this,(wstring *)asStack_80);
      ToWString(param_1);
      std::operator+((wstring *)asStack_70,(wstring *)asStack_68);
      (*pcVar3)(this,aPStack_60);
      FUN_05476c50(aPStack_60);
      FUN_05476c50((wstring *)asStack_68);
      FUN_05476c50((wstring *)asStack_70);
      FUN_05476c50(awStack_78);
      nop();
      std::string::~string(asStack_80);
      nop();
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
  }
  else {
joined_r0x051dc74c:
    if (param_3) {
      cVar1 = (**(code **)(*(long *)this + 0x388))(this,aBStack_38,param_1);
      if (cVar1 == '\0') {
        pcVar3 = *(code **)(*(long *)this + 0x148);
        std::string::string(asStack_88,"PROPERTIES_SIG_FAILED");
        FUN_05478178(asStack_80,L"Signature check failed on ",auStack_90);
        GetString((string *)this,(wstring *)asStack_88);
        std::operator+(param_1,"\'");
        ToWString(asStack_70);
        std::operator+(awStack_78,(wstring *)asStack_68);
        (*pcVar3)(this,aPStack_60);
        FUN_05476c50(aPStack_60);
        FUN_05476c50((wstring *)asStack_68);
        std::string::~string(asStack_70);
        FUN_05476c50(awStack_78);
        FUN_05476c50(asStack_80);
        nop();
        std::string::~string(asStack_88);
        nop();
        cVar1 = '\0';
        goto LAB_051dc69c;
      }
    }
    PropertiesParser::PropertiesParser(aPStack_60,this);
    cVar1 = PropertiesParser::ParsePropertiesBuffer((Buffer *)aPStack_60);
    if (cVar1 == '\0') {
      pcVar3 = *(code **)(*(long *)this + 0x148);
      PropertiesParser::GetErrorText();
      (*pcVar3)(this,asStack_68);
      FUN_05476c50(asStack_68);
    }
    PropertiesParser::~PropertiesParser(aPStack_60);
  }
LAB_051dc69c:
  Buffer::~Buffer(aBStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::LoadProperties() */

void __thiscall Sexy::SexyAppBase::LoadProperties(SexyAppBase *this)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"properties/default.xml");
  uVar1 = LoadProperties(this,asStack_10,true,false,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::CopyImage(Sexy::Image*, Sexy::TRect<int> const&) */

void __thiscall Sexy::SexyAppBase::CopyImage(SexyAppBase *this,Image *param_1,TRect *param_2)

{
  DeviceImage *this_00;
  Graphics aGStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x160);
  DeviceImage::DeviceImage(this_00,this);
  (**(code **)(*(long *)this_00 + 200))
            (this_00,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  Graphics::Graphics(aGStack_d0,(Image *)this_00);
  Graphics::DrawImage(aGStack_d0,param_1,-*(int *)param_2,-*(int *)(param_2 + 4));
  Image::CopyAttributes((Image *)this_00,param_1);
  Graphics::~Graphics(aGStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyAppBase::CopyImage(Sexy::Image*) */

void __thiscall Sexy::SexyAppBase::CopyImage(SexyAppBase *this,Image *param_1)

{
  int iVar1;
  int iVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_1);
  iVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_1);
  Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  CopyImage(this,param_1,(TRect *)aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

