// Class: Sexy::PIInterpolator


/* Sexy::PIInterpolator::PIInterpolator() */

void __thiscall Sexy::PIInterpolator::PIInterpolator(PIInterpolator *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


/* Sexy::PIInterpolator::PIInterpolator(Sexy::PIInterpolator&&) */

void __thiscall Sexy::PIInterpolator::PIInterpolator(PIInterpolator *this,PIInterpolator *param_1)

{
  _Vector_base *extraout_x0;
  
  nop();
  std::_Vector_base<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
  _Vector_base((_Vector_base<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
               this,extraout_x0);
  return;
}


/* Sexy::PIInterpolator::GetKeyframeNum(int) */

undefined4 __thiscall Sexy::PIInterpolator::GetKeyframeNum(PIInterpolator *this,int param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)this;
  uVar3 = FUN_053b9b6c(uVar5,*(undefined8 *)(this + 8));
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = (ulong)(long)param_1 / uVar3;
    }
    puVar4 = (undefined4 *)FUN_053b9b78(uVar5,(long)param_1 - uVar1 * uVar3);
    uVar2 = *puVar4;
  }
  return uVar2;
}


/* Sexy::PIInterpolator::GetKeyframeTime(int) */

undefined4 __thiscall Sexy::PIInterpolator::GetKeyframeTime(PIInterpolator *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar4 = *(undefined8 *)this;
  uVar2 = FUN_053b9b6c(uVar4,*(undefined8 *)(this + 8));
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = (ulong)(long)param_1 / uVar2;
    }
    lVar3 = FUN_053b9b78(0,uVar4,(long)param_1 - uVar1 * uVar2);
    uVar5 = *(undefined4 *)(lVar3 + 4);
  }
  return uVar5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIInterpolator::GetValueAt(float) */

void __thiscall Sexy::PIInterpolator::GetValueAt(PIInterpolator *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float local_10;
  float local_c;
  long local_8;
  
  uVar8 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_053b9b6c(uVar8,*(undefined8 *)(this + 8));
  if (lVar4 == 1) {
    puVar5 = (uint *)FUN_053b9b78(uVar8,0);
    pfVar7 = (float *)(ulong)*puVar5;
  }
  else {
    lVar4 = std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                      ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                        *)this);
    fVar10 = *(float *)(lVar4 + 4);
    lVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this);
    fVar9 = *(float *)(lVar4 + 4);
    lVar4 = std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                      ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                        *)this);
    uVar8 = *(undefined8 *)this;
    fVar10 = fVar10 + (fVar9 - *(float *)(lVar4 + 4)) * param_1;
    iVar3 = FUN_053b9b6c(uVar8,*(undefined8 *)(this + 8));
    for (lVar4 = 1; (int)lVar4 < iVar3; lVar4 = lVar4 + 1) {
      puVar5 = (uint *)FUN_053b9b78(uVar8,lVar4 + -1);
      puVar6 = (uint *)FUN_053b9b78(uVar8,lVar4);
      fVar9 = (float)puVar5[1];
      if ((fVar9 <= fVar10) && (fVar10 <= (float)puVar6[1])) {
        uVar1 = *puVar6;
        uVar2 = *puVar5;
        local_10 = 1.0;
        local_c = (fVar10 - fVar9) / ((float)puVar6[1] - fVar9);
        pfVar7 = eastl::min_alt<float>(&local_10,&local_c);
        if (local_8 == ___stack_chk_guard) {
          InterpColor(uVar2,uVar1,*pfVar7);
          return;
        }
        goto LAB_053bee6c;
      }
      if ((int)lVar4 == iVar3 + -1) {
        pfVar7 = (float *)(ulong)*puVar6;
        goto LAB_053bedb0;
      }
    }
    pfVar7 = (float *)0x0;
  }
LAB_053bedb0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_053bee6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pfVar7);
}


/* Sexy::PIInterpolator::~PIInterpolator() */

void __thiscall Sexy::PIInterpolator::~PIInterpolator(PIInterpolator *this)

{
  FUN_053ba0c4(*(undefined8 *)this);
  return;
}


/* Sexy::PIInterpolator::TEMPNAMEPLACEHOLDERVALUE(Sexy::PIInterpolator&&) */

PIInterpolator * __thiscall
Sexy::PIInterpolator::operator=(PIInterpolator *this,PIInterpolator *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::operator=
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x053d23c0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Sexy::PIInterpolator::PIInterpolator(Sexy::PIInterpolator const&) */

void __thiscall Sexy::PIInterpolator::PIInterpolator(PIInterpolator *this,PIInterpolator *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  PIInterpolatorPoint *pPVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_053b9b6c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::_Vector_base<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
  _Vector_base((ulong)this,paVar2);
  FUN_053c0870(*(undefined8 *)param_1);
  uVar3 = FUN_053c08c0(*(undefined8 *)(param_1 + 8));
  pPVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<Sexy::PIInterpolatorPoint_const*,std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>>,Sexy::PIInterpolatorPoint*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(PIInterpolatorPoint **)(this + 8) = pPVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

