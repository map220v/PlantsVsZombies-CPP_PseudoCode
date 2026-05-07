// Class: open_vcdiff::VarintBE<int>


/* open_vcdiff::VarintBE<int>::Parse(char const*, char const**) */

uint open_vcdiff::VarintBE<int>::Parse(char *param_1,char **param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (param_1 != (char *)0x0) {
    pbVar2 = (byte *)*param_2;
    if (param_1 <= pbVar2) {
      return 0xfffffffe;
    }
    uVar1 = *pbVar2 & 0x7f;
    if (-1 < (char)*pbVar2) {
LAB_053f5308:
      *param_2 = (char *)(pbVar2 + 1);
      return uVar1;
    }
    do {
      pbVar2 = pbVar2 + 1;
      if (pbVar2 == (byte *)param_1) {
        return 0xfffffffe;
      }
      uVar1 = (*pbVar2 & 0x7f) + uVar1 * 0x80;
      if (-1 < (char)*pbVar2) goto LAB_053f5308;
    } while ((int)uVar1 < 0x1000000);
  }
  return 0xffffffff;
}


/* open_vcdiff::VarintBE<int>::Length(int) */

int open_vcdiff::VarintBE<int>::Length(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 < 0) {
    uVar1 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar1 = FUN_054603b8(uVar1,"Negative value ");
    uVar1 = FUN_0546065c(uVar1,param_1);
    uVar1 = FUN_054603b8(uVar1," passed to VarintBE::Length, which requires non-negative argument");
    FUN_0545f9e8(uVar1,FUN_0545fdc8);
    CheckFatalError();
    iVar2 = 0;
  }
  else {
    do {
      param_1 = param_1 >> 7;
      iVar2 = iVar2 + 1;
    } while (param_1 != 0);
  }
  return iVar2;
}


/* open_vcdiff::VarintBE<int>::EncodeInternal(int, char*) */

int open_vcdiff::VarintBE<int>::EncodeInternal(int param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 < 0) {
    uVar3 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar3 = FUN_054603b8(uVar3,"Negative value ");
    uVar3 = FUN_0546065c(uVar3,param_1);
    uVar3 = FUN_054603b8(uVar3,
                         " passed to VarintBE::EncodeInternal, which requires non-negative argument"
                        );
    FUN_0545f9e8(uVar3,FUN_0545fdc8);
    CheckFatalError();
    iVar2 = 0;
  }
  else {
    param_2[4] = (byte)param_1 & 0x7f;
    iVar2 = 1;
    pbVar1 = (byte *)(param_2 + 3);
    while (param_1 = param_1 >> 7, param_1 != 0) {
      *pbVar1 = (byte)param_1 | 0x80;
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + -1;
    }
  }
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VarintBE<int>::Encode(int, char*) */

void open_vcdiff::VarintBE<int>::Encode(int param_1,char *param_2)

{
  int iVar1;
  char acStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = EncodeInternal(param_1,acStack_10);
  if (0 < iVar1) {
    memcpy(param_2,acStack_10 + (5 - iVar1),(long)iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VarintBE<int>::AppendToString(int, std::string*) */

void open_vcdiff::VarintBE<int>::AppendToString(int param_1,string *param_2)

{
  int iVar1;
  char acStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = EncodeInternal(param_1,acStack_10);
  FUN_05475980(param_2,acStack_10 + (5 - iVar1));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VarintBE<int>::AppendToOutputString(int, open_vcdiff::OutputStringInterface*) */

void open_vcdiff::VarintBE<int>::AppendToOutputString(int param_1,OutputStringInterface *param_2)

{
  int iVar1;
  char acStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = EncodeInternal(param_1,acStack_10);
  (**(code **)(*(long *)param_2 + 0x10))(param_2,acStack_10 + (5 - iVar1));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* open_vcdiff::VarintBE<long>::Parse(char const*, char const**) */

ulong open_vcdiff::VarintBE<long>::Parse(char *param_1,char **param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  if (param_1 != (char *)0x0) {
    pbVar2 = (byte *)*param_2;
    if (param_1 <= pbVar2) {
      return 0xfffffffffffffffe;
    }
    uVar1 = (ulong)*pbVar2 & 0x7f;
    if (-1 < (char)*pbVar2) {
LAB_053f55ec:
      *param_2 = (char *)(pbVar2 + 1);
      return uVar1;
    }
    do {
      pbVar2 = pbVar2 + 1;
      if (pbVar2 == (byte *)param_1) {
        return 0xfffffffffffffffe;
      }
      uVar1 = ((ulong)*pbVar2 & 0x7f) + uVar1 * 0x80;
      if (-1 < (char)*pbVar2) goto LAB_053f55ec;
    } while ((long)uVar1 < 0x100000000000000);
  }
  return 0xffffffffffffffff;
}


/* open_vcdiff::VarintBE<long>::Length(long) */

int open_vcdiff::VarintBE<long>::Length(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 < 0) {
    uVar1 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar1 = FUN_054603b8(uVar1,"Negative value ");
    uVar1 = thunk_FUN_05460424(uVar1,param_1);
    uVar1 = FUN_054603b8(uVar1," passed to VarintBE::Length, which requires non-negative argument");
    FUN_0545f9e8(uVar1,FUN_0545fdc8);
    CheckFatalError();
    iVar2 = 0;
  }
  else {
    do {
      param_1 = param_1 >> 7;
      iVar2 = iVar2 + 1;
    } while (param_1 != 0);
  }
  return iVar2;
}


/* open_vcdiff::VarintBE<long>::EncodeInternal(long, char*) */

int open_vcdiff::VarintBE<long>::EncodeInternal(long param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 < 0) {
    uVar3 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar3 = FUN_054603b8(uVar3,"Negative value ");
    uVar3 = thunk_FUN_05460424(uVar3,param_1);
    uVar3 = FUN_054603b8(uVar3,
                         " passed to VarintBE::EncodeInternal, which requires non-negative argument"
                        );
    FUN_0545f9e8(uVar3,FUN_0545fdc8);
    CheckFatalError();
    iVar2 = 0;
  }
  else {
    param_2[8] = (byte)param_1 & 0x7f;
    iVar2 = 1;
    pbVar1 = (byte *)(param_2 + 7);
    while (param_1 = param_1 >> 7, param_1 != 0) {
      *pbVar1 = (byte)param_1 | 0x80;
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + -1;
    }
  }
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VarintBE<long>::Encode(long, char*) */

void open_vcdiff::VarintBE<long>::Encode(long param_1,char *param_2)

{
  int iVar1;
  char acStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = EncodeInternal(param_1,acStack_18);
  if (0 < iVar1) {
    memcpy(param_2,acStack_18 + (9 - iVar1),(long)iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VarintBE<long>::AppendToString(long, std::string*) */

void open_vcdiff::VarintBE<long>::AppendToString(long param_1,string *param_2)

{
  int iVar1;
  char acStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = EncodeInternal(param_1,acStack_18);
  FUN_05475980(param_2,acStack_18 + (9 - iVar1));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VarintBE<long>::AppendToOutputString(long, open_vcdiff::OutputStringInterface*) */

void open_vcdiff::VarintBE<long>::AppendToOutputString(long param_1,OutputStringInterface *param_2)

{
  int iVar1;
  char acStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = EncodeInternal(param_1,acStack_18);
  (**(code **)(*(long *)param_2 + 0x10))(param_2,acStack_18 + (9 - iVar1));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

