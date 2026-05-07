// Class: EATextSquish


/* EATextSquish::Dot(EATextSquish::Vec3 const&, EATextSquish::Vec3 const&) */

float EATextSquish::Dot(Vec3 *param_1,Vec3 *param_2)

{
  return *(float *)(param_2 + 4) * *(float *)(param_1 + 4) + *(float *)param_1 * *(float *)param_2 +
         *(float *)(param_1 + 8) * *(float *)(param_2 + 8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::TEMPNAMEPLACEHOLDERVALUE(EATextSquish::Vec3 const&, EATextSquish::Vec3 const&) */

void EATextSquish::operator+(Vec3 *param_1,Vec3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_28 = *(undefined8 *)param_1;
  local_20 = *(undefined4 *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Vec3::operator+=((Vec3 *)&local_28,param_2);
  uVar4 = *puVar3;
  local_10 = *(undefined4 *)(puVar3 + 1);
  local_18._0_4_ = (undefined4)uVar4;
  local_18._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
  uVar1 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  uVar2 = (undefined4)local_18;
  local_18 = uVar4;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,uVar1,local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::TEMPNAMEPLACEHOLDERVALUE(EATextSquish::Vec3 const&, EATextSquish::Vec3 const&) */

void EATextSquish::operator-(Vec3 *param_1,Vec3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_28 = *(undefined8 *)param_1;
  local_20 = *(undefined4 *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Vec3::operator-=((Vec3 *)&local_28,param_2);
  uVar4 = *puVar3;
  local_10 = *(undefined4 *)(puVar3 + 1);
  local_18._0_4_ = (undefined4)uVar4;
  local_18._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
  uVar1 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  uVar2 = (undefined4)local_18;
  local_18 = uVar4;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,uVar1,local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::TEMPNAMEPLACEHOLDERVALUE(EATextSquish::Vec3 const&, EATextSquish::Vec3 const&) */

void EATextSquish::operator*(Vec3 *param_1,Vec3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_28 = *(undefined8 *)param_1;
  local_20 = *(undefined4 *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Vec3::operator*=((Vec3 *)&local_28,param_2);
  uVar4 = *puVar3;
  local_10 = *(undefined4 *)(puVar3 + 1);
  local_18._0_4_ = (undefined4)uVar4;
  local_18._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
  uVar1 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  uVar2 = (undefined4)local_18;
  local_18 = uVar4;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,uVar1,local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::TEMPNAMEPLACEHOLDERVALUE(float, EATextSquish::Vec3 const&) */

void EATextSquish::operator*(float param_1,Vec3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_28 = *(undefined8 *)param_2;
  local_20 = *(undefined4 *)(param_2 + 8);
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Vec3::operator*=((Vec3 *)&local_28,param_1);
  uVar4 = *puVar3;
  local_10 = *(undefined4 *)(puVar3 + 1);
  local_18._0_4_ = (undefined4)uVar4;
  local_18._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
  uVar1 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  uVar2 = (undefined4)local_18;
  local_18 = uVar4;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,uVar1,local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::TEMPNAMEPLACEHOLDERVALUE(EATextSquish::Vec3 const&, float) */

void EATextSquish::operator/(Vec3 *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_28 = *(undefined8 *)param_1;
  local_20 = *(undefined4 *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Vec3::operator/=((Vec3 *)&local_28,param_2);
  uVar4 = *puVar3;
  local_10 = *(undefined4 *)(puVar3 + 1);
  local_18._0_4_ = (undefined4)uVar4;
  local_18._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
  uVar1 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  uVar2 = (undefined4)local_18;
  local_18 = uVar4;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,uVar1,local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::Floor(EATextSquish::Vec3 const&) */

void EATextSquish::Floor(Vec3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Vec3::Vec3((Vec3 *)&local_28,(float)(int)*(float *)param_1,(float)(int)*(float *)(param_1 + 4),
             (float)(int)*(float *)(param_1 + 8));
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::ComputeWeightedCovariance(int, EATextSquish::Vec3 const*, float const*) */

void EATextSquish::ComputeWeightedCovariance(int param_1,Vec3 *param_2,float *param_3)

{
  Vec3 *pVVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  Sym3x3 *in_x8;
  Vec3 *pVVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float in_s1;
  float in_s2;
  float fVar12;
  Vec3 aVStack_38 [16];
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Vec3::Vec3(aVStack_38,0.0);
  if (param_1 < 1) {
    Vec3::operator/=(aVStack_38,0.0);
    Sym3x3::Sym3x3(in_x8,0.0);
  }
  else {
    fVar12 = 0.0;
    pVVar8 = param_2;
    pfVar2 = param_3;
    do {
      pVVar1 = pVVar8 + 0xc;
      fVar12 = fVar12 + *pfVar2;
      local_18 = operator*(*pfVar2,pVVar8);
      local_14 = in_s1;
      local_10 = in_s2;
      Vec3::operator+=(aVStack_38,(Vec3 *)&local_18);
      pVVar8 = pVVar1;
      pfVar2 = pfVar2 + 1;
    } while (pVVar1 != param_2 + ((ulong)(param_1 - 1) + 1) * 0xc);
    Vec3::operator/=(aVStack_38,fVar12);
    Sym3x3::Sym3x3(in_x8,0.0);
    pfVar2 = (float *)Sym3x3::operator[](in_x8,0);
    pfVar3 = (float *)Sym3x3::operator[](in_x8,1);
    pfVar4 = (float *)Sym3x3::operator[](in_x8,2);
    pfVar5 = (float *)Sym3x3::operator[](in_x8,3);
    pfVar6 = (float *)Sym3x3::operator[](in_x8,4);
    pfVar7 = (float *)Sym3x3::operator[](in_x8,5);
    pVVar8 = param_2;
    do {
      pVVar1 = pVVar8 + 0xc;
      local_28 = operator-(pVVar8,aVStack_38);
      local_24 = in_s1;
      local_20 = in_s2;
      uVar9 = operator*(*param_3,(Vec3 *)&local_28);
      local_18 = uVar9;
      local_14 = in_s1;
      local_10 = in_s2;
      fVar12 = (float)FUN_05417cb4(local_28);
      fVar10 = (float)FUN_05417cb4(uVar9);
      *pfVar2 = *pfVar2 + fVar12 * fVar10;
      fVar10 = (float)FUN_05417cb8(in_s1);
      *pfVar3 = *pfVar3 + fVar12 * fVar10;
      fVar11 = (float)FUN_05417cbc(in_s2);
      *pfVar4 = *pfVar4 + fVar12 * fVar11;
      fVar12 = (float)FUN_05417cb8(local_24);
      *pfVar5 = *pfVar5 + fVar10 * fVar12;
      in_s2 = *pfVar6;
      *pfVar6 = in_s2 + fVar11 * fVar12;
      fVar12 = (float)FUN_05417cbc(local_20);
      in_s1 = *pfVar7;
      *pfVar7 = in_s1 + fVar11 * fVar12;
      param_3 = param_3 + 1;
      pVVar8 = pVVar1;
    } while (param_2 + ((ulong)(param_1 - 1) + 1) * 0xc != pVVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::ComputePrincipleComponent(EATextSquish::Sym3x3 const&) */

void EATextSquish::ComputePrincipleComponent(Sym3x3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong local_28;
  float local_20;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)Sym3x3::operator[](param_1,0);
  fVar2 = (float)Sym3x3::operator[](param_1,3);
  fVar3 = (float)Sym3x3::operator[](param_1,5);
  fVar4 = (float)Sym3x3::operator[](param_1,1);
  fVar12 = fVar2 + fVar1 + fVar3;
  fVar5 = (float)Sym3x3::operator[](param_1,2);
  fVar6 = (float)Sym3x3::operator[](param_1,4);
  fVar10 = ((((fVar2 + fVar1) * fVar3 - fVar4 * fVar4) + fVar2 * fVar1) - fVar5 * fVar5) -
           fVar6 * fVar6;
  fVar11 = fVar10 - fVar12 * fVar12 * 0.33333334;
  fVar1 = (fVar10 * 0.33333334 + fVar12 * fVar12 * -0.074074075) * fVar12 -
          (((((fVar4 * fVar5 + fVar4 * fVar5) * fVar6 - fVar6 * fVar6 * fVar1) +
            fVar3 * fVar2 * fVar1) - fVar5 * fVar5 * fVar2) - fVar4 * fVar4 * fVar3);
  fVar3 = fVar1 * fVar1 * 0.25;
  fVar2 = fVar3 + fVar11 * fVar11 * fVar11 * 0.037037037;
  if (1.1920929e-07 < fVar2) {
    Vec3::Vec3((Vec3 *)&local_28,1.0);
    local_18 = local_28;
    local_10 = local_20;
  }
  else {
    if (fVar2 < -1.1920929e-07) {
      dVar8 = atan2(SQRT((double)-fVar2),(double)(fVar1 * -0.5));
      dVar9 = pow((double)SQRT(fVar3 - fVar2),0.3333333432674408);
      fVar5 = (float)dVar9;
      fVar2 = cosf((float)dVar8 * 0.33333334);
      fVar3 = sinf((float)dVar8 * 0.33333334);
      fVar1 = (fVar2 + fVar2) * fVar5 + fVar12 * 0.33333334;
      fVar4 = fVar12 * 0.33333334 - (fVar2 + fVar3 * 1.7320508) * fVar5;
      fVar5 = (fVar3 * 1.7320508 - fVar2) * fVar5 + fVar12 * 0.33333334;
      fVar2 = ABS(fVar1);
      fVar3 = ABS(fVar4);
      if (fVar2 < fVar3) {
        fVar1 = fVar4;
        fVar2 = fVar3;
      }
      fVar3 = ABS(fVar5);
      if (fVar2 < fVar3) {
        fVar1 = fVar5;
      }
    }
    else {
      if (fVar1 < 0.0) {
        dVar8 = pow((double)(fVar1 * -0.5),0.3333333432674408);
        fVar1 = -(float)dVar8;
      }
      else {
        dVar8 = pow((double)(fVar1 * 0.5),0.3333333432674408);
        fVar1 = (float)dVar8;
      }
      fVar2 = fVar1 + fVar12 * 0.33333334;
      fVar1 = fVar12 * 0.33333334 - (fVar1 + fVar1);
      fVar3 = ABS(fVar1);
      if (fVar3 < ABS(fVar2)) {
        uVar7 = FUN_05418074(fVar2,param_1);
        local_18 = CONCAT44(fVar2,uVar7);
        local_10 = fVar3;
        goto LAB_054189bc;
      }
    }
    uVar7 = FUN_0541829c(fVar1,param_1);
    local_18 = CONCAT44(fVar2,uVar7);
    local_10 = fVar3;
  }
LAB_054189bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18 & 0xffffffff,local_18._4_4_,local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::Min(EATextSquish::Vec3 const&, EATextSquish::Vec3 const&) */

void EATextSquish::Min(Vec3 *param_1,Vec3 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = eastl::min_alt<float>((float *)param_1,(float *)param_2);
  pfVar5 = eastl::min_alt<float>((float *)(param_1 + 4),(float *)(param_2 + 4));
  pfVar6 = eastl::min_alt<float>((float *)(param_1 + 8),(float *)(param_2 + 8));
  Vec3::Vec3((Vec3 *)&local_28,*pfVar4,*pfVar5,*pfVar6);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::Max(EATextSquish::Vec3 const&, EATextSquish::Vec3 const&) */

void EATextSquish::Max(Vec3 *param_1,Vec3 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = eastl::max_alt<float>((float *)param_1,(float *)param_2);
  pfVar5 = eastl::max_alt<float>((float *)(param_1 + 4),(float *)(param_2 + 4));
  pfVar6 = eastl::max_alt<float>((float *)(param_1 + 8),(float *)(param_2 + 8));
  Vec3::Vec3((Vec3 *)&local_28,*pfVar4,*pfVar5,*pfVar6);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::WriteColourBlock4(EATextSquish::Vec3 const&, EATextSquish::Vec3 const&, unsigned
   char const*, void*) */

void EATextSquish::WriteColourBlock4(Vec3 *param_1,Vec3 *param_2,uchar *param_3,void *param_4)

{
  uint7 uVar1;
  uint7 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint local_28;
  uint local_24;
  ulong local_20;
  ulong uStack_18;
  long local_8;
  ulong uVar6;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_05417cc0();
  local_28 = uVar3;
  local_24 = FUN_05417cc0(param_2);
  if ((int)uVar3 < (int)local_24) {
    EA::Text::Internal::swap<int>((int *)&local_28,(int *)&local_24);
    uVar1 = (uint7)*(undefined8 *)param_3 ^ 0x1010101;
    uVar2 = (uint7)*(undefined8 *)(param_3 + 8) ^ 0x1010101;
    uVar5 = (CONCAT71((int7)((ulong)*(undefined8 *)param_3 >> 8),(char)uVar1) ^ 0x101010101010100) &
            0xffffffffffffff03;
    uVar6 = CONCAT62((int6)(uVar5 >> 0x10),CONCAT11((char)(uVar1 >> 8),(char)uVar5)) &
            0xffffffffffff03ff;
    uVar5 = CONCAT53((int5)(uVar6 >> 0x18),CONCAT12((char)(uVar5 >> 0x10),(short)uVar6)) &
            0xffffffffff03ffff;
    uVar6 = CONCAT44((int)(uVar5 >> 0x20),CONCAT13((char)(uVar6 >> 0x18),(int3)uVar5)) &
            0xffffffff03ffffff;
    uVar5 = CONCAT35((int3)(uVar6 >> 0x28),CONCAT14((char)(uVar5 >> 0x20),(int)uVar6)) &
            0xffffff03ffffffff;
    uVar6 = CONCAT26((short)(uVar5 >> 0x30),CONCAT15((char)(uVar6 >> 0x28),(int5)uVar5)) &
            0xffff03ffffffffff;
    local_20 = CONCAT17((char)(uVar6 >> 0x38),CONCAT16((char)(uVar5 >> 0x30),(int6)uVar6)) &
               0x303ffffffffffff;
    uVar5 = (CONCAT71((int7)((ulong)*(undefined8 *)(param_3 + 8) >> 8),(char)uVar2) ^
            0x101010101010100) & 0xffffffffffffff03;
    uVar6 = CONCAT62((int6)(uVar5 >> 0x10),CONCAT11((char)(uVar2 >> 8),(char)uVar5)) &
            0xffffffffffff03ff;
    uVar5 = CONCAT53((int5)(uVar6 >> 0x18),CONCAT12((char)(uVar5 >> 0x10),(short)uVar6)) &
            0xffffffffff03ffff;
    uVar6 = CONCAT44((int)(uVar5 >> 0x20),CONCAT13((char)(uVar6 >> 0x18),(int3)uVar5)) &
            0xffffffff03ffffff;
    uVar5 = CONCAT35((int3)(uVar6 >> 0x28),CONCAT14((char)(uVar5 >> 0x20),(int)uVar6)) &
            0xffffff03ffffffff;
    uVar6 = CONCAT26((short)(uVar5 >> 0x30),CONCAT15((char)(uVar6 >> 0x28),(int5)uVar5)) &
            0xffff03ffffffffff;
    uStack_18 = CONCAT17((char)(uVar6 >> 0x38),CONCAT16((char)(uVar5 >> 0x30),(int6)uVar6)) &
                0x303ffffffffffff;
    uVar4 = local_24;
    uVar3 = local_28;
  }
  else if (uVar3 == local_24) {
    uStack_18 = 0;
    local_20 = 0;
    uVar4 = uVar3;
  }
  else {
    uStack_18 = *(ulong *)(param_3 + 8);
    local_20 = *(ulong *)param_3;
    uVar4 = local_24;
  }
  FUN_05417c08(uVar3,uVar4,&local_20,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EATextSquish::Compress(unsigned char const*, void*, unsigned int, unsigned int) */

void EATextSquish::Compress(uchar *param_1,void *param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 local_410 [82];
  ClusterFit aCStack_2c8 [704];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ColorSet::ColorSet((ColorSet *)local_410,param_1,param_3,param_4);
  iVar1 = FUN_05417d48(local_410[0]);
  if (iVar1 == 1) {
    SingleColourFit::SingleColourFit((SingleColourFit *)aCStack_2c8,(ColorSet *)local_410);
    SingleColourFit::Compress4((SingleColourFit *)aCStack_2c8,(void *)((long)param_2 + 8));
  }
  else {
    ClusterFit::ClusterFit(aCStack_2c8,(ColorSet *)local_410);
    ClusterFit::Compress4(aCStack_2c8,(void *)((long)param_2 + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

