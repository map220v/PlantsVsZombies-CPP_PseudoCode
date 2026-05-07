// Class: EA::StdC::ScanfLocal


/* EA::StdC::ScanfLocal::FILEReader8(EA::StdC::ReadAction, int, void*) */

uint EA::StdC::ScanfLocal::FILEReader8(undefined4 param_1,int param_2,__FILE *param_3)

{
  int iVar1;
  uint uVar2;
  
  switch(param_1) {
  case 0:
    if (param_2 != 1) {
      iVar1 = fwide(param_3,1);
      return (uint)(0 < iVar1);
    }
    uVar2 = fwide(param_3,-1);
    uVar2 = uVar2 >> 0x1f;
    break;
  default:
    uVar2 = 0;
    break;
  case 2:
    uVar2 = fgetc(param_3);
    return uVar2;
  case 3:
    uVar2 = ungetc(param_2,param_3);
    return uVar2;
  case 4:
    uVar2 = feof(param_3);
    return uVar2;
  case 5:
    uVar2 = ferror(param_3);
    return uVar2;
  }
  return uVar2;
}


/* EA::StdC::ScanfLocal::FILEReader16(EA::StdC::ReadAction, int, void*) */

uint EA::StdC::ScanfLocal::FILEReader16(undefined4 param_1,int param_2,__FILE *param_3)

{
  int iVar1;
  uint uVar2;
  
  switch(param_1) {
  case 0:
    if (param_2 != 1) {
      iVar1 = fwide(param_3,1);
      return (uint)(0 < iVar1);
    }
    uVar2 = fwide(param_3,-1);
    uVar2 = uVar2 >> 0x1f;
    break;
  default:
    uVar2 = 0;
    break;
  case 2:
    uVar2 = fgetc(param_3);
    return uVar2;
  case 3:
    uVar2 = ungetc(param_2,param_3);
    return uVar2;
  case 4:
    uVar2 = feof(param_3);
    return uVar2;
  case 5:
    uVar2 = ferror(param_3);
    return uVar2;
  }
  return uVar2;
}


/* EA::StdC::ScanfLocal::FILEReader32(EA::StdC::ReadAction, int, void*) */

uint EA::StdC::ScanfLocal::FILEReader32(undefined4 param_1,int param_2,__FILE *param_3)

{
  int iVar1;
  uint uVar2;
  
  switch(param_1) {
  case 0:
    if (param_2 != 1) {
      iVar1 = fwide(param_3,1);
      return (uint)(0 < iVar1);
    }
    uVar2 = fwide(param_3,-1);
    uVar2 = uVar2 >> 0x1f;
    break;
  default:
    uVar2 = 0;
    break;
  case 2:
    uVar2 = fgetc(param_3);
    return uVar2;
  case 3:
    uVar2 = ungetc(param_2,param_3);
    return uVar2;
  case 4:
    uVar2 = feof(param_3);
    return uVar2;
  case 5:
    uVar2 = ferror(param_3);
    return uVar2;
  }
  return uVar2;
}


/* EA::StdC::ScanfLocal::StringReader8(EA::StdC::ReadAction, int, void*) */

uint EA::StdC::ScanfLocal::StringReader8(int param_1,undefined8 param_2,long *param_3)

{
  byte *pbVar1;
  
  if (param_1 == 3) {
    if ((int)param_3[1] == 0) {
      *param_3 = *param_3 + -1;
      return 0;
    }
    *(undefined4 *)(param_3 + 1) = 0;
    return 0;
  }
  if (param_1 == 4) {
    return *(uint *)(param_3 + 1);
  }
  if (param_1 != 2) {
    return 0;
  }
  pbVar1 = (byte *)*param_3;
  if (*pbVar1 != 0) {
    *param_3 = (long)(pbVar1 + 1);
    return (uint)*pbVar1;
  }
  *(undefined4 *)(param_3 + 1) = 1;
  return 0xffffffff;
}


/* EA::StdC::ScanfLocal::StringReader16(EA::StdC::ReadAction, int, void*) */

uint EA::StdC::ScanfLocal::StringReader16(int param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  
  if (param_1 == 3) {
    if ((int)param_3[1] == 0) {
      *param_3 = *param_3 + -2;
      return 0;
    }
    *(undefined4 *)(param_3 + 1) = 0;
    return 0;
  }
  if (param_1 == 4) {
    return *(uint *)(param_3 + 1);
  }
  if (param_1 != 2) {
    return 0;
  }
  uVar1 = *(ushort *)*param_3;
  if (uVar1 != 0) {
    *param_3 = (long)((ushort *)*param_3 + 1);
    return (uint)uVar1;
  }
  *(undefined4 *)(param_3 + 1) = 1;
  return 0xffffffff;
}


/* EA::StdC::ScanfLocal::StringReader32(EA::StdC::ReadAction, int, void*) */

int EA::StdC::ScanfLocal::StringReader32(int param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  
  if (param_1 == 3) {
    if ((int)param_3[1] == 0) {
      *param_3 = *param_3 + -4;
      return 0;
    }
    *(undefined4 *)(param_3 + 1) = 0;
    return 0;
  }
  if (param_1 == 4) {
    return (int)param_3[1];
  }
  if (param_1 != 2) {
    return 0;
  }
  iVar1 = *(int *)*param_3;
  if (iVar1 != 0) {
    *param_3 = (long)((int *)*param_3 + 1);
    return iVar1;
  }
  *(undefined4 *)(param_3 + 1) = 1;
  return -1;
}


/* EA::StdC::ScanfLocal::ReadUint64_8(int (*)(EA::StdC::ReadAction, int, void*), void*, unsigned
   long, int, int, int&, int&, int&) */

ulong EA::StdC::ScanfLocal::ReadUint64_8
                (_func_int_ReadAction_int_void_ptr *param_1,void *param_2,ulong param_3,int param_4,
                int param_5,int *param_6,int *param_7,int *param_8)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  if ((param_4 != 1 && param_4 < 0x25) && (0 < param_5)) {
    uVar7 = 0;
    uVar3 = (*param_1)(2,0,param_2);
    *param_6 = *param_6 + 1;
    if (param_4 != 0) {
      uVar7 = 0;
      if ((long)param_4 != 0) {
        uVar7 = param_3 / (ulong)(long)param_4;
      }
    }
    iVar9 = 0;
    uVar6 = 1;
    uVar8 = 0;
LAB_053ff0c0:
    if (((uVar3 == 0xffffffff) || (param_5 < *param_6)) || ((uVar6 & 0x60) != 0)) goto LAB_053ff264;
code_r0x053ff0e8:
    switch(uVar6) {
    case 1:
      iVar5 = Isspace((char)uVar3);
      if (iVar5 != 0) {
        iVar9 = iVar9 + 1;
        uVar3 = (*param_1)(2,0,param_2);
        goto LAB_053ff0c0;
      }
      if (uVar3 == 0x2d) {
        uVar6 = 2;
        uVar3 = (*param_1)(2,0,param_2);
        *param_6 = *param_6 + 1;
        *param_7 = 1;
        goto LAB_053ff0c0;
      }
      uVar6 = 2;
      if (uVar3 != 0x2b) goto LAB_053ff0c0;
      break;
    case 2:
      if (((param_4 & 0xffffffefU) != 0) || (uVar3 != 0x30)) {
        if (param_4 == 0) {
          param_4 = 10;
        }
        uVar6 = 8;
        goto joined_r0x053ff1e4;
      }
      uVar6 = 4;
      break;
    default:
      goto code_r0x053ff0e8;
    case 4:
      if ((uVar3 & 0xffffffdf) == 0x58) {
        uVar6 = 8;
        param_4 = 0x10;
        uVar3 = (*param_1)(2,0,param_2);
        *param_6 = *param_6 + 1;
      }
      else {
        uVar6 = 0x10;
        if (param_4 == 0) {
          param_4 = 8;
        }
      }
joined_r0x053ff1e4:
      if (uVar7 == 0) {
        uVar7 = 0;
        if ((long)param_4 != 0) {
          uVar7 = param_3 / (ulong)(long)param_4;
        }
      }
      goto LAB_053ff0c0;
    case 8:
    case 0x10:
      uVar4 = uVar3 - 0x30;
      if (uVar4 < 10) {
LAB_053ff158:
        if ((int)uVar4 < param_4) {
          if (uVar7 < uVar8) {
            *param_8 = 1;
          }
          if (param_3 - (long)param_4 * uVar8 < (ulong)(long)(int)uVar4) {
            *param_8 = 1;
          }
          uVar8 = (long)(int)uVar4 + (long)param_4 * uVar8;
          uVar6 = 0x10;
          break;
        }
      }
      else if ((10 < param_4) && (bVar2 = Tolower((char)uVar3), 0x60 < bVar2)) {
        uVar4 = bVar2 - 0x57;
        goto LAB_053ff158;
      }
      bVar1 = uVar6 != 0x10;
      uVar6 = 0x20;
      if (bVar1) {
        uVar6 = 0x40;
      }
      goto LAB_053ff0c0;
    }
    uVar3 = (*param_1)(2,0,param_2);
    *param_6 = *param_6 + 1;
    goto LAB_053ff0c0;
  }
LAB_053ff0f8:
  iVar9 = 0;
  uVar8 = 0;
LAB_053ff100:
  *param_6 = iVar9;
  return uVar8;
LAB_053ff264:
  (*param_1)(3,uVar3,param_2);
  if ((uVar6 & 0x34) != 0) {
    iVar9 = iVar9 + -1 + *param_6;
    goto LAB_053ff100;
  }
  goto LAB_053ff0f8;
}


/* EA::StdC::ScanfLocal::ReadUint64_16(int (*)(EA::StdC::ReadAction, int, void*), void*, unsigned
   long, int, int, int&, int&, int&) */

ulong EA::StdC::ScanfLocal::ReadUint64_16
                (_func_int_ReadAction_int_void_ptr *param_1,void *param_2,ulong param_3,int param_4,
                int param_5,int *param_6,int *param_7,int *param_8)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  if ((param_4 != 1 && param_4 < 0x25) && (0 < param_5)) {
    uVar7 = 0;
    uVar3 = (*param_1)(2,0,param_2);
    *param_6 = *param_6 + 1;
    if (param_4 != 0) {
      uVar7 = 0;
      if ((long)param_4 != 0) {
        uVar7 = param_3 / (ulong)(long)param_4;
      }
    }
    iVar9 = 0;
    uVar6 = 1;
    uVar8 = 0;
LAB_053ff3e4:
    if (((uVar3 == 0xffffffff) || (param_5 < *param_6)) || ((uVar6 & 0x60) != 0)) goto LAB_053ff588;
code_r0x053ff40c:
    switch(uVar6) {
    case 1:
      iVar5 = Isspace((wchar16)uVar3);
      if (iVar5 != 0) {
        iVar9 = iVar9 + 1;
        uVar3 = (*param_1)(2,0,param_2);
        goto LAB_053ff3e4;
      }
      if (uVar3 == 0x2d) {
        uVar6 = 2;
        uVar3 = (*param_1)(2,0,param_2);
        *param_6 = *param_6 + 1;
        *param_7 = 1;
        goto LAB_053ff3e4;
      }
      uVar6 = 2;
      if (uVar3 != 0x2b) goto LAB_053ff3e4;
      break;
    case 2:
      if (((param_4 & 0xffffffefU) != 0) || (uVar3 != 0x30)) {
        if (param_4 == 0) {
          param_4 = 10;
        }
        uVar6 = 8;
        goto joined_r0x053ff508;
      }
      uVar6 = 4;
      break;
    default:
      goto code_r0x053ff40c;
    case 4:
      if ((uVar3 & 0xffffffdf) == 0x58) {
        uVar6 = 8;
        param_4 = 0x10;
        uVar3 = (*param_1)(2,0,param_2);
        *param_6 = *param_6 + 1;
      }
      else {
        uVar6 = 0x10;
        if (param_4 == 0) {
          param_4 = 8;
        }
      }
joined_r0x053ff508:
      if (uVar7 == 0) {
        uVar7 = 0;
        if ((long)param_4 != 0) {
          uVar7 = param_3 / (ulong)(long)param_4;
        }
      }
      goto LAB_053ff3e4;
    case 8:
    case 0x10:
      uVar4 = uVar3 - 0x30;
      if (uVar4 < 10) {
LAB_053ff47c:
        if ((int)uVar4 < param_4) {
          if (uVar7 < uVar8) {
            *param_8 = 1;
          }
          if (param_3 - (long)param_4 * uVar8 < (ulong)(long)(int)uVar4) {
            *param_8 = 1;
          }
          uVar8 = (long)(int)uVar4 + (long)param_4 * uVar8;
          uVar6 = 0x10;
          break;
        }
      }
      else if ((10 < param_4) && (uVar2 = Tolower((wchar16)uVar3), 0x60 < uVar2)) {
        uVar4 = uVar2 - 0x57;
        goto LAB_053ff47c;
      }
      bVar1 = uVar6 != 0x10;
      uVar6 = 0x20;
      if (bVar1) {
        uVar6 = 0x40;
      }
      goto LAB_053ff3e4;
    }
    uVar3 = (*param_1)(2,0,param_2);
    *param_6 = *param_6 + 1;
    goto LAB_053ff3e4;
  }
LAB_053ff41c:
  iVar9 = 0;
  uVar8 = 0;
LAB_053ff424:
  *param_6 = iVar9;
  return uVar8;
LAB_053ff588:
  (*param_1)(3,uVar3,param_2);
  if ((uVar6 & 0x34) != 0) {
    iVar9 = iVar9 + -1 + *param_6;
    goto LAB_053ff424;
  }
  goto LAB_053ff41c;
}


/* EA::StdC::ScanfLocal::ReadUint64_32(int (*)(EA::StdC::ReadAction, int, void*), void*, unsigned
   long, int, int, int&, int&, int&) */

ulong EA::StdC::ScanfLocal::ReadUint64_32
                (_func_int_ReadAction_int_void_ptr *param_1,void *param_2,ulong param_3,int param_4,
                int param_5,int *param_6,int *param_7,int *param_8)

