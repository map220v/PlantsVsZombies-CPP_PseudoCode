// Class: EA::StdC::SprintfLocal


/* EA::StdC::SprintfLocal::StringWriter8(char const*, unsigned long, void*,
   EA::StdC::WriteFunctionState) */

ulong EA::StdC::SprintfLocal::StringWriter8(void *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong __n;
  
  uVar3 = 0;
  if ((param_2 != 0) && ((char)param_3[3] == '\0')) {
    uVar3 = param_3[2] - param_3[1];
    __n = param_2;
    if (uVar3 < param_2) {
      *(undefined1 *)(param_3 + 3) = 1;
      __n = 0;
      while( true ) {
        bVar2 = *(byte *)((long)param_1 + __n);
        lVar4 = 1;
        if (((0xc1 < bVar2) && (lVar4 = 2, 0xdf < bVar2)) && (lVar4 = 3, 0xef < bVar2)) break;
        uVar1 = lVar4 + __n;
        if ((uVar3 < uVar1) || (__n = uVar1, param_2 <= uVar1)) break;
      }
    }
    memcpy((void *)(*param_3 + param_3[1]),param_1,__n);
    uVar3 = __n & 0xffffffff;
    param_3[1] = param_3[1] + __n;
  }
  return uVar3;
}


/* EA::StdC::SprintfLocal::StringWriter16(char16_t const*, unsigned long, void*,
   EA::StdC::WriteFunctionState) */

ulong EA::StdC::SprintfLocal::StringWriter16(void *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  
  uVar1 = param_3[2] - param_3[1];
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  memcpy((void *)(*param_3 + param_3[1] * 2),param_1,param_2 << 1);
  param_3[1] = param_3[1] + param_2;
  return param_2 & 0xffffffff;
}


/* EA::StdC::SprintfLocal::StringWriter32(char32_t const*, unsigned long, void*,
   EA::StdC::WriteFunctionState) */

ulong EA::StdC::SprintfLocal::StringWriter32(void *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  
  uVar1 = param_3[2] - param_3[1];
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  memcpy((void *)(*param_3 + param_3[1] * 4),param_1,param_2 << 2);
  param_3[1] = param_3[1] + param_2;
  return param_2 & 0xffffffff;
}


/* EA::StdC::SprintfLocal::FILEWriter8(char const*, unsigned long, void*,
   EA::StdC::WriteFunctionState) */

