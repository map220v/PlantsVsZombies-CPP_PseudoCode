// Class: Sexy::ObjectPool<Sexy::PIParticleInstance>


/* Sexy::ObjectPool<Sexy::PIParticleInstance>::ObjectPool() */

void __thiscall
Sexy::ObjectPool<Sexy::PIParticleInstance>::ObjectPool(ObjectPool<Sexy::PIParticleInstance> *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0x120;
  return;
}


/* Sexy::ObjectPool<Sexy::PIFreeEmitterInstance>::~ObjectPool() */

void __thiscall
Sexy::ObjectPool<Sexy::PIFreeEmitterInstance>::~ObjectPool
          (ObjectPool<Sexy::PIFreeEmitterInstance> *this)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)this) {
    do {
      iVar3 = iVar3 + 1;
      AK::FreeHook(*(void **)(*(long *)(this + 8) + lVar2));
      puVar1 = (undefined8 *)(*(long *)(this + 0x10) + lVar2);
      lVar2 = lVar2 + 8;
      AK::FreeHook((void *)*puVar1);
    } while (iVar3 < *(int *)this);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    free(*(void **)(this + 8));
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    free(*(void **)(this + 0x10));
    return;
  }
  return;
}


/* Sexy::ObjectPool<Sexy::PIFreeEmitterInstance>::ObjectPool() */

void __thiscall
Sexy::ObjectPool<Sexy::PIFreeEmitterInstance>::ObjectPool
          (ObjectPool<Sexy::PIFreeEmitterInstance> *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0x158;
  return;
}


/* Sexy::ObjectPool<Sexy::PIParticleInstance>::Free(Sexy::PIParticleInstance*) */

void __thiscall
Sexy::ObjectPool<Sexy::PIParticleInstance>::Free
          (ObjectPool<Sexy::PIParticleInstance> *this,PIParticleInstance *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  iVar1 = *(int *)(this + 0x18);
  uVar4 = *(int *)this - 1;
  uVar7 = (ulong)uVar4;
  if (-1 < (int)uVar4) {
    uVar6 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
    puVar8 = (undefined8 *)(*(long *)(this + 8) + uVar6);
    iVar2 = (int)*(undefined8 *)(*(long *)(this + 8) + uVar6);
    while( true ) {
      uVar5 = (int)param_1 - iVar2;
      if (uVar5 < 0x8000) {
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = (int)uVar5 / iVar1;
        }
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = 0x8000 / iVar1;
        }
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = *(int *)(this + 4) / iVar3;
        }
        *(uint *)(*(long *)(*(long *)(this + 0x10) + (long)iVar1 * 8) +
                 (long)(*(int *)(this + 4) - iVar1 * iVar3) * 4) = iVar2 + uVar4 * iVar3;
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        PIParticleInstance::~PIParticleInstance(param_1);
        return;
      }
      uVar4 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar4;
      if (uVar4 == 0xffffffff) break;
      puVar8 = puVar8 + -1;
      iVar2 = (int)*puVar8;
    }
  }
  PIParticleInstance::~PIParticleInstance(param_1);
  return;
}


/* Sexy::ObjectPool<Sexy::PIParticleInstance>::GrowPool() */

void __thiscall
Sexy::ObjectPool<Sexy::PIParticleInstance>::GrowPool(ObjectPool<Sexy::PIParticleInstance> *this)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar8 = *(int *)this;
  iVar12 = 0;
  if (*(int *)(this + 0x18) != 0) {
    iVar12 = 0x8000 / *(int *)(this + 0x18);
  }
  uVar1 = iVar8 + 1;
  uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  *(uint *)this = uVar1;
  *(int *)(this + 4) = *(int *)(this + 4) + iVar12;
  lVar11 = uVar5 - 8;
  pvVar3 = realloc(*(void **)(this + 8),uVar5);
  *(void **)(this + 8) = pvVar3;
  pvVar4 = operator_new__(0x8000);
  *(void **)((long)pvVar3 + lVar11) = pvVar4;
  pvVar3 = realloc(*(void **)(this + 0x10),(long)*(int *)this << 3);
  uVar6 = (ulong)iVar12;
  *(void **)(this + 0x10) = pvVar3;
  uVar5 = uVar6 * 4;
  if (0x1fc0000000000000 < uVar6) {
    uVar5 = 0xffffffffffffffff;
  }
  pvVar4 = operator_new__(uVar5);
  *(void **)((long)pvVar3 + lVar11) = pvVar4;
  iVar8 = iVar8 * iVar12;
  piVar7 = (int *)**(undefined8 **)(this + 0x10);
  piVar2 = piVar7 + uVar6;
  if (piVar7 != piVar2) {
    piVar10 = piVar7 + 1;
    uVar6 = (ulong)((long)piVar2 - (long)piVar10) >> 2;
    uVar5 = (uVar6 - 3 >> 2) + 1;
    if (3 < uVar6) {
      uVar9 = 0;
      iVar13 = iVar8 + 1;
      iVar14 = iVar8 + 2;
      iVar15 = iVar8 + 3;
      piVar10 = piVar7;
      iVar12 = iVar8;
      do {
        *(ulong *)(piVar10 + 2) = CONCAT44(iVar15,iVar14);
        *(ulong *)piVar10 = CONCAT44(iVar13,iVar12);
        uVar9 = uVar9 + 1;
        iVar12 = iVar12 + 4;
        iVar13 = iVar13 + 4;
        iVar14 = iVar14 + 4;
        iVar15 = iVar15 + 4;
        piVar10 = piVar10 + 4;
      } while (uVar9 < uVar5);
      iVar8 = iVar8 + (int)(uVar5 * 4);
      piVar7 = piVar7 + uVar5 * 4;
      if (uVar6 + 1 == uVar5 * 4) {
        return;
      }
      piVar10 = piVar7 + 1;
    }
    *piVar7 = iVar8;
    if (piVar2 != piVar10) {
      piVar7[1] = iVar8 + 1;
      if (piVar2 != piVar7 + 2) {
        piVar7[2] = iVar8 + 2;
        if (piVar2 != piVar7 + 3) {
          piVar7[3] = iVar8 + 3;
        }
      }
    }
  }
  return;
}


