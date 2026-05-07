// Class: PakInterface


/* PakInterface::GetFileSearchOrder() */

undefined4 __thiscall PakInterface::GetFileSearchOrder(PakInterface *this)

{
  return *(undefined4 *)(this + 0x48);
}


/* PakInterface::SetPassCode(unsigned char) */

void __thiscall PakInterface::SetPassCode(PakInterface *this,uchar param_1)

{
  this[0x4c] = (PakInterface)param_1;
  return;
}


/* PakInterface::FTell(PFILE*) */

undefined4 __thiscall PakInterface::FTell(PakInterface *this,PFILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}


/* PakInterface::FGetC(PFILE*) */

uint __thiscall PakInterface::FGetC(PakInterface *this,PFILE *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = *(long **)param_1;
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  iVar1 = *(int *)((long)plVar8 + 0x1c);
  lVar7 = (long)*(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 8);
  do {
    if (iVar1 <= iVar5) {
      return 0xffffffff;
    }
    lVar4 = plVar8[3];
    lVar6 = *(long *)(*plVar8 + 8);
    *(int *)(param_1 + 8) = iVar5 + 1;
    lVar6 = lVar6 + lVar7;
    lVar7 = lVar7 + 1;
    bVar2 = *(byte *)(lVar6 + (int)lVar4);
    bVar3 = bVar2;
    if ((this[0x4c] != (PakInterface)0x0) &&
       (bVar3 = bVar2 ^ (byte)this[0x4c], this[0x4d] == (PakInterface)0x0)) {
      bVar3 = bVar2;
    }
    iVar5 = iVar5 + 1;
  } while (bVar3 == 0xd);
  return (uint)bVar3;
}


/* PakInterface::FGetS(char*, int, PFILE*) */

char * __thiscall PakInterface::FGetS(PakInterface *this,char *param_1,int param_2,PFILE *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  plVar5 = *(long **)param_3;
  if (plVar5 != (long *)0x0) {
    if (param_2 < 1) {
      lVar6 = 0;
LAB_052c8740:
      param_1[lVar6] = '\0';
      return param_1;
    }
    iVar7 = *(int *)(param_3 + 8);
    if (iVar7 < *(int *)((long)plVar5 + 0x1c)) {
      lVar6 = 0;
      do {
        lVar4 = plVar5[3];
        iVar1 = (int)lVar6 + 1;
        lVar8 = *(long *)(*plVar5 + 8);
        *(int *)(param_3 + 8) = iVar7 + 1;
        bVar2 = *(byte *)(lVar8 + (int)lVar4 + (long)iVar7);
        bVar3 = bVar2;
        if ((this[0x4c] != (PakInterface)0x0) &&
           (bVar3 = bVar2 ^ (byte)this[0x4c], this[0x4d] == (PakInterface)0x0)) {
          bVar3 = bVar2;
        }
        if (bVar3 != 0xd) {
          param_1[(int)lVar6] = bVar3;
          lVar6 = (long)iVar1;
          if (bVar3 == 10) {
            param_1[iVar1] = '\0';
            return param_1;
          }
        }
        if (param_2 <= (int)lVar6) goto LAB_052c8740;
        plVar5 = *(long **)param_3;
        iVar7 = *(int *)(param_3 + 8);
      } while (iVar7 < *(int *)((long)plVar5 + 0x1c));
      if ((int)lVar6 != 0) goto LAB_052c8740;
    }
  }
  return (char *)0x0;
}


/* PakInterface::FEof(PFILE*) */

bool __thiscall PakInterface::FEof(PakInterface *this,PFILE *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(long *)param_1 != 0) {
    bVar1 = *(int *)(*(long *)param_1 + 0x1c) <= *(int *)(param_1 + 8);
  }
  return bVar1;
}


/* PakInterface::FindClose(Sexy::IFileSearch*) */

undefined8 __thiscall PakInterface::FindClose(PakInterface *this,IFileSearch *param_1)

{
  if (param_1 != (IFileSearch *)0x0) {
    (**(code **)(*(long *)param_1 + 8))(param_1);
  }
  return 1;
}


/* PakInterface::FClose(PFILE*) */

undefined8 __thiscall PakInterface::FClose(PakInterface *this,PFILE *param_1)

{
  AK::FreeHook(param_1);
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::PreparePakFile(std::string const&, PakFileDesc&) */

void __thiscall
PakInterface::PreparePakFile(PakInterface *this,string *param_1,PakFileDesc *param_2)

{
  string *psVar1;
  char *pcVar2;
  long lVar3;
  code *pcVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::SexyAppBase::InitFileDriver();
  psVar1 = Sexy::gFileDriver;
  if (this[0x4d] == (PakInterface)0x0) {
    pcVar4 = *(code **)(*(long *)Sexy::gFileDriver + 0x88);
    pcVar2 = (char *)FUN_0547429c(param_1);
    std::string::string(asStack_10,pcVar2);
  }
  else {
    pcVar4 = *(code **)(*(long *)Sexy::gFileDriver + 0xc0);
    pcVar2 = (char *)FUN_0547429c(param_1);
    std::string::string(asStack_10,pcVar2);
    if (pcVar4 == Sexy::IFileDriver::CreateFileMemoryMapped) {
      lVar3 = Sexy::IFileDriver::CreateFileMemoryMapped(psVar1);
      std::string::~string(asStack_10);
      nop();
      goto joined_r0x052c8e1c;
    }
  }
  lVar3 = (*pcVar4)(psVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
joined_r0x052c8e1c:
  if (lVar3 != 0) {
    thunk_FUN_05475e00(param_2,param_1);
    *(long *)(param_2 + 0x18) = lVar3;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 != 0);
}


/* PakInterface::IsPakFileLoaded(PakFileDesc&) */

undefined1 __thiscall PakInterface::IsPakFileLoaded(PakInterface *this,PakFileDesc *param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  }
  return uVar1;
}


/* PakInterface::HasPakFileFailed(PakFileDesc&) */

undefined1 __thiscall PakInterface::HasPakFileFailed(PakInterface *this,PakFileDesc *param_1)

{
  undefined1 uVar1;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    return uVar1;
  }
  return 1;
}