undefined4 EA::StdC::SprintfLocal::FILEWriter8(void *param_1,size_t param_2,FILE *param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  
  sVar2 = fwrite(param_1,1,param_2,param_3);
  uVar1 = (undefined4)sVar2;
  if (sVar2 != param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* EA::StdC::SprintfLocal::FILEWriter16(char16_t const*, unsigned long, void*,
   EA::StdC::WriteFunctionState) */

undefined4 EA::StdC::SprintfLocal::FILEWriter16(void *param_1,size_t param_2,FILE *param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  
  sVar2 = fwrite(param_1,2,param_2,param_3);
  uVar1 = (undefined4)sVar2;
  if (sVar2 != param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* EA::StdC::SprintfLocal::FILEWriter32(char32_t const*, unsigned long, void*,
   EA::StdC::WriteFunctionState) */

undefined4 EA::StdC::SprintfLocal::FILEWriter32(void *param_1,size_t param_2,FILE *param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  
  sVar2 = fwrite(param_1,4,param_2,param_3);
  uVar1 = (undefined4)sVar2;
  if (sVar2 != param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::SprintfLocal::PlatformLogWriter(char const*, unsigned long, void*,
   EA::StdC::WriteFunctionState) */

void EA::StdC::SprintfLocal::PlatformLogWriter(char *param_1,ulong param_2)

{
  char *pcVar1;
  size_t __n;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auStack_208 [512];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined1 *)FUN_054061c0(1);
  if (puVar2 == (undefined1 *)0x0) {
    __n = param_2;
    if (0x1ff < param_2) {
      __n = 0x1ff;
    }
    memcpy(auStack_208,param_1,__n);
  }
  else {
    pcVar1 = param_1 + param_2;
    if (param_2 != 0) {
      do {
        while( true ) {
          uVar3 = *(ulong *)(puVar2 + 0x200);
          puVar2[uVar3] = *param_1;
          if (*param_1 == '\n') break;
          if (uVar3 == 0x1ff) goto LAB_05406354;
          *(ulong *)(puVar2 + 0x200) = uVar3 + 1;
LAB_054062e0:
          param_1 = param_1 + 1;
          if (param_1 == pcVar1) goto LAB_05406328;
        }
        if (uVar3 == 0x1ff) {
LAB_05406354:
          *(undefined8 *)(puVar2 + 0x200) = 0x200;
          goto LAB_054062e0;
        }
        if (0x1ff < uVar3) goto LAB_054062e0;
        puVar2[uVar3] = 0;
        param_1 = param_1 + 1;
        *(undefined8 *)(puVar2 + 0x200) = 0;
        *puVar2 = 0;
      } while (param_1 != pcVar1);
    }
  }
LAB_05406328:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2 & 0xffffffff);
  }
  return;
}


/* EA::StdC::SprintfLocal::EASprintfInit() */

void EA::StdC::SprintfLocal::EASprintfInit(void)

{
  FUN_054061c0(0);
  return;
}


/* EA::StdC::SprintfLocal::EASprintfShutdown() */

int EA::StdC::SprintfLocal::EASprintfShutdown(void)

{
  int iVar1;
  
  iVar1 = 0x6c45d10;
  if ((DAT_06c45d18 != 0) && (iVar1 = DAT_06c45d14, DAT_06c45d14 == 0)) {
    iVar1 = pthread_key_delete(DAT_06c45d10);
    return iVar1;
  }
  return iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::SprintfLocal::ReadFormat8(char const*, EA::StdC::SprintfLocal::FormatData*,
   std::__va_list*) */

void EA::StdC::SprintfLocal::ReadFormat8(char *param_1,FormatData *param_2,__va_list *param_3)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  uint local_18;
  undefined4 uStack_14;
  undefined1 local_10;
  undefined7 uStack_f;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FormatData::FormatData((FormatData *)&local_30);
  bVar2 = param_1[1];
  pbVar3 = (byte *)(param_1 + 1);
  if (bVar2 != 0x25) {
    uVar8 = (undefined1)local_28;
    iVar9 = 0;
    do {
      uVar5 = (uint)bVar2;
      iVar1 = local_30;
      iVar10 = iVar9;
      switch(uVar5) {
      case 0x20:
        if (iStack_2c != 2) {
          iStack_2c = 3;
        }
        break;
      default:
        goto switchD_054064ac_caseD_21;
      case 0x23:
        uVar8 = 1;
        break;
      case 0x27:
        local_10 = 1;
        break;
      case 0x2b:
        iStack_2c = 2;
        break;
      case 0x2d:
        iVar1 = 0;
        break;
      case 0x30:
        iVar1 = 0;
        if ((local_30 != 0) && (iVar1 = 2, iVar10 = local_30, local_30 == 2)) {
          iVar10 = iVar9;
        }
      }
      local_30 = iVar1;
      pbVar3 = pbVar3 + 1;
      bVar2 = *pbVar3;
      iVar9 = iVar10;
    } while( true );
  }
  pbVar4 = (byte *)(param_1 + 2);
  local_18 = 0x25;
LAB_05406514:
  *(ulong *)param_2 = CONCAT44(iStack_2c,local_30);
  *(ulong *)(param_2 + 8) = CONCAT44(local_24,local_28);
  *(ulong *)(param_2 + 0x20) = CONCAT71(uStack_f,local_10);
  *(ulong *)(param_2 + 0x10) = CONCAT44(iStack_1c,local_20);
  *(ulong *)(param_2 + 0x18) = CONCAT44(uStack_14,local_18);
  goto LAB_0540652c;
switchD_054064ac_caseD_21:
  local_28 = CONCAT31(local_28._1_3_,uVar8);
  pbVar4 = pbVar3;
  if (uVar5 == 0x2a) {
    iVar1 = *(int *)(param_3 + 0x18);
    piVar6 = *(int **)param_3;
    if ((iVar1 < 0) && (*(int *)(param_3 + 0x18) = iVar1 + 8, iVar1 + 8 < 1)) {
      piVar6 = (int *)(*(long *)(param_3 + 8) + (long)iVar1);
    }
    else {
      *(ulong *)param_3 = (long)piVar6 + 0xbU & 0xfffffffffffffff8;
    }
    local_24 = *piVar6;
    if (local_24 < 0) {
      local_24 = -local_24;
      local_30 = 0;
    }
    pbVar4 = pbVar3 + 1;
    uVar5 = (uint)pbVar3[1];
  }
  else {
    while (uVar5 - 0x30 < 10) {
      local_24 = (uVar5 - 0x30) + local_24 * 10;
      uVar5 = (uint)pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
  }
  if (0x1000 < local_24) goto LAB_05406510;
  if ((byte)param_2[0x1c] == uVar5) {
    uVar5 = (uint)pbVar4[1];
    if (uVar5 == 0x2a) {
      iVar1 = *(int *)(param_3 + 0x18);
      piVar6 = *(int **)param_3;
      if ((iVar1 < 0) && (*(int *)(param_3 + 0x18) = iVar1 + 8, iVar1 + 8 < 1)) {
        piVar6 = (int *)(*(long *)(param_3 + 8) + (long)iVar1);
      }
      else {
        *(ulong *)param_3 = (long)piVar6 + 0xbU & 0xfffffffffffffff8;
      }
      local_20 = *piVar6;
      pbVar4 = pbVar4 + 2;
      uVar5 = (uint)*pbVar4;
      if (local_20 < 0) {
        local_20 = 0;
      }
    }
    else {
      uVar7 = uVar5 - 0x30;
      local_20 = 0;
      pbVar4 = pbVar4 + 1;
      if (uVar7 < 10) {
        local_20 = 0;
        do {
          pbVar4 = pbVar4 + 1;
          uVar5 = (uint)*pbVar4;
          local_20 = uVar7 + local_20 * 10;
          uVar7 = uVar5 - 0x30;
        } while (uVar7 < 10);
      }
    }
  }
  switch(uVar5) {
  case 0x49:
    bVar2 = pbVar4[1];
    if (bVar2 == 0x38) {
      uVar5 = (uint)pbVar4[2];
      pbVar4 = pbVar4 + 2;
      iStack_1c = 0xc;
    }
    else if (bVar2 == 0x31) {
      if (pbVar4[2] == 0x36) {
        uVar5 = (uint)pbVar4[3];
        pbVar4 = pbVar4 + 3;
        iStack_1c = 0xd;
      }
      else {
        if ((pbVar4[2] != 0x32) || (pbVar4[3] != 0x38)) goto LAB_05406510;
        uVar5 = (uint)pbVar4[4];
        pbVar4 = pbVar4 + 4;
        iStack_1c = 0x10;
      }
    }
    else if (bVar2 == 0x33) {
      if (pbVar4[2] != 0x32) goto LAB_05406510;
      uVar5 = (uint)pbVar4[3];
      pbVar4 = pbVar4 + 3;
      iStack_1c = 0xe;
    }
    else {
      if ((bVar2 != 0x36) || (pbVar4[2] != 0x34)) {
LAB_05406510:
        pbVar4 = pbVar4 + 1;
        goto LAB_05406514;
      }
      uVar5 = (uint)pbVar4[3];
      pbVar4 = pbVar4 + 3;
      iStack_1c = 0xf;
    }
    break;
  case 0x4c:
    uVar5 = (uint)pbVar4[1];
    pbVar4 = pbVar4 + 1;
    iStack_1c = 10;
    break;
  case 0x68:
    uVar5 = (uint)pbVar4[1];
    if (uVar5 == 0x68) {
      uVar5 = (uint)pbVar4[2];
      pbVar4 = pbVar4 + 2;
      iStack_1c = 1;
    }
    else {
      pbVar4 = pbVar4 + 1;
      iStack_1c = 2;
    }
    break;
  case 0x6a:
    uVar5 = (uint)pbVar4[1];
    pbVar4 = pbVar4 + 1;
    iStack_1c = 6;
    break;
  case 0x6c:
    uVar5 = (uint)pbVar4[1];
    if (uVar5 == 0x6c) {
      uVar5 = (uint)pbVar4[2];
      pbVar4 = pbVar4 + 2;
      iStack_1c = 5;
    }
    else {
      pbVar4 = pbVar4 + 1;
      iStack_1c = 4;
    }
    break;
  case 0x71:
    uVar5 = (uint)pbVar4[1];
    pbVar4 = pbVar4 + 1;
    iStack_1c = 5;
    break;
  case 0x74:
    uVar5 = (uint)pbVar4[1];
    pbVar4 = pbVar4 + 1;
    iStack_1c = 8;
    break;
  case 0x7a:
    uVar5 = (uint)pbVar4[1];
    pbVar4 = pbVar4 + 1;
    iStack_1c = 7;
  }
  local_18 = uVar5;
  switch(uVar5) {
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x61:
  case 0x65:
  case 0x66:
LAB_054066f4:
    if (local_20 != 0x7fffffff) goto LAB_054065b0;
    local_20 = 6;
    break;
  default:
switchD_05406604_caseD_42:
    goto LAB_054065b0;
  case 0x43:
  case 0x53:
  case 99:
  case 0x73:
    if (local_30 == 2) {
      local_30 = iVar9;
    }
    if (iStack_1c == 2) {
LAB_054068a8:
      iStack_1c = 1;
      goto switchD_05406604_caseD_42;
    }
    if (iStack_1c != 4) {
      if (iStack_1c != 0) goto LAB_054065b0;
      if ((uVar5 & 0xffffffef) == 99) goto LAB_054068a8;
    }
    iStack_1c = 0xb;
    goto LAB_054065b0;
  case 0x47:
  case 0x67:
    if (local_20 != 0) goto LAB_054066f4;
LAB_054066b8:
    local_20 = 1;
    break;
  case 0x58:
  case 0x62:
  case 100:
  case 0x69:
  case 0x6f:
  case 0x75:
  case 0x78:
    if (local_20 == 0x7fffffff) goto LAB_054066b8;
    if (local_30 == 2) {
      local_30 = 1;
    }
LAB_054065b0:
    if ((local_20 - 0x1001U < 0x7fffeffe) && ((uVar5 & 0xffffffdf) != 0x53)) {
      local_18 = 0;
    }
    break;
  case 0x70:
    iStack_1c = 0xf;
    local_20 = 2;
    local_18 = 0x78;
  }
  pbVar4 = pbVar4 + 1;
  *(ulong *)(param_2 + 0x20) = CONCAT71(uStack_f,local_10);
  *(ulong *)param_2 = CONCAT44(iStack_2c,local_30);
  *(ulong *)(param_2 + 8) = CONCAT44(local_24,local_28);
  *(ulong *)(param_2 + 0x10) = CONCAT44(iStack_1c,local_20);
  *(ulong *)(param_2 + 0x18) = CONCAT44(uStack_14,local_18);
LAB_0540652c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar4);
  }
  return;
}


/* EA::StdC::SprintfLocal::WriteLong8(EA::StdC::SprintfLocal::FormatData const&, long, char*) */

char * EA::StdC::SprintfLocal::WriteLong8(FormatData *param_1,long param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar10 = *(int *)(param_1 + 0x10);
  param_3[-1] = '\0';
  if (((param_2 < 1) && (*(int *)(param_1 + 0x10) < 1)) && (param_1[8] == (FormatData)0x0)) {
    return param_3 + -1;
  }
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0x58:
  case 0x78:
    uVar12 = 0xf;
    lVar13 = 4;
    iVar15 = 0x10;
    break;
  default:
    iVar16 = *(int *)(param_1 + 4);
    iVar14 = 0;
    if (param_2 < 0) {
      param_2 = -param_2;
      iVar14 = 1;
    }
    goto LAB_054069b4;
  case 0x62:
    iVar15 = 2;
    uVar12 = 1;
    lVar13 = 1;
    break;
  case 0x6f:
    iVar15 = 8;
    uVar12 = 7;
    lVar13 = 3;
    break;
  case 0x75:
    iVar14 = 0;
    iVar16 = 0;
LAB_054069b4:
    pcVar6 = param_3 + -1;
    uVar12 = 0;
    do {
      while( true ) {
        pcVar7 = pcVar6;
        pcVar6 = pcVar7 + -1;
        uVar9 = uVar12 + 1;
        uVar8 = (ulong)param_2 / 10;
        pcVar7[-1] = (char)param_2 + (char)uVar8 * -10 + '0';
        param_2 = uVar8;
        if (param_1[0x20] == (FormatData)0x0) break;
        if (uVar8 == 0) goto LAB_05406c4c;
        uVar1 = uVar12 + 2;
        uVar12 = uVar9;
        if ((uVar1 & 3) == 0) {
          pcVar7[-2] = (char)*(undefined4 *)(param_1 + 0x24);
          pcVar6 = pcVar7 + -2;
          uVar12 = uVar1;
        }
      }
      uVar12 = uVar9;
    } while (uVar8 != 0);
LAB_05406c4c:
    iVar15 = 10;
    if (*(int *)param_1 == 2) {
      if ((iVar16 != 0) || (iVar14 != 0)) {
        iVar10 = *(int *)(param_1 + 0xc) + -1;
        goto LAB_05406ac4;
      }
      goto LAB_05406c64;
    }
    goto LAB_05406ac4;
  }
  pcVar7 = param_3 + -2;
  uVar1 = 1;
  do {
    while( true ) {
      uVar9 = uVar1;
      pcVar6 = pcVar7;
      uVar1 = uVar12 & (uint)param_2;
      param_2 = (ulong)param_2 >> lVar13;
      cVar5 = (char)uVar1;
      if (9 < uVar1) break;
      *pcVar6 = cVar5 + '0';
      pcVar7 = pcVar6 + -1;
      uVar1 = uVar9 + 1;
      if (param_2 == 0) goto LAB_05406a88;
    }
    cVar2 = cVar5 + 'W';
    if (*(int *)(param_1 + 0x18) != 0x78) {
      cVar2 = cVar5 + '7';
    }
    *pcVar6 = cVar2;
    pcVar7 = pcVar6 + -1;
    uVar1 = uVar9 + 1;
  } while (param_2 != 0);
LAB_05406a88:
  iVar14 = (int)param_2;
  if (((iVar15 == 8) && (param_1[8] != (FormatData)0x0)) && (*pcVar6 != '0')) {
    uVar9 = uVar9 + 1;
    pcVar6[-1] = '0';
    pcVar6 = pcVar6 + -1;
  }
  if (*(int *)param_1 == 2) {
LAB_05406c64:
    if ((param_1[8] == (FormatData)0x0) || ((iVar15 != 0x10 && (iVar15 != 2)))) {
      iVar10 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar10 = *(int *)(param_1 + 0xc) + -2;
    }
  }
LAB_05406ac4:
  if (iVar10 <= (int)uVar9) goto LAB_05406c14;
  uVar4 = iVar10 - uVar9;
  uVar3 = ~uVar9;
  uVar12 = (uVar4 - 0x10 >> 4) + 1;
  uVar1 = uVar12 * 0x10;
  pcVar7 = pcVar6;
  if (uVar3 + iVar10 < 0xf) {
LAB_05406b24:
    pcVar7[-1] = '0';
    if ((((((int)(uVar9 + 1) < iVar10) && (pcVar7[-2] = '0', (int)(uVar9 + 2) < iVar10)) &&
         (pcVar7[-3] = '0', (int)(uVar9 + 3) < iVar10)) &&
        ((pcVar7[-4] = '0', (int)(uVar9 + 4) < iVar10 &&
         (pcVar7[-5] = '0', (int)(uVar9 + 5) < iVar10)))) &&
       ((((pcVar7[-6] = '0', (int)(uVar9 + 6) < iVar10 &&
          ((pcVar7[-7] = '0', (int)(uVar9 + 7) < iVar10 &&
           (pcVar7[-8] = '0', (int)(uVar9 + 8) < iVar10)))) &&
         (pcVar7[-9] = '0', (int)(uVar9 + 9) < iVar10)) &&
        ((((pcVar7[-10] = '0', (int)(uVar9 + 10) < iVar10 &&
           (pcVar7[-0xb] = '0', (int)(uVar9 + 0xb) < iVar10)) &&
          (pcVar7[-0xc] = '0', (int)(uVar9 + 0xc) < iVar10)) &&
         ((pcVar7[-0xd] = '0', (int)(uVar9 + 0xd) < iVar10 &&
          (pcVar7[-0xe] = '0', (int)(uVar9 + 0xe) < iVar10)))))))) {
      pcVar7[-0xf] = '0';
    }
  }
  else {
    uVar11 = 0;
    do {
      builtin_strncpy(pcVar7 + -0x10,"0000000000000000",0x10);
      uVar11 = uVar11 + 1;
      pcVar7 = pcVar7 + -0x10;
    } while (uVar11 < uVar12);
    uVar9 = uVar9 + uVar1;
    pcVar7 = pcVar6 + -(ulong)uVar1;
    if (uVar1 != uVar4) goto LAB_05406b24;
  }
  pcVar6 = pcVar6 + ~(ulong)(uVar3 + iVar10);
LAB_05406c14:
  if (iVar15 == 10) {
    if ((*(int *)(param_1 + 0x18) == 0x69) || (*(int *)(param_1 + 0x18) == 100)) {
      if (iVar14 != 0) {
        pcVar6[-1] = '-';
        return pcVar6 + -1;
      }
      if (*(int *)(param_1 + 4) == 2) {
        pcVar6[-1] = '+';
        return pcVar6 + -1;
      }
      if (*(int *)(param_1 + 4) == 3) {
        pcVar6[-1] = ' ';
        return pcVar6 + -1;
      }
    }
  }
  else if ((param_1[8] != (FormatData)0x0) && ((iVar15 == 0x10 || (iVar15 == 2)))) {
    pcVar6[-1] = (char)*(undefined4 *)(param_1 + 0x18);
    pcVar6[-2] = '0';
    return pcVar6 + -2;
  }
  return pcVar6;
}


/* EA::StdC::SprintfLocal::WriteLongLong8(EA::StdC::SprintfLocal::FormatData const&, long long,
   char*) */

char * EA::StdC::SprintfLocal::WriteLongLong8(FormatData *param_1,longlong param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar10 = *(int *)(param_1 + 0x10);
  param_3[-1] = '\0';
  if (((param_2 < 1) && (*(int *)(param_1 + 0x10) < 1)) && (param_1[8] == (FormatData)0x0)) {
    return param_3 + -1;
  }
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0x58:
  case 0x78:
    uVar12 = 0xf;
    lVar13 = 4;
    iVar15 = 0x10;
    break;
  default:
    iVar16 = *(int *)(param_1 + 4);
    iVar14 = 0;
    if (param_2 < 0) {
      param_2 = -param_2;
      iVar14 = 1;
    }
    goto LAB_05406da8;
  case 0x62:
    iVar15 = 2;
    uVar12 = 1;
    lVar13 = 1;
    break;
  case 0x6f:
    iVar15 = 8;
    uVar12 = 7;
    lVar13 = 3;
    break;
  case 0x75:
    iVar14 = 0;
    iVar16 = 0;
LAB_05406da8:
    pcVar6 = param_3 + -1;
    uVar12 = 0;
    do {
      while( true ) {
        pcVar7 = pcVar6;
        pcVar6 = pcVar7 + -1;
        uVar9 = uVar12 + 1;
        uVar8 = (ulong)param_2 / 10;
        pcVar7[-1] = (char)param_2 + (char)uVar8 * -10 + '0';
        param_2 = uVar8;
        if (param_1[0x20] == (FormatData)0x0) break;
        if (uVar8 == 0) goto LAB_05407040;
        uVar1 = uVar12 + 2;
        uVar12 = uVar9;
        if ((uVar1 & 3) == 0) {
          pcVar7[-2] = (char)*(undefined4 *)(param_1 + 0x24);
          pcVar6 = pcVar7 + -2;
          uVar12 = uVar1;
        }
      }
      uVar12 = uVar9;
    } while (uVar8 != 0);
LAB_05407040:
    iVar15 = 10;
    if (*(int *)param_1 == 2) {
      if ((iVar16 != 0) || (iVar14 != 0)) {
        iVar10 = *(int *)(param_1 + 0xc) + -1;
        goto LAB_05406eb8;
      }
      goto LAB_05407058;
    }
    goto LAB_05406eb8;
  }
  pcVar7 = param_3 + -2;
  uVar1 = 1;
  do {
    while( true ) {
      uVar9 = uVar1;
      pcVar6 = pcVar7;
      uVar1 = uVar12 & (uint)param_2;
      param_2 = (ulong)param_2 >> lVar13;
      cVar5 = (char)uVar1;
      if (9 < uVar1) break;
      *pcVar6 = cVar5 + '0';
      pcVar7 = pcVar6 + -1;
      uVar1 = uVar9 + 1;
      if (param_2 == 0) goto LAB_05406e7c;
    }
    cVar2 = cVar5 + 'W';
    if (*(int *)(param_1 + 0x18) != 0x78) {
      cVar2 = cVar5 + '7';
    }
    *pcVar6 = cVar2;
    pcVar7 = pcVar6 + -1;
    uVar1 = uVar9 + 1;
  } while (param_2 != 0);
LAB_05406e7c:
  iVar14 = (int)param_2;
  if (((iVar15 == 8) && (param_1[8] != (FormatData)0x0)) && (*pcVar6 != '0')) {
    uVar9 = uVar9 + 1;
    pcVar6[-1] = '0';
    pcVar6 = pcVar6 + -1;
  }
  if (*(int *)param_1 == 2) {
LAB_05407058:
    if ((param_1[8] == (FormatData)0x0) || ((iVar15 != 0x10 && (iVar15 != 2)))) {
      iVar10 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar10 = *(int *)(param_1 + 0xc) + -2;
    }
  }
LAB_05406eb8:
  if (iVar10 <= (int)uVar9) goto LAB_05407008;
  uVar4 = iVar10 - uVar9;
  uVar3 = ~uVar9;
  uVar12 = (uVar4 - 0x10 >> 4) + 1;
  uVar1 = uVar12 * 0x10;
  pcVar7 = pcVar6;
  if (uVar3 + iVar10 < 0xf) {
LAB_05406f18:
    pcVar7[-1] = '0';
    if ((((((int)(uVar9 + 1) < iVar10) && (pcVar7[-2] = '0', (int)(uVar9 + 2) < iVar10)) &&
         (pcVar7[-3] = '0', (int)(uVar9 + 3) < iVar10)) &&
        ((pcVar7[-4] = '0', (int)(uVar9 + 4) < iVar10 &&
         (pcVar7[-5] = '0', (int)(uVar9 + 5) < iVar10)))) &&
       ((((pcVar7[-6] = '0', (int)(uVar9 + 6) < iVar10 &&
          ((pcVar7[-7] = '0', (int)(uVar9 + 7) < iVar10 &&
           (pcVar7[-8] = '0', (int)(uVar9 + 8) < iVar10)))) &&
         (pcVar7[-9] = '0', (int)(uVar9 + 9) < iVar10)) &&
        ((((pcVar7[-10] = '0', (int)(uVar9 + 10) < iVar10 &&
           (pcVar7[-0xb] = '0', (int)(uVar9 + 0xb) < iVar10)) &&
          (pcVar7[-0xc] = '0', (int)(uVar9 + 0xc) < iVar10)) &&
         ((pcVar7[-0xd] = '0', (int)(uVar9 + 0xd) < iVar10 &&
          (pcVar7[-0xe] = '0', (int)(uVar9 + 0xe) < iVar10)))))))) {
      pcVar7[-0xf] = '0';
    }
  }
  else {
    uVar11 = 0;
    do {
      builtin_strncpy(pcVar7 + -0x10,"0000000000000000",0x10);
      uVar11 = uVar11 + 1;
      pcVar7 = pcVar7 + -0x10;
    } while (uVar11 < uVar12);
    uVar9 = uVar9 + uVar1;
    pcVar7 = pcVar6 + -(ulong)uVar1;
    if (uVar1 != uVar4) goto LAB_05406f18;
  }
  pcVar6 = pcVar6 + ~(ulong)(uVar3 + iVar10);
LAB_05407008:
  if (iVar15 == 10) {
    if ((*(int *)(param_1 + 0x18) == 0x69) || (*(int *)(param_1 + 0x18) == 100)) {
      if (iVar14 != 0) {
        pcVar6[-1] = '-';
        return pcVar6 + -1;
      }
      if (*(int *)(param_1 + 4) == 2) {
        pcVar6[-1] = '+';
        return pcVar6 + -1;
      }
      if (*(int *)(param_1 + 4) == 3) {
        pcVar6[-1] = ' ';
        return pcVar6 + -1;
      }
    }
  }
  else if ((param_1[8] != (FormatData)0x0) && ((iVar15 == 0x10 || (iVar15 == 2)))) {
    pcVar6[-1] = (char)*(undefined4 *)(param_1 + 0x18);
    pcVar6[-2] = '0';
    return pcVar6 + -2;
  }
  return pcVar6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* EA::StdC::SprintfLocal::WriteDouble8(EA::StdC::SprintfLocal::FormatData const&, double, char*) */

void EA::StdC::SprintfLocal::WriteDouble8(FormatData *param_1,double param_2,char *param_3)

{
  bool bVar1;
  bool bVar2;
  FormatData FVar3;
  byte *pbVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  ulong uVar13;
  byte bVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  int local_170;
  undefined4 local_16c;
  byte local_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar5 = FUN_05405f60();
  if (cVar5 != '\0') {
    param_3[-1] = '\0';
    if (*(int *)(param_1 + 0x18) < 0x61) {
      param_3[-2] = 'N';
      param_3[-3] = 'A';
      param_3[-4] = 'N';
    }
    else {
      param_3[-2] = 'n';
      param_3[-3] = 'a';
      param_3[-4] = 'n';
    }
LAB_054071ac:
    pbVar15 = (byte *)(param_3 + -4);
    cVar5 = IsNeg(param_2);
    if (cVar5 != '\0') {
      pbVar15 = (byte *)(param_3 + -5);
      *pbVar15 = 0x2d;
    }
    goto LAB_054071cc;
  }
  bVar6 = FUN_05405f58();
  if (bVar6 != 0) {
    param_3[-1] = '\0';
    if (*(int *)(param_1 + 0x18) < 0x61) {
      param_3[-2] = 'F';
      param_3[-3] = 'N';
      param_3[-4] = 'I';
    }
    else {
      param_3[-2] = 'f';
      param_3[-3] = 'n';
      param_3[-4] = 'i';
    }
    goto LAB_054071ac;
  }
  iVar16 = *(int *)(param_1 + 0x10);
  uVar19 = *(uint *)(param_1 + 0x18);
  pbVar15 = (byte *)0x0;
  param_3[-1] = '\0';
  if (0x1008 < iVar16) goto LAB_054071cc;
  pbVar18 = (byte *)(param_3 + -1);
  pbVar15 = pbVar18;
  pbVar17 = pbVar18;
  local_168[0] = bVar6;
  switch(uVar19) {
  case 0x45:
  case 0x65:
    EcvtBuf(param_2,iVar16 + 1,&local_170,&local_16c,(char *)local_168);
    if (param_2 == 0.0) {
      uVar19 = uVar19 & 0xff;
      bVar6 = 0;
      iVar16 = Strlen((char *)local_168);
      bVar1 = false;
      bVar2 = false;
      if (param_3 + -2 <= pbVar18) {
        iVar7 = 0;
LAB_054074e0:
        pbVar17 = pbVar15 + -1;
        pbVar15[-1] = 0x30;
        if (param_3 + -2 <= pbVar17) {
          pbVar15[-2] = 0x30;
          pbVar17 = pbVar15 + -2;
        }
        goto LAB_054074fc;
      }
LAB_05407500:
      bVar1 = bVar2;
      bVar9 = 0x2b;
    }
    else {
      uVar19 = uVar19 & 0xff;
      bVar1 = false;
      iVar7 = local_170 + -1;
      bVar6 = 0;
LAB_05407464:
      iVar16 = Strlen((char *)local_168);
      uVar8 = (long)iVar7 >> 0x3f;
      uVar8 = ((long)iVar7 ^ uVar8) - uVar8;
      uVar13 = uVar8 & 0xffffffff;
      uVar10 = (uint)uVar8;
      while (uVar10 != 0) {
        iVar12 = (int)uVar13;
        uVar10 = iVar12 / 10;
        cVar5 = (char)uVar13;
        uVar13 = (ulong)uVar10;
        pbVar17 = pbVar17 + -1;
        *pbVar17 = cVar5 + (char)(iVar12 / 10) * -10 + 0x30;
      }
      pbVar15 = pbVar17;
      if (param_3 + -2 <= pbVar17) goto LAB_054074e0;
LAB_054074fc:
      bVar2 = bVar1;
      if (-1 < iVar7) goto LAB_05407500;
      bVar9 = 0x2d;
    }
    pbVar17[-1] = bVar9;
    pbVar15 = local_168 + iVar16;
    pbVar17[-2] = (byte)uVar19;
    pbVar17 = pbVar17 + -2;
    uVar10 = uVar19;
    if (local_168 + 1 < pbVar15) {
      do {
        pbVar15 = pbVar15 + -1;
        if ((*pbVar15 != 0x30) || (bVar2 = bVar6 == 0, bVar6 = 1, bVar2)) {
          pbVar17[-1] = *pbVar15;
          bVar6 = 0;
          pbVar17 = pbVar17 + -1;
        }
      } while (pbVar15 != local_168 + 1);
      uVar10 = (uint)*pbVar17;
    }
    if (((uVar10 != uVar19) || (!bVar1)) && ((1 < iVar16 || (param_1[8] != (FormatData)0x0)))) {
      pbVar17 = pbVar17 + -1;
      *pbVar17 = (byte)*(undefined4 *)(param_1 + 0x1c);
    }
    pbVar15 = pbVar17 + -1;
    pbVar17[-1] = local_168[0];
    goto LAB_0540758c;
  case 0x46:
  case 0x66:
    FcvtBuf(param_2,iVar16,&local_170,&local_16c,(char *)local_168);
    iVar7 = Strlen((char *)local_168);
    if ((param_1[8] == (FormatData)0x0) || (local_170 < iVar7)) {
      bVar6 = 0;
      bVar9 = bVar6;
    }
    else {
      bVar9 = 0;
      pbVar15 = (byte *)(param_3 + -2);
      param_3[-2] = (char)*(undefined4 *)(param_1 + 0x1c);
      bVar6 = 0;
    }
    break;
  default:
    EcvtBuf(param_2,iVar16,&local_170,&local_16c,(char *)local_168);
    bVar6 = (byte)param_1[8] ^ 1;
    iVar7 = local_170 + -1;
    if ((iVar16 <= iVar7) || (iVar7 < -4)) {
      if (uVar19 == 0x67) {
        bVar1 = true;
        uVar19 = 0x65;
      }
      else {
        bVar1 = true;
        uVar19 = 0x45;
      }
      goto LAB_05407464;
    }
    FcvtBuf(param_2,iVar16,&local_170,&local_16c,(char *)local_168);
    iVar7 = Strlen((char *)local_168);
    bVar9 = 1;
  }
  pbVar17 = local_168 + (long)local_170 + -1;
  pbVar11 = local_168 + (long)iVar7 + -1;
  if ((long)iVar16 < (long)pbVar11 - (long)pbVar17) {
    pbVar11 = pbVar17 + iVar16;
  }
  if (pbVar17 < pbVar11) {
    do {
      if (((pbVar11 < local_168) || (local_168 + iVar7 < pbVar11)) ||
         (bVar14 = *pbVar11, bVar14 == 0x30)) {
        bVar1 = bVar6 == 0;
        bVar6 = 1;
        if (bVar1) {
          bVar14 = 0x30;
          goto LAB_054073f8;
        }
      }
      else {
LAB_054073f8:
        pbVar15[-1] = bVar14;
        pbVar15 = pbVar15 + -1;
        bVar6 = 0;
      }
      pbVar11 = pbVar11 + -1;
    } while (pbVar11 != pbVar17);
  }
  if (((*pbVar15 != 0) || (bVar9 == 0)) && (local_170 < iVar7)) {
    pbVar15 = pbVar15 + -1;
    *pbVar15 = (byte)*(undefined4 *)(param_1 + 0x1c);
  }
  if (local_170 < 1) {
    pbVar15 = pbVar15 + -1;
    *pbVar15 = 0x30;
  }
  else {
    pbVar17 = local_168 + local_170;
    bVar1 = local_168 < pbVar17;
    pbVar11 = pbVar17;
    while (bVar1) {
      pbVar11 = pbVar11 + -1;
      pbVar15[-1] = *pbVar11;
      iVar16 = (int)pbVar11;
      FVar3 = param_1[0x20];
      pbVar4 = pbVar15;
      while( true ) {
        bVar1 = local_168 < pbVar11;
        pbVar15 = pbVar4 + -1;
        if ((FVar3 == (FormatData)0x0) || (iVar16 = (int)pbVar17 - iVar16, !bVar1)) break;
        if (iVar16 == (iVar16 / 3) * 3) {
          pbVar15 = pbVar4 + -2;
          pbVar4[-2] = (byte)*(undefined4 *)(param_1 + 0x24);
        }
        pbVar11 = pbVar11 + -1;
        iVar16 = (int)pbVar11;
        pbVar15[-1] = *pbVar11;
        FVar3 = param_1[0x20];
        pbVar4 = pbVar15;
      }
    }
  }
LAB_0540758c:
  if (local_16c == 0) {
    if (*(int *)(param_1 + 4) == 2) {
      pbVar15 = pbVar15 + -1;
      *pbVar15 = 0x2b;
    }
    else if (*(int *)(param_1 + 4) == 3) {
      pbVar15 = pbVar15 + -1;
      *pbVar15 = 0x20;
    }
  }
  else {
    pbVar15 = pbVar15 + -1;
    *pbVar15 = 0x2d;
  }
  if ((*(int *)param_1 == 1) &&
     (uVar8 = (long)pbVar18 - (long)pbVar15 & 0xffffffff,
     (int)((long)pbVar18 - (long)pbVar15) < *(int *)(param_1 + 0xc))) {
    do {
      pbVar15 = pbVar15 + -1;
      *pbVar15 = 0x20;
      uVar19 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar19;
    } while ((int)uVar19 < *(int *)(param_1 + 0xc));
  }
LAB_054071cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar15);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::SprintfLocal::VprintfCore(int (*)(char const*, unsigned long, void*,
   EA::StdC::WriteFunctionState), void*, char const*, std::__va_list) */

void EA::StdC::SprintfLocal::VprintfCore
               (code *param_1,undefined8 param_2,char *param_3,ulong *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  wchar32 *pwVar5;
  longlong *plVar6;
  wchar16 *pwVar7;
  ulong *puVar8;
  char *pcVar9;
  ulong uVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  double *pdVar14;
  long lVar15;
  undefined4 *puVar16;
  wchar32 *pwVar17;
  wchar16 *pwVar18;
  uint uVar19;
  char cVar20;
  char *pcVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  undefined1 local_1041;
  int local_1040 [3];
  int local_1034;
  int local_1030;
  int local_102c;
  undefined4 local_1028;
  char local_1018 [24];
  undefined1 auStack_1000 [4080];
  char acStack_10 [8];
  long local_8;
  
  uVar24 = 0;
  lVar23 = 0;
  local_8 = ___stack_chk_guard;
  iVar22 = 0;
  FormatData::FormatData((FormatData *)local_1040);
  (*param_1)(0,0,param_2,0);
LAB_05407800:
  cVar20 = *param_3;
  if (cVar20 != '\0') {
    do {
      pcVar21 = param_3;
      if (cVar20 != '%') {
        do {
          pcVar21 = pcVar21 + 1;
          cVar20 = *pcVar21;
          if (cVar20 == '%') break;
        } while (cVar20 != '\0');
        iVar11 = (int)pcVar21 - (int)param_3;
        if (iVar11 != 0) {
          iVar1 = (*param_1)(param_3,(long)iVar11,param_2,1);
          if (iVar1 == -1) goto LAB_05407888;
          cVar20 = *pcVar21;
          iVar22 = iVar22 + iVar11;
          param_3 = pcVar21;
        }
        if (cVar20 == '\0') goto LAB_05407800;
      }
      param_3 = (char *)ReadFormat8(pcVar21,(FormatData *)local_1040,(__va_list *)param_4);
      switch(local_1028) {
      case 0x25:
        local_1018[0] = '%';
        goto LAB_05407b4c;
      default:
        goto switchD_05407928_caseD_26;
      case 0x41:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x61:
      case 0x65:
      case 0x66:
      case 0x67:
        if (local_102c == 10) {
          iVar11 = *(int *)((long)param_4 + 0x1c);
          pdVar14 = (double *)*param_4;
          if ((iVar11 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar11 + 0x10, iVar11 + 0x10 < 1)) {
            pdVar14 = (double *)(param_4[2] + (long)iVar11);
          }
          else {
            *param_4 = (long)pdVar14 + 0xfU & 0xfffffffffffffff8;
          }
        }
        else {
          iVar11 = *(int *)((long)param_4 + 0x1c);
          pdVar14 = (double *)*param_4;
          if ((iVar11 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar11 + 0x10, iVar11 + 0x10 < 1)) {
            pdVar14 = (double *)(param_4[2] + (long)iVar11);
          }
          else {
            *param_4 = (long)pdVar14 + 0xfU & 0xfffffffffffffff8;
          }
        }
        pcVar9 = (char *)WriteDouble8((FormatData *)local_1040,*pdVar14,acStack_10);
        if (pcVar9 == (char *)0x0) goto switchD_05407928_caseD_26;
        iVar11 = ((int)acStack_10 - (int)pcVar9) + -1;
        break;
      case 0x43:
      case 99:
        switch(local_102c) {
        case 1:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          iVar11 = (int)param_4[3];
          puVar16 = (undefined4 *)*param_4;
          if ((iVar11 < 0) && (*(int *)(param_4 + 3) = iVar11 + 8, iVar11 + 8 < 1)) {
            puVar16 = (undefined4 *)(param_4[1] + (long)iVar11);
          }
          else {
            *param_4 = (long)puVar16 + 0xbU & 0xfffffffffffffff8;
          }
          local_1018[0] = (char)*puVar16;
LAB_05407b4c:
          if (local_1040[0] != 0) {
            pcVar9 = local_1018;
            if (local_1040[0] == 2) {
              iVar1 = 1;
              goto LAB_05407c28;
            }
            iVar11 = 1;
            goto LAB_05407af4;
          }
          lVar15 = 1;
          pcVar9 = local_1018;
          iVar1 = 1;
          goto LAB_05407b60;
        }
        goto switchD_05407928_caseD_26;
      case 0x53:
      case 0x73:
        switch(local_102c) {
        case 1:
        case 0xc:
          iVar11 = (int)param_4[3];
          puVar3 = (undefined8 *)*param_4;
          if ((iVar11 < 0) && (*(int *)(param_4 + 3) = iVar11 + 8, iVar11 + 8 < 1)) {
            puVar3 = (undefined8 *)(param_4[1] + (long)iVar11);
          }
          else {
            *param_4 = (long)puVar3 + 0xfU & 0xfffffffffffffff8;
          }
          pcVar9 = (char *)*puVar3;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = "(null)";
          }
          if (local_1030 == 0x7fffffff) {
            iVar11 = 0;
            pcVar21 = pcVar9;
            if (*pcVar9 != '\0') {
              do {
                pcVar21 = pcVar21 + 1;
              } while (*pcVar21 != '\0');
              iVar11 = (int)pcVar21 - (int)pcVar9;
            }
          }
          else if ((*pcVar9 == '\0') || (pcVar21 = pcVar9, pcVar9 + local_1030 <= pcVar9)) {
            iVar11 = 0;
          }
          else {
            do {
              pcVar21 = pcVar21 + 1;
              if (pcVar9 + local_1030 <= pcVar21) break;
            } while (*pcVar21 != '\0');
            iVar11 = (int)pcVar21 - (int)pcVar9;
          }
          break;
        default:
          goto switchD_05407928_caseD_26;
        case 0xb:
        case 0xe:
          iVar11 = (int)param_4[3];
          plVar4 = (long *)*param_4;
          if ((iVar11 < 0) && (*(int *)(param_4 + 3) = iVar11 + 8, iVar11 + 8 < 1)) {
            plVar4 = (long *)(param_4[1] + (long)iVar11);
          }
          else {
            *param_4 = (long)plVar4 + 0xfU & 0xfffffffffffffff8;
          }
          pwVar17 = (wchar32 *)*plVar4;
          if (pwVar17 == (wchar32 *)0x0) {
            pwVar17 = L"(null)";
          }
          if (local_1030 == 0x7fffffff) {
            uVar19 = 0;
            pwVar5 = pwVar17;
            if (*pwVar17 != L'\0') {
              do {
                pwVar5 = pwVar5 + 1;
              } while (*pwVar5 != L'\0');
              uVar19 = (uint)((ulong)((long)pwVar5 - (long)pwVar17) >> 2);
            }
          }
          else if ((*pwVar17 == L'\0') || (pwVar5 = pwVar17, pwVar17 + local_1030 <= pwVar17)) {
            uVar19 = 0;
          }
          else {
            do {
              pwVar5 = pwVar5 + 1;
              if (pwVar17 + local_1030 <= pwVar5) break;
            } while (*pwVar5 != L'\0');
            uVar19 = (uint)((ulong)((long)pwVar5 - (long)pwVar17) >> 2);
          }
          if (0x1007 < (int)uVar19) goto switchD_05407928_caseD_26;
          pcVar9 = local_1018;
          iVar11 = Strlcpy(pcVar9,pwVar17,0x1008,(ulong)uVar19);
          break;
        case 0xd:
          iVar11 = (int)param_4[3];
          plVar4 = (long *)*param_4;
          if ((iVar11 < 0) && (*(int *)(param_4 + 3) = iVar11 + 8, iVar11 + 8 < 1)) {
            plVar4 = (long *)(param_4[1] + (long)iVar11);
          }
          else {
            *param_4 = (long)plVar4 + 0xfU & 0xfffffffffffffff8;
          }
          pwVar18 = (wchar16 *)*plVar4;
          if (pwVar18 == (wchar16 *)0x0) {
            pwVar18 = L"(null)";
          }
          if (local_1030 == 0x7fffffff) {
            uVar19 = 0;
            pwVar7 = pwVar18;
            if (*pwVar18 != L'\0') {
              do {
                pwVar7 = pwVar7 + 1;
              } while (*pwVar7 != L'\0');
              uVar19 = (uint)((ulong)((long)pwVar7 - (long)pwVar18) >> 1);
            }
          }
          else if ((*pwVar18 == L'\0') || (pwVar7 = pwVar18, pwVar18 + local_1030 <= pwVar18)) {
            uVar19 = 0;
          }
          else {
            do {
              pwVar7 = pwVar7 + 1;
              if (pwVar18 + local_1030 <= pwVar7) break;
            } while (*pwVar7 != L'\0');
            uVar19 = (uint)((ulong)((long)pwVar7 - (long)pwVar18) >> 1);
          }
          if (0x1007 < (int)uVar19) goto switchD_05407928_caseD_26;
          pcVar9 = local_1018;
          iVar11 = Strlcpy(pcVar9,pwVar18,0x1008,(ulong)uVar19);
        }
        break;
      case 0x58:
      case 0x62:
      case 0x6f:
      case 0x75:
      case 0x78:
        if (local_102c == 4) {
LAB_05407ee0:
          iVar11 = (int)param_4[3];
          puVar8 = (ulong *)*param_4;
          if ((iVar11 < 0) && (*(int *)(param_4 + 3) = iVar11 + 8, iVar11 + 8 < 1)) {
            puVar8 = (ulong *)(param_4[1] + (long)iVar11);
          }
          else {
            *param_4 = (long)puVar8 + 0xfU & 0xfffffffffffffff8;
          }
          uVar24 = *puVar8;
        }
        else {
          if (local_102c == 5) goto LAB_05407d4c;
          if (local_102c == 0xf) goto LAB_05407ee0;
          if (local_102c != 0x10) {
            iVar11 = (int)param_4[3];
            puVar13 = (uint *)*param_4;
            if ((iVar11 < 0) && (*(int *)(param_4 + 3) = iVar11 + 8, iVar11 + 8 < 1)) {
              puVar13 = (uint *)(param_4[1] + (long)iVar11);
            }
            else {
              *param_4 = (long)puVar13 + 0xbU & 0xfffffffffffffff8;
            }
            uVar19 = *puVar13;
            if ((local_102c == 0xd) || (local_102c == 2)) {
              uVar24 = (ulong)(ushort)uVar19;
            }
            else if ((local_102c == 0xc) || (local_102c == 1)) {
              uVar24 = (ulong)(byte)uVar19;
            }
            else {
              uVar24 = (ulong)uVar19;
            }
            goto LAB_05407f00;
          }
          iVar11 = (int)param_4[3];
          uVar10 = *param_4;
          if (iVar11 < 0) {
            iVar1 = iVar11 + 8;
            *(int *)(param_4 + 3) = iVar1;
            if (0 < iVar1) goto LAB_05407ff8;
            if ((iVar1 != 0) && (*(int *)(param_4 + 3) = iVar11 + 0x10, iVar11 + 0x10 < 1))
            goto LAB_05407f00;
          }
          else {
LAB_05407ff8:
            uVar10 = uVar10 + 0xf & 0xfffffffffffffff8;
          }
          *param_4 = uVar10 + 0xf & 0xfffffffffffffff8;
        }
LAB_05407f00:
        pcVar9 = (char *)WriteLong8((FormatData *)local_1040,uVar24,acStack_10);
        if (pcVar9 != (char *)0x0) goto LAB_05407d7c;
        goto switchD_05407928_caseD_26;
      case 100:
      case 0x69:
        if (local_102c == 5) {
LAB_05407d4c:
          iVar11 = (int)param_4[3];
          plVar6 = (longlong *)*param_4;
          if ((iVar11 < 0) && (*(int *)(param_4 + 3) = iVar11 + 8, iVar11 + 8 < 1)) {
            plVar6 = (longlong *)(param_4[1] + (long)iVar11);
          }
          else {
            *param_4 = (long)plVar6 + 0xfU & 0xfffffffffffffff8;
          }
          pcVar9 = (char *)WriteLongLong8((FormatData *)local_1040,*plVar6,acStack_10);
        }
        else {
          if (((local_102c == 10) || (local_102c == 4)) || (local_102c == 0xf)) {
            iVar11 = (int)param_4[3];
            plVar4 = (long *)*param_4;
            if ((iVar11 < 0) && (*(int *)(param_4 + 3) = iVar11 + 8, iVar11 + 8 < 1)) {
              plVar4 = (long *)(param_4[1] + (long)iVar11);
            }
            else {
              *param_4 = (long)plVar4 + 0xfU & 0xfffffffffffffff8;
            }
            lVar23 = *plVar4;
          }
          else if (local_102c == 0x10) {
            iVar11 = (int)param_4[3];
            uVar10 = *param_4;
            if (iVar11 < 0) {
              iVar1 = iVar11 + 8;
              *(int *)(param_4 + 3) = iVar1;
              if (0 < iVar1) goto LAB_054080e4;
              if ((iVar1 != 0) && (*(int *)(param_4 + 3) = iVar11 + 0x10, iVar11 + 0x10 < 1))
              goto LAB_05407da8;
            }
            else {
LAB_054080e4:
              uVar10 = uVar10 + 0xf & 0xfffffffffffffff8;
            }
            *param_4 = uVar10 + 0xf & 0xfffffffffffffff8;
          }
          else {
            iVar11 = (int)param_4[3];
            piVar12 = (int *)*param_4;
            if ((iVar11 < 0) && (*(int *)(param_4 + 3) = iVar11 + 8, iVar11 + 8 < 1)) {
              piVar12 = (int *)(param_4[1] + (long)iVar11);
            }
            else {
              *param_4 = (long)piVar12 + 0xbU & 0xfffffffffffffff8;
            }
            iVar11 = *piVar12;
            if ((local_102c == 0xd) || (local_102c == 2)) {
              lVar23 = (long)(short)iVar11;
            }
            else if ((local_102c == 0xc) || (local_102c == 1)) {
              lVar23 = (long)(char)iVar11;
            }
            else {
              lVar23 = (long)iVar11;
            }
          }
LAB_05407da8:
          pcVar9 = (char *)WriteLong8((FormatData *)local_1040,lVar23,acStack_10);
        }
        if (pcVar9 == (char *)0x0) goto switchD_05407928_caseD_26;
LAB_05407d7c:
        iVar11 = ((int)auStack_1000 - (int)pcVar9) + 0xfef;
        break;
      case 0x6e:
        iVar11 = (int)param_4[3];
        puVar3 = (undefined8 *)*param_4;
        if ((iVar11 < 0) && (*(int *)(param_4 + 3) = iVar11 + 8, iVar11 + 8 < 1)) {
          puVar3 = (undefined8 *)(param_4[1] + (long)iVar11);
        }
        else {
          *param_4 = (long)puVar3 + 0xfU & 0xfffffffffffffff8;
        }
        plVar4 = (long *)*puVar3;
        switch(local_102c) {
        case 1:
        case 0xc:
          *(char *)plVar4 = (char)iVar22;
          break;
        case 2:
        case 0xd:
          *(short *)plVar4 = (short)iVar22;
          break;
        default:
          *(int *)plVar4 = iVar22;
          break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0xf:
          *plVar4 = (long)iVar22;
        }
        goto LAB_05407800;
      }
      iVar1 = iVar11;
      if (local_1040[0] != 0) {
        if (local_1040[0] == 2) {
LAB_05407c28:
          local_1041 = 0x30;
          if (((*pcVar9 - 0x2bU & 0xfd) == 0) || (iVar11 = iVar1, *pcVar9 == ' ')) {
            iVar11 = (*param_1)(pcVar9,1,param_2,1);
            if (iVar11 == -1) goto LAB_05407888;
            iVar11 = iVar1 + -1;
            pcVar9 = pcVar9 + 1;
          }
        }
        else {
LAB_05407af4:
          local_1041 = 0x20;
          iVar1 = iVar11;
        }
        if (iVar1 < local_1034) {
          do {
            iVar2 = (*param_1)(&local_1041,1,param_2,1);
            if (iVar2 == -1) goto LAB_05407888;
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_1034);
        }
      }
      if (iVar11 != 0) {
        lVar15 = (long)iVar11;
LAB_05407b60:
        iVar11 = (*param_1)(pcVar9,lVar15,param_2,1);
        if (iVar11 == -1) goto LAB_05407888;
      }
      if (local_1040[0] == 0) {
        local_1041 = 0x20;
        if (iVar1 < local_1034) {
          do {
            iVar11 = (*param_1)(&local_1041,1,param_2,1);
            if (iVar11 == -1) goto LAB_05407888;
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_1034);
        }
      }
      cVar20 = *param_3;
      iVar22 = iVar22 + iVar1;
      if (cVar20 == '\0') break;
    } while( true );
  }
  (*param_1)(0,0,param_2,2);
  goto LAB_054078a0;
switchD_05407928_caseD_26:
  iVar11 = (int)param_3 - (int)pcVar21;
  iVar22 = iVar22 + iVar11;
  if ((iVar11 != 0) && (iVar11 = (*param_1)(pcVar21,(long)iVar11,param_2,1), iVar11 == -1)) {
LAB_05407888:
    (*param_1)(0,0,param_2,2);
    iVar22 = -1;
LAB_054078a0:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar22);
    }
    return;
  }
  goto LAB_05407800;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::SprintfLocal::ReadFormat16(char16_t const*, EA::StdC::SprintfLocal::FormatData*,
   std::__va_list*) */

