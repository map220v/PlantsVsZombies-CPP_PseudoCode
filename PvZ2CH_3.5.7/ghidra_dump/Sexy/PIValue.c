// Class: Sexy::PIValue


/* Sexy::PIValue::GetLastKeyframe(float) */

float __thiscall Sexy::PIValue::GetLastKeyframe(PIValue *this,float param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 0x18);
  iVar2 = FUN_053b9b4c(uVar6,*(undefined8 *)(this + 0x20));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar4 = (long)(int)uVar1;
    do {
      lVar5 = lVar4 + -1;
      pfVar3 = (float *)FUN_053b9b44(uVar6,lVar4);
      if (*pfVar3 <= param_1) {
        return pfVar3[1];
      }
      lVar4 = lVar5;
    } while (lVar5 != ((long)(int)uVar1 + -1) - (ulong)uVar1);
  }
  return 0.0;
}


/* Sexy::PIValue::GetLastKeyframeTime(float) */

float __thiscall Sexy::PIValue::GetLastKeyframeTime(PIValue *this,float param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(this + 0x18);
  iVar2 = FUN_053b9b4c(uVar6,*(undefined8 *)(this + 0x20));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar4 = (long)(int)uVar1;
    do {
      lVar5 = lVar4 + -1;
      pfVar3 = (float *)FUN_053b9b44(uVar6,lVar4);
      if (*pfVar3 <= param_1) {
        return *pfVar3;
      }
      lVar4 = lVar5;
    } while (lVar5 != ((long)(int)uVar1 + -1) - (ulong)uVar1);
  }
  return 0.0;
}


/* Sexy::PIValue::GetNextKeyframeTime(float) */

float __thiscall Sexy::PIValue::GetNextKeyframeTime(PIValue *this,float param_1)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x18);
  iVar1 = FUN_053b9b4c(uVar4,*(undefined8 *)(this + 0x20));
  lVar3 = 0;
  do {
    if (iVar1 <= (int)lVar3) {
      return 0.0;
    }
    pfVar2 = (float *)FUN_053b9b44(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*pfVar2 < param_1);
  return *pfVar2;
}


/* Sexy::PIValue::GetNextKeyframeIdx(float) */

ulong __thiscall Sexy::PIValue::GetNextKeyframeIdx(PIValue *this,float param_1)

{
  int iVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x18);
  iVar1 = FUN_053b9b4c(uVar5,*(undefined8 *)(this + 0x20));
  uVar3 = 0;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (iVar1 <= (int)uVar3) {
      return 0xffffffff;
    }
    pfVar2 = (float *)FUN_053b9b44(uVar5,uVar3);
    uVar3 = uVar3 + 1;
  } while (*pfVar2 < param_1);
  return uVar4;
}


/* Sexy::PIValue::PIValue() */

void __thiscall Sexy::PIValue::PIValue(PIValue *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Bezier::Bezier((Bezier *)(this + 0x30));
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0x3c23d70a;
  *(undefined4 *)(this + 0x60) = 0xbf800000;
  return;
}


/* Sexy::PIValue::~PIValue() */

void __thiscall Sexy::PIValue::~PIValue(PIValue *this)

{
  Bezier::~Bezier((Bezier *)(this + 0x30));
  std::vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>>::~vector
            ((vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>> *)(this + 0x18));
  std::vector<float,std::allocator<float>>::~vector((vector<float,std::allocator<float>> *)this);
  return;
}


/* Sexy::PIValue::PIValue(Sexy::PIValue&&) */

