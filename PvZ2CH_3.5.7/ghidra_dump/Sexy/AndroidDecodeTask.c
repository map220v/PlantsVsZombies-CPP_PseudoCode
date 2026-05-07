// Class: Sexy::AndroidDecodeTask


/* Sexy::AndroidDecodeTask::Finish() */

undefined8 __thiscall Sexy::AndroidDecodeTask::Finish(AndroidDecodeTask *this)

{
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 0x28))();
  }
  return 1;
}


/* Sexy::AndroidDecodeTask::operator new(unsigned long) */

void * __thiscall Sexy::AndroidDecodeTask::operator_new(AndroidDecodeTask *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)SimpleMemPool::GetMemory(0x6bc3f30);
  return pvVar1;
}


/* Sexy::AndroidDecodeTask::operator delete(void*) */

void __thiscall Sexy::AndroidDecodeTask::operator_delete(AndroidDecodeTask *this,void *param_1)

{
  SimpleMemPool::ReturnMemory((SimpleMemPool *)msPool,(uchar *)this);
  return;
}


/* Sexy::AndroidDecodeTask::~AndroidDecodeTask() */

void __thiscall Sexy::AndroidDecodeTask::~AndroidDecodeTask(AndroidDecodeTask *this)

{
  SimpleMemPool::ReturnMemory((SimpleMemPool *)msPool,(uchar *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidDecodeTask::AndroidDecodeTask(Sexy::AndroidResStreamsDriver*,
   Sexy::IResStreamsDriver::TaskResource*, unsigned int, Sexy::ResStreamTextureDescriptor*, unsigned
   int, unsigned int, unsigned int, unsigned int) */

void __thiscall
Sexy::AndroidDecodeTask::AndroidDecodeTask
          (AndroidDecodeTask *this,AndroidResStreamsDriver *param_1,TaskResource *param_2,
          uint param_3,ResStreamTextureDescriptor *param_4,uint param_5,uint param_6,uint param_7,
          uint param_8)

{
  long lVar1;
  uint local_10;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IResStreamsDriver::Task::Task((Task *)this);
  *(AndroidResStreamsDriver **)(this + 0x18) = param_1;
  *(undefined4 *)(this + 0x20) = 2;
  this[0x24] = (AndroidDecodeTask)0x0;
  *(undefined ***)this = &PTR_nop_06a34f70;
  *(undefined4 *)(this + 0x28) = 0;
  *(TaskResource **)(this + 0x30) = param_2;
  *(undefined8 *)(this + 0x60) = 0;
  if (param_2 != (TaskResource *)0x0) {
    (**(code **)(*(long *)param_2 + 0x20))(param_2);
    lVar1 = (**(code **)(**(long **)(this + 0x30) + 0x30))(*(long **)(this + 0x30));
    *(ulong *)(this + 0x60) = lVar1 + (ulong)param_3;
    if ((lVar1 + (ulong)param_3 & 3) != 0) {
      *(TaskResource **)(this + 0x30) = param_2;
    }
  }
  local_10 = *(uint *)param_4;
  *(uint *)(this + 0x54) = param_8;
  local_c = *(uint *)(param_4 + 4);
  *(uint *)(this + 0x68) = local_10;
  *(uint *)(this + 0x38) = param_3;
  *(ResStreamTextureDescriptor **)(this + 0x40) = param_4;
  *(uint *)(this + 0x48) = param_5;
  *(uint *)(this + 0x4c) = param_6;
  *(uint *)(this + 0x50) = param_7;
  FUN_052f7e24(&local_10);
  FUN_052f7e24(&local_c);
  *(uint *)(this + 0x58) = local_10 >> 5;
  *(uint *)(this + 0x5c) = local_c >> 5;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidDecodeTask::Execute() */

void __thiscall Sexy::AndroidDecodeTask::Execute(AndroidDecodeTask *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  code *pcVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong local_20;
  uint local_10;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar16 = *(code **)(**(long **)(this + 0x18) + 0x88);
  *(undefined4 *)(this + 0x28) = 1;
  iVar6 = (*pcVar16)(*(long **)(this + 0x18),*(undefined8 *)(this + 0x40));
  uVar7 = (**(code **)(**(long **)(this + 0x18) + 0x80))
                    (*(long **)(this + 0x18),*(undefined8 *)(this + 0x40));
  uVar23 = *(uint *)(this + 0x48);
  uVar15 = *(uint *)(this + 0x4c);
  uVar8 = *(uint *)(*(long *)(this + 0x40) + 0xc);
  if (uVar8 == 0x17) {
    bVar5 = true;
    uVar19 = 0x1908;
    uVar18 = 0x8034;
    iVar6 = 0x800;
    local_20 = 2;
  }
  else if (uVar8 < 0x18) {
    if (uVar8 == 2) {
      bVar5 = false;
      uVar19 = 0x1907;
      uVar18 = 0x8363;
      local_20 = 2;
    }
    else {
      bVar5 = true;
      if (uVar8 < 3) {
        if (uVar8 == 0) {
          uVar19 = 0x1908;
          uVar18 = 0x1401;
          local_20 = 4;
          bVar5 = false;
        }
        else {
          if (uVar8 != 1) goto LAB_052f8bc8;
          bVar5 = false;
          uVar19 = 0x1908;
          uVar18 = 0x8033;
          local_20 = 2;
        }
      }
      else if (uVar8 == 0x15) {
        bVar5 = true;
        uVar19 = 0x1908;
        uVar18 = 0x8033;
        iVar6 = 0x800;
        local_20 = 2;
      }
      else if (uVar8 < 0x16) {
        if (uVar8 != 3) goto LAB_052f8bc8;
        bVar5 = false;
        uVar19 = 0x1908;
        uVar18 = 0x8034;
        local_20 = 2;
      }
      else {
        uVar19 = 0x1907;
        uVar18 = 0x8363;
        iVar6 = 0x800;
        local_20 = 2;
      }
    }
  }
  else {
    if (uVar8 < 0x28) {
      if ((0x22 < uVar8) || (uVar8 - 0x1e < 3)) {
LAB_052f8b60:
        uVar8 = (**(code **)(**(long **)(this + 0x18) + 0x78))(*(long **)(this + 0x18));
        uVar9 = ConvertRSBToGLFormat(*(int *)(*(long *)(this + 0x40) + 0xc));
        BaseGLResStreamsDriver::DecodeCompressedTextureBlock
                  (*(BaseGLResStreamsDriver **)(this + 0x18),
                   *(ResStreamTextureDescriptor **)(this + 0x40),uVar9,uVar23,uVar15,
                   *(uchar **)(this + 0x60),iVar6 * *(int *)(this + 0x54),uVar7,uVar8);
        goto LAB_052f88ec;
      }
    }
    else if (uVar8 - 0x93 < 4) goto LAB_052f8b60;
LAB_052f8bc8:
    bVar5 = false;
    uVar19 = 0x1908;
    uVar18 = 0x8033;
  }
  plVar10 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x18) + 0x1f0) + 0xb0))
                              (*(long **)(*(long *)(this + 0x18) + 0x1f0));
  (**(code **)(*plVar10 + 0xe0))(plVar10,0x10);
  plVar10 = (long *)(**(code **)(**(long **)(*(long *)(this + 0x18) + 0x1f0) + 0xb0))
                              (*(long **)(*(long *)(this + 0x18) + 0x1f0));
  (**(code **)(*plVar10 + 0x230))(plVar10,0,0);
  if (bVar5) {
    iVar14 = 0x20;
    glPixelStorei(0xcf5,4);
    glBindTexture(0xde1,uVar23);
    uVar15 = *(uint *)(this + 0x58);
    uVar23 = 0;
    if (uVar15 != 0) {
      uVar23 = *(uint *)(this + 0x50) / uVar15;
    }
    uVar8 = *(uint *)(this + 0x50) - uVar23 * uVar15;
    if (*(uint *)(*(long *)(this + 0x40) + 4) < (uVar23 + 1) * 0x20) {
      iVar14 = *(uint *)(*(long *)(this + 0x40) + 4) + uVar23 * -0x20;
    }
    lVar11 = *(long *)(this + 0x60);
    uVar7 = *(uint *)(this + 0x54);
    if (uVar7 != 0) {
      uVar9 = 0;
      do {
        uVar1 = uVar8 + 1;
        uVar4 = uVar1 * 0x20;
        if (*(uint *)(this + 0x68) < uVar4) {
          iVar3 = **(int **)(this + 0x40);
          if (iVar14 != 0) {
            lVar22 = lVar11;
            iVar17 = uVar23 * 0x20;
            do {
              iVar2 = iVar17 + 1;
              glTexSubImage2D(0xde1,0,uVar4 - 0x20,iVar17,iVar3 + uVar8 * -0x20,1,uVar19,uVar18,
                              lVar22);
              lVar22 = lVar22 + (local_20 & 0x7ffffff) * 0x20;
              iVar17 = iVar2;
            } while (iVar2 != uVar23 * 0x20 + iVar14);
            goto LAB_052f8890;
          }
        }
        else {
          glTexSubImage2D(0xde1,0,uVar4 - 0x20,uVar23 << 5,0x20,iVar14,uVar19,uVar18,lVar11);
LAB_052f8890:
          uVar7 = *(uint *)(this + 0x54);
          uVar15 = *(uint *)(this + 0x58);
        }
        lVar11 = lVar11 + iVar6;
        uVar8 = uVar1;
        if (uVar15 <= uVar1) {
          iVar3 = uVar23 + 2;
          uVar23 = uVar23 + 1;
          if (*(uint *)(*(long *)(this + 0x40) + 4) < (uint)(iVar3 * 0x20)) {
            iVar14 = *(uint *)(*(long *)(this + 0x40) + 4) + uVar23 * -0x20;
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar7);
    }
    goto LAB_052f88ec;
  }
  glPixelStorei(0xcf5,1);
  glBindTexture(0xde1,uVar23);
  puVar12 = *(uint **)(this + 0x40);
  uVar15 = iVar6 * *(int *)(this + 0x54);
  uVar23 = puVar12[2];
  lVar11 = *(long *)(this + 0x60);
  uVar8 = 0;
  if (iVar6 != 0) {
    uVar8 = (int)uVar23 / iVar6;
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    uVar7 = *(uint *)(this + 0x50) / uVar8;
  }
  uVar9 = *(uint *)(this + 0x50) - uVar7 * uVar8;
  lVar22 = lVar11;
  uVar8 = uVar9;
  if ((uVar9 != 0) && (uVar7 < puVar12[1])) {
    local_c = (uint)local_20 * *(int *)(this + 0x68) - uVar9 * (uint)local_20;
    local_10 = uVar15;
    puVar12 = eastl::min_alt<unsigned_int>(&local_10,&local_c);
    uVar8 = *puVar12;
    uVar1 = 0;
    if ((uint)local_20 != 0) {
      uVar1 = uVar8 / (uint)local_20;
    }
    lVar22 = lVar11 + (ulong)uVar8;
    uVar15 = uVar15 - uVar8;
    uVar8 = uVar1 + uVar9;
    glTexSubImage2D(0xde1,0,uVar9,uVar7,uVar1,1,uVar19,uVar18,lVar11);
    puVar12 = *(uint **)(this + 0x40);
    if (*puVar12 <= uVar8) {
      uVar7 = uVar7 + 1;
      iVar6 = uVar23 - (uint)local_20 * *(int *)(this + 0x68);
      uVar15 = uVar15 - iVar6;
      lVar22 = lVar22 + iVar6;
      uVar8 = 0;
    }
  }
  if (((int)uVar15 < 1) || (puVar12[1] <= uVar7)) goto LAB_052f88ec;
  local_10 = 0;
  if (uVar23 != 0) {
    local_10 = (int)uVar15 / (int)uVar23;
  }
  local_c = puVar12[1] - uVar7;
  piVar13 = eastl::min_alt<int>((int *)&local_10,(int *)&local_c);
  iVar6 = *piVar13;
  iVar14 = *(int *)(this + 0x68);
  if (uVar23 == (uint)local_20 * iVar14) {
    iVar14 = 0;
    if ((uint)local_20 != 0) {
      iVar14 = (int)uVar23 / (int)(uint)local_20;
    }
    uVar15 = uVar15 - iVar6 * uVar23;
    uVar21 = (ulong)(iVar6 * uVar23);
    glTexSubImage2D(0xde1,0,uVar8,uVar7,iVar14,iVar6,uVar19,uVar18,lVar22);
LAB_052f8acc:
    uVar7 = iVar6 + uVar7;
    lVar22 = lVar22 + uVar21;
    if (((int)uVar15 < 1) || (puVar12 = *(uint **)(this + 0x40), puVar12[1] <= uVar7))
    goto LAB_052f88ec;
  }
  else if (0 < iVar6) {
    lVar20 = (long)(int)uVar23;
    lVar11 = lVar22;
    uVar9 = uVar7;
    while( true ) {
      glTexSubImage2D(0xde1,0,uVar8,uVar9,iVar14,1,uVar19,uVar18,lVar11);
      if (uVar9 + 1 == iVar6 + uVar7) break;
      iVar14 = *(int *)(this + 0x68);
      lVar11 = lVar11 + lVar20;
      uVar9 = uVar9 + 1;
    }
    uVar15 = (uVar15 - uVar23) + (1 - iVar6) * uVar23;
    uVar21 = lVar20 + (ulong)(iVar6 - 1) * lVar20;
    goto LAB_052f8acc;
  }
  if (uVar8 < *puVar12) {
    local_c = (uint)local_20 * *(int *)(this + 0x68) - uVar8 * (uint)local_20;
    local_10 = uVar15;
    puVar12 = eastl::min_alt<unsigned_int>(&local_10,&local_c);
    uVar23 = 0;
    if ((uint)local_20 != 0) {
      uVar23 = *puVar12 / (uint)local_20;
    }
    glTexSubImage2D(0xde1,0,uVar8,uVar7,uVar23,1,uVar19,uVar18,lVar22);
  }
LAB_052f88ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

