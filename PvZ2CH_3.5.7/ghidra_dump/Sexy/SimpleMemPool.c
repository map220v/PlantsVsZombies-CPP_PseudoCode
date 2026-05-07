// Class: Sexy::SimpleMemPool


/* Sexy::SimpleMemPool::~SimpleMemPool() */

void __thiscall Sexy::SimpleMemPool::~SimpleMemPool(SimpleMemPool *this)

{
  if (*(ColourFit **)this != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)this);
    return;
  }
  return;
}


/* Sexy::SimpleMemPool::SimpleMemPool(unsigned int, unsigned int) */

void __thiscall Sexy::SimpleMemPool::SimpleMemPool(SimpleMemPool *this,uint param_1,uint param_2)

{
  *(uint *)(this + 8) = param_1;
  FUN_0516955c();
  *(undefined8 *)this = 0;
  *(uint *)(this + 0xc) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* Sexy::SimpleMemPool::GetMemory(unsigned int) */

long Sexy::SimpleMemPool::GetMemory(uint param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  
  plVar1 = (long *)(ulong)param_1;
  if (*plVar1 == 0) {
    pvVar2 = operator_new__((ulong)(uint)(*(int *)((long)plVar1 + 0xc) +
                                         (int)plVar1[1] * *(int *)((long)plVar1 + 0xc)));
    *plVar1 = (long)pvVar2;
    lVar3 = (long)pvVar2 + (ulong)(uint)(*(int *)((long)plVar1 + 0xc) * (int)plVar1[1]);
    plVar1[3] = lVar3;
    if (*(int *)((long)plVar1 + 0xc) == 0) {
      return 0;
    }
    uVar5 = 0;
    while( true ) {
      *(undefined1 *)(lVar3 + uVar5) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
      uVar7 = *(uint *)((long)plVar1 + 0xc);
      if (uVar7 <= uVar4) break;
      lVar3 = plVar1[3];
    }
  }
  else {
    uVar7 = *(uint *)((long)plVar1 + 0xc);
  }
  if (uVar7 == 0) {
    return 0;
  }
  pbVar6 = (byte *)plVar1[3];
  uVar4 = (uint)*pbVar6;
  if (*pbVar6 != 0) {
    uVar4 = 0;
    do {
      pbVar6 = pbVar6 + 1;
      uVar4 = uVar4 + 1;
      if (uVar4 == uVar7) {
        return 0;
      }
    } while (*pbVar6 != 0);
  }
  *pbVar6 = 1;
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  return *plVar1 + (ulong)(uVar4 * (int)plVar1[1]);
}


/* Sexy::SimpleMemPool::ReturnMemory(unsigned char*) */

void __thiscall Sexy::SimpleMemPool::ReturnMemory(SimpleMemPool *this,uchar *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)(this + 8) != 0) {
    uVar1 = (uint)((int)param_1 - (int)*(undefined8 *)this) / *(uint *)(this + 8);
  }
  *(undefined1 *)(*(long *)(this + 0x18) + (ulong)uVar1) = 0;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  return;
}