void EA::StdC::SprintfLocal::ReadFormat16(wchar16 *param_1,FormatData *param_2,__va_list *param_3)

{
  int iVar1;
  wchar16 wVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  uint local_18;
  undefined4 uStack_14;
  undefined1 local_10;
  undefined7 uStack_f;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FormatData::FormatData((FormatData *)&local_30);
  wVar2 = param_1[1];
  pwVar3 = param_1 + 1;
  if (wVar2 != L'%') {
    uVar8 = (undefined1)local_28;
    iVar9 = 0;
    do {
      uVar5 = (uint)(ushort)wVar2;
      iVar1 = local_30;
      iVar10 = iVar9;
      switch(uVar5) {
      case 0x20:
        if (iStack_2c != 2) {
          iStack_2c = 3;
        }
        break;
      default:
        goto switchD_054082f4_caseD_21;
      case 0x23:
        uVar8 = 1;
        break;
      case 0x27:
        local_10 = 1;
        break;
      case 0x2b:
        iStack_2c = 2;
        break;
      case 0x2d:
        iVar1 = 0;
        break;
      case 0x30:
        iVar1 = 0;
        if ((local_30 != 0) && (iVar1 = 2, iVar10 = local_30, local_30 == 2)) {
          iVar10 = iVar9;
        }
      }
      local_30 = iVar1;
      pwVar3 = pwVar3 + 1;
      wVar2 = *pwVar3;
      iVar9 = iVar10;
    } while( true );
  }
  pwVar4 = param_1 + 2;
  local_18 = 0x25;
LAB_0540835c:
  *(ulong *)param_2 = CONCAT44(iStack_2c,local_30);
  *(ulong *)(param_2 + 8) = CONCAT44(local_24,local_28);
  *(ulong *)(param_2 + 0x20) = CONCAT71(uStack_f,local_10);
  *(ulong *)(param_2 + 0x10) = CONCAT44(iStack_1c,local_20);
  *(ulong *)(param_2 + 0x18) = CONCAT44(uStack_14,local_18);
  goto LAB_05408374;
switchD_054082f4_caseD_21:
  local_28 = CONCAT31(local_28._1_3_,uVar8);
  pwVar4 = pwVar3;
  if (uVar5 == 0x2a) {
    iVar1 = *(int *)(param_3 + 0x18);
    piVar6 = *(int **)param_3;
    if ((iVar1 < 0) && (*(int *)(param_3 + 0x18) = iVar1 + 8, iVar1 + 8 < 1)) {
      piVar6 = (int *)(*(long *)(param_3 + 8) + (long)iVar1);
    }
    else {
      *(ulong *)param_3 = (long)piVar6 + 0xbU & 0xfffffffffffffff8;
    }
    local_24 = *piVar6;
    if (local_24 < 0) {
      local_24 = -local_24;
      local_30 = 0;
    }
    pwVar4 = pwVar3 + 1;
    uVar5 = (uint)(ushort)pwVar3[1];
  }
  else {
    while (uVar5 - 0x30 < 10) {
      local_24 = (uVar5 - 0x30) + local_24 * 10;
      uVar5 = (uint)(ushort)pwVar4[1];
      pwVar4 = pwVar4 + 1;
    }
  }
  if (0x1000 < local_24) goto LAB_05408358;
  if (*(ushort *)(param_2 + 0x1c) == uVar5) {
    uVar5 = (uint)(ushort)pwVar4[1];
    if (uVar5 == 0x2a) {
      iVar1 = *(int *)(param_3 + 0x18);
      piVar6 = *(int **)param_3;
      if ((iVar1 < 0) && (*(int *)(param_3 + 0x18) = iVar1 + 8, iVar1 + 8 < 1)) {
        piVar6 = (int *)(*(long *)(param_3 + 8) + (long)iVar1);
      }
      else {
        *(ulong *)param_3 = (long)piVar6 + 0xbU & 0xfffffffffffffff8;
      }
      local_20 = *piVar6;
      pwVar4 = pwVar4 + 2;
      uVar5 = (uint)(ushort)*pwVar4;
      if (local_20 < 0) {
        local_20 = 0;
      }
    }
    else {
      uVar7 = uVar5 - 0x30;
      local_20 = 0;
      pwVar4 = pwVar4 + 1;
      if (uVar7 < 10) {
        local_20 = 0;
        do {
          pwVar4 = pwVar4 + 1;
          uVar5 = (uint)(ushort)*pwVar4;
          local_20 = uVar7 + local_20 * 10;
          uVar7 = uVar5 - 0x30;
        } while (uVar7 < 10);
      }
    }
  }
  switch(uVar5) {
  case 0x49:
    wVar2 = pwVar4[1];
    if (wVar2 == L'8') {
      uVar5 = (uint)(ushort)pwVar4[2];
      pwVar4 = pwVar4 + 2;
      iStack_1c = 0xc;
    }
    else if (wVar2 == L'1') {
      if (pwVar4[2] == L'6') {
        uVar5 = (uint)(ushort)pwVar4[3];
        pwVar4 = pwVar4 + 3;
        iStack_1c = 0xd;
      }
      else {
        if ((pwVar4[2] != L'2') || (pwVar4[3] != L'8')) goto LAB_05408358;
        uVar5 = (uint)(ushort)pwVar4[4];
        pwVar4 = pwVar4 + 4;
        iStack_1c = 0x10;
      }
    }
    else if (wVar2 == L'3') {
      if (pwVar4[2] != L'2') goto LAB_05408358;
      uVar5 = (uint)(ushort)pwVar4[3];
      pwVar4 = pwVar4 + 3;
      iStack_1c = 0xe;
    }
    else {
      if ((wVar2 != L'6') || (pwVar4[2] != L'4')) {
LAB_05408358:
        pwVar4 = pwVar4 + 1;
        goto LAB_0540835c;
      }
      uVar5 = (uint)(ushort)pwVar4[3];
      pwVar4 = pwVar4 + 3;
      iStack_1c = 0xf;
    }
    break;
  case 0x4c:
    uVar5 = (uint)(ushort)pwVar4[1];
    pwVar4 = pwVar4 + 1;
    iStack_1c = 10;
    break;
  case 0x68:
    uVar5 = (uint)(ushort)pwVar4[1];
    if (uVar5 == 0x68) {
      uVar5 = (uint)(ushort)pwVar4[2];
      pwVar4 = pwVar4 + 2;
      iStack_1c = 1;
    }
    else {
      pwVar4 = pwVar4 + 1;
      iStack_1c = 2;
    }
    break;
  case 0x6a:
    uVar5 = (uint)(ushort)pwVar4[1];
    pwVar4 = pwVar4 + 1;
    iStack_1c = 6;
    break;
  case 0x6c:
    uVar5 = (uint)(ushort)pwVar4[1];
    if (uVar5 == 0x6c) {
      uVar5 = (uint)(ushort)pwVar4[2];
      pwVar4 = pwVar4 + 2;
      iStack_1c = 5;
    }
    else {
      pwVar4 = pwVar4 + 1;
      iStack_1c = 4;
    }
    break;
  case 0x71:
    uVar5 = (uint)(ushort)pwVar4[1];
    pwVar4 = pwVar4 + 1;
    iStack_1c = 5;
    break;
  case 0x74:
    uVar5 = (uint)(ushort)pwVar4[1];
    pwVar4 = pwVar4 + 1;
    iStack_1c = 8;
    break;
  case 0x7a:
    uVar5 = (uint)(ushort)pwVar4[1];
    pwVar4 = pwVar4 + 1;
    iStack_1c = 7;
  }
  local_18 = uVar5;
  switch(uVar5) {
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x61:
  case 0x65:
  case 0x66:
LAB_0540853c:
    if (local_20 != 0x7fffffff) goto LAB_054083f8;
    local_20 = 6;
    break;
  default:
switchD_0540844c_caseD_42:
    goto LAB_054083f8;
  case 0x43:
  case 0x53:
  case 99:
  case 0x73:
    if (local_30 == 2) {
      local_30 = iVar9;
    }
    if (iStack_1c == 2) {
LAB_054086e8:
      iStack_1c = 1;
      goto switchD_0540844c_caseD_42;
    }
    if (iStack_1c != 4) {
      if (iStack_1c != 0) goto LAB_054083f8;
      if (uVar5 != 0x73) goto LAB_054086e8;
    }
    iStack_1c = 0xb;
    goto LAB_054083f8;
  case 0x47:
  case 0x67:
    if (local_20 != 0) goto LAB_0540853c;
LAB_05408500:
    local_20 = 1;
    break;
  case 0x58:
  case 0x62:
  case 100:
  case 0x69:
  case 0x6f:
  case 0x75:
  case 0x78:
    if (local_20 == 0x7fffffff) goto LAB_05408500;
    if (local_30 == 2) {
      local_30 = 1;
    }
LAB_054083f8:
    if ((local_20 - 0x1001U < 0x7fffeffe) && ((uVar5 & 0xffffffdf) != 0x53)) {
      local_18 = 0;
    }
    break;
  case 0x70:
    iStack_1c = 0xf;
    local_20 = 2;
    local_18 = 0x78;
  }
  pwVar4 = pwVar4 + 1;
  *(ulong *)(param_2 + 0x20) = CONCAT71(uStack_f,local_10);
  *(ulong *)param_2 = CONCAT44(iStack_2c,local_30);
  *(ulong *)(param_2 + 8) = CONCAT44(local_24,local_28);
  *(ulong *)(param_2 + 0x10) = CONCAT44(iStack_1c,local_20);
  *(ulong *)(param_2 + 0x18) = CONCAT44(uStack_14,local_18);
LAB_05408374:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pwVar4);
  }
  return;
}