/* PakInterface::ClosePakFile(PakFileDesc&) */

bool __thiscall PakInterface::ClosePakFile(PakInterface *this,PakFileDesc *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
  }
  return plVar1 != (long *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::GetFileTime_File(unsigned long&, char const*) */

void PakInterface::GetFileTime_File(ulong *param_1,char *param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  plVar1 = Sexy::gFileDriver;
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*Sexy::gFileDriver + 0xf0);
  std::string::string(asStack_10,param_2);
  uVar2 = (*pcVar3)(plVar1,asStack_10);
  *param_1 = uVar2;
  std::string::~string(asStack_10);
  nop();
  uVar2 = *param_1;
  if (uVar2 == 0) {
    (**(code **)(*Sexy::gFileDriver + 0x38))(asStack_10,Sexy::gFileDriver);
    std::operator+(asStack_10,param_2);
    std::string::~string(asStack_10);
    uVar2 = (**(code **)(*Sexy::gFileDriver + 0xf0))(Sexy::gFileDriver,asStack_18);
    *param_1 = uVar2;
    std::string::~string(asStack_18);
    uVar2 = *param_1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::FOpen_File(char const*, char const*) */

void PakInterface::FOpen_File(char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  plVar3 = Sexy::gFileDriver;
  local_8 = ___stack_chk_guard;
  pcVar7 = *(code **)(*Sexy::gFileDriver + 0x88);
  std::string::string(asStack_10,param_1);
  plVar3 = (long *)(*pcVar7)(plVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar3 == (long *)0x0) {
    (**(code **)(*Sexy::gFileDriver + 0x38))(asStack_10,Sexy::gFileDriver);
    std::operator+(asStack_10,param_1);
    std::string::~string(asStack_10);
    plVar3 = (long *)(**(code **)(*Sexy::gFileDriver + 0x88))(Sexy::gFileDriver,asStack_18);
    std::string::~string(asStack_18);
    puVar4 = (undefined8 *)0x0;
    if (plVar3 == (long *)0x0) goto LAB_052c9308;
  }
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    (**(code **)(*plVar3 + 0x40))(plVar3);
    (**(code **)(*plVar3 + 8))(plVar3);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x40))(plVar3);
    puVar4 = ::operator_new(0x30);
    lVar6 = *plVar3;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = plVar3;
    *(undefined4 *)(puVar4 + 1) = 0;
    pcVar7 = *(code **)(lVar6 + 0x38);
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)((long)puVar4 + 0x24) = 0;
    *(undefined1 *)(puVar4 + 5) = 0;
    uVar2 = (*pcVar7)(plVar3);
    lVar6 = *plVar3;
    *(undefined4 *)(puVar4 + 4) = uVar2;
    uVar5 = (**(code **)(lVar6 + 0x30))(plVar3);
    *(undefined1 *)(puVar4 + 5) = 0;
    puVar4[3] = uVar5;
  }
LAB_052c9308:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar4);
  }
  return;
}


/* PakInterface::FGetBuffer_File(char const*, unsigned char**, unsigned int*, PFILE**) */

undefined8
PakInterface::FGetBuffer_File(char *param_1,uchar **param_2,uint *param_3,PFILE **param_4)

{
  PFILE *pPVar1;
  undefined8 uVar2;
  
  pPVar1 = (PFILE *)FUN_052c9400();
  uVar2 = 0;
  if (pPVar1 != (PFILE *)0x0) {
    if ((param_2 != (uchar **)0x0) && (param_3 != (uint *)0x0)) {
      *param_2 = *(uchar **)(pPVar1 + 0x18);
      *param_3 = *(uint *)(pPVar1 + 0x20);
    }
    if (param_4 == (PFILE **)0x0) {
      uVar2 = 1;
    }
    else {
      *param_4 = pPVar1;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::FOpen_File(wchar_t const*, wchar_t const*) */

void PakInterface::FOpen_File(wchar_t *param_1,wchar_t *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  string *extraout_x1;
  code *pcVar7;
  undefined1 auStack_20 [8];
  Sexy aSStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  plVar3 = Sexy::gFileDriver;
  local_8 = ___stack_chk_guard;
  pcVar7 = *(code **)(*Sexy::gFileDriver + 0x90);
  FUN_05478178(awStack_10,param_1,aSStack_18);
  plVar3 = (long *)(*pcVar7)(plVar3,awStack_10);
  FUN_05476c50(awStack_10);
  nop();
  if (plVar3 == (long *)0x0) {
    (**(code **)(*Sexy::gFileDriver + 0x38))(aSStack_18,Sexy::gFileDriver);
    Sexy::StringToWString(aSStack_18,extraout_x1);
    std::operator+(awStack_10,param_1);
    FUN_05476c50(awStack_10);
    std::string::~string((string *)aSStack_18);
    plVar3 = (long *)(**(code **)(*Sexy::gFileDriver + 0x90))(Sexy::gFileDriver,auStack_20);
    FUN_05476c50(auStack_20);
    puVar4 = (undefined8 *)0x0;
    if (plVar3 == (long *)0x0) goto LAB_052c957c;
  }
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    (**(code **)(*plVar3 + 0x40))(plVar3);
    (**(code **)(*plVar3 + 8))(plVar3);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x40))(plVar3);
    puVar4 = ::operator_new(0x30);
    lVar6 = *plVar3;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = plVar3;
    *(undefined4 *)(puVar4 + 1) = 0;
    pcVar7 = *(code **)(lVar6 + 0x38);
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)((long)puVar4 + 0x24) = 0;
    *(undefined1 *)(puVar4 + 5) = 0;
    uVar2 = (*pcVar7)(plVar3);
    lVar6 = *plVar3;
    *(undefined4 *)(puVar4 + 4) = uVar2;
    uVar5 = (**(code **)(lVar6 + 0x30))(plVar3);
    *(undefined1 *)(puVar4 + 5) = 0;
    puVar4[3] = uVar5;
  }
