// Class: Sexy::ResStreamsPool


/* Sexy::ResStreamsPool::ResStreamsPool() */

void __thiscall Sexy::ResStreamsPool::ResStreamsPool(ResStreamsPool *this)

{
  Set8BytesTo0();
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[8] = (ResStreamsPool)0x0;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}


/* Sexy::ResStreamsPool::~ResStreamsPool() */

void __thiscall Sexy::ResStreamsPool::~ResStreamsPool(ResStreamsPool *this)

{
  if (*(ColourFit **)(this + 0x30) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x30));
  }
  if (*(ColourFit **)(this + 0x38) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x38));
  }
  if (*(ColourFit **)(this + 0x20) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x20));
  }
  if (*(ColourFit **)(this + 0x28) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x28));
  }
  if (*(ColourFit **)(this + 0x40) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x40));
  }
  std::string::~string((string *)this);
  return;
}


/* Sexy::ResStreamsPool::TEMPNAMEPLACEHOLDERVALUE(Sexy::ResStreamsPool&) */

void __thiscall Sexy::ResStreamsPool::operator=(ResStreamsPool *this,ResStreamsPool *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ResStreamsPool RVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  thunk_FUN_05475e00();
  RVar5 = param_1[8];
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x20) = 0;
  this[8] = RVar5;
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x18) = uVar4;
  *(undefined8 *)(this + 0x48) = uVar9;
  *(undefined8 *)(this + 0x50) = uVar8;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if (lVar6 != 0) {
    pvVar7 = operator_new__((ulong)*(uint *)(param_1 + 0xc) << 3);
    *(void **)(this + 0x20) = pvVar7;
    memcpy(pvVar7,*(void **)(param_1 + 0x20),(ulong)*(uint *)(param_1 + 0xc) << 3);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar6 = *(long *)(param_1 + 0x30);
  }
  else {
    pvVar7 = operator_new__((ulong)*(uint *)(param_1 + 0xc) << 3);
    *(void **)(this + 0x28) = pvVar7;
    memcpy(pvVar7,*(void **)(param_1 + 0x28),(ulong)*(uint *)(param_1 + 0xc) << 3);
    lVar6 = *(long *)(param_1 + 0x30);
  }
  if (lVar6 != 0) {
    pvVar7 = operator_new__((ulong)*(uint *)(param_1 + 0xc) << 2);
    *(void **)(this + 0x30) = pvVar7;
    memcpy(pvVar7,*(void **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0xc) << 2);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    pvVar7 = operator_new__((ulong)*(uint *)(param_1 + 0xc) << 2);
    *(void **)(this + 0x38) = pvVar7;
    memcpy(pvVar7,*(void **)(param_1 + 0x38),(ulong)*(uint *)(param_1 + 0xc) << 2);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    pvVar7 = operator_new__((ulong)*(uint *)(param_1 + 0xc) << 4);
    *(void **)(this + 0x40) = pvVar7;
    memcpy(pvVar7,*(void **)(param_1 + 0x40),(ulong)*(uint *)(param_1 + 0xc) << 4);
    return;
  }
  return;
}


/* Sexy::ResStreamsPool::InitDescriptor(Sexy::ResStreamPoolDescriptor*) */

void __thiscall
Sexy::ResStreamsPool::InitDescriptor(ResStreamsPool *this,ResStreamPoolDescriptor *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  size_t in_x2;
  long lVar8;
  long lVar9;
  long lVar10;
  
  std::string::append((string *)this,(char *)param_1,in_x2);
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar3 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(uint *)(this + 0xc) = uVar1;
  this[8] = (ResStreamsPool)0x0;
  pvVar5 = operator_new__((ulong)uVar1 << 3);
  *(void **)(this + 0x20) = pvVar5;
  pvVar5 = operator_new__((ulong)*(uint *)(this + 0xc) << 3);
  *(void **)(this + 0x28) = pvVar5;
  pvVar5 = operator_new__((ulong)*(uint *)(this + 0xc) << 2);
  *(void **)(this + 0x30) = pvVar5;
  pvVar5 = operator_new__((ulong)*(uint *)(this + 0xc) << 2);
  *(void **)(this + 0x38) = pvVar5;
  pvVar5 = operator_new__((ulong)*(uint *)(this + 0xc) << 4);
  *(void **)(this + 0x40) = pvVar5;
  uVar7 = 0;
  if (*(int *)(this + 0xc) != 0) {
    do {
      lVar8 = uVar7 * 8;
      lVar9 = uVar7 * 4;
      lVar6 = uVar7 * 0x10;
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar1;
      *(undefined8 *)(*(long *)(this + 0x20) + lVar8) = 0;
      *(undefined8 *)(*(long *)(this + 0x28) + lVar8) = 0;
      lVar10 = *(long *)(this + 0x38);
      lVar8 = *(long *)(this + 0x40);
      *(undefined4 *)(*(long *)(this + 0x30) + lVar9) = 0xffffffff;
      *(undefined4 *)(lVar10 + lVar9) = 0xffffffff;
      *(undefined8 *)(lVar8 + lVar6) = 0;
      uVar4 = *(uint *)(this + 0xc);
      *(undefined8 *)(lVar8 + lVar6 + 8) = 0;
    } while (uVar1 < uVar4);
  }
  return;
}


/* Sexy::ResStreamsPool::Allocate() */

void __thiscall Sexy::ResStreamsPool::Allocate(ResStreamsPool *this)

