// Class: Sexy::WwiseSoundBank


/* Sexy::WwiseSoundBank::GetBankName() */

undefined8 Sexy::WwiseSoundBank::GetBankName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* Sexy::WwiseSoundBank::IsValidBank() */

bool __thiscall Sexy::WwiseSoundBank::IsValidBank(WwiseSoundBank *this)

{
  return *(int *)(this + 0x20) != 0;
}


/* Sexy::WwiseSoundBank::SetBankError() */

void __thiscall Sexy::WwiseSoundBank::SetBankError(WwiseSoundBank *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x58))();
  if (cVar1 == '\0') {
    uVar2 = FUN_0547429c(this + 0x28);
    OutputDebugStrF((wchar_t *)
                    "Set Bank Error, SoundBank is not Valid mBankId=[%d], mMode=[%d], mBankName=[%s]\n"
                    ,(ulong)*(uint *)(this + 0x20),(ulong)*(uint *)(this + 0x30),uVar2);
    return;
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  uVar2 = FUN_0547429c(this + 0x28);
  OutputDebugStrF((wchar_t *)
                  "Set Bank Error, SoundBank is Valid mBankId=[%d], mMode=[%d], mBankName=[%s]\n",0,
                  0,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WwiseSoundBank::Load(char const*) */

void __thiscall Sexy::WwiseSoundBank::Load(WwiseSoundBank *this,char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  ResStreamsManager *pRVar5;
  uint local_20 [2];
  uchar *local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x30) != 0) {
    uVar2 = (**(code **)(*(long *)this + 0x58))();
    goto LAB_052f1870;
  }
  if (*(int *)(this + 0x20) == 0) {
    local_18 = (uchar *)0x0;
    pRVar5 = *(ResStreamsManager **)(gSexyAppBase + 0x908);
    if (pRVar5 == (ResStreamsManager *)0x0) {
LAB_052f18bc:
      local_18 = (uchar *)0x0;
LAB_052f18c0:
      iVar4 = FUN_054c1cb8(param_1,0xffffffff,this + 0x20);
      if (iVar4 == 1) {
LAB_052f18ec:
        std::string::string(asStack_10,param_1);
        FUN_05474278(this + 0x28,asStack_10);
        std::string::~string(asStack_10);
        nop();
        *(undefined4 *)(this + 0x30) = 1;
        *(uchar **)(this + 0x18) = local_18;
        goto LAB_052f185c;
      }
    }
    else {
      std::string::string(asStack_10,"dynamic.rsb");
      cVar1 = ResStreamsManager::IsInitialized(pRVar5,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (cVar1 != '\0') {
        pRVar5 = *(ResStreamsManager **)(gSexyAppBase + 0x908);
        std::string::string(asStack_10,param_1);
        uVar3 = ResStreamsManager::GetGroupForFile(pRVar5,asStack_10,true,true);
        std::string::~string(asStack_10);
        nop();
        if (uVar3 != 0xffffffff) {
          pRVar5 = *(ResStreamsManager **)(gSexyAppBase + 0x908);
          std::string::string(asStack_10,param_1);
          cVar1 = ResStreamsManager::GetResidentFileBuffer
                            (pRVar5,uVar3,asStack_10,&local_18,local_20);
          std::string::~string(asStack_10);
          nop();
          if ((cVar1 != '\0') && (local_20[0] == 0)) goto LAB_052f18bc;
        }
      }
      if (local_18 == (uchar *)0x0) goto LAB_052f18c0;
      iVar4 = FUN_054c1ecc(local_18,local_20[0],this + 0x20);
      if (iVar4 == 1) goto LAB_052f18ec;
      if (local_18 == (uchar *)0x0) goto LAB_052f18c0;
    }
    *(undefined4 *)(this + 0x20) = 0;
    OutputDebugStrF((wchar_t *)"Could not load SoundBank: %s.\n",param_1);
  }
LAB_052f185c:
  uVar2 = (**(code **)(*(long *)this + 0x58))(this);
LAB_052f1870:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WwiseSoundBank::Prepare(char const*) */

void __thiscall Sexy::WwiseSoundBank::Prepare(WwiseSoundBank *this,char *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x30) == 0) {
    iVar2 = FUN_054c2c04(0,param_1,0);
    if (iVar2 == 1) {
      *(undefined4 *)(this + 0x30) = 2;
      std::string::string(asStack_10,param_1);
      FUN_05474278(this + 0x28,asStack_10);
      std::string::~string(asStack_10);
      nop();
      uVar3 = FUN_054bd428(param_1);
      *(undefined4 *)(this + 0x20) = uVar3;
    }
    else {
      *(undefined4 *)(this + 0x20) = 0;
    }
    uVar1 = (**(code **)(*(long *)this + 0x58))(this);
  }
  else {
    uVar1 = (**(code **)(*(long *)this + 0x58))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::WwiseSoundBank::StaticGetClass() */

long * Sexy::WwiseSoundBank::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = SoundBank::StaticGetClass();
  (*pcVar3)(plVar1,"WwiseSoundBank",uVar2,StaticNew);
  return sClass;
}


/* Sexy::WwiseSoundBank::GetClass() const */

long * Sexy::WwiseSoundBank::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = SoundBank::StaticGetClass();
  (*pcVar3)(plVar1,"WwiseSoundBank",uVar2,StaticNew);
  return sClass;
}


/* Sexy::WwiseSoundBank::WwiseSoundBank() */

void __thiscall Sexy::WwiseSoundBank::WwiseSoundBank(WwiseSoundBank *this)

{
  SoundBank::SoundBank((SoundBank *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetClass_06a34510;
  Set8BytesTo0(this + 0x28);
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* Sexy::WwiseSoundBank::StaticNew() */

WwiseSoundBank * Sexy::WwiseSoundBank::StaticNew(void)

{
  WwiseSoundBank *this;
  
  this = ::operator_new(0x38);
  WwiseSoundBank(this);
  return this;
}


/* Sexy::WwiseSoundBank::destroy() */

void __thiscall Sexy::WwiseSoundBank::destroy(WwiseSoundBank *this)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 0x20) != 0) {
    if (*(int *)(this + 0x30) == 1) {
      if (*(long *)(this + 0x18) != 0) {
        FUN_054c299c(*(int *)(this + 0x20),*(long *)(this + 0x18),0);
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined4 *)(this + 0x20) = 0;
        return;
      }
    }
    else if (*(int *)(this + 0x30) == 2) {
      uVar1 = FUN_0547429c(this + 0x28);
      FUN_054c2c04(1,uVar1,0);
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined4 *)(this + 0x20) = 0;
      return;
    }
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* Sexy::WwiseSoundBank::~WwiseSoundBank() */

void __thiscall Sexy::WwiseSoundBank::~WwiseSoundBank(WwiseSoundBank *this)

{
  *(undefined ***)this = &PTR_GetClass_06a34510;
  destroy(this);
  std::string::~string((string *)(this + 0x28));
  SoundBank::~SoundBank((SoundBank *)this);
  return;
}


/* Sexy::WwiseSoundBank::~WwiseSoundBank() */

void __thiscall Sexy::WwiseSoundBank::~WwiseSoundBank(WwiseSoundBank *this)

{
  ~WwiseSoundBank(this);
  AK::FreeHook(this);
  return;
}