/* EA::StdC::SprintfLocal::WriteLong16(EA::StdC::SprintfLocal::FormatData const&, long, char16_t*)
    */

wchar16 * EA::StdC::SprintfLocal::WriteLong16(FormatData *param_1,long param_2,wchar16 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  wchar16 *pwVar6;
  uint uVar7;
  wchar16 *pwVar8;
  ulong uVar9;
  uint uVar10;
  wchar16 *pwVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar12 = *(int *)(param_1 + 0x10);
  param_3[-1] = L'\0';
  pwVar8 = param_3 + -1;
  if (((param_2 < 1) && (iVar12 < 1)) && (param_1[8] == (FormatData)0x0)) {
    return pwVar8;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  switch(iVar2) {
  case 0x58:
  case 0x78:
    iVar15 = 0x10;
    uVar10 = 0xf;
    lVar14 = 4;
    if (iVar2 != 0x78) break;
    pwVar8 = param_3 + -2;
    uVar10 = 1;
    do {
      uVar7 = uVar10;
      pwVar6 = pwVar8;
      uVar10 = (uint)param_2 & 0xf;
      param_2 = (ulong)param_2 >> 4;
      sVar5 = (short)uVar10;
      if (uVar10 < 10) {
        *pwVar6 = sVar5 + L'0';
      }
      else {
        *pwVar6 = sVar5 + L'W';
      }
      pwVar8 = pwVar6 + -1;
      uVar10 = uVar7 + 1;
    } while (param_2 != 0);
    goto LAB_05408b78;
  default:
    iVar16 = *(int *)(param_1 + 4);
    iVar17 = 0;
    if (param_2 < 0) {
      param_2 = -param_2;
      iVar17 = 1;
    }
    goto LAB_054087d0;
  case 0x62:
    iVar15 = 2;
    uVar10 = 1;
    lVar14 = 1;
    break;
  case 0x6f:
    iVar15 = 8;
    uVar10 = 7;
    lVar14 = 3;
    break;
  case 0x75:
    iVar17 = 0;
    iVar16 = 0;
LAB_054087d0:
    uVar7 = 0;
    uVar10 = uVar7;
    if (param_1[0x20] == (FormatData)0x0) {
      do {
        pwVar6 = pwVar8 + -1;
        uVar7 = uVar7 + 1;
        uVar9 = (ulong)param_2 / 10;
        pwVar8[-1] = (short)param_2 + (short)uVar9 * -10 + L'0';
        param_2 = uVar9;
        pwVar8 = pwVar6;
      } while (uVar9 != 0);
    }
    else {
      while( true ) {
        pwVar11 = pwVar8;
        pwVar6 = pwVar11 + -1;
        uVar7 = uVar10 + 1;
        uVar9 = (ulong)param_2 / 10;
        pwVar11[-1] = (short)param_2 + (short)uVar9 * -10 + L'0';
        if (uVar9 == 0) break;
        uVar1 = uVar10 + 2;
        param_2 = uVar9;
        pwVar8 = pwVar6;
        uVar10 = uVar7;
        if ((uVar1 & 3) == 0) {
          pwVar11[-2] = (wchar16)*(undefined4 *)(param_1 + 0x24);
          pwVar8 = pwVar11 + -2;
          uVar10 = uVar1;
        }
      }
    }
    iVar15 = 10;
    if (*(int *)param_1 == 2) {
      if ((iVar16 != 0) || (iVar16 = 10, iVar17 != 0)) {
        iVar12 = *(int *)(param_1 + 0xc) + -1;
        goto LAB_05408828;
      }
      goto LAB_05408ac8;
    }
    goto LAB_05408828;
  }
  pwVar8 = param_3 + -2;
  uVar1 = 1;
  do {
    while( true ) {
      uVar7 = uVar1;
      pwVar6 = pwVar8;
      uVar1 = uVar10 & (uint)param_2;
      param_2 = (ulong)param_2 >> lVar14;
      sVar5 = (short)uVar1;
      if (9 < uVar1) break;
      *pwVar6 = sVar5 + L'0';
      pwVar8 = pwVar6 + -1;
      uVar1 = uVar7 + 1;
      if (param_2 == 0) goto LAB_054089a0;
    }
    *pwVar6 = sVar5 + L'7';
    pwVar8 = pwVar6 + -1;
    uVar1 = uVar7 + 1;
  } while (param_2 != 0);
LAB_054089a0:
  if (iVar15 == 8) {
    iVar17 = (int)param_2;
    if ((param_1[8] != (FormatData)0x0) && (*pwVar6 != L'0')) {
      uVar7 = uVar7 + 1;
      pwVar6[-1] = L'0';
      pwVar6 = pwVar6 + -1;
    }
  }
  else {
LAB_05408b78:
    iVar17 = 0;
  }
  iVar16 = iVar15;
  if (*(int *)param_1 == 2) {
LAB_05408ac8:
    iVar15 = iVar16;
    if ((param_1[8] == (FormatData)0x0) || ((iVar15 != 0x10 && (iVar15 != 2)))) {
      iVar12 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar12 = *(int *)(param_1 + 0xc) + -2;
    }
  }
LAB_05408828:
  if (iVar12 <= (int)uVar7) goto LAB_054088fc;
  uVar4 = iVar12 - uVar7;
  uVar3 = ~uVar7;
  uVar10 = (uVar4 - 8 >> 3) + 1;
  uVar1 = uVar10 * 8;
  pwVar8 = pwVar6;
  if (uVar3 + iVar12 < 7) {
LAB_05408888:
    pwVar8[-1] = L'0';
    if ((((((int)(uVar7 + 1) < iVar12) && (pwVar8[-2] = L'0', (int)(uVar7 + 2) < iVar12)) &&
         (pwVar8[-3] = L'0', (int)(uVar7 + 3) < iVar12)) &&
        ((pwVar8[-4] = L'0', (int)(uVar7 + 4) < iVar12 &&
         (pwVar8[-5] = L'0', (int)(uVar7 + 5) < iVar12)))) &&
       (pwVar8[-6] = L'0', (int)(uVar7 + 6) < iVar12)) {
      pwVar8[-7] = L'0';
    }
  }
  else {
    uVar13 = 0;
    do {
      builtin_memcpy(pwVar8 + 0x7ffffffffffffff8,L"00000000",0x10);
      uVar13 = uVar13 + 1;
      pwVar8 = pwVar8 + -8;
    } while (uVar13 < uVar10);
    uVar7 = uVar7 + uVar1;
    pwVar8 = pwVar6 + -(ulong)uVar1;
    if (uVar1 != uVar4) goto LAB_05408888;
  }
  pwVar6 = (wchar16 *)((long)pwVar6 + ((ulong)(uVar3 + iVar12) << 1 ^ 0xfffffffffffffffe));
LAB_054088fc:
  if (iVar15 == 10) {
    if ((iVar2 == 0x69) || (iVar2 == 100)) {
      if (iVar17 != 0) {
        pwVar6[-1] = L'-';
        return pwVar6 + -1;
      }
      if (*(int *)(param_1 + 4) == 2) {
        pwVar6[-1] = L'+';
        return pwVar6 + -1;
      }
      if (*(int *)(param_1 + 4) == 3) {
        pwVar6[-1] = L' ';
        return pwVar6 + -1;
      }
    }
  }
  else if ((param_1[8] != (FormatData)0x0) && ((iVar15 == 0x10 || (iVar15 == 2)))) {
    pwVar6[-1] = (wchar16)iVar2;
    pwVar6[-2] = L'0';
    return pwVar6 + -2;
  }
  return pwVar6;
}


/* EA::StdC::SprintfLocal::WriteLongLong16(EA::StdC::SprintfLocal::FormatData const&, long long,
   char16_t*) */

wchar16 * EA::StdC::SprintfLocal::WriteLongLong16
                    (FormatData *param_1,longlong param_2,wchar16 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  wchar16 *pwVar6;
  uint uVar7;
  wchar16 *pwVar8;
  ulong uVar9;
  uint uVar10;
  wchar16 *pwVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar12 = *(int *)(param_1 + 0x10);
  param_3[-1] = L'\0';
  pwVar8 = param_3 + -1;
  if (((param_2 < 1) && (iVar12 < 1)) && (param_1[8] == (FormatData)0x0)) {
    return pwVar8;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  switch(iVar2) {
  case 0x58:
  case 0x78:
    iVar15 = 0x10;
    uVar10 = 0xf;
    lVar14 = 4;
    if (iVar2 != 0x78) break;
    pwVar8 = param_3 + -2;
    uVar10 = 1;
    do {
      uVar7 = uVar10;
      pwVar6 = pwVar8;
      uVar10 = (uint)param_2 & 0xf;
      param_2 = (ulong)param_2 >> 4;
      sVar5 = (short)uVar10;
      if (uVar10 < 10) {
        *pwVar6 = sVar5 + L'0';
      }
      else {
        *pwVar6 = sVar5 + L'W';
      }
      pwVar8 = pwVar6 + -1;
      uVar10 = uVar7 + 1;
    } while (param_2 != 0);
    goto LAB_05408f68;
  default:
    iVar16 = *(int *)(param_1 + 4);
    iVar17 = 0;
    if (param_2 < 0) {
      param_2 = -param_2;
      iVar17 = 1;
    }
    goto LAB_05408bc0;
  case 0x62:
    iVar15 = 2;
    uVar10 = 1;
    lVar14 = 1;
    break;
  case 0x6f:
    iVar15 = 8;
    uVar10 = 7;
    lVar14 = 3;
    break;
  case 0x75:
    iVar17 = 0;
    iVar16 = 0;
LAB_05408bc0:
    uVar7 = 0;
    uVar10 = uVar7;
    if (param_1[0x20] == (FormatData)0x0) {
      do {
        pwVar6 = pwVar8 + -1;
        uVar7 = uVar7 + 1;
        uVar9 = (ulong)param_2 / 10;
        pwVar8[-1] = (short)param_2 + (short)uVar9 * -10 + L'0';
        param_2 = uVar9;
        pwVar8 = pwVar6;
      } while (uVar9 != 0);
    }
    else {
      while( true ) {
        pwVar11 = pwVar8;
        pwVar6 = pwVar11 + -1;
        uVar7 = uVar10 + 1;
        uVar9 = (ulong)param_2 / 10;
        pwVar11[-1] = (short)param_2 + (short)uVar9 * -10 + L'0';
        if (uVar9 == 0) break;
        uVar1 = uVar10 + 2;
        param_2 = uVar9;
        pwVar8 = pwVar6;
        uVar10 = uVar7;
        if ((uVar1 & 3) == 0) {
          pwVar11[-2] = (wchar16)*(undefined4 *)(param_1 + 0x24);
          pwVar8 = pwVar11 + -2;
          uVar10 = uVar1;
        }
      }
    }
    iVar15 = 10;
    if (*(int *)param_1 == 2) {
      if ((iVar16 != 0) || (iVar16 = 10, iVar17 != 0)) {
        iVar12 = *(int *)(param_1 + 0xc) + -1;
        goto LAB_05408c18;
      }
      goto LAB_05408eb8;
    }
    goto LAB_05408c18;
  }
  pwVar8 = param_3 + -2;
  uVar1 = 1;
  do {
    while( true ) {
      uVar7 = uVar1;
      pwVar6 = pwVar8;
      uVar1 = uVar10 & (uint)param_2;
      param_2 = (ulong)param_2 >> lVar14;
      sVar5 = (short)uVar1;
      if (9 < uVar1) break;
      *pwVar6 = sVar5 + L'0';
      pwVar8 = pwVar6 + -1;
      uVar1 = uVar7 + 1;
      if (param_2 == 0) goto LAB_05408d90;
    }
    *pwVar6 = sVar5 + L'7';
    pwVar8 = pwVar6 + -1;
    uVar1 = uVar7 + 1;
  } while (param_2 != 0);
LAB_05408d90:
  if (iVar15 == 8) {
    iVar17 = (int)param_2;
    if ((param_1[8] != (FormatData)0x0) && (*pwVar6 != L'0')) {
      uVar7 = uVar7 + 1;
      pwVar6[-1] = L'0';
      pwVar6 = pwVar6 + -1;
    }
  }
  else {
LAB_05408f68:
    iVar17 = 0;
  }
  iVar16 = iVar15;
  if (*(int *)param_1 == 2) {
LAB_05408eb8:
    iVar15 = iVar16;
    if ((param_1[8] == (FormatData)0x0) || ((iVar15 != 0x10 && (iVar15 != 2)))) {
      iVar12 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar12 = *(int *)(param_1 + 0xc) + -2;
    }
  }
LAB_05408c18:
  if (iVar12 <= (int)uVar7) goto LAB_05408cec;
  uVar4 = iVar12 - uVar7;
  uVar3 = ~uVar7;
  uVar10 = (uVar4 - 8 >> 3) + 1;
  uVar1 = uVar10 * 8;
  pwVar8 = pwVar6;
  if (uVar3 + iVar12 < 7) {
LAB_05408c78:
    pwVar8[-1] = L'0';
    if ((((((int)(uVar7 + 1) < iVar12) && (pwVar8[-2] = L'0', (int)(uVar7 + 2) < iVar12)) &&
         (pwVar8[-3] = L'0', (int)(uVar7 + 3) < iVar12)) &&
        ((pwVar8[-4] = L'0', (int)(uVar7 + 4) < iVar12 &&
         (pwVar8[-5] = L'0', (int)(uVar7 + 5) < iVar12)))) &&
       (pwVar8[-6] = L'0', (int)(uVar7 + 6) < iVar12)) {
      pwVar8[-7] = L'0';
    }
  }
  else {
    uVar13 = 0;
    do {
      builtin_memcpy(pwVar8 + 0x7ffffffffffffff8,L"00000000",0x10);
      uVar13 = uVar13 + 1;
      pwVar8 = pwVar8 + -8;
    } while (uVar13 < uVar10);
    uVar7 = uVar7 + uVar1;
    pwVar8 = pwVar6 + -(ulong)uVar1;
    if (uVar1 != uVar4) goto LAB_05408c78;
  }
  pwVar6 = (wchar16 *)((long)pwVar6 + ((ulong)(uVar3 + iVar12) << 1 ^ 0xfffffffffffffffe));
LAB_05408cec:
  if (iVar15 == 10) {
    if ((iVar2 == 0x69) || (iVar2 == 100)) {
      if (iVar17 != 0) {
        pwVar6[-1] = L'-';
        return pwVar6 + -1;
      }
      if (*(int *)(param_1 + 4) == 2) {
        pwVar6[-1] = L'+';
        return pwVar6 + -1;
      }
      if (*(int *)(param_1 + 4) == 3) {
        pwVar6[-1] = L' ';
        return pwVar6 + -1;
      }
    }
  }
  else if ((param_1[8] != (FormatData)0x0) && ((iVar15 == 0x10 || (iVar15 == 2)))) {
    pwVar6[-1] = (wchar16)iVar2;
    pwVar6[-2] = L'0';
    return pwVar6 + -2;
  }
  return pwVar6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::SprintfLocal::WriteDouble16(EA::StdC::SprintfLocal::FormatData const&, double,
   char16_t*) */

void EA::StdC::SprintfLocal::WriteDouble16(FormatData *param_1,double param_2,wchar16 *param_3)

{
  bool bVar1;
  bool bVar2;
  FormatData FVar3;
  uint uVar4;
  short sVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  wchar16 *pwVar10;
  wchar16 wVar11;
  wchar16 *pwVar12;
  int iVar13;
  uint uVar14;
  wchar16 *pwVar15;
  ulong uVar16;
  wchar16 *pwVar17;
  ulong uVar18;
  byte bVar19;
  ulong uVar20;
  wchar16 *pwVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  uint local_2d0;
  undefined4 local_2cc;
  wchar16 local_2c8 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar6 = FUN_05405f60();
  if (cVar6 != '\0') {
    iVar8 = *(int *)(param_1 + 0x18);
    param_3[-1] = L'\0';
    if (iVar8 < 0x61) {
      param_3[-2] = L'N';
      param_3[-3] = L'A';
      param_3[-4] = L'N';
    }
    else {
      param_3[-2] = L'n';
      param_3[-3] = L'a';
      param_3[-4] = L'n';
    }
LAB_05408fe4:
    pwVar15 = param_3 + -4;
    cVar6 = IsNeg(param_2);
    if (cVar6 != '\0') {
      pwVar15 = param_3 + -5;
      *pwVar15 = L'-';
    }
    goto LAB_05409004;
  }
  cVar6 = FUN_05405f58();
  if (cVar6 != '\0') {
    iVar8 = *(int *)(param_1 + 0x18);
    param_3[-1] = L'\0';
    if (iVar8 < 0x61) {
      param_3[-2] = L'F';
      param_3[-3] = L'N';
      param_3[-4] = L'I';
    }
    else {
      param_3[-2] = L'f';
      param_3[-3] = L'n';
      param_3[-4] = L'i';
    }
    goto LAB_05408fe4;
  }
  iVar8 = *(int *)(param_1 + 0x10);
  uVar7 = *(uint *)(param_1 + 0x18);
  pwVar15 = (wchar16 *)0x0;
  param_3[-1] = L'\0';
  if (0x1008 < iVar8) goto LAB_05409004;
  pwVar17 = local_2c8;
  local_2c8[0] = L'\0';
  pwVar21 = param_3 + -1;
  pwVar15 = pwVar21;
  pwVar10 = pwVar21;
  switch(uVar7) {
  case 0x45:
  case 0x65:
    EcvtBuf(param_2,iVar8 + 1,(int *)&local_2d0,&local_2cc,pwVar17);
    if (param_2 == 0.0) {
      uVar24 = uVar7 & 0xffff;
      bVar22 = 0;
      iVar8 = Strlen(pwVar17);
      bVar2 = false;
      if (param_3 + -2 <= pwVar21) {
        uVar23 = 0;
LAB_05409324:
        pwVar10 = pwVar15 + -1;
        pwVar15[-1] = L'0';
        if (param_3 + -2 <= pwVar10) {
          pwVar15[-2] = L'0';
          pwVar10 = pwVar15 + -2;
        }
        goto LAB_05409340;
      }
LAB_05409344:
      wVar11 = L'+';
    }
    else {
      bVar2 = false;
      uVar23 = local_2d0 - 1;
      uVar24 = uVar7 & 0xffff;
      bVar22 = 0;
LAB_054092b0:
      iVar8 = Strlen(pwVar17);
      uVar9 = (long)(int)uVar23 >> 0x3f;
      uVar9 = ((long)(int)uVar23 ^ uVar9) - uVar9;
      uVar20 = uVar9 & 0xffffffff;
      uVar7 = (uint)uVar9;
      while (uVar7 != 0) {
        iVar13 = (int)uVar20;
        uVar7 = iVar13 / 10;
        sVar5 = (short)uVar20;
        uVar20 = (ulong)uVar7;
        pwVar10 = pwVar10 + -1;
        *pwVar10 = sVar5 + (short)(iVar13 / 10) * -10 + L'0';
      }
      pwVar15 = pwVar10;
      if (param_3 + -2 <= pwVar10) goto LAB_05409324;
LAB_05409340:
      if (-1 < (int)uVar23) goto LAB_05409344;
      wVar11 = L'-';
    }
    pwVar10[-1] = wVar11;
    pwVar10[-2] = (wchar16)uVar24;
    pwVar10 = pwVar10 + -2;
    if (local_2c8 + 1 < pwVar17 + iVar8) {
      pwVar15 = (wchar16 *)((long)&local_2cc + (long)iVar8 * 2 + 2);
      uVar9 = (long)pwVar15 + (1 - (long)(local_2c8 + 1));
      while( true ) {
        if ((*pwVar15 != L'0') || (bVar1 = bVar22 == 0, bVar22 = 1, bVar1)) {
          pwVar10[-1] = *pwVar15;
          bVar22 = 0;
          pwVar10 = pwVar10 + -1;
        }
        if (pwVar15 == (wchar16 *)((long)(pwVar17 + iVar8) + (~uVar9 & 0xfffffffffffffffe))) break;
        pwVar15 = pwVar15 + -1;
      }
      if ((ushort)*pwVar10 == uVar24) goto LAB_054095ac;
LAB_054095c0:
      if ((1 < iVar8) || (param_1[8] != (FormatData)0x0)) {
        pwVar10[-1] = (wchar16)*(undefined4 *)(param_1 + 0x1c);
        pwVar10 = pwVar10 + -1;
      }
    }
    else {
LAB_054095ac:
      if (!bVar2) goto LAB_054095c0;
    }
    pwVar15 = pwVar10 + -1;
    pwVar10[-1] = local_2c8[0];
    goto LAB_05409464;
  case 0x46:
  case 0x66:
    FcvtBuf(param_2,iVar8,(int *)&local_2d0,&local_2cc,pwVar17);
    uVar7 = Strlen(pwVar17);
    uVar9 = (ulong)uVar7;
    uVar20 = (ulong)local_2d0;
    if ((param_1[8] == (FormatData)0x0) || ((int)local_2d0 < (int)uVar7)) {
      bVar22 = 0;
      bVar19 = bVar22;
    }
    else {
      bVar19 = 0;
      pwVar15 = param_3 + -2;
      param_3[-2] = (wchar16)*(undefined4 *)(param_1 + 0x1c);
      bVar22 = 0;
    }
    break;
  default:
    EcvtBuf(param_2,iVar8,(int *)&local_2d0,&local_2cc,pwVar17);
    uVar23 = local_2d0 - 1;
    bVar22 = (byte)param_1[8] ^ 1;
    if ((iVar8 <= (int)uVar23) || ((int)uVar23 < -4)) {
      bVar2 = true;
      uVar24 = 0x45;
      if (uVar7 == 0x67) {
        uVar24 = 0x65;
      }
      goto LAB_054092b0;
    }
    if (-1 < (int)uVar23) {
      iVar8 = iVar8 + ~uVar23;
    }
    FcvtBuf(param_2,iVar8,(int *)&local_2d0,&local_2cc,pwVar17);
    uVar9 = Strlen(pwVar17);
    uVar9 = uVar9 & 0xffffffff;
    uVar20 = (ulong)local_2d0;
    bVar19 = 1;
  }
  uVar16 = -(uVar20 >> 0x1f) & 0xfffffffe00000000 | uVar20 << 1;
  uVar18 = -(uVar9 >> 0x1f) & 0xfffffffe00000000 | uVar9 << 1;
  pwVar10 = (wchar16 *)((long)pwVar17 + (uVar16 - 2));
  pwVar12 = (wchar16 *)((long)pwVar17 + (uVar18 - 2));
  if ((long)iVar8 < (long)pwVar12 - (long)pwVar10 >> 1) {
    pwVar12 = pwVar10 + iVar8;
  }
  if (pwVar10 < pwVar12) {
    do {
      if (((pwVar12 < pwVar17) || ((wchar16 *)((long)pwVar17 + uVar18) < pwVar12)) ||
         (wVar11 = *pwVar12, wVar11 == L'0')) {
        bVar2 = bVar22 == 0;
        bVar22 = 1;
        if (bVar2) {
          wVar11 = L'0';
          goto LAB_0540923c;
        }
      }
      else {
LAB_0540923c:
        pwVar15[-1] = wVar11;
        pwVar15 = pwVar15 + -1;
        bVar22 = 0;
      }
      pwVar12 = pwVar12 + -1;
    } while (pwVar10 < pwVar12);
  }
  if (((*pwVar15 != L'\0') || (bVar19 == 0)) && ((int)uVar20 < (int)uVar9)) {
    pwVar15 = pwVar15 + -1;
    *pwVar15 = (wchar16)*(undefined4 *)(param_1 + 0x1c);
  }
  if ((int)uVar20 < 1) {
    pwVar15 = pwVar15 + -1;
    *pwVar15 = L'0';
  }
  else {
    pwVar10 = (wchar16 *)((long)pwVar17 + uVar16);
    if (pwVar17 < pwVar10) {
      FVar3 = param_1[0x20];
      iVar8 = 0;
      do {
        pwVar10 = pwVar10 + -1;
        pwVar15[-1] = *pwVar10;
        pwVar12 = pwVar15;
        while( true ) {
          iVar8 = iVar8 + 1;
          pwVar15 = pwVar12 + -1;
          if ((pwVar17 >= pwVar10) || (FVar3 == (FormatData)0x0)) break;
          if (iVar8 == (iVar8 / 3) * 3) {
            pwVar15 = pwVar12 + -2;
            pwVar12[-2] = (wchar16)*(undefined4 *)(param_1 + 0x24);
          }
          pwVar10 = pwVar10 + -1;
          pwVar15[-1] = *pwVar10;
          pwVar12 = pwVar15;
        }
      } while (pwVar17 < pwVar10);
    }
  }
LAB_05409464:
  if (local_2cc == 0) {
    if (*(int *)(param_1 + 4) == 2) {
      pwVar15 = pwVar15 + -1;
      *pwVar15 = L'+';
    }
    else if (*(int *)(param_1 + 4) == 3) {
      pwVar15 = pwVar15 + -1;
      *pwVar15 = L' ';
    }
  }
  else {
    pwVar15 = pwVar15 + -1;
    *pwVar15 = L'-';
  }
  if (*(int *)param_1 != 1) goto LAB_05409004;
  iVar13 = *(int *)(param_1 + 0xc);
  iVar8 = (int)((long)pwVar21 - (long)pwVar15 >> 1);
  if (iVar13 <= iVar8) goto LAB_05409004;
  uVar24 = iVar13 - iVar8;
  uVar4 = (iVar13 + -1) - iVar8;
  uVar7 = (uVar24 - 8 >> 3) + 1;
  uVar23 = uVar7 * 8;
  pwVar17 = pwVar15;
  if (uVar4 < 7) {
LAB_054094fc:
    pwVar17[-1] = L' ';
    if (((((iVar8 + 1 < iVar13) && (pwVar17[-2] = L' ', iVar8 + 2 < iVar13)) &&
         (pwVar17[-3] = L' ', iVar8 + 3 < iVar13)) &&
        ((pwVar17[-4] = L' ', iVar8 + 4 < iVar13 && (pwVar17[-5] = L' ', iVar8 + 5 < iVar13)))) &&
       (pwVar17[-6] = L' ', iVar8 + 6 < iVar13)) {
      pwVar17[-7] = L' ';
    }
  }
  else {
    uVar14 = 0;
    do {
      builtin_memcpy(pwVar17 + 0x7ffffffffffffff8,L"        ",0x10);
      uVar14 = uVar14 + 1;
      pwVar17 = pwVar17 + -8;
    } while (uVar14 < uVar7);
    iVar8 = uVar23 + iVar8;
    pwVar17 = pwVar15 + -(ulong)uVar23;
    if (uVar24 != uVar23) goto LAB_054094fc;
  }
  pwVar15 = (wchar16 *)((long)pwVar15 + ((ulong)uVar4 << 1 ^ 0xfffffffffffffffe));
LAB_05409004:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pwVar15);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::SprintfLocal::VprintfCore(int (*)(char16_t const*, unsigned long, void*,
   EA::StdC::WriteFunctionState), void*, char16_t const*, std::__va_list) */

void EA::StdC::SprintfLocal::VprintfCore
               (code *param_1,undefined8 param_2,wchar16 *param_3,ulong *param_4)

{
  wchar16 wVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  wchar32 *pwVar6;
  longlong *plVar7;
  wchar16 *pwVar8;
  ulong *puVar9;
  ulong uVar10;
  wchar16 *pwVar11;
  byte *pbVar12;
  int *piVar13;
  uint *puVar14;
  double *pdVar15;
  long lVar16;
  undefined4 *puVar17;
  wchar32 *pwVar18;
  char *pcVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined2 local_204a;
  int local_2048 [3];
  int local_203c;
  int local_2038;
  int local_2034;
  undefined4 local_2030;
  wchar16 local_2020 [4104];
  wchar16 awStack_10 [4];
  long local_8;
  
  uVar24 = 0;
  uVar23 = 0;
  local_8 = ___stack_chk_guard;
  iVar21 = 0;
  FormatData::FormatData((FormatData *)local_2048);
  (*param_1)(0,0,param_2,0);
LAB_05409724:
  wVar1 = *param_3;
  if (wVar1 != L'\0') {
    do {
      pwVar11 = param_3;
      if (wVar1 != L'%') {
        do {
          pwVar11 = pwVar11 + 1;
          wVar1 = *pwVar11;
          if (wVar1 == L'%') break;
        } while (wVar1 != L'\0');
        iVar2 = (int)((long)pwVar11 - (long)param_3 >> 1);
        if (iVar2 != 0) {
          iVar3 = (*param_1)(param_3,(long)iVar2,param_2,1);
          if (iVar3 == -1) goto LAB_054097b4;
          wVar1 = *pwVar11;
          iVar21 = iVar21 + iVar2;
          param_3 = pwVar11;
        }
        if (wVar1 == L'\0') goto LAB_05409724;
      }
      param_3 = (wchar16 *)ReadFormat16(pwVar11,(FormatData *)local_2048,(__va_list *)param_4);
      switch(local_2030) {
      case 0x25:
        local_2020[0] = L'%';
        goto LAB_05409a80;
      default:
        goto switchD_05409854_caseD_26;
      case 0x41:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x61:
      case 0x65:
      case 0x66:
      case 0x67:
        if (local_2034 == 10) {
          iVar2 = *(int *)((long)param_4 + 0x1c);
          pdVar15 = (double *)*param_4;
          if ((iVar2 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar2 + 0x10, iVar2 + 0x10 < 1)) {
            pdVar15 = (double *)(param_4[2] + (long)iVar2);
          }
          else {
            *param_4 = (long)pdVar15 + 0xfU & 0xfffffffffffffff8;
          }
        }
        else {
          iVar2 = *(int *)((long)param_4 + 0x1c);
          pdVar15 = (double *)*param_4;
          if ((iVar2 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar2 + 0x10, iVar2 + 0x10 < 1)) {
            pdVar15 = (double *)(param_4[2] + (long)iVar2);
          }
          else {
            *param_4 = (long)pdVar15 + 0xfU & 0xfffffffffffffff8;
          }
        }
        pwVar8 = (wchar16 *)WriteDouble16((FormatData *)local_2048,*pdVar15,awStack_10);
        if (pwVar8 == (wchar16 *)0x0) goto switchD_05409854_caseD_26;
        uVar22 = (ulong)((int)((long)awStack_10 - (long)pwVar8 >> 1) - 1);
        break;
      case 0x43:
      case 99:
        switch(local_2034) {
        case 1:
        case 0xc:
          iVar2 = (int)param_4[3];
          pbVar12 = (byte *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            pbVar12 = (byte *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (ulong)(pbVar12 + 0xb) & 0xfffffffffffffff8;
          }
          local_2020[0] = (ushort)*pbVar12;
          break;
        default:
          goto switchD_05409854_caseD_26;
        case 0xb:
        case 0xd:
        case 0xe:
          iVar2 = (int)param_4[3];
          puVar17 = (undefined4 *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            puVar17 = (undefined4 *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)puVar17 + 0xbU & 0xfffffffffffffff8;
          }
          local_2020[0] = (wchar16)*puVar17;
        }
LAB_05409a80:
        if (local_2048[0] != 0) {
          if (local_2048[0] == 2) {
            uVar22 = 1;
            pwVar8 = local_2020;
            goto LAB_05409b58;
          }
          uVar22 = 1;
          pwVar8 = local_2020;
          goto LAB_05409a28;
        }
        lVar16 = 1;
        pwVar8 = local_2020;
        uVar22 = 1;
        goto LAB_05409a94;
      case 0x53:
      case 0x73:
        switch(local_2034) {
        case 1:
        case 0xc:
          iVar2 = (int)param_4[3];
          puVar4 = (undefined8 *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            puVar4 = (undefined8 *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
          }
          pcVar19 = (char *)*puVar4;
          if ((byte *)pcVar19 == (byte *)0x0) {
            pcVar19 = "(null)";
          }
          if (local_2038 == 0x7fffffff) {
            uVar22 = (ulong)(byte)*pcVar19;
            pbVar12 = (byte *)pcVar19;
            if (*pcVar19 != 0) {
              do {
                pbVar12 = pbVar12 + 1;
              } while (*pbVar12 != 0);
              uVar22 = (ulong)(uint)((int)pbVar12 - (int)pcVar19);
            }
          }
          else if ((*pcVar19 == 0) || (pbVar12 = (byte *)pcVar19, pcVar19 + local_2038 <= pcVar19))
          {
            uVar22 = 0;
          }
          else {
            do {
              pbVar12 = pbVar12 + 1;
              if (pcVar19 + local_2038 <= pbVar12) break;
            } while (*pbVar12 != 0);
            uVar22 = (ulong)(uint)((int)pbVar12 - (int)pcVar19);
          }
          if (0x1007 < (int)uVar22) goto switchD_05409854_caseD_26;
          pwVar8 = local_2020;
          uVar10 = Strlcpy(pwVar8,pcVar19,0x1008,uVar22);
          uVar22 = uVar10 & 0xffffffff;
          if ((int)uVar10 < 0) {
            local_2020[0] = L'\0';
            goto switchD_05409854_caseD_26;
          }
          break;
        default:
          goto switchD_05409854_caseD_26;
        case 0xb:
        case 0xe:
          iVar2 = (int)param_4[3];
          plVar5 = (long *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            plVar5 = (long *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)plVar5 + 0xfU & 0xfffffffffffffff8;
          }
          pwVar18 = (wchar32 *)*plVar5;
          if (pwVar18 == (wchar32 *)0x0) {
            pwVar18 = L"(null)";
          }
          if (local_2038 == 0x7fffffff) {
            uVar20 = 0;
            pwVar6 = pwVar18;
            if (*pwVar18 != L'\0') {
              do {
                pwVar6 = pwVar6 + 1;
              } while (*pwVar6 != L'\0');
              uVar20 = (uint)((ulong)((long)pwVar6 - (long)pwVar18) >> 2);
            }
          }
          else if ((*pwVar18 == L'\0') || (pwVar6 = pwVar18, pwVar18 + local_2038 <= pwVar18)) {
            uVar20 = 0;
          }
          else {
            do {
              pwVar6 = pwVar6 + 1;
              if (pwVar18 + local_2038 <= pwVar6) break;
            } while (*pwVar6 != L'\0');
            uVar20 = (uint)((ulong)((long)pwVar6 - (long)pwVar18) >> 2);
          }
          if (0x1007 < (int)uVar20) goto switchD_05409854_caseD_26;
          pwVar8 = local_2020;
          uVar10 = Strlcpy(pwVar8,pwVar18,0x1008,(ulong)uVar20);
          uVar22 = uVar10 & 0xffffffff;
          if ((int)uVar10 < 0) goto code_r0x05409c7c;
          break;
        case 0xd:
          iVar2 = (int)param_4[3];
          puVar4 = (undefined8 *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            puVar4 = (undefined8 *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
          }
          pwVar8 = (wchar16 *)*puVar4;
          if (pwVar8 == (wchar16 *)0x0) {
            pwVar8 = L"(null)";
          }
          if (local_2038 == 0x7fffffff) {
            uVar22 = (ulong)(ushort)*pwVar8;
            pwVar11 = pwVar8;
            if (*pwVar8 != L'\0') {
              do {
                pwVar11 = pwVar11 + 1;
              } while (*pwVar11 != L'\0');
              uVar22 = (ulong)((long)pwVar11 - (long)pwVar8) >> 1;
            }
          }
          else if ((*pwVar8 == L'\0') || (pwVar11 = pwVar8, pwVar8 + local_2038 <= pwVar8)) {
            uVar22 = 0;
          }
          else {
            do {
              pwVar11 = pwVar11 + 1;
              if (pwVar8 + local_2038 <= pwVar11) break;
            } while (*pwVar11 != L'\0');
            uVar22 = (ulong)((long)pwVar11 - (long)pwVar8) >> 1;
          }
        }
        break;
      case 0x58:
      case 0x62:
      case 0x6f:
      case 0x75:
      case 0x78:
        if (local_2034 == 4) {
LAB_05409e58:
          iVar2 = (int)param_4[3];
          puVar9 = (ulong *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            puVar9 = (ulong *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)puVar9 + 0xfU & 0xfffffffffffffff8;
          }
          uVar24 = *puVar9;
          uVar22 = uVar24;
          goto LAB_05409cf8;
        }
        if (local_2034 == 5) goto LAB_05409c84;
        if (local_2034 == 0xf) goto LAB_05409e58;
        if (local_2034 != 0x10) {
          iVar2 = (int)param_4[3];
          puVar14 = (uint *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            puVar14 = (uint *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)puVar14 + 0xbU & 0xfffffffffffffff8;
          }
          uVar20 = *puVar14;
          if ((local_2034 == 0xd) || (local_2034 == 2)) {
            uVar24 = (ulong)(ushort)uVar20;
            uVar22 = uVar24;
          }
          else if ((local_2034 == 0xc) || (local_2034 == 1)) {
            uVar24 = (ulong)(byte)uVar20;
            uVar22 = uVar24;
          }
          else {
            uVar24 = (ulong)uVar20;
            uVar22 = uVar24;
          }
          goto LAB_05409cf8;
        }
        iVar2 = (int)param_4[3];
        uVar10 = *param_4;
        uVar22 = uVar24;
        if (iVar2 < 0) {
          iVar3 = iVar2 + 8;
          *(int *)(param_4 + 3) = iVar3;
          if (0 < iVar3) goto LAB_05409f50;
          if ((iVar3 != 0) && (*(int *)(param_4 + 3) = iVar2 + 0x10, iVar2 + 0x10 < 1))
          goto LAB_05409cf8;
        }
        else {
LAB_05409f50:
          uVar10 = uVar10 + 0xf & 0xfffffffffffffff8;
        }
        *param_4 = uVar10 + 0xf & 0xfffffffffffffff8;
        goto LAB_05409cf8;
      case 100:
      case 0x69:
        if (local_2034 == 5) {
LAB_05409c84:
          iVar2 = (int)param_4[3];
          plVar7 = (longlong *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            plVar7 = (longlong *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)plVar7 + 0xfU & 0xfffffffffffffff8;
          }
          pwVar8 = (wchar16 *)WriteLongLong16((FormatData *)local_2048,*plVar7,awStack_10);
        }
        else {
          if (((local_2034 == 10) || (local_2034 == 4)) || (local_2034 == 0xf)) {
            iVar2 = (int)param_4[3];
            puVar9 = (ulong *)*param_4;
            if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
              puVar9 = (ulong *)(param_4[1] + (long)iVar2);
            }
            else {
              *param_4 = (long)puVar9 + 0xfU & 0xfffffffffffffff8;
            }
            uVar23 = *puVar9;
            uVar22 = uVar23;
          }
          else if (local_2034 == 0x10) {
            iVar2 = (int)param_4[3];
            uVar10 = *param_4;
            uVar22 = uVar23;
            if (iVar2 < 0) {
              iVar3 = iVar2 + 8;
              *(int *)(param_4 + 3) = iVar3;
              if (0 < iVar3) goto LAB_0540a078;
              if ((iVar3 != 0) && (*(int *)(param_4 + 3) = iVar2 + 0x10, iVar2 + 0x10 < 1))
              goto LAB_05409cf8;
            }
            else {
LAB_0540a078:
              uVar10 = uVar10 + 0xf & 0xfffffffffffffff8;
            }
            *param_4 = uVar10 + 0xf & 0xfffffffffffffff8;
          }
          else {
            iVar2 = (int)param_4[3];
            piVar13 = (int *)*param_4;
            if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
              piVar13 = (int *)(param_4[1] + (long)iVar2);
            }
            else {
              *param_4 = (long)piVar13 + 0xbU & 0xfffffffffffffff8;
            }
            iVar2 = *piVar13;
            if ((local_2034 == 0xd) || (local_2034 == 2)) {
              uVar23 = (ulong)(short)iVar2;
              uVar22 = uVar23;
            }
            else if ((local_2034 == 0xc) || (local_2034 == 1)) {
              uVar23 = (ulong)(char)iVar2;
              uVar22 = uVar23;
            }
            else {
              uVar23 = (ulong)iVar2;
              uVar22 = uVar23;
            }
          }
LAB_05409cf8:
          pwVar8 = (wchar16 *)WriteLong16((FormatData *)local_2048,uVar22,awStack_10);
        }
        if (pwVar8 == (wchar16 *)0x0) goto switchD_05409854_caseD_26;
        uVar22 = (ulong)((int)((long)awStack_10 - (long)pwVar8 >> 1) - 1);
        break;
      case 0x6e:
        iVar2 = (int)param_4[3];
        puVar4 = (undefined8 *)*param_4;
        if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
          puVar4 = (undefined8 *)(param_4[1] + (long)iVar2);
        }
        else {
          *param_4 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
        }
        plVar5 = (long *)*puVar4;
        switch(local_2034) {
        case 1:
        case 0xc:
          *(char *)plVar5 = (char)iVar21;
          break;
        case 2:
        case 0xd:
          *(short *)plVar5 = (short)iVar21;
          break;
        default:
          *(int *)plVar5 = iVar21;
          break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0xf:
          *plVar5 = (long)iVar21;
        }
        goto LAB_05409724;
      }
      iVar2 = (int)uVar22;
      if (local_2048[0] == 0) {
        uVar22 = uVar22 & 0xffffffff;
      }
      else {
        if (local_2048[0] == 2) {
          uVar22 = uVar22 & 0xffffffff;
LAB_05409b58:
          local_204a = 0x30;
          iVar2 = (int)uVar22;
          if (((*pwVar8 + L'ￕ' & 0xfffdU) == 0) || (*pwVar8 == L' ')) {
            iVar3 = (*param_1)(pwVar8,1,param_2,1);
            if (iVar3 == -1) goto LAB_054097b4;
            iVar2 = iVar2 + -1;
            pwVar8 = pwVar8 + 1;
          }
        }
        else {
LAB_05409a28:
          iVar2 = (int)uVar22;
          uVar22 = uVar22 & 0xffffffff;
          local_204a = 0x20;
        }
        if ((int)uVar22 < local_203c) {
          do {
            iVar3 = (*param_1)(&local_204a,1,param_2,1);
            if (iVar3 == -1) goto LAB_054097b4;
            uVar20 = (int)uVar22 + 1;
            uVar22 = (ulong)uVar20;
          } while ((int)uVar20 < local_203c);
        }
      }
      if (iVar2 != 0) {
        lVar16 = (long)iVar2;
LAB_05409a94:
        iVar2 = (*param_1)(pwVar8,lVar16,param_2,1);
        if (iVar2 == -1) goto LAB_054097b4;
      }
      uVar20 = (uint)uVar22;
      if (local_2048[0] == 0) {
        local_204a = 0x20;
        if ((int)uVar20 < local_203c) {
          do {
            iVar2 = (*param_1)(&local_204a,1,param_2,1);
            if (iVar2 == -1) goto LAB_054097b4;
            uVar20 = (int)uVar22 + 1;
            uVar22 = (ulong)uVar20;
          } while ((int)uVar20 < local_203c);
        }
      }
      wVar1 = *param_3;
      iVar21 = iVar21 + uVar20;
      if (wVar1 == L'\0') break;
    } while( true );
  }
  (*param_1)(0,0,param_2,2);
  goto LAB_054097cc;
code_r0x05409c7c:
  local_2020[0] = L'\0';
switchD_05409854_caseD_26:
  iVar2 = (int)((long)param_3 - (long)pwVar11 >> 1);
  iVar21 = iVar21 + iVar2;
  if ((iVar2 != 0) && (iVar2 = (*param_1)(pwVar11,(long)iVar2,param_2,1), iVar2 == -1)) {
LAB_054097b4:
    (*param_1)(0,0,param_2,2);
    iVar21 = -1;
LAB_054097cc:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar21);
  }
  goto LAB_05409724;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::SprintfLocal::ReadFormat32(char32_t const*, EA::StdC::SprintfLocal::FormatData*,
   std::__va_list*) */

void EA::StdC::SprintfLocal::ReadFormat32(wchar32 *param_1,FormatData *param_2,__va_list *param_3)

{
  int iVar1;
  wchar32 *pwVar2;
  wchar32 *pwVar3;
  int *piVar4;
  wchar32 wVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  wchar32 local_18;
  undefined4 uStack_14;
  undefined1 local_10;
  undefined7 uStack_f;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FormatData::FormatData((FormatData *)&local_30);
  wVar5 = param_1[1];
  pwVar2 = param_1 + 1;
  if (wVar5 != L'%') {
    uVar6 = (undefined1)local_28;
    iVar7 = 0;
    do {
      iVar1 = local_30;
      iVar8 = iVar7;
      switch(wVar5) {
      case L' ':
        if (iStack_2c != 2) {
          iStack_2c = 3;
        }
        break;
      default:
        goto switchD_0540a280_caseD_21;
      case L'#':
        uVar6 = 1;
        break;
      case L'\'':
        local_10 = 1;
        break;
      case L'+':
        iStack_2c = 2;
        break;
      case L'-':
        iVar1 = 0;
        break;
      case L'0':
        iVar1 = 0;
        if ((local_30 != 0) && (iVar1 = 2, iVar8 = local_30, local_30 == 2)) {
          iVar8 = iVar7;
        }
      }
      local_30 = iVar1;
      pwVar2 = pwVar2 + 1;
      wVar5 = *pwVar2;
      iVar7 = iVar8;
    } while( true );
  }
  pwVar3 = param_1 + 2;
  local_18 = wVar5;
LAB_0540a2e8:
  *(ulong *)param_2 = CONCAT44(iStack_2c,local_30);
  *(ulong *)(param_2 + 8) = CONCAT44(local_24,local_28);
  *(ulong *)(param_2 + 0x20) = CONCAT71(uStack_f,local_10);
  *(ulong *)(param_2 + 0x10) = CONCAT44(iStack_1c,local_20);
  *(ulong *)(param_2 + 0x18) = CONCAT44(uStack_14,local_18);
  goto LAB_0540a300;
switchD_0540a280_caseD_21:
  local_28 = CONCAT31(local_28._1_3_,uVar6);
  pwVar3 = pwVar2;
  if (wVar5 == L'*') {
    iVar1 = *(int *)(param_3 + 0x18);
    piVar4 = *(int **)param_3;
    if ((iVar1 < 0) && (*(int *)(param_3 + 0x18) = iVar1 + 8, iVar1 + 8 < 1)) {
      piVar4 = (int *)(*(long *)(param_3 + 8) + (long)iVar1);
    }
    else {
      *(ulong *)param_3 = (long)piVar4 + 0xbU & 0xfffffffffffffff8;
    }
    local_24 = *piVar4;
    if (local_24 < 0) {
      local_24 = -local_24;
      local_30 = 0;
    }
    pwVar3 = pwVar2 + 1;
    wVar5 = pwVar2[1];
  }
  else {
    while ((uint)(wVar5 + L'\xffffffd0') < 10) {
      local_24 = wVar5 + local_24 * 10 + -0x30;
      wVar5 = pwVar3[1];
      pwVar3 = pwVar3 + 1;
    }
  }
  if (0x1000 < local_24) goto LAB_0540a2e4;
  if (*(wchar32 *)(param_2 + 0x1c) == wVar5) {
    wVar5 = pwVar3[1];
    if (wVar5 == L'*') {
      iVar1 = *(int *)(param_3 + 0x18);
      piVar4 = *(int **)param_3;
      if ((iVar1 < 0) && (*(int *)(param_3 + 0x18) = iVar1 + 8, iVar1 + 8 < 1)) {
        piVar4 = (int *)(*(long *)(param_3 + 8) + (long)iVar1);
      }
      else {
        *(ulong *)param_3 = (long)piVar4 + 0xbU & 0xfffffffffffffff8;
      }
      local_20 = *piVar4;
      pwVar3 = pwVar3 + 2;
      wVar5 = *pwVar3;
      if (local_20 < 0) {
        local_20 = 0;
      }
    }
    else {
      local_20 = 0;
      pwVar3 = pwVar3 + 1;
      if ((uint)(wVar5 + L'\xffffffd0') < 10) {
        local_20 = 0;
        do {
          local_20 = wVar5 + local_20 * 10;
          pwVar3 = pwVar3 + 1;
          wVar5 = *pwVar3;
          local_20 = local_20 + -0x30;
        } while ((uint)(wVar5 + L'\xffffffd0') < 10);
      }
    }
  }
  switch(wVar5) {
  case L'I':
    wVar5 = pwVar3[1];
    if (wVar5 == L'8') {
      pwVar2 = pwVar3 + 2;
      pwVar3 = pwVar3 + 2;
      iStack_1c = 0xc;
      wVar5 = *pwVar2;
    }
    else if (wVar5 == L'1') {
      if (pwVar3[2] == L'6') {
        pwVar2 = pwVar3 + 3;
        pwVar3 = pwVar3 + 3;
        iStack_1c = 0xd;
        wVar5 = *pwVar2;
      }
      else {
        if ((pwVar3[2] != L'2') || (pwVar3[3] != L'8')) goto LAB_0540a2e4;
        pwVar2 = pwVar3 + 4;
        pwVar3 = pwVar3 + 4;
        iStack_1c = 0x10;
        wVar5 = *pwVar2;
      }
    }
    else if (wVar5 == L'3') {
      if (pwVar3[2] != L'2') goto LAB_0540a2e4;
      pwVar2 = pwVar3 + 3;
      pwVar3 = pwVar3 + 3;
      iStack_1c = 0xe;
      wVar5 = *pwVar2;
    }
    else {
      if ((wVar5 != L'6') || (pwVar3[2] != L'4')) {
LAB_0540a2e4:
        pwVar3 = pwVar3 + 1;
        goto LAB_0540a2e8;
      }
      pwVar2 = pwVar3 + 3;
      pwVar3 = pwVar3 + 3;
      iStack_1c = 0xf;
      wVar5 = *pwVar2;
    }
    break;
  case L'L':
    pwVar2 = pwVar3 + 1;
    pwVar3 = pwVar3 + 1;
    iStack_1c = 10;
    wVar5 = *pwVar2;
    break;
  case L'h':
    pwVar2 = pwVar3 + 1;
    if (*pwVar2 == L'h') {
      pwVar2 = pwVar3 + 2;
      pwVar3 = pwVar3 + 2;
      iStack_1c = 1;
      wVar5 = *pwVar2;
    }
    else {
      pwVar3 = pwVar3 + 1;
      iStack_1c = 2;
      wVar5 = *pwVar2;
    }
    break;
  case L'j':
    pwVar2 = pwVar3 + 1;
    pwVar3 = pwVar3 + 1;
    iStack_1c = 6;
    wVar5 = *pwVar2;
    break;
  case L'l':
    pwVar2 = pwVar3 + 1;
    if (*pwVar2 == L'l') {
      pwVar2 = pwVar3 + 2;
      pwVar3 = pwVar3 + 2;
      iStack_1c = 5;
      wVar5 = *pwVar2;
    }
    else {
      pwVar3 = pwVar3 + 1;
      iStack_1c = 4;
      wVar5 = *pwVar2;
    }
    break;
  case L'q':
    pwVar2 = pwVar3 + 1;
    pwVar3 = pwVar3 + 1;
    iStack_1c = 5;
    wVar5 = *pwVar2;
    break;
  case L't':
    pwVar2 = pwVar3 + 1;
    pwVar3 = pwVar3 + 1;
    iStack_1c = 8;
    wVar5 = *pwVar2;
    break;
  case L'z':
    pwVar2 = pwVar3 + 1;
    pwVar3 = pwVar3 + 1;
    iStack_1c = 7;
    wVar5 = *pwVar2;
  }
  local_18 = wVar5;
  switch(local_18) {
  case L'A':
  case L'E':
  case L'F':
  case L'a':
  case L'e':
  case L'f':
LAB_0540a4c8:
    if (local_20 != 0x7fffffff) goto LAB_0540a384;
    local_20 = 6;
    break;
  default:
switchD_0540a3d8_caseD_42:
    goto LAB_0540a384;
  case L'C':
  case L'S':
  case L'c':
  case L's':
    if (local_30 == 2) {
      local_30 = iVar7;
    }
    if (iStack_1c == 2) {
LAB_0540a678:
      iStack_1c = 1;
      goto switchD_0540a3d8_caseD_42;
    }
    if (iStack_1c != 4) {
      if (iStack_1c != 0) goto LAB_0540a384;
      if (local_18 != L's') goto LAB_0540a678;
    }
    iStack_1c = 0xb;
    goto LAB_0540a384;
  case L'G':
  case L'g':
    if (local_20 != 0) goto LAB_0540a4c8;
LAB_0540a48c:
    local_20 = 1;
    break;
  case L'X':
  case L'b':
  case L'd':
  case L'i':
  case L'o':
  case L'u':
  case L'x':
    if (local_20 == 0x7fffffff) goto LAB_0540a48c;
    if (local_30 == 2) {
      local_30 = 1;
    }
LAB_0540a384:
    if ((local_20 - 0x1001U < 0x7fffeffe) && ((local_18 & 0xffffffdfU) != 0x53)) {
      local_18 = L'\0';
    }
    break;
  case L'p':
    iStack_1c = 0xf;
    local_20 = 2;
    local_18 = L'x';
  }
  pwVar3 = pwVar3 + 1;
  *(ulong *)(param_2 + 0x20) = CONCAT71(uStack_f,local_10);
  *(ulong *)param_2 = CONCAT44(iStack_2c,local_30);
  *(ulong *)(param_2 + 8) = CONCAT44(local_24,local_28);
  *(ulong *)(param_2 + 0x10) = CONCAT44(iStack_1c,local_20);
  *(ulong *)(param_2 + 0x18) = CONCAT44(uStack_14,local_18);
LAB_0540a300:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pwVar3);
  }
  return;
}


/* EA::StdC::SprintfLocal::WriteLong32(EA::StdC::SprintfLocal::FormatData const&, long, char32_t*)
    */

wchar32 * EA::StdC::SprintfLocal::WriteLong32(FormatData *param_1,long param_2,wchar32 *param_3)

{
  uint uVar1;
  wchar32 wVar2;
  uint uVar3;
  uint uVar4;
  wchar32 *pwVar5;
  ulong uVar6;
  wchar32 *pwVar7;
  wchar32 *pwVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar14 = *(int *)(param_1 + 0x10);
  param_3[-1] = L'\0';
  pwVar7 = param_3 + -1;
  if (((param_2 < 1) && (*(int *)(param_1 + 0x10) < 1)) && (param_1[8] == (FormatData)0x0)) {
    return pwVar7;
  }
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0x58:
  case 0x78:
    uVar11 = 0xf;
    lVar12 = 4;
    iVar15 = 0x10;
    break;
  default:
    iVar16 = *(int *)(param_1 + 4);
    iVar13 = 0;
    if (param_2 < 0) {
      param_2 = -param_2;
      iVar13 = 1;
    }
    goto LAB_0540a784;
  case 0x62:
    iVar15 = 2;
    uVar11 = 1;
    lVar12 = 1;
    break;
  case 0x6f:
    iVar15 = 8;
    uVar11 = 7;
    lVar12 = 3;
    break;
  case 0x75:
    iVar13 = 0;
    iVar16 = 0;
LAB_0540a784:
    uVar9 = 0;
    uVar11 = uVar9;
    if (param_1[0x20] == (FormatData)0x0) {
      do {
        pwVar5 = pwVar7 + -1;
        uVar9 = uVar9 + 1;
        uVar6 = (ulong)param_2 / 10;
        pwVar7[-1] = (int)param_2 + (int)uVar6 * -10 + L'0';
        param_2 = uVar6;
        pwVar7 = pwVar5;
      } while (uVar6 != 0);
    }
    else {
      while( true ) {
        pwVar8 = pwVar7;
        pwVar5 = pwVar8 + -1;
        uVar9 = uVar11 + 1;
        uVar6 = (ulong)param_2 / 10;
        pwVar8[-1] = (int)param_2 + (int)uVar6 * -10 + L'0';
        if (uVar6 == 0) break;
        uVar1 = uVar11 + 2;
        param_2 = uVar6;
        pwVar7 = pwVar5;
        uVar11 = uVar9;
        if ((uVar1 & 3) == 0) {
          pwVar8[-2] = *(wchar32 *)(param_1 + 0x24);
          pwVar7 = pwVar8 + -2;
          uVar11 = uVar1;
        }
      }
    }
    iVar15 = 10;
    if (*(int *)param_1 == 2) {
      if ((iVar16 != 0) || (iVar16 = 10, iVar13 != 0)) {
        iVar14 = *(int *)(param_1 + 0xc) + -1;
        goto LAB_0540a828;
      }
      goto LAB_0540a98c;
    }
    goto LAB_0540a828;
  }
  pwVar7 = param_3 + -2;
  uVar1 = 1;
  do {
    while( true ) {
      uVar9 = uVar1;
      pwVar5 = pwVar7;
      uVar1 = uVar11 & (uint)param_2;
      param_2 = (ulong)param_2 >> lVar12;
      if (9 < uVar1) break;
      *pwVar5 = uVar1 + L'0';
      pwVar7 = pwVar5 + -1;
      uVar1 = uVar9 + 1;
      if (param_2 == 0) goto LAB_0540a950;
    }
    wVar2 = uVar1 + L'W';
    if (*(int *)(param_1 + 0x18) != 0x78) {
      wVar2 = uVar1 + L'7';
    }
    *pwVar5 = wVar2;
    pwVar7 = pwVar5 + -1;
    uVar1 = uVar9 + 1;
  } while (param_2 != 0);
LAB_0540a950:
  iVar13 = (int)param_2;
  if (((iVar15 == 8) && (param_1[8] != (FormatData)0x0)) && (*pwVar5 != L'0')) {
    uVar9 = uVar9 + 1;
    pwVar5[-1] = L'0';
    pwVar5 = pwVar5 + -1;
  }
  iVar16 = iVar15;
  if (*(int *)param_1 == 2) {
LAB_0540a98c:
    iVar15 = iVar16;
    if ((param_1[8] == (FormatData)0x0) || ((iVar15 != 0x10 && (iVar15 != 2)))) {
      iVar14 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar14 = *(int *)(param_1 + 0xc) + -2;
    }
  }
LAB_0540a828:
  if (iVar14 <= (int)uVar9) goto LAB_0540a8bc;
  uVar4 = iVar14 - uVar9;
  uVar3 = ~uVar9;
  uVar11 = (uVar4 - 4 >> 2) + 1;
  uVar1 = uVar11 * 4;
  pwVar7 = pwVar5;
  if (uVar3 + iVar14 < 3) {
LAB_0540a888:
    pwVar7[-1] = L'0';
    if (((int)(uVar9 + 1) < iVar14) && (pwVar7[-2] = L'0', (int)(uVar9 + 2) < iVar14)) {
      pwVar7[-3] = L'0';
    }
  }
  else {
    uVar10 = 0;
    do {
      builtin_memcpy(pwVar7 + 0x3ffffffffffffffc,L"0000",0x10);
      uVar10 = uVar10 + 1;
      pwVar7 = pwVar7 + -4;
    } while (uVar10 < uVar11);
    uVar9 = uVar9 + uVar1;
    pwVar7 = pwVar5 + -(ulong)uVar1;
    if (uVar4 != uVar1) goto LAB_0540a888;
  }
  pwVar5 = (wchar32 *)((long)pwVar5 + ((ulong)(uVar3 + iVar14) << 2 ^ 0xfffffffffffffffc));
LAB_0540a8bc:
  if (iVar15 == 10) {
    if ((*(int *)(param_1 + 0x18) == 0x69) || (*(int *)(param_1 + 0x18) == 100)) {
      if (iVar13 != 0) {
        pwVar5[-1] = L'-';
        return pwVar5 + -1;
      }
      if (*(int *)(param_1 + 4) == 2) {
        pwVar5[-1] = L'+';
        return pwVar5 + -1;
      }
      if (*(int *)(param_1 + 4) == 3) {
        pwVar5[-1] = L' ';
        return pwVar5 + -1;
      }
    }
  }
  else if ((param_1[8] != (FormatData)0x0) && ((iVar15 == 0x10 || (iVar15 == 2)))) {
    pwVar5[-1] = *(wchar32 *)(param_1 + 0x18);
    pwVar5[-2] = L'0';
    return pwVar5 + -2;
  }
  return pwVar5;
}