void __thiscall Sexy::PIValue::PIValue(PIValue *this,PIValue *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  Bezier::Bezier((Bezier *)(this + 0x30),(Bezier *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 100);
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  uVar3 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = uVar1;
  *(undefined4 *)(this + 0x68) = uVar2;
  *(undefined4 *)(this + 0x6c) = uVar3;
  return;
}


/* Sexy::PIValue::TEMPNAMEPLACEHOLDERVALUE(Sexy::PIValue&&) */

PIValue * __thiscall Sexy::PIValue::operator=(PIValue *this,PIValue *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  std::vector<float,std::allocator<float>>::operator=
            ((vector<float,std::allocator<float>> *)this,(vector *)param_1);
  std::vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>>::operator=
            ((vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  Bezier::operator=((Bezier *)(this + 0x30),(Bezier *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 100);
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  uVar3 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = uVar1;
  *(undefined4 *)(this + 0x68) = uVar2;
  *(undefined4 *)(this + 0x6c) = uVar3;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIValue::QuantizeCurve() */

void __thiscall Sexy::PIValue::QuantizeCurve(PIValue *this)

{
  long lVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s11;
  float fVar16;
  float fVar17;
  float local_10;
  float local_c;
  
  lVar1 = ___stack_chk_guard;
  pfVar3 = (float *)std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                    ::front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                             *)(this + 0x18));
  iVar2 = 0;
  fVar15 = *pfVar3;
  bVar9 = true;
  iVar11 = 0;
  lVar6 = 0;
  iVar5 = 1;
  pfVar3 = (float *)std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x18));
  fVar17 = *pfVar3;
  std::vector<float,std::allocator<float>>::clear((vector<float,std::allocator<float>> *)this);
  std::vector<float,std::allocator<float>>::resize
            ((vector<float,std::allocator<float>> *)this,0x100);
  fVar16 = 1.0 / (fVar17 - fVar15);
  fVar14 = fVar15;
  do {
    Bezier::Evaluate(fVar14);
    uVar8 = *(undefined8 *)(this + 0x18);
    iVar7 = iVar5;
    while( true ) {
      iVar5 = iVar7;
      lVar6 = lVar6 + 1;
      pfVar3 = (float *)FUN_053b9b44(uVar8,lVar6);
      if (local_10 < *pfVar3) break;
      iVar2 = FUN_053b9b4c(uVar8,*(undefined8 *)(this + 0x20));
      if (iVar2 + -1 <= iVar5) {
        for (lVar6 = 0; (int)lVar6 < iVar2; lVar6 = lVar6 + 1) {
          pfVar3 = (float *)FUN_053b9b44(uVar8,lVar6);
          pfVar4 = (float *)FUN_053b9b58(*(undefined8 *)this,
                                         (long)(int)((*pfVar3 - fVar15) * fVar16 * 255.0 + 0.5));
          *pfVar4 = pfVar3[1];
        }
        if (lVar1 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      iVar7 = iVar5 + 1;
      iVar2 = iVar5;
    }
    lVar6 = (long)iVar2;
    pfVar3 = (float *)FUN_053b9b44(uVar8,lVar6);
    iVar7 = iVar11;
    fVar13 = unaff_s11;
    if (*pfVar3 <= local_10) {
      iVar7 = (int)(fVar16 * (local_10 - fVar15) * 255.0 + 0.5);
      if ((bVar9) || (iVar7 <= iVar11 + 1)) {
        pfVar3 = (float *)FUN_053b9b58(*(undefined8 *)this,(long)iVar7);
        *pfVar3 = local_c;
        fVar13 = local_c;
      }
      else {
        fVar13 = local_c;
        if (iVar11 <= iVar7) {
          uVar8 = *(undefined8 *)this;
          iVar10 = 0;
          lVar12 = (long)iVar11;
          do {
            fVar13 = (float)iVar10;
            iVar10 = iVar10 + 1;
            fVar13 = fVar13 * (1.0 / (float)(iVar7 - iVar11));
            pfVar3 = (float *)FUN_053b9b58(uVar8,lVar12);
            *pfVar3 = (1.0 - fVar13) * unaff_s11 + local_c * fVar13;
            lVar12 = lVar12 + 1;
            fVar13 = local_c;
          } while (iVar10 != (iVar7 + 1) - iVar11);
        }
      }
    }
    unaff_s11 = fVar13;
    iVar11 = iVar7;
    fVar14 = fVar14 + (fVar17 - fVar15) * 0.001953125;
    bVar9 = false;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIValue::GetValueAt(float, float) */

void __thiscall Sexy::PIValue::GetValueAt(PIValue *this,float param_1,float param_2)

{
  bool bVar1;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *this_00;
  float fVar2;
  char cVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_38;
  float local_30;
  undefined4 uStack_2c;
  float local_28 [4];
  float local_18 [4];
  long local_8;
  
  fVar11 = *(float *)(this + 0x60);
  local_8 = ___stack_chk_guard;
  if (fVar11 == param_1) {
    param_2 = *(float *)(this + 100);
    goto LAB_053c606c;
  }
  uVar9 = *(undefined8 *)(this + 0x18);
  *(float *)(this + 0x60) = param_1;
  lVar4 = FUN_053b9b4c(uVar9,*(undefined8 *)(this + 0x20));
  if (lVar4 == 1) {
    lVar4 = FUN_053b9b44(uVar9,0);
    param_2 = *(float *)(lVar4 + 4);
    *(float *)(this + 100) = param_2;
    goto LAB_053c606c;
  }
  cVar3 = FUN_053b9ab0(*(undefined4 *)(this + 0x44));
  if (cVar3 == '\0') {
    iVar7 = (int)lVar4;
    lVar4 = 1;
    if (1 < iVar7) {
      do {
        pfVar5 = (float *)FUN_053b9b44(uVar9,lVar4 + -1);
        pfVar6 = (float *)FUN_053b9b44(uVar9,lVar4);
        fVar11 = *pfVar5;
        if ((fVar11 <= param_1) && (fVar10 = *pfVar6, param_1 <= fVar10)) {
LAB_053c6030:
          fVar14 = pfVar5[1];
          fVar12 = pfVar6[1];
          local_30 = (param_1 - fVar11) / (fVar10 - fVar11);
          local_38 = CONCAT44(local_38._4_4_,0x3f800000);
          pfVar5 = eastl::min_alt<float>((float *)&local_38,&local_30);
          param_2 = fVar14 + (fVar12 - fVar14) * *pfVar5;
          *(float *)(this + 100) = param_2;
          goto LAB_053c606c;
        }
        if (iVar7 + -1 == (int)lVar4) {
          fVar10 = *pfVar6;
          goto LAB_053c6030;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < iVar7);
    }
    *(float *)(this + 100) = param_2;
    goto LAB_053c606c;
  }
  this_00 = (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
            (this + 0x18);
  pfVar5 = (float *)std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                    ::front(this_00);
  fVar12 = *pfVar5;
  pfVar5 = (float *)std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this_00);
  fVar10 = *pfVar5;
  if (1.001 < fVar10) {
    local_30 = (fVar10 - fVar12) * 0.001;
    local_38 = CONCAT44(local_38._4_4_,0x3dcccccd);
    pfVar5 = eastl::min_alt<float>((float *)&local_38,&local_30);
    fVar14 = *pfVar5;
    if (param_1 <= fVar12) goto LAB_053c62c0;
    if (param_1 < fVar10) {
      uVar8 = 0;
      PieceConfig::PieceConfig((PieceConfig *)&local_38);
      local_18[0] = 0.1;
      local_18[3] = 0.5;
      local_18[1] = 0.1;
      local_28[0] = 1.0;
      local_18[2] = 0.1;
      local_28[1] = 0.75;
      local_28[2] = 1.25;
      bVar1 = 0.05 < (param_1 - fVar11) / (fVar10 - fVar12);
      do {
        fVar11 = fVar14;
        if (bVar1 < ((int)uVar8 < 4)) {
          fVar11 = fVar14 * local_18[uVar8];
        }
        if (((2 < uVar8) || (bVar1)) || (*(float *)(this + 0x6c) == 0.0)) {
          fVar13 = fVar12 + (fVar10 - fVar12) * 0.5;
        }
        else {
          fVar13 = *(float *)(this + 0x68) + *(float *)(this + 0x6c) * local_28[uVar8];
        }
        fVar2 = fVar12;
        if ((fVar13 <= fVar10) && (fVar12 <= fVar13)) {
          Bezier::Evaluate(fVar13);
          local_38 = CONCAT44(uStack_2c,local_30);
          if (ABS(local_30 - param_1) <= fVar11) break;
          fVar2 = fVar13;
          if (0.0 <= local_30 - param_1) {
            fVar2 = fVar12;
            fVar10 = fVar13;
          }
        }
        fVar12 = fVar2;
        uVar8 = uVar8 + 1;
      } while (uVar8 != 1000);
      fVar11 = *(float *)(this + 0x68);
      *(float *)(this + 0x68) = fVar13;
      *(float *)(this + 100) = local_38._4_4_;
      *(float *)(this + 0x6c) = ((*(float *)(this + 0x6c) - fVar11) + fVar13) * 0.5;
      param_2 = local_38._4_4_;
      goto LAB_053c606c;
    }
  }
  else {
    lVar4 = FUN_053b9b60(*(undefined8 *)this,*(undefined8 *)(this + 8));
    if (lVar4 == 0) {
      QuantizeCurve(this);
    }
    fVar11 = ((param_1 - fVar12) / (fVar10 - fVar12)) * 255.0 + 0.5;
    if (fVar11 <= 0.0) {
LAB_053c62c0:
      lVar4 = std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
              front(this_00);
      param_2 = *(float *)(lVar4 + 4);
      *(float *)(this + 100) = param_2;
      goto LAB_053c606c;
    }
    if (fVar11 < 255.0) {
      iVar7 = (int)fVar11;
      uVar9 = *(undefined8 *)this;
      pfVar5 = (float *)FUN_053b9b58(uVar9,(long)iVar7);
      pfVar6 = (float *)FUN_053b9b58(uVar9,(long)(iVar7 + 1));
      param_2 = (fVar11 - (float)iVar7) * *pfVar6 + (1.0 - (fVar11 - (float)iVar7)) * *pfVar5;
      *(float *)(this + 100) = param_2;
      goto LAB_053c606c;
    }
  }
  lVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)this_00);
  param_2 = *(float *)(lVar4 + 4);
  *(float *)(this + 100) = param_2;
LAB_053c606c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* Sexy::PIValue::PIValue(Sexy::PIValue const&) */

void __thiscall Sexy::PIValue::PIValue(PIValue *this,PIValue *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)this,(vector *)param_1);
  std::vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>>::vector
            ((vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  Bezier::Bezier((Bezier *)(this + 0x30),(Bezier *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 100);
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  uVar3 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = uVar1;
  *(undefined4 *)(this + 0x68) = uVar2;
  *(undefined4 *)(this + 0x6c) = uVar3;
  return;
}

