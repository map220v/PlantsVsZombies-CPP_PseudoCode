// Class: open_vcdiff::RollingHash<16>


/* open_vcdiff::RollingHash<16>::Init() */

void open_vcdiff::RollingHash<16>::Init(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (remove_table_ != (undefined4 *)0x0) {
    return;
  }
  iVar5 = 0xf;
  iVar1 = 1;
  puVar4 = operator_new__(0x400);
  do {
    iVar1 = RollingHashUtil::ModBase(iVar1 * 0x101);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar3 = 0;
  puVar6 = puVar4;
  do {
    uVar2 = RollingHashUtil::FindModBaseInverse(uVar3);
    puVar7 = puVar6 + 1;
    *puVar6 = uVar2;
    uVar3 = RollingHashUtil::ModBase(uVar3 + iVar1);
    puVar6 = puVar7;
  } while (puVar7 != puVar4 + 0x100);
  remove_table_ = puVar4;
  return;
}


/* open_vcdiff::RollingHash<16>::RollingHash() */

void open_vcdiff::RollingHash<16>::RollingHash(void)

{
  undefined8 uVar1;
  
  if (remove_table_ != 0) {
    return;
  }
  uVar1 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
  uVar1 = FUN_054603b8(uVar1,"RollingHash object instantiated before calling RollingHash::Init()");
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  CheckFatalError();
  return;
}


/* open_vcdiff::RollingHash<16>::Hash(char const*) */

void open_vcdiff::RollingHash<16>::Hash(char *param_1)

{
  uint uVar1;
  
  uVar1 = RollingHashUtil::HashFirstTwoBytes(param_1);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[2]);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[3]);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[4]);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[5]);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[6]);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[7]);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[8]);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[9]);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[10]);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[0xb]);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[0xc]);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[0xd]);
  uVar1 = RollingHashUtil::HashStep(uVar1,param_1[0xe]);
  RollingHashUtil::HashStep(uVar1,param_1[0xf]);
  return;
}


/* open_vcdiff::RollingHash<16>::RemoveFirstByteFromHash(unsigned int, unsigned char) */

void open_vcdiff::RollingHash<16>::RemoveFirstByteFromHash(uint param_1,uchar param_2)

{
  RollingHashUtil::ModBase(param_1 + *(int *)(remove_table_ + (ulong)param_2 * 4));
  return;
}