/* EA::StdC::SprintfLocal::WriteLongLong32(EA::StdC::SprintfLocal::FormatData const&, long long,
   char32_t*) */

wchar32 * EA::StdC::SprintfLocal::WriteLongLong32
                    (FormatData *param_1,longlong param_2,wchar32 *param_3)

{
  uint uVar1;
  wchar32 wVar2;
  uint uVar3;
  uint uVar4;
  wchar32 *pwVar5;
  ulong uVar6;
  wchar32 *pwVar7;
  wchar32 *pwVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar14 = *(int *)(param_1 + 0x10);
  param_3[-1] = L'\0';
  pwVar7 = param_3 + -1;
  if (((param_2 < 1) && (*(int *)(param_1 + 0x10) < 1)) && (param_1[8] == (FormatData)0x0)) {
    return pwVar7;
  }
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0x58:
  case 0x78:
    uVar11 = 0xf;
    lVar12 = 4;
    iVar15 = 0x10;
    break;
  default:
    iVar16 = *(int *)(param_1 + 4);
    iVar13 = 0;
    if (param_2 < 0) {
      param_2 = -param_2;
      iVar13 = 1;
    }
    goto LAB_0540aae8;
  case 0x62:
    iVar15 = 2;
    uVar11 = 1;
    lVar12 = 1;
    break;
  case 0x6f:
    iVar15 = 8;
    uVar11 = 7;
    lVar12 = 3;
    break;
  case 0x75:
    iVar13 = 0;
    iVar16 = 0;
LAB_0540aae8:
    uVar9 = 0;
    uVar11 = uVar9;
    if (param_1[0x20] == (FormatData)0x0) {
      do {
        pwVar5 = pwVar7 + -1;
        uVar9 = uVar9 + 1;
        uVar6 = (ulong)param_2 / 10;
        pwVar7[-1] = (int)param_2 + (int)uVar6 * -10 + L'0';
        param_2 = uVar6;
        pwVar7 = pwVar5;
      } while (uVar6 != 0);
    }
    else {
      while( true ) {
        pwVar8 = pwVar7;
        pwVar5 = pwVar8 + -1;
        uVar9 = uVar11 + 1;
        uVar6 = (ulong)param_2 / 10;
        pwVar8[-1] = (int)param_2 + (int)uVar6 * -10 + L'0';
        if (uVar6 == 0) break;
        uVar1 = uVar11 + 2;
        param_2 = uVar6;
        pwVar7 = pwVar5;
        uVar11 = uVar9;
        if ((uVar1 & 3) == 0) {
          pwVar8[-2] = *(wchar32 *)(param_1 + 0x24);
          pwVar7 = pwVar8 + -2;
          uVar11 = uVar1;
        }
      }
    }
    iVar15 = 10;
    if (*(int *)param_1 == 2) {
      if ((iVar16 != 0) || (iVar16 = 10, iVar13 != 0)) {
        iVar14 = *(int *)(param_1 + 0xc) + -1;
        goto LAB_0540ab8c;
      }
      goto LAB_0540acf0;
    }
    goto LAB_0540ab8c;
  }
  pwVar7 = param_3 + -2;
  uVar1 = 1;
  do {
    while( true ) {
      uVar9 = uVar1;
      pwVar5 = pwVar7;
      uVar1 = uVar11 & (uint)param_2;
      param_2 = (ulong)param_2 >> lVar12;
      if (9 < uVar1) break;
      *pwVar5 = uVar1 + L'0';
      pwVar7 = pwVar5 + -1;
      uVar1 = uVar9 + 1;
      if (param_2 == 0) goto LAB_0540acb4;
    }
    wVar2 = uVar1 + L'W';
    if (*(int *)(param_1 + 0x18) != 0x78) {
      wVar2 = uVar1 + L'7';
    }
    *pwVar5 = wVar2;
    pwVar7 = pwVar5 + -1;
    uVar1 = uVar9 + 1;
  } while (param_2 != 0);
