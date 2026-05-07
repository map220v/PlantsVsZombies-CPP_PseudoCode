// Class: Sexy::WwiseInteractiveAudioDriver


/* Sexy::WwiseInteractiveAudioDriver::CreateSoundManager() */

WwiseSoundManager * __thiscall
Sexy::WwiseInteractiveAudioDriver::CreateSoundManager(WwiseInteractiveAudioDriver *this)

{
  WwiseSoundManager *this_00;
  
  this_00 = ::operator_new(0x88);
  WwiseSoundManager::WwiseSoundManager(this_00,(IInteractiveAudioDriver *)this);
  return this_00 + 8;
}


/* Sexy::WwiseInteractiveAudioDriver::Update() */

void __thiscall Sexy::WwiseInteractiveAudioDriver::Update(WwiseInteractiveAudioDriver *this)

{
  if ((m_hasError == '\0') && (this[0x18] != (WwiseInteractiveAudioDriver)0x0)) {
    FUN_054be3b4();
    return;
  }
  return;
}


/* Sexy::WwiseInteractiveAudioDriver::SendEvent(unsigned int, void*) */

undefined8 __thiscall
Sexy::WwiseInteractiveAudioDriver::SendEvent
          (WwiseInteractiveAudioDriver *this,uint param_1,void *param_2)

{
  undefined8 uVar1;
  
  if (m_hasError != '\0') {
    return 0;
  }
  uVar1 = FUN_052f00d4(param_2);
  uVar1 = FUN_054c4d24(param_1,uVar1,0,0,0,0,0,0);
  return uVar1;
}


/* Sexy::WwiseInteractiveAudioDriver::SendEventCallback(unsigned int,
   Sexy::InteractiveAudioCallbackType, Sexy::IInteractiveAudioCallbackListener*, void*) */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::SendEventCallback
          (undefined8 param_1_00,undefined4 param_1,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_052f00d4(param_5);
  uVar1 = FUN_052f00dc(param_3);
  FUN_054c4d24(param_1,uVar2,uVar1,FUN_052f00e8,param_4,0,0,0);
  return;
}


/* Sexy::WwiseInteractiveAudioDriver::SendEvent(char const*, void*) */

undefined8 __thiscall
Sexy::WwiseInteractiveAudioDriver::SendEvent
          (WwiseInteractiveAudioDriver *this,char *param_1,void *param_2)

{
  undefined8 uVar1;
  
  if (m_hasError != '\0') {
    return 0;
  }
  uVar1 = FUN_052f00d4(param_2);
  uVar1 = FUN_054c4e5c(param_1,uVar1,0,0,0,0,0,0);
  return uVar1;
}


/* Sexy::WwiseInteractiveAudioDriver::SendEventCallback(char const*,
   Sexy::InteractiveAudioCallbackType, Sexy::IInteractiveAudioCallbackListener*, void*) */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::SendEventCallback
          (undefined8 param_1_00,undefined8 param_1,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_052f00d4(param_5);
  uVar1 = FUN_052f00dc(param_3);
  FUN_054c4e5c(param_1,uVar2,uVar1,FUN_052f00e8,param_4,0,0,0);
  return;
}


/* Sexy::WwiseInteractiveAudioDriver::SetSwitch(char const*, char const*, void*) */

bool __thiscall
Sexy::WwiseInteractiveAudioDriver::SetSwitch
          (WwiseInteractiveAudioDriver *this,char *param_1,char *param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_052f00d4(param_3);
  iVar1 = FUN_054befc8(param_1,param_2,uVar2);
  return iVar1 == 1;
}


/* Sexy::WwiseInteractiveAudioDriver::SetSwitch(unsigned int, unsigned int, void*) */

bool __thiscall
Sexy::WwiseInteractiveAudioDriver::SetSwitch
          (WwiseInteractiveAudioDriver *this,uint param_1,uint param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_052f00d4(param_3);
  iVar1 = FUN_054bef58(param_1,param_2,uVar2);
  return iVar1 == 1;
}


