// Class: open_vcdiff


/* open_vcdiff::ComputeAdler32(char const*, unsigned long) */

void open_vcdiff::ComputeAdler32(char *param_1,ulong param_2)

{
  adler32(0,param_1,param_2);
  return;
}


/* open_vcdiff::CheckFatalError() */

void open_vcdiff::CheckFatalError(void)

{
  if (g_fatal_error_occurred == '\0') {
    return;
  }
  FUN_0545fa2c(&DAT_06c49ed0);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


/* open_vcdiff::VCDiffInstructionName(open_vcdiff::VCDiffInstructionType) */

undefined1 * open_vcdiff::VCDiffInstructionName(undefined4 param_1)

{
  undefined8 uVar1;
  
  switch(param_1) {
  case 0:
    return &DAT_056ed5d0;
  case 1:
    return &DAT_0567ea80;
  case 2:
    return &DAT_056ed5d8;
  case 3:
    return &DAT_056ed5e0;
  default:
    uVar1 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar1 = FUN_054603b8(uVar1,"Unexpected instruction type ");
    uVar1 = FUN_0546065c(uVar1,param_1);
    FUN_0545f9e8(uVar1,FUN_0545fdc8);
    CheckFatalError();
    return &DAT_055923fe;
  }
}


/* open_vcdiff::BlockContentsMatchInline(char const*, char const*) */

bool open_vcdiff::BlockContentsMatchInline(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*param_1 == *param_2) {
    iVar2 = memcmp(param_1,param_2,0x10);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


/* bool open_vcdiff::CompareWholeWordValues<2>(char const*, char const*) */

bool open_vcdiff::CompareWholeWordValues<2>(char *param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)param_1,(exception_ptr *)param_2);
  if (cVar1 != '\0') {
    uVar2 = std::__exception_ptr::operator==
                      ((exception_ptr *)(param_1 + 8),(exception_ptr *)(param_2 + 8));
    return (bool)uVar2;
  }
  return false;
}


/* open_vcdiff::BlockCompareWordsInline(char const*, char const*) */

void open_vcdiff::BlockCompareWordsInline(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)param_1,(exception_ptr *)param_2);
  if (cVar1 != '\0') {
    std::__exception_ptr::operator==((exception_ptr *)(param_1 + 8),(exception_ptr *)(param_2 + 8));
    return;
  }
  return;
}

