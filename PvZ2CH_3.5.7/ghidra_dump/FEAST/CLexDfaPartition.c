// Class: FEAST::CLexDfaPartition


/* FEAST::CLexDfaPartition::Init() */

void __thiscall FEAST::CLexDfaPartition::Init(CLexDfaPartition *this)

{
  CLexDfaPartition *pCVar1;
  CLexDfaPartition *pCVar2;
  
  *(undefined8 *)(this + 0x2010) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x2018) = 0;
  pCVar2 = this + 0x10;
  do {
    pCVar1 = pCVar2 + 0x10;
    *(undefined8 *)(pCVar2 + 8) = 0xffffffffffffffff;
    *(undefined8 *)pCVar2 = 0xffffffffffffffff;
    pCVar2 = pCVar1;
  } while (pCVar1 != this + 0x2010);
  return;
}


/* FEAST::CLexDfaPartition::CLexDfaPartition() */

void __thiscall FEAST::CLexDfaPartition::CLexDfaPartition(CLexDfaPartition *this)

{
  CLexDfaPartition *pCVar1;
  CLexDfaPartition *pCVar2;
  
  *(undefined8 *)(this + 0x2010) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x2018) = 0;
  pCVar2 = this + 0x10;
  do {
    pCVar1 = pCVar2 + 0x10;
    *(undefined8 *)(pCVar2 + 8) = 0xffffffffffffffff;
    *(undefined8 *)pCVar2 = 0xffffffffffffffff;
    pCVar2 = pCVar1;
  } while (pCVar1 != this + 0x2010);
  return;
}


/* FEAST::CLexDfaPartition::Owns(long, long*) */

undefined8 __thiscall
FEAST::CLexDfaPartition::Owns(CLexDfaPartition *this,long param_1,long *param_2)

{
  CLexDfaPartition *pCVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)this < 0) {
    return 0;
  }
  if (*(long *)(this + 0x10) == param_1) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    pCVar1 = this + 0x18;
    do {
      lVar2 = lVar2 + 1;
      if (*(long *)this < lVar2) {
        return 0;
      }
      lVar3 = *(long *)pCVar1;
      pCVar1 = pCVar1 + 8;
    } while (lVar3 != param_1);
  }
  if (param_2 == (long *)0x0) {
    return 1;
  }
  *param_2 = lVar2;
  return 1;
}


/* FEAST::CLexDfaPartition::Add(long) */

undefined8 __thiscall FEAST::CLexDfaPartition::Add(CLexDfaPartition *this,long param_1)

{
  char cVar1;
  long lVar2;
  CLexDfaPartition *pCVar3;
  long lVar4;
  long lVar5;
  
  cVar1 = Owns(this,param_1,(long *)0x0);
  if (cVar1 != '\0') {
    return 0;
  }
  lVar2 = *(long *)(*(long *)(this + 0x2018) + 0x20);
  if (*(long *)(lVar2 + param_1 * 8) == -1) {
    pCVar3 = this + 0x10;
    lVar4 = 0;
    do {
      lVar5 = *(long *)pCVar3;
      pCVar3 = pCVar3 + 8;
      if (lVar5 == -1) {
        lVar5 = *(long *)this;
        *(long *)(this + (lVar4 + 2) * 8) = param_1;
        if (lVar5 < lVar4) {
          *(long *)this = lVar4;
        }
        *(long *)(this + 8) = *(long *)(this + 8) + 1;
        *(undefined8 *)(lVar2 + param_1 * 8) = *(undefined8 *)(this + 0x2010);
        return 1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x400);
    LIB_Errorf("CLexDfaPartition::Add: Out of room for states");
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FEAST::CLexDfaPartition::Remove(long) */

void __thiscall FEAST::CLexDfaPartition::Remove(CLexDfaPartition *this,long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Owns(this,param_1,&local_10);
  if (cVar1 != '\0') {
    lVar3 = *(long *)(this + 8);
    lVar2 = *(long *)(*(long *)(this + 0x2018) + 0x20);
    *(undefined8 *)(this + (local_10 + 2) * 8) = 0xffffffffffffffff;
    *(long *)(this + 8) = lVar3 + -1;
    *(undefined8 *)(lVar2 + param_1 * 8) = 0xffffffffffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FEAST::CLexDfaPartition::Next(long, long*) */

undefined8 __thiscall
FEAST::CLexDfaPartition::Next(CLexDfaPartition *this,long param_1,long *param_2)

{
  CLexDfaPartition *pCVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)this < param_1) {
    return 0xffffffffffffffff;
  }
  lVar2 = param_1 + 2;
  if (*(long *)(this + lVar2 * 8) == -1) {
    pCVar1 = this + (param_1 + 3) * 8;
    do {
      lVar2 = param_1;
      param_1 = lVar2 + 1;
      if (*(long *)this < param_1) {
        return 0xffffffffffffffff;
      }
      lVar3 = *(long *)pCVar1;
      pCVar1 = pCVar1 + 8;
    } while (lVar3 == -1);
    lVar2 = lVar2 + 3;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = param_1 + 1;
  }
  return *(undefined8 *)(this + lVar2 * 8);
}

