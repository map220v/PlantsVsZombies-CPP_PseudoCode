// Class: Sexy::WwiseSoundManager


/* Sexy::WwiseSoundManager::Initialize(Sexy::InteractiveSoundManagerConfig const&) */

undefined4 __thiscall
Sexy::WwiseSoundManager::Initialize(WwiseSoundManager *this,InteractiveSoundManagerConfig *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = InteractiveSoundManager::Initialize((InteractiveSoundManager *)(this + 8),param_1);
  cVar1 = FUN_0547419c((string *)(param_1 + 0x78));
  if (cVar1 == '\0') {
    WwiseInteractiveAudioDriver::HACK_SetAndroidAssetInfo
              (*(WwiseInteractiveAudioDriver **)(this + 0x38),(string *)(param_1 + 0x78));
  }
  return uVar2;
}


/* Sexy::WwiseSoundManager::WwiseSoundManager(Sexy::IInteractiveAudioDriver*) */

void __thiscall
Sexy::WwiseSoundManager::WwiseSoundManager(WwiseSoundManager *this,IInteractiveAudioDriver *param_1)

{
  InteractiveSoundManager::InteractiveSoundManager((InteractiveSoundManager *)(this + 8),param_1);
  *(undefined ***)this = &PTR_Initialize_06a345a0;
  return;
}