/* Sexy::WwiseInteractiveAudioDriver::SetRTPCValue(unsigned int, float, void*) */

bool __thiscall
Sexy::WwiseInteractiveAudioDriver::SetRTPCValue
          (WwiseInteractiveAudioDriver *this,uint param_1,float param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 in_register_00005004;
  
  uVar2 = FUN_052f00d4(param_3);
  iVar1 = FUN_054bead4(CONCAT44(in_register_00005004,param_2),param_1,uVar2,0,4,0);
  return iVar1 == 1;
}


/* Sexy::WwiseInteractiveAudioDriver::SetRTPCValue(char const*, float, void*) */

bool __thiscall
Sexy::WwiseInteractiveAudioDriver::SetRTPCValue
          (WwiseInteractiveAudioDriver *this,char *param_1,float param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 in_register_00005004;
  
  uVar2 = FUN_052f00d4(param_3);
  iVar1 = FUN_054bee3c(CONCAT44(in_register_00005004,param_2),param_1,uVar2,0,4,0);
  return iVar1 == 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WwiseInteractiveAudioDriver::GetRTPCValue(unsigned int, float&, void*) */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::GetRTPCValue
          (WwiseInteractiveAudioDriver *this,uint param_1,float *param_2,void *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = FUN_052f00d4(param_3);
  iVar2 = FUN_0551aad0(param_1,uVar3,param_2);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WwiseInteractiveAudioDriver::GetRTPCValue(char const*, float&, void*) */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::GetRTPCValue
          (WwiseInteractiveAudioDriver *this,char *param_1,float *param_2,void *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = FUN_052f00d4(param_3);
  iVar2 = FUN_0551ad84(param_1,uVar3,param_2);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 1);
}


/* Sexy::WwiseInteractiveAudioDriver::SetState(unsigned int, unsigned int) */

bool __thiscall
Sexy::WwiseInteractiveAudioDriver::SetState
          (WwiseInteractiveAudioDriver *this,uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_054bf154(param_1,param_2);
  return iVar1 == 1;
}


/* Sexy::WwiseInteractiveAudioDriver::SetState(char const*, char const*) */

bool __thiscall
Sexy::WwiseInteractiveAudioDriver::SetState
          (WwiseInteractiveAudioDriver *this,char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = FUN_054bf268(param_1,param_2);
  return iVar1 == 1;
}


/* Sexy::WwiseInteractiveAudioDriver::RegisterGameObject(void*) */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::RegisterGameObject
          (WwiseInteractiveAudioDriver *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_054c1954(param_1,1);
    return;
  }
  return;
}


