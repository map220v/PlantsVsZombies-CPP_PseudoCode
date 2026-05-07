// Class: CAkFileLocationBase


/* CAkFileLocationBase::CAkFileLocationBase() */

void __thiscall CAkFileLocationBase::CAkFileLocationBase(CAkFileLocationBase *this)

{
  this[8] = (CAkFileLocationBase)0x0;
  this[0x10c] = (CAkFileLocationBase)0x0;
  *(undefined ***)this = &PTR_nop_06a34750;
  this[0x210] = (CAkFileLocationBase)0x0;
  return;
}


/* CAkFileLocationBase::GetFullFilePath(char const*, AkFileSystemFlags*, AkOpenMode, char*) */

undefined8 __thiscall
CAkFileLocationBase::GetFullFilePath
          (CAkFileLocationBase *this,char *param_1,long *param_2,int param_4,char *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  char *__s;
  size_t sVar3;
  
  if (param_1 == (char *)0x0) {
    return 0x1f;
  }
  uVar1 = strlen(param_1);
  uVar2 = 0x1f;
  if (uVar1 < 0x104) {
    FUN_052f2494(param_5,this + 8,0x104);
    if ((param_2 != (long *)0x0) && (param_4 == 0)) {
      if (*param_2 == 0) {
        sVar3 = strlen((char *)(this + 0x10c));
        uVar1 = uVar1 + sVar3;
        if (0x103 < uVar1) {
          return 2;
        }
        FUN_052f24e0(param_5,this + 0x10c,0x104);
      }
      if ((char)param_2[3] != '\0') {
        __s = (char *)FUN_0548fe04();
        sVar3 = strlen(__s);
        if (sVar3 != 0) {
          uVar1 = uVar1 + 1 + sVar3;
          if (0x103 < uVar1) {
            return 2;
          }
          uVar2 = FUN_0548fe04();
          FUN_052f24e0(param_5,uVar2,0x104);
          FUN_052f24e0(param_5,&DAT_055a4690,0x104);
        }
      }
    }
    sVar3 = strlen(param_5);
    if (0x103 < sVar3 + uVar1) {
      return 2;
    }
    FUN_052f24e0(param_5,param_1,0x104);
    uVar2 = 1;
  }
  return uVar2;
}


/* CAkFileLocationBase::GetFullFilePath(unsigned int, AkFileSystemFlags*, AkOpenMode, char*) */

undefined8 __thiscall
CAkFileLocationBase::GetFullFilePath
          (CAkFileLocationBase *this,uint param_1,uint *param_2,undefined8 param_4,long param_5)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((param_2 != (uint *)0x0) && (*param_2 < 2)) {
    sVar1 = strlen((char *)(this + 8));
    FUN_052f2494(param_5,this + 8,0x104);
    if (param_2[1] == 0) {
      this = this + 0x10c;
    }
    else {
      this = this + 0x210;
    }
    sVar2 = strlen((char *)this);
    uVar4 = sVar2 + sVar1;
    if (uVar4 < 0x104) {
      FUN_052f24e0(param_5,this,0x104);
      if ((char)param_2[6] != '\0') {
        __s = (char *)FUN_0548fe04();
        sVar1 = strlen(__s);
        if (sVar1 != 0) {
          uVar4 = uVar4 + 1 + sVar1;
          if (0x103 < uVar4) {
            return 2;
          }
          uVar3 = FUN_0548fe04();
          FUN_052f24e0(param_5,uVar3,0x104);
          FUN_052f24e0(param_5,&DAT_055a4690,0x104);
        }
      }
      if (uVar4 + 0xf < 0x105) {
        if (param_2[1] == 0) {
          snprintf((char *)(param_5 + uVar4),0xf,"%u.bnk",(ulong)param_1);
          return 1;
        }
        snprintf((char *)(param_5 + uVar4),0xf,"%u.wem",(ulong)param_1);
        return 1;
      }
    }
  }
  return 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAkFileLocationBase::SetBasePath(char const*) */

void __thiscall CAkFileLocationBase::SetBasePath(CAkFileLocationBase *this,char *param_1)

{
  size_t sVar1;
  ulong *puVar2;
  char *__s;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  size_t local_18;
  size_t local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  sVar1 = strlen(param_1);
  local_18 = strlen((char *)(this + 0x10c));
  local_10 = strlen((char *)(this + 0x210));
  puVar2 = eastl::max_alt<unsigned_long>(&local_18,&local_10);
  uVar5 = *puVar2;
  __s = (char *)FUN_0548fe04();
  sVar3 = strlen(__s);
  uVar4 = 0x1f;
  if (sVar1 + sVar3 + 1 + uVar5 < 0x104) {
    FUN_052f2494(this + 8,param_1,0x104);
    uVar4 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAkFileLocationBase::SetBankPath(char const*) */

void __thiscall CAkFileLocationBase::SetBankPath(CAkFileLocationBase *this,char *param_1)

{
  size_t sVar1;
  ulong *puVar2;
  char *__s;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  size_t local_18;
  size_t local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  sVar1 = strlen((char *)(this + 8));
  local_18 = strlen(param_1);
  local_10 = strlen((char *)(this + 0x210));
  puVar2 = eastl::max_alt<unsigned_long>(&local_18,&local_10);
  uVar5 = *puVar2;
  __s = (char *)FUN_0548fe04();
  sVar3 = strlen(__s);
  uVar4 = 0x1f;
  if (sVar1 + sVar3 + 1 + uVar5 < 0x104) {
    FUN_052f2494(this + 0x10c,param_1,0x104);
    uVar4 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAkFileLocationBase::SetAudioSrcPath(char const*) */

void __thiscall CAkFileLocationBase::SetAudioSrcPath(CAkFileLocationBase *this,char *param_1)

{
  size_t sVar1;
  ulong *puVar2;
  char *__s;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  size_t local_18;
  size_t local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  sVar1 = strlen((char *)(this + 8));
  local_18 = strlen((char *)(this + 0x10c));
  local_10 = strlen(param_1);
  puVar2 = eastl::max_alt<unsigned_long>(&local_18,&local_10);
  uVar5 = *puVar2;
  __s = (char *)FUN_0548fe04();
  sVar3 = strlen(__s);
  uVar4 = 0x1f;
  if (sVar1 + sVar3 + 1 + uVar5 < 0x104) {
    FUN_052f2494(this + 0x210,param_1,0x104);
    uVar4 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