LAB_0540acb4:
  iVar13 = (int)param_2;
  if (((iVar15 == 8) && (param_1[8] != (FormatData)0x0)) && (*pwVar5 != L'0')) {
    uVar9 = uVar9 + 1;
    pwVar5[-1] = L'0';
    pwVar5 = pwVar5 + -1;
  }
  iVar16 = iVar15;
  if (*(int *)param_1 == 2) {
LAB_0540acf0:
    iVar15 = iVar16;
    if ((param_1[8] == (FormatData)0x0) || ((iVar15 != 0x10 && (iVar15 != 2)))) {
      iVar14 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar14 = *(int *)(param_1 + 0xc) + -2;
    }
  }
LAB_0540ab8c:
  if (iVar14 <= (int)uVar9) goto LAB_0540ac20;
  uVar4 = iVar14 - uVar9;
  uVar3 = ~uVar9;
  uVar11 = (uVar4 - 4 >> 2) + 1;
  uVar1 = uVar11 * 4;
  pwVar7 = pwVar5;
  if (uVar3 + iVar14 < 3) {
LAB_0540abec:
    pwVar7[-1] = L'0';
    if (((int)(uVar9 + 1) < iVar14) && (pwVar7[-2] = L'0', (int)(uVar9 + 2) < iVar14)) {
      pwVar7[-3] = L'0';
    }
  }
  else {
    uVar10 = 0;
    do {
      builtin_memcpy(pwVar7 + 0x3ffffffffffffffc,L"0000",0x10);
      uVar10 = uVar10 + 1;
      pwVar7 = pwVar7 + -4;
    } while (uVar10 < uVar11);
    uVar9 = uVar9 + uVar1;
    pwVar7 = pwVar5 + -(ulong)uVar1;
    if (uVar4 != uVar1) goto LAB_0540abec;
  }
  pwVar5 = (wchar32 *)((long)pwVar5 + ((ulong)(uVar3 + iVar14) << 2 ^ 0xfffffffffffffffc));