/* Sexy::WwiseInteractiveAudioDriver::UnregisterGameObject(void*) */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::UnregisterGameObject
          (WwiseInteractiveAudioDriver *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_054c1a64(param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WwiseInteractiveAudioDriver::SetGameObjectPosition(void*, Sexy::SexyVector2 const&) */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::SetGameObjectPosition
          (WwiseInteractiveAudioDriver *this,void *param_1,SexyVector2 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (void *)0x0) {
    local_20 = *(undefined4 *)param_2;
    local_1c = *(undefined4 *)(param_2 + 4);
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_18 = 0;
    FUN_054be3c8(param_1,&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WwiseInteractiveAudioDriver::SetListenerPosition(Sexy::SexyVector2 const&, int) */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::SetListenerPosition
          (WwiseInteractiveAudioDriver *this,SexyVector2 *param_1,int param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_18 = *(undefined4 *)param_1;
  local_14 = *(undefined4 *)(param_1 + 4);
  local_24 = 0;
  local_8 = ___stack_chk_guard;
  local_20 = 0;
  local_1c = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_10 = 0;
  FUN_054be76c(&local_30,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::WwiseInteractiveAudioDriver::CancelEventCallback(unsigned int) */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::CancelEventCallback
          (WwiseInteractiveAudioDriver *this,uint param_1)

{
  FUN_054c0c18(param_1);
  return;
}


/* Sexy::WwiseInteractiveAudioDriver::CancelEventCallbackByContext(void*) */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::CancelEventCallbackByContext
          (WwiseInteractiveAudioDriver *this,void *param_1)

{
  FUN_054c0c00(param_1);
  return;
}


/* Sexy::WwiseInteractiveAudioDriver::GotFocus() */

void __thiscall Sexy::WwiseInteractiveAudioDriver::GotFocus(WwiseInteractiveAudioDriver *this)

{
  if (this[0x18] == (WwiseInteractiveAudioDriver)0x0) {
    return;
  }
  FUN_054c4b5c();
  return;
}


/* Sexy::WwiseInteractiveAudioDriver::LostFocus() */

void __thiscall Sexy::WwiseInteractiveAudioDriver::LostFocus(WwiseInteractiveAudioDriver *this)

{
  if (this[0x18] == (WwiseInteractiveAudioDriver)0x0) {
    return;
  }
  FUN_054c4b08(0);
  return;
}


/* Sexy::WwiseInteractiveAudioDriver::TermInteractiveAudioDriver() */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::TermInteractiveAudioDriver(WwiseInteractiveAudioDriver *this)

{
  long *plVar1;
  
  this[0x18] = (WwiseInteractiveAudioDriver)0x0;
  FUN_0549b918();
  FUN_054bd57c();
  CAkDefaultIOHookBlocking::Term(*(CAkDefaultIOHookBlocking **)(this + 0x10));
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  plVar1 = (long *)AK::IAkStreamMgr::Get();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_0548b730();
  return;
}


/* Sexy::WwiseInteractiveAudioDriver::~WwiseInteractiveAudioDriver() */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::~WwiseInteractiveAudioDriver(WwiseInteractiveAudioDriver *this)

{
  *(undefined ***)this = &PTR__WwiseInteractiveAudioDriver_06a342b0;
  TermInteractiveAudioDriver(this);
  std::string::~string((string *)(this + 8));
  return;
}


/* Sexy::WwiseInteractiveAudioDriver::~WwiseInteractiveAudioDriver() */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::~WwiseInteractiveAudioDriver(WwiseInteractiveAudioDriver *this)

{
  ~WwiseInteractiveAudioDriver(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::WwiseInteractiveAudioDriver::WwiseInteractiveAudioDriver() */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::WwiseInteractiveAudioDriver(WwiseInteractiveAudioDriver *this)

{
  SexyIOHookBlocking *this_00;
  
  IInteractiveAudioDriver::IInteractiveAudioDriver((IInteractiveAudioDriver *)this);
  *(undefined ***)this = &PTR__WwiseInteractiveAudioDriver_06a342b0;
  Set8BytesTo0(this + 8);
  this[0x18] = (WwiseInteractiveAudioDriver)0x0;
  this_00 = ::operator_new(0x370);
  SexyIOHookBlocking::SexyIOHookBlocking(this_00);
  *(SexyIOHookBlocking **)(this + 0x10) = this_00;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WwiseInteractiveAudioDriver::InitInteractiveAudioDriver() */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::InitInteractiveAudioDriver(WwiseInteractiveAudioDriver *this)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 local_130 [2];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  string asStack_118 [8];
  AkDeviceSettings aAStack_110 [24];
  int local_f8;
  AkInitSettings aAStack_c8 [16];
  undefined4 local_b8;
  string asStack_78 [76];
  undefined4 local_2c;
  undefined4 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*gFileDriver + 0x38))(asStack_78,gFileDriver);
  FUN_05474278(this + 8,asStack_78);
  std::string::~string(asStack_78);
  AkInitSettings::AkInitSettings(aAStack_c8);
  local_130[0] = 0x14;
  FUN_0548fbc4(auStack_128);
  FUN_0548fbd0(aAStack_110);
  FUN_054bd508(aAStack_c8);
  local_b8 = 0x400000;
  thunk_FUN_055581bc(asStack_78);
  local_2c = 0x300000;
  Set8BytesTo0(asStack_118);
  Android::Diag::GetHardwareModel(asStack_118);
  pcVar2 = (char *)FUN_0547429c(asStack_118);
  iVar1 = strcasecmp(pcVar2,"Amazon Kindle Fire");
  local_28 = 24000;
  if (iVar1 != 0) {
    local_28 = 32000;
  }
  FUN_0549b70c(auStack_120);
  iVar1 = FUN_0548bcb0(local_130);
  if ((iVar1 == 1) && (lVar3 = FUN_0548fadc(auStack_128), lVar3 != 0)) {
    local_f8 = iVar1;
    iVar1 = CAkDefaultIOHookBlocking::Init
                      (*(CAkDefaultIOHookBlocking **)(this + 0x10),aAStack_110,false);
    if (iVar1 == 1) {
      pcVar2 = (char *)FUN_0547429c(this + 8);
      CAkFileLocationBase::SetBasePath
                ((CAkFileLocationBase *)(*(long *)(this + 0x10) + 0x10),pcVar2);
      iVar1 = FUN_054bda3c(aAStack_c8,asStack_78);
      if (iVar1 == 1) {
        iVar1 = FUN_0549b92c(auStack_120);
        if (iVar1 == 1) {
          thunk_FUN_054e5f7c(2,0,0x65,FUN_0558bb8c,FUN_0558bb28);
          thunk_FUN_054e6148(0,4,&LAB_05582ad0,&LAB_05581a40);
          FUN_054c4bc8(3,WWise_LocalOutputFunc);
          this[0x18] = (WwiseInteractiveAudioDriver)0x1;
          uVar4 = 1;
          goto LAB_052f0b80;
        }
      }
    }
  }
  uVar4 = 0;
LAB_052f0b80:
  std::string::~string(asStack_118);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* Sexy::WwiseInteractiveAudioDriver::GetIdFromString(char const*) const */

undefined8 __thiscall
Sexy::WwiseInteractiveAudioDriver::GetIdFromString(WwiseInteractiveAudioDriver *this,char *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (char *)0x0) {
    uVar1 = FUN_054bd428(param_1);
    return uVar1;
  }
  return 0;
}


/* Sexy::WwiseInteractiveAudioDriver::GetEventIdFromString(char const*) const */

undefined8 __thiscall
Sexy::WwiseInteractiveAudioDriver::GetEventIdFromString
          (WwiseInteractiveAudioDriver *this,char *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (char *)0x0) {
    uVar1 = FUN_054bd428(param_1);
    return uVar1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WwiseInteractiveAudioDriver::HACK_SetAndroidAssetInfo(std::string const&) */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::HACK_SetAndroidAssetInfo
          (WwiseInteractiveAudioDriver *this,string *param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  string asStack_20 [8];
  long local_18 [3];
  
  local_18[2] = ___stack_chk_guard;
  Set8BytesTo0(asStack_20);
  local_18[0] = 0;
  local_18[1] = 0;
  cVar1 = Android::Resources::GetAssetFileInfo(param_1,asStack_20,local_18,local_18 + 1);
  if (cVar1 != '\0') {
    thunk_FUN_05475e00(*(long *)(this + 0x10) + 0x330,asStack_20);
    lVar3 = *(long *)(this + 0x10);
    *(int *)(lVar3 + 0x32c) = (int)local_18[0];
    bVar2 = FUN_0547419c(asStack_20);
    *(byte *)(lVar3 + 0x338) = bVar2 ^ 1;
  }
  std::string::~string(asStack_20);
  if (local_18[2] == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::WwiseInteractiveAudioDriver::HACK_SetPvZStreamingFilePathMap(std::map<std::string,
   std::string, std::less<std::string >, std::allocator<std::pair<std::string const, std::string > >
   >) */

void __thiscall
Sexy::WwiseInteractiveAudioDriver::HACK_SetPvZStreamingFilePathMap
          (WwiseInteractiveAudioDriver *this,map *param_2)

{
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::operator=((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               *)(*(long *)(this + 0x10) + 0x340),param_2);
  return;
}