{
  char cVar1;
  
  if ((this[8] == (ResStreamsPool)0x0) &&
     (cVar1 = (**(code **)(**(long **)(gSexyAppBase + 0x30) + 0x20))
                        (*(long **)(gSexyAppBase + 0x30),this), cVar1 != '\0')) {
    this[8] = (ResStreamsPool)0x1;
    return;
  }
  return;
}


/* Sexy::ResStreamsPool::Destroy() */

void __thiscall Sexy::ResStreamsPool::Destroy(ResStreamsPool *this)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  if (this[8] != (ResStreamsPool)0x0) {
    uVar6 = *(uint *)(this + 0xc);
    uVar4 = 0;
    if (uVar6 != 0) {
      do {
        lVar3 = *(long *)(*(long *)(this + 0x28) + uVar4 * 8);
        uVar1 = (int)uVar4 + 1;
        if (lVar3 != 0) {
          (**(code **)(**(long **)(gSexyAppBase + 0x30) + 0x38))
                    (*(long **)(gSexyAppBase + 0x30),this,uVar4,lVar3,0);
          uVar6 = *(uint *)(this + 0xc);
        }
        uVar4 = (ulong)uVar1;
      } while (uVar1 < uVar6);
    }
    cVar2 = (**(code **)(**(long **)(gSexyAppBase + 0x30) + 0x28))
                      (*(long **)(gSexyAppBase + 0x30),this);
    if (cVar2 != '\0') {
      uVar4 = 0;
      if (*(int *)(this + 0xc) != 0) {
        do {
          lVar5 = uVar4 * 8;
          lVar3 = uVar4 * 4;
          uVar6 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar6;
          *(undefined8 *)(*(long *)(this + 0x20) + lVar5) = 0;
          *(undefined8 *)(*(long *)(this + 0x28) + lVar5) = 0;
          lVar5 = *(long *)(this + 0x38);
          *(undefined4 *)(*(long *)(this + 0x30) + lVar3) = 0xffffffff;
          *(undefined4 *)(lVar5 + lVar3) = 0xffffffff;
        } while (uVar6 < *(uint *)(this + 0xc));
      }
      this[8] = (ResStreamsPool)0x0;
    }
  }
  return;
}


/* Sexy::ResStreamsPool::IsInstanceAvailable() */

undefined8 __thiscall Sexy::ResStreamsPool::IsInstanceAvailable(ResStreamsPool *this)

{
  long *plVar1;
  long *plVar2;
  
  if (*(int *)(this + 0xc) == 0) {
    return 0;
  }
  plVar2 = *(long **)(this + 0x20);
  if (*plVar2 != 0) {
    plVar1 = plVar2 + (*(int *)(this + 0xc) - 1);
    do {
      if (plVar2 == plVar1) {
        return 0;
      }
      plVar2 = plVar2 + 1;
    } while (*plVar2 != 0);
  }
  return 1;
}


/* Sexy::ResStreamsPool::GetOccupantCount() */

int __thiscall Sexy::ResStreamsPool::GetOccupantCount(ResStreamsPool *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (*(uint *)(this + 0xc) != 0) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      lVar1 = lVar3 * 8;
      lVar3 = lVar3 + 1;
      if (*(long *)(*(long *)(this + 0x20) + lVar1) != 0) {
        iVar2 = iVar2 + 1;
      }
    } while ((uint)lVar3 < *(uint *)(this + 0xc));
    return iVar2;
  }
  return 0;
}


/* Sexy::ResStreamsPool::LockInstanceForGroup(Sexy::ResStreamsGroup*, int) */

ulong __thiscall
Sexy::ResStreamsPool::LockInstanceForGroup
          (ResStreamsPool *this,ResStreamsGroup *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  if (*(uint *)(this + 0xc) == 0) {
    return 0xffffffff;
  }
  plVar4 = *(long **)(this + 0x20);
  if (*plVar4 == 0) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar1 = 1;
    do {
      uVar3 = uVar1;
      plVar4 = plVar4 + 1;
      if (*(uint *)(this + 0xc) <= (uint)uVar3) {
        return 0xffffffff;
      }
      uVar1 = uVar3 + 1;
    } while (*plVar4 != 0);
    lVar2 = uVar3 << 2;
  }
  *plVar4 = (long)param_1;
  *(int *)(*(long *)(this + 0x30) + lVar2) = param_2;
  return uVar3 & 0xffffffff;
}


/* Sexy::ResStreamsPool::GetResidentDataMemory(unsigned int) */

undefined8 __thiscall Sexy::ResStreamsPool::GetResidentDataMemory(ResStreamsPool *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x40) + (ulong)param_1 * 0x10);
}


/* Sexy::ResStreamsPool::GetGPUDataMemory(unsigned int) */

undefined8 __thiscall Sexy::ResStreamsPool::GetGPUDataMemory(ResStreamsPool *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x40) + (ulong)param_1 * 0x10 + 8);
}


/* Sexy::ResStreamsPool::UnlockInstanceForGroup(Sexy::ResStreamsGroup*) */

void __thiscall
Sexy::ResStreamsPool::UnlockInstanceForGroup(ResStreamsPool *this,ResStreamsGroup *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(int *)(this + 0xc) == 0) {
    return;
  }
  plVar2 = *(long **)(this + 0x20);
  if ((ResStreamsGroup *)*plVar2 != param_1) {
    plVar1 = plVar2 + (ulong)(*(int *)(this + 0xc) - 1) + 1;
    do {
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar1) {
        return;
      }
    } while ((ResStreamsGroup *)*plVar2 != param_1);
  }
  *plVar2 = 0;
  return;
}