LAB_052c957c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::FRead(void*, int, int, PFILE*) */

void __thiscall
PakInterface::FRead(PakInterface *this,void *param_1,int param_2,int param_3,PFILE *param_4)

{
  void *__src;
  int iVar1;
  PakInterface PVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int local_10;
  int local_c;
  long local_8;
  
  plVar6 = *(long **)param_4;
  local_8 = ___stack_chk_guard;
  if (plVar6 == (long *)0x0) {
    lVar5 = 0;
    goto LAB_052c9758;
  }
  iVar7 = *(int *)(param_4 + 8);
  local_10 = param_2 * param_3;
  local_c = *(int *)((long)plVar6 + 0x1c) - iVar7;
  piVar4 = eastl::min_alt<int>(&local_10,&local_c);
  PVar2 = this[0x4c];
  iVar1 = *piVar4;
  __src = (void *)(*(long *)(*plVar6 + 8) + (long)(int)plVar6[3] + (long)iVar7);
  if ((PVar2 == (PakInterface)0x0) || (this[0x4d] == (PakInterface)0x0)) {
    memcpy(param_1,__src,(long)iVar1);
LAB_052c9744:
    iVar7 = *(int *)(param_4 + 8);
  }
  else if (0 < iVar1) {
    lVar5 = 0;
    while( true ) {
      *(byte *)((long)param_1 + lVar5) = (byte)PVar2 ^ *(byte *)((long)__src + lVar5);
      lVar5 = lVar5 + 1;
      if (iVar1 <= (int)lVar5) break;
      PVar2 = this[0x4c];
    }
    goto LAB_052c9744;
  }
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = iVar1 / param_2;
  }
  *(int *)(param_4 + 8) = iVar1 + iVar7;
  lVar5 = (long)iVar3;
LAB_052c9758:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::DecryptFRead(void*, int, int, PFILE*) */

void __thiscall
PakInterface::DecryptFRead(PakInterface *this,void *param_1,int param_2,int param_3,PFILE *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  PakInterface PVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int local_10;
  int local_c;
  long local_8;
  
  plVar14 = *(long **)param_4;
  local_8 = ___stack_chk_guard;
  if (plVar14 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    iVar13 = *(int *)(param_4 + 8);
    local_10 = param_2 * param_3;
    local_c = *(int *)((long)plVar14 + 0x1c) - iVar13;
    puVar7 = (uint *)eastl::min_alt<int>(&local_10,&local_c);
    uVar3 = *puVar7;
    lVar9 = (long)(int)plVar14[3] + (long)iVar13;
    puVar2 = (undefined8 *)(*(long *)(*plVar14 + 8) + lVar9);
    if (0 < (int)uVar3) {
      if ((uVar3 < 0x10 ||
           puVar2 < (undefined8 *)((long)param_1 + 0x10U) &&
           param_1 < (void *)(*(long *)(*plVar14 + 8) + lVar9 + 0x10)) ||
         (this + 0x4c < (PakInterface *)((long)param_1 + (long)(int)uVar3) && param_1 < this + 0x4d)
         ) {
        lVar9 = 0;
        do {
          *(byte *)((long)param_1 + lVar9) = *(byte *)((long)puVar2 + lVar9) ^ (byte)this[0x4c];
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)uVar3);
        iVar13 = *(int *)(param_4 + 8);
      }
      else {
        PVar4 = this[0x4c];
        uVar1 = (uVar3 - 0x10 >> 4) + 1;
        uVar10 = 0;
        uVar5 = uVar1 * 0x10;
        puVar11 = param_1;
        puVar12 = puVar2;
        do {
          uVar16 = puVar12[1];
          uVar15 = *puVar12;
          uVar10 = uVar10 + 1;
          puVar11[1] = CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)PVar4,
                                CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ (byte)PVar4,
                                         CONCAT15((byte)((ulong)uVar16 >> 0x28) ^ (byte)PVar4,
                                                  CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                           (byte)PVar4,
                                                           CONCAT13((byte)((ulong)uVar16 >> 0x18) ^
                                                                    (byte)PVar4,
                                                                    CONCAT12((byte)((ulong)uVar16 >>
                                                                                   0x10) ^
                                                                             (byte)PVar4,
                                                                             CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) ^ (byte)PVar4,
                                                  (byte)uVar16 ^ (byte)PVar4)))))));
          *puVar11 = CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)PVar4,
                              CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)PVar4,
                                       CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)PVar4,
                                                CONCAT14((byte)((ulong)uVar15 >> 0x20) ^ (byte)PVar4
                                                         ,CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                                   (byte)PVar4,
                                                                   CONCAT12((byte)((ulong)uVar15 >>
                                                                                  0x10) ^
                                                                            (byte)PVar4,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar15 >> 8) ^ (byte)PVar4,
                                                  (byte)uVar15 ^ (byte)PVar4)))))));
          puVar11 = puVar11 + 2;
          puVar12 = puVar12 + 2;
        } while (uVar10 < uVar1);
        uVar8 = (ulong)uVar5;
        if (((((uVar3 != uVar5) &&
              (*(byte *)((long)param_1 + uVar8) = *(byte *)((long)puVar2 + uVar8) ^ (byte)this[0x4c]
              , (int)(uVar5 + 1) < (int)uVar3)) &&
             (*(byte *)((long)param_1 + uVar8 + 1) =
                   *(byte *)((long)puVar2 + uVar8 + 1) ^ (byte)this[0x4c],
             (int)(uVar5 + 2) < (int)uVar3)) &&
            (((*(byte *)((long)param_1 + uVar8 + 2) =
                    *(byte *)((long)puVar2 + uVar8 + 2) ^ (byte)this[0x4c],
              (int)(uVar5 + 3) < (int)uVar3 &&
              (*(byte *)((long)param_1 + uVar8 + 3) =
                    *(byte *)((long)puVar2 + uVar8 + 3) ^ (byte)this[0x4c],
              (int)(uVar5 + 4) < (int)uVar3)) &&
             ((*(byte *)((long)param_1 + uVar8 + 4) =
                    *(byte *)((long)puVar2 + uVar8 + 4) ^ (byte)this[0x4c],
              (int)(uVar5 + 5) < (int)uVar3 &&
              ((*(byte *)((long)param_1 + uVar8 + 5) =
                     *(byte *)((long)puVar2 + uVar8 + 5) ^ (byte)this[0x4c],
               (int)(uVar5 + 6) < (int)uVar3 &&
               (*(byte *)((long)param_1 + uVar8 + 6) =
                     *(byte *)((long)puVar2 + uVar8 + 6) ^ (byte)this[0x4c],
               (int)(uVar5 + 7) < (int)uVar3)))))))) &&
           ((*(byte *)((long)param_1 + uVar8 + 7) =
                  *(byte *)((long)puVar2 + uVar8 + 7) ^ (byte)this[0x4c],
            (int)(uVar5 + 8) < (int)uVar3 &&
            (((((*(byte *)((long)param_1 + uVar8 + 8) =
                      *(byte *)((long)puVar2 + uVar8 + 8) ^ (byte)this[0x4c],
                (int)(uVar5 + 9) < (int)uVar3 &&
                (*(byte *)((long)param_1 + uVar8 + 9) =
                      *(byte *)((long)puVar2 + uVar8 + 9) ^ (byte)this[0x4c],
                (int)(uVar5 + 10) < (int)uVar3)) &&
               (*(byte *)((long)param_1 + uVar8 + 10) =
                     *(byte *)((long)puVar2 + uVar8 + 10) ^ (byte)this[0x4c],
               (int)(uVar5 + 0xb) < (int)uVar3)) &&
              ((*(byte *)((long)param_1 + uVar8 + 0xb) =
                     *(byte *)((long)puVar2 + uVar8 + 0xb) ^ (byte)this[0x4c],
               (int)(uVar5 + 0xc) < (int)uVar3 &&
               (*(byte *)((long)param_1 + uVar8 + 0xc) =
                     *(byte *)((long)puVar2 + uVar8 + 0xc) ^ (byte)this[0x4c],
               (int)(uVar5 + 0xd) < (int)uVar3)))) &&
             (*(byte *)((long)param_1 + uVar8 + 0xd) =
                   *(byte *)((long)puVar2 + uVar8 + 0xd) ^ (byte)this[0x4c],
             (int)(uVar5 + 0xe) < (int)uVar3)))))) {
          *(byte *)((long)param_1 + uVar8 + 0xe) =
               *(byte *)((long)puVar2 + uVar8 + 0xe) ^ (byte)this[0x4c];
        }
        iVar13 = *(int *)(param_4 + 8);
      }
    }
    iVar6 = 0;
    if (param_2 != 0) {
      iVar6 = (int)uVar3 / param_2;
    }
    *(uint *)(param_4 + 8) = uVar3 + iVar13;
    lVar9 = (long)iVar6;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::FSeek(PFILE*, long, int) */