LAB_0540ac20:
  if (iVar15 == 10) {
    if ((*(int *)(param_1 + 0x18) == 0x69) || (*(int *)(param_1 + 0x18) == 100)) {
      if (iVar13 != 0) {
        pwVar5[-1] = L'-';
        return pwVar5 + -1;
      }
      if (*(int *)(param_1 + 4) == 2) {
        pwVar5[-1] = L'+';
        return pwVar5 + -1;
      }
      if (*(int *)(param_1 + 4) == 3) {
        pwVar5[-1] = L' ';
        return pwVar5 + -1;
      }
    }
  }
  else if ((param_1[8] != (FormatData)0x0) && ((iVar15 == 0x10 || (iVar15 == 2)))) {
    pwVar5[-1] = *(wchar32 *)(param_1 + 0x18);
    pwVar5[-2] = L'0';
    return pwVar5 + -2;
  }
  return pwVar5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::SprintfLocal::WriteDouble32(EA::StdC::SprintfLocal::FormatData const&, double,
   char32_t*) */

void EA::StdC::SprintfLocal::WriteDouble32(FormatData *param_1,double param_2,wchar32 *param_3)

{
  wchar32 *pwVar1;
  bool bVar2;
  FormatData FVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  wchar32 wVar8;
  ulong uVar9;
  wchar32 *pwVar10;
  uint uVar11;
  wchar32 wVar12;
  wchar32 *pwVar13;
  int iVar14;
  ulong uVar15;
  wchar32 *pwVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  wchar32 *pwVar20;
  byte bVar21;
  uint local_588;
  undefined4 local_584;
  wchar32 local_580 [350];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar5 = FUN_05405f60();
  if (cVar5 != '\0') {
    param_3[-1] = L'\0';
    if (*(int *)(param_1 + 0x18) < 0x61) {
      param_3[-2] = L'N';
      param_3[-3] = L'A';
      param_3[-4] = L'N';
    }
    else {
      param_3[-2] = L'n';
      param_3[-3] = L'a';
      param_3[-4] = L'n';
    }
LAB_0540ae5c:
    pwVar16 = param_3 + -4;
    cVar5 = IsNeg(param_2);
    if (cVar5 != '\0') {
      pwVar16 = param_3 + -5;
      *pwVar16 = L'-';
    }
    goto LAB_0540ae7c;
  }
  cVar5 = FUN_05405f58();
  if (cVar5 != '\0') {
    param_3[-1] = L'\0';
    if (*(int *)(param_1 + 0x18) < 0x61) {
      param_3[-2] = L'F';
      param_3[-3] = L'N';
      param_3[-4] = L'I';
    }
    else {
      param_3[-2] = L'f';
      param_3[-3] = L'n';
      param_3[-4] = L'i';
    }
    goto LAB_0540ae5c;
  }
  wVar8 = *(wchar32 *)(param_1 + 0x18);
  pwVar16 = (wchar32 *)0x0;
  iVar7 = *(int *)(param_1 + 0x10);
  param_3[-1] = L'\0';
  if (0x1008 < *(int *)(param_1 + 0x10)) goto LAB_0540ae7c;
  pwVar1 = local_580;
  local_580[0] = L'\0';
  pwVar20 = param_3 + -1;
  pwVar16 = pwVar20;
  pwVar10 = pwVar20;
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0x45:
  case 0x65:
    EcvtBuf(param_2,iVar7 + 1,(int *)&local_588,&local_584,pwVar1);
    if (param_2 == 0.0) {
      bVar21 = 0;
      iVar7 = Strlen(pwVar1);
      bVar2 = false;
      if (param_3 + -2 <= pwVar20) {
        uVar6 = 0;
LAB_0540b1a4:
        pwVar10 = pwVar16 + -1;
        pwVar16[-1] = L'0';
        if (param_3 + -2 <= pwVar10) {
          pwVar16[-2] = L'0';
          pwVar10 = pwVar16 + -2;
        }
        goto LAB_0540b1c0;
      }
LAB_0540b1c4:
      wVar12 = L'+';
    }
    else {
      bVar2 = false;
      uVar6 = local_588 - 1;
      bVar21 = 0;
LAB_0540b130:
      iVar7 = Strlen(pwVar1);
      uVar9 = (long)(int)uVar6 >> 0x3f;
      uVar9 = ((long)(int)uVar6 ^ uVar9) - uVar9;
      uVar19 = uVar9 & 0xffffffff;
      uVar11 = (uint)uVar9;
      while (uVar11 != 0) {
        iVar14 = (int)uVar19;
        uVar11 = iVar14 / 10;
        uVar19 = (ulong)uVar11;
        pwVar10 = pwVar10 + -1;
        *pwVar10 = iVar14 % 10 + L'0';
      }
      pwVar16 = pwVar10;
      if (param_3 + -2 <= pwVar10) goto LAB_0540b1a4;
LAB_0540b1c0:
      if (-1 < (int)uVar6) goto LAB_0540b1c4;
      wVar12 = L'-';
    }
    pwVar10[-1] = wVar12;
    pwVar10[-2] = wVar8;
    pwVar10 = pwVar10 + -2;
    if (local_580 + 1 < pwVar1 + iVar7) {
      pwVar16 = &local_584 + iVar7;
      uVar9 = (long)pwVar16 + (3 - (long)(local_580 + 1));
      while( true ) {
        if ((*pwVar16 != L'0') || (bVar4 = bVar21 == 0, bVar21 = 1, bVar4)) {
          pwVar10[-1] = *pwVar16;
          bVar21 = 0;
          pwVar10 = pwVar10 + -1;
        }
        if (pwVar16 == (wchar32 *)((long)(pwVar1 + iVar7) + (~uVar9 & 0xfffffffffffffffc))) break;
        pwVar16 = pwVar16 + -1;
      }
      if (*pwVar10 == wVar8) goto LAB_0540b364;
LAB_0540b378:
      if ((1 < iVar7) || (param_1[8] != (FormatData)0x0)) {
        pwVar10 = pwVar10 + -1;
        *pwVar10 = *(wchar32 *)(param_1 + 0x1c);
      }
    }
    else {
LAB_0540b364:
      if (!bVar2) goto LAB_0540b378;
    }
    pwVar16 = pwVar10 + -1;
    pwVar10[-1] = local_580[0];
    goto LAB_0540b2e4;
  case 0x46:
  case 0x66:
    FcvtBuf(param_2,iVar7,(int *)&local_588,&local_584,pwVar1);
    uVar6 = Strlen(pwVar1);
    uVar9 = (ulong)uVar6;
    uVar19 = (ulong)local_588;
    if ((param_1[8] == (FormatData)0x0) || ((int)local_588 < (int)uVar6)) {
      bVar21 = 0;
      bVar18 = bVar21;
    }
    else {
      bVar18 = 0;
      pwVar16 = param_3 + -2;
      param_3[-2] = *(wchar32 *)(param_1 + 0x1c);
      bVar21 = 0;
    }
    break;
  default:
    EcvtBuf(param_2,iVar7,(int *)&local_588,&local_584,pwVar1);
    uVar6 = local_588 - 1;
    bVar21 = (byte)param_1[8] ^ 1;
    if ((iVar7 <= (int)uVar6) || ((int)uVar6 < -4)) {
      bVar4 = wVar8 == L'g';
      bVar2 = true;
      wVar8 = L'E';
      if (bVar4) {
        wVar8 = L'e';
      }
      goto LAB_0540b130;
    }
    if (-1 < (int)uVar6) {
      iVar7 = iVar7 + ~uVar6;
    }
    FcvtBuf(param_2,iVar7,(int *)&local_588,&local_584,pwVar1);
    uVar9 = Strlen(pwVar1);
    uVar9 = uVar9 & 0xffffffff;
    uVar19 = (ulong)local_588;
    bVar18 = 1;
  }
  uVar15 = -(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2;
  uVar17 = -(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2;
  pwVar10 = (wchar32 *)((long)pwVar1 + (uVar15 - 4));
  pwVar13 = (wchar32 *)((long)pwVar1 + (uVar17 - 4));
  if ((long)iVar7 < (long)pwVar13 - (long)pwVar10 >> 2) {
    pwVar13 = pwVar10 + iVar7;
  }
  if (pwVar10 < pwVar13) {
    do {
      if (((pwVar13 < pwVar1) || ((wchar32 *)((long)pwVar1 + uVar17) < pwVar13)) ||
         (wVar8 = *pwVar13, wVar8 == L'0')) {
        bVar2 = bVar21 == 0;
        bVar21 = 1;
        if (bVar2) {
          wVar8 = L'0';
          goto LAB_0540b0bc;
        }
      }
      else {
LAB_0540b0bc:
        pwVar16[-1] = wVar8;
        pwVar16 = pwVar16 + -1;
        bVar21 = 0;
      }
      pwVar13 = pwVar13 + -1;
    } while (pwVar10 < pwVar13);
  }
  if (((*pwVar16 != L'\0') || (bVar18 == 0)) && ((int)uVar19 < (int)uVar9)) {
    pwVar16 = pwVar16 + -1;
    *pwVar16 = *(wchar32 *)(param_1 + 0x1c);
  }
  if ((int)uVar19 < 1) {
    pwVar16 = pwVar16 + -1;
    *pwVar16 = L'0';
  }
  else {
    pwVar10 = (wchar32 *)((long)pwVar1 + uVar15);
    if (pwVar1 < pwVar10) {
      FVar3 = param_1[0x20];
      iVar7 = 0;
      do {
        pwVar10 = pwVar10 + -1;
        pwVar16[-1] = *pwVar10;
        pwVar13 = pwVar16;
        while( true ) {
          iVar7 = iVar7 + 1;
          pwVar16 = pwVar13 + -1;
          if ((pwVar1 >= pwVar10) || (FVar3 == (FormatData)0x0)) break;
          if (iVar7 == (iVar7 / 3) * 3) {
            pwVar16 = pwVar13 + -2;
            pwVar13[-2] = *(wchar32 *)(param_1 + 0x24);
          }
          pwVar10 = pwVar10 + -1;
          pwVar16[-1] = *pwVar10;
          pwVar13 = pwVar16;
        }
      } while (pwVar1 < pwVar10);
    }
  }
LAB_0540b2e4:
  if (local_584 == 0) {
    if (*(int *)(param_1 + 4) == 2) {
      pwVar16 = pwVar16 + -1;
      *pwVar16 = L'+';
    }
    else if (*(int *)(param_1 + 4) == 3) {
      pwVar16 = pwVar16 + -1;
      *pwVar16 = L' ';
    }
  }
  else {
    pwVar16 = pwVar16 + -1;
    *pwVar16 = L'-';
  }
  if ((*(int *)param_1 == 1) &&
     (uVar9 = (long)pwVar20 - (long)pwVar16 >> 2, (int)uVar9 < *(int *)(param_1 + 0xc))) {
    do {
      pwVar16 = pwVar16 + -1;
      *pwVar16 = L' ';
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 0xc));
  }
LAB_0540ae7c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pwVar16);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::SprintfLocal::VprintfCore(int (*)(char32_t const*, unsigned long, void*,
   EA::StdC::WriteFunctionState), void*, char32_t const*, std::__va_list) */