/* Sexy::ObjectPool<Sexy::PIParticleInstance>::Alloc() */

PIParticleInstance * __thiscall
Sexy::ObjectPool<Sexy::PIParticleInstance>::Alloc(ObjectPool<Sexy::PIParticleInstance> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PIParticleInstance *this_00;
  int iVar4;
  
  iVar4 = *(int *)(this + 4);
  if (iVar4 == 0) {
    GrowPool(this);
    iVar4 = *(int *)(this + 4);
  }
  iVar1 = *(int *)(this + 0x18);
  iVar4 = iVar4 + -1;
  *(int *)(this + 4) = iVar4;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 0x8000 / iVar1;
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar4 / iVar2;
  }
  iVar4 = *(int *)(*(long *)(*(long *)(this + 0x10) + (long)iVar3 * 8) +
                  (long)(iVar4 - iVar3 * iVar2) * 4);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar4 / iVar2;
  }
  this_00 = (PIParticleInstance *)
            FUN_053b9a74(*(long *)(*(long *)(this + 8) + (long)iVar3 * 8) +
                         (long)(iVar1 * (iVar4 - iVar3 * iVar2)));
  if (this_00 != (PIParticleInstance *)0x0) {
    PIParticleInstance::PIParticleInstance(this_00);
  }
  return this_00;
}


/* Sexy::ObjectPool<Sexy::PIFreeEmitterInstance>::Alloc() */

PIFreeEmitterInstance * __thiscall
Sexy::ObjectPool<Sexy::PIFreeEmitterInstance>::Alloc(ObjectPool<Sexy::PIFreeEmitterInstance> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PIFreeEmitterInstance *this_00;
  int iVar4;
  
  iVar4 = *(int *)(this + 4);
  if (iVar4 == 0) {
    ObjectPool<Sexy::PIParticleInstance>::GrowPool((ObjectPool<Sexy::PIParticleInstance> *)this);
    iVar4 = *(int *)(this + 4);
  }
  iVar1 = *(int *)(this + 0x18);
  iVar4 = iVar4 + -1;
  *(int *)(this + 4) = iVar4;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 0x8000 / iVar1;
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar4 / iVar2;
  }
  iVar4 = *(int *)(*(long *)(*(long *)(this + 0x10) + (long)iVar3 * 8) +
                  (long)(iVar4 - iVar3 * iVar2) * 4);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar4 / iVar2;
  }
  this_00 = (PIFreeEmitterInstance *)
            FUN_053b9a74(*(long *)(*(long *)(this + 8) + (long)iVar3 * 8) +
                         (long)(iVar1 * (iVar4 - iVar3 * iVar2)));
  if (this_00 != (PIFreeEmitterInstance *)0x0) {
    PIFreeEmitterInstance::PIFreeEmitterInstance(this_00);
  }
  return this_00;
}


/* Sexy::ObjectPool<Sexy::PIFreeEmitterInstance>::Free(Sexy::PIFreeEmitterInstance*) */

void __thiscall
Sexy::ObjectPool<Sexy::PIFreeEmitterInstance>::Free
          (ObjectPool<Sexy::PIFreeEmitterInstance> *this,PIFreeEmitterInstance *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  iVar1 = *(int *)(this + 0x18);
  uVar4 = *(int *)this - 1;
  uVar7 = (ulong)uVar4;
  if (-1 < (int)uVar4) {
    uVar6 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
    puVar8 = (undefined8 *)(*(long *)(this + 8) + uVar6);
    iVar2 = (int)*(undefined8 *)(*(long *)(this + 8) + uVar6);
    while( true ) {
      uVar5 = (int)param_1 - iVar2;
      if (uVar5 < 0x8000) {
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = (int)uVar5 / iVar1;
        }
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = 0x8000 / iVar1;
        }
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = *(int *)(this + 4) / iVar3;
        }
        *(uint *)(*(long *)(*(long *)(this + 0x10) + (long)iVar1 * 8) +
                 (long)(*(int *)(this + 4) - iVar1 * iVar3) * 4) = iVar2 + uVar4 * iVar3;
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
        PIFreeEmitterInstance::~PIFreeEmitterInstance(param_1);
        return;
      }
      uVar4 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar4;
      if (uVar4 == 0xffffffff) break;
      puVar8 = puVar8 + -1;
      iVar2 = (int)*puVar8;
    }
  }
  PIFreeEmitterInstance::~PIFreeEmitterInstance(param_1);
  return;
}