void __thiscall PakInterface::FSeek(PakInterface *this,PFILE *param_1,long param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int local_c;
  long local_8;
  
  iVar4 = (int)param_2;
  lVar3 = *(long *)param_1;
  local_8 = ___stack_chk_guard;
  if (lVar3 == 0) {
    uVar2 = 0xffffffff;
    goto LAB_052c9b28;
  }
  if (param_3 == 0) {
LAB_052c9b00:
    *(int *)(param_1 + 8) = iVar4;
  }
  else if (param_3 == 2) {
    *(int *)(param_1 + 8) = *(int *)(lVar3 + 0x1c) - iVar4;
  }
  else if (param_3 == 1) {
    iVar4 = *(int *)(param_1 + 8) + iVar4;
    goto LAB_052c9b00;
  }
  piVar1 = eastl::min_alt<int>((int *)(param_1 + 8),(int *)(lVar3 + 0x1c));
  local_c = 0;
  piVar1 = eastl::max_alt<int>(piVar1,&local_c);
  *(int *)(param_1 + 8) = *piVar1;
  uVar2 = 0;
LAB_052c9b28:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::UnGetC(int, PFILE*) */

void __thiscall PakInterface::UnGetC(PakInterface *this,int param_1,PFILE *param_2)

{
  int iVar1;
  int *piVar2;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = 0;
  if (*(long *)param_2 != 0) {
    local_10[0] = *(int *)(param_2 + 8) + -1;
    local_10[1] = 0;
    piVar2 = eastl::max_alt<int>(local_10,local_10 + 1);
    *(int *)(param_2 + 8) = *piVar2;
    iVar1 = param_1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* PakInterface::PakInterface() */

void __thiscall PakInterface::PakInterface(PakInterface *this)

{
  PakInterface PVar1;
  
  PakInterfaceBase::PakInterfaceBase((PakInterfaceBase *)this);
  *(undefined ***)this = &PTR__PakInterface_06a32800;
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x18));
  Sexy::SexyAppBase::InitFileDriver();
  if (*(code **)(*Sexy::gFileDriver + 0xb8) == Sexy::IFileDriver::SupportsMemoryMappedFiles) {
    PVar1 = (PakInterface)Sexy::IFileDriver::SupportsMemoryMappedFiles();
    *(undefined4 *)(this + 0x48) = 0;
    this[0x4d] = PVar1;
    this[0x4c] = (PakInterface)0xf7;
    return;
  }
  PVar1 = (PakInterface)(**(code **)(*Sexy::gFileDriver + 0xb8))();
  *(undefined4 *)(this + 0x48) = 0;
  this[0x4d] = PVar1;
  this[0x4c] = (PakInterface)0xf7;
  return;
}


/* PakInterface::~PakInterface() */

void __thiscall PakInterface::~PakInterface(PakInterface *this)

{
  *(undefined ***)this = &PTR__PakInterface_06a32800;
  std::
  map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
  ::~map((map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
          *)(this + 0x18));
  std::list<PakCollection,std::allocator<PakCollection>>::~list
            ((list<PakCollection,std::allocator<PakCollection>> *)(this + 8));
  return;
}


/* PakInterface::~PakInterface() */

void __thiscall PakInterface::~PakInterface(PakInterface *this)

{
  ~PakInterface(this);
  AK::FreeHook(this);
  return;
}


/* PakInterface::Cleanup() */

void __thiscall PakInterface::Cleanup(PakInterface *this)

{
  list<PakCollection,std::allocator<PakCollection>> *this_00;
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  this_00 = (list<PakCollection,std::allocator<PakCollection>> *)(this + 8);
  while (lVar2 = std::list<PakCollection,std::allocator<PakCollection>>::size(this_00), lVar2 != 0)
  {
    plVar1 = (long *)std::list<PakCollection,std::allocator<PakCollection>>::front(this_00);
    plVar3 = (long *)*plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      *plVar1 = 0;
    }
    std::list<PakCollection,std::allocator<PakCollection>>::pop_front(this_00);
  }
  std::
  map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
  ::clear((map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
           *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::GetFileTime_Pak(unsigned long&, char const*) */

void __thiscall PakInterface::GetFileTime_Pak(PakInterface *this,ulong *param_1,char *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 local_118;
  undefined8 local_110;
  char acStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_1 = 0;
  FUN_052c8954(param_2,acStack_108);
  std::string::string((string *)&local_110,acStack_108);
  local_118 = std::
              map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
              ::find((map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
                      *)(this + 0x18),(string *)&local_110);
  std::string::~string((string *)&local_110);
  nop();
  local_110 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)(this + 0x18));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)&local_110);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
    *param_1 = *(ulong *)(lVar2 + 0x18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PakInterface::GetFileTime(unsigned long&, char const*, int) */

undefined8 __thiscall
PakInterface::GetFileTime(PakInterface *this,ulong *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_3 == -1) {
    param_3 = *(int *)(this + 0x48);
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      cVar1 = GetFileTime_File(param_1,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    else if (param_3 != 2) goto LAB_052ca7e4;
    uVar2 = GetFileTime_Pak(this,param_1,param_2);
    return uVar2;
  }
  cVar1 = GetFileTime_Pak(this,param_1,param_2);
  if (cVar1 != '\0') {
    return 1;
  }
LAB_052ca7e4:
  uVar2 = GetFileTime_File(param_1,param_2);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::FOpen_Pak(char const*, char const*) */

void __thiscall PakInterface::FOpen_Pak(PakInterface *this,char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_218;
  undefined8 local_210;
  char acStack_208 [512];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = strcasecmp(param_2,"r");
  if (((iVar2 == 0) || (iVar2 = strcasecmp(param_2,"rb"), iVar2 == 0)) ||
     (iVar2 = strcasecmp(param_2,"rt"), iVar2 == 0)) {
    FUN_052c8954(param_1,acStack_208);
    std::string::string((string *)&local_210,acStack_208);
    local_218 = std::
                map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
                ::find((map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
                        *)(this + 0x18),(string *)&local_210);
    std::string::~string((string *)&local_210);
    nop();
    local_210 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)(this + 0x18));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_218,(rbtree_iterator *)&local_210);
    if (bVar1) {
      plVar3 = ::operator_new(0x30);
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_218);
      *plVar3 = lVar4 + 8;
      *(undefined4 *)(plVar3 + 1) = 0;
      iVar2 = *(int *)(lVar4 + 0x20);
      lVar4 = *(long *)(*(long *)(lVar4 + 8) + 8);
      plVar3[2] = 0;
      *(undefined1 *)(plVar3 + 5) = 0;
      plVar3[3] = lVar4 + iVar2;
      goto LAB_052ca970;
    }
  }
  plVar3 = (long *)0x0;
