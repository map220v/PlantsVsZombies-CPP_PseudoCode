// Class: FEAST::CLexDfaPartitionSet


/* FEAST::CLexDfaPartitionSet::Init() */

void __thiscall FEAST::CLexDfaPartitionSet::Init(CLexDfaPartitionSet *this)

{
  long lVar1;
  
  this[0x808008] = (CLexDfaPartitionSet)0x0;
  lVar1 = 0;
  *(undefined8 *)(this + 0x808000) = 0;
  *(undefined8 *)(this + 0x808010) = 0;
  do {
    CLexDfaPartition::Init((CLexDfaPartition *)this);
    *(long *)(this + 0x2010) = lVar1;
    lVar1 = lVar1 + 1;
    this = this + 0x2020;
  } while (lVar1 != 0x400);
  return;
}


/* FEAST::CLexDfaPartitionSet::CLexDfaPartitionSet() */

void __thiscall FEAST::CLexDfaPartitionSet::CLexDfaPartitionSet(CLexDfaPartitionSet *this)

{
  CLexDfaPartitionSet *pCVar1;
  CLexDfaPartitionSet *this_00;
  
  this_00 = this;
  do {
    pCVar1 = this_00 + 0x2020;
    CLexDfaPartition::CLexDfaPartition((CLexDfaPartition *)this_00);
    this_00 = pCVar1;
  } while (pCVar1 != this + 0x808000);
  Init(this);
  return;
}


/* FEAST::CLexDfaPartitionSet::operator[](int) */

CLexDfaPartitionSet * __thiscall
FEAST::CLexDfaPartitionSet::operator[](CLexDfaPartitionSet *this,int param_1)

{
  return this + (long)param_1 * 0x2020;
}


/* FEAST::CLexDfaPartitionSet::SetDFA(FEAST::CLexDfaTable*) */

void __thiscall FEAST::CLexDfaPartitionSet::SetDFA(CLexDfaPartitionSet *this,CLexDfaTable *param_1)

{
  CLexDfaPartitionSet *pCVar1;
  
  pCVar1 = this + 0x2018;
  *(CLexDfaTable **)(this + 0x808010) = param_1;
  do {
    *(CLexDfaTable **)pCVar1 = param_1;
    pCVar1 = pCVar1 + 0x2020;
  } while (pCVar1 != this + 0x80a018);
  return;
}


/* FEAST::CLexDfaPartitionSet::MoveTo(long, long) */

void __thiscall
FEAST::CLexDfaPartitionSet::MoveTo(CLexDfaPartitionSet *this,long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(this + 0x808010) + 0x20) + param_1 * 8);
  if (lVar1 != -1) {
    CLexDfaPartition::Remove((CLexDfaPartition *)(this + lVar1 * 0x2020),param_1);
  }
  CLexDfaPartition::Add((CLexDfaPartition *)(this + param_2 * 0x2020),param_1);
  return;
}


/* FEAST::CLexDfaPartitionSet::MoveToCurrent(long) */

void __thiscall FEAST::CLexDfaPartitionSet::MoveToCurrent(CLexDfaPartitionSet *this,long param_1)

{
  CLexDfaPartitionSet *pCVar1;
  long lVar2;
  
  pCVar1 = this + 0x808000;
  if (this[0x808008] != (CLexDfaPartitionSet)0x0) {
    lVar2 = *(long *)pCVar1;
    this[0x808008] = (CLexDfaPartitionSet)0x0;
    *(long *)pCVar1 = lVar2 + 1;
    MoveTo(this,param_1,lVar2 + 1);
    return;
  }
  this[0x808008] = (CLexDfaPartitionSet)0x0;
  MoveTo(this,param_1,*(long *)pCVar1);
  return;
}

