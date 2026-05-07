// Class: Sexy::WwiseSoundManagerConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WwiseSoundManagerConfig::WwiseSoundManagerConfig() */

void __thiscall
Sexy::WwiseSoundManagerConfig::WwiseSoundManagerConfig(WwiseSoundManagerConfig *this)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InteractiveSoundManagerConfig::InteractiveSoundManagerConfig
            ((InteractiveSoundManagerConfig *)this);
  Set8BytesTo0(this + 0x78);
  ResStreamsManager::GetRSBPath();
  lVar1 = FUN_05474184(asStack_10);
  std::string::~string(asStack_10);
  if (lVar1 != 0) {
    ResStreamsManager::GetRSBPath();
    FUN_05474278(this + 0x78,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