LAB_052ca970:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar3);
}


/* PakInterface::FOpen(char const*, char const*, int) */

void __thiscall PakInterface::FOpen(PakInterface *this,char *param_1,char *param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == -1) {
    param_3 = *(int *)(this + 0x48);
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      lVar1 = FOpen_File(param_1,param_2);
      if (lVar1 != 0) {
        return;
      }
    }
    else if (param_3 != 2) goto LAB_052ca9f4;
    FOpen_Pak(this,param_1,param_2);
    return;
  }
  lVar1 = FOpen_Pak(this,param_1,param_2);
  if (lVar1 != 0) {
    return;
  }
LAB_052ca9f4:
  FOpen_File(param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::FGetBuffer_Pak(char const*, unsigned char**, unsigned int*, PFILE**) */

void __thiscall
PakInterface::FGetBuffer_Pak
          (PakInterface *this,char *param_1,uchar **param_2,uint *param_3,PFILE **param_4)

{
  PakInterface PVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  PFILE *pPVar5;
  void *pvVar6;
  uchar *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 local_118;
  undefined8 local_110;
  char acStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_052c8954(param_1,acStack_108);
  std::string::string((string *)&local_110,acStack_108);
  local_118 = std::
              map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
              ::find((map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
                      *)(this + 0x18),(string *)&local_110);
  std::string::~string((string *)&local_110);
  nop();
  local_110 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)(this + 0x18));
  bVar3 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)&local_110);
  if (bVar3) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
    if ((this[0x4c] == (PakInterface)0x0) || (this[0x4d] == (PakInterface)0x0)) {
      puVar7 = (uchar *)(*(long *)(*(long *)(lVar4 + 8) + 8) + (long)*(int *)(lVar4 + 0x20));
      if (param_4 != (PFILE **)0x0) {
        *param_4 = (PFILE *)0x0;
      }
    }
    else {
      pPVar5 = ::operator_new(0x30);
      *param_4 = pPVar5;
      iVar2 = *(int *)(lVar4 + 0x24);
      *(undefined8 *)pPVar5 = 0;
      pPVar5 = *param_4;
      *(undefined8 *)(pPVar5 + 0x10) = 0;
      *(undefined4 *)(pPVar5 + 8) = 0;
      pPVar5 = *param_4;
      pvVar6 = operator_new__((long)iVar2);
      lVar9 = *(long *)(lVar4 + 8);
      *(void **)(pPVar5 + 0x18) = pvVar6;
      iVar2 = *(int *)(lVar4 + 0x20);
      pPVar5 = *param_4;
      lVar9 = *(long *)(lVar9 + 8);
      *(undefined4 *)(pPVar5 + 0x24) = 0;
      pPVar5[0x28] = (PFILE)0x1;
      puVar7 = *(uchar **)(pPVar5 + 0x18);
      PVar1 = this[0x4c];
      if ((PVar1 != (PakInterface)0x0) && (0 < *(int *)(lVar4 + 0x24))) {
        lVar10 = 0;
        while( true ) {
          iVar8 = (int)lVar10;
          puVar7[lVar10] = (byte)PVar1 ^ *(byte *)(lVar9 + iVar2 + lVar10);
          lVar10 = lVar10 + 1;
          if (*(int *)(lVar4 + 0x24) <= iVar8 + 1) break;
          PVar1 = this[0x4c];
        }
      }
    }
    if (param_2 != (uchar **)0x0) {
      *param_2 = puVar7;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = *(uint *)(lVar4 + 0x24);
    }
  }
  else {
    if (param_2 != (uchar **)0x0) {
      *param_2 = (uchar *)0x0;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (PFILE **)0x0) {
      *param_4 = (PFILE *)0x0;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}


/* PakInterface::FGetBuffer(char const*, unsigned char**, unsigned int*, PFILE**, int) */

undefined8 __thiscall
PakInterface::FGetBuffer
          (PakInterface *this,char *param_1,uchar **param_2,uint *param_3,PFILE **param_4,
          int param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_5 == -1) {
    param_5 = *(int *)(this + 0x48);
  }
  if (param_5 != 0) {
    if (param_5 == 1) {
      cVar1 = FGetBuffer_File(param_1,param_2,param_3,param_4);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    else if (param_5 != 2) goto LAB_052cac94;
    uVar2 = FGetBuffer_Pak(this,param_1,param_2,param_3,param_4);
    return uVar2;
  }
  cVar1 = FGetBuffer_Pak(this,param_1,param_2,param_3,param_4);
  if (cVar1 != '\0') {
    return 1;
  }
LAB_052cac94:
  uVar2 = FGetBuffer_File(param_1,param_2,param_3,param_4);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::PFindNext(Sexy::IFileSearch*, Sexy::FileSearchInfo*) */

void __thiscall
PakInterface::PFindNext(PakInterface *this,IFileSearch *param_1,FileSearchInfo *param_2)

{
  string *this_00;
  map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
  *this_01;
  IFileSearch *pIVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  char *__s2;
  char *pcVar8;
  size_t sVar9;
  undefined8 local_18;
  undefined8 local_10;
  _func_void *local_8;
  
  this_00 = (string *)(param_1 + 0x18);
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,___stack_chk_guard);
  this_01 = (map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
             *)(this + 0x18);
  lVar6 = FUN_05474178(this_00);
  if (lVar6 == 0) {
    local_18 = std::
               map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
               ::begin(this_01);
  }
  else {
    local_18 = std::
               map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
               ::find(this_01,this_00);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_01);
    bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar3) {
      FUN_052c8b4c((exception_ptr *)&local_18);
    }
  }
  pIVar1 = param_1 + 0x20;
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_01);
    bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar3) {
LAB_052caf94:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar3);
    }
    lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    __s2 = (char *)FUN_0547429c();
    iVar5 = FUN_054743b0(pIVar1,0x2a,0);
    if (iVar5 == -1) {
      pcVar8 = (char *)FUN_0547429c(pIVar1);
      sVar9 = FUN_05474184(pIVar1);
      iVar5 = strncmp(pcVar8,__s2,sVar9);
      if (iVar5 == 0) {
        sVar9 = *(size_t *)(lVar6 + 0x18);
        *(long *)(param_2 + 0x30) = (long)*(int *)(lVar6 + 0x24);
        *(size_t *)(param_2 + 0x10) = sVar9;
        *(size_t *)(param_2 + 0x18) = sVar9;
        *(size_t *)(param_2 + 0x20) = sVar9;
        std::string::append((string *)param_2,__s2,sVar9);
        param_2[8] = (FileSearchInfo)0x0;
        std::string::append(this_00,__s2,sVar9);
        goto LAB_052caf94;
      }
    }
    else {
      pcVar8 = (char *)FUN_0547429c(pIVar1);
      iVar4 = strncmp(pcVar8,__s2,(long)iVar5);
      if (iVar4 == 0) {
        lVar2 = (long)iVar5 + 1;
        if ((pcVar8[lVar2] != '\0') && (iVar5 = strcmp(pcVar8 + lVar2,".*"), iVar5 != 0)) {
          sVar9 = strlen(__s2);
          lVar7 = FUN_05474184(pIVar1);
          iVar5 = strcmp(pcVar8 + lVar2,__s2 + ((sVar9 + lVar2) - lVar7));
          if (iVar5 != 0) goto LAB_052cae30;
        }
        lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        sVar9 = 0xffffffffffffffff;
        iVar5 = FUN_054744e0(lVar7 + 0x10,0x5c);
        if (iVar5 == -1) {
          lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
          pcVar8 = (char *)FUN_0547429c(lVar7 + 0x10);
          std::string::append((string *)param_2,pcVar8,sVar9);
        }
        else {
          lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
          lVar7 = FUN_0547429c(lVar7 + 0x10);
          std::string::append((string *)param_2,(char *)(lVar7 + (long)iVar5 + 1),sVar9);
        }
        sVar9 = strlen(__s2);
        lVar7 = FUN_05474184(pIVar1);
        pcVar8 = strchr(__s2 + ((sVar9 + lVar2) - lVar7),0x5c);
        sVar9 = *(size_t *)(lVar6 + 0x18);
        *(long *)(param_2 + 0x30) = (long)*(int *)(lVar6 + 0x24);
        param_2[8] = (FileSearchInfo)(pcVar8 != (char *)0x0);
        *(size_t *)(param_2 + 0x10) = sVar9;
        *(size_t *)(param_2 + 0x18) = sVar9;
        *(size_t *)(param_2 + 0x20) = sVar9;
        std::string::append(this_00,__s2,sVar9);
        goto LAB_052caf94;
      }
    }