{
  bool bVar1;
  wchar32 wVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  if ((param_4 != 1 && param_4 < 0x25) && (0 < param_5)) {
    uVar6 = 0;
    wVar2 = (*param_1)(2,0,param_2);
    *param_6 = *param_6 + 1;
    if (param_4 != 0) {
      uVar6 = 0;
      if ((long)param_4 != 0) {
        uVar6 = param_3 / (ulong)(long)param_4;
      }
    }
    iVar8 = 0;
    uVar5 = 1;
    uVar7 = 0;
LAB_053ff708:
    if (((wVar2 == L'\xffffffff') || (param_5 < *param_6)) || ((uVar5 & 0x60) != 0))
    goto LAB_053ff8a4;
code_r0x053ff730:
    switch(uVar5) {
    case 1:
      iVar4 = Isspace(wVar2);
      if (iVar4 != 0) {
        iVar8 = iVar8 + 1;
        wVar2 = (*param_1)(2,0,param_2);
        goto LAB_053ff708;
      }
      if (wVar2 == L'-') {
        uVar5 = 2;
        wVar2 = (*param_1)(2,0,param_2);
        *param_6 = *param_6 + 1;
        *param_7 = 1;
        goto LAB_053ff708;
      }
      uVar5 = 2;
      if (wVar2 != L'+') goto LAB_053ff708;
      break;
    case 2:
      if (((param_4 & 0xffffffefU) != 0) || (wVar2 != L'0')) {
        if (param_4 == 0) {
          param_4 = 10;
        }
        uVar5 = 8;
        goto joined_r0x053ff824;
      }
      uVar5 = 4;
      break;
    default:
      goto code_r0x053ff730;
    case 4:
      if ((wVar2 & 0xffffffdfU) == 0x58) {
        uVar5 = 8;
        param_4 = 0x10;
        wVar2 = (*param_1)(2,0,param_2);
        *param_6 = *param_6 + 1;
      }
      else {
        uVar5 = 0x10;
        if (param_4 == 0) {
          param_4 = 8;
        }
      }
joined_r0x053ff824:
      if (uVar6 == 0) {
        uVar6 = 0;
        if ((long)param_4 != 0) {
          uVar6 = param_3 / (ulong)(long)param_4;
        }
      }
      goto LAB_053ff708;
    case 8:
    case 0x10:
      uVar3 = wVar2 + L'\xffffffd0';
      if (uVar3 < 10) {
LAB_053ff79c:
        if ((int)uVar3 < param_4) {
          if (uVar6 < uVar7) {
            *param_8 = 1;
          }
          if (param_3 - (long)param_4 * uVar7 < (ulong)uVar3) {
            *param_8 = 1;
          }
          uVar5 = 0x10;
          uVar7 = (long)param_4 * uVar7 + (long)(int)uVar3;
          break;
        }
      }
      else if ((10 < param_4) && (uVar3 = Tolower(wVar2), 0x60 < uVar3)) {
        uVar3 = uVar3 - 0x57;
        goto LAB_053ff79c;
      }
      bVar1 = uVar5 != 0x10;
      uVar5 = 0x20;
      if (bVar1) {
        uVar5 = 0x40;
      }
      goto LAB_053ff708;
    }
    wVar2 = (*param_1)(2,0,param_2);
    *param_6 = *param_6 + 1;
    goto LAB_053ff708;
  }
LAB_053ff740:
  iVar8 = 0;
  uVar7 = 0;
LAB_053ff748:
  *param_6 = iVar8;
  return uVar7;
LAB_053ff8a4:
  (*param_1)(3,wVar2,param_2);
  if ((uVar5 & 0x34) != 0) {
    iVar8 = iVar8 + -1 + *param_6;
    goto LAB_053ff748;
  }
  goto LAB_053ff740;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ScanfLocal::ReadDouble8(int (*)(EA::StdC::ReadAction, int, void*), void*, int, int,
   int&, int&) */

void EA::StdC::ScanfLocal::ReadDouble8
               (_func_int_ReadAction_int_void_ptr *param_1,void *param_2,int param_3,int param_4,
               int *param_5,int *param_6)

{
  bool bVar1;
  DoubleValue DVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  DoubleValue *pDVar8;
  undefined *puVar9;
  char *pcVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  int local_3c;
  DoubleValue aDStack_28 [26];
  short local_e;
  short local_c;
  long local_8;
  
  sVar14 = 0;
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  DoubleValue::DoubleValue(aDStack_28);
  *param_5 = 0;
  iVar15 = 0;
  *param_6 = 0;
  uVar6 = 1;
  iVar11 = 1;
  iVar4 = (*param_1)(2,0,param_2);
  iVar16 = 0;
  local_3c = 0;
  iVar13 = iVar15;
LAB_053ffd30:
  if (iVar11 <= param_3) {
    do {
      if ((iVar4 == -1) || ((uVar6 & 0xc000) != 0)) break;
      DVar2 = SUB41(iVar4,0);
      if (uVar6 < 0x81) {
        if (uVar6 < 5) {
          while( true ) {
            if (uVar6 == 0x80) goto LAB_05400078;
            if (uVar6 == 4) break;
            if (uVar6 == 1) {
              iVar5 = Isspace((char)DVar2);
              if (iVar5 != 0) {
                iVar16 = iVar16 + 1;
                iVar4 = (*param_1)(2,0,param_2);
                goto LAB_053ffd30;
              }
              if (iVar4 != 0x49) {
                if (iVar4 < 0x4a) {
                  if (iVar4 != 0x2b) {
                    if (iVar4 != 0x2d) goto LAB_0540038c;
                    bVar1 = true;
                  }
                  local_3c = local_3c + 1;
                  iVar11 = iVar11 + 1;
                  iVar4 = (*param_1)(2,0,param_2);
                  goto LAB_053ffd30;
                }
                if (iVar4 != 0x69) {
                  if ((iVar4 == 0x6e) || (iVar4 == 0x4e)) {
                    iVar11 = iVar11 + 1;
                    uVar6 = 0x2000;
                    iVar4 = (*param_1)(2,0,param_2);
                  }
                  else {
LAB_0540038c:
                    uVar6 = 2;
                  }
                  goto LAB_053ffd30;
                }
              }
              iVar11 = iVar11 + 1;
              uVar6 = 0x1000;
              iVar4 = (*param_1)(2,0,param_2);
              goto LAB_053ffd30;
            }
            if (uVar6 == 2) {
              if (iVar4 == param_4) {
                iVar11 = iVar11 + 1;
                uVar6 = 0x10;
                iVar4 = (*param_1)(2,0,param_2);
              }
              else if (iVar4 == 0x30) {
                iVar11 = iVar11 + 1;
                uVar6 = 4;
                iVar4 = (*param_1)(2,0,param_2);
              }
              else {
                iVar5 = Isdigit((char)DVar2);
                uVar6 = 8;
                if (iVar5 == 0) {
                  uVar6 = 0x8000;
                }
              }
              goto LAB_053ffd30;
            }
          }
LAB_05400284:
          if (iVar4 == 0x30) goto LAB_053ffdb4;
          uVar6 = 8;
          goto LAB_053ffd30;
        }
        do {
          if (uVar6 == 0x80) goto LAB_05400078;
          if (uVar6 == 4) goto LAB_05400284;
          if (uVar6 == 0x10) {
            iVar5 = Isdigit((char)DVar2);
            uVar6 = 0x40;
            if (iVar5 == 0) {
              uVar6 = 0x8000;
            }
            goto LAB_053ffd30;
          }
          if (uVar6 == 0x40) {
            iVar5 = Isdigit((char)DVar2);
            if (iVar5 == 0) {
              uVar6 = 0x80;
              goto LAB_053ffd30;
            }
            iVar5 = (int)local_e;
            if (0x17 < iVar5) goto LAB_053ffdb4;
            iVar13 = iVar13 + -1;
            if ((iVar4 != 0x30) || (local_e != 0)) goto LAB_053fff74;
            iVar4 = (*param_1)(2,0,param_2);
            goto LAB_053ffdcc;
          }
        } while (uVar6 != 8);
        iVar5 = Isdigit((char)DVar2);
        if (iVar5 == 0) {
          uVar6 = 0x80;
          if (iVar4 == param_4) {
            iVar11 = iVar11 + 1;
            uVar6 = 0x40;
            iVar4 = (*param_1)(2,0,param_2);
          }
          goto LAB_053ffd30;
        }
        iVar5 = (int)local_e;
        if (local_e < 0x18) {
LAB_053fff74:
          aDStack_28[iVar5] = DVar2;
          local_e = (short)iVar5 + 1;
          iVar4 = (*param_1)(2,0,param_2);
        }
        else {
          iVar13 = iVar13 + 1;
          iVar4 = (*param_1)(2,0,param_2);
        }
      }
      else {
        if (uVar6 < 0x401) {
          while( true ) {
            if (uVar6 == 0x80) goto LAB_05400078;
            if (uVar6 == 0x400) break;
            if (uVar6 == 0x100) {
              if (iVar4 == 0x2b) {
                iVar11 = iVar11 + 1;
                uVar6 = 0x200;
                iVar4 = (*param_1)(2,0,param_2);
              }
              else {
                uVar6 = 0x200;
                if (iVar4 == 0x2d) {
                  iVar11 = iVar11 + 1;
                  sVar14 = 1;
                  iVar4 = (*param_1)(2,0,param_2);
                }
              }
              goto LAB_053ffd30;
            }
            if (uVar6 == 0x200) {
              if (iVar4 == 0x30) {
                iVar11 = iVar11 + 1;
                uVar6 = 0x400;
                iVar4 = (*param_1)(2,0,param_2);
              }
              else {
                iVar5 = Isdigit((char)DVar2);
                uVar6 = 0x800;
                if (iVar5 == 0) {
                  uVar6 = 0x8000;
                }
              }
              goto LAB_053ffd30;
            }
          }
LAB_05400274:
          if (iVar4 != 0x30) goto code_r0x0540027c;
        }
        else {
          do {
            if (uVar6 == 0x80) goto LAB_05400078;
            if (uVar6 == 0x400) goto LAB_05400274;
            if (uVar6 == 0x1000) {
              iVar5 = 1;
              pcVar10 = "INFINITY";
              goto LAB_054001f8;
            }
            if (uVar6 == 0x2000) {
              iVar5 = 1;
              puVar9 = &UNK_056ee308;
              goto LAB_05400120;
            }
          } while (uVar6 != 0x800);
          iVar5 = Isdigit((char)DVar2);
          if (iVar5 == 0) {
            uVar6 = 0x4000;
            goto LAB_053ffd30;
          }
          iVar15 = iVar4 + -0x30 + iVar15 * 10;
          if (0x134 < iVar15) {
            *param_6 = 1;
          }
        }
LAB_053ffdb4:
        iVar4 = (*param_1)(2,0,param_2);
      }
LAB_053ffdcc:
      iVar11 = iVar11 + 1;
      if (param_3 < iVar11) break;
    } while( true );
  }
  sVar12 = (short)iVar13;
  (*param_1)(3,iVar4,param_2);
  iVar4 = 0;
  if ((uVar6 & 0x4c6c) != 0) {
    iVar4 = iVar11 + -1 + iVar16;
  }
  *param_5 = iVar4;
  iVar11 = local_e + -1;
  pDVar8 = aDStack_28 + iVar11;
  if (iVar11 < 1) {
    if (iVar11 != 0) {
      dVar17 = 0.0;
      *param_6 = 0;
      goto LAB_053ffe98;
    }
  }
  else {
    DVar2 = aDStack_28[iVar11];
    while (DVar2 == (DoubleValue)0x30) {
      iVar11 = iVar11 + -1;
      iVar13 = iVar13 + 1;
      sVar12 = (short)iVar13;
      pDVar8 = pDVar8 + -1;
      if (iVar11 == 0) break;
      DVar2 = *pDVar8;
    }
  }
  local_c = sVar12 + (-sVar14 ^ (ushort)iVar15) + sVar14;
  local_e = (short)iVar11 + 1;
  if ((ushort)(local_c + 0x133U) < 0x268) {
    if (*param_6 == 0) {
      dVar17 = (double)DoubleValue::ToDouble(aDStack_28);
      if (1.79769313486232e+308 < dVar17) {
        dVar17 = INFINITY;
        *param_6 = 1;
      }
      else if ((dVar17 < 2.2250738585072014e-308) && (dVar17 != 0.0)) {
        *param_6 = 1;
      }
      if (bVar1) {
        dVar17 = -dVar17;
      }
      goto LAB_053ffe98;
    }
  }
  else {
    *param_6 = 1;
  }
  dVar17 = 0.0;
  if (sVar14 == 0) {
    if (bVar1) {
      dVar17 = -INFINITY;
    }
    else {
      dVar17 = INFINITY;
    }
  }
LAB_053ffe98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar17);
LAB_05400078:
  uVar6 = 0x4000;
  cVar3 = Toupper((char)DVar2);
  if (cVar3 == 'E') {
    iVar11 = iVar11 + 1;
    uVar6 = 0x100;
    iVar4 = (*param_1)(2,0,param_2);
  }
  goto LAB_053ffd30;
code_r0x0540027c:
  uVar6 = 0x800;
  goto LAB_053ffd30;
LAB_054001f8:
  cVar3 = Toupper((char)iVar4);
  if (pcVar10[1] != cVar3) goto code_r0x0540020c;
  iVar5 = iVar5 + 1;
  iVar11 = iVar11 + 1;
  pcVar10 = pcVar10 + 1;
  iVar4 = (*param_1)(2,0,param_2);
  if (iVar5 == 8) goto LAB_05400264;
  goto LAB_054001f8;
code_r0x0540020c:
  if (iVar5 == 3) {
LAB_05400264:
    if (bVar1) {
      dVar17 = -INFINITY;
    }
    else {
      dVar17 = INFINITY;
    }
    *param_5 = iVar16 + local_3c + iVar5;
    goto LAB_053ffe98;
  }
  uVar6 = 0x8000;
  goto LAB_053ffd30;
  while( true ) {
    iVar5 = iVar5 + 1;
    iVar11 = iVar11 + 1;
    puVar9 = puVar9 + 1;
    iVar4 = (*param_1)(2,0,param_2);
    if (iVar5 == 4) break;
LAB_05400120:
    cVar3 = Toupper((char)iVar4);
    if (puVar9[1] != cVar3) {
      if (1 < iVar5 - 3U) goto LAB_05400140;
      iVar11 = 3;
      iVar5 = 0;
      goto LAB_05400150;
    }
  }
  iVar5 = 0;
  do {
    iVar7 = Isdigit((char)iVar4);
    if ((iVar7 == 0) && (iVar7 = Isalpha((char)iVar4), iVar7 == 0)) {
      if (iVar4 != 0x29) goto LAB_05400140;
      goto LAB_054001e8;
    }
    iVar5 = iVar5 + 1;
    iVar11 = iVar11 + 1;
    iVar4 = (*param_1)(2,0,param_2);
  } while (iVar5 != 0x20);
  if (iVar4 == 0x29) {
LAB_054001e8:
    iVar5 = iVar5 + 1;
    iVar11 = 4;
LAB_05400150:
    dVar17 = DAT_06c45d08;
    if (bVar1) {
      dVar17 = -DAT_06c45d08;
    }
    *param_5 = iVar16 + local_3c + iVar11 + iVar5;
    goto LAB_053ffe98;
  }
LAB_05400140:
  uVar6 = 0x8000;
  goto LAB_053ffd30;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ScanfLocal::ReadDouble16(int (*)(EA::StdC::ReadAction, int, void*), void*, int, int,
   int&, int&) */

void EA::StdC::ScanfLocal::ReadDouble16
               (_func_int_ReadAction_int_void_ptr *param_1,void *param_2,int param_3,int param_4,
               int *param_5,int *param_6)

{
  DoubleValue DVar1;
  bool bVar2;
  wchar16 wVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  DoubleValue *pDVar9;
  uint uVar10;
  undefined *puVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  int local_3c;
  DoubleValue aDStack_28 [26];
  short local_e;
  short local_c;
  long local_8;
  
  sVar15 = 0;
  bVar2 = false;
  local_8 = ___stack_chk_guard;
  DoubleValue::DoubleValue(aDStack_28);
  *param_5 = 0;
  iVar16 = 0;
  *param_6 = 0;
  uVar10 = 1;
  iVar13 = 1;
  iVar6 = (*param_1)(2,0,param_2);
  iVar17 = 0;
  local_3c = 0;
  iVar14 = iVar16;
LAB_05400590:
  if (iVar13 <= param_3) {
    do {
      if ((iVar6 == -1) || ((uVar10 & 0xc000) != 0)) break;
      wVar3 = (wchar16)iVar6;
      if (uVar10 < 0x81) {
        if (uVar10 < 5) {
          while( true ) {
            if (uVar10 == 0x80) goto LAB_054008d4;
            if (uVar10 == 4) break;
            if (uVar10 == 1) {
              iVar7 = Isspace(wVar3);
              if (iVar7 != 0) {
                iVar17 = iVar17 + 1;
                iVar6 = (*param_1)(2,0,param_2);
                goto LAB_05400590;
              }
              if (iVar6 != 0x49) {
                if (iVar6 < 0x4a) {
                  if (iVar6 != 0x2b) {
                    if (iVar6 != 0x2d) goto LAB_05400bdc;
                    bVar2 = true;
                  }
                  local_3c = local_3c + 1;
                  iVar13 = iVar13 + 1;
                  iVar6 = (*param_1)(2,0,param_2);
                  goto LAB_05400590;
                }
                if (iVar6 != 0x69) {
                  if ((iVar6 == 0x6e) || (iVar6 == 0x4e)) {
                    iVar13 = iVar13 + 1;
                    uVar10 = 0x2000;
                    iVar6 = (*param_1)(2,0,param_2);
                  }
                  else {
LAB_05400bdc:
                    uVar10 = 2;
                  }
                  goto LAB_05400590;
                }
              }
              iVar13 = iVar13 + 1;
              uVar10 = 0x1000;
              iVar6 = (*param_1)(2,0,param_2);
              goto LAB_05400590;
            }
            if (uVar10 == 2) {
              if (iVar6 == param_4) {
                iVar13 = iVar13 + 1;
                uVar10 = 0x10;
                iVar6 = (*param_1)(2,0,param_2);
              }
              else if (iVar6 == 0x30) {
                iVar13 = iVar13 + 1;
                uVar10 = 4;
                iVar6 = (*param_1)(2,0,param_2);
              }
              else {
                iVar7 = Isdigit(wVar3);
                uVar10 = 8;
                if (iVar7 == 0) {
                  uVar10 = 0x8000;
                }
              }
              goto LAB_05400590;
            }
          }
LAB_05400ad4:
          if (iVar6 == 0x30) goto LAB_05400614;
          uVar10 = 8;
          goto LAB_05400590;
        }
        do {
          if (uVar10 == 0x80) goto LAB_054008d4;
          if (uVar10 == 4) goto LAB_05400ad4;
          if (uVar10 == 0x10) {
            iVar7 = Isdigit(wVar3);
            uVar10 = 0x40;
            if (iVar7 == 0) {
              uVar10 = 0x8000;
            }
            goto LAB_05400590;
          }
          if (uVar10 == 0x40) {
            iVar7 = Isdigit(wVar3);
            if (iVar7 == 0) {
              uVar10 = 0x80;
              goto LAB_05400590;
            }
            iVar7 = (int)local_e;
            if (0x17 < iVar7) goto LAB_05400614;
            iVar14 = iVar14 + -1;
            if ((iVar6 != 0x30) || (local_e != 0)) goto LAB_054007d0;
            iVar6 = (*param_1)(2,0,param_2);
            goto LAB_0540062c;
          }
        } while (uVar10 != 8);
        iVar7 = Isdigit(wVar3);
        if (iVar7 == 0) {
          uVar10 = 0x80;
          if (iVar6 == param_4) {
            iVar13 = iVar13 + 1;
            uVar10 = 0x40;
            iVar6 = (*param_1)(2,0,param_2);
          }
          goto LAB_05400590;
        }
        iVar7 = (int)local_e;
        if (local_e < 0x18) {
LAB_054007d0:
          aDStack_28[iVar7] = SUB41(iVar6,0);
          local_e = (short)iVar7 + 1;
          iVar6 = (*param_1)(2,0,param_2);
        }
        else {
          iVar14 = iVar14 + 1;
          iVar6 = (*param_1)(2,0,param_2);
        }
      }
      else {
        if (uVar10 < 0x401) {
          while( true ) {
            if (uVar10 == 0x80) goto LAB_054008d4;
            if (uVar10 == 0x400) break;
            if (uVar10 == 0x100) {
              if (iVar6 == 0x2b) {
                iVar13 = iVar13 + 1;
                uVar10 = 0x200;
                iVar6 = (*param_1)(2,0,param_2);
              }
              else {
                uVar10 = 0x200;
                if (iVar6 == 0x2d) {
                  iVar13 = iVar13 + 1;
                  sVar15 = 1;
                  iVar6 = (*param_1)(2,0,param_2);
                }
              }
              goto LAB_05400590;
            }
            if (uVar10 == 0x200) {
              if (iVar6 == 0x30) {
                iVar13 = iVar13 + 1;
                uVar10 = 0x400;
                iVar6 = (*param_1)(2,0,param_2);
              }
              else {
                iVar7 = Isdigit(wVar3);
                uVar10 = 0x800;
                if (iVar7 == 0) {
                  uVar10 = 0x8000;
                }
              }
              goto LAB_05400590;
            }
          }
LAB_05400ac4:
          if (iVar6 != 0x30) goto code_r0x05400acc;
        }
        else {
          do {
            if (uVar10 == 0x80) goto LAB_054008d4;
            if (uVar10 == 0x400) goto LAB_05400ac4;
            if (uVar10 == 0x1000) {
              iVar7 = 1;
              pcVar12 = "INFINITY";
              goto LAB_05400a50;
            }
            if (uVar10 == 0x2000) {
              iVar7 = 1;
              puVar11 = &UNK_056ee308;
              goto LAB_05400978;
            }
          } while (uVar10 != 0x800);
          iVar7 = Isdigit(wVar3);
          if (iVar7 == 0) {
            uVar10 = 0x4000;
            goto LAB_05400590;
          }
          iVar16 = iVar6 + -0x30 + iVar16 * 10;
          if (0x134 < iVar16) {
            *param_6 = 1;
          }
        }
LAB_05400614:
        iVar6 = (*param_1)(2,0,param_2);
      }
LAB_0540062c:
      iVar13 = iVar13 + 1;
      if (param_3 < iVar13) break;
    } while( true );
  }
  sVar4 = (short)iVar14;
  (*param_1)(3,iVar6,param_2);
  iVar6 = 0;
  if ((uVar10 & 0x4c6c) != 0) {
    iVar6 = iVar13 + -1 + iVar17;
  }
  *param_5 = iVar6;
  iVar13 = local_e + -1;
  pDVar9 = aDStack_28 + iVar13;
  if (iVar13 < 1) {
    if (iVar13 != 0) {
      dVar18 = 0.0;
      *param_6 = 0;
      goto LAB_054006f8;
    }
  }
  else {
    DVar1 = aDStack_28[iVar13];
    while (DVar1 == (DoubleValue)0x30) {
      iVar13 = iVar13 + -1;
      iVar14 = iVar14 + 1;
      sVar4 = (short)iVar14;
      pDVar9 = pDVar9 + -1;
      if (iVar13 == 0) break;
      DVar1 = *pDVar9;
    }
  }
  local_c = sVar4 + (-sVar15 ^ (ushort)iVar16) + sVar15;
  local_e = (short)iVar13 + 1;
  if ((ushort)(local_c + 0x133U) < 0x268) {
    if (*param_6 == 0) {
      dVar18 = (double)DoubleValue::ToDouble(aDStack_28);
      if (1.79769313486232e+308 < dVar18) {
        dVar18 = INFINITY;
        *param_6 = 1;
      }
      else if ((dVar18 < 2.2250738585072014e-308) && (dVar18 != 0.0)) {
        *param_6 = 1;
      }
      if (bVar2) {
        dVar18 = -dVar18;
      }
      goto LAB_054006f8;
    }
  }
  else {
    *param_6 = 1;
  }
  dVar18 = 0.0;
  if (sVar15 == 0) {
    if (bVar2) {
      dVar18 = -INFINITY;
    }
    else {
      dVar18 = INFINITY;
    }
  }
LAB_054006f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar18);
LAB_054008d4:
  uVar10 = 0x4000;
  sVar4 = Toupper(wVar3);
  if (sVar4 == 0x45) {
    iVar13 = iVar13 + 1;
    uVar10 = 0x100;
    iVar6 = (*param_1)(2,0,param_2);
  }
  goto LAB_05400590;
code_r0x05400acc:
  uVar10 = 0x800;
  goto LAB_05400590;
  while( true ) {
    iVar7 = iVar7 + 1;
    iVar13 = iVar13 + 1;
    pcVar12 = pcVar12 + 1;
    iVar6 = (*param_1)(2,0,param_2);
    if (iVar7 == 8) break;
LAB_05400a50:
    uVar5 = Toupper((wchar16)iVar6);
    if ((byte)pcVar12[1] != uVar5) {
      if (iVar7 != 3) goto LAB_05400998;
      if (bVar2) {
        dVar18 = -INFINITY;
      }
      else {
        dVar18 = INFINITY;
      }
      *param_5 = iVar17 + local_3c + 3;
      goto LAB_054006f8;
    }
  }
  uVar10 = 0x8000;
  goto LAB_05400590;
  while( true ) {
    iVar7 = iVar7 + 1;
    iVar13 = iVar13 + 1;
    puVar11 = puVar11 + 1;
    iVar6 = (*param_1)(2,0,param_2);
    if (iVar7 == 4) break;
LAB_05400978:
    uVar5 = Toupper((wchar16)iVar6);
    if ((byte)puVar11[1] != uVar5) {
      if (1 < iVar7 - 3U) goto LAB_05400998;
      iVar13 = 3;
      iVar7 = 0;
      goto LAB_054009a8;
    }
  }
  iVar7 = 0;
  do {
    iVar8 = Isdigit((wchar16)iVar6);
    if ((iVar8 == 0) && (iVar8 = Isalpha((wchar16)iVar6), iVar8 == 0)) {
      if (iVar6 != 0x29) goto LAB_05400998;
      goto LAB_05400a40;
    }
    iVar7 = iVar7 + 1;
    iVar13 = iVar13 + 1;
    iVar6 = (*param_1)(2,0,param_2);
  } while (iVar7 != 0x20);
  if (iVar6 == 0x29) {
LAB_05400a40:
    iVar7 = iVar7 + 1;
    iVar13 = 4;
LAB_054009a8:
    dVar18 = DAT_06c45d08;
    if (bVar2) {
      dVar18 = -DAT_06c45d08;
    }
    *param_5 = iVar17 + local_3c + iVar13 + iVar7;
    goto LAB_054006f8;
  }
LAB_05400998:
  uVar10 = 0x8000;
  goto LAB_05400590;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ScanfLocal::ReadDouble32(int (*)(EA::StdC::ReadAction, int, void*), void*, int, int,
   int&, int&) */

void EA::StdC::ScanfLocal::ReadDouble32
               (_func_int_ReadAction_int_void_ptr *param_1,void *param_2,int param_3,int param_4,
               int *param_5,int *param_6)

{
  DoubleValue DVar1;
  wchar32 wVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  DoubleValue *pDVar6;
  undefined *puVar7;
  char *pcVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  int iVar15;
  int local_34;
  DoubleValue aDStack_28 [26];
  short local_e;
  short local_c;
  long local_8;
  
  sVar11 = 0;
  iVar12 = 0;
  local_8 = ___stack_chk_guard;
  DoubleValue::DoubleValue(aDStack_28);
  sVar10 = 0;
  *param_5 = 0;
  *param_6 = 0;
  uVar4 = 1;
  wVar2 = (*param_1)(2,0,param_2);
  iVar9 = 1;
  iVar13 = 0;
  local_34 = 0;
  iVar15 = iVar12;
LAB_05400de4:
  if (iVar9 <= param_3) {
    do {
      if ((wVar2 == L'\xffffffff') || ((uVar4 & 0xc000) != 0)) break;
      if (uVar4 < 0x81) {
        if (uVar4 < 5) {
          while( true ) {
            if (uVar4 == 0x80) goto LAB_0540111c;
            if (uVar4 == 4) break;
            if (uVar4 == 1) {
              iVar3 = Isspace(wVar2);
              if (iVar3 != 0) {
                iVar13 = iVar13 + 1;
                wVar2 = (*param_1)(2,0,param_2);
                goto LAB_05400de4;
              }
              if (wVar2 != L'I') {
                if (wVar2 < L'J') {
                  if (wVar2 != L'+') {
                    if (wVar2 != L'-') goto LAB_05401418;
                    iVar12 = 1;
                  }
                  local_34 = local_34 + 1;
                  iVar9 = iVar9 + 1;
                  wVar2 = (*param_1)(2,0,param_2);
                  goto LAB_05400de4;
                }
                if (wVar2 != L'i') {
                  if ((wVar2 == L'n') || (wVar2 == L'N')) {
                    iVar9 = iVar9 + 1;
                    uVar4 = 0x2000;
                    wVar2 = (*param_1)(2,0,param_2);
                  }
                  else {
LAB_05401418:
                    uVar4 = 2;
                  }
                  goto LAB_05400de4;
                }
              }
              iVar9 = iVar9 + 1;
              uVar4 = 0x1000;
              wVar2 = (*param_1)(2,0,param_2);
              goto LAB_05400de4;
            }
            if (uVar4 == 2) {
              if (wVar2 == param_4) {
                iVar9 = iVar9 + 1;
                uVar4 = 0x10;
                wVar2 = (*param_1)(2,0,param_2);
              }
              else if (wVar2 == L'0') {
                iVar9 = iVar9 + 1;
                uVar4 = 4;
                wVar2 = (*param_1)(2,0,param_2);
              }
              else {
                iVar3 = Isdigit(wVar2);
                uVar4 = 8;
                if (iVar3 == 0) {
                  uVar4 = 0x8000;
                }
              }
              goto LAB_05400de4;
            }
          }
LAB_05401310:
          if (wVar2 == L'0') goto LAB_05400e68;
          uVar4 = 8;
          goto LAB_05400de4;
        }
        do {
          if (uVar4 == 0x80) goto LAB_0540111c;
          if (uVar4 == 4) goto LAB_05401310;
          if (uVar4 == 0x10) {
            iVar3 = Isdigit(wVar2);
            uVar4 = 0x40;
            if (iVar3 == 0) {
              uVar4 = 0x8000;
            }
            goto LAB_05400de4;
          }
          if (uVar4 == 0x40) {
            iVar3 = Isdigit(wVar2);
            if (iVar3 == 0) {
              uVar4 = 0x80;
              goto LAB_05400de4;
            }
            iVar3 = (int)local_e;
            if (0x17 < iVar3) goto LAB_05400e68;
            sVar10 = sVar10 + -1;
            if ((wVar2 != L'0') || (local_e != 0)) goto LAB_0540101c;
            wVar2 = (*param_1)(2,0,param_2);
            goto LAB_05400e80;
          }
        } while (uVar4 != 8);
        iVar3 = Isdigit(wVar2);
        if (iVar3 == 0) {
          uVar4 = 0x80;
          if (wVar2 == param_4) {
            iVar9 = iVar9 + 1;
            uVar4 = 0x40;
            wVar2 = (*param_1)(2,0,param_2);
          }
          goto LAB_05400de4;
        }
        iVar3 = (int)local_e;
        if (local_e < 0x18) {
LAB_0540101c:
          aDStack_28[iVar3] = SUB41(wVar2,0);
          local_e = (short)iVar3 + 1;
          wVar2 = (*param_1)(2,0,param_2);
        }
        else {
          sVar10 = sVar10 + 1;
          wVar2 = (*param_1)(2,0,param_2);
        }
      }
      else {
        if (uVar4 < 0x401) {
          while( true ) {
            if (uVar4 == 0x80) goto LAB_0540111c;
            if (uVar4 == 0x400) break;
            if (uVar4 == 0x100) {
              if (wVar2 == L'+') {
                iVar9 = iVar9 + 1;
                uVar4 = 0x200;
                wVar2 = (*param_1)(2,0,param_2);
              }
              else {
                uVar4 = 0x200;
                if (wVar2 == L'-') {
                  iVar9 = iVar9 + 1;
                  sVar11 = 1;
                  wVar2 = (*param_1)(2,0,param_2);
                }
              }
              goto LAB_05400de4;
            }
            if (uVar4 == 0x200) {
              if (wVar2 == L'0') {
                iVar9 = iVar9 + 1;
                uVar4 = 0x400;
                wVar2 = (*param_1)(2,0,param_2);
              }
              else {
                iVar3 = Isdigit(wVar2);
                uVar4 = 0x800;
                if (iVar3 == 0) {
                  uVar4 = 0x8000;
                }
              }
              goto LAB_05400de4;
            }
          }
LAB_05401300:
          if (wVar2 != L'0') goto code_r0x05401308;
        }
        else {
          do {
            if (uVar4 == 0x80) goto LAB_0540111c;
            if (uVar4 == 0x400) goto LAB_05401300;
            if (uVar4 == 0x1000) {
              iVar3 = 1;
              pcVar8 = "INFINITY";
              goto LAB_0540128c;
            }
            if (uVar4 == 0x2000) {
              iVar3 = 1;
              puVar7 = &UNK_056ee308;
              goto LAB_054011b8;
            }
          } while (uVar4 != 0x800);
          iVar3 = Isdigit(wVar2);
          if (iVar3 == 0) {
            uVar4 = 0x4000;
            goto LAB_05400de4;
          }
          iVar15 = wVar2 + L'\xffffffd0' + iVar15 * 10;
          if (0x134 < iVar15) {
            *param_6 = 1;
          }
        }
LAB_05400e68:
        wVar2 = (*param_1)(2,0,param_2);
      }
LAB_05400e80:
      iVar9 = iVar9 + 1;
      if (param_3 < iVar9) break;
    } while( true );
  }
  (*param_1)(3,wVar2,param_2);
  iVar3 = 0;
  if ((uVar4 & 0x4c6c) != 0) {
    iVar3 = iVar9 + -1 + iVar13;
  }
  iVar9 = local_e + -1;
  *param_5 = iVar3;
  pDVar6 = aDStack_28 + iVar9;
  if (iVar9 < 1) {
    if (iVar9 != 0) {
      dVar14 = 0.0;
      *param_6 = 0;
      goto LAB_05400f48;
    }
  }
  else {
    DVar1 = aDStack_28[iVar9];
    while (DVar1 == (DoubleValue)0x30) {
      iVar9 = iVar9 + -1;
      sVar10 = sVar10 + 1;
      pDVar6 = pDVar6 + -1;
      if (iVar9 == 0) break;
      DVar1 = *pDVar6;
    }
  }
  local_c = sVar10 + (-sVar11 ^ (ushort)iVar15) + sVar11;
  local_e = (short)iVar9 + 1;
  if ((ushort)(local_c + 0x133U) < 0x268) {
    if (*param_6 == 0) {
      dVar14 = (double)DoubleValue::ToDouble(aDStack_28);
      if (1.79769313486232e+308 < dVar14) {
        dVar14 = INFINITY;
        *param_6 = 1;
      }
      else if ((dVar14 < 2.2250738585072014e-308) && (dVar14 != 0.0)) {
        *param_6 = 1;
      }
      if (iVar12 != 0) {
        dVar14 = -dVar14;
      }
      goto LAB_05400f48;
    }
  }
  else {
    *param_6 = 1;
  }
  dVar14 = 0.0;
  if (sVar11 == 0) {
    if (iVar12 == 0) {
      dVar14 = INFINITY;
    }
    else {
      dVar14 = -INFINITY;
    }
  }
LAB_05400f48:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar14);
LAB_0540111c:
  uVar4 = 0x4000;
  iVar3 = Toupper(wVar2);
  if (iVar3 == 0x45) {
    iVar9 = iVar9 + 1;
    uVar4 = 0x100;
    wVar2 = (*param_1)(2,0,param_2);
  }
  goto LAB_05400de4;
code_r0x05401308:
  uVar4 = 0x800;
  goto LAB_05400de4;
  while( true ) {
    iVar3 = iVar3 + 1;
    iVar9 = iVar9 + 1;
    pcVar8 = pcVar8 + 1;
    wVar2 = (*param_1)(2,0,param_2);
    if (iVar3 == 8) break;
LAB_0540128c:
    uVar4 = Toupper(wVar2);
    if (uVar4 != (byte)pcVar8[1]) {
      if (iVar3 != 3) goto LAB_054011d8;
      if (iVar12 == 0) {
        dVar14 = INFINITY;
      }
      else {
        dVar14 = -INFINITY;
      }
      *param_5 = iVar13 + local_34 + 3;
      goto LAB_05400f48;
    }
  }
  uVar4 = 0x8000;
  goto LAB_05400de4;
  while( true ) {
    iVar3 = iVar3 + 1;
    iVar9 = iVar9 + 1;
    puVar7 = puVar7 + 1;
    wVar2 = (*param_1)(2,0,param_2);
    if (iVar3 == 4) break;
LAB_054011b8:
    uVar4 = Toupper(wVar2);
    if (uVar4 != (byte)puVar7[1]) {
      if (1 < iVar3 - 3U) goto LAB_054011d8;
      iVar9 = 3;
      iVar3 = 0;
      goto LAB_054011e8;
    }
  }
  iVar3 = 0;
  do {
    iVar5 = Isdigit(wVar2);
    if ((iVar5 == 0) && (iVar5 = Isalpha(wVar2), iVar5 == 0)) {
      if (wVar2 != L')') goto LAB_054011d8;
      goto LAB_0540127c;
    }
    iVar3 = iVar3 + 1;
    iVar9 = iVar9 + 1;
    wVar2 = (*param_1)(2,0,param_2);
  } while (iVar3 != 0x20);
  if (wVar2 == L')') {
LAB_0540127c:
    iVar3 = iVar3 + 1;
    iVar9 = 4;
LAB_054011e8:
    dVar14 = DAT_06c45d08;
    if (iVar12 != 0) {
      dVar14 = -DAT_06c45d08;
    }
    *param_5 = iVar13 + local_34 + iVar9 + iVar3;
    goto LAB_05400f48;
  }
LAB_054011d8:
  uVar4 = 0x8000;
  goto LAB_05400de4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ScanfLocal::ReadFormat8(char const*, EA::StdC::ScanfLocal::FormatData*) */

void EA::StdC::ScanfLocal::ReadFormat8(char *param_1,FormatData *param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int local_40;
  int iStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined2 uStack_32;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  pbVar8 = (byte *)(param_1 + 1);
  local_8 = ___stack_chk_guard;
  FormatData::FormatData((FormatData *)&local_40);
  bVar2 = param_1[1];
  uVar7 = (uint)bVar2;
  if (bVar2 == 0x25) {
    pbVar8 = (byte *)(param_1 + 2);
    local_38 = 0x25;
LAB_054018e4:
    *(ulong *)param_2 = CONCAT44(iStack_3c,local_40);
    *(ulong *)(param_2 + 8) = CONCAT26(uStack_32,CONCAT15(local_33,CONCAT14(local_34,local_38)));
    *(ulong *)(param_2 + 0x10) = CONCAT44(uStack_2c,local_30);
    *(ulong *)(param_2 + 0x18) = CONCAT44(local_24,local_28);
    *(undefined4 *)(param_2 + 0x30) = local_10;
    *(ulong *)(param_2 + 0x20) = CONCAT44(uStack_1c,local_20);
    *(ulong *)(param_2 + 0x28) = CONCAT44(local_14,local_18);
    goto LAB_0540165c;
  }
  iVar4 = Isdigit(bVar2);
  if (iVar4 == 0) {
    if (bVar2 == 0x2a) {
      uVar7 = (uint)(byte)param_1[2];
      pbVar8 = (byte *)(param_1 + 2);
      local_33 = 1;
    }
    uVar6 = uVar7 - 0x49;
    if (0x31 < uVar6) goto switchD_054015e8_caseD_5401624;
LAB_054015d4:
    switch((long)(short)(&switchD_054015e8::switchdataD_05768ec0)[uVar6] * 4 + 0x54015ec) {
    case 0x5401624:
      goto switchD_054015e8_caseD_5401624;
    case 0x5401814:
      uVar7 = (uint)pbVar8[1];
      pbVar8 = pbVar8 + 1;
      iStack_3c = 7;
      break;
    case 0x5401838:
      uVar7 = (uint)pbVar8[1];
      pbVar8 = pbVar8 + 1;
      iStack_3c = 8;
      break;
    case 0x540184c:
      uVar7 = (uint)pbVar8[1];
      if (uVar7 == 0x6c) {
        uVar7 = (uint)pbVar8[2];
        pbVar8 = pbVar8 + 2;
        iStack_3c = 5;
      }
      else {
        pbVar8 = pbVar8 + 1;
        iStack_3c = 4;
      }
      break;
    case 0x5401868:
      uVar7 = (uint)pbVar8[1];
      pbVar8 = pbVar8 + 1;
      iStack_3c = 6;
      break;
    case 0x540187c:
      uVar7 = (uint)pbVar8[1];
      if (uVar7 == 0x68) {
        uVar7 = (uint)pbVar8[2];
        pbVar8 = pbVar8 + 2;
        iStack_3c = 1;
      }
      else {
        pbVar8 = pbVar8 + 1;
        iStack_3c = 2;
      }
      break;
    case 0x5401898:
      uVar7 = (uint)pbVar8[1];
      pbVar8 = pbVar8 + 1;
      iStack_3c = 10;
      break;
    case 0x54018ac:
      bVar2 = pbVar8[1];
      if (bVar2 == 0x38) {
        uVar7 = (uint)pbVar8[2];
        pbVar8 = pbVar8 + 2;
        iStack_3c = 0xc;
      }
      else if (bVar2 == 0x31) {
        if (pbVar8[2] == 0x36) {
          uVar7 = (uint)pbVar8[3];
          pbVar8 = pbVar8 + 3;
          iStack_3c = 0xd;
        }
        else {
          if ((pbVar8[2] != 0x32) || (pbVar8[3] != 0x38)) goto LAB_054018d0;
          uVar7 = (uint)pbVar8[4];
          pbVar8 = pbVar8 + 4;
          iStack_3c = 0x10;
        }
      }
      else if (bVar2 == 0x33) {
        if (pbVar8[2] != 0x32) goto LAB_054018d0;
        uVar7 = (uint)pbVar8[3];
        pbVar8 = pbVar8 + 3;
        iStack_3c = 0xe;
      }
      else {
        if ((bVar2 != 0x36) || (pbVar8[2] != 0x34)) {
LAB_054018d0:
          local_38 = 0;
          pbVar8 = pbVar8 + 1;
          goto LAB_054018e4;
        }
        uVar7 = (uint)pbVar8[3];
        pbVar8 = pbVar8 + 3;
        iStack_3c = 0xf;
      }
    }
    uVar6 = uVar7 - 0x41;
    if (uVar6 < 0x38) goto LAB_05401688;
switchD_0540169c_caseD_5401634:
    local_38 = 0;
  }
  else {
    iVar4 = 0;
    local_34 = 1;
    do {
      iVar5 = uVar7 - 0x30;
      pbVar8 = pbVar8 + 1;
      uVar7 = (uint)*pbVar8;
      iVar4 = iVar5 + iVar4 * 10;
      local_40 = iVar4;
      iVar5 = Isdigit(*pbVar8);
    } while (iVar5 != 0);
    uVar6 = uVar7 - 0x49;
    if (uVar6 < 0x32) goto LAB_054015d4;
switchD_054015e8_caseD_5401624:
    uVar6 = uVar7 - 0x41;
    if (0x37 < uVar6) goto switchD_0540169c_caseD_5401634;
LAB_05401688:
    local_38 = uVar7;
    switch((long)(char)(&switchD_0540169c::switchdataD_05768f24)[uVar6] * 4 + 0x54016a0) {
    case 0x5401634:
      goto switchD_0540169c_caseD_5401634;
    case 0x54016a0:
      iStack_3c = 0xf;
      local_38 = 0x78;
      break;
    case 0x54016b4:
      if (iStack_3c == 2) {
LAB_054016cc:
        iStack_3c = 1;
      }
      else if (iStack_3c == 4) {
        iStack_3c = 0xb;
      }
      else {
        if (iStack_3c == 0) goto LAB_054016cc;
        if (2 < iStack_3c - 0xcU) {
          local_38 = 0;
        }
      }
      bVar2 = pbVar8[1];
      bVar3 = bVar2 == 0x5e;
      if (bVar3) {
        bVar2 = pbVar8[2];
        pbVar8 = pbVar8 + 2;
      }
      else {
        pbVar8 = pbVar8 + 1;
      }
      uVar7 = (uint)bVar2;
      if (uVar7 == 0x5d) {
        pbVar8 = pbVar8 + 1;
        CharBitmap::Set8((CharBitmap *)&local_30,0x5d);
        uVar7 = (uint)*pbVar8;
      }
      if ((uVar7 != 0x5d) && (uVar7 != 0)) {
LAB_05401718:
        do {
          CharBitmap::Set8((CharBitmap *)&local_30,uVar7);
          uVar6 = (uint)pbVar8[1];
          if (pbVar8[1] == 0x2d) {
            bVar2 = pbVar8[2];
            if ((bVar2 == 0) || (bVar2 == 0x5d)) {
              pbVar8 = pbVar8 + 1;
              uVar7 = 0x2d;
              goto LAB_05401718;
            }
            uVar6 = uVar7 + 1 & 0xff;
            if ((uVar7 + 1 & 0xff) <= (uint)bVar2) {
              do {
                CharBitmap::Set8((CharBitmap *)&local_30,uVar6);
                uVar6 = uVar6 + 1 & 0xff;
              } while (uVar6 <= pbVar8[2]);
            }
            pbVar1 = pbVar8 + 3;
            pbVar8 = pbVar8 + 2;
            uVar6 = (uint)*pbVar1;
          }
          uVar7 = uVar6;
          pbVar8 = pbVar8 + 1;
          if ((uVar7 == 0x5d) || (uVar7 == 0)) break;
        } while( true );
      }
      if (uVar7 == 0) {
        local_38 = 0;
      }
      else if (bVar3) {
        CharBitmap::NegateAll((CharBitmap *)&local_30);
      }
      break;
    case 0x540177c:
      if (iStack_3c == 10) {
        local_38 = 0;
      }
      break;
    case 0x5401790:
      if (iStack_3c == 4) {
LAB_05401994:
        iStack_3c = 0xb;
      }
      else {
        if (iStack_3c != 2) {
          if (iStack_3c != 0) {
            if (2 < iStack_3c - 0xcU) {
              local_38 = 0;
            }
            goto LAB_054017b8;
          }
          if ((uVar7 & 0xffffffef) != 99) goto LAB_05401994;
        }
        iStack_3c = 1;
      }
LAB_054017b8:
      if ((uVar7 & 0xffffffdf) == 0x53) {
        local_30 = 0xffffc1ff;
        local_28 = 0xffffffff;
        uStack_2c = 0xfffffffe;
        local_24 = 0xffffffff;
        local_20 = 0xffffffff;
        uStack_1c = 0xffffffff;
        local_18 = 0xffffffff;
        local_14 = 0xffffffff;
      }
      break;
    case 0x54017f4:
      if (iStack_3c == 4) {
        iStack_3c = 9;
      }
      else if ((iStack_3c != 0) && (iStack_3c != 10)) {
        local_38 = 0;
      }
    }
  }
  *(ulong *)param_2 = CONCAT44(iStack_3c,local_40);
  *(ulong *)(param_2 + 8) = CONCAT26(uStack_32,CONCAT15(local_33,CONCAT14(local_34,local_38)));
  pbVar8 = pbVar8 + 1;
  *(ulong *)(param_2 + 0x10) = CONCAT44(uStack_2c,local_30);
  *(ulong *)(param_2 + 0x18) = CONCAT44(local_24,local_28);
  *(undefined4 *)(param_2 + 0x30) = local_10;
  *(ulong *)(param_2 + 0x20) = CONCAT44(uStack_1c,local_20);
  *(ulong *)(param_2 + 0x28) = CONCAT44(local_14,local_18);
LAB_0540165c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pbVar8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ScanfLocal::ReadFormat16(char16_t const*, EA::StdC::ScanfLocal::FormatData*) */

void EA::StdC::ScanfLocal::ReadFormat16(wchar16 *param_1,FormatData *param_2)

{
  wchar16 *pwVar1;
  wchar16 wVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar16 *pwVar7;
  wchar16 wVar8;
  wchar16 wVar9;
  uint uVar10;
  int local_40;
  uint uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined2 uStack_32;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pwVar7 = param_1 + 1;
  FormatData::FormatData((FormatData *)&local_40);
  wVar9 = param_1[1];
  uVar10 = (uint)(ushort)wVar9;
  if (wVar9 == L'%') {
    pwVar7 = param_1 + 2;
    local_38 = 0x25;
LAB_05401e18:
    *(ulong *)param_2 = CONCAT44(uStack_3c,local_40);
    *(ulong *)(param_2 + 8) = CONCAT26(uStack_32,CONCAT15(local_33,CONCAT14(local_34,local_38)));
    *(ulong *)(param_2 + 0x10) = CONCAT44(uStack_2c,local_30);
    *(ulong *)(param_2 + 0x18) = CONCAT44(local_24,local_28);
    *(undefined4 *)(param_2 + 0x30) = local_10;
    *(ulong *)(param_2 + 0x20) = CONCAT44(uStack_1c,local_20);
    *(ulong *)(param_2 + 0x28) = CONCAT44(local_14,local_18);
    goto LAB_05401b94;
  }
  iVar4 = Isdigit(wVar9);
  if (iVar4 == 0) {
    if (wVar9 == L'*') {
      uVar10 = (uint)(ushort)param_1[2];
      pwVar7 = param_1 + 2;
      local_33 = 1;
    }
    uVar5 = uVar10 - 0x49;
    if (0x31 < uVar5) goto switchD_05401b20_caseD_5401b5c;
LAB_05401b0c:
    switch((long)(short)(&switchD_05401b20::switchdataD_05768f5c)[uVar5] * 4 + 0x5401b24) {
    case 0x5401b5c:
      goto switchD_05401b20_caseD_5401b5c;
    case 0x5401d48:
      uVar10 = (uint)(ushort)pwVar7[1];
      pwVar7 = pwVar7 + 1;
      uStack_3c = 7;
      break;
    case 0x5401d6c:
      uVar10 = (uint)(ushort)pwVar7[1];
      pwVar7 = pwVar7 + 1;
      uStack_3c = 8;
      break;
    case 0x5401d80:
      uVar10 = (uint)(ushort)pwVar7[1];
      if (uVar10 == 0x6c) {
        uVar10 = (uint)(ushort)pwVar7[2];
        pwVar7 = pwVar7 + 2;
        uStack_3c = 5;
      }
      else {
        pwVar7 = pwVar7 + 1;
        uStack_3c = 4;
      }
      break;
    case 0x5401d9c:
      uVar10 = (uint)(ushort)pwVar7[1];
      pwVar7 = pwVar7 + 1;
      uStack_3c = 6;
      break;
    case 0x5401db0:
      uVar10 = (uint)(ushort)pwVar7[1];
      if (uVar10 == 0x68) {
        uVar10 = (uint)(ushort)pwVar7[2];
        pwVar7 = pwVar7 + 2;
        uStack_3c = 1;
      }
      else {
        pwVar7 = pwVar7 + 1;
        uStack_3c = 2;
      }
      break;
    case 0x5401dcc:
      uVar10 = (uint)(ushort)pwVar7[1];
      pwVar7 = pwVar7 + 1;
      uStack_3c = 10;
      break;
    case 0x5401de0:
      wVar9 = pwVar7[1];
      if (wVar9 == L'8') {
        uVar10 = (uint)(ushort)pwVar7[2];
        pwVar7 = pwVar7 + 2;
        uStack_3c = 0xc;
      }
      else if (wVar9 == L'1') {
        if (pwVar7[2] == L'6') {
          uVar10 = (uint)(ushort)pwVar7[3];
          pwVar7 = pwVar7 + 3;
          uStack_3c = 0xd;
        }
        else {
          if ((pwVar7[2] != L'2') || (pwVar7[3] != L'8')) goto LAB_05401e04;
          uVar10 = (uint)(ushort)pwVar7[4];
          pwVar7 = pwVar7 + 4;
          uStack_3c = 0x10;
        }
      }
      else if (wVar9 == L'3') {
        if (pwVar7[2] != L'2') goto LAB_05401e04;
        uVar10 = (uint)(ushort)pwVar7[3];
        pwVar7 = pwVar7 + 3;
        uStack_3c = 0xe;
      }
      else {
        if ((wVar9 != L'6') || (pwVar7[2] != L'4')) {
LAB_05401e04:
          local_38 = 0;
          pwVar7 = pwVar7 + 1;
          goto LAB_05401e18;
        }
        uVar10 = (uint)(ushort)pwVar7[3];
        pwVar7 = pwVar7 + 3;
        uStack_3c = 0xf;
      }
    }
    uVar5 = uVar10 - 0x41;
    if (uVar5 < 0x38) goto LAB_05401bc0;
switchD_05401bd4_caseD_5401b6c:
    local_38 = 0;
  }
  else {
    iVar4 = 0;
    local_34 = 1;
    do {
      iVar6 = uVar10 - 0x30;
      pwVar7 = pwVar7 + 1;
      uVar10 = (uint)(ushort)*pwVar7;
      iVar4 = iVar6 + iVar4 * 10;
      iVar6 = Isdigit(*pwVar7);
    } while (iVar6 != 0);
    uVar5 = uVar10 - 0x49;
    local_40 = iVar4;
    if (uVar5 < 0x32) goto LAB_05401b0c;
switchD_05401b20_caseD_5401b5c:
    uVar5 = uVar10 - 0x41;
    if (0x37 < uVar5) goto switchD_05401bd4_caseD_5401b6c;
LAB_05401bc0:
    local_38 = uVar10;
    switch((long)(char)(&switchD_05401bd4::switchdataD_05768fc0)[uVar5] * 4 + 0x5401bd8) {
    case 0x5401b6c:
      goto switchD_05401bd4_caseD_5401b6c;
    case 0x5401bd8:
      uStack_3c = 0xf;
      local_38 = 0x78;
      break;
    case 0x5401bec:
      if (uStack_3c == 2) {
        uStack_3c = 1;
      }
      else if ((uStack_3c & 0xfffffffb) == 0) {
        uStack_3c = 0xb;
      }
      else if (2 < uStack_3c - 0xc) {
        local_38 = 0;
      }
      wVar9 = pwVar7[1];
      bVar3 = wVar9 == L'^';
      if (bVar3) {
        wVar9 = pwVar7[2];
        pwVar7 = pwVar7 + 2;
      }
      else {
        pwVar7 = pwVar7 + 1;
      }
      if (wVar9 == L']') {
        pwVar7 = pwVar7 + 1;
        CharBitmap::Set16((CharBitmap *)&local_30,L']');
        wVar9 = *pwVar7;
      }
      if ((wVar9 != L']') && (wVar9 != L'\0')) {
LAB_05401c4c:
        do {
          CharBitmap::Set16((CharBitmap *)&local_30,wVar9);
          wVar2 = pwVar7[1];
          if (pwVar7[1] == L'-') {
            wVar2 = pwVar7[2];
            if ((wVar2 == L'\0') || (wVar2 == L']')) {
              pwVar7 = pwVar7 + 1;
              wVar9 = L'-';
              goto LAB_05401c4c;
            }
            wVar8 = wVar9 + L'\x01';
            if ((ushort)(wVar9 + L'\x01') <= (ushort)wVar2) {
              do {
                wVar9 = wVar8 + L'\x01';
                CharBitmap::Set16((CharBitmap *)&local_30,wVar8);
                wVar8 = wVar9;
              } while ((ushort)wVar9 <= (ushort)pwVar7[2]);
            }
            pwVar1 = pwVar7 + 3;
            pwVar7 = pwVar7 + 2;
            wVar2 = *pwVar1;
          }
          wVar9 = wVar2;
          pwVar7 = pwVar7 + 1;
          if ((wVar9 == L']') || (wVar9 == L'\0')) break;
        } while( true );
      }
      if (wVar9 == L'\0') {
        local_38 = 0;
      }
      else if (bVar3) {
        CharBitmap::NegateAll((CharBitmap *)&local_30);
      }
      break;
    case 0x5401cb0:
      if (uStack_3c == 10) {
        local_38 = 0;
      }
      break;
    case 0x5401cc4:
      if (uStack_3c == 4) {
LAB_05401ec8:
        uStack_3c = 0xb;
      }
      else {
        if (uStack_3c != 2) {
          if (uStack_3c != 0) {
            if (2 < uStack_3c - 0xc) {
              local_38 = 0;
            }
            goto LAB_05401cec;
          }
          if ((uVar10 & 0xffffffef) == 99) goto LAB_05401ec8;
        }
        uStack_3c = 1;
      }
LAB_05401cec:
      if ((uVar10 & 0xffffffdf) == 0x53) {
        local_30 = 0xffffc1ff;
        local_28 = 0xffffffff;
        uStack_2c = 0xfffffffe;
        local_24 = 0xffffffff;
        local_20 = 0xffffffff;
        uStack_1c = 0xffffffff;
        local_18 = 0xffffffff;
        local_14 = 0xffffffff;
      }
      break;
    case 0x5401d28:
      if (uStack_3c == 4) {
        uStack_3c = 9;
      }
      else if ((uStack_3c != 0) && (uStack_3c != 10)) {
        local_38 = 0;
      }
    }
  }
  *(ulong *)param_2 = CONCAT44(uStack_3c,local_40);
  *(ulong *)(param_2 + 8) = CONCAT26(uStack_32,CONCAT15(local_33,CONCAT14(local_34,local_38)));
  pwVar7 = pwVar7 + 1;
  *(ulong *)(param_2 + 0x10) = CONCAT44(uStack_2c,local_30);
  *(ulong *)(param_2 + 0x18) = CONCAT44(local_24,local_28);
  *(undefined4 *)(param_2 + 0x30) = local_10;
  *(ulong *)(param_2 + 0x20) = CONCAT44(uStack_1c,local_20);
  *(ulong *)(param_2 + 0x28) = CONCAT44(local_14,local_18);
LAB_05401b94:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pwVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ScanfLocal::ReadFormat32(char32_t const*, EA::StdC::ScanfLocal::FormatData*) */

void EA::StdC::ScanfLocal::ReadFormat32(wchar32 *param_1,FormatData *param_2)

{
  wchar32 *pwVar1;
  wchar32 wVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar32 *pwVar7;
  wchar32 wVar8;
  wchar32 wVar9;
  int local_40;
  uint uStack_3c;
  wchar32 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined2 uStack_32;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pwVar7 = param_1 + 1;
  FormatData::FormatData((FormatData *)&local_40);
  wVar9 = param_1[1];
  if (wVar9 == L'%') {
    pwVar7 = param_1 + 2;
    local_38 = wVar9;
LAB_05402344:
    *(ulong *)param_2 = CONCAT44(uStack_3c,local_40);
    *(ulong *)(param_2 + 8) = CONCAT26(uStack_32,CONCAT15(local_33,CONCAT14(local_34,local_38)));
    *(ulong *)(param_2 + 0x10) = CONCAT44(uStack_2c,local_30);
    *(ulong *)(param_2 + 0x18) = CONCAT44(local_24,local_28);
    *(undefined4 *)(param_2 + 0x30) = local_10;
    *(ulong *)(param_2 + 0x20) = CONCAT44(uStack_1c,local_20);
    *(ulong *)(param_2 + 0x28) = CONCAT44(local_14,local_18);
    goto LAB_054020c8;
  }
  iVar4 = Isdigit(wVar9);
  if (iVar4 == 0) {
    if (wVar9 == L'*') {
      wVar9 = param_1[2];
      pwVar7 = param_1 + 2;
      local_33 = 1;
    }
    uVar5 = wVar9 + L'\xffffffb7';
    if (0x31 < uVar5) goto switchD_05402054_caseD_5402090;
LAB_05402040:
    switch((long)(short)(&switchD_05402054::switchdataD_05768ff8)[uVar5] * 4 + 0x5402058) {
    case 0x5402090:
      goto switchD_05402054_caseD_5402090;
    case 0x5402274:
      wVar9 = pwVar7[1];
      pwVar7 = pwVar7 + 1;
      uStack_3c = 7;
      break;
    case 0x5402298:
      wVar9 = pwVar7[1];
      pwVar7 = pwVar7 + 1;
      uStack_3c = 8;
      break;
    case 0x54022ac:
      wVar9 = pwVar7[1];
      if (wVar9 == L'l') {
        wVar9 = pwVar7[2];
        pwVar7 = pwVar7 + 2;
        uStack_3c = 5;
      }
      else {
        pwVar7 = pwVar7 + 1;
        uStack_3c = 4;
      }
      break;
    case 0x54022c8:
      wVar9 = pwVar7[1];
      pwVar7 = pwVar7 + 1;
      uStack_3c = 6;
      break;
    case 0x54022dc:
      wVar9 = pwVar7[1];
      if (wVar9 == L'h') {
        wVar9 = pwVar7[2];
        pwVar7 = pwVar7 + 2;
        uStack_3c = 1;
      }
      else {
        pwVar7 = pwVar7 + 1;
        uStack_3c = 2;
      }
      break;
    case 0x54022f8:
      wVar9 = pwVar7[1];
      pwVar7 = pwVar7 + 1;
      uStack_3c = 10;
      break;
    case 0x540230c:
      wVar9 = pwVar7[1];
      if (wVar9 == L'8') {
        wVar9 = pwVar7[2];
        pwVar7 = pwVar7 + 2;
        uStack_3c = 0xc;
      }
      else if (wVar9 == L'1') {
        if (pwVar7[2] == L'6') {
          wVar9 = pwVar7[3];
          pwVar7 = pwVar7 + 3;
          uStack_3c = 0xd;
        }
        else {
          if ((pwVar7[2] != L'2') || (pwVar7[3] != L'8')) goto LAB_05402330;
          wVar9 = pwVar7[4];
          pwVar7 = pwVar7 + 4;
          uStack_3c = 0x10;
        }
      }
      else if (wVar9 == L'3') {
        if (pwVar7[2] != L'2') goto LAB_05402330;
        wVar9 = pwVar7[3];
        pwVar7 = pwVar7 + 3;
        uStack_3c = 0xe;
      }
      else {
        if ((wVar9 != L'6') || (pwVar7[2] != L'4')) {
LAB_05402330:
          local_38 = L'\0';
          pwVar7 = pwVar7 + 1;
          goto LAB_05402344;
        }
        wVar9 = pwVar7[3];
        pwVar7 = pwVar7 + 3;
        uStack_3c = 0xf;
      }
    }
    uVar5 = wVar9 + L'\xffffffbf';
    if (uVar5 < 0x38) goto LAB_054020f4;
switchD_05402108_caseD_54020a0:
    local_38 = L'\0';
  }
  else {
    iVar4 = 0;
    local_34 = 1;
    do {
      iVar4 = wVar9 + iVar4 * 10;
      pwVar7 = pwVar7 + 1;
      wVar9 = *pwVar7;
      iVar4 = iVar4 + -0x30;
      iVar6 = Isdigit(wVar9);
    } while (iVar6 != 0);
    uVar5 = wVar9 + L'\xffffffb7';
    local_40 = iVar4;
    if (uVar5 < 0x32) goto LAB_05402040;
switchD_05402054_caseD_5402090:
    uVar5 = wVar9 + L'\xffffffbf';
    if (0x37 < uVar5) goto switchD_05402108_caseD_54020a0;
LAB_054020f4:
    local_38 = wVar9;
    switch((long)(char)(&switchD_05402108::switchdataD_0576905c)[uVar5] * 4 + 0x540210c) {
    case 0x54020a0:
      goto switchD_05402108_caseD_54020a0;
    case 0x540210c:
      uStack_3c = 0xf;
      local_38 = L'x';
      break;
    case 0x5402120:
      if (uStack_3c == 2) {
        uStack_3c = 1;
      }
      else if ((uStack_3c & 0xfffffffb) == 0) {
        uStack_3c = 0xb;
      }
      else if (2 < uStack_3c - 0xc) {
        local_38 = L'\0';
      }
      wVar9 = pwVar7[1];
      bVar3 = wVar9 == L'^';
      if (bVar3) {
        wVar9 = pwVar7[2];
        pwVar7 = pwVar7 + 2;
      }
      else {
        pwVar7 = pwVar7 + 1;
      }
      if (wVar9 == L']') {
        pwVar7 = pwVar7 + 1;
        CharBitmap::Set32((CharBitmap *)&local_30,L']');
        wVar9 = *pwVar7;
      }
      if ((wVar9 != L']') && (wVar9 != L'\0')) {
LAB_05402180:
        do {
          CharBitmap::Set32((CharBitmap *)&local_30,wVar9);
          wVar2 = pwVar7[1];
          if (pwVar7[1] == L'-') {
            wVar2 = pwVar7[2];
            if ((wVar2 == L'\0') || (wVar2 == L']')) {
              pwVar7 = pwVar7 + 1;
              wVar9 = L'-';
              goto LAB_05402180;
            }
            wVar8 = wVar9 + L'\x01';
            if ((uint)(wVar9 + L'\x01') <= (uint)wVar2) {
              do {
                wVar9 = wVar8 + L'\x01';
                CharBitmap::Set32((CharBitmap *)&local_30,wVar8);
                wVar8 = wVar9;
              } while ((uint)wVar9 <= (uint)pwVar7[2]);
            }
            pwVar1 = pwVar7 + 3;
            pwVar7 = pwVar7 + 2;
            wVar2 = *pwVar1;
          }
          wVar9 = wVar2;
          pwVar7 = pwVar7 + 1;
          if ((wVar9 == L']') || (wVar9 == L'\0')) break;
        } while( true );
      }
      if (wVar9 == L'\0') {
        local_38 = L'\0';
      }
      else if (bVar3) {
        CharBitmap::NegateAll((CharBitmap *)&local_30);
      }
      break;
    case 0x54021dc:
      if (uStack_3c == 10) {
        local_38 = L'\0';
      }
      break;
    case 0x54021f0:
      if (uStack_3c == 4) {
LAB_054023f4:
        uStack_3c = 0xb;
      }
      else {
        if (uStack_3c != 2) {
          if (uStack_3c != 0) {
            if (2 < uStack_3c - 0xc) {
              local_38 = L'\0';
            }
            goto LAB_05402218;
          }
          if ((wVar9 & 0xffffffefU) == 99) goto LAB_054023f4;
        }
        uStack_3c = 1;
      }
LAB_05402218:
      if ((wVar9 & 0xffffffdfU) == 0x53) {
        local_30 = 0xffffc1ff;
        local_28 = 0xffffffff;
        uStack_2c = 0xfffffffe;
        local_24 = 0xffffffff;
        local_20 = 0xffffffff;
        uStack_1c = 0xffffffff;
        local_18 = 0xffffffff;
        local_14 = 0xffffffff;
      }
      break;
    case 0x5402254:
      if (uStack_3c == 4) {
        uStack_3c = 9;
      }
      else if ((uStack_3c != 0) && (uStack_3c != 10)) {
        local_38 = L'\0';
      }
    }
  }
  *(ulong *)param_2 = CONCAT44(uStack_3c,local_40);
  *(ulong *)(param_2 + 8) = CONCAT26(uStack_32,CONCAT15(local_33,CONCAT14(local_34,local_38)));
  pwVar7 = pwVar7 + 1;
  *(ulong *)(param_2 + 0x10) = CONCAT44(uStack_2c,local_30);
  *(ulong *)(param_2 + 0x18) = CONCAT44(local_24,local_28);
  *(undefined4 *)(param_2 + 0x30) = local_10;
  *(ulong *)(param_2 + 0x20) = CONCAT44(uStack_1c,local_20);
  *(ulong *)(param_2 + 0x28) = CONCAT44(local_14,local_18);
LAB_054020c8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pwVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ScanfLocal::VscanfCore(int (*)(EA::StdC::ReadAction, int, void*), void*, char const*,
   std::__va_list) */

void EA::StdC::ScanfLocal::VscanfCore
               (_func_int_ReadAction_int_void_ptr *param_1,void *param_2,byte *param_3,
               ulong *param_4)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  int iVar17;
  long lVar18;
  ulong uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  int iVar22;
  long lVar23;
  long local_80;
  long local_68;
  int local_5c;
  int local_58;
  int iStack_54;
  wchar32 local_50 [2];
  int local_48;
  int local_44;
  int local_40;
  char local_3c;
  char local_3b;
  CharBitmap aCStack_38 [32];
  int local_18;
  byte local_10 [8];
  long local_8;
  
  iVar22 = (int)param_4[3];
  plVar13 = (long *)*param_4;
  lVar18 = 0;
  local_80 = 0;
  uVar7 = 0;
  lVar23 = 0;
  local_8 = ___stack_chk_guard;
  iVar8 = 0;
  FormatData::FormatData((FormatData *)&local_48);
  local_68 = 0;
  (*param_1)(0,1,param_2);
  iVar17 = 0;
  iVar10 = iVar17;
switchD_05402720_caseD_3:
  do {
    uVar14 = (uint)*param_3;
    if (*param_3 == 0) {
switchD_05402778_caseD_26:
      if ((iVar17 == 0) && (iVar8 = (*param_1)(5,0,param_2), iVar8 != 0)) {
        iVar10 = -1;
      }
      (*param_1)(1,0,param_2);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar10);
    }
    while (iVar6 = Isspace((char)uVar14), iVar6 == 0) {
      if (uVar14 == 0x25) {
        param_3 = (byte *)ReadFormat8((char *)param_3,(FormatData *)&local_48);
        if (local_40 != 0x25) {
          if (local_3b == '\0') {
            plVar11 = plVar13;
            if (iVar22 < 0) {
              iVar6 = iVar22 + 8;
              if (iVar6 < 1) {
                plVar11 = (long *)(param_4[1] + (long)iVar22);
              }
              else {
                plVar13 = (long *)((long)plVar13 + 0xfU & 0xfffffffffffffff8);
              }
            }
            else {
              plVar13 = (long *)((long)plVar13 + 0xfU & 0xfffffffffffffff8);
              iVar6 = iVar22;
            }
            pauVar15 = (undefined1 (*) [16])*plVar11;
            iVar22 = iVar6;
            if (local_40 != 0x6e) goto LAB_05402730;
switchD_05402778_caseD_6e:
            if (pauVar15 != (undefined1 (*) [16])0x0) {
              switch(local_44) {
              case 0:
              case 0xe:
                *(int *)*pauVar15 = iVar8;
                break;
              case 1:
              case 0xc:
                (*pauVar15)[0] = (char)iVar8;
                break;
              case 2:
              case 0xd:
                *(short *)*pauVar15 = (short)iVar8;
                break;
              case 4:
              case 5:
              case 0xf:
                *(long *)*pauVar15 = (long)iVar8;
              }
            }
          }
          else if (local_40 != 0x6e) goto LAB_0540272c;
          goto switchD_05402720_caseD_3;
        }
LAB_0540272c:
        pauVar15 = (undefined1 (*) [16])0x0;
LAB_05402730:
        iVar6 = (*param_1)(5,0,param_2);
        if ((iVar6 != 0) || (iVar6 = (*param_1)(4,0,param_2), iVar6 != 0))
        goto switchD_05402778_caseD_26;
        switch(local_40) {
        case 0x25:
          goto switchD_05402778_caseD_25;
        default:
          goto switchD_05402778_caseD_26;
        case 0x41:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x61:
        case 0x65:
        case 0x66:
        case 0x67:
          dVar20 = (double)ReadDouble8(param_1,param_2,local_48,local_18,&local_5c,&iStack_54);
          iVar6 = local_5c;
          if (local_5c == 0) goto switchD_05402778_caseD_26;
          if (pauVar15 != (undefined1 (*) [16])0x0) {
            if (local_44 == 9) {
              *(double *)*pauVar15 = dVar20;
            }
            else if (local_44 == 10) {
              auVar21 = __extenddftf2();
              *pauVar15 = auVar21;
            }
            else if (local_44 == 0) {
              *(float *)*pauVar15 = (float)dVar20;
            }
            iVar10 = iVar10 + 1;
          }
          iVar8 = iVar8 + iVar6;
          iVar17 = iVar17 + 1;
          goto switchD_05402720_caseD_3;
        case 0x43:
        case 99:
          if (local_3c == '\0') {
            local_48 = 1;
          }
          local_5c = 0;
          if (pauVar15 == (undefined1 (*) [16])0x0) {
            iVar6 = local_48 + -1;
            bVar1 = local_48 != 0;
            local_48 = iVar6;
            if (bVar1) goto LAB_05402f9c;
            goto switchD_05402778_caseD_26;
          }
          switch(local_44) {
          case 1:
          case 0xc:
            iVar6 = 1;
            break;
          default:
            goto switchD_05402778_caseD_26;
          case 0xb:
          case 0xe:
            iVar6 = 4;
            break;
          case 0xd:
            iVar6 = 2;
          }
          iVar9 = local_48 + -1;
          bVar1 = local_48 == 0;
          local_48 = iVar9;
          if (bVar1) goto switchD_05402778_caseD_26;
          if (iVar6 == 2) goto LAB_05402ba0;
          if (iVar6 == 4) goto LAB_05402e64;
          if (iVar6 != 1) goto LAB_05402b44;
          goto LAB_05402ea4;
        case 0x53:
        case 0x73:
          goto switchD_05402778_caseD_53;
        case 0x58:
        case 0x62:
        case 100:
        case 0x69:
        case 0x6f:
        case 0x75:
        case 0x78:
          if (local_40 == 0x62) {
            iVar6 = 2;
          }
          else if (local_40 == 0x6f) {
            iVar6 = 8;
          }
          else if ((local_40 == 100) || (local_40 == 0x75)) {
            iVar6 = 10;
          }
          else {
            iVar6 = 0;
            if (local_40 != 0x69) {
              iVar6 = 0x10;
            }
          }
          switch(local_44) {
          case 2:
          case 0xd:
            uVar12 = 0xffff;
            break;
          default:
            uVar12 = 0xff;
            break;
          case 4:
          case 0xe:
            uVar12 = 0xffffffff;
            break;
          case 5:
          case 0xf:
            lVar18 = ReadUint64_8(param_1,param_2,0xffffffffffffffff,iVar6,local_48,&local_5c,
                                  &local_58,&iStack_54);
            goto LAB_05402888;
          }
          lVar23 = ReadUint64_8(param_1,param_2,uVar12,iVar6,local_48,&local_5c,&local_58,&iStack_54
                               );
LAB_05402888:
          if (local_5c == 0) goto switchD_05402778_caseD_26;
          if ((local_40 == 100) || (local_40 == 0x69)) {
            if (local_58 == 0) {
              lVar4 = lVar18;
              if ((local_44 != 0xf) && (local_44 != 5)) {
                lVar4 = local_80;
                local_68 = lVar23;
              }
            }
            else if ((local_44 == 0xf) || (local_44 == 5)) {
              lVar4 = -lVar18;
            }
            else {
              lVar4 = local_80;
              local_68 = -lVar23;
            }
            local_80 = lVar4;
            if (pauVar15 == (undefined1 (*) [16])0x0) goto LAB_05402b8c;
            switch(local_44) {
            case 0:
            case 0xe:
              *(undefined4 *)*pauVar15 = (undefined4)local_68;
              break;
            case 1:
            case 0xc:
              (*pauVar15)[0] = (undefined1)local_68;
              break;
            case 2:
            case 0xd:
              *(undefined2 *)*pauVar15 = (undefined2)local_68;
              break;
            case 4:
              *(long *)*pauVar15 = local_68;
              break;
            case 5:
            case 0xf:
              *(long *)*pauVar15 = local_80;
            }
          }
          else {
            if (local_58 != 0) {
              if ((local_44 == 0xf) || (local_44 == 5)) {
                lVar18 = -lVar18;
              }
              else {
                lVar23 = -lVar23;
              }
            }
            if (pauVar15 == (undefined1 (*) [16])0x0) goto LAB_05402b8c;
            switch(local_44) {
            case 0:
            case 0xe:
              *(int *)*pauVar15 = (int)lVar23;
              break;
            case 1:
            case 0xc:
              (*pauVar15)[0] = (char)lVar23;
              break;
            case 2:
            case 0xd:
              *(short *)*pauVar15 = (short)lVar23;
              break;
            case 4:
              *(long *)*pauVar15 = lVar23;
              break;
            case 5:
            case 0xf:
              *(long *)*pauVar15 = lVar18;
            }
          }
          goto switchD_054028f0_caseD_3;
        case 0x5b:
          goto switchD_05402778_caseD_5b;
        case 0x6e:
          goto switchD_05402778_caseD_6e;
        }
      }
      uVar7 = (*param_1)(2,0,param_2);
      if (uVar7 != uVar14) goto LAB_05402cd8;
      param_3 = param_3 + 1;
      uVar14 = (uint)*param_3;
      iVar8 = iVar8 + 1;
      if (uVar14 == 0) goto switchD_05402778_caseD_26;
    }
    do {
      iVar6 = Isspace(param_3[1]);
      pbVar3 = param_3 + 1;
      if (iVar6 == 0) break;
      param_3 = param_3 + 2;
      iVar6 = Isspace(*param_3);
      pbVar3 = param_3;
    } while (iVar6 != 0);
    while( true ) {
      param_3 = pbVar3;
      uVar7 = (*param_1)(2,0,param_2);
      iVar6 = Isspace((char)uVar7);
      if (iVar6 == 0) break;
      iVar8 = iVar8 + 1;
      pbVar3 = param_3;
    }
LAB_054026a4:
    (*param_1)(3,uVar7,param_2);
  } while( true );
switchD_05402778_caseD_53:
  uVar7 = (*param_1)(2,0,param_2);
  while (iVar6 = Isspace((char)uVar7), iVar6 != 0) {
    iVar8 = iVar8 + 1;
    uVar7 = (*param_1)(2,0,param_2);
  }
  (*param_1)(3,uVar7,param_2);
switchD_05402778_caseD_5b:
  local_5c = 0;
  if (pauVar15 == (undefined1 (*) [16])0x0) {
    iVar6 = local_48 + -1;
    bVar1 = local_48 == 0;
    local_48 = iVar6;
    if (bVar1) goto LAB_054026a4;
    do {
      uVar7 = (*param_1)(2,0,param_2);
      if ((uVar7 == 0xffffffff) || (iVar6 = CharBitmap::Get8(aCStack_38,uVar7), iVar6 == 0)) {
        if (local_5c == 0) goto LAB_05402e0c;
        goto LAB_05402ab0;
      }
      iVar6 = local_48 + -1;
      local_5c = local_5c + 1;
      bVar1 = local_48 != 0;
      local_48 = iVar6;
    } while (bVar1);
    if (local_5c == 0) {
LAB_05402e0c:
      (*param_1)(3,uVar7,param_2);
    }
    else {
LAB_05402ab0:
      if (-1 < local_48) {
        (*param_1)(3,uVar7,param_2);
      }
      iVar17 = iVar17 + 1;
      iVar8 = iVar8 + local_5c;
    }
    goto switchD_05402720_caseD_3;
  }
  switch(local_44) {
  case 1:
  case 0xc:
    iVar6 = 1;
    break;
  default:
    goto switchD_05402778_caseD_26;
  case 0xb:
  case 0xe:
    iVar6 = 4;
    break;
  case 0xd:
    iVar6 = 2;
  }
  iVar9 = local_48 + -1;
  bVar1 = local_48 != 0;
  local_48 = iVar9;
  if (bVar1) {
    do {
      uVar7 = (*param_1)(2,0,param_2);
      if ((uVar7 == 0xffffffff) || (iVar9 = CharBitmap::Get8(aCStack_38,uVar7), iVar9 == 0)) break;
      bVar2 = (byte)uVar7;
      uVar5 = (ushort)uVar7 & 0xff;
      if ((iVar6 == 2) || (iVar6 == 4)) {
        if ((uVar7 >> 7 & 1) != 0) {
          uVar12 = (ulong)(byte)utf8lengthTable[bVar2];
          local_10[0] = bVar2;
          if (1 < uVar12) {
            uVar19 = 1;
            do {
              uVar7 = (*param_1)(2,0,param_2);
              if ((int)uVar7 < 0) goto LAB_05402c8c;
              local_10[uVar19] = (byte)uVar7;
              uVar19 = uVar19 + 1;
              local_5c = local_5c + 1;
            } while (uVar12 != uVar19);
          }
          if (iVar6 == 2) {
            iVar9 = Strlcpy((wchar16 *)local_50,(char *)local_10,2,uVar12);
            if (-1 < iVar9) {
              uVar5 = (ushort)local_50[0];
              goto LAB_05402ca4;
            }
          }
          else {
            iVar9 = Strlcpy(local_50,(char *)local_10,2,uVar12);
            if (-1 < iVar9) {
              *(wchar32 *)*pauVar15 = local_50[0];
              goto LAB_05402c18;
            }
          }
LAB_05402c8c:
          iVar10 = -1;
          goto switchD_05402778_caseD_26;
        }
        if (iVar6 == 2) {
LAB_05402ca4:
          *(ushort *)*pauVar15 = uVar5;
        }
        else {
          *(uint *)*pauVar15 = uVar7 & 0xff;
        }
LAB_05402c18:
        pauVar16 = (undefined1 (*) [16])(*pauVar15 + iVar6);
      }
      else {
        pauVar16 = pauVar15;
        if (iVar6 == 1) {
          pauVar16 = (undefined1 (*) [16])(*pauVar15 + 1);
          (*pauVar15)[0] = bVar2;
        }
      }
      iVar9 = local_48 + -1;
      local_5c = local_5c + 1;
      bVar1 = local_48 != 0;
      pauVar15 = pauVar16;
      local_48 = iVar9;
    } while (bVar1);
    if (local_5c != 0) {
      if (iVar6 == 2) {
        *(undefined2 *)*pauVar15 = 0;
      }
      else if (iVar6 == 4) {
        *(undefined4 *)*pauVar15 = 0;
      }
      else if (iVar6 == 1) {
        (*pauVar15)[0] = 0;
      }
      iVar10 = iVar10 + 1;
      goto LAB_05402ab0;
    }
  }
LAB_05402cd8:
  (*param_1)(3,uVar7,param_2);
  goto switchD_05402778_caseD_26;
  while( true ) {
    iVar6 = local_48 + -1;
    local_5c = local_5c + 1;
    bVar1 = local_48 == 0;
    local_48 = iVar6;
    if (bVar1) break;
LAB_05402f9c:
    uVar7 = (*param_1)(2,0,param_2);
    if (uVar7 == 0xffffffff) {
      if (local_5c != 0) goto LAB_05402b8c;
      goto switchD_05402778_caseD_26;
    }
  }
  if (local_5c == 0) goto switchD_05402778_caseD_26;
  goto LAB_05402b8c;
  while( true ) {
    *(short *)*pauVar15 = (short)uVar7;
    local_5c = local_5c + 1;
    iVar6 = local_48 + -1;
    bVar1 = local_48 == 0;
    local_48 = iVar6;
    if (bVar1) break;
LAB_05402ba0:
    uVar7 = (*param_1)(2,0,param_2);
    if (uVar7 == 0xffffffff) break;
  }
  goto LAB_05402b7c;
  while( true ) {
    *(uint *)*pauVar15 = uVar7;
    local_5c = local_5c + 1;
    iVar6 = local_48 + -1;
    bVar1 = local_48 == 0;
    local_48 = iVar6;
    if (bVar1) break;
LAB_05402e64:
    uVar7 = (*param_1)(2,0,param_2);
    if (uVar7 == 0xffffffff) break;
  }
  goto LAB_05402b7c;
  while( true ) {
    (*pauVar15)[0] = (char)uVar7;
    local_5c = local_5c + 1;
    iVar6 = local_48 + -1;
    bVar1 = local_48 == 0;
    local_48 = iVar6;
    if (bVar1) break;
LAB_05402ea4:
    uVar7 = (*param_1)(2,0,param_2);
    if (uVar7 == 0xffffffff) break;
  }
  goto LAB_05402b7c;
  while( true ) {
    local_5c = local_5c + 1;
    iVar6 = local_48 + -1;
    bVar1 = local_48 == 0;
    local_48 = iVar6;
    if (bVar1) break;
LAB_05402b44:
    uVar7 = (*param_1)(2,0,param_2);
    if (uVar7 == 0xffffffff) break;
  }
LAB_05402b7c:
  if (local_5c == 0) goto switchD_05402778_caseD_26;
switchD_054028f0_caseD_3:
  iVar10 = iVar10 + 1;
LAB_05402b8c:
  iVar8 = iVar8 + local_5c;
  iVar17 = iVar17 + 1;
  goto switchD_05402720_caseD_3;
switchD_05402778_caseD_25:
  while( true ) {
    uVar7 = (*param_1)(2,0,param_2);
    iVar6 = Isspace((char)uVar7);
    if (iVar6 == 0) break;
    iVar8 = iVar8 + 1;
  }
  if (uVar7 == 0x25) {
    iVar8 = iVar8 + 1;
    goto switchD_05402720_caseD_3;
  }
  goto LAB_05402cd8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ScanfLocal::VscanfCore(int (*)(EA::StdC::ReadAction, int, void*), void*, char16_t
   const*, std::__va_list) */

void EA::StdC::ScanfLocal::VscanfCore
               (_func_int_ReadAction_int_void_ptr *param_1,void *param_2,wchar16 *param_3,
               ulong *param_4)

{
  bool bVar1;
  char *pcVar2;
  wchar16 *pwVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  long lVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  undefined1 auVar17 [16];
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  wchar16 local_4e;
  int local_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_34;
  char local_33;
  CharBitmap aCStack_30 [32];
  int local_10;
  long local_8;
  
  iVar18 = (int)param_4[3];
  plVar10 = (long *)*param_4;
  lVar13 = 0;
  uVar5 = 0;
  lVar21 = 0;
  local_8 = ___stack_chk_guard;
  lVar19 = 0;
  FormatData::FormatData((FormatData *)&local_40);
  iVar6 = 0;
  lVar20 = 0;
  iVar15 = 0;
  iVar14 = 0;
  (*param_1)(0,2,param_2);
switchD_05403218_caseD_3:
  uVar11 = (uint)(ushort)*param_3;
  if (*param_3 == L'\0') {
switchD_05403270_caseD_26:
    if ((iVar15 == 0) && (iVar6 = (*param_1)(5,0,param_2), iVar6 != 0)) {
      iVar14 = -1;
    }
    (*param_1)(1,0,param_2);
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar14);
    }
    return;
  }
  while( true ) {
    iVar4 = Isspace((wchar16)uVar11);
    if (iVar4 != 0) goto LAB_05403160;
    if (uVar11 == 0x25) break;
    uVar5 = (*param_1)(2,0,param_2);
    if (uVar5 != uVar11) goto LAB_05403844;
    param_3 = param_3 + 1;
    uVar11 = (uint)(ushort)*param_3;
    iVar6 = iVar6 + 1;
    if (uVar11 == 0) goto switchD_05403270_caseD_26;
  }
  param_3 = (wchar16 *)ReadFormat16(param_3,(FormatData *)&local_40);
  if (local_38 != 0x25) {
    if (local_33 == '\0') {
      plVar8 = plVar10;
      if (iVar18 < 0) {
        iVar4 = iVar18 + 8;
        if (iVar4 < 1) {
          plVar8 = (long *)(param_4[1] + (long)iVar18);
        }
        else {
          plVar10 = (long *)((long)plVar10 + 0xfU & 0xfffffffffffffff8);
        }
      }
      else {
        plVar10 = (long *)((long)plVar10 + 0xfU & 0xfffffffffffffff8);
        iVar4 = iVar18;
      }
      pauVar12 = (undefined1 (*) [16])*plVar8;
      iVar18 = iVar4;
      if (local_38 != 0x6e) goto LAB_05403228;
switchD_05403270_caseD_6e:
      if (pauVar12 != (undefined1 (*) [16])0x0) {
        switch(local_3c) {
        case 0:
        case 0xe:
          *(int *)*pauVar12 = iVar6;
          break;
        case 1:
        case 0xc:
          (*pauVar12)[0] = (char)iVar6;
          break;
        case 2:
        case 0xd:
          *(short *)*pauVar12 = (short)iVar6;
          break;
        case 4:
        case 5:
        case 0xf:
          *(long *)*pauVar12 = (long)iVar6;
        }
      }
    }
    else if (local_38 != 0x6e) goto LAB_05403224;
    goto switchD_05403218_caseD_3;
  }
LAB_05403224:
  pauVar12 = (undefined1 (*) [16])0x0;
LAB_05403228:
  iVar4 = (*param_1)(5,0,param_2);
  if ((iVar4 != 0) || (iVar4 = (*param_1)(4,0,param_2), iVar4 != 0)) goto switchD_05403270_caseD_26;
  lVar22 = lVar21;
  switch(local_38) {
  case 0x25:
    goto switchD_05403270_caseD_25;
  default:
    goto switchD_05403270_caseD_26;
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    dVar16 = (double)ReadDouble16(param_1,param_2,local_40,local_10,&local_4c,&iStack_44);
    iVar4 = local_4c;
    if (local_4c == 0) goto switchD_05403270_caseD_26;
    if (pauVar12 == (undefined1 (*) [16])0x0) goto LAB_05403464;
    if (local_3c == 9) {
      *(double *)*pauVar12 = dVar16;
      iVar14 = iVar14 + 1;
      goto LAB_05403464;
    }
    if (local_3c == 10) {
      auVar17 = __extenddftf2();
      *pauVar12 = auVar17;
    }
    else if (local_3c == 0) {
      *(float *)*pauVar12 = (float)dVar16;
    }
    break;
  case 0x43:
  case 99:
    if (local_34 == '\0') {
      local_40 = 1;
    }
    local_4c = 0;
    if (pauVar12 == (undefined1 (*) [16])0x0) {
      iVar4 = local_40 + -1;
      bVar1 = local_40 == 0;
      local_40 = iVar4;
      if (bVar1) goto switchD_05403270_caseD_26;
      goto LAB_054039fc;
    }
    switch(local_3c) {
    case 1:
    case 0xc:
      iVar4 = 1;
      break;
    default:
      goto switchD_05403270_caseD_26;
    case 0xb:
    case 0xe:
      iVar4 = 4;
      break;
    case 0xd:
      iVar4 = 2;
    }
    iVar7 = local_40 + -1;
    bVar1 = local_40 == 0;
    local_40 = iVar7;
    if (bVar1) goto switchD_05403270_caseD_26;
    if (iVar4 == 2) goto LAB_05403778;
    if (iVar4 == 4) goto LAB_054037bc;
    if (iVar4 == 1) goto LAB_05403a44;
    goto LAB_05403734;
  case 0x53:
  case 0x73:
    uVar5 = (*param_1)(2,0,param_2);
    while (iVar4 = Isspace((wchar16)uVar5), iVar4 != 0) {
      iVar6 = iVar6 + 1;
      uVar5 = (*param_1)(2,0,param_2);
    }
    (*param_1)(3,uVar5,param_2);
switchD_05403270_caseD_5b:
    local_4c = 0;
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      switch(local_3c) {
      case 1:
      case 0xc:
        iVar4 = 1;
        break;
      default:
        goto switchD_05403270_caseD_26;
      case 0xb:
      case 0xe:
        iVar4 = 4;
        break;
      case 0xd:
        iVar4 = 2;
      }
      iVar7 = local_40 + -1;
      bVar1 = local_40 == 0;
      local_40 = iVar7;
      if (bVar1) goto LAB_05403844;
      if (iVar4 == 2) {
        do {
          uVar5 = (*param_1)(2,0,param_2);
          if ((uVar5 == 0xffffffff) || (iVar7 = CharBitmap::Get32(aCStack_30,uVar5), iVar7 == 0))
          break;
          local_4e = (wchar16)uVar5;
          local_4c = local_4c + 1;
          pcVar2 = *pauVar12;
          *(wchar16 *)*pauVar12 = local_4e;
          iVar7 = local_40 + -1;
          bVar1 = local_40 != 0;
          pauVar12 = (undefined1 (*) [16])(pcVar2 + 2);
          local_40 = iVar7;
        } while (bVar1);
      }
      else if (iVar4 == 4) {
        do {
          uVar5 = (*param_1)(2,0,param_2);
          if ((uVar5 == 0xffffffff) || (iVar7 = CharBitmap::Get32(aCStack_30,uVar5), iVar7 == 0))
          break;
          local_4e = (wchar16)uVar5;
          pcVar2 = *pauVar12;
          *(uint *)*pauVar12 = uVar5 & 0xffff;
          local_4c = local_4c + 1;
          iVar7 = local_40 + -1;
          bVar1 = local_40 != 0;
          pauVar12 = (undefined1 (*) [16])(pcVar2 + 4);
          local_40 = iVar7;
        } while (bVar1);
      }
      else if (iVar4 == 1) {
        do {
          uVar5 = (*param_1)(2,0,param_2);
          if ((uVar5 == 0xffffffff) || (iVar7 = CharBitmap::Get32(aCStack_30,uVar5), iVar7 == 0))
          break;
          local_4e = (wchar16)uVar5;
          iVar7 = Strlcpy((char *)pauVar12,&local_4e,7,1);
          pauVar12 = (undefined1 (*) [16])(*pauVar12 + iVar7);
          local_4c = local_4c + 1;
          iVar7 = local_40 + -1;
          bVar1 = local_40 != 0;
          local_40 = iVar7;
        } while (bVar1);
      }
      else {
        do {
          uVar5 = (*param_1)(2,0,param_2);
          if ((uVar5 == 0xffffffff) || (iVar7 = CharBitmap::Get32(aCStack_30,uVar5), iVar7 == 0))
          break;
          local_4c = local_4c + 1;
          local_4e = (wchar16)uVar5;
          iVar7 = local_40 + -1;
          bVar1 = local_40 != 0;
          local_40 = iVar7;
        } while (bVar1);
      }
      if (local_4c != 0) {
        if (iVar4 == 2) {
          *(char *)((long)pauVar12 + 0) = '\0';
          *(char *)((long)pauVar12 + 1) = '\0';
        }
        else if (iVar4 == 4) {
          *(char *)((long)pauVar12 + 0) = '\0';
          *(char *)((long)pauVar12 + 1) = '\0';
          *(char *)((long)pauVar12 + 2) = '\0';
          *(char *)((long)pauVar12 + 3) = '\0';
        }
        else if (iVar4 == 1) {
          (*pauVar12)[0] = '\0';
        }
        iVar14 = iVar14 + 1;
        goto LAB_05403584;
      }
      goto LAB_05403844;
    }
    iVar4 = local_40 + -1;
    bVar1 = local_40 == 0;
    local_40 = iVar4;
    if (bVar1) goto LAB_0540319c;
    do {
      uVar5 = (*param_1)(2,0,param_2);
      if ((uVar5 == 0xffffffff) || (iVar4 = CharBitmap::Get32(aCStack_30,uVar5), iVar4 == 0)) break;
      iVar4 = local_40 + -1;
      local_4c = local_4c + 1;
      bVar1 = local_40 != 0;
      local_40 = iVar4;
    } while (bVar1);
    if (local_4c == 0) {
      (*param_1)(3,uVar5,param_2);
    }
    else {
LAB_05403584:
      if (-1 < local_40) {
        (*param_1)(3,uVar5,param_2);
      }
      iVar15 = iVar15 + 1;
      iVar6 = iVar6 + local_4c;
    }
    goto switchD_05403218_caseD_3;
  case 0x58:
  case 0x62:
  case 100:
  case 0x69:
  case 0x6f:
  case 0x75:
  case 0x78:
    if (local_38 == 0x62) {
      iVar4 = 2;
    }
    else if (local_38 == 0x6f) {
      iVar4 = 8;
    }
    else if ((local_38 == 100) || (local_38 == 0x75)) {
      iVar4 = 10;
    }
    else {
      iVar4 = 0;
      if (local_38 != 0x69) {
        iVar4 = 0x10;
      }
    }
    switch(local_3c) {
    case 2:
    case 0xd:
      uVar9 = 0xffff;
      break;
    default:
      uVar9 = 0xff;
      break;
    case 4:
    case 0xe:
      uVar9 = 0xffffffff;
      break;
    case 5:
    case 0xf:
      lVar13 = ReadUint64_16(param_1,param_2,0xffffffffffffffff,iVar4,local_40,&local_4c,&local_48,
                             &iStack_44);
      goto LAB_05403380;
    }
    lVar19 = ReadUint64_16(param_1,param_2,uVar9,iVar4,local_40,&local_4c,&local_48,&iStack_44);
LAB_05403380:
    if (local_4c == 0) goto switchD_05403270_caseD_26;
    iVar4 = local_4c;
    if ((local_38 == 100) || (local_38 == 0x69)) {
      if (local_48 == 0) {
        lVar22 = lVar13;
        if ((local_3c != 0xf) && (local_3c != 5)) {
          lVar20 = lVar19;
          lVar22 = lVar21;
        }
      }
      else if ((local_3c == 0xf) || (local_3c == 5)) {
        lVar22 = -lVar13;
      }
      else {
        lVar20 = -lVar19;
      }
      lVar21 = lVar22;
      if (pauVar12 == (undefined1 (*) [16])0x0) goto LAB_05403464;
      switch(local_3c) {
      case 0:
      case 0xe:
        *(int *)*pauVar12 = (int)lVar20;
        break;
      case 1:
      case 0xc:
        (*pauVar12)[0] = (char)lVar20;
        break;
      case 2:
      case 0xd:
        *(short *)*pauVar12 = (short)lVar20;
        break;
      case 4:
        *(long *)*pauVar12 = lVar20;
        break;
      case 5:
      case 0xf:
        *(long *)*pauVar12 = lVar22;
      }
    }
    else {
      if (local_48 != 0) {
        if ((local_3c == 0xf) || (local_3c == 5)) {
          lVar13 = -lVar13;
        }
        else {
          lVar19 = -lVar19;
        }
      }
      if (pauVar12 == (undefined1 (*) [16])0x0) goto LAB_05403464;
      switch(local_3c) {
      case 0:
      case 0xe:
        *(int *)*pauVar12 = (int)lVar19;
        break;
      case 1:
      case 0xc:
        (*pauVar12)[0] = (char)lVar19;
        break;
      case 2:
      case 0xd:
        *(short *)*pauVar12 = (short)lVar19;
        break;
      case 4:
        *(long *)*pauVar12 = lVar19;
        break;
      case 5:
      case 0xf:
        *(long *)*pauVar12 = lVar13;
      }
    }
    break;
  case 0x5b:
    goto switchD_05403270_caseD_5b;
  case 0x6e:
    goto switchD_05403270_caseD_6e;
  }
  iVar14 = iVar14 + 1;
  lVar21 = lVar22;
  goto LAB_05403464;
  while( true ) {
    param_3 = param_3 + 2;
    iVar4 = Isspace(*param_3);
    pwVar3 = param_3;
    if (iVar4 == 0) break;
LAB_05403160:
    iVar4 = Isspace(param_3[1]);
    pwVar3 = param_3 + 1;
    if (iVar4 == 0) break;
  }
  while( true ) {
    param_3 = pwVar3;
    uVar5 = (*param_1)(2,0,param_2);
    iVar4 = Isspace((wchar16)uVar5);
    if (iVar4 == 0) break;
    iVar6 = iVar6 + 1;
    pwVar3 = param_3;
  }
LAB_0540319c:
  (*param_1)(3,uVar5,param_2);
  goto switchD_05403218_caseD_3;
  while( true ) {
    iVar4 = local_40 + -1;
    local_4c = local_4c + 1;
    bVar1 = local_40 == 0;
    local_40 = iVar4;
    if (bVar1) break;
LAB_054039fc:
    uVar5 = (*param_1)(2,0,param_2);
    if (uVar5 == 0xffffffff) break;
  }
  if (local_4c == 0) goto switchD_05403270_caseD_26;
  iVar6 = iVar6 + local_4c;
  iVar15 = iVar15 + 1;
  goto switchD_05403218_caseD_3;
  while( true ) {
    *(short *)*pauVar12 = (short)uVar5;
    local_4c = local_4c + 1;
    iVar4 = local_40 + -1;
    bVar1 = local_40 == 0;
    local_40 = iVar4;
    iVar4 = local_4c;
    if (bVar1) break;
LAB_05403778:
    uVar5 = (*param_1)(2,0,param_2);
    iVar4 = local_4c;
    if (uVar5 == 0xffffffff) break;
  }
  goto joined_r0x054037b4;
  while( true ) {
    *(uint *)*pauVar12 = uVar5;
    local_4c = local_4c + 1;
    iVar4 = local_40 + -1;
    bVar1 = local_40 == 0;
    local_40 = iVar4;
    iVar4 = local_4c;
    if (bVar1) break;
LAB_054037bc:
    uVar5 = (*param_1)(2,0,param_2);
    iVar4 = local_4c;
    if (uVar5 == 0xffffffff) break;
  }
  goto joined_r0x054037b4;
  while( true ) {
    local_4c = local_4c + 1;
    iVar4 = local_40 + -1;
    bVar1 = local_40 == 0;
    local_40 = iVar4;
    iVar4 = local_4c;
    if (bVar1) break;
LAB_05403734:
    uVar5 = (*param_1)(2,0,param_2);
    iVar4 = local_4c;
    if (uVar5 == 0xffffffff) break;
  }
  goto joined_r0x054037b4;
  while( true ) {
    (*pauVar12)[0] = (char)uVar5;
    local_4c = local_4c + 1;
    iVar4 = local_40 + -1;
    bVar1 = local_40 == 0;
    local_40 = iVar4;
    iVar4 = local_4c;
    if (bVar1) break;
LAB_05403a44:
    uVar5 = (*param_1)(2,0,param_2);
    iVar4 = local_4c;
    if (uVar5 == 0xffffffff) break;
  }
joined_r0x054037b4:
  local_4c = iVar4;
  if (iVar4 == 0) goto switchD_05403270_caseD_26;
  iVar14 = iVar14 + 1;
LAB_05403464:
  iVar6 = iVar6 + iVar4;
  iVar15 = iVar15 + 1;
  goto switchD_05403218_caseD_3;
switchD_05403270_caseD_25:
  while( true ) {
    uVar5 = (*param_1)(2,0,param_2);
    iVar4 = Isspace((wchar16)uVar5);
    if (iVar4 == 0) break;
    iVar6 = iVar6 + 1;
  }
  if (uVar5 != 0x25) {
LAB_05403844:
    (*param_1)(3,uVar5,param_2);
    goto switchD_05403270_caseD_26;
  }
  iVar6 = iVar6 + 1;
  goto switchD_05403218_caseD_3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::StdC::ScanfLocal::VscanfCore(int (*)(EA::StdC::ReadAction, int, void*), void*, char32_t
   const*, std::__va_list) */

void EA::StdC::ScanfLocal::VscanfCore
               (_func_int_ReadAction_int_void_ptr *param_1,void *param_2,wchar32 *param_3,
               ulong *param_4)

{
  bool bVar1;
  wchar32 wVar2;
  char *pcVar3;
  int iVar4;
  wchar32 wVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  wchar32 *pwVar11;
  undefined1 (*pauVar12) [16];
  long lVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  undefined1 auVar17 [16];
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int local_50;
  int local_4c;
  int iStack_48;
  wchar32 local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_34;
  char local_33;
  CharBitmap aCStack_30 [32];
  int local_10;
  long local_8;
  
  iVar18 = (int)param_4[3];
  plVar10 = (long *)*param_4;
  lVar13 = 0;
  iVar6 = 0;
  lVar21 = 0;
  local_8 = ___stack_chk_guard;
  lVar19 = 0;
  FormatData::FormatData((FormatData *)&local_40);
  wVar5 = L'\0';
  lVar20 = 0;
  iVar15 = 0;
  iVar14 = 0;
  (*param_1)(0,4,param_2);
switchD_05403d40_caseD_3:
  wVar2 = *param_3;
  pwVar11 = param_3;
  while( true ) {
    if (wVar2 == L'\0') goto switchD_05403d98_caseD_26;
    iVar4 = Isspace(wVar2);
    if (iVar4 != 0) goto LAB_05403c88;
    if (wVar2 == L'%') break;
    wVar5 = (*param_1)(2,0,param_2);
    if (wVar5 != wVar2) goto LAB_05404364;
    pwVar11 = pwVar11 + 1;
    wVar2 = *pwVar11;
    iVar6 = iVar6 + 1;
  }
  param_3 = (wchar32 *)ReadFormat32(pwVar11,(FormatData *)&local_40);
  if (local_38 == 0x25) goto LAB_05403d4c;
  if (local_33 != '\0') goto LAB_05403d44;
  plVar8 = plVar10;
  if (iVar18 < 0) {
    iVar4 = iVar18 + 8;
    if (iVar4 < 1) {
      plVar8 = (long *)(param_4[1] + (long)iVar18);
    }
    else {
      plVar10 = (long *)((long)plVar10 + 0xfU & 0xfffffffffffffff8);
    }
  }
  else {
    plVar10 = (long *)((long)plVar10 + 0xfU & 0xfffffffffffffff8);
    iVar4 = iVar18;
  }
  pauVar12 = (undefined1 (*) [16])*plVar8;
  iVar18 = iVar4;
  if (local_38 != 0x6e) goto LAB_05403d50;
  goto switchD_05403d98_caseD_6e;
  while( true ) {
    pwVar11 = pwVar11 + 2;
    iVar4 = Isspace(*pwVar11);
    param_3 = pwVar11;
    if (iVar4 == 0) break;
LAB_05403c88:
    iVar4 = Isspace(pwVar11[1]);
    param_3 = pwVar11 + 1;
    if (iVar4 == 0) break;
  }
  while( true ) {
    wVar5 = (*param_1)(2,0,param_2);
    iVar4 = Isspace(wVar5);
    if (iVar4 == 0) break;
    iVar6 = iVar6 + 1;
  }
  goto LAB_05403cc4;
LAB_05403d44:
  if (local_38 == 0x6e) goto switchD_05403d40_caseD_3;
LAB_05403d4c:
  pauVar12 = (undefined1 (*) [16])0x0;
LAB_05403d50:
  iVar4 = (*param_1)(5,0,param_2);
  if ((iVar4 != 0) || (iVar4 = (*param_1)(4,0,param_2), iVar4 != 0)) goto switchD_05403d98_caseD_26;
  lVar22 = lVar21;
  switch(local_38) {
  case 0x25:
    while( true ) {
      wVar5 = (*param_1)(2,0,param_2);
      iVar4 = Isspace(wVar5);
      if (iVar4 == 0) break;
      iVar6 = iVar6 + 1;
    }
    if (wVar5 == L'%') {
      iVar6 = iVar6 + 1;
      goto switchD_05403d40_caseD_3;
    }
    goto LAB_05404364;
  default:
    goto switchD_05403d98_caseD_26;
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    dVar16 = (double)ReadDouble32(param_1,param_2,local_40,local_10,&local_50,&iStack_48);
    iVar4 = local_50;
    if (local_50 == 0) goto switchD_05403d98_caseD_26;
    if (pauVar12 == (undefined1 (*) [16])0x0) goto LAB_05403f8c;
    if (local_3c == 9) {
      *(double *)*pauVar12 = dVar16;
      iVar14 = iVar14 + 1;
      goto LAB_05403f8c;
    }
    if (local_3c == 10) {
      auVar17 = __extenddftf2();
      *pauVar12 = auVar17;
    }
    else if (local_3c == 0) {
      *(float *)*pauVar12 = (float)dVar16;
    }
    break;
  case 0x43:
  case 99:
    if (local_34 == '\0') {
      local_40 = 1;
    }
    local_50 = 0;
    if (pauVar12 == (undefined1 (*) [16])0x0) {
      iVar4 = local_40 + -1;
      bVar1 = local_40 == 0;
      local_40 = iVar4;
      if (bVar1) goto switchD_05403d98_caseD_26;
      do {
        wVar5 = (*param_1)(2,0,param_2);
        if (wVar5 == L'\xffffffff') break;
        iVar4 = local_40 + -1;
        local_50 = local_50 + 1;
        bVar1 = local_40 != 0;
        local_40 = iVar4;
      } while (bVar1);
      if (local_50 == 0) goto switchD_05403d98_caseD_26;
      iVar6 = iVar6 + local_50;
      iVar15 = iVar15 + 1;
      goto switchD_05403d40_caseD_3;
    }
    switch(local_3c) {
    case 1:
    case 0xc:
      iVar4 = 1;
      break;
    default:
      goto switchD_05403d98_caseD_26;
    case 0xb:
    case 0xe:
      iVar4 = 4;
      break;
    case 0xd:
      iVar4 = 2;
    }
    iVar7 = local_40 + -1;
    bVar1 = local_40 == 0;
    local_40 = iVar7;
    if (bVar1) goto switchD_05403d98_caseD_26;
    if (iVar4 == 2) {
      do {
        wVar5 = (*param_1)(2,0,param_2);
        iVar4 = local_50;
        if (wVar5 == L'\xffffffff') break;
        *(short *)*pauVar12 = (short)wVar5;
        local_50 = local_50 + 1;
        iVar4 = local_40 + -1;
        bVar1 = local_40 != 0;
        local_40 = iVar4;
        iVar4 = local_50;
      } while (bVar1);
    }
    else if (iVar4 == 4) {
      do {
        wVar5 = (*param_1)(2,0,param_2);
        iVar4 = local_50;
        if (wVar5 == L'\xffffffff') break;
        *(wchar32 *)*pauVar12 = wVar5;
        local_50 = local_50 + 1;
        iVar4 = local_40 + -1;
        bVar1 = local_40 != 0;
        local_40 = iVar4;
        iVar4 = local_50;
      } while (bVar1);
    }
    else if (iVar4 == 1) {
      do {
        wVar5 = (*param_1)(2,0,param_2);
        iVar4 = local_50;
        if (wVar5 == L'\xffffffff') break;
        (*pauVar12)[0] = (char)wVar5;
        local_50 = local_50 + 1;
        iVar4 = local_40 + -1;
        bVar1 = local_40 != 0;
        local_40 = iVar4;
        iVar4 = local_50;
      } while (bVar1);
    }
    else {
      do {
        wVar5 = (*param_1)(2,0,param_2);
        iVar4 = local_50;
        if (wVar5 == L'\xffffffff') break;
        local_50 = local_50 + 1;
        iVar4 = local_40 + -1;
        bVar1 = local_40 != 0;
        local_40 = iVar4;
        iVar4 = local_50;
      } while (bVar1);
    }
    local_50 = iVar4;
    if (iVar4 == 0) goto switchD_05403d98_caseD_26;
    iVar14 = iVar14 + 1;
    goto LAB_05403f8c;
  case 0x53:
  case 0x73:
    wVar5 = (*param_1)(2,0,param_2);
    while (iVar4 = Isspace(wVar5), iVar4 != 0) {
      iVar6 = iVar6 + 1;
      wVar5 = (*param_1)(2,0,param_2);
    }
    (*param_1)(3,wVar5,param_2);
  case 0x5b:
    local_50 = 0;
    if (pauVar12 == (undefined1 (*) [16])0x0) {
      iVar4 = local_40 + -1;
      bVar1 = local_40 == 0;
      local_40 = iVar4;
      if (bVar1) {
LAB_05403cc4:
        (*param_1)(3,wVar5,param_2);
        goto switchD_05403d40_caseD_3;
      }
      do {
        wVar5 = (*param_1)(2,0,param_2);
        if ((wVar5 == L'\xffffffff') || (iVar4 = CharBitmap::Get32(aCStack_30,wVar5), iVar4 == 0))
        break;
        iVar4 = local_40 + -1;
        local_50 = local_50 + 1;
        bVar1 = local_40 != 0;
        local_40 = iVar4;
      } while (bVar1);
      if (local_50 == 0) {
        (*param_1)(3,wVar5,param_2);
        goto switchD_05403d40_caseD_3;
      }
LAB_054040ac:
      if (-1 < local_40) {
        (*param_1)(3,wVar5,param_2);
      }
      iVar15 = iVar15 + 1;
      iVar6 = iVar6 + local_50;
      goto switchD_05403d40_caseD_3;
    }
    switch(local_3c) {
    case 1:
    case 0xc:
      iVar4 = 1;
      break;
    default:
      goto switchD_05403d98_caseD_26;
    case 0xb:
    case 0xe:
      iVar4 = 4;
      break;
    case 0xd:
      iVar4 = 2;
    }
    iVar7 = local_40 + -1;
    bVar1 = local_40 != 0;
    local_40 = iVar7;
    if (bVar1) {
      if (iVar4 == 2) {
        do {
          wVar5 = (*param_1)(2,0,param_2);
          if ((wVar5 == L'\xffffffff') || (iVar7 = CharBitmap::Get32(aCStack_30,wVar5), iVar7 == 0))
          break;
          local_50 = local_50 + 1;
          pcVar3 = *pauVar12;
          *(short *)*pauVar12 = (short)wVar5;
          iVar7 = local_40 + -1;
          bVar1 = local_40 != 0;
          pauVar12 = (undefined1 (*) [16])(pcVar3 + 2);
          local_44 = wVar5;
          local_40 = iVar7;
        } while (bVar1);
      }
      else if (iVar4 == 4) {
        do {
          wVar5 = (*param_1)(2,0,param_2);
          if ((wVar5 == L'\xffffffff') || (iVar7 = CharBitmap::Get32(aCStack_30,wVar5), iVar7 == 0))
          break;
          pcVar3 = *pauVar12;
          *(wchar32 *)*pauVar12 = wVar5;
          local_50 = local_50 + 1;
          iVar7 = local_40 + -1;
          bVar1 = local_40 != 0;
          pauVar12 = (undefined1 (*) [16])(pcVar3 + 4);
          local_44 = wVar5;
          local_40 = iVar7;
        } while (bVar1);
      }
      else if (iVar4 == 1) {
        do {
          wVar5 = (*param_1)(2,0,param_2);
          if ((wVar5 == L'\xffffffff') || (iVar7 = CharBitmap::Get32(aCStack_30,wVar5), iVar7 == 0))
          break;
          local_44 = wVar5;
          iVar7 = Strlcpy((char *)pauVar12,&local_44,7,1);
          pauVar12 = (undefined1 (*) [16])(*pauVar12 + iVar7);
          local_50 = local_50 + 1;
          iVar7 = local_40 + -1;
          bVar1 = local_40 != 0;
          local_40 = iVar7;
        } while (bVar1);
      }
      else {
        do {
          wVar5 = (*param_1)(2,0,param_2);
          if ((wVar5 == L'\xffffffff') || (iVar7 = CharBitmap::Get32(aCStack_30,wVar5), iVar7 == 0))
          break;
          local_50 = local_50 + 1;
          iVar7 = local_40 + -1;
          bVar1 = local_40 != 0;
          local_44 = wVar5;
          local_40 = iVar7;
        } while (bVar1);
      }
      if (local_50 != 0) {
        if (iVar4 == 2) {
          *(char *)((long)pauVar12 + 0) = '\0';
          *(char *)((long)pauVar12 + 1) = '\0';
        }
        else if (iVar4 == 4) {
          *(char *)((long)pauVar12 + 0) = '\0';
          *(char *)((long)pauVar12 + 1) = '\0';
          *(char *)((long)pauVar12 + 2) = '\0';
          *(char *)((long)pauVar12 + 3) = '\0';
        }
        else if (iVar4 == 1) {
          (*pauVar12)[0] = '\0';
        }
        iVar14 = iVar14 + 1;
        goto LAB_054040ac;
      }
    }
LAB_05404364:
    (*param_1)(3,wVar5,param_2);
switchD_05403d98_caseD_26:
    if ((iVar15 == 0) && (iVar6 = (*param_1)(5,0,param_2), iVar6 != 0)) {
      iVar14 = -1;
    }
    (*param_1)(1,0,param_2);
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar14);
  case 0x58:
  case 0x62:
  case 100:
  case 0x69:
  case 0x6f:
  case 0x75:
  case 0x78:
    if (local_38 == 0x62) {
      iVar4 = 2;
    }
    else if (local_38 == 0x6f) {
      iVar4 = 8;
    }
    else if ((local_38 == 100) || (local_38 == 0x75)) {
      iVar4 = 10;
    }
    else {
      iVar4 = 0;
      if (local_38 != 0x69) {
        iVar4 = 0x10;
      }
    }
    switch(local_3c) {
    case 2:
    case 0xd:
      uVar9 = 0xffff;
      break;
    default:
      uVar9 = 0xff;
      break;
    case 4:
    case 0xe:
      uVar9 = 0xffffffff;
      break;
    case 5:
    case 0xf:
      lVar13 = ReadUint64_32(param_1,param_2,0xffffffffffffffff,iVar4,local_40,&local_50,&local_4c,
                             &iStack_48);
      goto LAB_05403ea8;
    }
    lVar19 = ReadUint64_32(param_1,param_2,uVar9,iVar4,local_40,&local_50,&local_4c,&iStack_48);
LAB_05403ea8:
    if (local_50 == 0) goto switchD_05403d98_caseD_26;
    iVar4 = local_50;
    if ((local_38 == 100) || (local_38 == 0x69)) {
      if (local_4c == 0) {
        lVar22 = lVar13;
        if ((local_3c != 0xf) && (local_3c != 5)) {
          lVar20 = lVar19;
          lVar22 = lVar21;
        }
      }
      else if ((local_3c == 0xf) || (local_3c == 5)) {
        lVar22 = -lVar13;
      }
      else {
        lVar20 = -lVar19;
      }
      lVar21 = lVar22;
      if (pauVar12 == (undefined1 (*) [16])0x0) goto LAB_05403f8c;
      switch(local_3c) {
      case 0:
      case 0xe:
        *(int *)*pauVar12 = (int)lVar20;
        break;
      case 1:
      case 0xc:
        (*pauVar12)[0] = (char)lVar20;
        break;
      case 2:
      case 0xd:
        *(short *)*pauVar12 = (short)lVar20;
        break;
      case 4:
        *(long *)*pauVar12 = lVar20;
        break;
      case 5:
      case 0xf:
        *(long *)*pauVar12 = lVar22;
      }
    }
    else {
      if (local_4c != 0) {
        if ((local_3c == 0xf) || (local_3c == 5)) {
          lVar13 = -lVar13;
        }
        else {
          lVar19 = -lVar19;
        }
      }
      if (pauVar12 == (undefined1 (*) [16])0x0) goto LAB_05403f8c;
      switch(local_3c) {
      case 0:
      case 0xe:
        *(int *)*pauVar12 = (int)lVar19;
        break;
      case 1:
      case 0xc:
        (*pauVar12)[0] = (char)lVar19;
        break;
      case 2:
      case 0xd:
        *(short *)*pauVar12 = (short)lVar19;
        break;
      case 4:
        *(long *)*pauVar12 = lVar19;
        break;
      case 5:
      case 0xf:
        *(long *)*pauVar12 = lVar13;
      }
    }
    break;
  case 0x6e:
switchD_05403d98_caseD_6e:
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      switch(local_3c) {
      case 0:
      case 0xe:
        *(int *)*pauVar12 = iVar6;
        break;
      case 1:
      case 0xc:
        (*pauVar12)[0] = (char)iVar6;
        break;
      case 2:
      case 0xd:
        *(short *)*pauVar12 = (short)iVar6;
        break;
      case 4:
      case 5:
      case 0xf:
        *(long *)*pauVar12 = (long)iVar6;
      }
    }
    goto switchD_05403d40_caseD_3;
  }
  iVar14 = iVar14 + 1;
  lVar21 = lVar22;
LAB_05403f8c:
  iVar6 = iVar6 + iVar4;
  iVar15 = iVar15 + 1;
  goto switchD_05403d40_caseD_3;
}