void EA::StdC::SprintfLocal::VprintfCore
               (code *param_1,undefined8 param_2,wchar32 *param_3,ulong *param_4)

{
  wchar32 wVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  longlong *plVar6;
  wchar32 *pwVar7;
  wchar16 *pwVar8;
  ulong *puVar9;
  ulong uVar10;
  byte *pbVar11;
  int *piVar12;
  uint *puVar13;
  double *pdVar14;
  long lVar15;
  wchar32 *pwVar16;
  char *pcVar17;
  wchar16 *pwVar18;
  ushort *puVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 local_405c;
  int local_4058 [3];
  int local_404c;
  int local_4048;
  int local_4044;
  undefined4 local_4040;
  wchar32 local_4030 [4104];
  wchar32 awStack_10 [2];
  long local_8;
  
  uVar24 = 0;
  uVar23 = 0;
  local_8 = ___stack_chk_guard;
  iVar21 = 0;
  FormatData::FormatData((FormatData *)local_4058);
  (*param_1)(0,0,param_2,0);
LAB_0540b4cc:
  wVar1 = *param_3;
  if (wVar1 != L'\0') {
    do {
      pwVar16 = param_3;
      if (wVar1 != L'%') {
        do {
          pwVar16 = pwVar16 + 1;
          wVar1 = *pwVar16;
          if (wVar1 == L'%') break;
        } while (wVar1 != L'\0');
        iVar2 = (int)((long)pwVar16 - (long)param_3 >> 2);
        if (iVar2 != 0) {
          iVar3 = (*param_1)(param_3,(long)iVar2,param_2,1);
          if (iVar3 == -1) goto LAB_0540b55c;
          wVar1 = *pwVar16;
          iVar21 = iVar21 + iVar2;
          param_3 = pwVar16;
        }
        if (wVar1 == L'\0') goto LAB_0540b4cc;
      }
      param_3 = (wchar32 *)ReadFormat32(pwVar16,(FormatData *)local_4058,(__va_list *)param_4);
      switch(local_4040) {
      case 0x25:
        local_4030[0] = L'%';
        goto LAB_0540b828;
      default:
        goto switchD_0540b5fc_caseD_26;
      case 0x41:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x61:
      case 0x65:
      case 0x66:
      case 0x67:
        if (local_4044 == 10) {
          iVar2 = *(int *)((long)param_4 + 0x1c);
          pdVar14 = (double *)*param_4;
          if ((iVar2 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar2 + 0x10, iVar2 + 0x10 < 1)) {
            pdVar14 = (double *)(param_4[2] + (long)iVar2);
          }
          else {
            *param_4 = (long)pdVar14 + 0xfU & 0xfffffffffffffff8;
          }
        }
        else {
          iVar2 = *(int *)((long)param_4 + 0x1c);
          pdVar14 = (double *)*param_4;
          if ((iVar2 < 0) && (*(int *)((long)param_4 + 0x1c) = iVar2 + 0x10, iVar2 + 0x10 < 1)) {
            pdVar14 = (double *)(param_4[2] + (long)iVar2);
          }
          else {
            *param_4 = (long)pdVar14 + 0xfU & 0xfffffffffffffff8;
          }
        }
        pwVar7 = (wchar32 *)WriteDouble32((FormatData *)local_4058,*pdVar14,awStack_10);
        if (pwVar7 == (wchar32 *)0x0) goto switchD_0540b5fc_caseD_26;
        uVar22 = (ulong)((int)((long)awStack_10 - (long)pwVar7 >> 2) - 1);
        break;
      case 0x43:
      case 99:
        switch(local_4044) {
        case 1:
        case 0xc:
          iVar2 = (int)param_4[3];
          pbVar11 = (byte *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            pbVar11 = (byte *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (ulong)(pbVar11 + 0xb) & 0xfffffffffffffff8;
          }
          local_4030[0] = (uint)*pbVar11;
          break;
        default:
          goto switchD_0540b5fc_caseD_26;
        case 0xb:
        case 0xe:
          iVar2 = (int)param_4[3];
          pwVar16 = (wchar32 *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            pwVar16 = (wchar32 *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)pwVar16 + 0xbU & 0xfffffffffffffff8;
          }
          local_4030[0] = *pwVar16;
          break;
        case 0xd:
          iVar2 = (int)param_4[3];
          puVar19 = (ushort *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            puVar19 = (ushort *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)puVar19 + 0xbU & 0xfffffffffffffff8;
          }
          local_4030[0] = (uint)*puVar19;
        }
LAB_0540b828:
        if (local_4058[0] != 0) {
          if (local_4058[0] == 2) {
            uVar22 = 1;
            pwVar7 = local_4030;
            goto LAB_0540b900;
          }
          uVar22 = 1;
          pwVar7 = local_4030;
          goto LAB_0540b7d0;
        }
        lVar15 = 1;
        pwVar7 = local_4030;
        uVar22 = 1;
        goto LAB_0540b83c;
      case 0x53:
      case 0x73:
        switch(local_4044) {
        case 1:
        case 0xc:
          iVar2 = (int)param_4[3];
          puVar4 = (undefined8 *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            puVar4 = (undefined8 *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
          }
          pcVar17 = (char *)*puVar4;
          if ((byte *)pcVar17 == (byte *)0x0) {
            pcVar17 = "(null)";
          }
          if (local_4048 == 0x7fffffff) {
            uVar22 = (ulong)(byte)*pcVar17;
            pbVar11 = (byte *)pcVar17;
            if (*pcVar17 != 0) {
              do {
                pbVar11 = pbVar11 + 1;
              } while (*pbVar11 != 0);
              uVar22 = (ulong)(uint)((int)pbVar11 - (int)pcVar17);
            }
          }
          else if ((*pcVar17 == 0) || (pbVar11 = (byte *)pcVar17, pcVar17 + local_4048 <= pcVar17))
          {
            uVar22 = 0;
          }
          else {
            do {
              pbVar11 = pbVar11 + 1;
              if (pcVar17 + local_4048 <= pbVar11) break;
            } while (*pbVar11 != 0);
            uVar22 = (ulong)(uint)((int)pbVar11 - (int)pcVar17);
          }
          if (0x1007 < (int)uVar22) goto switchD_0540b5fc_caseD_26;
          pwVar7 = local_4030;
          uVar10 = Strlcpy(pwVar7,pcVar17,0x1008,uVar22);
          uVar22 = uVar10 & 0xffffffff;
          if ((int)uVar10 < 0) {
            local_4030[0] = L'\0';
            goto switchD_0540b5fc_caseD_26;
          }
          break;
        default:
          goto switchD_0540b5fc_caseD_26;
        case 0xb:
        case 0xe:
          iVar2 = (int)param_4[3];
          puVar4 = (undefined8 *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            puVar4 = (undefined8 *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
          }
          pwVar7 = (wchar32 *)*puVar4;
          if (pwVar7 == (wchar32 *)0x0) {
            pwVar7 = L"(null)";
          }
          if (local_4048 == 0x7fffffff) {
            uVar22 = (ulong)(uint)*pwVar7;
            pwVar16 = pwVar7;
            if (*pwVar7 != L'\0') {
              do {
                pwVar16 = pwVar16 + 1;
              } while (*pwVar16 != L'\0');
              uVar22 = (ulong)((long)pwVar16 - (long)pwVar7) >> 2;
            }
          }
          else if ((*pwVar7 == L'\0') || (pwVar16 = pwVar7, pwVar7 + local_4048 <= pwVar7)) {
            uVar22 = 0;
          }
          else {
            do {
              pwVar16 = pwVar16 + 1;
              if (pwVar7 + local_4048 <= pwVar16) break;
            } while (*pwVar16 != L'\0');
            uVar22 = (ulong)((long)pwVar16 - (long)pwVar7) >> 2;
          }
          break;
        case 0xd:
          iVar2 = (int)param_4[3];
          plVar5 = (long *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            plVar5 = (long *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)plVar5 + 0xfU & 0xfffffffffffffff8;
          }
          pwVar18 = (wchar16 *)*plVar5;
          if (pwVar18 == (wchar16 *)0x0) {
            pwVar18 = L"(null)";
          }
          if (local_4048 == 0x7fffffff) {
            uVar20 = 0;
            pwVar8 = pwVar18;
            if (*pwVar18 != L'\0') {
              do {
                pwVar8 = pwVar8 + 1;
              } while (*pwVar8 != L'\0');
              uVar20 = (uint)((ulong)((long)pwVar8 - (long)pwVar18) >> 1);
            }
          }
          else if ((*pwVar18 == L'\0') || (pwVar8 = pwVar18, pwVar18 + local_4048 <= pwVar18)) {
            uVar20 = 0;
          }
          else {
            do {
              pwVar8 = pwVar8 + 1;
              if (pwVar18 + local_4048 <= pwVar8) break;
            } while (*pwVar8 != L'\0');
            uVar20 = (uint)((ulong)((long)pwVar8 - (long)pwVar18) >> 1);
          }
          if (0x1007 < (int)uVar20) goto switchD_0540b5fc_caseD_26;
          pwVar7 = local_4030;
          uVar10 = Strlcpy(pwVar7,pwVar18,0x1008,(ulong)uVar20);
          uVar22 = uVar10 & 0xffffffff;
          if ((int)uVar10 < 0) goto code_r0x0540bbf4;
        }
        break;
      case 0x58:
      case 0x62:
      case 0x6f:
      case 0x75:
      case 0x78:
        if (local_4044 == 4) {
LAB_0540bc24:
          iVar2 = (int)param_4[3];
          puVar9 = (ulong *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            puVar9 = (ulong *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)puVar9 + 0xfU & 0xfffffffffffffff8;
          }
          uVar24 = *puVar9;
          uVar22 = uVar24;
          goto LAB_0540ba70;
        }
        if (local_4044 == 5) goto LAB_0540b9fc;
        if (local_4044 == 0xf) goto LAB_0540bc24;
        if (local_4044 != 0x10) {
          iVar2 = (int)param_4[3];
          puVar13 = (uint *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            puVar13 = (uint *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)puVar13 + 0xbU & 0xfffffffffffffff8;
          }
          uVar20 = *puVar13;
          if ((local_4044 == 0xd) || (local_4044 == 2)) {
            uVar24 = (ulong)(ushort)uVar20;
            uVar22 = uVar24;
          }
          else if ((local_4044 == 0xc) || (local_4044 == 1)) {
            uVar24 = (ulong)(byte)uVar20;
            uVar22 = uVar24;
          }
          else {
            uVar24 = (ulong)uVar20;
            uVar22 = uVar24;
          }
          goto LAB_0540ba70;
        }
        iVar2 = (int)param_4[3];
        uVar10 = *param_4;
        uVar22 = uVar24;
        if (iVar2 < 0) {
          iVar3 = iVar2 + 8;
          *(int *)(param_4 + 3) = iVar3;
          if (0 < iVar3) goto LAB_0540bd1c;
          if ((iVar3 != 0) && (*(int *)(param_4 + 3) = iVar2 + 0x10, iVar2 + 0x10 < 1))
          goto LAB_0540ba70;
        }
        else {
LAB_0540bd1c:
          uVar10 = uVar10 + 0xf & 0xfffffffffffffff8;
        }
        *param_4 = uVar10 + 0xf & 0xfffffffffffffff8;
        goto LAB_0540ba70;
      case 100:
      case 0x69:
        if (local_4044 == 5) {
LAB_0540b9fc:
          iVar2 = (int)param_4[3];
          plVar6 = (longlong *)*param_4;
          if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
            plVar6 = (longlong *)(param_4[1] + (long)iVar2);
          }
          else {
            *param_4 = (long)plVar6 + 0xfU & 0xfffffffffffffff8;
          }
          pwVar7 = (wchar32 *)WriteLongLong32((FormatData *)local_4058,*plVar6,awStack_10);
        }
        else {
          if (((local_4044 == 10) || (local_4044 == 4)) || (local_4044 == 0xf)) {
            iVar2 = (int)param_4[3];
            puVar9 = (ulong *)*param_4;
            if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
              puVar9 = (ulong *)(param_4[1] + (long)iVar2);
            }
            else {
              *param_4 = (long)puVar9 + 0xfU & 0xfffffffffffffff8;
            }
            uVar23 = *puVar9;
            uVar22 = uVar23;
          }
          else if (local_4044 == 0x10) {
            iVar2 = (int)param_4[3];
            uVar10 = *param_4;
            uVar22 = uVar23;
            if (iVar2 < 0) {
              iVar3 = iVar2 + 8;
              *(int *)(param_4 + 3) = iVar3;
              if (0 < iVar3) goto LAB_0540be6c;
              if ((iVar3 != 0) && (*(int *)(param_4 + 3) = iVar2 + 0x10, iVar2 + 0x10 < 1))
              goto LAB_0540ba70;
            }
            else {
LAB_0540be6c:
              uVar10 = uVar10 + 0xf & 0xfffffffffffffff8;
            }
            *param_4 = uVar10 + 0xf & 0xfffffffffffffff8;
          }
          else {
            iVar2 = (int)param_4[3];
            piVar12 = (int *)*param_4;
            if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
              piVar12 = (int *)(param_4[1] + (long)iVar2);
            }
            else {
              *param_4 = (long)piVar12 + 0xbU & 0xfffffffffffffff8;
            }
            iVar2 = *piVar12;
            if ((local_4044 == 0xd) || (local_4044 == 2)) {
              uVar23 = (ulong)(short)iVar2;
              uVar22 = uVar23;
            }
            else if ((local_4044 == 0xc) || (local_4044 == 1)) {
              uVar23 = (ulong)(char)iVar2;
              uVar22 = uVar23;
            }
            else {
              uVar23 = (ulong)iVar2;
              uVar22 = uVar23;
            }
          }
LAB_0540ba70:
          pwVar7 = (wchar32 *)WriteLong32((FormatData *)local_4058,uVar22,awStack_10);
        }
        if (pwVar7 == (wchar32 *)0x0) goto switchD_0540b5fc_caseD_26;
        uVar22 = (ulong)((int)((long)awStack_10 - (long)pwVar7 >> 2) - 1);
        break;
      case 0x6e:
        iVar2 = (int)param_4[3];
        puVar4 = (undefined8 *)*param_4;
        if ((iVar2 < 0) && (*(int *)(param_4 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
          puVar4 = (undefined8 *)(param_4[1] + (long)iVar2);
        }
        else {
          *param_4 = (long)puVar4 + 0xfU & 0xfffffffffffffff8;
        }
        plVar5 = (long *)*puVar4;
        switch(local_4044) {
        case 1:
        case 0xc:
          *(char *)plVar5 = (char)iVar21;
          break;
        case 2:
        case 0xd:
          *(short *)plVar5 = (short)iVar21;
          break;
        default:
          *(int *)plVar5 = iVar21;
          break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0xf:
          *plVar5 = (long)iVar21;
        }
        goto LAB_0540b4cc;
      }
      iVar2 = (int)uVar22;
      if (local_4058[0] == 0) {
        uVar22 = uVar22 & 0xffffffff;
      }
      else {
        if (local_4058[0] == 2) {
          uVar22 = uVar22 & 0xffffffff;
LAB_0540b900:
          local_405c = 0x30;
          iVar2 = (int)uVar22;
          if (((*pwVar7 + L'\xffffffd5' & 0xfffffffdU) == 0) || (*pwVar7 == L' ')) {
            iVar3 = (*param_1)(pwVar7,1,param_2,1);
            if (iVar3 == -1) goto LAB_0540b55c;
            iVar2 = iVar2 + -1;
            pwVar7 = pwVar7 + 1;
          }
        }
        else {
LAB_0540b7d0:
          iVar2 = (int)uVar22;
          uVar22 = uVar22 & 0xffffffff;
          local_405c = 0x20;
        }
        if ((int)uVar22 < local_404c) {
          do {
            iVar3 = (*param_1)(&local_405c,1,param_2,1);
            if (iVar3 == -1) goto LAB_0540b55c;
            uVar20 = (int)uVar22 + 1;
            uVar22 = (ulong)uVar20;
          } while ((int)uVar20 < local_404c);
        }
      }
      if (iVar2 != 0) {
        lVar15 = (long)iVar2;
LAB_0540b83c:
        iVar2 = (*param_1)(pwVar7,lVar15,param_2,1);
        if (iVar2 == -1) goto LAB_0540b55c;
      }
      uVar20 = (uint)uVar22;
      if (local_4058[0] == 0) {
        local_405c = 0x20;
        if ((int)uVar20 < local_404c) {
          do {
            iVar2 = (*param_1)(&local_405c,1,param_2,1);
            if (iVar2 == -1) goto LAB_0540b55c;
            uVar20 = (int)uVar22 + 1;
            uVar22 = (ulong)uVar20;
          } while ((int)uVar20 < local_404c);
        }
      }
      wVar1 = *param_3;
      iVar21 = iVar21 + uVar20;
      if (wVar1 == L'\0') break;
    } while( true );
  }
  (*param_1)(0,0,param_2,2);
  goto LAB_0540b574;
code_r0x0540bbf4:
  local_4030[0] = L'\0';
switchD_0540b5fc_caseD_26:
  iVar2 = (int)((long)param_3 - (long)pwVar16 >> 2);
  iVar21 = iVar21 + iVar2;
  if ((iVar2 != 0) && (iVar2 = (*param_1)(pwVar16,(long)iVar2,param_2,1), iVar2 == -1)) {
LAB_0540b55c:
    (*param_1)(0,0,param_2,2);
    iVar21 = -1;
LAB_0540b574:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar21);
  }
  goto LAB_0540b4cc;
}