LAB_052cae30:
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::FindFirstFile(char const*, Sexy::FileSearchInfo*) */

void __thiscall
PakInterface::FindFirstFile(PakInterface *this,char *param_1,FileSearchInfo *param_2)

{
  char cVar1;
  PFindData *this_00;
  FileSearchInfo *__n;
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_2;
  this_00 = ::operator_new(0x28);
  PFindData::PFindData(this_00);
  FUN_052c8954(param_1,acStack_808);
  std::string::append((string *)(this_00 + 0x20),acStack_808,(size_t)__n);
  *(undefined8 *)(this_00 + 0x10) = 0;
  cVar1 = PFindNext(this,(IFileSearch *)this_00,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this_00 + 8))(this_00);
    this_00 = (PFindData *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PakInterface::FindNextFile(Sexy::IFileSearch*, Sexy::FileSearchInfo*) */

char __thiscall
PakInterface::FindNextFile(PakInterface *this,IFileSearch *param_1,FileSearchInfo *param_2)

{
  char cVar1;
  
  cVar1 = '\0';
  if (*(long *)(param_1 + 0x10) == 0) {
    cVar1 = PFindNext(this,param_1,param_2);
    if (cVar1 == '\0') {
      cVar1 = *(long *)(param_1 + 0x10) != 0;
    }
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* PakInterface::AddPakFile(PakFileDesc&) */

void __thiscall PakInterface::AddPakFile(PakInterface *this,PakFileDesc *param_1)

{
  uint uVar1;
  map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
  *this_00;
  char *pcVar2;
  PakInterface PVar3;
  PakRecord *pPVar4;
  bool bVar5;
  undefined4 uVar6;
  int extraout_w0;
  int extraout_w0_00;
  int iVar7;
  int extraout_w0_01;
  undefined8 uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  code *pcVar15;
  byte bVar16;
  int local_5b4;
  byte local_59e;
  byte local_59d;
  undefined4 local_59c;
  undefined4 local_598;
  int local_594;
  undefined8 local_590;
  PakRecord *local_588;
  PakFileTime local_580 [8];
  string asStack_578 [8];
  string asStack_570 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_568 [24];
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined4 local_538;
  undefined4 local_534;
  undefined8 local_530;
  undefined8 local_528;
  char local_508 [256];
  char acStack_408 [1024];
  long local_8;
  
  this_00 = (map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  uVar8 = (**(code **)(**(long **)(param_1 + 0x18) + 0x30))(*(long **)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 8) = uVar8;
  uVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x38))(*(long **)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  uVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x38))(*(long **)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  local_530 = 0;
  local_528 = 0;
  std::list<PakCollection,std::allocator<PakCollection>>::push_back
            ((list<PakCollection,std::allocator<PakCollection>> *)(this + 8),
             (PakCollection *)&local_530);
  puVar9 = (undefined8 *)
           std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::back
                     ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                      (this + 8));
  uVar8 = *(undefined8 *)(param_1 + 8);
  *puVar9 = *(undefined8 *)(param_1 + 0x18);
  puVar9[1] = uVar8;
  uVar8 = FUN_0547429c(param_1);
  FUN_052c8954(uVar8,acStack_408);
  local_550 = 0;
  local_548 = 0;
  local_540 = 0;
  local_538 = 0;
  local_534 = 0;
  PakRecord::PakRecord((PakRecord *)&local_550);
  std::pair<std::string_const,PakRecord>::pair<char(&)[1024],PakRecord,void>
            ((pair<std::string_const,PakRecord> *)&local_530,acStack_408,(PakRecord *)&local_550);
  local_590 = std::
              map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
              ::insert<std::pair<std::string_const,PakRecord>,void>(this_00,(pair *)&local_530);
  std::pair<std::string_const,PakRecord>::~pair((pair<std::string_const,PakRecord> *)&local_530);
  PakRecord::~PakRecord((PakRecord *)&local_550);
  sVar10 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                     ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_590);
  local_588 = (PakRecord *)(sVar10 + 8);
  *(undefined8 **)(sVar10 + 8) = puVar9;
  std::string::append((string *)(sVar10 + 0x10),acStack_408,sVar10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  pcVar15 = *(code **)(*(long *)this + 0x18);
  *(undefined4 *)(local_588 + 0x18) = 0;
  *(undefined4 *)(local_588 + 0x1c) = uVar6;
  lVar11 = (*pcVar15)(this,acStack_408,&DAT_05598228,0xffffffff);
  if (lVar11 == 0) {
    bVar16 = 0;
  }
  else {
    local_59c = 0;
    (**(code **)(*(long *)this + 0x48))(this,&local_59c,4,1,lVar11);
    nop();
    if (extraout_w0 == -0x453fb540) {
      local_598 = 0;
      (**(code **)(*(long *)this + 0x48))(this,&local_598,4,1,lVar11);
      nop();
      if (extraout_w0_00 == 0) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_568);
        local_5b4 = 0;
        while( true ) {
          local_59e = 0;
          iVar7 = (**(code **)(*(long *)this + 0x48))(this,&local_59e,1,1,lVar11);
          bVar16 = iVar7 == 0 | local_59e >> 7;
          if (bVar16 != 0) break;
          local_59d = bVar16;
          (**(code **)(*(long *)this + 0x48))(this,&local_59d,1,1,lVar11);
          (**(code **)(*(long *)this + 0x48))(this,local_508,1,local_59d,lVar11);
          local_508[(int)(uint)local_59d] = '\0';
          if (local_59d != 0) {
            pcVar2 = local_508 + (ulong)(local_59d - 1) + 1;
            pcVar14 = local_508;
            do {
              while (*pcVar14 != '/') {
                pcVar14 = pcVar14 + 1;
                if (pcVar14 == pcVar2) goto LAB_052cb884;
              }
              *pcVar14 = '\\';
              pcVar14 = pcVar14 + 1;
            } while (pcVar14 != pcVar2);
          }
LAB_052cb884:
          local_594 = 0;
          (**(code **)(*(long *)this + 0x48))(this,&local_594,4,1,lVar11);
          nop();
          local_594 = extraout_w0_01;
          (**(code **)(*(long *)this + 0x48))(this,local_580,8,1,lVar11);
          nop();
          nop();
          std::string::string(asStack_578,local_508);
          FUN_052c8828(asStack_570,asStack_578);
          local_550 = 0;
          local_548 = 0;
          local_540 = 0;
          local_538 = 0;
          local_534 = 0;
          PakRecord::PakRecord((PakRecord *)&local_550);
          std::pair<std::string_const,PakRecord>::pair<std::string,PakRecord,void>
                    ((pair<std::string_const,PakRecord> *)&local_530,asStack_570,
                     (PakRecord *)&local_550);
          local_590 = std::
                      map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
                      ::insert<std::pair<std::string_const,PakRecord>,void>
                                (this_00,(pair *)&local_530);
          std::pair<std::string_const,PakRecord>::~pair
                    ((pair<std::string_const,PakRecord> *)&local_530);
          PakRecord::~PakRecord((PakRecord *)&local_550);
          std::string::~string(asStack_570);
          std::string::~string(asStack_578);
          nop();
          sVar10 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                             ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_590);
          local_588 = (PakRecord *)(sVar10 + 8);
          *(undefined8 **)(sVar10 + 8) = puVar9;
          std::string::append((string *)(sVar10 + 0x10),local_508,sVar10);
          pPVar4 = local_588;
          *(int *)(local_588 + 0x18) = local_5b4;
          *(int *)(local_588 + 0x1c) = local_594;
          uVar8 = ConvertPakFileTimeToSexyFileTime(local_580);
          *(undefined8 *)(pPVar4 + 0x10) = uVar8;
          std::vector<PakRecord*,std::allocator<PakRecord*>>::push_back
                    ((vector<PakRecord*,std::allocator<PakRecord*>> *)avStack_568,&local_588);
          local_5b4 = local_5b4 + local_594;
        }
        iVar7 = (**(code **)(*(long *)this + 0x38))(this,lVar11);
        local_590 = std::
                    map<std::string,PakRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,PakRecord>>>
                    ::begin(this_00);
        while( true ) {
          local_530 = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_00);
          bVar5 = eastl::operator!=((rbtree_iterator *)&local_590,(rbtree_iterator *)&local_530);
          if (!bVar5) break;
          lVar12 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                             ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_590);
          if (*(undefined8 **)(lVar12 + 8) == puVar9) {
            *(int *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) + iVar7;
          }
          std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_590);
        }
        (**(code **)(*(long *)this + 0x28))(this,lVar11);
        PVar3 = this[0x4c];
        if (((PVar3 != (PakInterface)0x0) && (this[0x4d] == (PakInterface)0x0)) &&
           (uVar13 = 0, *(int *)(param_1 + 0x14) != 0)) {
          while( true ) {
            uVar1 = (int)uVar13 + 1;
            *(byte *)(*(long *)(param_1 + 8) + uVar13) =
                 (byte)PVar3 ^ *(byte *)(*(long *)(param_1 + 8) + uVar13);
            if (*(uint *)(param_1 + 0x14) <= uVar1) break;
            PVar3 = this[0x4c];
            uVar13 = (ulong)uVar1;
          }
        }
        std::vector<PakRecord*,std::allocator<PakRecord*>>::~vector
                  ((vector<PakRecord*,std::allocator<PakRecord*>> *)avStack_568);
        goto LAB_052cb6ec;
      }
    }
    bVar16 = 0;
    (**(code **)(*(long *)this + 0x28))(this,lVar11);
  }
LAB_052cb6ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar16);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PakInterface::AddPakFile(std::string const&) */

void __thiscall PakInterface::AddPakFile(PakInterface *this,string *param_1)

{
  char cVar1;
  char cVar2;
  PakFileDesc aPStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PakFileDesc::PakFileDesc(aPStack_28);
  cVar1 = PreparePakFile(this,param_1,aPStack_28);
  if (cVar1 != '\0') {
    do {
      cVar2 = IsPakFileLoaded(this,aPStack_28);
      if (cVar2 != '\0') {
        cVar2 = HasPakFileFailed(this,aPStack_28);
        goto joined_r0x052cbba8;
      }
      cVar2 = HasPakFileFailed(this,aPStack_28);
    } while (cVar2 == '\0');
    cVar2 = HasPakFileFailed(this,aPStack_28);
joined_r0x052cbba8:
    if (cVar2 == '\0') {
      AddPakFile(this,aPStack_28);
      ClosePakFile(this,aPStack_28);
    }
    else {
      cVar1 = '\0';
      ClosePakFile(this,aPStack_28);
    }
  }
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}

