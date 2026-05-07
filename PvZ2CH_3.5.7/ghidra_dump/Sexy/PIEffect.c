// Class: Sexy::PIEffect


/* Sexy::PIEffect::StaticClassInit() */

void Sexy::PIEffect::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = StaticGetClass();
  uVar2 = ResourceInfoTypes::PIEffectRes::StaticGetClass();
  FUN_053b9abc(lVar1 + 0x48,uVar2);
  return;
}


/* Sexy::PIEffect::StaticGetClass() */

long * Sexy::PIEffect::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"PIEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::PIEffect::GetClass() const */

long * Sexy::PIEffect::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"PIEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::PIEffect::Fail(std::string const&) */

undefined8 __thiscall Sexy::PIEffect::Fail(PIEffect *this,string *param_1)

{
  long lVar1;
  
  lVar1 = FUN_05474184(this + 0x14d8);
  if (lVar1 == 0) {
    thunk_FUN_05475e00(this + 0x14d8,param_1);
  }
  return 0;
}


/* Sexy::PIEffect::GetRandFloat() */

float __thiscall Sexy::PIEffect::GetRandFloat(PIEffect *this)

{
  ulong uVar1;
  
  uVar1 = MTRand::Next((MTRand *)(this + 0x58));
  return (float)(uVar1 % 20000000) * 1e-07 + -1.0;
}


/* Sexy::PIEffect::GetRandFloatU() */

float __thiscall Sexy::PIEffect::GetRandFloatU(PIEffect *this)

{
  ulong uVar1;
  
  uVar1 = MTRand::Next((MTRand *)(this + 0x58));
  return (float)(uVar1 % 10000000) * 1e-07;
}


/* Sexy::PIEffect::GetRandSign() */

undefined4 __thiscall Sexy::PIEffect::GetRandSign(PIEffect *this)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = MTRand::Next((MTRand *)(this + 0x58));
  uVar2 = 0x3f800000;
  if ((uVar1 & 1) != 0) {
    uVar2 = 0xbf800000;
  }
  return uVar2;
}


/* Sexy::PIEffect::GetVariationScalar() */

float __thiscall Sexy::PIEffect::GetVariationScalar(PIEffect *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)GetRandFloat(this);
  fVar2 = (float)GetRandFloat(this);
  return fVar2 * fVar1;
}


/* Sexy::PIEffect::GetVariationScalarU() */

float __thiscall Sexy::PIEffect::GetVariationScalarU(PIEffect *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)GetRandFloatU(this);
  fVar2 = (float)GetRandFloatU(this);
  return fVar2 * fVar1;
}


/* Sexy::PIEffect::WriteByte(char) */

void __thiscall Sexy::PIEffect::WriteByte(PIEffect *this,char param_1)

{
  char local_1;
  
  local_1 = param_1;
  fwrite(&local_1,1,1,*(FILE **)(this + 0x30));
  return;
}


/* Sexy::PIEffect::WriteInt(int) */

void __thiscall Sexy::PIEffect::WriteInt(PIEffect *this,int param_1)

{
  int local_4;
  
  local_4 = param_1;
  fwrite(&local_4,4,1,*(FILE **)(this + 0x30));
  return;
}


/* Sexy::PIEffect::WriteShort(short) */

void __thiscall Sexy::PIEffect::WriteShort(PIEffect *this,short param_1)

{
  short local_2;
  
  local_2 = param_1;
  fwrite(&local_2,2,1,*(FILE **)(this + 0x30));
  return;
}


/* Sexy::PIEffect::WriteFloat(float) */

void __thiscall Sexy::PIEffect::WriteFloat(PIEffect *this,float param_1)

{
  float local_4;
  
  local_4 = param_1;
  fwrite(&local_4,4,1,*(FILE **)(this + 0x30));
  return;
}


/* Sexy::PIEffect::WriteBool(bool) */

void __thiscall Sexy::PIEffect::WriteBool(PIEffect *this,bool param_1)

{
  undefined1 uStack_1;
  
  uStack_1 = param_1;
  fwrite(&uStack_1,1,1,*(FILE **)(this + 0x30));
  return;
}


/* Sexy::PIEffect::WriteString(std::string const&) */

void __thiscall Sexy::PIEffect::WriteString(PIEffect *this,string *param_1)

{
  char cVar1;
  size_t __n;
  void *__ptr;
  
  cVar1 = FUN_05474184(param_1);
  WriteByte(this,cVar1);
  __n = FUN_05474184(param_1);
  if (__n == 0) {
    return;
  }
  __ptr = (void *)FUN_0547429c(param_1);
  fwrite(__ptr,1,__n,*(FILE **)(this + 0x30));
  return;
}


/* Sexy::PIEffect::WriteValue2D(Sexy::PIValue2D*) */

void __thiscall Sexy::PIEffect::WriteValue2D(PIEffect *this,PIValue2D *param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  iVar3 = FUN_053b9b80(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  sVar1 = (short)iVar3;
  if (iVar3 < 2) {
    WriteShort(this,sVar1);
    bVar2 = false;
    if (iVar3 < 1) {
      return;
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x30);
    if (lVar7 == 0) {
      WriteShort(this,sVar1);
    }
    else {
      WriteShort(this,sVar1);
    }
    bVar2 = lVar7 != 0;
    WriteBool(this,bVar2);
  }
  lVar7 = 0;
  uVar5 = 0;
  do {
    uVar6 = -(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
    pfVar4 = (float *)FUN_053b9b94(*(undefined8 *)param_1,lVar7);
    WriteInt(this,(int)*pfVar4);
    WriteFloat(this,pfVar4[1]);
    WriteFloat(this,pfVar4[2]);
    if (bVar2) {
      if (lVar7 == 0) {
        WriteFloat(this,0.0);
        WriteFloat(this,0.0);
      }
      else {
        uVar5 = (ulong)((int)uVar5 + 1);
        WriteFloat(this,*(float *)(*(long *)(param_1 + 0x30) + uVar6) - pfVar4[1]);
        WriteFloat(this,*(float *)(*(long *)(param_1 + 0x30) + uVar6 + 4) - pfVar4[2]);
      }
      uVar6 = -(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
      if ((int)lVar7 == iVar3 + -1) {
        WriteFloat(this,0.0);
        WriteFloat(this,0.0);
      }
      else {
        WriteFloat(this,*(float *)(*(long *)(param_1 + 0x30) + uVar6) - pfVar4[1]);
        WriteFloat(this,*(float *)(*(long *)(param_1 + 0x30) + uVar6 + 4) - pfVar4[2]);
      }
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    lVar7 = lVar7 + 1;
  } while ((int)lVar7 < iVar3);
  return;
}


/* Sexy::PIEffect::WriteEPoint(Sexy::PIValue2D*) */

void __thiscall Sexy::PIEffect::WriteEPoint(PIEffect *this,PIValue2D *param_1)

{
  short sVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  undefined8 uVar5;
  
  sVar1 = FUN_053b9b80(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  WriteShort(this,sVar1);
  lVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    iVar2 = FUN_053b9b80(uVar5,*(undefined8 *)(param_1 + 8));
    if (iVar2 <= (int)lVar4) break;
    pfVar3 = (float *)FUN_053b9b94(uVar5,lVar4);
    WriteInt(this,(int)*pfVar3);
    WriteFloat(this,pfVar3[1]);
    WriteFloat(this,pfVar3[2]);
    lVar4 = lVar4 + 1;
  }
  return;
}


/* Sexy::PIEffect::SaveParticleDefInstance(Sexy::Buffer&, Sexy::PIParticleDefInstance*) */

void __thiscall
Sexy::PIEffect::SaveParticleDefInstance
          (PIEffect *this,Buffer *param_1,PIParticleDefInstance *param_2)

{
  Buffer::WriteFloat(param_1,*(float *)param_2);
  Buffer::WriteFloat(param_1,*(float *)(param_2 + 4));
  Buffer::WriteInt32(param_1,*(int *)(param_2 + 8));
  Buffer::WriteInt32(param_1,*(int *)(param_2 + 0xc));
  return;
}


/* Sexy::PIEffect::LoadParticleDefInstance(Sexy::Buffer const&, Sexy::PIParticleDefInstance*) */

void __thiscall
Sexy::PIEffect::LoadParticleDefInstance
          (PIEffect *this,Buffer *param_1,PIParticleDefInstance *param_2)

{
  undefined4 uVar1;
  
  uVar1 = Buffer::ReadFloat(param_1);
  *(undefined4 *)param_2 = uVar1;
  uVar1 = Buffer::ReadFloat(param_1);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = Buffer::ReadInt32(param_1);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = Buffer::ReadInt32(param_1);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::LoadParticle(Sexy::Buffer const&, Sexy::PILayer*, Sexy::PIParticleInstance*) */

void __thiscall
Sexy::PIEffect::LoadParticle
          (PIEffect *this,Buffer *param_1,PILayer *param_2,PIParticleInstance *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_10;
  
  lVar4 = ___stack_chk_guard;
  uVar10 = Buffer::ReadFloat(param_1);
  *(undefined4 *)(param_3 + 100) = uVar10;
  uVar10 = Buffer::ReadFloat(param_1);
  *(undefined4 *)(param_3 + 0x68) = uVar10;
  uVar10 = Buffer::ReadFloat(param_1);
  *(undefined4 *)(param_3 + 0x6c) = uVar10;
  uVar10 = Buffer::ReadFloat(param_1);
  *(undefined4 *)(param_3 + 0xb0) = uVar10;
  Buffer::ReadFPoint();
  *(undefined8 *)(param_3 + 0x18) = local_10;
  Buffer::ReadFPoint();
  *(undefined8 *)(param_3 + 0x20) = local_10;
  Buffer::ReadFPoint();
  fVar11 = *(float *)(this + 0x1540);
  fVar12 = *(float *)(this + 0x15bc);
  *(undefined8 *)(param_3 + 0xa0) = local_10;
  *(undefined4 *)(param_3 + 0x74) = 0;
  *(int *)(param_3 + 0x30) = (int)(*(float *)(param_3 + 0x6c) * 2.1474836e+09);
  *(int *)(param_3 + 0x34) =
       (int)(2.1474836e+09 / ((1000.0 / (fVar11 * fVar12)) * *(float *)(param_3 + 0x68)));
  if ((*(long *)(param_3 + 8) != 0) && (*(char *)(*(long *)(param_3 + 8) + 0xc84) != '\0')) {
    Buffer::ReadFPoint();
    *(undefined8 *)(param_3 + 0x98) = local_10;
    uVar10 = Buffer::ReadFloat(param_1);
    *(undefined4 *)(param_3 + 0xc0) = uVar10;
  }
  uVar10 = Buffer::ReadFloat(param_1);
  *(undefined4 *)(param_3 + 0x28) = uVar10;
  sVar5 = Buffer::ReadInt16(param_1);
  uVar7 = (uint)sVar5;
  if ((uVar7 & 1) == 0) {
    *(undefined4 *)(param_3 + 0x38) = 0;
  }
  else {
    uVar10 = Buffer::ReadFloat(param_1);
    *(undefined4 *)(param_3 + 0x38) = uVar10;
  }
  if ((uVar7 >> 1 & 1) == 0) {
    *(undefined4 *)(param_3 + 0x3c) = 0;
  }
  else {
    uVar10 = Buffer::ReadFloat(param_1);
    *(undefined4 *)(param_3 + 0x3c) = uVar10;
  }
  if ((uVar7 >> 2 & 1) == 0) {
    *(undefined4 *)(param_3 + 0x40) = 0;
  }
  else {
    uVar10 = Buffer::ReadFloat(param_1);
    *(undefined4 *)(param_3 + 0x40) = uVar10;
  }
  if ((uVar7 >> 3 & 1) == 0) {
    *(undefined4 *)(param_3 + 0x44) = 0;
  }
  else {
    uVar10 = Buffer::ReadFloat(param_1);
    *(undefined4 *)(param_3 + 0x44) = uVar10;
  }
  if ((uVar7 >> 4 & 1) == 0) {
    *(undefined4 *)(param_3 + 0x48) = 0;
  }
  else {
    uVar10 = Buffer::ReadFloat(param_1);
    *(undefined4 *)(param_3 + 0x48) = uVar10;
  }
  if ((uVar7 >> 5 & 1) == 0) {
    *(undefined4 *)(param_3 + 0x4c) = 0;
  }
  else {
    uVar10 = Buffer::ReadFloat(param_1);
    *(undefined4 *)(param_3 + 0x4c) = uVar10;
  }
  if ((uVar7 >> 6 & 1) == 0) {
    *(undefined4 *)(param_3 + 0x50) = 0;
  }
  else {
    uVar10 = Buffer::ReadFloat(param_1);
    *(undefined4 *)(param_3 + 0x50) = uVar10;
  }
  if ((uVar7 >> 7 & 1) == 0) {
    *(undefined4 *)(param_3 + 0x54) = 0;
  }
  else {
    uVar10 = Buffer::ReadFloat(param_1);
    *(undefined4 *)(param_3 + 0x54) = uVar10;
  }
  if ((uVar7 >> 8 & 1) == 0) {
    *(undefined4 *)(param_3 + 0x58) = 0;
  }
  else {
    uVar10 = Buffer::ReadFloat(param_1);
    *(undefined4 *)(param_3 + 0x58) = uVar10;
  }
  uVar10 = Buffer::ReadFloat(param_1);
  *(undefined4 *)(param_3 + 0xb4) = uVar10;
  uVar10 = Buffer::ReadFloat(param_1);
  lVar9 = *(long *)(param_3 + 8);
  *(undefined4 *)(param_3 + 0x60) = 0;
  *(undefined4 *)(param_3 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_3 + 0xb8) = uVar10;
  if (lVar9 == 0) {
LAB_053bbaa0:
    lVar9 = FUN_053b9cb4(*(undefined8 *)(*(long *)param_2 + 0x20),
                         *(undefined8 *)(*(long *)param_2 + 0x28));
    if (lVar9 != 0) goto LAB_053bb980;
  }
  else {
    if (*(char *)(lVar9 + 0xca0) != '\0') {
      uVar10 = Buffer::ReadFloat(param_1);
      lVar9 = *(long *)(param_3 + 8);
      *(undefined4 *)(param_3 + 0xbc) = uVar10;
      *(uint *)(param_3 + 0x5c) = *(uint *)(param_3 + 0x5c) & 0xff000000;
      if (lVar9 == 0) goto LAB_053bbaa0;
    }
    if (*(char *)(lVar9 + 0xca1) != '\0') {
      iVar2 = 0;
      if (*(int *)(lVar9 + 0xca8) != 0) {
        iVar2 = *(int *)(param_3 + 0x80) / *(int *)(lVar9 + 0xca8);
      }
      iVar6 = FUN_053b9b6c(*(undefined8 *)(lVar9 + 0xcc8),*(undefined8 *)(lVar9 + 0xcd0));
      iVar3 = 0;
      if (iVar6 != 0) {
        iVar3 = iVar2 / iVar6;
      }
      uVar7 = PIInterpolator::GetKeyframeNum
                        ((PIInterpolator *)(lVar9 + 0xcc8),iVar2 - iVar3 * iVar6);
      lVar9 = *(long *)(param_3 + 8);
      *(uint *)(param_3 + 0x60) = *(uint *)(param_3 + 0x60) | uVar7 & 0xffffff;
      *(uint *)(param_3 + 0x5c) = *(uint *)(param_3 + 0x5c) & 0xff000000;
      if (lVar9 == 0) goto LAB_053bbaa0;
    }
    if (*(char *)(lVar9 + 0xc8c) == '\0') {
      lVar8 = FUN_053b9cb4(*(undefined8 *)(*(long *)param_2 + 0x20),
                           *(undefined8 *)(*(long *)param_2 + 0x28));
      if (lVar8 != 0) {
LAB_053bb980:
        uVar10 = Buffer::ReadFloat(param_1);
        *(undefined4 *)(param_3 + 0xec) = uVar10;
        goto LAB_053bb98c;
      }
      cVar1 = *(char *)(lVar9 + 0xc8c);
    }
    else {
      sVar5 = Buffer::ReadInt16(param_1);
      lVar9 = *(long *)param_2;
      *(int *)(param_3 + 0xc4) = (int)sVar5;
      lVar9 = FUN_053b9cb4(*(undefined8 *)(lVar9 + 0x20),*(undefined8 *)(lVar9 + 0x28));
      if (lVar9 != 0) goto LAB_053bb980;
LAB_053bb98c:
      if (*(long *)(param_3 + 8) == 0) goto LAB_053bb92c;
      cVar1 = *(char *)(*(long *)(param_3 + 8) + 0xc8c);
    }
    if (cVar1 != '\0') {
      uVar7 = MTRand::Next((MTRand *)(this + 0x58));
      *(uint *)(param_3 + 0xc4) = uVar7 & 0x7fff;
      goto LAB_053bb930;
    }
  }
LAB_053bb92c:
  *(undefined4 *)(param_3 + 0xc4) = 0;
LAB_053bb930:
  if (lVar4 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PIEffect::DetermineGroupFlags() */

void __thiscall Sexy::PIEffect::DetermineGroupFlags(PIEffect *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  int *piVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  int iVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  
  lVar28 = *(long *)(this + 0x14b8);
  lVar32 = 0;
  uVar13 = *(undefined8 *)(lVar28 + 0x38);
  iVar9 = FUN_053b9ba0(uVar13,*(undefined8 *)(lVar28 + 0x40));
  if (0 < iVar9) {
    do {
      lVar31 = 0;
      lVar14 = FUN_053b9bc8(uVar13,lVar32);
      plVar15 = (long *)FUN_053b9bd4(*(undefined8 *)(this + 0x14c0),lVar32);
      lVar16 = plVar15[1];
      iVar10 = FUN_053b9b14(lVar16,plVar15[2]);
      if (0 < iVar10) {
        do {
          lVar17 = FUN_053b9c24(*(undefined8 *)(lVar14 + 8),lVar31);
          lVar18 = FUN_053b9b34(lVar16,lVar31);
          bVar1 = *(byte *)(lVar17 + 0x20);
          if (bVar1 == 0) {
            plVar21 = (long *)FUN_053b9af8(*(undefined8 *)(lVar28 + 8),(long)*(int *)(lVar17 + 0xc))
            ;
            uVar19 = *(undefined8 *)(*plVar21 + 0x1268);
            iVar11 = FUN_053b9c30(uVar19,*(undefined8 *)(*plVar21 + 0x1270));
            lVar17 = 0;
            while ((int)lVar17 < iVar11) {
              lVar29 = FUN_053b9ca4(uVar19,lVar17);
              lVar23 = *plVar15;
              uVar22 = *(undefined8 *)(lVar23 + 0x58);
              uVar27 = *(undefined8 *)(lVar23 + 0x50);
              *(byte *)(lVar18 + 0xae) =
                   *(byte *)(lVar29 + 0xca3) | *(byte *)(lVar18 + 0xae) | *(byte *)(lVar29 + 0xca5);
              lVar24 = FUN_053b9d1c(uVar27,uVar22);
              bVar7 = true;
              if (lVar24 == 0) {
                lVar24 = FUN_053b9cb4(*(undefined8 *)(lVar23 + 0x20),*(undefined8 *)(lVar23 + 0x28))
                ;
                bVar7 = lVar24 != 0;
              }
              bVar1 = *(byte *)(lVar29 + 0xc81);
              bVar6 = *(byte *)(lVar29 + 0xc83);
              bVar2 = *(byte *)(lVar29 + 0xc82);
              *(byte *)(lVar18 + 0xb0) = *(byte *)(lVar29 + 0xcaf) | *(byte *)(lVar18 + 0xb0);
              bVar3 = *(byte *)(lVar29 + 0xc84);
              *(byte *)(lVar18 + 0xb1) = bVar1 | *(byte *)(lVar18 + 0xb1);
              *(byte *)(lVar18 + 0xb2) = bVar6 | *(byte *)(lVar18 + 0xb2);
              *(byte *)(lVar18 + 0xb3) = bVar2 | *(byte *)(lVar18 + 0xb3);
              iVar12 = *(int *)(lVar29 + 0x18);
              uVar27 = *(undefined8 *)(lVar28 + 0x20);
              *(byte *)(lVar18 + 0xaf) = bVar7 | *(byte *)(lVar18 + 0xaf);
              *(byte *)(lVar18 + 0xb4) = bVar3 | *(byte *)(lVar18 + 0xb4);
              plVar21 = (long *)FUN_053b9b0c(uVar27,(long)iVar12);
              uVar8 = *(undefined1 *)(lVar18 + 0xb5);
              if ((*(int *)(lVar29 + 0xc88) != -1) && (1 < *(int *)(*plVar21 + 0x40))) {
                uVar8 = 1;
              }
              *(undefined1 *)(lVar18 + 0xb5) = uVar8;
              lVar17 = lVar17 + 1;
            }
          }
          else {
            uVar19 = *(undefined8 *)(lVar17 + 0x28);
            lVar29 = 0;
            iVar11 = FUN_053b9d08(uVar19,*(undefined8 *)(lVar17 + 0x30));
            if (0 < iVar11) {
              do {
                piVar20 = (int *)FUN_053b9d00(uVar19,lVar29);
                plVar21 = (long *)FUN_053b9af8(*(undefined8 *)(lVar28 + 8),(long)*piVar20);
                uVar27 = *(undefined8 *)(*plVar21 + 0x1268);
                iVar12 = FUN_053b9c30(uVar27,*(undefined8 *)(*plVar21 + 0x1270));
                lVar17 = 0;
                lVar24 = 1;
                if (0 < iVar12) {
                  do {
                    lVar17 = FUN_053b9ca4(uVar27,lVar17);
                    lVar30 = *plVar15;
                    uVar25 = *(undefined8 *)(lVar30 + 0x58);
                    uVar22 = *(undefined8 *)(lVar30 + 0x50);
                    *(byte *)(lVar18 + 0xae) =
                         *(byte *)(lVar17 + 0xca3) | *(byte *)(lVar18 + 0xae) |
                         *(byte *)(lVar17 + 0xca5);
                    lVar23 = FUN_053b9d1c(uVar22,uVar25);
                    bVar6 = bVar1;
                    if (lVar23 == 0) {
                      lVar23 = FUN_053b9cb4(*(undefined8 *)(lVar30 + 0x20),
                                            *(undefined8 *)(lVar30 + 0x28));
                      bVar6 = lVar23 != 0;
                    }
                    bVar2 = *(byte *)(lVar17 + 0xc81);
                    bVar3 = *(byte *)(lVar17 + 0xc83);
                    bVar4 = *(byte *)(lVar17 + 0xc82);
                    *(byte *)(lVar18 + 0xb0) = *(byte *)(lVar17 + 0xcaf) | *(byte *)(lVar18 + 0xb0);
                    bVar5 = *(byte *)(lVar17 + 0xc84);
                    *(byte *)(lVar18 + 0xb1) = bVar2 | *(byte *)(lVar18 + 0xb1);
                    *(byte *)(lVar18 + 0xb2) = bVar3 | *(byte *)(lVar18 + 0xb2);
                    *(byte *)(lVar18 + 0xb3) = bVar4 | *(byte *)(lVar18 + 0xb3);
                    iVar26 = *(int *)(lVar17 + 0x18);
                    uVar22 = *(undefined8 *)(lVar28 + 0x20);
                    *(byte *)(lVar18 + 0xaf) = bVar6 | *(byte *)(lVar18 + 0xaf);
                    *(byte *)(lVar18 + 0xb4) = bVar5 | *(byte *)(lVar18 + 0xb4);
                    plVar21 = (long *)FUN_053b9b0c(uVar22,(long)iVar26);
                    bVar6 = *(byte *)(lVar18 + 0xb5);
                    if ((*(int *)(lVar17 + 0xc88) != -1) && (1 < *(int *)(*plVar21 + 0x40))) {
                      bVar6 = bVar1;
                    }
                    *(byte *)(lVar18 + 0xb5) = bVar6;
                    iVar26 = (int)lVar24;
                    lVar17 = lVar24;
                    lVar24 = lVar24 + 1;
                  } while (iVar26 < iVar12);
                }
                lVar29 = lVar29 + 1;
              } while ((int)lVar29 < iVar11);
            }
          }
          lVar31 = lVar31 + 1;
        } while ((int)lVar31 < iVar10);
      }
      lVar32 = lVar32 + 1;
    } while ((int)lVar32 < iVar9);
  }
  return;
}


/* Sexy::PIEffect::GetLayer(int) */

undefined8 __thiscall Sexy::PIEffect::GetLayer(PIEffect *this,int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_053b9ba0(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x38),
                       *(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
  if (param_1 < iVar1) {
    uVar2 = FUN_053b9bd4(*(undefined8 *)(this + 0x14c0),(long)param_1);
    return uVar2;
  }
  return 0;
}


/* Sexy::PIEffect::GetLayer(std::string const&) */

undefined8 __thiscall Sexy::PIEffect::GetLayer(PIEffect *this,string *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *__s1;
  char *__s2;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
  iVar1 = FUN_053b9ba0(uVar5,*(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
  lVar3 = 0;
  while( true ) {
    lVar4 = lVar3;
    if (iVar1 <= (int)lVar4) {
      return 0;
    }
    lVar3 = FUN_05474184(param_1);
    if (lVar3 == 0) break;
    FUN_053b9bc8(uVar5,lVar4);
    __s1 = (char *)FUN_0547429c();
    __s2 = (char *)FUN_0547429c(param_1);
    iVar2 = strcasecmp(__s1,__s2);
    lVar3 = lVar4 + 1;
    if (iVar2 == 0) {
      uVar5 = FUN_053b9bd4(*(undefined8 *)(this + 0x14c0),lVar4);
      return uVar5;
    }
  }
  uVar5 = FUN_053b9bd4(*(undefined8 *)(this + 0x14c0),(long)(int)lVar4);
  return uVar5;
}


/* Sexy::PIEffect::CountParticles(Sexy::PIParticleInstance*) */

int __thiscall Sexy::PIEffect::CountParticles(PIEffect *this,PIParticleInstance *param_1)

{
  int iVar1;
  
  if (param_1 != (PIParticleInstance *)0x0) {
    iVar1 = 0;
    do {
      param_1 = *(PIParticleInstance **)param_1;
      iVar1 = iVar1 + 1;
    } while (param_1 != (PIParticleInstance *)0x0);
    return iVar1;
  }
  return 0;
}


/* Sexy::PIEffect::HasTimelineExpired() */

bool __thiscall Sexy::PIEffect::HasTimelineExpired(PIEffect *this)

{
  return (float)*(int *)(this + 0x1478) <= *(float *)(this + 0x14e8);
}


/* Sexy::PIEffect::IsActive() */

char __thiscall Sexy::PIEffect::IsActive(PIEffect *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  
  uVar7 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
  lVar9 = 0;
  iVar2 = FUN_053b9ba0(uVar7,*(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
  do {
    if (iVar2 <= (int)lVar9) {
      return '\0';
    }
    lVar3 = FUN_053b9bc8(uVar7,lVar9);
    lVar4 = FUN_053b9bd4(*(undefined8 *)(this + 0x14c0),lVar9);
    if (*(char *)(lVar4 + 0x2c) != '\0') {
      uVar7 = *(undefined8 *)(lVar4 + 8);
      lVar8 = 0;
      iVar2 = FUN_053b9b14(uVar7,*(undefined8 *)(lVar4 + 0x10));
      while (lVar6 = lVar8, (int)lVar8 < iVar2) {
        while( true ) {
          lVar5 = FUN_053b9c24(*(undefined8 *)(lVar3 + 8),lVar6);
          lVar8 = lVar6 + 1;
          lVar6 = FUN_053b9b34(uVar7,lVar6);
          cVar1 = *(char *)(lVar6 + 0x120);
          if (cVar1 == '\0') break;
          fVar10 = (float)PIValue::GetNextKeyframeTime
                                    ((PIValue *)(lVar5 + 0x658),*(float *)(this + 0x14e8));
          if (*(float *)(this + 0x14e8) <= fVar10) {
            return cVar1;
          }
          if (*(char *)(lVar6 + 0x41) != '\0') {
            return *(char *)(lVar6 + 0x41);
          }
          if (*(long *)(lVar6 + 0x60) != 0) {
            return cVar1;
          }
          if (*(long *)(lVar6 + 0x98) != 0) {
            return cVar1;
          }
          uVar7 = *(undefined8 *)(lVar4 + 8);
          iVar2 = FUN_053b9b14(uVar7,*(undefined8 *)(lVar4 + 0x10));
          lVar6 = lVar8;
          if (iVar2 <= (int)lVar8) goto LAB_053bc12c;
        }
      }
LAB_053bc12c:
      uVar7 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
      iVar2 = FUN_053b9ba0(uVar7,*(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
    }
    lVar9 = lVar9 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::CheckCache() */

void __thiscall Sexy::PIEffect::CheckCache(PIEffect *this)

{
  undefined4 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  GetAppFullPath((Sexy *)(this + 0x48),___stack_chk_guard);
  std::string::string(asStack_10,"PIEffect0");
  uVar1 = FUN_053b9ad4();
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::SetCacheUpToDate() */

void __thiscall Sexy::PIEffect::SetCacheUpToDate(PIEffect *this)

{
  undefined4 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  GetAppFullPath((Sexy *)(this + 0x48),___stack_chk_guard);
  std::string::string(asStack_10,"PIEffect0");
  uVar1 = FUN_053b9adc();
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::WriteToCache() */

void __thiscall Sexy::PIEffect::WriteToCache(PIEffect *this)

{
  Sexy *this_00;
  char cVar1;
  long lVar2;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_053b9acc();
  if (cVar1 != '\0') {
    this_00 = (Sexy *)(this + 0x48);
    GetAppFullPath(this_00,extraout_x1);
    std::string::string(asStack_10,"PIEffect0");
    lVar2 = FUN_053b9ae4();
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    if (lVar2 != 0) {
      GetAppFullPath(this_00,extraout_x1_00);
      std::string::string(asStack_10,"PIEffect0");
      GetAppFullPath(this_00,extraout_x1_01);
      std::string::~string(asStack_18);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::SaveParticle(Sexy::Buffer&, Sexy::PILayer*, Sexy::PIParticleInstance*) */

void __thiscall
Sexy::PIEffect::SaveParticle
          (PIEffect *this,Buffer *param_1,PILayer *param_2,PIParticleInstance *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  FPoint aFStack_10 [8];
  long local_8;
  
  fVar4 = (float)*(int *)(param_3 + 0x30) * 4.656613e-10 * *(float *)(param_3 + 0x68);
  local_8 = ___stack_chk_guard;
  *(float *)(param_3 + 0x6c) = (float)*(int *)(param_3 + 0x30) * 4.656613e-10;
  *(float *)(param_3 + 100) = fVar4;
  Buffer::WriteFloat(param_1,fVar4);
  Buffer::WriteFloat(param_1,*(float *)(param_3 + 0x68));
  Buffer::WriteFloat(param_1,*(float *)(param_3 + 0x6c));
  Buffer::WriteFloat(param_1,*(float *)(param_3 + 0xb0));
  FPoint::FPoint(aFStack_10,(TPoint *)(param_3 + 0x18));
  Buffer::WriteFPoint(param_1,aFStack_10);
  FPoint::FPoint(aFStack_10,(TPoint *)(param_3 + 0x20));
  Buffer::WriteFPoint(param_1,aFStack_10);
  FPoint::FPoint(aFStack_10,(TPoint *)(param_3 + 0xa0));
  Buffer::WriteFPoint(param_1,aFStack_10);
  if ((*(long *)(param_3 + 8) != 0) && (*(char *)(*(long *)(param_3 + 8) + 0xc84) != '\0')) {
    FPoint::FPoint(aFStack_10,(TPoint *)(param_3 + 0x98));
    Buffer::WriteFPoint(param_1,aFStack_10);
    Buffer::WriteFloat(param_1,*(float *)(param_3 + 0xc0));
  }
  Buffer::WriteFloat(param_1,*(float *)(param_3 + 0x28));
  uVar1 = (uint)(1e-05 <= ABS(*(float *)(param_3 + 0x38)));
  if (1e-05 <= ABS(*(float *)(param_3 + 0x3c))) {
    uVar1 = 1e-05 <= ABS(*(float *)(param_3 + 0x38)) | 2;
  }
  if (1e-05 <= ABS(*(float *)(param_3 + 0x40))) {
    uVar1 = uVar1 | 4;
  }
  if (1e-05 <= ABS(*(float *)(param_3 + 0x44))) {
    uVar1 = uVar1 | 8;
  }
  if (1e-05 <= ABS(*(float *)(param_3 + 0x48))) {
    uVar1 = uVar1 | 0x10;
  }
  if (1e-05 <= ABS(*(float *)(param_3 + 0x4c))) {
    uVar1 = uVar1 | 0x20;
  }
  if (1e-05 <= ABS(*(float *)(param_3 + 0x50))) {
    uVar1 = uVar1 | 0x40;
  }
  if (1e-05 <= ABS(*(float *)(param_3 + 0x54))) {
    uVar1 = uVar1 | 0x80;
  }
  uVar2 = uVar1 | 0x100;
  if (ABS(*(float *)(param_3 + 0x58)) < 1e-05) {
    uVar2 = uVar1;
  }
  Buffer::WriteInt16(param_1,(short)uVar2);
  if ((uVar2 & 1) != 0) {
    Buffer::WriteFloat(param_1,*(float *)(param_3 + 0x38));
  }
  if ((uVar2 >> 1 & 1) != 0) {
    Buffer::WriteFloat(param_1,*(float *)(param_3 + 0x3c));
  }
  if ((uVar2 >> 2 & 1) != 0) {
    Buffer::WriteFloat(param_1,*(float *)(param_3 + 0x40));
  }
  if ((uVar2 >> 3 & 1) != 0) {
    Buffer::WriteFloat(param_1,*(float *)(param_3 + 0x44));
  }
  if ((uVar2 >> 4 & 1) != 0) {
    Buffer::WriteFloat(param_1,*(float *)(param_3 + 0x48));
  }
  if ((uVar2 >> 5 & 1) != 0) {
    Buffer::WriteFloat(param_1,*(float *)(param_3 + 0x4c));
  }
  if ((uVar2 >> 6 & 1) != 0) {
    Buffer::WriteFloat(param_1,*(float *)(param_3 + 0x50));
  }
  if ((uVar2 >> 7 & 1) != 0) {
    Buffer::WriteFloat(param_1,*(float *)(param_3 + 0x54));
  }
  if ((int)uVar2 >> 8 != 0) {
    Buffer::WriteFloat(param_1,*(float *)(param_3 + 0x58));
  }
  Buffer::WriteFloat(param_1,*(float *)(param_3 + 0xb4));
  Buffer::WriteFloat(param_1,*(float *)(param_3 + 0xb8));
  lVar3 = *(long *)(param_3 + 8);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0xca0) != '\0') {
      Buffer::WriteFloat(param_1,*(float *)(param_3 + 0xbc));
      lVar3 = *(long *)(param_3 + 8);
      if (lVar3 == 0) goto LAB_053bca28;
    }
    if (*(char *)(lVar3 + 0xc8c) != '\0') {
      Buffer::WriteInt16(param_1,*(short *)(param_3 + 0xc4));
    }
  }
LAB_053bca28:
  lVar3 = FUN_053b9cb4(*(undefined8 *)(*(long *)param_2 + 0x20),
                       *(undefined8 *)(*(long *)param_2 + 0x28));
  if (lVar3 != 0) {
    Buffer::WriteFloat(param_1,*(float *)(param_3 + 0xec));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::PIEffect::ReadString() */

void Sexy::PIEffect::ReadString(void)

{
  char cVar1;
  long in_x0;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_053bcc2c(in_x0,in_x0 + 0x1420,1);
  cVar1 = *pcVar2;
  Set8BytesTo0();
  FUN_05475c48();
  if (cVar1 != '\0') {
    FUN_05474ee8();
    FUN_053bcc2c();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::WriteValue(Sexy::PIValue*) */

void __thiscall Sexy::PIEffect::WriteValue(PIEffect *this,PIValue *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  float *pfVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  float fVar13;
  int local_14;
  float local_10;
  float local_c;
  long local_8;
  
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_053b9b4c(uVar9,*(undefined8 *)(param_1 + 0x20));
  iVar3 = (int)lVar5;
  local_14 = iVar3;
  if ((iVar3 < 2) || (*(long *)(param_1 + 0x48) == 0)) {
    local_10 = 9.80909e-45;
    bVar2 = false;
    pbVar6 = (byte *)eastl::min_alt<int>(&local_14,(int *)&local_10);
    bVar11 = *pbVar6;
  }
  else {
    local_10 = 9.80909e-45;
    bVar2 = true;
    pbVar6 = (byte *)eastl::min_alt<int>(&local_14,(int *)&local_10);
    bVar11 = *pbVar6 | 8;
  }
  if (lVar5 != 0) {
    pfVar7 = (float *)FUN_053b9b44(uVar9,0);
    fVar13 = pfVar7[1];
    bVar1 = bVar11 | 0x10;
    if (*pfVar7 != 0.0) {
      bVar1 = bVar11;
    }
    if (fVar13 == 0.0) {
      bVar11 = bVar1 | 0x20;
      WriteByte(this,bVar11);
      goto joined_r0x053bd094;
    }
    if (fVar13 == 1.0) {
      bVar11 = bVar1 | 0x40;
    }
    else {
      bVar11 = bVar1 | 0x60;
      if (fVar13 != 2.0) {
        bVar11 = bVar1;
      }
    }
  }
  WriteByte(this,bVar11);
joined_r0x053bd094:
  if (6 < iVar3) {
    WriteShort(this,(short)lVar5);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = 0;
  uVar12 = 0;
  iVar3 = FUN_053b9b4c(uVar9,*(undefined8 *)(param_1 + 0x20));
  uVar10 = 0;
  if (0 < iVar3) {
    do {
      pfVar7 = (float *)FUN_053b9b44(uVar9,uVar8);
      iVar3 = (int)uVar10;
      if ((int)uVar8 == 0) {
        if ((bVar11 & 0x10) == 0) {
          WriteFloat(this,*pfVar7);
        }
        if ((bVar11 & 0x60) == 0) goto LAB_053bcf64;
        if (bVar2) {
          DVec2::DVec2((DVec2 *)&local_10,*pfVar7,pfVar7[1]);
LAB_053bd030:
          WriteFloat(this,0.0);
          WriteFloat(this,0.0);
          iVar4 = FUN_053b9b4c(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
          if (iVar3 != iVar4 + -1) goto LAB_053bcfdc;
LAB_053bd060:
          iVar3 = (int)uVar12;
          WriteFloat(this,0.0);
          WriteFloat(this,0.0);
          goto LAB_053bd018;
        }
      }
      else {
        WriteFloat(this,*pfVar7);
LAB_053bcf64:
        WriteFloat(this,pfVar7[1]);
        if (bVar2) {
          DVec2::DVec2((DVec2 *)&local_10,*pfVar7,pfVar7[1]);
          if (iVar3 == 0) goto LAB_053bd030;
          uVar10 = -(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
          uVar12 = (ulong)((int)uVar12 + 1);
          WriteFloat(this,*(float *)(*(long *)(param_1 + 0x48) + uVar10) - local_10);
          WriteFloat(this,*(float *)(*(long *)(param_1 + 0x48) + uVar10 + 4) - local_c);
          iVar4 = FUN_053b9b4c(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
          if (iVar3 == iVar4 + -1) goto LAB_053bd060;
LAB_053bcfdc:
          uVar10 = -(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
          iVar3 = (int)uVar12;
          WriteFloat(this,*(float *)(*(long *)(param_1 + 0x48) + uVar10) - local_10);
          WriteFloat(this,*(float *)(*(long *)(param_1 + 0x48) + uVar10 + 4) - local_c);
LAB_053bd018:
          uVar12 = (ulong)(iVar3 + 1);
        }
      }
      uVar8 = uVar8 + 1;
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      uVar10 = uVar8 & 0xffffffff;
      iVar3 = FUN_053b9b4c(uVar9,*(undefined8 *)(param_1 + 0x20));
    } while ((int)uVar8 < iVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::PIEffect::WriteEmitterType(Sexy::PIEmitter*) */

void __thiscall Sexy::PIEffect::WriteEmitterType(PIEffect *this,PIEmitter *param_1)

{
  PIValue *pPVar1;
  PIEmitter *pPVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  PIValue *pPVar9;
  PIEmitter *pPVar10;
  long lVar11;
  
  WriteInt(this,0);
  lVar11 = 0;
  WriteString(this,(string *)param_1);
  WriteBool(this,(bool)param_1[0x1280]);
  WriteInt(this,0);
  WriteBool(this,(bool)param_1[0x1281]);
  sVar3 = FUN_053b9c30(*(undefined8 *)(param_1 + 0x1268),*(undefined8 *)(param_1 + 0x1270));
  WriteShort(this,sVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x1268);
  lVar5 = FUN_053b9c30(uVar8,*(undefined8 *)(param_1 + 0x1270));
  if (0 < (int)lVar5) {
    do {
      lVar7 = lVar11;
      if (param_1[0x1281] != (PIEmitter)0x0) {
        lVar7 = (lVar5 + -1) - lVar11;
      }
      lVar7 = FUN_053b9ca4(uVar8,lVar7);
      WriteInt(this,0);
      WriteInt(this,0);
      WriteInt(this,0);
      WriteFloat(this,0.0);
      WriteInt(this,0);
      WriteInt(this,0);
      WriteInt(this,0);
      WriteInt(this,1);
      WriteInt(this,0);
      WriteInt(this,0);
      WriteInt(this,0);
      WriteInt(this,2);
      WriteInt(this,0);
      WriteInt(this,0);
      WriteInt(this,0);
      WriteInt(this,3);
      WriteBool(this,*(bool *)(lVar7 + 0xc81));
      WriteBool(this,*(bool *)(lVar7 + 0xc82));
      WriteBool(this,*(bool *)(lVar7 + 0xc83));
      WriteBool(this,*(bool *)(lVar7 + 0xc84));
      WriteFloat(this,*(float *)(lVar7 + 0xc90));
      WriteBool(this,*(bool *)(lVar7 + 0xc94));
      WriteBool(this,*(bool *)(lVar7 + 0xc95));
      WriteBool(this,*(bool *)(lVar7 + 0xc8c));
      WriteInt(this,*(int *)(lVar7 + 0xc98));
      WriteInt(this,*(int *)(lVar7 + 0xc9c));
      WriteBool(this,*(bool *)(lVar7 + 0xcac));
      WriteString(this,(string *)(lVar7 + 0x10));
      WriteBool(this,*(bool *)(lVar7 + 0xcaf));
      WriteBool(this,*(bool *)(lVar7 + 0xcb1));
      WriteBool(this,*(bool *)(lVar7 + 0xcb0));
      WriteInt(this,*(int *)(lVar7 + 0xcb8));
      WriteInt(this,*(int *)(lVar7 + 0xcb4));
      WriteInt(this,*(int *)(lVar7 + 0xc88));
      WriteBool(this,*(bool *)(lVar7 + 0xca0));
      WriteInt(this,0);
      WriteInt(this,*(int *)(lVar7 + 0x18));
      sVar3 = FUN_053b9b6c(*(undefined8 *)(lVar7 + 0xcc8),*(undefined8 *)(lVar7 + 0xcd0));
      WriteShort(this,sVar3);
      lVar5 = 0;
      while( true ) {
        uVar8 = *(undefined8 *)(lVar7 + 0xcc8);
        iVar4 = FUN_053b9b6c(uVar8,*(undefined8 *)(lVar7 + 0xcd0));
        if (iVar4 <= (int)lVar5) break;
        pcVar6 = (char *)FUN_053b9b78(uVar8,lVar5);
        WriteByte(this,pcVar6[2]);
        WriteByte(this,(char)((uint)*(undefined4 *)pcVar6 >> 8));
        WriteByte(this,*pcVar6);
        WriteFloat(this,*(float *)(pcVar6 + 4));
        lVar5 = lVar5 + 1;
      }
      sVar3 = FUN_053b9b6c(*(undefined8 *)(lVar7 + 0xce0),*(undefined8 *)(lVar7 + 0xce8));
      WriteShort(this,sVar3);
      lVar5 = 0;
      while( true ) {
        uVar8 = *(undefined8 *)(lVar7 + 0xce0);
        iVar4 = FUN_053b9b6c(uVar8,*(undefined8 *)(lVar7 + 0xce8));
        if (iVar4 <= (int)lVar5) break;
        pcVar6 = (char *)FUN_053b9b78(uVar8,lVar5);
        WriteByte(this,*pcVar6);
        WriteFloat(this,*(float *)(pcVar6 + 4));
        lVar5 = lVar5 + 1;
      }
      pPVar9 = (PIValue *)(lVar7 + 0x38);
      do {
        pPVar1 = pPVar9 + 0x70;
        WriteValue(this,pPVar9);
        pPVar9 = pPVar1;
      } while (pPVar1 != (PIValue *)(lVar7 + 0xa48));
      lVar11 = lVar11 + 1;
      WriteFloat(this,*(float *)(lVar7 + 0xc78));
      WriteFloat(this,*(float *)(lVar7 + 0xc7c));
      WriteInt(this,0);
      WriteInt(this,0);
      WriteBool(this,*(bool *)(lVar7 + 0xc80));
      WriteValue(this,(PIValue *)(lVar7 + 0xb28));
      WriteValue(this,(PIValue *)(lVar7 + 0xb98));
      WriteValue(this,(PIValue *)(lVar7 + 0xc08));
      WriteInt(this,*(int *)(lVar7 + 0xcbc));
      WriteInt(this,*(int *)(lVar7 + 0xcc0));
      WriteBool(this,*(bool *)(lVar7 + 0xca2));
      WriteBool(this,*(bool *)(lVar7 + 0xca3));
      WriteBool(this,*(bool *)(lVar7 + 0xcae));
      WriteValue(this,pPVar1);
      WriteValue(this,(PIValue *)(lVar7 + 0xab8));
      WriteInt(this,0);
      WriteValue(this,(PIValue *)(lVar7 + 0xab8));
      WriteBool(this,*(bool *)(lVar7 + 0xcad));
      WriteBool(this,*(bool *)(lVar7 + 0xca5));
      WriteBool(this,*(bool *)(lVar7 + 0xca1));
      WriteInt(this,*(int *)(lVar7 + 0xca8));
      WriteBool(this,*(bool *)(lVar7 + 0xca4));
      uVar8 = *(undefined8 *)(param_1 + 0x1268);
      lVar5 = FUN_053b9c30(uVar8,*(undefined8 *)(param_1 + 0x1270));
    } while ((int)lVar11 < (int)lVar5);
  }
  WriteInt(this,999);
  pPVar10 = param_1 + 8;
  do {
    pPVar2 = pPVar10 + 0x70;
    WriteValue(this,(PIValue *)pPVar10);
    pPVar10 = pPVar2;
  } while (pPVar2 != param_1 + 0x1268);
  WriteInt(this,0);
  WriteInt(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::CalcParticleTransformSimple(Sexy::PILayer*, Sexy::PIEmitterInstance*,
   Sexy::PIEmitter*, Sexy::PIParticleDef*, Sexy::PIParticleGroup*, Sexy::PIParticleInstance*, float,
   float) */

void __thiscall
Sexy::PIEffect::CalcParticleTransformSimple
          (PIEffect *this,PILayer *param_1,PIEmitterInstance *param_2,PIEmitter *param_3,
          PIParticleDef *param_4,PIParticleGroup *param_5,PIParticleInstance *param_6,float param_7,
          float param_8)

{
  long lVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_30;
  float local_2c;
  undefined8 local_28;
  Tri aTStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MemoryImage::TriRep::Tri::Tri(aTStack_20,1.0,0.0,0.0,1.0,0.0,0.0);
  PieceConfig::PieceConfig((PieceConfig *)&local_28);
  lVar1 = FUN_053b9c94(*(undefined8 *)(param_4 + 0x20),(long)*(int *)(param_6 + 0x2c));
  *(long *)(param_6 + 0xe0) = lVar1;
  local_30 = param_7 * *(float *)(param_6 + 0xb4);
  local_2c = 1.5;
  pfVar2 = eastl::max_alt<float>(&local_30,&local_2c);
  fVar7 = *pfVar2;
  local_30 = param_8 * *(float *)(param_6 + 0xb8);
  local_2c = 1.5;
  pfVar2 = eastl::max_alt<float>(&local_30,&local_2c);
  fVar9 = *(float *)(param_6 + 0xb0);
  fVar8 = *pfVar2 * *(float *)(lVar1 + 0x14);
  fVar7 = fVar7 * *(float *)(lVar1 + 0x10);
  if (fVar9 == 1.0) {
    fVar4 = *(float *)(param_6 + 0x28);
    fVar9 = sinf(fVar4);
    fVar4 = cosf(fVar4);
    fVar5 = *(float *)(lVar1 + 0x18);
    fVar10 = *(float *)(lVar1 + 0x1c);
    *(float *)(param_6 + 200) = fVar4 * fVar7;
    *(float *)(param_6 + 0xcc) = fVar9 * fVar7;
    *(float *)(param_6 + 0xd0) = -(fVar9 * fVar8);
    *(float *)(param_6 + 0xd4) = fVar4 * fVar8;
    *(float *)(param_6 + 0xd8) = *(float *)(param_6 + 0x18) + fVar5 * fVar7;
    *(float *)(param_6 + 0xdc) = *(float *)(param_6 + 0x1c) + fVar10 * fVar8;
  }
  else {
    fVar10 = *(float *)(param_6 + 0x28);
    fVar4 = sinf(fVar10);
    fVar10 = cosf(fVar10);
    fVar6 = *(float *)(lVar1 + 0x18);
    fVar5 = *(float *)(lVar1 + 0x1c);
    *(float *)(param_6 + 200) = fVar10 * fVar9 * fVar7;
    *(float *)(param_6 + 0xcc) = fVar4 * fVar9 * fVar7;
    *(float *)(param_6 + 0xd0) = -(fVar4 * fVar9 * fVar8);
    *(float *)(param_6 + 0xd4) = fVar10 * fVar9 * fVar8;
    *(float *)(param_6 + 0xd8) = (*(float *)(param_6 + 0x18) + fVar6 * fVar7) * fVar9;
    *(float *)(param_6 + 0xdc) = (*(float *)(param_6 + 0x1c) + fVar5 * fVar8) * fVar9;
  }
  uVar3 = *(undefined8 *)(param_6 + 0xa0);
  local_28._0_4_ = (float)uVar3;
  fVar7 = *(float *)(param_1 + 0x20) + (float)local_28;
  local_28._4_4_ = (float)((ulong)uVar3 >> 0x20);
  fVar8 = *(float *)(param_1 + 0x24) + local_28._4_4_;
  local_28 = uVar3;
  FUN_053b9a78(fVar7,fVar8,param_6 + 0xd8,param_6 + 0xdc);
  if (*(float *)(param_1 + 0x28) != 0.0) {
    SimpleMatrix::RotateRad((SimpleMatrix *)(param_6 + 200),*(float *)(param_1 + 0x28));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::GetImage(std::string const&, std::string const&) */

void Sexy::PIEffect::GetImage(string *param_1,string *param_2)

{
  string *in_x2;
  RtMixedPtrBase *in_x8;
  ResourceManager *this;
  string asStack_28 [8];
  string asStack_20 [8];
  RtMixedPtr<Sexy::Image> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtMixedPtr<Sexy::Image>::RtMixedPtr();
  this = *(ResourceManager **)(gSexyAppBase + 0x848);
  GetFileDir(param_1 + 0x48,true);
  GetPathFrom(in_x2,asStack_28);
  ResourceManager::GetImage
            (this,(RtMixedPtr *)aRStack_18,asStack_20,(GetImageOptions *)0x0,(bool *)0x0);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  RtWeakPtr<Sexy::Image>::RtWeakPtr(in_x8);
  RtMixedPtr<Sexy::Image>::~RtMixedPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::GetEmitterPos(Sexy::PIEmitterInstance*, bool) */

void Sexy::PIEffect::GetEmitterPos(PIEmitterInstance *param_1,bool param_2)

{
  long lVar1;
  char in_w2;
  TPoint<float> *in_x8;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  PIValue2D::GetValueAt(*(float *)(param_1 + 0x14e8));
  if (in_w2 != '\0') {
    TransformFPoint((SexyMatrix3 *)((ulong)param_2 + 0xf0),(FPoint *)in_x8);
    *(undefined8 *)in_x8 = local_10;
    TransformFPoint((SexyMatrix3 *)(param_1 + 0x1598),(FPoint *)in_x8);
    *(undefined8 *)in_x8 = local_10;
    TPoint<float>::operator+=(in_x8,(TPoint *)((ulong)param_2 + 0x114));
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PIEffect::ResetAnim() */

void __thiscall Sexy::PIEffect::ResetAnim(PIEffect *this)

{
  PIFreeEmitterInstance *pPVar1;
  PIParticleInstance *pPVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  PIParticleDefInstance *pPVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  PIParticleInstance *pPVar12;
  long lVar13;
  long lVar14;
  PIFreeEmitterInstance *pPVar15;
  long lVar16;
  
  lVar16 = 0;
  uVar11 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
  uVar10 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x40);
  *(undefined4 *)(this + 0x14e8) = 0;
  iVar3 = FUN_053b9ba0(uVar11,uVar10);
  if (0 < iVar3) {
    do {
      lVar14 = 0;
      lVar4 = FUN_053b9bc8(uVar11,lVar16);
      lVar5 = FUN_053b9bd4(*(undefined8 *)(this + 0x14c0),lVar16);
      uVar10 = *(undefined8 *)(lVar5 + 8);
      iVar3 = FUN_053b9b14(uVar10,*(undefined8 *)(lVar5 + 0x10));
      if (0 < iVar3) {
        do {
          lVar6 = FUN_053b9c24(*(undefined8 *)(lVar4 + 8),lVar14);
          lVar7 = FUN_053b9b34(uVar10,lVar14);
          pPVar1 = *(PIFreeEmitterInstance **)(lVar7 + 0x60);
          while (pPVar1 != (PIFreeEmitterInstance *)0x0) {
            pPVar15 = *(PIFreeEmitterInstance **)pPVar1;
            pPVar2 = *(PIParticleInstance **)(pPVar1 + 0x138);
            while (pPVar2 != (PIParticleInstance *)0x0) {
              pPVar12 = *(PIParticleInstance **)pPVar2;
              ObjectPool<Sexy::PIParticleInstance>::Free
                        ((ObjectPool<Sexy::PIParticleInstance> *)(this + 0x14f0),pPVar2);
              pPVar2 = pPVar12;
            }
            ObjectPool<Sexy::PIFreeEmitterInstance>::Free
                      ((ObjectPool<Sexy::PIFreeEmitterInstance> *)(this + 0x1510),pPVar1);
            pPVar1 = pPVar15;
          }
          *(undefined8 *)(lVar7 + 0x60) = 0;
          *(undefined8 *)(lVar7 + 0x68) = 0;
          *(undefined4 *)(lVar7 + 0x70) = 0;
          pPVar2 = *(PIParticleInstance **)(lVar7 + 0x98);
          while (pPVar2 != (PIParticleInstance *)0x0) {
            pPVar12 = *(PIParticleInstance **)pPVar2;
            ObjectPool<Sexy::PIParticleInstance>::Free
                      ((ObjectPool<Sexy::PIParticleInstance> *)(this + 0x14f0),pPVar2);
            pPVar2 = pPVar12;
          }
          *(undefined8 *)(lVar7 + 0x98) = 0;
          *(undefined8 *)(lVar7 + 0xa0) = 0;
          *(undefined4 *)(lVar7 + 0xa8) = 0;
          lVar13 = 0;
          while( true ) {
            iVar3 = FUN_053b9d08(*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30));
            if (iVar3 <= (int)lVar13) break;
            pPVar9 = (PIParticleDefInstance *)FUN_053b9d98(*(undefined8 *)(lVar7 + 0x48),lVar13);
            PIParticleDefInstance::Reset(pPVar9);
            lVar13 = lVar13 + 1;
          }
          plVar8 = (long *)FUN_053b9af8(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                                        (long)*(int *)(lVar6 + 0xc));
          lVar13 = *plVar8;
          lVar6 = 0;
          while( true ) {
            iVar3 = FUN_053b9c30(*(undefined8 *)(lVar13 + 0x1268),*(undefined8 *)(lVar13 + 0x1270));
            if (iVar3 <= (int)lVar6) break;
            pPVar9 = (PIParticleDefInstance *)FUN_053b9d98(*(undefined8 *)(lVar7 + 0x80),lVar6);
            PIParticleDefInstance::Reset(pPVar9);
            lVar6 = lVar6 + 1;
          }
          uVar10 = *(undefined8 *)(lVar5 + 8);
          uVar11 = *(undefined8 *)(lVar5 + 0x10);
          lVar14 = lVar14 + 1;
          *(undefined1 *)(lVar7 + 0x41) = 1;
          *(undefined1 *)(lVar7 + 0x40) = 0;
          iVar3 = FUN_053b9b14(uVar10,uVar11);
        } while ((int)lVar14 < iVar3);
      }
      lVar16 = lVar16 + 1;
      uVar11 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
      iVar3 = FUN_053b9ba0(uVar11,*(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
    } while ((int)lVar16 < iVar3);
  }
  *(undefined4 *)(this + 0x1538) = 0;
  *(undefined4 *)(this + 0x1534) = 0;
  *(undefined4 *)(this + 0x153c) = 0;
  this[0x1570] = (PIEffect)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::GetNotesParam(std::string const&, std::string const&) */

void Sexy::PIEffect::GetNotesParam(string *param_1,string *param_2)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Upper((Sexy *)param_2,param_2);
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::find((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                     *)(param_1 + 0x1488),(string *)&local_10);
  std::string::~string((string *)&local_10);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 0x1488));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    FUN_05475d88();
  }
  else {
    FUN_05475d88();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::PIEffect() */

void __thiscall Sexy::PIEffect::PIEffect(PIEffect *this)

{
  long lVar1;
  PIEffectDef *this_00;
  float fVar2;
  AutoCrit aAStack_20 [8];
  PIEffect *local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseResource::BaseResource((BaseResource *)this);
  *(undefined ***)this = &PTR_GetClass_06a37060;
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  MTRand::MTRand((MTRand *)(this + 0x58));
  Buffer::Buffer((Buffer *)(this + 0x13f0));
  Set8BytesTo0(this + 0x1430);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1440));
  Color::Color((Color *)(this + 0x1460));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x1488));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x14c0));
  Set8BytesTo0(this + 0x14d8);
  ObjectPool<Sexy::PIParticleInstance>::ObjectPool
            ((ObjectPool<Sexy::PIParticleInstance> *)(this + 0x14f0));
  ObjectPool<Sexy::PIFreeEmitterInstance>::ObjectPool
            ((ObjectPool<Sexy::PIFreeEmitterInstance> *)(this + 0x1510));
  Color::Color((Color *)(this + 0x1544));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1558));
  SexyTransform2D::SexyTransform2D((SexyTransform2D *)(this + 0x1574));
  SexyTransform2D::SexyTransform2D((SexyTransform2D *)(this + 0x1598));
  AutoCrit::AutoCrit(aAStack_20,(CritSect *)(gSexyAppBase + 0x10c));
  local_18 = this;
  std::set<Sexy::PIEffect*,std::less<Sexy::PIEffect*>,std::allocator<Sexy::PIEffect*>>::insert
            ((set<Sexy::PIEffect*,std::less<Sexy::PIEffect*>,std::allocator<Sexy::PIEffect*>> *)
             (gSexyAppBase + 0x538),&local_18);
  AutoCrit::~AutoCrit(aAStack_20);
  this[0x14e0] = (PIEffect)0x0;
  *(undefined4 *)(this + 0x1438) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x3d] = (PIEffect)0x1;
  *(undefined4 *)(this + 0x14e4) = 0;
  *(undefined4 *)(this + 0x14e8) = 0;
  *(undefined4 *)(this + 0x1534) = 0;
  *(undefined4 *)(this + 0x1538) = 0;
  *(undefined4 *)(this + 0x153c) = 0;
  *(undefined4 *)(this + 0x1474) = 0;
  *(undefined4 *)(this + 0x1478) = 0;
  this[0x1570] = (PIEffect)0x1;
  *(undefined4 *)(this + 0x1540) = 0x3f800000;
  Color::Color((Color *)&local_18,1);
  *(PIEffect **)(this + 0x1544) = local_18;
  *(undefined8 *)(this + 0x154c) = uStack_10;
  this[0x1554] = (PIEffect)0x0;
  this[0x1555] = (PIEffect)0x0;
  this[0x1556] = (PIEffect)0x1;
  this[0x1557] = (PIEffect)0x0;
  SexyMatrix3::LoadIdentity((SexyMatrix3 *)(this + 0x1574));
  SexyMatrix3::LoadIdentity((SexyMatrix3 *)(this + 0x1598));
  *(undefined8 *)(this + 0x18) = 0;
  lVar1 = gSexyAppBase;
  *(undefined8 *)(this + 0x20) = 0;
  fVar2 = *(float *)(lVar1 + 0x5cc);
  if (fVar2 < 10.0) {
    fVar2 = fVar2 + fVar2;
  }
  *(float *)(this + 0x15bc) = fVar2;
  this_00 = ::operator_new(0x88);
  PIEffectDef::PIEffectDef(this_00);
  *(PIEffectDef **)(this + 0x14b8) = this_00;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PIEffect::StaticNew() */

PIEffect * Sexy::PIEffect::StaticNew(void)

{
  PIEffect *this;
  
  this = ::operator_new(0x15c0);
  PIEffect(this);
  return this;
}


/* Sexy::PIEffect::Deref() */

void __thiscall Sexy::PIEffect::Deref(PIEffect *this)

{
  int iVar1;
  PIEffectDef *this_00;
  
  this_00 = *(PIEffectDef **)(this + 0x14b8);
  iVar1 = *(int *)this_00;
  *(int *)this_00 = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    PIEffectDef::~PIEffectDef(this_00);
    AK::FreeHook(this_00);
    *(undefined8 *)(this + 0x14b8) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::~PIEffect() */

void __thiscall Sexy::PIEffect::~PIEffect(PIEffect *this)

{
  set<Sexy::PIEffect*,std::less<Sexy::PIEffect*>,std::allocator<Sexy::PIEffect*>> *this_00;
  undefined8 uVar1;
  AutoCrit aAStack_18 [8];
  PIEffect *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06a37060;
  AutoCrit::AutoCrit(aAStack_18,(CritSect *)(gSexyAppBase + 0x10c));
  this_00 = (set<Sexy::PIEffect*,std::less<Sexy::PIEffect*>,std::allocator<Sexy::PIEffect*>> *)
            (gSexyAppBase + 0x538);
  local_10 = this;
  uVar1 = std::set<Sexy::PIEffect*,std::less<Sexy::PIEffect*>,std::allocator<Sexy::PIEffect*>>::find
                    (this_00,&local_10);
  std::set<Sexy::PIEffect*,std::less<Sexy::PIEffect*>,std::allocator<Sexy::PIEffect*>>::
  erase_abi_cxx11_(this_00,uVar1);
  AutoCrit::~AutoCrit(aAStack_18);
  ResetAnim(this);
  Deref(this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1558));
  ObjectPool<Sexy::PIFreeEmitterInstance>::~ObjectPool
            ((ObjectPool<Sexy::PIFreeEmitterInstance> *)(this + 0x1510));
  ObjectPool<Sexy::PIFreeEmitterInstance>::~ObjectPool
            ((ObjectPool<Sexy::PIFreeEmitterInstance> *)(this + 0x14f0));
  std::string::~string((string *)(this + 0x14d8));
  std::vector<Sexy::PILayer,std::allocator<Sexy::PILayer>>::~vector
            ((vector<Sexy::PILayer,std::allocator<Sexy::PILayer>> *)(this + 0x14c0));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)(this + 0x1488));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1440));
  std::string::~string((string *)(this + 0x1430));
  Buffer::~Buffer((Buffer *)(this + 0x13f0));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  BaseResource::~BaseResource((BaseResource *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PIEffect::~PIEffect() */

void __thiscall Sexy::PIEffect::~PIEffect(PIEffect *this)

{
  ~PIEffect(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::PIEffect::Clear() */

void __thiscall Sexy::PIEffect::Clear(PIEffect *this)

{
  FUN_05474ff8(this + 0x14d8);
  ResetAnim(this);
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1440));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::clear((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           *)(this + 0x1488));
  std::vector<Sexy::PIEmitter*,std::allocator<Sexy::PIEmitter*>>::clear
            ((vector<Sexy::PIEmitter*,std::allocator<Sexy::PIEmitter*>> *)
             (*(long *)(this + 0x14b8) + 8));
  std::vector<Sexy::PITexture*,std::allocator<Sexy::PITexture*>>::clear
            ((vector<Sexy::PITexture*,std::allocator<Sexy::PITexture*>> *)
             (*(long *)(this + 0x14b8) + 0x20));
  std::vector<Sexy::PILayerDef,std::allocator<Sexy::PILayerDef>>::clear
            ((vector<Sexy::PILayerDef,std::allocator<Sexy::PILayerDef>> *)
             (*(long *)(this + 0x14b8) + 0x38));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (*(long *)(this + 0x14b8) + 0x50));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x1558));
  *(undefined4 *)(this + 0x40) = 0;
  this[0x14e0] = (PIEffect)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::GetGeomPos(Sexy::PIEmitterInstance*, Sexy::PIParticleInstance*, float*, bool*) */

void Sexy::PIEffect::GetGeomPos
               (PIEmitterInstance *param_1,PIParticleInstance *param_2,float *param_3,bool *param_4)

{
  RtWeakPtr *this;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ResourceInfo *pRVar6;
  long lVar7;
  int *piVar8;
  RtObject *this_00;
  MemoryImage *pMVar9;
  int iVar10;
  undefined1 *in_x4;
  PieceConfig *in_x8;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  TPoint<float> aTStack_40 [8];
  TPoint<float> aTStack_38 [8];
  float local_30;
  float local_2c;
  UDim aUStack_28 [8];
  TPoint<float> aTStack_20 [8];
  float local_18;
  float local_14;
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PieceConfig::PieceConfig(in_x8);
  lVar11 = *(long *)(param_2 + 0x38);
  switch(*(undefined4 *)(lVar11 + 0x10)) {
  case 1:
    uVar12 = *(undefined8 *)(lVar11 + 0x8f8);
    uVar5 = FUN_053b9cd4(uVar12,*(undefined8 *)(lVar11 + 0x900));
    if (1 < uVar5) {
      iVar10 = 0;
      lVar7 = 0;
      while( true ) {
        iVar4 = (int)uVar5 + -1;
        if (iVar4 <= (int)lVar7) break;
        FUN_053b9ce8(uVar12);
        PIValue2D::GetValueAt(*(float *)(param_1 + 0x14e8));
        FUN_053b9ce8(*(undefined8 *)(lVar11 + 0x8f8),lVar7 + 1);
        PIValue2D::GetValueAt(*(float *)(param_1 + 0x14e8));
        TPoint<float>::operator-(aTStack_20,(TPoint *)aUStack_28);
        FPoint::FPoint((FPoint *)&local_18,(TPoint *)&local_10);
        uVar12 = *(undefined8 *)(lVar11 + 0x8f8);
        iVar10 = (int)(local_14 * local_14 + local_18 * local_18 + (float)iVar10);
        uVar5 = FUN_053b9cd4(uVar12,*(undefined8 *)(lVar11 + 0x900));
        lVar7 = lVar7 + 1;
      }
      iVar2 = *(int *)(lVar11 + 0x18);
      if (iVar2 == 0) {
        fVar14 = (float)GetRandFloatU((PIEffect *)param_1);
        uVar12 = *(undefined8 *)(lVar11 + 0x8f8);
        fVar14 = fVar14 * (float)iVar10;
        iVar4 = FUN_053b9cd4(uVar12,*(undefined8 *)(lVar11 + 0x900));
        iVar4 = iVar4 + -1;
      }
      else {
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = (int)param_3[0x20] / iVar2;
        }
        fVar14 = (float)(((int)param_3[0x20] - iVar3 * iVar2) * iVar10) / (float)(iVar2 + -1);
      }
      iVar10 = 0;
      lVar7 = 0;
      for (; (int)lVar7 < iVar4; iVar4 = iVar4 + -1) {
        lVar13 = lVar7 + 1;
        FUN_053b9ce8(uVar12,lVar7);
        PIValue2D::GetValueAt(*(float *)(param_1 + 0x14e8));
        FUN_053b9ce8(*(undefined8 *)(lVar11 + 0x8f8),lVar13);
        PIValue2D::GetValueAt(*(float *)(param_1 + 0x14e8));
        TPoint<float>::operator-(aTStack_20,(TPoint *)aUStack_28);
        FPoint::FPoint((FPoint *)&local_18,(TPoint *)&local_10);
        fVar17 = (float)iVar10;
        fVar18 = local_14 * local_14 + local_18 * local_18;
        fVar19 = fVar18 + fVar17;
        if ((fVar17 <= fVar14) && (fVar14 <= fVar19)) {
          uVar12 = *(undefined8 *)(lVar11 + 0x8f8);
          fVar18 = (fVar14 - fVar17) / fVar18;
          fVar14 = 1.0 - fVar18;
          goto LAB_053c69d0;
        }
        iVar10 = (int)fVar19;
        uVar12 = *(undefined8 *)(lVar11 + 0x8f8);
        iVar4 = FUN_053b9cd4(uVar12,*(undefined8 *)(lVar11 + 0x900));
        lVar7 = lVar13;
      }
      fVar18 = 0.0;
      fVar14 = 1.0;
      lVar13 = 1;
      lVar7 = 0;
LAB_053c69d0:
      FUN_053b9ce8(uVar12,lVar7);
      fVar19 = 1.0;
      PIValue2D::GetValueAt(*(float *)(param_1 + 0x14e8));
      FUN_053b9ce8(*(undefined8 *)(lVar11 + 0x8f8),lVar13);
      PIValue2D::GetValueAt(*(float *)(param_1 + 0x14e8));
      TPoint<float>::operator-(aTStack_38,(TPoint *)aTStack_40);
      FPoint::FPoint((FPoint *)&local_30,(TPoint *)&local_10);
      TPoint<float>::operator*(aTStack_40,fVar14);
      TPoint<float>::operator*(aTStack_38,fVar18);
      UI::UDim::operator+(aUStack_28,(UDim *)aTStack_20);
      FPoint::FPoint((FPoint *)&local_10,(TPoint *)&local_18);
      cVar1 = *(char *)(lVar11 + 0x14);
      *(ulong *)in_x8 = CONCAT44(uStack_c,local_10);
      if ((cVar1 != '\0') && (fVar19 = -1.0, *(char *)(lVar11 + 0x15) != '\0')) {
        fVar19 = (float)GetRandSign((PIEffect *)param_1);
      }
      if (param_4 != (bool *)0x0) {
        fVar14 = atan2f(local_2c,local_30);
        *(float *)param_4 = *(float *)param_4 + 1.570795 + fVar19 * 1.570795 + fVar14;
      }
    }
    break;
  case 2:
    fVar14 = (float)PIValue::GetValueAt((PIValue *)(lVar11 + 0x738),*(float *)(param_1 + 0x14e8),0.0
                                       );
    fVar19 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x7a8),
                                        *(float *)(param_1 + 0x14e8),0.0);
    iVar10 = *(int *)(lVar11 + 0x18);
    if (iVar10 == 0) {
      fVar17 = (float)GetRandFloat((PIEffect *)param_1);
      fVar17 = fVar17 * 3.14159;
    }
    else {
      iVar4 = 0;
      if (iVar10 != 0) {
        iVar4 = (int)param_3[0x20] / iVar10;
      }
      fVar17 = ((float)((int)param_3[0x20] - iVar4 * iVar10) * 6.28318) / (float)iVar10;
      if (3.14159 < fVar17) {
        fVar17 = fVar17 - 6.28318;
      }
    }
    if (fVar14 <= fVar19) {
      if (fVar14 < fVar19) {
        fVar18 = (fVar19 / fVar14 + -1.0) * 0.3 + 1.0;
        if (fVar17 < -1.570795) {
          dVar15 = pow((double)((-1.570795 - fVar17) * 0.6366203),(double)fVar18);
          fVar17 = (float)(-1.5707950592041016 - dVar15 * 1.5707950592041016);
        }
        else if (fVar17 < 0.0) {
          dVar15 = pow((double)((fVar17 + 1.570795) * 0.6366203),(double)fVar18);
          fVar17 = (float)((dVar15 + -1.0) * 1.5707950592041016);
        }
        else if (1.570795 <= fVar17) {
          dVar15 = pow((double)((fVar17 + -1.570795) * 0.6366203),(double)fVar18);
          fVar17 = (float)((dVar15 + 1.0) * 1.5707950592041016);
        }
        else {
          dVar15 = pow((double)((1.570795 - fVar17) * 0.6366203),(double)fVar18);
          fVar17 = (float)((1.0 - dVar15) * 1.5707950592041016);
        }
      }
    }
    else {
      fVar18 = (fVar14 / fVar19 + -1.0) * 0.3 + 1.0;
      if (-1.570795 <= fVar17) {
        if (fVar17 < 0.0) {
          dVar15 = pow((double)-(fVar17 * 0.6366203),(double)fVar18);
          fVar17 = (float)-(dVar15 * 1.5707950592041016);
        }
        else if (1.570795 <= fVar17) {
          dVar15 = pow((double)((3.14159 - fVar17) * 0.6366203),(double)fVar18);
          fVar17 = (float)(3.141590118408203 - dVar15 * 1.5707950592041016);
        }
        else {
          dVar15 = pow((double)(fVar17 * 0.6366203),(double)fVar18);
          fVar17 = (float)(dVar15 * 1.5707950592041016);
        }
      }
      else {
        dVar15 = pow((double)((fVar17 + 3.14159) * 0.6366203),(double)fVar18);
        fVar17 = (float)(dVar15 * 1.5707950592041016 + 3.141590118408203);
      }
    }
    dVar15 = cos((double)fVar17);
    dVar16 = sin((double)fVar17);
    DVec2::DVec2((DVec2 *)&local_10,(float)(dVar15 * (double)fVar14),
                 (float)(dVar16 * (double)fVar19));
    *(ulong *)in_x8 = CONCAT44(uStack_c,local_10);
    if (param_4 != (bool *)0x0) {
      if (*(char *)(lVar11 + 0x14) == '\0') {
        fVar14 = 1.570795;
      }
      else if (*(char *)(lVar11 + 0x15) == '\0') {
        fVar14 = -1.570795;
      }
      else {
        fVar14 = (float)GetRandSign((PIEffect *)param_1);
        fVar14 = fVar14 * 1.570795;
      }
      *(float *)param_4 = fVar17 + *(float *)param_4 + fVar14;
    }
    break;
  case 3:
    fVar14 = (float)PIValue::GetValueAt((PIValue *)(lVar11 + 0x738),*(float *)(param_1 + 0x14e8),0.0
                                       );
    fVar19 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x7a8),
                                        *(float *)(param_1 + 0x14e8),0.0);
    iVar10 = *(int *)(lVar11 + 0x18);
    if (iVar10 == 0) {
      fVar17 = (float)GetRandFloat((PIEffect *)param_1);
      fVar18 = (float)GetRandFloat((PIEffect *)param_1);
      DVec2::DVec2((DVec2 *)&local_10,fVar14 * 0.5 * fVar17,fVar19 * 0.5 * fVar18);
      *(ulong *)in_x8 = CONCAT44(uStack_c,local_10);
    }
    else {
      iVar4 = *(int *)(lVar11 + 0x1c);
      fVar17 = param_3[0x20];
      if (1 < iVar10) {
        iVar2 = 0;
        if (iVar10 != 0) {
          iVar2 = (int)fVar17 / iVar10;
        }
        *(float *)in_x8 =
             fVar14 * ((float)((int)fVar17 - iVar2 * iVar10) / (float)(iVar10 + -1) + -0.5);
      }
      if (1 < iVar4) {
        iVar2 = 0;
        if (iVar10 != 0) {
          iVar2 = (int)fVar17 / iVar10;
        }
        iVar10 = 0;
        if (iVar4 != 0) {
          iVar10 = iVar2 / iVar4;
        }
        *(float *)(in_x8 + 4) =
             fVar19 * ((float)(iVar2 - iVar10 * iVar4) / (float)(iVar4 + -1) + -0.5);
      }
    }
    this = (RtWeakPtr *)(param_2 + 0xe8);
    pRVar6 = RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    if ((pRVar6 != (ResourceInfo *)0x0) && (in_x4 != (undefined1 *)0x0)) {
      fVar18 = *(float *)in_x8;
      fVar17 = *(float *)(in_x8 + 4);
      lVar7 = RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar10 = *(int *)(lVar7 + 0x38);
      lVar7 = RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar4 = *(int *)(lVar7 + 0x3c);
      local_10 = iVar10 + -1;
      local_18 = (float)(int)((fVar18 / fVar14 + 0.5) * (float)iVar10);
      piVar8 = eastl::min_alt<int>((int *)&local_18,&local_10);
      iVar2 = *piVar8;
      local_10 = iVar4 + -1;
      local_18 = (float)(int)((fVar17 / fVar19 + 0.5) * (float)iVar4);
      piVar8 = eastl::min_alt<int>((int *)&local_18,&local_10);
      iVar4 = *piVar8;
      this_00 = (RtObject *)
                RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      pMVar9 = RtObject::Cast<Sexy::MemoryImage>(this_00);
      lVar7 = (**(code **)(*(long *)pMVar9 + 0xd0))(pMVar9,0,0,0,0);
      if ((uint)*(byte *)(lVar11 + 0x40) !=
          -((int)~*(uint *)(lVar7 + (long)(iVar2 + iVar4 * iVar10) * 4) >> 0x1f)) {
        *in_x4 = 1;
      }
    }
    break;
  case 4:
    fVar14 = (float)PIValue::GetValueAt((PIValue *)(lVar11 + 0x738),*(float *)(param_1 + 0x14e8),0.0
                                       );
    iVar10 = *(int *)(lVar11 + 0x18);
    if (iVar10 == 0) {
      fVar19 = (float)GetRandFloat((PIEffect *)param_1);
      fVar19 = fVar19 * 3.14159;
    }
    else {
      iVar4 = 0;
      if (iVar10 != 0) {
        iVar4 = (int)param_3[0x20] / iVar10;
      }
      fVar19 = ((float)((int)param_3[0x20] - iVar4 * iVar10) * 6.28318) / (float)iVar10;
    }
    dVar15 = cos((double)fVar19);
    dVar16 = sin((double)fVar19);
    DVec2::DVec2((DVec2 *)&local_10,(float)(dVar15 * (double)fVar14),
                 (float)(dVar16 * (double)fVar14));
    *(ulong *)in_x8 = CONCAT44(uStack_c,local_10);
    if (param_4 != (bool *)0x0) {
      if (*(char *)(lVar11 + 0x14) == '\0') {
        fVar14 = 1.570795;
      }
      else if (*(char *)(lVar11 + 0x15) == '\0') {
        fVar14 = -1.570795;
      }
      else {
        fVar14 = (float)GetRandSign((PIEffect *)param_1);
        fVar14 = fVar14 * 1.570795;
      }
      *(float *)param_4 = fVar19 + *(float *)param_4 + fVar14;
    }
  }
  GetEmitterPos(param_1,SUB81(param_2,0));
  TPoint<float>::operator+=((TPoint<float> *)in_x8,(TPoint *)&local_10);
  TPoint<float>::operator+=((TPoint<float> *)in_x8,(TPoint *)(param_2 + 0x114));
  TransformFPoint((SexyMatrix3 *)(param_2 + 0xf0),(FPoint *)in_x8);
  *(ulong *)in_x8 = CONCAT44(uStack_c,local_10);
  TransformFPoint((SexyMatrix3 *)(param_1 + 0x1598),(FPoint *)in_x8);
  *(ulong *)in_x8 = CONCAT44(uStack_c,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::CalcParticleTransform(Sexy::PILayer*, Sexy::PIEmitterInstance*, Sexy::PIEmitter*,
   Sexy::PIParticleDef*, Sexy::PIParticleGroup*, Sexy::PIParticleInstance*) */

void __thiscall
Sexy::PIEffect::CalcParticleTransform
          (PIEffect *this,PILayer *param_1,PIEmitterInstance *param_2,PIEmitter *param_3,
          PIParticleDef *param_4,PIParticleGroup *param_5,PIParticleInstance *param_6)

{
  SimpleMatrix *this_00;
  int iVar1;
  PIParticleGroup PVar2;
  PIParticleDef PVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_b0;
  undefined8 local_a8;
  TPoint<float> aTStack_98 [8];
  undefined8 local_90;
  UDim aUStack_88 [8];
  TPoint aTStack_80 [8];
  float local_78;
  undefined4 uStack_74;
  Insets aIStack_70 [16];
  Tri aTStack_60 [24];
  undefined4 local_48;
  undefined4 uStack_44;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  lVar6 = *(long *)(param_2 + 0x38);
  this_00 = (SimpleMatrix *)(param_6 + 200);
  local_8 = ___stack_chk_guard;
  MemoryImage::TriRep::Tri::Tri(aTStack_60,1.0,0.0,0.0,1.0,0.0,0.0);
  Insets::Insets(aIStack_70);
  PieceConfig::PieceConfig((PieceConfig *)&local_b0);
  if (param_4 == (PIParticleDef *)0x0) {
    if (*(float *)(param_6 + 0x28) != 0.0) {
      SimpleMatrix::RotateRad(this_00,*(float *)(param_6 + 0x28));
    }
    FPoint::FPoint((FPoint *)&local_48,(TPoint *)(param_6 + 0x18));
    FUN_053b9a78(local_48,uStack_44,param_6 + 0xd8,param_6 + 0xdc);
    fVar14 = *(float *)(param_6 + 0xb0);
    if (fVar14 != 1.0) {
      SimpleMatrix::Scale(this_00,fVar14,fVar14);
    }
    local_b0 = *(undefined8 *)(param_6 + 0xa0);
    goto LAB_053c6fe4;
  }
  iVar1 = *(int *)(param_6 + 0x30);
  lVar8 = *(long *)param_4;
  lVar4 = FUN_053b9c94(*(undefined8 *)(param_4 + 0x20),(long)*(int *)(param_6 + 0x2c));
  *(long *)(param_6 + 0xe0) = lVar4;
  if (param_4[0xc82] == (PIParticleDef)0x0) {
    fVar14 = *(float *)(param_6 + 0xb8);
  }
  else {
    if (param_5[0x15] == (PIParticleGroup)0x0) {
      fVar14 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x188),
                                          *(float *)(this + 0x14e8),0.0);
    }
    else {
      fVar14 = (float)PIValue::GetValueAt((PIValue *)(param_3 + 0x468),*(float *)(this + 0x14e8),0.0
                                         );
    }
    fVar13 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x118),*(float *)(this + 0x14e8),0.0);
    PVar2 = param_5[0x15];
    *(float *)(param_6 + 0xb4) = (fVar13 + *(float *)(param_6 + 0x48)) * fVar14;
    if (PVar2 == (PIParticleGroup)0x0) {
      fVar14 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x818),
                                          *(float *)(this + 0x14e8),0.0);
    }
    else {
      fVar14 = (float)PIValue::GetValueAt((PIValue *)(param_3 + 0x4d8),*(float *)(this + 0x14e8),0.0
                                         );
    }
    fVar13 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0xb28),*(float *)(this + 0x14e8),0.0);
    fVar14 = (fVar13 + *(float *)(param_6 + 0x4c)) * fVar14;
    *(float *)(param_6 + 0xb8) = fVar14;
  }
  uVar7 = -(ulong)((uint)(iVar1 / 0x3ffffff) >> 0x1f) & 0xffffffe000000000 |
          (ulong)(uint)(iVar1 / 0x3ffffff) << 5;
  local_78 = *(float *)(param_6 + 0xb4) * *(float *)(lVar8 + uVar7);
  local_48 = 0x3fc00000;
  pfVar5 = eastl::max_alt<float>(&local_78,(float *)&local_48);
  fVar13 = *pfVar5;
  local_78 = fVar14 * *(float *)(lVar8 + uVar7 + 4);
  local_48 = 0x3fc00000;
  pfVar5 = eastl::max_alt<float>(&local_78,(float *)&local_48);
  fVar13 = fVar13 * *(float *)(lVar4 + 0x10);
  fVar14 = *pfVar5 * *(float *)(lVar4 + 0x14);
  if (param_4[0xcc4] == (PIParticleDef)0x0) {
LAB_053c6eb4:
    fVar15 = *(float *)(param_6 + 0x28);
    if (param_4[0xc84] != (PIParticleDef)0x0) {
      lVar8 = *(long *)(param_6 + 0x90);
      if (lVar8 != 0) goto LAB_053c6ec8;
LAB_053c746c:
      fVar15 = fVar15 + *(float *)(lVar6 + 0x910) * *(float *)(param_4 + 0xc90);
      goto LAB_053c6edc;
    }
LAB_053c7134:
    if (param_4[0xc82] != (PIParticleDef)0x0) {
      if (param_4[0xcb0] == (PIParticleDef)0x0) goto LAB_053c6ee4;
      PVar2 = param_5[0x15];
      goto joined_r0x053c714c;
    }
  }
  else {
    SimpleMatrix::Identity((SimpleMatrix *)aTStack_60);
    if (*(float *)(lVar6 + 0x910) != 0.0) {
      SimpleMatrix::RotateRad((SimpleMatrix *)aTStack_60,*(float *)(lVar6 + 0x910));
    }
    lVar8 = *(long *)(param_6 + 0x90);
    if (lVar8 == 0) {
      fVar15 = *(float *)(param_6 + 0x28);
      if (param_4[0xc84] != (PIParticleDef)0x0) goto LAB_053c746c;
      goto LAB_053c7134;
    }
    if (*(float *)(lVar8 + 0x28) != 0.0) {
      SimpleMatrix::RotateRad((SimpleMatrix *)aTStack_60,-*(float *)(lVar8 + 0x28));
      goto LAB_053c6eb4;
    }
    fVar15 = *(float *)(param_6 + 0x28);
    if (param_4[0xc84] == (PIParticleDef)0x0) goto LAB_053c7134;
LAB_053c6ec8:
    fVar15 = fVar15 + *(float *)(param_4 + 0xc90) *
                      (*(float *)(lVar8 + 0x28) - *(float *)(param_6 + 0xc0));
LAB_053c6edc:
    if (param_4[0xc82] != (PIParticleDef)0x0) {
LAB_053c6ee4:
      fVar15 = fVar15 + *(float *)(lVar6 + 0x910);
      PVar2 = param_5[0x15];
joined_r0x053c714c:
      if (PVar2 == (PIParticleGroup)0x0) {
        fVar9 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x428),
                                           *(float *)(this + 0x14e8),0.0);
      }
      else {
        fVar9 = (float)PIValue::GetValueAt((PIValue *)(param_3 + 0x778),*(float *)(this + 0x14e8),
                                           0.0);
      }
      fVar10 = (float)PIValue::GetValueAt((PIValue *)(param_3 + 0x778),*(float *)(this + 0x14e8),1.0
                                         );
      *(float *)(param_6 + 0xb0) = fVar10 * fVar9;
    }
  }
  FPoint::FPoint((FPoint *)&local_a8,(TPoint *)(param_6 + 0x18));
  if (param_4[0xc84] != (PIParticleDef)0x0) {
    MemoryImage::TriRep::Tri::Tri((Tri *)&local_48,1.0,0.0,0.0,1.0,0.0,0.0);
    SimpleMatrix::RotateRad((SimpleMatrix *)&local_48,*(float *)(param_6 + 0xc0));
    SexyMatrix3::SexyMatrix3(aSStack_30,(SimpleMatrix *)&local_48);
    TransformFPoint(aSStack_30,(FPoint *)&local_a8);
    SimpleMatrix::TransformPoint((FPoint *)aTStack_60);
    TPoint<float>::operator*((TPoint<float> *)&local_a8,1.0 - *(float *)(param_4 + 0xc90));
    TPoint<float>::operator*(aTStack_98,*(float *)(param_4 + 0xc90));
    UI::UDim::operator+((UDim *)&local_90,aUStack_88);
    FPoint::FPoint((FPoint *)&local_78,aTStack_80);
    local_a8 = CONCAT44(uStack_74,local_78);
  }
  fVar9 = *(float *)(param_6 + 0xb0);
  if (fVar9 == 1.0) {
    fVar9 = sinf(fVar15);
    fVar15 = cosf(fVar15);
    fVar11 = *(float *)(lVar4 + 0x18);
    local_b0 = *(undefined8 *)(param_6 + 0xa0);
    PVar3 = param_4[0xc82];
    fVar10 = *(float *)(lVar4 + 0x1c);
    *(float *)(param_6 + 200) = fVar15 * fVar13;
    *(float *)(param_6 + 0xcc) = fVar9 * fVar13;
    *(float *)(param_6 + 0xd0) = -(fVar9 * fVar14);
    *(float *)(param_6 + 0xd4) = fVar15 * fVar14;
    *(float *)(param_6 + 0xd8) = (float)local_a8 + fVar11 * fVar13;
    *(float *)(param_6 + 0xdc) = local_a8._4_4_ + fVar10 * fVar14;
  }
  else {
    fVar10 = sinf(fVar15);
    fVar15 = cosf(fVar15);
    fVar12 = *(float *)(lVar4 + 0x18);
    local_b0 = *(undefined8 *)(param_6 + 0xa0);
    PVar3 = param_4[0xc82];
    fVar11 = *(float *)(lVar4 + 0x1c);
    *(float *)(param_6 + 200) = fVar15 * fVar9 * fVar13;
    *(float *)(param_6 + 0xcc) = fVar10 * fVar9 * fVar13;
    *(float *)(param_6 + 0xd0) = -(fVar10 * fVar9 * fVar14);
    *(float *)(param_6 + 0xd4) = fVar15 * fVar9 * fVar14;
    *(float *)(param_6 + 0xd8) = ((float)local_a8 + fVar12 * fVar13) * fVar9;
    *(float *)(param_6 + 0xdc) = (local_a8._4_4_ + fVar11 * fVar14) * fVar9;
  }
  if (PVar3 == (PIParticleDef)0x0) {
    if ((param_4[0xc84] != (PIParticleDef)0x0) && (param_5[0x14] == (PIParticleGroup)0x0)) {
      PieceConfig::PieceConfig((PieceConfig *)&local_90);
      lVar6 = *(long *)(param_6 + 0x90);
      if (lVar6 == 0) {
        SimpleMatrix::TransformPoint((FPoint *)aTStack_60);
        local_90 = CONCAT44(uStack_44,local_48);
        GetEmitterPos((PIEmitterInstance *)this,SUB81(param_2,0));
        TPoint<float>::operator+=((TPoint<float> *)&local_90,(TPoint *)&local_48);
      }
      else {
        UI::UDim::operator+((UDim *)(lVar6 + 0xa8),(UDim *)(lVar6 + 0x98));
        UI::UDim::operator+((UDim *)aTStack_80,(UDim *)(*(long *)(param_6 + 0x90) + 0x18));
        FPoint::FPoint((FPoint *)&local_48,(TPoint *)&local_78);
        local_90 = CONCAT44(uStack_44,local_48);
      }
      TPoint<float>::operator*((TPoint<float> *)&local_b0,1.0 - *(float *)(param_4 + 0xc90));
      TPoint<float>::operator*((TPoint<float> *)&local_90,*(float *)(param_4 + 0xc90));
      UI::UDim::operator+(aUStack_88,(UDim *)aTStack_80);
      FPoint::FPoint((FPoint *)&local_48,(TPoint *)&local_78);
      local_b0 = CONCAT44(uStack_44,local_48);
    }
  }
  else {
    SimpleMatrix::TransformPoint((FPoint *)aTStack_60);
    GetEmitterPos((PIEmitterInstance *)this,SUB81(param_2,0));
    TPoint<float>::operator+=((TPoint<float> *)&local_78,(TPoint *)&local_48);
    local_b0 = CONCAT44(uStack_74,local_78);
  }
LAB_053c6fe4:
  fVar14 = *(float *)(param_1 + 0x20);
  *(undefined8 *)(param_6 + 0xa8) = local_b0;
  FUN_053b9a78(fVar14 + (float)local_b0,*(float *)(param_1 + 0x24) + local_b0._4_4_,param_6 + 0xd8,
               param_6 + 0xdc);
  if (*(float *)(param_1 + 0x28) != 0.0) {
    SimpleMatrix::RotateRad(this_00,*(float *)(param_1 + 0x28));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Sexy::PIEffect::UpdateParticleGroupSuperEmitter(Sexy::PILayer*, Sexy::PIEmitterInstance*,
   Sexy::PIParticleGroup*) */

void __thiscall
Sexy::PIEffect::UpdateParticleGroupSuperEmitter
          (PIEffect *this,PILayer *param_1,PIEmitterInstance *param_2,PIParticleGroup *param_3)

{
  bool bVar1;
  SimpleMatrix *pSVar2;
  TPoint<float> *this_00;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  PIParticleDef *pPVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  TPoint<float> *pTVar12;
  PIValue *pPVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  PIParticleInstance *pPVar17;
  PIEmitter *pPVar18;
  ulong uVar19;
  PIParticleGroup PVar20;
  PIParticleDef PVar21;
  undefined8 uVar22;
  PIParticleInstance *pPVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  long local_f0;
  undefined8 local_a0;
  undefined8 local_98;
  FPoint aFStack_90 [8];
  undefined8 local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  FastCurve aFStack_70 [8];
  float local_68;
  float local_64;
  undefined8 local_60;
  PieceConfig aPStack_58 [8];
  float local_50 [2];
  undefined4 local_48 [2];
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  lVar16 = *(long *)param_1;
  local_8 = ___stack_chk_guard;
  lVar7 = *(long *)(param_2 + 0x38);
  fVar24 = 1000.0 / (*(float *)(this + 0x1540) * *(float *)(this + 0x15bc));
  if (*(PIParticleInstance **)param_3 != (PIParticleInstance *)0x0) {
    fVar35 = 1.0 / fVar24;
    pPVar23 = *(PIParticleInstance **)param_3;
    do {
      fVar34 = *(float *)(pPVar23 + 100);
      pPVar17 = *(PIParticleInstance **)pPVar23;
      pPVar8 = *(PIParticleDef **)(pPVar23 + 8);
      fVar25 = fVar34 + fVar35;
      pPVar18 = *(PIEmitter **)(pPVar23 + 0x78);
      *(float *)(pPVar23 + 100) = fVar25;
      if ((pPVar8 == (PIParticleDef *)0x0) || (pPVar8[0xc82] == (PIParticleDef)0x0)) {
        fVar25 = fVar25 / *(float *)(pPVar23 + 0x68);
      }
      else {
        fVar25 = (float)PIValue::GetNextKeyframeTime
                                  ((PIValue *)(*(long *)(param_2 + 0x38) + 0x658),
                                   *(float *)(this + 0x14e8));
        local_50[0] = fVar25;
        iVar6 = PIValue::GetNextKeyframeIdx
                          ((PIValue *)(*(long *)(param_2 + 0x38) + 0x658),*(float *)(this + 0x14e8))
        ;
        fVar27 = *(float *)(this + 0x14e8);
        if ((fVar25 < fVar27) || (iVar6 != 1)) {
          fVar25 = 0.02;
        }
        else {
          iVar6 = *(int *)(lVar7 + 8);
          local_40 = 1.0;
          local_48[0] = 0x3f800000;
          pfVar14 = eastl::max_alt<float>((float *)local_48,local_50);
          local_38 = ((float)iVar6 + fVar27) / *pfVar14;
          pfVar14 = eastl::min_alt<float>(&local_40,&local_38);
          fVar25 = *pfVar14;
        }
      }
      *(float *)(pPVar23 + 0x6c) = fVar25;
      if (((0.9999999 <= fVar25) || (*(float *)(pPVar23 + 0x68) <= 1e-08)) ||
         ((param_2[0x40] == (PIEmitterInstance)0x0 && (*(char *)(lVar7 + 0x20) == '\0')))) {
        if (param_3[0x14] == (PIParticleGroup)0x0) {
          if ((pPVar8[0xc82] != (PIParticleDef)0x0) &&
             (PVar20 = (PIParticleGroup)0x0, param_2[0x40] != (PIEmitterInstance)0x0))
          goto LAB_053c761c;
          ObjectPool<Sexy::PIParticleInstance>::Free
                    ((ObjectPool<Sexy::PIParticleInstance> *)(this + 0x14f0),pPVar23);
LAB_053c772c:
          puVar10 = *(undefined8 **)(pPVar23 + 0x88);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = *(undefined8 *)pPVar23;
          }
          lVar15 = *(long *)pPVar23;
          if (lVar15 != 0) {
            *(undefined8 **)(lVar15 + 0x88) = puVar10;
          }
          if (*(PIParticleInstance **)param_3 == pPVar23) {
            *(long *)param_3 = lVar15;
          }
          if (*(PIParticleInstance **)(param_3 + 8) == pPVar23) {
            *(undefined8 *)(param_3 + 8) = *(undefined8 *)(pPVar23 + 0x88);
          }
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
        }
        else if (*(long *)(pPVar23 + 0x138) == 0) {
          ObjectPool<Sexy::PIFreeEmitterInstance>::Free
                    ((ObjectPool<Sexy::PIFreeEmitterInstance> *)(this + 0x1510),
                     (PIFreeEmitterInstance *)pPVar23);
          goto LAB_053c772c;
        }
      }
      else {
        if (pPVar8 == (PIParticleDef *)0x0) {
          PVar20 = param_3[0x14];
        }
        else {
          PVar20 = param_3[0x14];
LAB_053c761c:
          plVar9 = (long *)FUN_053b9b0c(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                                        (long)*(int *)(pPVar8 + 0x18));
          if (*(int *)(pPVar8 + 0xc88) == -1) {
            iVar6 = *(int *)(*plVar9 + 0x40);
            iVar3 = 0;
            if (iVar6 != 0) {
              iVar3 = *(int *)(pPVar23 + 0xc4) / iVar6;
            }
            *(int *)(pPVar23 + 0x2c) = *(int *)(pPVar23 + 0xc4) - iVar3 * iVar6;
          }
          else {
            iVar3 = *(int *)(*plVar9 + 0x40);
            iVar6 = (int)(((float)*(int *)(this + 0x1470) * *(float *)(pPVar23 + 100)) /
                         (float)(*(int *)(pPVar8 + 0xc88) + 1)) + *(int *)(pPVar23 + 0xc4);
            iVar4 = 0;
            if (iVar3 != 0) {
              iVar4 = iVar6 / iVar3;
            }
            *(int *)(pPVar23 + 0x2c) = iVar6 - iVar4 * iVar3;
          }
        }
        if (PVar20 == (PIParticleGroup)0x0) {
          if (pPVar8[0xc82] == (PIParticleDef)0x0) {
            if (this[0x14ec] != (PIEffect)0x0) goto LAB_053c8538;
LAB_053c84e0:
            if (param_3[0x15] == (PIParticleGroup)0x0) {
              fVar27 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x268),
                                                  *(float *)(this + 0x14e8),0.0);
            }
            else {
              fVar27 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x5b8),
                                                  *(float *)(this + 0x14e8),0.0);
            }
            fVar28 = (float)PIValue::GetValueAt((PIValue *)(pPVar8 + 0x818),fVar25,0.0);
            fVar26 = (float)PIValue::GetValueAt((PIValue *)(pPVar8 + 0x1f8),
                                                *(float *)(this + 0x14e8),0.0);
            fVar32 = *(float *)(pPVar23 + 0x40);
            fVar33 = 100.0;
            goto LAB_053c7898;
          }
          iVar6 = *(int *)(lVar7 + 0x10);
          if ((iVar6 == 4) || (iVar6 == 1)) {
            iVar6 = *(int *)(lVar7 + 0x18);
LAB_053c8890:
            if (iVar6 != 0) {
              GetGeomPos((PIEmitterInstance *)this,(PIParticleInstance *)param_2,(float *)pPVar23,
                         (bool *)0x0);
              GetEmitterPos((PIEmitterInstance *)this,SUB81(param_2,0));
              *(ulong *)(pPVar23 + 0xa0) = CONCAT44(fStack_34,local_38);
              *(ulong *)(pPVar23 + 0xa8) = CONCAT44(fStack_34,local_38);
              TPoint<float>::operator-((TPoint<float> *)local_48,(TPoint *)(pPVar23 + 0xa0));
              FPoint::FPoint((FPoint *)&local_38,(TPoint *)&local_40);
              *(ulong *)(pPVar23 + 0x98) = CONCAT44(fStack_34,local_38);
              SexyTransform2D::SexyTransform2D((SexyTransform2D *)aSStack_30);
              fVar34 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x6c8),
                                                  *(float *)(this + 0x14e8),0.0);
              SexyTransform2D::RotateDeg((SexyTransform2D *)aSStack_30,fVar34);
              TransformFPoint(aSStack_30,(FPoint *)local_48);
              TPoint<float>::operator+=((TPoint<float> *)(pPVar23 + 0xa0),(TPoint *)&local_38);
            }
          }
          else if (iVar6 == 3) {
            iVar6 = *(int *)(lVar7 + 0x18) * *(int *)(lVar7 + 0x1c);
            goto LAB_053c8890;
          }
          if ((pPVar8[0xcb0] != (PIParticleDef)0x0) && (pPVar8[0xc84] == (PIParticleDef)0x0)) {
            PIValue2D::GetVelocityAt(*(float *)(this + 0x14e8));
            fVar26 = (float)TPoint<float>::Magnitude((TPoint<float> *)&local_38);
            fVar34 = fStack_34;
            fVar27 = local_38;
            if (fVar26 != 0.0) goto LAB_053c7aac;
LAB_053c7ab4:
            fVar34 = (float)FUN_053b9a64((float)*(int *)(pPVar8 + 0xcb4));
            *(float *)(pPVar23 + 0x28) = fVar34 + fVar26;
          }
LAB_053c7acc:
          if (pPVar23[0xf0] == (PIParticleInstance)0x0) {
            if (pPVar8[0xca2] == (PIParticleDef)0x0) {
              PVar21 = pPVar8[0xca3];
            }
            else {
              PVar21 = (PIParticleDef)0x1;
            }
            if (pPVar8[0xca4] == (PIParticleDef)0x0) goto LAB_053c7af0;
LAB_053c82dc:
            bVar1 = true;
LAB_053c82e0:
            SexyMatrix3::SexyMatrix3(aSStack_30,(SimpleMatrix *)(pPVar23 + 200));
            DVec2::DVec2((DVec2 *)&local_38,0.0,0.0);
            TransformFPoint(aSStack_30,(FPoint *)&local_38);
            plVar9 = *(long **)(param_1 + 0x40);
            iVar6 = (int)local_40 + *(int *)(param_1 + 0x48);
            iVar3 = (int)local_3c + *(int *)(param_1 + 0x4c);
            if (plVar9 == (long *)0x0) {
              uVar19 = 0;
            }
            else if ((iVar6 < 0) || (iVar3 < 0)) {
              uVar19 = 0;
            }
            else {
              uVar19 = 0;
              if ((iVar6 < (int)plVar9[7]) && (iVar3 < *(int *)((long)plVar9 + 0x3c))) {
                lVar15 = (**(code **)(*plVar9 + 0xd0))(plVar9,0,0,0);
                uVar19 = (ulong)*(uint *)(lVar15 + (long)(iVar6 + iVar3 * *(int *)(*(long *)(param_1
                                                                                            + 0x40)
                                                                                  + 0x38)) * 4);
              }
            }
            if (PVar21 != (PIParticleDef)0x0) {
              *(ulong *)(pPVar23 + 0xf8) =
                   uVar19 & 0xffffff | *(ulong *)(pPVar23 + 0xf8) & 0xff000000;
            }
            if (!bVar1) goto LAB_053c7b00;
            *(ulong *)(pPVar23 + 0xf8) = uVar19 & 0xff000000 | *(ulong *)(pPVar23 + 0xf8) & 0xffffff
            ;
            PVar20 = param_3[0x14];
          }
          else {
            PVar21 = pPVar8[0xca3];
LAB_053c7af0:
            if (pPVar8[0xca5] != (PIParticleDef)0x0) goto LAB_053c82dc;
            if (PVar21 != (PIParticleDef)0x0) {
              bVar1 = false;
              goto LAB_053c82e0;
            }
LAB_053c7b00:
            PVar20 = param_3[0x14];
          }
          if (PVar20 == (PIParticleGroup)0x0) {
            if (pPVar8[0xcb0] == (PIParticleDef)0x0) {
              if (param_3[0x15] == (PIParticleGroup)0x0) {
                fVar34 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x2d8),
                                                    *(float *)(this + 0x14e8),0.0);
              }
              else {
                fVar34 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x628),
                                                    *(float *)(this + 0x14e8),0.0);
              }
              fVar25 = (float)PIValue::GetValueAt((PIValue *)(pPVar8 + 0x888),fVar25,0.0);
              fVar27 = (float)PIValue::GetValueAt((PIValue *)(pPVar8 + 0x268),
                                                  *(float *)(this + 0x14e8),0.0);
              fVar25 = (float)FUN_053b9a64((fVar27 + *(float *)(pPVar23 + 0x44)) * fVar34 *
                                           (1.0 - fVar25));
              *(float *)(pPVar23 + 0x28) = *(float *)(pPVar23 + 0x28) + fVar25 * fVar35;
            }
            goto LAB_053c7778;
          }
          if (param_3[0x15] == (PIParticleGroup)0x0) goto LAB_053c849c;
LAB_053c7b18:
          fVar34 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x628),*(float *)(this + 0x14e8)
                                              ,0.0);
        }
        else {
          if (this[0x14ec] == (PIEffect)0x0) {
            if (param_3[0x15] == (PIParticleGroup)0x0) goto LAB_053c874c;
LAB_053c784c:
            fVar27 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x5b8),
                                                *(float *)(this + 0x14e8),0.0);
          }
          else {
LAB_053c8538:
            fVar27 = (float)GetRandFloat(this);
            fVar26 = (float)GetRandFloat(this);
            fVar28 = (float)GetRandFloat(this);
            fVar32 = (float)GetRandFloat(this);
            if (param_3[0x14] == (PIParticleGroup)0x0) {
              local_40 = 0.0;
              if (param_3[0x15] == (PIParticleGroup)0x0) {
                fVar33 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x348),
                                                    *(float *)(this + 0x14e8),0.0);
              }
              else {
                fVar33 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x698),
                                                    *(float *)(this + 0x14e8),0.0);
              }
              fVar29 = (float)PIValue::GetValueAt((PIValue *)(pPVar8 + 0x8f8),fVar25,0.0);
              fVar30 = (float)PIValue::GetValueAt((PIValue *)(pPVar8 + 0x2d8),
                                                  *(float *)(this + 0x14e8),0.0);
              local_38 = fVar29 * fVar33 * (fVar30 + *(float *)(pPVar23 + 0x38));
              pfVar14 = eastl::max_alt<float>(&local_40,&local_38);
              fVar33 = *pfVar14;
            }
            else {
              local_40 = 0.0;
              if (param_3[0x15] == (PIParticleGroup)0x0) {
                fVar33 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x348),
                                                    *(float *)(this + 0x14e8),0.0);
              }
              else {
                fVar33 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x698),
                                                    *(float *)(this + 0x14e8),0.0);
              }
              fVar29 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x1118),fVar25,1.0);
              fVar30 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x238),
                                                  *(float *)(this + 0x14e8),0.0);
              local_38 = fVar29 * fVar33 * (fVar30 + *(float *)(pPVar23 + 0x38));
              pfVar14 = eastl::max_alt<float>(&local_40,&local_38);
              fVar33 = *pfVar14 * 30.0;
            }
            PVar20 = param_3[0x14];
            *(float *)(pPVar23 + 0x20) = *(float *)(pPVar23 + 0x20) + fVar33 * fVar26 * fVar27;
            *(float *)(pPVar23 + 0x24) = *(float *)(pPVar23 + 0x24) + fVar33 * fVar32 * fVar28;
            if (PVar20 == (PIParticleGroup)0x0) goto LAB_053c84e0;
            if (param_3[0x15] != (PIParticleGroup)0x0) goto LAB_053c784c;
LAB_053c874c:
            fVar27 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x268),
                                                *(float *)(this + 0x14e8),0.0);
          }
          fVar28 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x1038),fVar25,1.0);
          fVar26 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x158),*(float *)(this + 0x14e8)
                                              ,0.0);
          fVar32 = *(float *)(pPVar23 + 0x40);
          fVar33 = 50.0;
LAB_053c7898:
          fVar29 = 1.0;
          *(float *)(pPVar23 + 0x24) =
               *(float *)(pPVar23 + 0x24) +
               (fVar28 * fVar27 * fVar33 - fVar27 * fVar33) * (fVar26 + fVar32) *
               (((float)*(int *)(this + 0x1470) + -100.0) * 0.0005 + 1.0) * fVar35;
          TPoint<float>::operator/((TPoint<float> *)(pPVar23 + 0x20),fVar24);
          FPoint::FPoint((FPoint *)&local_a0,(TPoint *)&local_38);
          if (param_3[0x14] == (PIParticleGroup)0x0) {
            fVar29 = 0.0;
            pPVar13 = (PIValue *)(pPVar8 + 0x7a8);
          }
          else {
            pPVar13 = (PIValue *)(pPVar18 + 0xfc8);
          }
          fVar27 = (float)PIValue::GetValueAt(pPVar13,fVar25,fVar29);
          TPoint<float>::operator*((TPoint<float> *)&local_a0,fVar27);
          FPoint::FPoint((FPoint *)&local_38,(TPoint *)&local_40);
          local_a0 = CONCAT44(fStack_34,local_38);
          PieceConfig::PieceConfig((PieceConfig *)&local_98);
          if ((fVar34 == 0.0) ||
             (lVar15 = FUN_053b9cb4(*(undefined8 *)(lVar16 + 0x20),*(undefined8 *)(lVar16 + 0x28)),
             lVar15 == 0)) {
            TPoint<float>::operator+=((TPoint<float> *)(pPVar23 + 0x18),(TPoint *)&local_a0);
            uVar22 = *(undefined8 *)(lVar16 + 0x50);
            lVar15 = FUN_053b9d1c(uVar22,*(undefined8 *)(lVar16 + 0x58));
            iVar6 = 0;
            if (lVar15 != 0) {
              CalcParticleTransform(this,param_1,param_2,pPVar18,pPVar8,param_3,pPVar23);
              SexyMatrix3::SexyMatrix3(aSStack_30,(SimpleMatrix *)(pPVar23 + 200));
              DVec2::DVec2((DVec2 *)&local_40,0.0,0.0);
              TransformFPoint(aSStack_30,(FPoint *)&local_40);
              local_98 = CONCAT44(fStack_34,local_38);
              uVar22 = *(undefined8 *)(lVar16 + 0x50);
              iVar6 = FUN_053b9d1c(uVar22,*(undefined8 *)(lVar16 + 0x58));
            }
          }
          else {
            pSVar2 = (SimpleMatrix *)(pPVar23 + 200);
            this_00 = (TPoint<float> *)(pPVar23 + 0x18);
            SexyMatrix3::SexyMatrix3(aSStack_30,pSVar2);
            local_f0 = 0;
            DVec2::DVec2((DVec2 *)&local_38,0.0,0.0);
            TransformFPoint(aSStack_30,(FPoint *)&local_38);
            FPoint::FPoint((FPoint *)&local_88,(TPoint *)this_00);
            TPoint<float>::operator+=(this_00,(TPoint *)&local_a0);
            CalcParticleTransform(this,param_1,param_2,pPVar18,pPVar8,param_3,pPVar23);
            SexyMatrix3::SexyMatrix3(aSStack_30,pSVar2);
            DVec2::DVec2((DVec2 *)&local_40,0.0,0.0);
            TransformFPoint(aSStack_30,(FPoint *)&local_40);
            local_98 = CONCAT44(fStack_34,local_38);
            uVar22 = *(undefined8 *)(lVar16 + 0x20);
            iVar6 = FUN_053b9cb4(uVar22,*(undefined8 *)(lVar16 + 0x28));
            if (0 < iVar6) {
              do {
                lVar15 = FUN_053b9d48(uVar22,local_f0);
                fVar34 = (float)PIValue::GetLastKeyframe
                                          ((PIValue *)(lVar15 + 0x78),*(float *)(this + 0x14e8));
                if (0.99 <= fVar34) {
                  uVar22 = *(undefined8 *)(lVar15 + 0x170);
                  lVar11 = 1;
                  iVar6 = FUN_053b9da0(uVar22,*(undefined8 *)(lVar15 + 0x178));
                  if (1 < iVar6) {
                    do {
                      pTVar12 = (TPoint<float> *)FUN_053b9c64(uVar22,lVar11 + -1);
                      DVec2::DVec2((DVec2 *)&local_40,*(float *)(this + 0x157c),
                                   *(float *)(this + 0x1588));
                      TPoint<float>::operator-(pTVar12,(TPoint *)&local_40);
                      FPoint::FPoint((FPoint *)&local_80,(TPoint *)&local_38);
                      pTVar12 = (TPoint<float> *)
                                FUN_053b9c64(*(undefined8 *)(lVar15 + 0x170),lVar11);
                      DVec2::DVec2((DVec2 *)&local_40,*(float *)(this + 0x157c),
                                   *(float *)(this + 0x1588));
                      TPoint<float>::operator-(pTVar12,(TPoint *)&local_40);
                      FPoint::FPoint((FPoint *)&local_78,(TPoint *)&local_38);
                      fVar34 = local_74 - local_7c;
                      FastCurve::SetOutRange(aFStack_70,local_78 - local_80,fVar34);
                      local_38 = (float)SexyVector2::Normalize((SexyVector2 *)aFStack_70);
                      fStack_34 = fVar34;
                      local_68 = (float)SexyVector2::Perp((SexyVector2 *)&local_38);
                      local_64 = fVar34;
                      DVec2::DVec2((DVec2 *)&local_60,local_68,fVar34);
                      TPoint<float>::operator*((TPoint<float> *)&local_60,*(float *)(lVar15 + 0x10))
                      ;
                      TPoint<float>::operator*((TPoint<float> *)local_48,*(float *)(pPVar23 + 0xec))
                      ;
                      FPoint::FPoint((FPoint *)&local_38,(TPoint *)&local_40);
                      local_60 = CONCAT44(fStack_34,local_38);
                      PieceConfig::PieceConfig(aPStack_58);
                      UI::UDim::operator+((UDim *)&local_80,(UDim *)&local_60);
                      FPoint::FPoint((FPoint *)&local_40,(TPoint *)local_50);
                      UI::UDim::operator+((UDim *)&local_78,(UDim *)&local_60);
                      FPoint::FPoint((FPoint *)&local_38,(TPoint *)local_48);
                      cVar5 = LineSegmentIntersects
                                        (aFStack_90,(FPoint *)&local_98,(FPoint *)&local_40,
                                         (FPoint *)&local_38,(float *)0x0,(FPoint *)aPStack_58);
                      if ((cVar5 != '\0') &&
                         (fVar34 = (float)GetRandFloatU(this), fVar34 <= *(float *)(lVar15 + 0xc)))
                      {
                        fVar34 = *(float *)(lVar15 + 8);
                        if (param_3[0x14] == (PIParticleGroup)0x0) {
                          if (param_3[0x15] == (PIParticleGroup)0x0) {
                            fVar27 = (float)PIValue::GetValueAt((PIValue *)
                                                                (*(long *)(param_2 + 0x38) + 0x3b8),
                                                                *(float *)(this + 0x14e8),0.0);
                          }
                          else {
                            fVar27 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x708),
                                                                *(float *)(this + 0x14e8),0.0);
                          }
                          fVar26 = (float)PIValue::GetValueAt((PIValue *)(pPVar8 + 0x968),fVar25,0.0
                                                             );
                          pPVar13 = (PIValue *)(pPVar8 + 0x348);
                        }
                        else {
                          if (param_3[0x15] == (PIParticleGroup)0x0) {
                            fVar27 = (float)PIValue::GetValueAt((PIValue *)
                                                                (*(long *)(param_2 + 0x38) + 0x3b8),
                                                                *(float *)(this + 0x14e8),0.0);
                          }
                          else {
                            fVar27 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x708),
                                                                *(float *)(this + 0x14e8),0.0);
                          }
                          fVar26 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x1188),fVar25,
                                                              1.0);
                          pPVar13 = (PIValue *)(pPVar18 + 0x2a8);
                        }
                        fVar28 = (float)PIValue::GetValueAt(pPVar13,*(float *)(this + 0x14e8),0.0);
                        fVar26 = fVar27 * fVar26 * fVar34 * (fVar28 + *(float *)(pPVar23 + 0x50));
                        fVar34 = local_a0._4_4_;
                        FastCurve::SetOutRange((FastCurve *)local_50,(float)local_a0,local_a0._4_4_)
                        ;
                        fVar27 = (float)DVec2::dot((DVec2 *)local_50,(DVec2 *)&local_68);
                        local_40 = (float)SexyVector2::operator*((SexyVector2 *)&local_68,2.0);
                        local_3c = fVar34;
                        local_38 = (float)SexyVector2::operator*((SexyVector2 *)&local_40,fVar27);
                        fStack_34 = fVar34;
                        fVar27 = (float)SexyVector2::operator-
                                                  ((SexyVector2 *)local_50,(SexyVector2 *)&local_38)
                        ;
                        local_40 = 1.0;
                        local_38 = ABS(fVar34 / fVar27);
                        pfVar14 = eastl::min_alt<float>(&local_40,&local_38);
                        DVec2::DVec2((DVec2 *)local_48,fVar27,
                                     ((1.0 - *pfVar14) + SQRT(fVar26) * *pfVar14) * fVar34);
                        TPoint<float>::operator*((TPoint<float> *)local_48,100.0);
                        FPoint::FPoint((FPoint *)&local_38,(TPoint *)&local_40);
                        *(ulong *)(pPVar23 + 0x20) = CONCAT44(fStack_34,local_38);
                        if (0.001 < fVar26) {
                          *(undefined8 *)this_00 = local_88;
                        }
                        CalcParticleTransform(this,param_1,param_2,pPVar18,pPVar8,param_3,pPVar23);
                        SexyMatrix3::SexyMatrix3(aSStack_30,pSVar2);
                        DVec2::DVec2((DVec2 *)&local_40,0.0,0.0);
                        TransformFPoint(aSStack_30,(FPoint *)&local_40);
                        local_98 = CONCAT44(fStack_34,local_38);
                      }
                      lVar11 = lVar11 + 1;
                      uVar22 = *(undefined8 *)(lVar15 + 0x170);
                      iVar6 = FUN_053b9da0(uVar22,*(undefined8 *)(lVar15 + 0x178));
                    } while ((int)lVar11 < iVar6);
                  }
                }
                local_f0 = local_f0 + 1;
                uVar22 = *(undefined8 *)(lVar16 + 0x20);
                iVar6 = FUN_053b9cb4(uVar22,*(undefined8 *)(lVar16 + 0x28));
              } while ((int)local_f0 < iVar6);
            }
            uVar22 = *(undefined8 *)(lVar16 + 0x50);
            iVar6 = FUN_053b9d1c(uVar22,*(undefined8 *)(lVar16 + 0x58));
          }
          lVar15 = 0;
          if (0 < iVar6) {
            do {
              lVar11 = FUN_053b9d8c(uVar22,lVar15);
              fVar34 = (float)PIValue::GetLastKeyframe
                                        ((PIValue *)(lVar11 + 0x150),*(float *)(this + 0x14e8));
              if (0.99 <= fVar34) {
                fVar34 = *(float *)(lVar11 + 0x314);
                fVar27 = *(float *)(lVar11 + 0x32c);
                if (local_98._4_4_ < fVar34) {
                  if (fVar27 <= local_98._4_4_) goto LAB_053c80d8;
                  fVar26 = *(float *)(lVar11 + 0x31c);
                  if (local_98._4_4_ < fVar26) goto LAB_053c8278;
                  fVar28 = *(float *)(lVar11 + 0x310);
                  bVar1 = false;
LAB_053c824c:
                  if ((float)local_98 <
                      ((local_98._4_4_ - fVar26) * (fVar28 - *(float *)(lVar11 + 0x318))) /
                      (fVar34 - fVar26) + *(float *)(lVar11 + 0x318)) {
                    bVar1 = (bool)(bVar1 ^ 1);
                  }
LAB_053c7a08:
                  fVar34 = *(float *)(lVar11 + 0x324);
                  if (local_98._4_4_ < fVar34) {
joined_r0x053c846c:
                    if (fVar26 <= local_98._4_4_) {
LAB_053c8128:
                      if ((float)local_98 <
                          ((local_98._4_4_ - fVar34) *
                          (*(float *)(lVar11 + 0x318) - *(float *)(lVar11 + 800))) /
                          (fVar26 - fVar34) + *(float *)(lVar11 + 800)) {
                        bVar1 = (bool)(bVar1 ^ 1);
                      }
                      goto LAB_053c8154;
                    }
                    if (fVar27 <= local_98._4_4_) goto LAB_053c7a2c;
                    goto LAB_053c7a24;
                  }
                  if (local_98._4_4_ < fVar26) goto LAB_053c8128;
                  if (local_98._4_4_ < fVar27) goto LAB_053c7a24;
                }
                else {
                  if (fVar27 <= local_98._4_4_) {
                    fVar26 = *(float *)(lVar11 + 0x31c);
                    if (local_98._4_4_ < fVar26) {
LAB_053c8278:
                      bVar1 = false;
                      goto LAB_053c827c;
                    }
                    bVar1 = false;
                    goto LAB_053c7a08;
                  }
LAB_053c80d8:
                  fVar28 = *(float *)(lVar11 + 0x310);
                  fVar26 = *(float *)(lVar11 + 0x31c);
                  bVar1 = (float)local_98 <
                          ((local_98._4_4_ - fVar34) * (*(float *)(lVar11 + 0x328) - fVar28)) /
                          (fVar27 - fVar34) + fVar28;
                  if (local_98._4_4_ < fVar26) {
LAB_053c827c:
                    if ((fVar34 <= local_98._4_4_) && (local_98._4_4_ < fVar26)) {
                      fVar28 = *(float *)(lVar11 + 0x310);
                      goto LAB_053c824c;
                    }
                    fVar34 = *(float *)(lVar11 + 0x324);
                    if (local_98._4_4_ < fVar34) goto joined_r0x053c846c;
                    goto LAB_053c8128;
                  }
                  if (local_98._4_4_ < fVar34) goto LAB_053c824c;
                  fVar34 = *(float *)(lVar11 + 0x324);
                  if (local_98._4_4_ < fVar34) goto joined_r0x053c846c;
LAB_053c8154:
                  if (local_98._4_4_ < fVar27) {
LAB_053c7a24:
                    if (local_98._4_4_ < fVar34) goto joined_r0x053c8164;
                  }
                  else if (fVar34 <= local_98._4_4_) goto joined_r0x053c8164;
LAB_053c7a2c:
                  if ((float)local_98 <
                      ((local_98._4_4_ - fVar27) *
                      (*(float *)(lVar11 + 800) - *(float *)(lVar11 + 0x328))) / (fVar34 - fVar27) +
                      *(float *)(lVar11 + 0x328)) {
                    bVar1 = (bool)(bVar1 ^ 1);
                  }
                }
joined_r0x053c8164:
                if (bVar1) {
                  fVar34 = (float)PIValue::GetValueAt((PIValue *)(lVar11 + 0xe0),
                                                      *(float *)(this + 0x14e8),0.0);
                  fVar34 = (float)FUN_053b9a64(-fVar34);
                  fVar27 = (float)PIValue::GetValueAt((PIValue *)(lVar11 + 0x1c0),
                                                      *(float *)(this + 0x14e8),0.0);
                  fVar27 = (float)FUN_053b9a64(-fVar27);
                  iVar6 = *(int *)(this + 0x1470);
                  fVar26 = (float)PIValue::GetValueAt((PIValue *)(lVar11 + 0x70),
                                                      *(float *)(this + 0x14e8),0.0);
                  dVar31 = cos((double)(fVar27 + fVar34));
                  dVar36 = (double)((float)iVar6 * 0.00085 * (((float)iVar6 + -100.0) * 0.004 + 1.0)
                                   * fVar26);
                  *(float *)(pPVar23 + 0x20) =
                       (float)((double)*(float *)(pPVar23 + 0x20) + dVar36 * dVar31 * 100.0);
                  dVar31 = sin((double)(fVar27 + fVar34));
                  *(float *)(pPVar23 + 0x24) =
                       (float)((double)*(float *)(pPVar23 + 0x24) + dVar36 * dVar31 * 100.0);
                }
              }
              lVar15 = lVar15 + 1;
              uVar22 = *(undefined8 *)(lVar16 + 0x50);
              iVar6 = FUN_053b9d1c(uVar22,*(undefined8 *)(lVar16 + 0x58));
            } while ((int)lVar15 < iVar6);
          }
          if (param_3[0x14] == (PIParticleGroup)0x0) {
            if ((pPVar8[0xcaf] != (PIParticleDef)0x0) && (pPVar8[0xcb0] != (PIParticleDef)0x0)) {
              fVar34 = local_a0._4_4_;
              fVar27 = (float)local_a0;
LAB_053c7aac:
              fVar26 = atan2f(fVar34,fVar27);
              goto LAB_053c7ab4;
            }
            goto LAB_053c7acc;
          }
          if (pPVar8 != (PIParticleDef *)0x0) goto LAB_053c7acc;
          if (param_3[0x15] != (PIParticleGroup)0x0) goto LAB_053c7b18;
LAB_053c849c:
          fVar34 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x2d8),
                                              *(float *)(this + 0x14e8),0.0);
        }
        fVar25 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x10a8),fVar25,1.0);
        fVar27 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x1c8),*(float *)(this + 0x14e8),
                                            0.0);
        fVar25 = (float)FUN_053b9a64((fVar27 + *(float *)(pPVar23 + 0x44)) * fVar34 * (1.0 - fVar25)
                                    );
        *(float *)(pPVar23 + 0x28) = *(float *)(pPVar23 + 0x28) + fVar25 * fVar35 * 160.0;
      }
LAB_053c7778:
      pPVar23 = pPVar17;
    } while (pPVar17 != (PIParticleInstance *)0x0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Sexy::PIEffect::UpdateParticleGroupWithSingleParticles(Sexy::PILayer*, Sexy::PIEmitterInstance*,
   Sexy::PIParticleGroup*) */

void __thiscall
Sexy::PIEffect::UpdateParticleGroupWithSingleParticles
          (PIEffect *this,PILayer *param_1,PIEmitterInstance *param_2,PIParticleGroup *param_3)

{
  bool bVar1;
  SimpleMatrix *pSVar2;
  TPoint<float> *this_00;
  int iVar3;
  PIParticleInstance PVar4;
  PIParticleGroup PVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  TPoint<float> *pTVar11;
  PIValue *pPVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  PIParticleDef *pPVar16;
  PIParticleInstance *pPVar17;
  PIEmitter *pPVar18;
  ulong uVar19;
  PIParticleDef PVar20;
  undefined8 uVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  long local_d8;
  PIParticleInstance *local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  FPoint aFStack_90 [8];
  undefined8 local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  FastCurve aFStack_70 [8];
  float local_68;
  float local_64;
  undefined8 local_60;
  PieceConfig aPStack_58 [8];
  float local_50 [2];
  float local_48 [2];
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  lVar15 = *(long *)param_1;
  local_8 = ___stack_chk_guard;
  lVar9 = *(long *)(param_2 + 0x38);
  fVar23 = 1000.0 / (*(float *)(this + 0x1540) * *(float *)(this + 0x15bc));
  if (*(PIParticleInstance **)param_3 != (PIParticleInstance *)0x0) {
    fVar34 = 1.0 / fVar23;
    local_b8 = *(PIParticleInstance **)param_3;
    do {
      fVar33 = *(float *)(local_b8 + 100);
      pPVar17 = *(PIParticleInstance **)local_b8;
      pPVar16 = *(PIParticleDef **)(local_b8 + 8);
      fVar24 = fVar33 + fVar34;
      pPVar18 = *(PIEmitter **)(local_b8 + 0x78);
      *(float *)(local_b8 + 100) = fVar24;
      if (pPVar16 == (PIParticleDef *)0x0) {
        iVar8 = *(int *)(local_b8 + 0x30);
        fVar24 = fVar24 / *(float *)(local_b8 + 0x68);
        *(int *)(local_b8 + 0x30) = iVar8 + *(int *)(local_b8 + 0x34);
        *(float *)(local_b8 + 0x6c) = fVar24;
        if (0 < iVar8 + *(int *)(local_b8 + 0x34)) goto LAB_053c8b2c;
        FUN_053be4f0(this,local_b8,param_3);
      }
      else {
        if (pPVar16[0xc82] == (PIParticleDef)0x0) {
          fVar24 = fVar24 / *(float *)(local_b8 + 0x68);
          iVar8 = *(int *)(local_b8 + 0x30) + *(int *)(local_b8 + 0x34);
          *(int *)(local_b8 + 0x30) = iVar8;
          *(float *)(local_b8 + 0x6c) = fVar24;
        }
        else {
          fVar24 = (float)PIValue::GetNextKeyframeTime
                                    ((PIValue *)(*(long *)(param_2 + 0x38) + 0x658),
                                     *(float *)(this + 0x14e8));
          local_50[0] = fVar24;
          iVar8 = PIValue::GetNextKeyframeIdx
                            ((PIValue *)(*(long *)(param_2 + 0x38) + 0x658),
                             *(float *)(this + 0x14e8));
          fVar25 = *(float *)(this + 0x14e8);
          if ((fVar24 < fVar25) || (iVar8 != 1)) {
            fVar24 = 0.02;
          }
          else {
            iVar8 = *(int *)(lVar9 + 8);
            local_40 = 1.0;
            local_48[0] = 1.0;
            pfVar13 = eastl::max_alt<float>(local_48,local_50);
            local_38 = ((float)iVar8 + fVar25) / *pfVar13;
            pfVar13 = eastl::min_alt<float>(&local_40,&local_38);
            fVar24 = *pfVar13;
          }
          *(float *)(local_b8 + 0x6c) = fVar24;
          iVar8 = *(int *)(local_b8 + 0x30) + *(int *)(local_b8 + 0x34);
          *(int *)(local_b8 + 0x30) = iVar8;
        }
        if (iVar8 < 1) {
          FUN_053be4f0(this,local_b8,param_3);
        }
        else {
          plVar10 = (long *)FUN_053b9b0c(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                                         (long)*(int *)(pPVar16 + 0x18));
          if (*(int *)(pPVar16 + 0xc88) == -1) {
            iVar8 = *(int *)(*plVar10 + 0x40);
            iVar3 = 0;
            if (iVar8 != 0) {
              iVar3 = *(int *)(local_b8 + 0xc4) / iVar8;
            }
            *(int *)(local_b8 + 0x2c) = *(int *)(local_b8 + 0xc4) - iVar3 * iVar8;
          }
          else {
            iVar3 = *(int *)(*plVar10 + 0x40);
            iVar8 = (int)(((float)*(int *)(this + 0x1470) * *(float *)(local_b8 + 100)) /
                         (float)(*(int *)(pPVar16 + 0xc88) + 1)) + *(int *)(local_b8 + 0xc4);
            iVar6 = 0;
            if (iVar3 != 0) {
              iVar6 = iVar8 / iVar3;
            }
            *(int *)(local_b8 + 0x2c) = iVar8 - iVar6 * iVar3;
          }
LAB_053c8b2c:
          if (param_3[0x14] == (PIParticleGroup)0x0) {
            if (pPVar16[0xc82] == (PIParticleDef)0x0) {
              if (this[0x14ec] != (PIEffect)0x0) goto LAB_053c9990;
LAB_053c9918:
              if (param_3[0x15] == (PIParticleGroup)0x0) {
                fVar25 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x268),
                                                    *(float *)(this + 0x14e8),0.0);
              }
              else {
                fVar25 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x5b8),
                                                    *(float *)(this + 0x14e8),0.0);
              }
              fVar26 = (float)PIValue::GetValueAt((PIValue *)(pPVar16 + 0x818),fVar24,0.0);
              fVar29 = (float)PIValue::GetValueAt((PIValue *)(pPVar16 + 0x1f8),
                                                  *(float *)(this + 0x14e8),0.0);
              fVar32 = 100.0;
              fVar31 = *(float *)(local_b8 + 0x40);
              goto LAB_053c8e50;
            }
            iVar8 = *(int *)(lVar9 + 0x10);
            if ((iVar8 == 4) || (iVar8 == 1)) {
              iVar8 = *(int *)(lVar9 + 0x18);
joined_r0x053c9c3c:
              if (iVar8 != 0) {
                GetGeomPos((PIEmitterInstance *)this,(PIParticleInstance *)param_2,(float *)local_b8
                           ,(bool *)0x0);
                GetEmitterPos((PIEmitterInstance *)this,SUB81(param_2,0));
                *(ulong *)(local_b8 + 0xa0) = CONCAT44(fStack_34,local_38);
                *(ulong *)(local_b8 + 0xa8) = CONCAT44(fStack_34,local_38);
                TPoint<float>::operator-((TPoint<float> *)local_48,(TPoint *)(local_b8 + 0xa0));
                FPoint::FPoint((FPoint *)&local_38,(TPoint *)&local_40);
                *(ulong *)(local_b8 + 0x98) = CONCAT44(fStack_34,local_38);
                SexyTransform2D::SexyTransform2D((SexyTransform2D *)aSStack_30);
                fVar33 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x6c8),
                                                    *(float *)(this + 0x14e8),0.0);
                SexyTransform2D::RotateDeg((SexyTransform2D *)aSStack_30,fVar33);
                TransformFPoint(aSStack_30,(FPoint *)local_48);
                TPoint<float>::operator+=((TPoint<float> *)(local_b8 + 0xa0),(TPoint *)&local_38);
              }
            }
            else if (iVar8 == 3) {
              iVar8 = *(int *)(lVar9 + 0x18) * *(int *)(lVar9 + 0x1c);
              goto joined_r0x053c9c3c;
            }
            if ((pPVar16[0xcb0] == (PIParticleDef)0x0) || (pPVar16[0xc84] != (PIParticleDef)0x0))
            goto LAB_053c8b7c;
            PIValue2D::GetVelocityAt(*(float *)(this + 0x14e8));
            fVar29 = (float)TPoint<float>::Magnitude((TPoint<float> *)&local_38);
            fVar33 = local_38;
            fVar25 = fStack_34;
            if (fVar29 != 0.0) goto LAB_053c963c;
LAB_053c9644:
            fVar33 = (float)FUN_053b9a64((float)*(int *)(pPVar16 + 0xcb4));
            *(float *)(local_b8 + 0x28) = fVar33 + fVar29;
            PVar4 = local_b8[0xf0];
joined_r0x053c8b84:
            if (PVar4 == (PIParticleInstance)0x0) {
              if (pPVar16[0xca2] == (PIParticleDef)0x0) {
                PVar20 = pPVar16[0xca3];
              }
              else {
                PVar20 = (PIParticleDef)0x1;
              }
              if (pPVar16[0xca4] == (PIParticleDef)0x0) goto LAB_053c8ba4;
LAB_053c8c94:
              bVar1 = true;
LAB_053c8c98:
              SexyMatrix3::SexyMatrix3(aSStack_30,(SimpleMatrix *)(local_b8 + 200));
              DVec2::DVec2((DVec2 *)&local_38,0.0,0.0);
              TransformFPoint(aSStack_30,(FPoint *)&local_38);
              plVar10 = *(long **)(param_1 + 0x40);
              iVar8 = (int)local_40 + *(int *)(param_1 + 0x48);
              iVar3 = (int)local_3c + *(int *)(param_1 + 0x4c);
              if (plVar10 == (long *)0x0) {
                uVar19 = 0;
              }
              else if ((iVar8 < 0) || (iVar3 < 0)) {
                uVar19 = 0;
              }
              else {
                uVar19 = 0;
                if ((iVar8 < (int)plVar10[7]) && (iVar3 < *(int *)((long)plVar10 + 0x3c))) {
                  lVar14 = (**(code **)(*plVar10 + 0xd0))(plVar10,0,0,0);
                  uVar19 = (ulong)*(uint *)(lVar14 + (long)(iVar8 + iVar3 * *(int *)(*(long *)(
                                                  param_1 + 0x40) + 0x38)) * 4);
                }
              }
              if (PVar20 != (PIParticleDef)0x0) {
                *(ulong *)(local_b8 + 0xf8) =
                     uVar19 & 0xffffff | *(ulong *)(local_b8 + 0xf8) & 0xff000000;
              }
              if (!bVar1) goto LAB_053c8bb4;
              *(ulong *)(local_b8 + 0xf8) =
                   uVar19 & 0xff000000 | *(ulong *)(local_b8 + 0xf8) & 0xffffff;
              PVar5 = param_3[0x14];
            }
            else {
              PVar20 = pPVar16[0xca3];
LAB_053c8ba4:
              if (pPVar16[0xca5] != (PIParticleDef)0x0) goto LAB_053c8c94;
              if (PVar20 != (PIParticleDef)0x0) {
                bVar1 = false;
                goto LAB_053c8c98;
              }
LAB_053c8bb4:
              PVar5 = param_3[0x14];
            }
            if (PVar5 == (PIParticleGroup)0x0) {
              if (pPVar16[0xcb0] == (PIParticleDef)0x0) {
                if (param_3[0x15] == (PIParticleGroup)0x0) {
                  fVar33 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x2d8)
                                                      ,*(float *)(this + 0x14e8),0.0);
                }
                else {
                  fVar33 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x628),
                                                      *(float *)(this + 0x14e8),0.0);
                }
                fVar24 = (float)PIValue::GetValueAt((PIValue *)(pPVar16 + 0x888),fVar24,0.0);
                fVar25 = (float)PIValue::GetValueAt((PIValue *)(pPVar16 + 0x268),
                                                    *(float *)(this + 0x14e8),0.0);
                fVar24 = (float)FUN_053b9a64((fVar25 + *(float *)(local_b8 + 0x44)) * fVar33 *
                                             (1.0 - fVar24));
                *(float *)(local_b8 + 0x28) = *(float *)(local_b8 + 0x28) + fVar24 * fVar34;
              }
              goto LAB_053c8c40;
            }
            if (param_3[0x15] != (PIParticleGroup)0x0) goto LAB_053c8bcc;
LAB_053c985c:
            fVar33 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x2d8),
                                                *(float *)(this + 0x14e8),0.0);
          }
          else {
            if (this[0x14ec] != (PIEffect)0x0) {
LAB_053c9990:
              fVar25 = (float)GetRandFloat(this);
              fVar29 = (float)GetRandFloat(this);
              fVar26 = (float)GetRandFloat(this);
              fVar31 = (float)GetRandFloat(this);
              if (param_3[0x14] == (PIParticleGroup)0x0) {
                local_40 = 0.0;
                if (param_3[0x15] == (PIParticleGroup)0x0) {
                  fVar32 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x348)
                                                      ,*(float *)(this + 0x14e8),0.0);
                }
                else {
                  fVar32 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x698),
                                                      *(float *)(this + 0x14e8),0.0);
                }
                fVar27 = (float)PIValue::GetValueAt((PIValue *)(pPVar16 + 0x8f8),fVar24,0.0);
                fVar28 = (float)PIValue::GetValueAt((PIValue *)(pPVar16 + 0x2d8),
                                                    *(float *)(this + 0x14e8),0.0);
                local_38 = fVar27 * fVar32 * (fVar28 + *(float *)(local_b8 + 0x38));
                pfVar13 = eastl::max_alt<float>(&local_40,&local_38);
                fVar32 = *pfVar13;
              }
              else {
                local_40 = 0.0;
                if (param_3[0x15] == (PIParticleGroup)0x0) {
                  fVar32 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x348)
                                                      ,*(float *)(this + 0x14e8),0.0);
                }
                else {
                  fVar32 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x698),
                                                      *(float *)(this + 0x14e8),0.0);
                }
                fVar27 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x1118),fVar24,1.0);
                fVar28 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x238),
                                                    *(float *)(this + 0x14e8),0.0);
                local_38 = fVar27 * fVar32 * (fVar28 + *(float *)(local_b8 + 0x38));
                pfVar13 = eastl::max_alt<float>(&local_40,&local_38);
                fVar32 = *pfVar13 * 30.0;
              }
              PVar5 = param_3[0x14];
              *(float *)(local_b8 + 0x20) = *(float *)(local_b8 + 0x20) + fVar32 * fVar29 * fVar25;
              *(float *)(local_b8 + 0x24) = *(float *)(local_b8 + 0x24) + fVar32 * fVar31 * fVar26;
              if (PVar5 == (PIParticleGroup)0x0) goto LAB_053c9918;
            }
            if (param_3[0x15] == (PIParticleGroup)0x0) {
              fVar25 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x268),
                                                  *(float *)(this + 0x14e8),0.0);
            }
            else {
              fVar25 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x5b8),
                                                  *(float *)(this + 0x14e8),0.0);
            }
            fVar26 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x1038),fVar24,1.0);
            fVar29 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x158),
                                                *(float *)(this + 0x14e8),0.0);
            fVar32 = 50.0;
            fVar31 = *(float *)(local_b8 + 0x40);
LAB_053c8e50:
            fVar27 = 1.0;
            *(float *)(local_b8 + 0x24) =
                 *(float *)(local_b8 + 0x24) +
                 (fVar26 * fVar25 * fVar32 - fVar25 * fVar32) * (fVar29 + fVar31) *
                 (((float)*(int *)(this + 0x1470) + -100.0) * 0.0005 + 1.0) * fVar34;
            TPoint<float>::operator/((TPoint<float> *)(local_b8 + 0x20),fVar23);
            FPoint::FPoint((FPoint *)&local_a0,(TPoint *)&local_38);
            if (param_3[0x14] == (PIParticleGroup)0x0) {
              fVar27 = 0.0;
              pPVar12 = (PIValue *)(pPVar16 + 0x7a8);
            }
            else {
              pPVar12 = (PIValue *)(pPVar18 + 0xfc8);
            }
            fVar25 = (float)PIValue::GetValueAt(pPVar12,fVar24,fVar27);
            TPoint<float>::operator*((TPoint<float> *)&local_a0,fVar25);
            FPoint::FPoint((FPoint *)&local_38,(TPoint *)&local_40);
            local_a0 = CONCAT44(fStack_34,local_38);
            PieceConfig::PieceConfig((PieceConfig *)&local_98);
            if ((fVar33 == 0.0) ||
               (lVar14 = FUN_053b9cb4(*(undefined8 *)(lVar15 + 0x20),*(undefined8 *)(lVar15 + 0x28))
               , lVar14 == 0)) {
              TPoint<float>::operator+=((TPoint<float> *)(local_b8 + 0x18),(TPoint *)&local_a0);
              uVar21 = *(undefined8 *)(lVar15 + 0x50);
              lVar14 = FUN_053b9d1c(uVar21,*(undefined8 *)(lVar15 + 0x58));
              iVar8 = 0;
              if (lVar14 != 0) {
                CalcParticleTransform(this,param_1,param_2,pPVar18,pPVar16,param_3,local_b8);
                SexyMatrix3::SexyMatrix3(aSStack_30,(SimpleMatrix *)(local_b8 + 200));
                DVec2::DVec2((DVec2 *)&local_40,0.0,0.0);
                TransformFPoint(aSStack_30,(FPoint *)&local_40);
                local_98 = CONCAT44(fStack_34,local_38);
                uVar21 = *(undefined8 *)(lVar15 + 0x50);
                iVar8 = FUN_053b9d1c(uVar21,*(undefined8 *)(lVar15 + 0x58));
              }
            }
            else {
              pSVar2 = (SimpleMatrix *)(local_b8 + 200);
              this_00 = (TPoint<float> *)(local_b8 + 0x18);
              SexyMatrix3::SexyMatrix3(aSStack_30,pSVar2);
              local_d8 = 0;
              DVec2::DVec2((DVec2 *)&local_38,0.0,0.0);
              TransformFPoint(aSStack_30,(FPoint *)&local_38);
              FPoint::FPoint((FPoint *)&local_88,(TPoint *)this_00);
              TPoint<float>::operator+=(this_00,(TPoint *)&local_a0);
              CalcParticleTransform(this,param_1,param_2,pPVar18,pPVar16,param_3,local_b8);
              SexyMatrix3::SexyMatrix3(aSStack_30,pSVar2);
              DVec2::DVec2((DVec2 *)&local_40,0.0,0.0);
              TransformFPoint(aSStack_30,(FPoint *)&local_40);
              local_98 = CONCAT44(fStack_34,local_38);
              uVar21 = *(undefined8 *)(lVar15 + 0x20);
              iVar8 = FUN_053b9cb4(uVar21,*(undefined8 *)(lVar15 + 0x28));
              if (0 < iVar8) {
                do {
                  lVar14 = FUN_053b9d48(uVar21,local_d8);
                  fVar33 = (float)PIValue::GetLastKeyframe
                                            ((PIValue *)(lVar14 + 0x78),*(float *)(this + 0x14e8));
                  if (0.99 <= fVar33) {
                    uVar21 = *(undefined8 *)(lVar14 + 0x170);
                    lVar22 = 1;
                    iVar8 = FUN_053b9da0(uVar21,*(undefined8 *)(lVar14 + 0x178));
                    if (1 < iVar8) {
                      do {
                        pTVar11 = (TPoint<float> *)FUN_053b9c64(uVar21,lVar22 + -1);
                        DVec2::DVec2((DVec2 *)&local_40,*(float *)(this + 0x157c),
                                     *(float *)(this + 0x1588));
                        TPoint<float>::operator-(pTVar11,(TPoint *)&local_40);
                        FPoint::FPoint((FPoint *)&local_80,(TPoint *)&local_38);
                        pTVar11 = (TPoint<float> *)
                                  FUN_053b9c64(*(undefined8 *)(lVar14 + 0x170),lVar22);
                        DVec2::DVec2((DVec2 *)&local_40,*(float *)(this + 0x157c),
                                     *(float *)(this + 0x1588));
                        TPoint<float>::operator-(pTVar11,(TPoint *)&local_40);
                        FPoint::FPoint((FPoint *)&local_78,(TPoint *)&local_38);
                        fVar33 = local_74 - local_7c;
                        FastCurve::SetOutRange(aFStack_70,local_78 - local_80,fVar33);
                        local_38 = (float)SexyVector2::Normalize((SexyVector2 *)aFStack_70);
                        fStack_34 = fVar33;
                        local_68 = (float)SexyVector2::Perp((SexyVector2 *)&local_38);
                        local_64 = fVar33;
                        DVec2::DVec2((DVec2 *)&local_60,local_68,fVar33);
                        TPoint<float>::operator*
                                  ((TPoint<float> *)&local_60,*(float *)(lVar14 + 0x10));
                        TPoint<float>::operator*
                                  ((TPoint<float> *)local_48,*(float *)(local_b8 + 0xec));
                        FPoint::FPoint((FPoint *)&local_38,(TPoint *)&local_40);
                        local_60 = CONCAT44(fStack_34,local_38);
                        PieceConfig::PieceConfig(aPStack_58);
                        UI::UDim::operator+((UDim *)&local_80,(UDim *)&local_60);
                        FPoint::FPoint((FPoint *)&local_40,(TPoint *)local_50);
                        UI::UDim::operator+((UDim *)&local_78,(UDim *)&local_60);
                        FPoint::FPoint((FPoint *)&local_38,(TPoint *)local_48);
                        cVar7 = LineSegmentIntersects
                                          (aFStack_90,(FPoint *)&local_98,(FPoint *)&local_40,
                                           (FPoint *)&local_38,(float *)0x0,(FPoint *)aPStack_58);
                        if ((cVar7 != '\0') &&
                           (fVar33 = (float)GetRandFloatU(this), fVar33 <= *(float *)(lVar14 + 0xc))
                           ) {
                          fVar33 = *(float *)(lVar14 + 8);
                          if (param_3[0x14] == (PIParticleGroup)0x0) {
                            if (param_3[0x15] == (PIParticleGroup)0x0) {
                              fVar25 = (float)PIValue::GetValueAt((PIValue *)
                                                                  (*(long *)(param_2 + 0x38) + 0x3b8
                                                                  ),*(float *)(this + 0x14e8),0.0);
                            }
                            else {
                              fVar25 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x708),
                                                                  *(float *)(this + 0x14e8),0.0);
                            }
                            fVar29 = (float)PIValue::GetValueAt((PIValue *)(pPVar16 + 0x968),fVar24,
                                                                0.0);
                            pPVar12 = (PIValue *)(pPVar16 + 0x348);
                          }
                          else {
                            if (param_3[0x15] == (PIParticleGroup)0x0) {
                              fVar25 = (float)PIValue::GetValueAt((PIValue *)
                                                                  (*(long *)(param_2 + 0x38) + 0x3b8
                                                                  ),*(float *)(this + 0x14e8),0.0);
                            }
                            else {
                              fVar25 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x708),
                                                                  *(float *)(this + 0x14e8),0.0);
                            }
                            fVar29 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x1188),fVar24
                                                                ,1.0);
                            pPVar12 = (PIValue *)(pPVar18 + 0x2a8);
                          }
                          fVar26 = (float)PIValue::GetValueAt(pPVar12,*(float *)(this + 0x14e8),0.0)
                          ;
                          fVar29 = fVar25 * fVar29 * fVar33 * (fVar26 + *(float *)(local_b8 + 0x50))
                          ;
                          fVar33 = local_a0._4_4_;
                          FastCurve::SetOutRange
                                    ((FastCurve *)local_50,(float)local_a0,local_a0._4_4_);
                          fVar25 = (float)DVec2::dot((DVec2 *)local_50,(DVec2 *)&local_68);
                          local_40 = (float)SexyVector2::operator*((SexyVector2 *)&local_68,2.0);
                          local_3c = fVar33;
                          local_38 = (float)SexyVector2::operator*((SexyVector2 *)&local_40,fVar25);
                          fStack_34 = fVar33;
                          fVar25 = (float)SexyVector2::operator-
                                                    ((SexyVector2 *)local_50,
                                                     (SexyVector2 *)&local_38);
                          local_40 = 1.0;
                          local_38 = ABS(fVar33 / fVar25);
                          pfVar13 = eastl::min_alt<float>(&local_40,&local_38);
                          DVec2::DVec2((DVec2 *)local_48,fVar25,
                                       ((1.0 - *pfVar13) + SQRT(fVar29) * *pfVar13) * fVar33);
                          TPoint<float>::operator*((TPoint<float> *)local_48,100.0);
                          FPoint::FPoint((FPoint *)&local_38,(TPoint *)&local_40);
                          *(ulong *)(local_b8 + 0x20) = CONCAT44(fStack_34,local_38);
                          if (0.001 < fVar29) {
                            *(undefined8 *)this_00 = local_88;
                          }
                          CalcParticleTransform
                                    (this,param_1,param_2,pPVar18,pPVar16,param_3,local_b8);
                          SexyMatrix3::SexyMatrix3(aSStack_30,pSVar2);
                          DVec2::DVec2((DVec2 *)&local_40,0.0,0.0);
                          TransformFPoint(aSStack_30,(FPoint *)&local_40);
                          local_98 = CONCAT44(fStack_34,local_38);
                        }
                        lVar22 = lVar22 + 1;
                        uVar21 = *(undefined8 *)(lVar14 + 0x170);
                        iVar8 = FUN_053b9da0(uVar21,*(undefined8 *)(lVar14 + 0x178));
                      } while ((int)lVar22 < iVar8);
                    }
                  }
                  local_d8 = local_d8 + 1;
                  uVar21 = *(undefined8 *)(lVar15 + 0x20);
                  iVar8 = FUN_053b9cb4(uVar21,*(undefined8 *)(lVar15 + 0x28));
                } while ((int)local_d8 < iVar8);
              }
              uVar21 = *(undefined8 *)(lVar15 + 0x50);
              iVar8 = FUN_053b9d1c(uVar21,*(undefined8 *)(lVar15 + 0x58));
            }
            lVar14 = 0;
            if (0 < iVar8) {
              do {
                lVar22 = FUN_053b9d8c(uVar21,lVar14);
                fVar33 = (float)PIValue::GetLastKeyframe
                                          ((PIValue *)(lVar22 + 0x150),*(float *)(this + 0x14e8));
                if (0.99 <= fVar33) {
                  fVar33 = *(float *)(lVar22 + 0x314);
                  fVar25 = *(float *)(lVar22 + 0x32c);
                  if (local_98._4_4_ < fVar33) {
                    if (fVar25 <= local_98._4_4_) goto LAB_053c9680;
                    fVar29 = *(float *)(lVar22 + 0x31c);
                    if (local_98._4_4_ < fVar29) goto LAB_053c97d4;
                    fVar26 = *(float *)(lVar22 + 0x310);
                    bVar1 = false;
LAB_053c97e4:
                    if ((float)local_98 <
                        ((local_98._4_4_ - fVar29) * (fVar26 - *(float *)(lVar22 + 0x318))) /
                        (fVar33 - fVar29) + *(float *)(lVar22 + 0x318)) {
                      bVar1 = (bool)(bVar1 ^ 1);
                    }
LAB_053c9598:
                    fVar33 = *(float *)(lVar22 + 0x324);
                    if (local_98._4_4_ < fVar33) {
LAB_053c96c8:
                      if (local_98._4_4_ < fVar29) goto LAB_053c983c;
LAB_053c96d0:
                      if ((float)local_98 <
                          ((local_98._4_4_ - fVar33) *
                          (*(float *)(lVar22 + 0x318) - *(float *)(lVar22 + 800))) /
                          (fVar29 - fVar33) + *(float *)(lVar22 + 800)) {
                        bVar1 = (bool)(bVar1 ^ 1);
                      }
LAB_053c96fc:
                      if (local_98._4_4_ < fVar25) {
LAB_053c95b4:
                        if (fVar33 <= local_98._4_4_) goto LAB_053c95bc;
                      }
                      else if (local_98._4_4_ < fVar33) goto LAB_053c95bc;
                    }
                    else {
                      if (local_98._4_4_ < fVar29) goto LAB_053c96d0;
                      if (local_98._4_4_ < fVar25) goto LAB_053c95b4;
                    }
                  }
                  else {
                    if (local_98._4_4_ < fVar25) {
LAB_053c9680:
                      fVar26 = *(float *)(lVar22 + 0x310);
                      fVar29 = *(float *)(lVar22 + 0x31c);
                      bVar1 = (float)local_98 <
                              ((local_98._4_4_ - fVar33) * (*(float *)(lVar22 + 0x328) - fVar26)) /
                              (fVar25 - fVar33) + fVar26;
                      if (local_98._4_4_ < fVar29) goto LAB_053c97d8;
                      if (local_98._4_4_ < fVar33) goto LAB_053c97e4;
                      fVar33 = *(float *)(lVar22 + 0x324);
                      if (local_98._4_4_ < fVar33) goto LAB_053c96c8;
                      goto LAB_053c96fc;
                    }
                    fVar29 = *(float *)(lVar22 + 0x31c);
                    if (fVar29 <= local_98._4_4_) {
                      bVar1 = false;
                      goto LAB_053c9598;
                    }
LAB_053c97d4:
                    bVar1 = false;
LAB_053c97d8:
                    if (fVar33 <= local_98._4_4_) {
                      fVar26 = *(float *)(lVar22 + 0x310);
                      goto LAB_053c97e4;
                    }
                    fVar33 = *(float *)(lVar22 + 0x324);
                    if ((fVar33 <= local_98._4_4_) || (fVar29 <= local_98._4_4_)) goto LAB_053c96d0;
LAB_053c983c:
                    if (local_98._4_4_ < fVar25) goto LAB_053c95b4;
LAB_053c95bc:
                    if ((float)local_98 <
                        ((local_98._4_4_ - fVar25) *
                        (*(float *)(lVar22 + 800) - *(float *)(lVar22 + 0x328))) / (fVar33 - fVar25)
                        + *(float *)(lVar22 + 0x328)) {
                      bVar1 = (bool)(bVar1 ^ 1);
                    }
                  }
                  if (bVar1) {
                    fVar33 = (float)PIValue::GetValueAt((PIValue *)(lVar22 + 0xe0),
                                                        *(float *)(this + 0x14e8),0.0);
                    fVar33 = (float)FUN_053b9a64(-fVar33);
                    fVar25 = (float)PIValue::GetValueAt((PIValue *)(lVar22 + 0x1c0),
                                                        *(float *)(this + 0x14e8),0.0);
                    fVar25 = (float)FUN_053b9a64(-fVar25);
                    iVar8 = *(int *)(this + 0x1470);
                    fVar29 = (float)PIValue::GetValueAt((PIValue *)(lVar22 + 0x70),
                                                        *(float *)(this + 0x14e8),0.0);
                    dVar30 = cos((double)(fVar25 + fVar33));
                    dVar35 = (double)((float)iVar8 * 0.00085 *
                                      (((float)iVar8 + -100.0) * 0.004 + 1.0) * fVar29);
                    *(float *)(local_b8 + 0x20) =
                         (float)((double)*(float *)(local_b8 + 0x20) + dVar35 * dVar30 * 100.0);
                    dVar30 = sin((double)(fVar25 + fVar33));
                    *(float *)(local_b8 + 0x24) =
                         (float)((double)*(float *)(local_b8 + 0x24) + dVar35 * dVar30 * 100.0);
                  }
                }
                lVar14 = lVar14 + 1;
                uVar21 = *(undefined8 *)(lVar15 + 0x50);
                iVar8 = FUN_053b9d1c(uVar21,*(undefined8 *)(lVar15 + 0x58));
              } while ((int)lVar14 < iVar8);
            }
            if (param_3[0x14] == (PIParticleGroup)0x0) {
              if ((pPVar16[0xcaf] == (PIParticleDef)0x0) || (pPVar16[0xcb0] == (PIParticleDef)0x0))
              goto LAB_053c8b7c;
              fVar33 = (float)local_a0;
              fVar25 = local_a0._4_4_;
LAB_053c963c:
              fVar29 = atan2f(fVar25,fVar33);
              goto LAB_053c9644;
            }
            if (pPVar16 != (PIParticleDef *)0x0) {
LAB_053c8b7c:
              PVar4 = local_b8[0xf0];
              goto joined_r0x053c8b84;
            }
            if (param_3[0x15] == (PIParticleGroup)0x0) goto LAB_053c985c;
LAB_053c8bcc:
            fVar33 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x628),
                                                *(float *)(this + 0x14e8),0.0);
          }
          fVar24 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x10a8),fVar24,1.0);
          fVar25 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x1c8),*(float *)(this + 0x14e8)
                                              ,0.0);
          fVar24 = (float)FUN_053b9a64((fVar25 + *(float *)(local_b8 + 0x44)) * fVar33 *
                                       (1.0 - fVar24));
          *(float *)(local_b8 + 0x28) = *(float *)(local_b8 + 0x28) + fVar24 * fVar34 * 160.0;
        }
      }
LAB_053c8c40:
      local_b8 = pPVar17;
    } while (pPVar17 != (PIParticleInstance *)0x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::UpdateParticleGroup(Sexy::PILayer*, Sexy::PIEmitterInstance*,
   Sexy::PIParticleGroup*) */

void __thiscall
Sexy::PIEffect::UpdateParticleGroup
          (PIEffect *this,PILayer *param_1,PIEmitterInstance *param_2,PIParticleGroup *param_3)

{
  bool bVar1;
  int iVar2;
  PIParticleGroup PVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  long *plVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  DVec2 aDStack_38 [8];
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (DAT_06a91460 == -1) {
    pfVar20 = (float *)&DAT_06c440b0;
    do {
      fVar24 = (float)GetRandFloat(this);
      fVar31 = (float)GetRandFloat(this);
      pfVar21 = pfVar20 + 1;
      *pfVar20 = fVar31 * fVar24;
      pfVar20 = pfVar21;
    } while (pfVar21 != (float *)&DAT_06c450b0);
    DAT_06a91460 = 0;
    PVar3 = param_3[0x1b];
  }
  else {
    PVar3 = param_3[0x1b];
  }
  if (PVar3 != (PIParticleGroup)0x0) {
    UpdateParticleGroupWithSingleParticles(this,param_1,param_2,param_3);
    goto LAB_053cad7c;
  }
  if (param_3[0x14] != (PIParticleGroup)0x0) {
    UpdateParticleGroupSuperEmitter(this,param_1,param_2,param_3);
    goto LAB_053cad7c;
  }
  iVar14 = *(int *)(this + 0x1470);
  fVar33 = 1000.0 / (*(float *)(this + 0x1540) * *(float *)(this + 0x15bc));
  fVar31 = 1.0 / fVar33;
  fVar24 = (float)FUN_053b9a64(fVar31);
  plVar23 = *(long **)param_3;
  lVar7 = *(long *)param_1;
  lVar8 = FUN_053b9d1c(*(undefined8 *)(lVar7 + 0x50),*(undefined8 *)(lVar7 + 0x58));
  bVar6 = false;
  if (lVar8 != 0) {
    lVar8 = FUN_053b9cb4(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28));
    bVar6 = lVar8 != 0;
  }
  if (param_2[0x40] == (PIEmitterInstance)0x0) {
    plVar9 = plVar23;
    if (plVar23 == (long *)0x0) {
      if ((param_3[0x16] != (PIParticleGroup)0x0) || (param_3[0x17] != (PIParticleGroup)0x0))
      goto LAB_053cad7c;
    }
    else {
      do {
        plVar13 = (long *)*plVar9;
        *(undefined4 *)((long)plVar9 + 0x6c) = 0x4f000000;
        plVar9 = plVar13;
      } while (plVar13 != (long *)0x0);
      if ((param_3[0x16] != (PIParticleGroup)0x0) || (param_3[0x17] != (PIParticleGroup)0x0))
      goto LAB_053ca9d4;
    }
  }
  else if ((param_3[0x16] != (PIParticleGroup)0x0) || (param_3[0x17] != (PIParticleGroup)0x0)) {
    if (plVar23 == (long *)0x0) goto LAB_053cad7c;
LAB_053ca9d4:
    lVar8 = 0;
    fVar31 = 0.0;
    bVar1 = false;
    uVar19 = 0;
    plVar9 = (long *)0x0;
    fVar30 = fVar31;
    fVar27 = fVar31;
    fVar29 = fVar31;
    fVar32 = fVar31;
    fVar25 = fVar31;
    do {
      while( true ) {
        plVar22 = (long *)plVar23[1];
        plVar13 = (long *)*plVar23;
        if (plVar22 == plVar9) break;
        lVar8 = plVar23[0xf];
        if (param_3[0x15] == (PIParticleGroup)0x0) {
          fVar25 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x268),
                                              *(float *)(this + 0x14e8),0.0);
        }
        else {
          fVar25 = (float)PIValue::GetValueAt((PIValue *)(lVar8 + 0x5b8),*(float *)(this + 0x14e8),
                                              0.0);
        }
        fVar25 = fVar25 * 100.0;
        fVar32 = (float)PIValue::GetValueAt((PIValue *)(plVar22 + 0x3f),*(float *)(this + 0x14e8),
                                            0.0);
        if (param_3[0x15] == (PIParticleGroup)0x0) {
          fVar31 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x2d8),
                                              *(float *)(this + 0x14e8),0.0);
        }
        else {
          fVar31 = (float)PIValue::GetValueAt((PIValue *)(lVar8 + 0x628),*(float *)(this + 0x14e8),
                                              0.0);
        }
        fVar29 = -(fVar24 * fVar31);
        fVar27 = (float)PIValue::GetValueAt((PIValue *)(plVar22 + 0x4d),*(float *)(this + 0x14e8),
                                            0.0);
        if (param_3[0x15] == (PIParticleGroup)0x0) {
          fVar30 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_2 + 0x38) + 0x348),
                                              *(float *)(this + 0x14e8),0.0);
          fVar31 = (float)PIValue::GetValueAt((PIValue *)(plVar22 + 0x5b),*(float *)(this + 0x14e8),
                                              0.0);
          if (plVar22 != (long *)0x0) goto LAB_053caaec;
LAB_053cafd0:
          uVar19 = (uint)plVar22;
          plVar9 = (long *)FUN_053b9b0c(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                                        (long)(int)plVar22[3]);
          lVar16 = *plVar9;
          iVar12 = (int)plVar22[0x191];
        }
        else {
          fVar30 = (float)PIValue::GetValueAt((PIValue *)(lVar8 + 0x698),*(float *)(this + 0x14e8),
                                              0.0);
          fVar31 = (float)PIValue::GetValueAt((PIValue *)(plVar22 + 0x5b),*(float *)(this + 0x14e8),
                                              0.0);
          if (plVar22 == (long *)0x0) goto LAB_053cafd0;
LAB_053caaec:
          uVar19 = 1;
          if (((*(char *)((long)plVar22 + 0xca2) == '\0') &&
              (*(char *)((long)plVar22 + 0xca3) == '\0')) &&
             (*(char *)((long)plVar22 + 0xca4) == '\0')) {
            uVar19 = (uint)*(byte *)((long)plVar22 + 0xca5);
          }
          plVar9 = (long *)FUN_053b9b0c(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                                        (long)(int)plVar22[3]);
          lVar16 = *plVar9;
          iVar12 = (int)plVar22[0x191];
        }
        if (iVar12 != -1) {
          bVar1 = 1 < *(int *)(lVar16 + 0x40);
          plVar9 = plVar22;
          break;
        }
        bVar1 = false;
        iVar12 = (int)plVar23[6] + *(int *)((long)plVar23 + 0x34);
        *(int *)(plVar23 + 6) = iVar12;
        if (0 < iVar12) goto LAB_053cab60;
LAB_053cb014:
        FUN_053be4f0(this,plVar23,param_3);
        plVar9 = plVar22;
LAB_053caec8:
        plVar23 = plVar13;
        if (plVar13 == (long *)0x0) goto LAB_053cad7c;
      }
      plVar22 = plVar9;
      iVar12 = (int)plVar23[6] + *(int *)((long)plVar23 + 0x34);
      *(int *)(plVar23 + 6) = iVar12;
      if (iVar12 < 1) goto LAB_053cb014;
LAB_053cab60:
      lVar16 = *plVar22;
      iVar12 = iVar12 / 0x3ffffff;
      if (bVar1) {
        plVar9 = (long *)FUN_053b9b0c(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                                      (long)(int)plVar22[3]);
        iVar2 = *(int *)(*plVar9 + 0x40);
        iVar18 = (int)(((float)*(int *)(this + 0x1470) * *(float *)((long)plVar23 + 100)) /
                      (float)((int)plVar22[0x191] + 1)) + *(int *)((long)plVar23 + 0xc4);
        iVar4 = 0;
        if (iVar2 != 0) {
          iVar4 = iVar18 / iVar2;
        }
        *(int *)((long)plVar23 + 0x2c) = iVar18 - iVar4 * iVar2;
      }
      if (this[0x14ec] == (PIEffect)0x0) {
        fVar28 = *(float *)((long)plVar23 + 0x24);
      }
      else {
        fVar26 = fVar30 * *(float *)(lVar16 + (long)iVar12 * 0x20 + 0x14) *
                 (fVar31 + *(float *)(plVar23 + 7));
        iVar18 = (DAT_06a91460 + 2) % 0x400;
        iVar2 = DAT_06a91460 % 0x400;
        if (fVar26 <= 0.0) {
          fVar28 = *(float *)((long)plVar23 + 0x24);
          DAT_06a91460 = iVar18;
        }
        else {
          fVar28 = *(float *)((long)plVar23 + 0x24) +
                   (float)(&DAT_06c440b0)[(DAT_06a91460 + 1) % 0x400] * fVar26;
          DAT_06a91460 = iVar18;
          *(float *)(plVar23 + 4) = *(float *)(plVar23 + 4) + (float)(&DAT_06c440b0)[iVar2] * fVar26
          ;
        }
      }
      lVar10 = lVar16 + (long)iVar12 * 0x20;
      *(float *)((long)plVar23 + 0x24) =
           fVar28 + (fVar32 + *(float *)(plVar23 + 8)) *
                    ((((float)iVar14 + -100.0) * 0.0005 + 1.0) / fVar33) * *(float *)(lVar10 + 0xc)
                    * fVar25;
      TPoint<float>::operator/((TPoint<float> *)(plVar23 + 4),fVar33);
      TPoint<float>::operator*((TPoint<float> *)&local_40,*(float *)(lVar10 + 8));
      FPoint::FPoint((FPoint *)&local_48,(TPoint *)aDStack_38);
      if (bVar6) {
        FUN_053c9e58(this,param_1,param_2,lVar8,plVar22,param_3,(FPoint *)&local_48,lVar7,plVar23);
      }
      else {
        TPoint<float>::operator+=((TPoint<float> *)(plVar23 + 3),(TPoint *)&local_48);
      }
      if (uVar19 == 0) {
LAB_053caea0:
        cVar17 = *(char *)((long)plVar22 + 0xcaf);
      }
      else {
        if ((char)plVar23[0x1e] == '\0') {
          if (*(char *)((long)plVar22 + 0xca2) == '\0') {
            cVar17 = *(char *)((long)plVar22 + 0xca3);
          }
          else {
            cVar17 = '\x01';
          }
          if (*(char *)((long)plVar22 + 0xca4) == '\0') goto LAB_053cae94;
LAB_053cac7c:
          bVar5 = true;
        }
        else {
          cVar17 = *(char *)((long)plVar22 + 0xca3);
LAB_053cae94:
          if (*(char *)((long)plVar22 + 0xca5) != '\0') goto LAB_053cac7c;
          if (cVar17 == '\0') goto LAB_053caea0;
          bVar5 = false;
        }
        SexyMatrix3::SexyMatrix3(aSStack_30,(SimpleMatrix *)(plVar23 + 0x19));
        DVec2::DVec2(aDStack_38,0.0,0.0);
        TransformFPoint(aSStack_30,(FPoint *)aDStack_38);
        plVar9 = *(long **)(param_1 + 0x40);
        iVar18 = (int)local_40 + *(int *)(param_1 + 0x48);
        iVar2 = (int)local_3c + *(int *)(param_1 + 0x4c);
        if (plVar9 == (long *)0x0) {
          uVar15 = 0;
        }
        else if ((iVar18 < 0) || (iVar2 < 0)) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          if ((iVar18 < (int)plVar9[7]) && (iVar2 < *(int *)((long)plVar9 + 0x3c))) {
            lVar10 = (**(code **)(*plVar9 + 0xd0))(plVar9,0,0,0);
            uVar15 = (ulong)*(uint *)(lVar10 + (long)(iVar18 + iVar2 * *(int *)(*(long *)(param_1 +
                                                                                         0x40) +
                                                                               0x38)) * 4);
          }
        }
        if (cVar17 != '\0') {
          plVar23[0x1f] = uVar15 & 0xffffff | plVar23[0x1f] & 0xff000000U;
        }
        if (!bVar5) goto LAB_053caea0;
        cVar17 = *(char *)((long)plVar22 + 0xcaf);
        plVar23[0x1f] = uVar15 & 0xff000000 | plVar23[0x1f] & 0xffffffU;
      }
      plVar9 = plVar22;
      if (cVar17 == '\0') {
        *(float *)(plVar23 + 5) =
             *(float *)(plVar23 + 5) +
             (fVar27 + *(float *)((long)plVar23 + 0x44)) *
             fVar29 * *(float *)(lVar16 + (long)iVar12 * 0x20 + 0x10);
        goto LAB_053caec8;
      }
      if ((char)plVar22[0x196] == '\0') goto LAB_053caec8;
      fVar26 = atan2f(local_44,local_48);
      fVar28 = (float)FUN_053b9a64((float)*(int *)((long)plVar22 + 0xcb4));
      *(float *)(plVar23 + 5) = fVar28 + fVar26;
      plVar23 = plVar13;
    } while (plVar13 != (long *)0x0);
    goto LAB_053cad7c;
  }
  if ((param_3[0x1d] == (PIParticleGroup)0x0) && (param_3[0x18] == (PIParticleGroup)0x0)) {
    if (param_3[0x1e] == (PIParticleGroup)0x0) {
      param_3[0x1e] = (PIParticleGroup)0x1;
    }
    else if (this[0x14ec] == (PIEffect)0x0) {
      while (plVar23 != (long *)0x0) {
        plVar9 = (long *)*plVar23;
        iVar14 = (int)plVar23[6] + *(int *)((long)plVar23 + 0x34);
        *(int *)(plVar23 + 6) = iVar14;
        if (iVar14 < 1) {
          FUN_053be4f0(this,plVar23,param_3);
          plVar23 = plVar9;
        }
        else {
          fVar33 = *(float *)(plVar23[2] + 0x14);
          lVar7 = *(long *)plVar23[1] +
                  (-(ulong)((uint)(iVar14 / 0x3ffffff) >> 0x1f) & 0xffffffe000000000 |
                  (ulong)(uint)(iVar14 / 0x3ffffff) << 5);
          fVar29 = *(float *)(plVar23[0xf] + 0x1288);
          fVar30 = *(float *)(lVar7 + 0x10);
          fVar24 = *(float *)((long)plVar23 + 0x24) +
                   (*(float *)(plVar23 + 8) + *(float *)(plVar23[2] + 0x10)) *
                   *(float *)(lVar7 + 0xc) * *(float *)(plVar23[0xf] + 0x1284);
          fVar27 = *(float *)(lVar7 + 8);
          *(float *)((long)plVar23 + 0x24) = fVar24;
          *(float *)(plVar23 + 5) =
               *(float *)(plVar23 + 5) +
               (*(float *)((long)plVar23 + 0x44) + fVar33) * fVar30 * fVar29;
          *(float *)(plVar23 + 3) =
               *(float *)(plVar23 + 3) + fVar27 * *(float *)(plVar23 + 4) * fVar31;
          *(float *)((long)plVar23 + 0x1c) =
               *(float *)((long)plVar23 + 0x1c) + fVar27 * fVar31 * fVar24;
          plVar23 = plVar9;
        }
      }
    }
    else {
      while (plVar23 != (long *)0x0) {
        plVar9 = (long *)*plVar23;
        iVar14 = *(int *)(plVar23 + 6) + *(int *)((long)plVar23 + 0x34);
        *(int *)(plVar23 + 6) = iVar14;
        lVar7 = plVar23[2];
        lVar8 = plVar23[0xf];
        if (iVar14 < 1) {
          FUN_053be4f0(this,plVar23,param_3);
          plVar23 = plVar9;
        }
        else {
          lVar16 = *(long *)plVar23[1];
          iVar12 = (DAT_06a91460 + 2) % 0x400;
          fVar24 = *(float *)(lVar16 + (long)(iVar14 / 0x3ffffff) * 0x20 + 0x14) *
                   *(float *)(lVar8 + 0x128c) * (*(float *)(plVar23 + 7) + *(float *)(lVar7 + 0x18))
          ;
          if (0.0 < fVar24) {
            fVar33 = *(float *)(plVar23 + 4) + (float)(&DAT_06c440b0)[DAT_06a91460 % 0x400] * fVar24
            ;
            fVar24 = *(float *)((long)plVar23 + 0x24) +
                     fVar24 * (float)(&DAT_06c440b0)[(DAT_06a91460 + 1) % 0x400];
            DAT_06a91460 = iVar12;
            *(float *)(plVar23 + 4) = fVar33;
          }
          else {
            fVar24 = *(float *)((long)plVar23 + 0x24);
            fVar33 = *(float *)(plVar23 + 4);
            DAT_06a91460 = iVar12;
          }
          lVar16 = lVar16 + (long)(iVar14 / 0x3ffffff) * 0x20;
          fVar29 = *(float *)(lVar16 + 0x10);
          fVar32 = *(float *)(lVar8 + 0x1288);
          fVar24 = fVar24 + (*(float *)(plVar23 + 8) + *(float *)(lVar7 + 0x10)) *
                            *(float *)(lVar16 + 0xc) * *(float *)(lVar8 + 0x1284);
          fVar27 = *(float *)(lVar7 + 0x14);
          fVar30 = fVar31 * *(float *)(lVar16 + 8);
          *(float *)((long)plVar23 + 0x24) = fVar24;
          *(float *)(plVar23 + 3) = *(float *)(plVar23 + 3) + fVar33 * fVar30;
          *(float *)(plVar23 + 5) =
               *(float *)(plVar23 + 5) +
               (*(float *)((long)plVar23 + 0x44) + fVar27) * fVar29 * fVar32;
          *(float *)((long)plVar23 + 0x1c) = *(float *)((long)plVar23 + 0x1c) + fVar30 * fVar24;
          plVar23 = plVar9;
        }
      }
    }
  }
  else if (plVar23 != (long *)0x0) {
    lVar7 = 0;
    lVar8 = 0;
    bVar6 = false;
    plVar9 = (long *)0x0;
    do {
      plVar22 = (long *)plVar23[1];
      plVar13 = (long *)*plVar23;
      if (plVar22 == plVar9) {
        iVar14 = (int)plVar23[6] + *(int *)((long)plVar23 + 0x34);
        *(int *)(plVar23 + 6) = iVar14;
        if (0 < iVar14) {
          lVar16 = *plVar9;
          iVar14 = iVar14 / 0x3ffffff;
          if (bVar6) {
            plVar11 = (long *)FUN_053b9b0c(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                                           (long)(int)plVar9[3]);
            iVar18 = *(int *)(*plVar11 + 0x40);
            iVar12 = (int)plVar9[0x191];
            goto LAB_053cb1c0;
          }
          goto LAB_053cb204;
        }
LAB_053cb3c4:
        FUN_053be4f0(this,plVar23,param_3);
      }
      else {
        lVar7 = plVar23[0xf];
        lVar8 = plVar23[2];
        plVar9 = (long *)FUN_053b9b0c(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                                      (long)(int)plVar22[3]);
        iVar12 = (int)plVar22[0x191];
        if ((iVar12 == -1) || (iVar18 = *(int *)(*plVar9 + 0x40), iVar18 < 2)) {
          iVar14 = (int)plVar23[6] + *(int *)((long)plVar23 + 0x34);
          *(int *)(plVar23 + 6) = iVar14;
          if (0 < iVar14) {
            lVar16 = *plVar22;
            bVar6 = false;
            iVar14 = iVar14 / 0x3ffffff;
            goto LAB_053cb204;
          }
          bVar6 = false;
          goto LAB_053cb3c4;
        }
        iVar14 = (int)plVar23[6] + *(int *)((long)plVar23 + 0x34);
        *(int *)(plVar23 + 6) = iVar14;
        if (iVar14 < 1) {
          bVar6 = true;
          goto LAB_053cb3c4;
        }
        lVar16 = *plVar22;
        iVar14 = iVar14 / 0x3ffffff;
LAB_053cb1c0:
        iVar2 = *(int *)(this + 0x1470);
        fVar24 = fVar31 + *(float *)((long)plVar23 + 100);
        bVar6 = true;
        *(float *)((long)plVar23 + 100) = fVar24;
        iVar12 = (int)((fVar24 * (float)iVar2) / (float)(iVar12 + 1)) +
                 *(int *)((long)plVar23 + 0xc4);
        iVar2 = 0;
        if (iVar18 != 0) {
          iVar2 = iVar12 / iVar18;
        }
        *(int *)((long)plVar23 + 0x2c) = iVar12 - iVar2 * iVar18;
LAB_053cb204:
        if (this[0x14ec] == (PIEffect)0x0) {
          fVar30 = *(float *)((long)plVar23 + 0x24);
        }
        else {
          fVar24 = *(float *)(lVar16 + (long)iVar14 * 0x20 + 0x14) * *(float *)(lVar7 + 0x128c) *
                   (*(float *)(plVar23 + 7) + *(float *)(lVar8 + 0x18));
          iVar12 = DAT_06a91460 + 1;
          iVar18 = DAT_06a91460 % 0x400;
          DAT_06a91460 = (DAT_06a91460 + 2) % 0x400;
          if (fVar24 <= 0.0) {
            fVar30 = *(float *)((long)plVar23 + 0x24);
          }
          else {
            fVar30 = *(float *)((long)plVar23 + 0x24) +
                     fVar24 * (float)(&DAT_06c440b0)[iVar12 % 0x400];
            *(float *)(plVar23 + 4) =
                 *(float *)(plVar23 + 4) + (float)(&DAT_06c440b0)[iVar18] * fVar24;
          }
        }
        lVar16 = lVar16 + (long)iVar14 * 0x20;
        *(float *)((long)plVar23 + 0x24) =
             fVar30 + (*(float *)(plVar23 + 8) + *(float *)(lVar8 + 0x10)) *
                      *(float *)(lVar16 + 0xc) * *(float *)(lVar7 + 0x1284);
        TPoint<float>::operator/((TPoint<float> *)(plVar23 + 4),fVar33);
        TPoint<float>::operator*((TPoint<float> *)&local_40,*(float *)(lVar16 + 8));
        FPoint::FPoint((FPoint *)&local_48,(TPoint *)aDStack_38);
        TPoint<float>::operator+=((TPoint<float> *)(plVar23 + 3),(TPoint *)&local_48);
        if ((*(char *)((long)plVar22 + 0xcaf) != '\0') && ((char)plVar22[0x196] != '\0')) {
          fVar24 = atan2f(local_44,local_48);
          fVar30 = (float)FUN_053b9a64((float)*(int *)((long)plVar22 + 0xcb4));
          *(float *)(plVar23 + 5) = fVar30 + fVar24;
        }
      }
      plVar9 = plVar22;
      plVar23 = plVar13;
    } while (plVar13 != (long *)0x0);
  }
LAB_053cad7c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::DrawParticleGroupAccel(Sexy::Graphics*, Sexy::PILayer*, Sexy::PIEmitterInstance*,
   Sexy::PIParticleGroup*, bool) */

void __thiscall
Sexy::PIEffect::DrawParticleGroupAccel
          (PIEffect *this,Graphics *param_1,PILayer *param_2,PIEmitterInstance *param_3,
          PIParticleGroup *param_4,bool param_5)

{
  SimpleMatrix *pSVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  int3 iVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  PIParticleInstance *pPVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  Color *pCVar15;
  Color *this_00;
  PIParticleDef *pPVar16;
  long lVar17;
  PIEmitter *pPVar18;
  PIParticleInstance *pPVar19;
  ulong uVar20;
  PIParticleDef *pPVar21;
  PIEmitter *pPVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8 [3];
  float local_bc;
  SexyMatrix3 aSStack_b0 [40];
  SexyVertex2D aSStack_88 [32];
  SexyVertex2D aSStack_68 [32];
  SexyVertex2D aSStack_48 [32];
  SexyVertex2D aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3[0x40] != (PIEmitterInstance)0x0) {
    Insets::Insets((Insets *)&local_f8,(*(int *)(this + 0x1544) * *(int *)(param_2 + 0x30)) / 0xff,
                   (*(int *)(this + 0x1548) * *(int *)(param_2 + 0x34)) / 0xff,
                   (*(int *)(this + 0x154c) * *(int *)(param_2 + 0x38)) / 0xff,
                   (*(int *)(this + 0x1550) * *(int *)(param_2 + 0x3c)) / 0xff);
    iVar7 = Color::ToInt((Color *)&local_f8);
    bVar6 = iVar7 != -1;
    MemoryImage::TriRep::Tri::Tri
              ((Tri *)local_c8,*(float *)(this + 0x1574),*(float *)(this + 0x1580),
               *(float *)(this + 0x1578),*(float *)(this + 0x1584),*(float *)(this + 0x157c),
               *(float *)(this + 0x1588));
    Graphics::Get3D(param_1);
    if ((param_4[0x16] == (PIParticleGroup)0x0) && (param_4[0x1a] == (PIParticleGroup)0x0)) {
      if ((param_4[0x1b] == (PIParticleGroup)0x0) && (param_4[0x1c] == (PIParticleGroup)0x0)) {
        if (param_4[0x1e] == (PIParticleGroup)0x0) {
          if ((!param_5) &&
             (pPVar19 = *(PIParticleInstance **)param_4, pPVar19 != (PIParticleInstance *)0x0)) {
            pPVar22 = *(PIEmitter **)(pPVar19 + 0x78);
            fVar35 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x508),
                                                *(float *)(this + 0x14e8),0.0);
            fVar23 = (float)PIValue::GetValueAt((PIValue *)(pPVar22 + 0x8c8),
                                                *(float *)(this + 0x14e8),1.0);
            do {
              pPVar16 = *(PIParticleDef **)(pPVar19 + 8);
              uVar8 = (int)*(uint *)(pPVar19 + 0x30) >> 0x1a;
              pPVar11 = *(PIParticleInstance **)pPVar19;
              lVar12 = *(long *)pPVar16;
              uVar9 = -(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar8 << 5;
              lVar17 = lVar12 + uVar9;
              lVar13 = *(long *)(pPVar19 + 0x10);
              fVar24 = (float)(*(uint *)(pPVar19 + 0x30) & 0x3ffffff) * 1.4901161e-08;
              fVar29 = *(float *)(lVar12 + uVar9);
              fVar32 = *(float *)(lVar17 + 0x20);
              fVar33 = *(float *)(lVar17 + 4);
              fVar30 = *(float *)(lVar17 + 0x24);
              uVar8 = InterpColor(*(uint *)(lVar17 + 0x18),
                                  *(uint *)(lVar12 + (-(ulong)(uVar8 + 1 >> 0x1f) &
                                                      0xffffffe000000000 | (ulong)(uVar8 + 1) << 5)
                                           + 0x18),fVar24);
              uVar8 = uVar8 & *(uint *)(pPVar19 + 0x5c) | *(uint *)(pPVar19 + 0x60);
              uVar9 = (ulong)uVar8;
              if (fVar23 * fVar35 != 0.0) {
                uVar9 = InterpColor(uVar8,*(uint *)(param_3 + 0xb8),fVar23 * fVar35);
              }
              uVar8 = (uint)uVar9;
              uVar20 = uVar9 & 0xffffffff;
              if (bVar6) {
                uVar20 = ((ulong)(uVar8 >> 8) & 0xff) * (ulong)(local_f4 + 1) & 0xff00 |
                         (ulong)(uVar8 >> 0x18) * (long)*(int *)(lVar13 + 0x1c) * 0x10000 &
                         0xff000000 | (uVar9 & 0xff) * (ulong)(local_f0 + 1) >> 8 & 0xff |
                         ((ulong)(uVar8 >> 0x10) & 0xff) * (long)(local_f8 + 1) * 0x100 & 0xff0000;
              }
              else {
                uVar8 = *(uint *)(lVar13 + 0x1c);
                if (uVar8 != 0x100) {
                  uVar20 = uVar9 & 0xffffff | ((uVar20 >> 0x18) * (ulong)uVar8 & 0xff00) << 0x10;
                }
              }
              if ((uVar20 & 0xff000000) != 0) {
                pSVar1 = (SimpleMatrix *)(pPVar19 + 200);
                CalcParticleTransformSimple
                          (this,param_2,param_3,pPVar22,pPVar16,param_4,pPVar19,
                           (1.0 - fVar24) * fVar29 + fVar32 * fVar24,
                           (1.0 - fVar24) * fVar33 + fVar30 * fVar24);
                if (this[0x1531] == (PIEffect)0x0) {
                  fVar34 = local_c8[0] * *(float *)(pPVar19 + 200);
                  fVar29 = local_c8[0] * *(float *)(pPVar19 + 0xcc);
                  fVar24 = local_bc * *(float *)(pPVar19 + 0xd0);
                  fVar33 = local_bc * *(float *)(pPVar19 + 0xd4);
                  fVar32 = local_c8[0] * *(float *)(pPVar19 + 0xd8);
                  fVar30 = local_bc * *(float *)(pPVar19 + 0xdc);
                  *(float *)(pPVar19 + 200) = fVar34;
                  *(float *)(pPVar19 + 0xcc) = fVar29;
                  *(float *)(pPVar19 + 0xd0) = fVar24;
                  *(float *)(pPVar19 + 0xd4) = fVar33;
                  *(float *)(pPVar19 + 0xd8) = fVar32;
                  *(float *)(pPVar19 + 0xdc) = fVar30;
                }
                else {
                  SimpleMatrix::Concat(pSVar1,(SimpleMatrix *)local_c8);
                  fVar32 = *(float *)(pPVar19 + 0xd8);
                  fVar34 = *(float *)(pPVar19 + 200);
                  fVar24 = *(float *)(pPVar19 + 0xd0);
                  fVar30 = *(float *)(pPVar19 + 0xdc);
                  fVar29 = *(float *)(pPVar19 + 0xcc);
                  fVar33 = *(float *)(pPVar19 + 0xd4);
                }
                lVar17 = *(long *)(pPVar19 + 0xe0);
                uVar8 = (uint)uVar20;
                SexyVertex2D::SexyVertex2D
                          (aSStack_88,(fVar32 - fVar34) - fVar24,(fVar30 - fVar29) - fVar33,
                           *(float *)(lVar17 + 0x20),*(float *)(lVar17 + 0x24),uVar8);
                SexyVertex2D::SexyVertex2D
                          (aSStack_68,
                           (*(float *)pSVar1 + *(float *)(pPVar19 + 0xd8)) -
                           *(float *)(pPVar19 + 0xd0),
                           (*(float *)(pPVar19 + 0xcc) + *(float *)(pPVar19 + 0xdc)) -
                           *(float *)(pPVar19 + 0xd4),*(float *)(lVar17 + 0x28),
                           *(float *)(lVar17 + 0x24),uVar8);
                SexyVertex2D::SexyVertex2D
                          (aSStack_48,
                           (*(float *)(pPVar19 + 0xd0) + *(float *)(pPVar19 + 0xd8)) -
                           *(float *)pSVar1,
                           (*(float *)(pPVar19 + 0xd4) + *(float *)(pPVar19 + 0xdc)) -
                           *(float *)(pPVar19 + 0xcc),*(float *)(lVar17 + 0x20),
                           *(float *)(lVar17 + 0x2c),uVar8);
                SexyVertex2D::SexyVertex2D
                          (aSStack_28,
                           *(float *)pSVar1 + *(float *)(pPVar19 + 0xd8) +
                           *(float *)(pPVar19 + 0xd0),
                           *(float *)(pPVar19 + 0xcc) + *(float *)(pPVar19 + 0xdc) +
                           *(float *)(pPVar19 + 0xd4),*(float *)(lVar17 + 0x28),
                           *(float *)(lVar17 + 0x2c),uVar8);
                DrawBatcher::QueueQuad
                          ((DrawBatcher *)gDrawBatcher,*(Image **)(lVar17 + 8),
                           *(int *)(*(long *)(pPVar19 + 8) + 0xcf8),aSStack_88);
                pPVar19[0xf0] = (PIParticleInstance)0x1;
              }
              pPVar19 = pPVar11;
            } while (pPVar11 != (PIParticleInstance *)0x0);
          }
        }
        else if (!param_5) {
          pPVar19 = *(PIParticleInstance **)param_4;
          fVar35 = 1000.0 / (*(float *)(this + 0x1540) * *(float *)(this + 0x15bc));
          if (pPVar19 != (PIParticleInstance *)0x0) {
            pPVar22 = *(PIEmitter **)(pPVar19 + 0x78);
            fVar23 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x508),
                                                *(float *)(this + 0x14e8),0.0);
            fVar24 = (float)PIValue::GetValueAt((PIValue *)(pPVar22 + 0x8c8),
                                                *(float *)(this + 0x14e8),1.0);
            fVar24 = fVar24 * fVar23;
            if (this[0x14ec] == (PIEffect)0x0) {
              fVar35 = 1.0 / fVar35;
              do {
                pPVar11 = *(PIParticleInstance **)pPVar19;
                uVar8 = *(int *)(pPVar19 + 0x30) + *(int *)(pPVar19 + 0x34);
                *(uint *)(pPVar19 + 0x30) = uVar8;
                pPVar16 = *(PIParticleDef **)(pPVar19 + 8);
                lVar17 = *(long *)(pPVar19 + 0x10);
                if ((int)uVar8 < 1) {
                  FUN_053be4f0(this,pPVar19,param_4);
                }
                else {
                  lVar13 = *(long *)pPVar16;
                  uVar2 = (int)uVar8 >> 0x1a;
                  uVar9 = -(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar2 << 5;
                  lVar12 = lVar13 + uVar9;
                  uVar3 = *(uint *)(lVar12 + 0x18);
                  uVar2 = *(uint *)(lVar13 + (-(ulong)(uVar2 + 1 >> 0x1f) & 0xffffffe000000000 |
                                             (ulong)(uVar2 + 1) << 5) + 0x18);
                  fVar30 = *(float *)(lVar12 + 8);
                  fVar29 = *(float *)(lVar12 + 0x10);
                  fVar23 = *(float *)(pPVar19 + 0x24) +
                           (*(float *)(pPVar19 + 0x40) + *(float *)(lVar17 + 0x10)) *
                           *(float *)(lVar12 + 0xc) * *(float *)(pPVar22 + 0x1284);
                  fVar32 = *(float *)(pPVar22 + 0x1288);
                  fVar33 = *(float *)(lVar17 + 0x14);
                  fVar34 = (float)(uVar8 & 0x3ffffff) * 1.4901161e-08;
                  fVar27 = *(float *)(lVar13 + uVar9);
                  fVar26 = *(float *)(lVar12 + 0x20);
                  fVar28 = *(float *)(lVar12 + 4);
                  fVar25 = *(float *)(lVar12 + 0x24);
                  *(float *)(pPVar19 + 0x24) = fVar23;
                  *(float *)(pPVar19 + 0x18) =
                       *(float *)(pPVar19 + 0x18) + fVar35 * fVar30 * *(float *)(pPVar19 + 0x20);
                  *(float *)(pPVar19 + 0x1c) = *(float *)(pPVar19 + 0x1c) + fVar30 * fVar23 * fVar35
                  ;
                  *(float *)(pPVar19 + 0x28) =
                       *(float *)(pPVar19 + 0x28) +
                       (*(float *)(pPVar19 + 0x44) + fVar33) * fVar29 * fVar32;
                  uVar8 = InterpColor(uVar3,uVar2,fVar34);
                  uVar8 = uVar8 & *(uint *)(pPVar19 + 0x5c) | *(uint *)(pPVar19 + 0x60);
                  uVar9 = (ulong)uVar8;
                  if (fVar24 != 0.0) {
                    uVar9 = InterpColor(uVar8,*(uint *)(param_3 + 0xb8),fVar24);
                  }
                  uVar8 = (uint)uVar9;
                  uVar20 = uVar9 & 0xffffffff;
                  if (bVar6) {
                    uVar20 = ((ulong)(uVar8 >> 8) & 0xff) * (ulong)(local_f4 + 1) & 0xff00 |
                             (ulong)(uVar8 >> 0x18) * (long)*(int *)(lVar17 + 0x1c) * 0x10000 &
                             0xff000000 | (uVar9 & 0xff) * (ulong)(local_f0 + 1) >> 8 & 0xff |
                             ((ulong)(uVar8 >> 0x10) & 0xff) * (long)(local_f8 + 1) * 0x100 &
                             0xff0000;
                  }
                  else if (*(uint *)(lVar17 + 0x1c) != 0x100) {
                    uVar20 = uVar9 & 0xffffff |
                             ((uVar20 >> 0x18) * (ulong)*(uint *)(lVar17 + 0x1c) & 0xff00) << 0x10;
                  }
                  if ((uVar20 & 0xff000000) != 0) {
                    pSVar1 = (SimpleMatrix *)(pPVar19 + 200);
                    CalcParticleTransformSimple
                              (this,param_2,param_3,pPVar22,pPVar16,param_4,pPVar19,
                               (1.0 - fVar34) * fVar27 + fVar26 * fVar34,
                               (1.0 - fVar34) * fVar28 + fVar25 * fVar34);
                    if (this[0x1531] == (PIEffect)0x0) {
                      fVar34 = local_c8[0] * *(float *)(pPVar19 + 200);
                      fVar29 = local_c8[0] * *(float *)(pPVar19 + 0xcc);
                      fVar23 = local_bc * *(float *)(pPVar19 + 0xd0);
                      fVar33 = local_bc * *(float *)(pPVar19 + 0xd4);
                      fVar32 = local_c8[0] * *(float *)(pPVar19 + 0xd8);
                      fVar30 = local_bc * *(float *)(pPVar19 + 0xdc);
                      *(float *)(pPVar19 + 200) = fVar34;
                      *(float *)(pPVar19 + 0xcc) = fVar29;
                      *(float *)(pPVar19 + 0xd0) = fVar23;
                      *(float *)(pPVar19 + 0xd4) = fVar33;
                      *(float *)(pPVar19 + 0xd8) = fVar32;
                      *(float *)(pPVar19 + 0xdc) = fVar30;
                    }
                    else {
                      SimpleMatrix::Concat(pSVar1,(SimpleMatrix *)local_c8);
                      fVar32 = *(float *)(pPVar19 + 0xd8);
                      fVar34 = *(float *)(pPVar19 + 200);
                      fVar23 = *(float *)(pPVar19 + 0xd0);
                      fVar30 = *(float *)(pPVar19 + 0xdc);
                      fVar29 = *(float *)(pPVar19 + 0xcc);
                      fVar33 = *(float *)(pPVar19 + 0xd4);
                    }
                    lVar17 = *(long *)(pPVar19 + 0xe0);
                    uVar8 = (uint)uVar20;
                    SexyVertex2D::SexyVertex2D
                              (aSStack_88,(fVar32 - fVar34) - fVar23,(fVar30 - fVar29) - fVar33,
                               *(float *)(lVar17 + 0x20),*(float *)(lVar17 + 0x24),uVar8);
                    SexyVertex2D::SexyVertex2D
                              (aSStack_68,
                               (*(float *)pSVar1 + *(float *)(pPVar19 + 0xd8)) -
                               *(float *)(pPVar19 + 0xd0),
                               (*(float *)(pPVar19 + 0xcc) + *(float *)(pPVar19 + 0xdc)) -
                               *(float *)(pPVar19 + 0xd4),*(float *)(lVar17 + 0x28),
                               *(float *)(lVar17 + 0x24),uVar8);
                    SexyVertex2D::SexyVertex2D
                              (aSStack_48,
                               (*(float *)(pPVar19 + 0xd0) + *(float *)(pPVar19 + 0xd8)) -
                               *(float *)pSVar1,
                               (*(float *)(pPVar19 + 0xd4) + *(float *)(pPVar19 + 0xdc)) -
                               *(float *)(pPVar19 + 0xcc),*(float *)(lVar17 + 0x20),
                               *(float *)(lVar17 + 0x2c),uVar8);
                    SexyVertex2D::SexyVertex2D
                              (aSStack_28,
                               *(float *)pSVar1 + *(float *)(pPVar19 + 0xd8) +
                               *(float *)(pPVar19 + 0xd0),
                               *(float *)(pPVar19 + 0xcc) + *(float *)(pPVar19 + 0xdc) +
                               *(float *)(pPVar19 + 0xd4),*(float *)(lVar17 + 0x28),
                               *(float *)(lVar17 + 0x2c),uVar8);
                    DrawBatcher::QueueQuad
                              ((DrawBatcher *)gDrawBatcher,*(Image **)(lVar17 + 8),
                               *(int *)(*(long *)(pPVar19 + 8) + 0xcf8),aSStack_88);
                    pPVar19[0xf0] = (PIParticleInstance)0x1;
                  }
                }
                pPVar19 = pPVar11;
              } while (pPVar11 != (PIParticleInstance *)0x0);
            }
            else {
              do {
                pPVar11 = *(PIParticleInstance **)pPVar19;
                uVar8 = *(int *)(pPVar19 + 0x30) + *(int *)(pPVar19 + 0x34);
                *(uint *)(pPVar19 + 0x30) = uVar8;
                pPVar16 = *(PIParticleDef **)(pPVar19 + 8);
                lVar17 = *(long *)(pPVar19 + 0x10);
                if ((int)uVar8 < 1) {
                  FUN_053be4f0(this,pPVar19,param_4);
                }
                else {
                  iVar31 = (int)uVar8 >> 0x1a;
                  lVar13 = *(long *)pPVar16;
                  lVar14 = (long)iVar31 * 0x20;
                  lVar12 = lVar13 + lVar14;
                  iVar10 = DAT_06a91460 + 1;
                  fVar23 = *(float *)(lVar12 + 0x14) * *(float *)(pPVar22 + 0x128c) *
                           (*(float *)(pPVar19 + 0x38) + *(float *)(lVar17 + 0x18));
                  iVar4 = DAT_06a91460 % 0x400;
                  DAT_06a91460 = (DAT_06a91460 + 2) % 0x400;
                  fVar29 = (float)(uVar8 & 0x3ffffff) * 1.4901161e-08;
                  fVar30 = *(float *)(lVar13 + lVar14);
                  fVar33 = *(float *)(lVar12 + 0x20);
                  fVar34 = *(float *)(lVar12 + 4);
                  fVar32 = *(float *)(lVar12 + 0x24);
                  if (fVar23 <= 0.0) {
                    fVar23 = *(float *)(pPVar19 + 0x24);
                    fVar27 = *(float *)(pPVar19 + 0x20);
                  }
                  else {
                    fVar27 = *(float *)(pPVar19 + 0x20) + (float)(&DAT_06c440b0)[iVar4] * fVar23;
                    fVar23 = *(float *)(pPVar19 + 0x24) +
                             fVar23 * (float)(&DAT_06c440b0)[iVar10 % 0x400];
                    *(float *)(pPVar19 + 0x20) = fVar27;
                  }
                  lVar14 = lVar13 + (long)iVar31 * 0x20;
                  uVar8 = *(uint *)(lVar14 + 0x18);
                  uVar2 = *(uint *)(lVar13 + (-(ulong)(iVar31 + 1U >> 0x1f) & 0xffffffe000000000 |
                                             (ulong)(iVar31 + 1U) << 5) + 0x18);
                  fVar28 = *(float *)(lVar14 + 0x10);
                  fVar36 = *(float *)(pPVar22 + 0x1288);
                  fVar23 = fVar23 + (*(float *)(pPVar19 + 0x40) + *(float *)(lVar17 + 0x10)) *
                                    *(float *)(lVar12 + 0xc) * *(float *)(pPVar22 + 0x1284);
                  fVar26 = *(float *)(lVar17 + 0x14);
                  fVar25 = (1.0 / fVar35) * *(float *)(lVar12 + 8);
                  *(float *)(pPVar19 + 0x24) = fVar23;
                  *(float *)(pPVar19 + 0x18) = *(float *)(pPVar19 + 0x18) + fVar27 * fVar25;
                  *(float *)(pPVar19 + 0x28) =
                       *(float *)(pPVar19 + 0x28) +
                       (*(float *)(pPVar19 + 0x44) + fVar26) * fVar28 * fVar36;
                  *(float *)(pPVar19 + 0x1c) = *(float *)(pPVar19 + 0x1c) + fVar25 * fVar23;
                  uVar8 = InterpColor(uVar8,uVar2,fVar29);
                  uVar8 = uVar8 & *(uint *)(pPVar19 + 0x5c) | *(uint *)(pPVar19 + 0x60);
                  uVar9 = (ulong)uVar8;
                  if (fVar24 != 0.0) {
                    uVar9 = InterpColor(uVar8,*(uint *)(param_3 + 0xb8),fVar24);
                  }
                  uVar8 = (uint)uVar9;
                  uVar20 = uVar9 & 0xffffffff;
                  if (bVar6) {
                    uVar20 = ((ulong)(uVar8 >> 8) & 0xff) * (ulong)(local_f4 + 1) & 0xff00 |
                             (ulong)(uVar8 >> 0x18) * (long)*(int *)(lVar17 + 0x1c) * 0x10000 &
                             0xff000000 | (uVar9 & 0xff) * (ulong)(local_f0 + 1) >> 8 & 0xff |
                             ((ulong)(uVar8 >> 0x10) & 0xff) * (long)(local_f8 + 1) * 0x100 &
                             0xff0000;
                  }
                  else if (*(uint *)(lVar17 + 0x1c) != 0x100) {
                    uVar20 = uVar9 & 0xffffff |
                             ((uVar20 >> 0x18) * (ulong)*(uint *)(lVar17 + 0x1c) & 0xff00) << 0x10;
                  }
                  if ((uVar20 & 0xff000000) != 0) {
                    pSVar1 = (SimpleMatrix *)(pPVar19 + 200);
                    CalcParticleTransformSimple
                              (this,param_2,param_3,pPVar22,pPVar16,param_4,pPVar19,
                               (1.0 - fVar29) * fVar30 + fVar33 * fVar29,
                               (1.0 - fVar29) * fVar34 + fVar32 * fVar29);
                    if (this[0x1531] == (PIEffect)0x0) {
                      fVar34 = local_c8[0] * *(float *)(pPVar19 + 200);
                      fVar29 = local_c8[0] * *(float *)(pPVar19 + 0xcc);
                      fVar23 = local_bc * *(float *)(pPVar19 + 0xd0);
                      fVar33 = local_bc * *(float *)(pPVar19 + 0xd4);
                      fVar32 = local_c8[0] * *(float *)(pPVar19 + 0xd8);
                      fVar30 = local_bc * *(float *)(pPVar19 + 0xdc);
                      *(float *)(pPVar19 + 200) = fVar34;
                      *(float *)(pPVar19 + 0xcc) = fVar29;
                      *(float *)(pPVar19 + 0xd0) = fVar23;
                      *(float *)(pPVar19 + 0xd4) = fVar33;
                      *(float *)(pPVar19 + 0xd8) = fVar32;
                      *(float *)(pPVar19 + 0xdc) = fVar30;
                    }
                    else {
                      SimpleMatrix::Concat(pSVar1,(SimpleMatrix *)local_c8);
                      fVar32 = *(float *)(pPVar19 + 0xd8);
                      fVar34 = *(float *)(pPVar19 + 200);
                      fVar23 = *(float *)(pPVar19 + 0xd0);
                      fVar30 = *(float *)(pPVar19 + 0xdc);
                      fVar29 = *(float *)(pPVar19 + 0xcc);
                      fVar33 = *(float *)(pPVar19 + 0xd4);
                    }
                    lVar17 = *(long *)(pPVar19 + 0xe0);
                    uVar8 = (uint)uVar20;
                    SexyVertex2D::SexyVertex2D
                              (aSStack_88,(fVar32 - fVar34) - fVar23,(fVar30 - fVar29) - fVar33,
                               *(float *)(lVar17 + 0x20),*(float *)(lVar17 + 0x24),uVar8);
                    SexyVertex2D::SexyVertex2D
                              (aSStack_68,
                               (*(float *)pSVar1 + *(float *)(pPVar19 + 0xd8)) -
                               *(float *)(pPVar19 + 0xd0),
                               (*(float *)(pPVar19 + 0xcc) + *(float *)(pPVar19 + 0xdc)) -
                               *(float *)(pPVar19 + 0xd4),*(float *)(lVar17 + 0x28),
                               *(float *)(lVar17 + 0x24),uVar8);
                    SexyVertex2D::SexyVertex2D
                              (aSStack_48,
                               (*(float *)(pPVar19 + 0xd0) + *(float *)(pPVar19 + 0xd8)) -
                               *(float *)pSVar1,
                               (*(float *)(pPVar19 + 0xd4) + *(float *)(pPVar19 + 0xdc)) -
                               *(float *)(pPVar19 + 0xcc),*(float *)(lVar17 + 0x20),
                               *(float *)(lVar17 + 0x2c),uVar8);
                    SexyVertex2D::SexyVertex2D
                              (aSStack_28,
                               *(float *)pSVar1 + *(float *)(pPVar19 + 0xd8) +
                               *(float *)(pPVar19 + 0xd0),
                               *(float *)(pPVar19 + 0xcc) + *(float *)(pPVar19 + 0xdc) +
                               *(float *)(pPVar19 + 0xd4),*(float *)(lVar17 + 0x28),
                               *(float *)(lVar17 + 0x2c),uVar8);
                    DrawBatcher::QueueQuad
                              ((DrawBatcher *)gDrawBatcher,*(Image **)(lVar17 + 8),
                               *(int *)(*(long *)(pPVar19 + 8) + 0xcf8),aSStack_88);
                    pPVar19[0xf0] = (PIParticleInstance)0x1;
                  }
                }
                pPVar19 = pPVar11;
              } while (pPVar11 != (PIParticleInstance *)0x0);
            }
          }
          param_4[0x1e] = (PIParticleGroup)0x0;
        }
      }
      else if ((!param_5) &&
              (pPVar19 = *(PIParticleInstance **)param_4, pPVar19 != (PIParticleInstance *)0x0)) {
        pPVar22 = *(PIEmitter **)(pPVar19 + 0x78);
        fVar35 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x508),
                                            *(float *)(this + 0x14e8),0.0);
        fVar23 = (float)PIValue::GetValueAt((PIValue *)(pPVar22 + 0x8c8),*(float *)(this + 0x14e8),
                                            1.0);
        do {
          pPVar16 = *(PIParticleDef **)(pPVar19 + 8);
          pPVar11 = *(PIParticleInstance **)pPVar19;
          lVar17 = *(long *)(pPVar19 + 0x10);
          uVar9 = (ulong)*(uint *)(pPVar19 + 0x5c) &
                  *(ulong *)(*(long *)pPVar16 +
                             (-(ulong)((uint)(*(int *)(pPVar19 + 0x30) / 0x3ffffff) >> 0x1f) &
                              0xffffffe000000000 |
                             (ulong)(uint)(*(int *)(pPVar19 + 0x30) / 0x3ffffff) << 5) + 0x18) |
                  (ulong)*(uint *)(pPVar19 + 0x60);
          if (fVar23 * fVar35 != 0.0) {
            uVar9 = InterpColor((uint)uVar9,*(uint *)(param_3 + 0xb8),fVar23 * fVar35);
            uVar9 = uVar9 & 0xffffffff;
          }
          if (bVar6) {
            uVar9 = (uVar9 >> 8 & 0xff) * (ulong)(local_f4 + 1) & 0xff00 |
                    (uVar9 >> 0x18) * (long)*(int *)(lVar17 + 0x1c) * 0x10000 & 0xff000000 |
                    (uVar9 & 0xff) * (ulong)(local_f0 + 1) >> 8 & 0xff |
                    (uVar9 >> 0x10 & 0xff) * (long)(local_f8 + 1) * 0x100 & 0xff0000;
          }
          else {
            uVar8 = *(uint *)(lVar17 + 0x1c);
            if (uVar8 != 0x100) {
              uVar9 = uVar9 & 0xffffff | ((uVar9 >> 0x18) * (ulong)uVar8 & 0xff00) << 0x10;
            }
          }
          if ((uVar9 & 0xff000000) != 0) {
            pSVar1 = (SimpleMatrix *)(pPVar19 + 200);
            CalcParticleTransform(this,param_2,param_3,pPVar22,pPVar16,param_4,pPVar19);
            if (this[0x1531] == (PIEffect)0x0) {
              fVar34 = local_c8[0] * *(float *)(pPVar19 + 200);
              fVar29 = local_c8[0] * *(float *)(pPVar19 + 0xcc);
              fVar24 = local_bc * *(float *)(pPVar19 + 0xd0);
              fVar33 = local_bc * *(float *)(pPVar19 + 0xd4);
              fVar32 = local_c8[0] * *(float *)(pPVar19 + 0xd8);
              fVar30 = local_bc * *(float *)(pPVar19 + 0xdc);
              *(float *)(pPVar19 + 200) = fVar34;
              *(float *)(pPVar19 + 0xcc) = fVar29;
              *(float *)(pPVar19 + 0xd0) = fVar24;
              *(float *)(pPVar19 + 0xd4) = fVar33;
              *(float *)(pPVar19 + 0xd8) = fVar32;
              *(float *)(pPVar19 + 0xdc) = fVar30;
            }
            else {
              SimpleMatrix::Concat(pSVar1,(SimpleMatrix *)local_c8);
              fVar32 = *(float *)(pPVar19 + 0xd8);
              fVar34 = *(float *)(pPVar19 + 200);
              fVar24 = *(float *)(pPVar19 + 0xd0);
              fVar30 = *(float *)(pPVar19 + 0xdc);
              fVar29 = *(float *)(pPVar19 + 0xcc);
              fVar33 = *(float *)(pPVar19 + 0xd4);
            }
            lVar17 = *(long *)(pPVar19 + 0xe0);
            uVar8 = (uint)uVar9;
            SexyVertex2D::SexyVertex2D
                      (aSStack_88,(fVar32 - fVar34) - fVar24,(fVar30 - fVar29) - fVar33,
                       *(float *)(lVar17 + 0x20),*(float *)(lVar17 + 0x24),uVar8);
            SexyVertex2D::SexyVertex2D
                      (aSStack_68,
                       (*(float *)pSVar1 + *(float *)(pPVar19 + 0xd8)) - *(float *)(pPVar19 + 0xd0),
                       (*(float *)(pPVar19 + 0xcc) + *(float *)(pPVar19 + 0xdc)) -
                       *(float *)(pPVar19 + 0xd4),*(float *)(lVar17 + 0x28),
                       *(float *)(lVar17 + 0x24),uVar8);
            SexyVertex2D::SexyVertex2D
                      (aSStack_48,
                       (*(float *)(pPVar19 + 0xd0) + *(float *)(pPVar19 + 0xd8)) - *(float *)pSVar1,
                       (*(float *)(pPVar19 + 0xd4) + *(float *)(pPVar19 + 0xdc)) -
                       *(float *)(pPVar19 + 0xcc),*(float *)(lVar17 + 0x20),
                       *(float *)(lVar17 + 0x2c),uVar8);
            SexyVertex2D::SexyVertex2D
                      (aSStack_28,
                       *(float *)pSVar1 + *(float *)(pPVar19 + 0xd8) + *(float *)(pPVar19 + 0xd0),
                       *(float *)(pPVar19 + 0xcc) + *(float *)(pPVar19 + 0xdc) +
                       *(float *)(pPVar19 + 0xd4),*(float *)(lVar17 + 0x28),
                       *(float *)(lVar17 + 0x2c),uVar8);
            DrawBatcher::QueueQuad
                      ((DrawBatcher *)gDrawBatcher,*(Image **)(lVar17 + 8),
                       *(int *)(*(long *)(pPVar19 + 8) + 0xcf8),aSStack_88);
            pPVar19[0xf0] = (PIParticleInstance)0x1;
          }
          pPVar19 = pPVar11;
        } while (pPVar11 != (PIParticleInstance *)0x0);
      }
    }
    else if (*(PIParticleInstance **)param_4 != (PIParticleInstance *)0x0) {
      iVar31 = 0;
      pPVar22 = (PIEmitter *)0x0;
      fVar35 = 0.0;
      lVar17 = 0;
      pPVar16 = (PIParticleDef *)0x0;
      pPVar19 = *(PIParticleInstance **)param_4;
      iVar10 = iVar31;
      do {
        pPVar21 = *(PIParticleDef **)(pPVar19 + 8);
        pPVar11 = *(PIParticleInstance **)pPVar19;
        if (pPVar21 == pPVar16) {
          if (iVar10 == 0) goto LAB_053cbb98;
          iVar10 = 1;
        }
        else {
          lVar17 = *(long *)(pPVar19 + 0x10);
          if (param_5 < (byte)pPVar21[0xc81]) {
            iVar31 = 1;
LAB_053cbb90:
            if (pPVar21[0xc83] != (PIParticleDef)0x0) goto LAB_053cbb98;
          }
          else {
            iVar31 = 0;
            if (pPVar21[0xc81] != (PIParticleDef)0x0) goto LAB_053cbb90;
          }
          if (param_5) {
            iVar10 = 1;
          }
          else {
LAB_053cbb98:
            pPVar18 = *(PIEmitter **)(pPVar19 + 0x78);
            if (pPVar18 != pPVar22) {
              fVar23 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x508),
                                                  *(float *)(this + 0x14e8),0.0);
              fVar35 = (float)PIValue::GetValueAt((PIValue *)(pPVar18 + 0x8c8),
                                                  *(float *)(this + 0x14e8),1.0);
              fVar35 = fVar35 * fVar23;
            }
            uVar9 = (ulong)((long)*(int *)(pPVar19 + 0x30) * 0x80000021) >> 0x20;
            uVar8 = *(int *)(pPVar19 + 0x30) / 0x3ffffff;
            pCVar15 = *(Color **)
                       (*(long *)pPVar21 +
                        (-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar8 << 5) + 0x18);
            if (pPVar21[0xca2] != (PIParticleDef)0x0) {
              pCVar15 = (Color *)(*(ulong *)(pPVar19 + 0xf8) & 0xffffff |
                                 (ulong)pCVar15 & 0xff000000);
            }
            if (pPVar21[0xca4] != (PIParticleDef)0x0) {
              pCVar15 = (Color *)((ulong)pCVar15 & 0xffffff |
                                 *(ulong *)(pPVar19 + 0xf8) & 0xff000000);
            }
            if (fVar35 != 0.0) {
              uVar8 = Color::ToInt((Color *)(param_3 + 0xd8));
              auVar37 = InterpColor((uint)pCVar15,uVar8,fVar35);
              uVar9 = auVar37._8_8_;
              pCVar15 = (Color *)(auVar37._0_8_ & 0xffffffff);
            }
            this_00 = (Color *)((ulong)pCVar15 & 0xff000000);
            if (!param_5) {
              this_00 = pCVar15;
            }
            Color::FromInt(this_00,uVar9);
            if (bVar6) {
              Insets::Insets((Insets *)&local_d8,((int)local_e8 * local_f8) / 0xff,
                             (local_e8._4_4_ * local_f4) / 0xff,((int)local_e0 * local_f0) / 0xff,
                             (local_e0._4_4_ * local_ec) / 0xff);
              local_e0._4_4_ = (int)((ulong)uStack_d0 >> 0x20);
              local_e8 = local_d8;
              uVar5 = uStack_d0;
              iVar10 = local_e0._4_4_;
            }
            else {
              uVar5 = local_e0;
              iVar10 = local_e0._4_4_;
              if (*(uint *)(lVar17 + 0x1c) != 0x100) {
                this_00 = (Color *)((ulong)this_00 & 0xffffff |
                                   (((ulong)this_00 >> 0x18) * (ulong)*(uint *)(lVar17 + 0x1c) &
                                   0xff00) << 0x10);
              }
            }
            local_e0 = uVar5;
            if (iVar10 != 0) {
              pSVar1 = (SimpleMatrix *)(pPVar19 + 200);
              CalcParticleTransform(this,param_2,param_3,pPVar18,pPVar21,param_4,pPVar19);
              if (this[0x1531] == (PIEffect)0x0) {
                *(float *)(pPVar19 + 200) = local_c8[0] * *(float *)(pPVar19 + 200);
                *(float *)(pPVar19 + 0xcc) = *(float *)(pPVar19 + 0xcc) * local_c8[0];
                *(float *)(pPVar19 + 0xd0) = local_bc * *(float *)(pPVar19 + 0xd0);
                *(float *)(pPVar19 + 0xd4) = *(float *)(pPVar19 + 0xd4) * local_bc;
                *(float *)(pPVar19 + 0xd8) = *(float *)(pPVar19 + 0xd8) * local_c8[0];
                *(float *)(pPVar19 + 0xdc) = *(float *)(pPVar19 + 0xdc) * local_bc;
              }
              else {
                SimpleMatrix::Concat(pSVar1,(SimpleMatrix *)local_c8);
              }
              SexyMatrix3::SexyMatrix3(aSStack_b0,pSVar1);
              uVar8 = (uint)this_00;
              lVar12 = *(long *)(pPVar19 + 0xe0);
              SexyVertex2D::SexyVertex2D
                        (aSStack_88,
                         (*(float *)(pPVar19 + 0xd8) - *(float *)pSVar1) -
                         *(float *)(pPVar19 + 0xd0),
                         (*(float *)(pPVar19 + 0xdc) - *(float *)(pPVar19 + 0xcc)) -
                         *(float *)(pPVar19 + 0xd4),*(float *)(lVar12 + 0x20),
                         *(float *)(lVar12 + 0x24),uVar8);
              SexyVertex2D::SexyVertex2D
                        (aSStack_68,
                         (*(float *)pSVar1 + *(float *)(pPVar19 + 0xd8)) -
                         *(float *)(pPVar19 + 0xd0),
                         (*(float *)(pPVar19 + 0xcc) + *(float *)(pPVar19 + 0xdc)) -
                         *(float *)(pPVar19 + 0xd4),*(float *)(lVar12 + 0x28),
                         *(float *)(lVar12 + 0x24),uVar8);
              SexyVertex2D::SexyVertex2D
                        (aSStack_48,
                         (*(float *)(pPVar19 + 0xd0) + *(float *)(pPVar19 + 0xd8)) -
                         *(float *)pSVar1,
                         (*(float *)(pPVar19 + 0xd4) + *(float *)(pPVar19 + 0xdc)) -
                         *(float *)(pPVar19 + 0xcc),*(float *)(lVar12 + 0x20),
                         *(float *)(lVar12 + 0x2c),uVar8);
              SexyVertex2D::SexyVertex2D
                        (aSStack_28,
                         *(float *)pSVar1 + *(float *)(pPVar19 + 0xd8) + *(float *)(pPVar19 + 0xd0),
                         *(float *)(pPVar19 + 0xcc) + *(float *)(pPVar19 + 0xdc) +
                         *(float *)(pPVar19 + 0xd4),*(float *)(lVar12 + 0x28),
                         *(float *)(lVar12 + 0x2c),uVar8);
              DrawBatcher::QueueQuad
                        ((DrawBatcher *)gDrawBatcher,*(Image **)(lVar12 + 8),iVar31,aSStack_88);
              pPVar19[0xf0] = (PIParticleInstance)0x1;
            }
            iVar10 = 0;
            pPVar22 = pPVar18;
          }
        }
        pPVar16 = pPVar21;
        pPVar19 = pPVar11;
      } while (pPVar11 != (PIParticleInstance *)0x0);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Sexy::PIEffect::DrawParticleGroup(Sexy::Graphics*, Sexy::PILayer*, Sexy::PIEmitterInstance*,
   Sexy::PIParticleGroup*, bool) */

void __thiscall
Sexy::PIEffect::DrawParticleGroup
          (PIEffect *this,Graphics *param_1,PILayer *param_2,PIEmitterInstance *param_3,
          PIParticleGroup *param_4,bool param_5)

{
  TRect *pTVar1;
  SimpleMatrix *pSVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  int3 iVar8;
  uint uVar9;
  Color *pCVar10;
  ulong uVar11;
  Image *pIVar12;
  int iVar13;
  PIParticleInstance *pPVar14;
  long lVar15;
  long lVar16;
  PIEmitter *pPVar17;
  long lVar18;
  PIParticleDef *pPVar19;
  PIEmitter *pPVar20;
  long lVar21;
  Color *this_00;
  PIParticleInstance *pPVar22;
  PIParticleDef *pPVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188 [3];
  float local_17c;
  SexyMatrix3 aSStack_170 [40];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulong local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_28;
  undefined8 uStack_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3[0x40] != (PIEmitterInstance)0x0) {
    bVar7 = 1;
    Insets::Insets((Insets *)&local_1b8,(*(int *)(this + 0x1544) * *(int *)(param_2 + 0x30)) / 0xff,
                   (*(int *)(this + 0x1548) * *(int *)(param_2 + 0x34)) / 0xff,
                   (*(int *)(this + 0x154c) * *(int *)(param_2 + 0x38)) / 0xff,
                   (*(int *)(this + 0x1550) * *(int *)(param_2 + 0x3c)) / 0xff);
    iVar8 = Color::ToInt((Color *)&local_1b8);
    bVar6 = iVar8 != -1;
    if (this[0x1555] == (PIEffect)0x0) {
      bVar7 = FUN_053b9ac4(param_1[0x80]);
      bVar7 = bVar7 ^ 1;
    }
    MemoryImage::TriRep::Tri::Tri
              ((Tri *)local_188,*(float *)(this + 0x1574),*(float *)(this + 0x1580),
               *(float *)(this + 0x1578),*(float *)(this + 0x1584),*(float *)(this + 0x157c),
               *(float *)(this + 0x1588));
    Graphics::Get3D(param_1);
    if ((param_4[0x16] == (PIParticleGroup)0x0) && (param_4[0x1a] == (PIParticleGroup)0x0)) {
      if ((param_4[0x1b] == (PIParticleGroup)0x0) && (param_4[0x1c] == (PIParticleGroup)0x0)) {
        if (param_4[0x1e] == (PIParticleGroup)0x0) {
          if ((!param_5) &&
             (pPVar22 = *(PIParticleInstance **)param_4, pPVar22 != (PIParticleInstance *)0x0)) {
            pPVar17 = *(PIEmitter **)(pPVar22 + 0x78);
            fVar31 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x508),
                                                *(float *)(this + 0x14e8),0.0);
            fVar24 = (float)PIValue::GetValueAt((PIValue *)(pPVar17 + 0x8c8),
                                                *(float *)(this + 0x14e8),1.0);
            pTVar1 = (TRect *)(param_1 + 0x28);
            if (bVar7 == 0) {
              pTVar1 = (TRect *)0x0;
            }
            do {
              pPVar19 = *(PIParticleDef **)(pPVar22 + 8);
              uVar9 = (int)*(uint *)(pPVar22 + 0x30) >> 0x1a;
              pPVar14 = *(PIParticleInstance **)pPVar22;
              lVar15 = *(long *)pPVar19;
              uVar11 = -(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5;
              lVar21 = lVar15 + uVar11;
              lVar16 = *(long *)(pPVar22 + 0x10);
              fVar25 = (float)(*(uint *)(pPVar22 + 0x30) & 0x3ffffff) * 1.4901161e-08;
              fVar30 = *(float *)(lVar15 + uVar11);
              fVar32 = *(float *)(lVar21 + 0x20);
              fVar34 = *(float *)(lVar21 + 4);
              fVar35 = *(float *)(lVar21 + 0x24);
              uVar9 = InterpColor(*(uint *)(lVar21 + 0x18),
                                  *(uint *)(lVar15 + (-(ulong)(uVar9 + 1 >> 0x1f) &
                                                      0xffffffe000000000 | (ulong)(uVar9 + 1) << 5)
                                           + 0x18),fVar25);
              uVar9 = uVar9 & *(uint *)(pPVar22 + 0x5c) | *(uint *)(pPVar22 + 0x60);
              uVar11 = (ulong)uVar9;
              if (fVar24 * fVar31 != 0.0) {
                uVar11 = InterpColor(uVar9,*(uint *)(param_3 + 0xb8),fVar24 * fVar31);
              }
              uVar9 = (uint)uVar11;
              pCVar10 = (Color *)(uVar11 & 0xffffffff);
              if (bVar6) {
                pCVar10 = (Color *)(((ulong)(uVar9 >> 8) & 0xff) * (ulong)(local_1b4 + 1) & 0xff00 |
                                    (ulong)(uVar9 >> 0x18) * (long)*(int *)(lVar16 + 0x1c) * 0x10000
                                    & 0xff000000 |
                                    (uVar11 & 0xff) * (ulong)(local_1b0 + 1) >> 8 & 0xff |
                                   ((ulong)(uVar9 >> 0x10) & 0xff) * (long)(local_1b8 + 1) * 0x100 &
                                   0xff0000);
              }
              else {
                uVar9 = *(uint *)(lVar16 + 0x1c);
                if (uVar9 != 0x100) {
                  pCVar10 = (Color *)(uVar11 & 0xffffff |
                                     (((ulong)pCVar10 >> 0x18) * (ulong)uVar9 & 0xff00) << 0x10);
                }
              }
              if (((ulong)pCVar10 & 0xff000000) != 0) {
                pSVar2 = (SimpleMatrix *)(pPVar22 + 200);
                CalcParticleTransformSimple
                          (this,param_2,param_3,pPVar17,pPVar19,param_4,pPVar22,
                           (1.0 - fVar25) * fVar30 + fVar32 * fVar25,
                           (1.0 - fVar25) * fVar34 + fVar35 * fVar25);
                if (this[0x1531] == (PIEffect)0x0) {
                  fVar36 = local_188[0] * *(float *)(pPVar22 + 200);
                  fVar30 = local_188[0] * *(float *)(pPVar22 + 0xcc);
                  fVar25 = local_17c * *(float *)(pPVar22 + 0xd0);
                  fVar35 = local_17c * *(float *)(pPVar22 + 0xd4);
                  fVar34 = local_188[0] * *(float *)(pPVar22 + 0xd8);
                  fVar32 = local_17c * *(float *)(pPVar22 + 0xdc);
                  *(float *)(pPVar22 + 200) = fVar36;
                  *(float *)(pPVar22 + 0xcc) = fVar30;
                  *(float *)(pPVar22 + 0xd0) = fVar25;
                  *(float *)(pPVar22 + 0xd4) = fVar35;
                  *(float *)(pPVar22 + 0xd8) = fVar34;
                  *(float *)(pPVar22 + 0xdc) = fVar32;
                }
                else {
                  SimpleMatrix::Concat(pSVar2,(SimpleMatrix *)local_188);
                  fVar34 = *(float *)(pPVar22 + 0xd8);
                  fVar36 = *(float *)(pPVar22 + 200);
                  fVar25 = *(float *)(pPVar22 + 0xd0);
                  fVar32 = *(float *)(pPVar22 + 0xdc);
                  fVar30 = *(float *)(pPVar22 + 0xcc);
                  fVar35 = *(float *)(pPVar22 + 0xd4);
                }
                lVar21 = *(long *)(pPVar22 + 0xe0);
                uVar9 = (uint)pCVar10;
                SexyVertex2D::SexyVertex2D
                          ((SexyVertex2D *)&local_148,(fVar34 - fVar36) - fVar25,
                           (fVar32 - fVar30) - fVar35,*(float *)(lVar21 + 0x20),
                           *(float *)(lVar21 + 0x24),uVar9);
                SexyVertex2D::SexyVertex2D
                          ((SexyVertex2D *)&local_128,
                           (*(float *)pSVar2 + *(float *)(pPVar22 + 0xd8)) -
                           *(float *)(pPVar22 + 0xd0),
                           (*(float *)(pPVar22 + 0xcc) + *(float *)(pPVar22 + 0xdc)) -
                           *(float *)(pPVar22 + 0xd4),*(float *)(lVar21 + 0x28),
                           *(float *)(lVar21 + 0x24),uVar9);
                SexyVertex2D::SexyVertex2D
                          ((SexyVertex2D *)&local_108,
                           (*(float *)(pPVar22 + 0xd0) + *(float *)(pPVar22 + 0xd8)) -
                           *(float *)pSVar2,
                           (*(float *)(pPVar22 + 0xd4) + *(float *)(pPVar22 + 0xdc)) -
                           *(float *)(pPVar22 + 0xcc),*(float *)(lVar21 + 0x20),
                           *(float *)(lVar21 + 0x2c),uVar9);
                SexyVertex2D::SexyVertex2D
                          ((SexyVertex2D *)&local_e8,
                           *(float *)pSVar2 + *(float *)(pPVar22 + 0xd8) +
                           *(float *)(pPVar22 + 0xd0),
                           *(float *)(pPVar22 + 0xcc) + *(float *)(pPVar22 + 0xdc) +
                           *(float *)(pPVar22 + 0xd4),*(float *)(lVar21 + 0x28),
                           *(float *)(lVar21 + 0x2c),uVar9);
                pIVar12 = *(Image **)(lVar21 + 8);
                local_a8 = local_128;
                uStack_a0 = uStack_120;
                local_98 = local_118;
                uStack_90 = uStack_110;
                local_c8 = local_148;
                uStack_c0 = uStack_140;
                local_88 = local_108;
                uStack_80 = uStack_100;
                local_48 = local_108;
                uStack_40 = uStack_100;
                local_b8 = local_138;
                uStack_b0 = uStack_130;
                local_28 = local_e8;
                uStack_20 = uStack_e0;
                local_68 = local_a8;
                uStack_60 = uStack_a0;
                local_58 = local_98;
                uStack_50 = uStack_90;
                Color::FromInt(pCVar10,(ulong)pIVar12);
                Graphics::DrawTrianglesTex
                          (param_1,pIVar12,(SexyVertex2D *)&local_c8,2,(Color *)&local_198,
                           *(int *)(*(long *)(pPVar22 + 8) + 0xcf8),(float)gDrawBatcher._98328_4_,
                           (float)gDrawBatcher._98332_4_,(bool)param_1[0x7f],pTVar1);
                pPVar22[0xf0] = (PIParticleInstance)0x1;
              }
              pPVar22 = pPVar14;
            } while (pPVar14 != (PIParticleInstance *)0x0);
          }
        }
        else if (!param_5) {
          pPVar22 = *(PIParticleInstance **)param_4;
          fVar31 = 1000.0 / (*(float *)(this + 0x1540) * *(float *)(this + 0x15bc));
          if (pPVar22 != (PIParticleInstance *)0x0) {
            pPVar17 = *(PIEmitter **)(pPVar22 + 0x78);
            fVar24 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x508),
                                                *(float *)(this + 0x14e8),0.0);
            fVar25 = (float)PIValue::GetValueAt((PIValue *)(pPVar17 + 0x8c8),
                                                *(float *)(this + 0x14e8),1.0);
            fVar25 = fVar25 * fVar24;
            if (this[0x14ec] == (PIEffect)0x0) {
              pTVar1 = (TRect *)(param_1 + 0x28);
              if (bVar7 == 0) {
                pTVar1 = (TRect *)0x0;
              }
              fVar31 = 1.0 / fVar31;
              do {
                pPVar14 = *(PIParticleInstance **)pPVar22;
                uVar9 = *(int *)(pPVar22 + 0x30) + *(int *)(pPVar22 + 0x34);
                *(uint *)(pPVar22 + 0x30) = uVar9;
                pPVar19 = *(PIParticleDef **)(pPVar22 + 8);
                lVar21 = *(long *)(pPVar22 + 0x10);
                if ((int)uVar9 < 1) {
                  FUN_053be4f0(this,pPVar22,param_4);
                }
                else {
                  lVar16 = *(long *)pPVar19;
                  uVar3 = (int)uVar9 >> 0x1a;
                  uVar11 = -(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar3 << 5;
                  lVar15 = lVar16 + uVar11;
                  uVar4 = *(uint *)(lVar15 + 0x18);
                  uVar3 = *(uint *)(lVar16 + (-(ulong)(uVar3 + 1 >> 0x1f) & 0xffffffe000000000 |
                                             (ulong)(uVar3 + 1) << 5) + 0x18);
                  fVar34 = *(float *)(pPVar17 + 0x1288);
                  fVar32 = *(float *)(lVar15 + 8);
                  fVar24 = *(float *)(pPVar22 + 0x24) +
                           (*(float *)(pPVar22 + 0x40) + *(float *)(lVar21 + 0x10)) *
                           *(float *)(lVar15 + 0xc) * *(float *)(pPVar17 + 0x1284);
                  fVar30 = *(float *)(lVar15 + 0x10);
                  fVar35 = *(float *)(lVar21 + 0x14);
                  fVar36 = (float)(uVar9 & 0x3ffffff) * 1.4901161e-08;
                  fVar26 = *(float *)(lVar16 + uVar11);
                  fVar28 = *(float *)(lVar15 + 0x20);
                  fVar27 = *(float *)(lVar15 + 4);
                  fVar29 = *(float *)(lVar15 + 0x24);
                  *(float *)(pPVar22 + 0x24) = fVar24;
                  *(float *)(pPVar22 + 0x18) =
                       *(float *)(pPVar22 + 0x18) + fVar31 * fVar32 * *(float *)(pPVar22 + 0x20);
                  *(float *)(pPVar22 + 0x1c) = *(float *)(pPVar22 + 0x1c) + fVar32 * fVar24 * fVar31
                  ;
                  *(float *)(pPVar22 + 0x28) =
                       *(float *)(pPVar22 + 0x28) +
                       (*(float *)(pPVar22 + 0x44) + fVar35) * fVar30 * fVar34;
                  uVar9 = InterpColor(uVar4,uVar3,fVar36);
                  uVar9 = uVar9 & *(uint *)(pPVar22 + 0x5c) | *(uint *)(pPVar22 + 0x60);
                  pCVar10 = (Color *)(ulong)uVar9;
                  if (fVar25 != 0.0) {
                    uVar11 = InterpColor(uVar9,*(uint *)(param_3 + 0xb8),fVar25);
                    pCVar10 = (Color *)(uVar11 & 0xffffffff);
                  }
                  if (bVar6) {
                    pCVar10 = (Color *)(((ulong)pCVar10 >> 8 & 0xff) * (ulong)(local_1b4 + 1) &
                                        0xff00 | ((ulong)pCVar10 >> 0x18) *
                                                 (long)*(int *)(lVar21 + 0x1c) * 0x10000 &
                                                 0xff000000 |
                                        ((ulong)pCVar10 & 0xff) * (ulong)(local_1b0 + 1) >> 8 & 0xff
                                       | ((ulong)pCVar10 >> 0x10 & 0xff) * (long)(local_1b8 + 1) *
                                         0x100 & 0xff0000);
                  }
                  else if (*(uint *)(lVar21 + 0x1c) != 0x100) {
                    pCVar10 = (Color *)((ulong)pCVar10 & 0xffffff |
                                       (((ulong)pCVar10 >> 0x18) * (ulong)*(uint *)(lVar21 + 0x1c) &
                                       0xff00) << 0x10);
                  }
                  if (((ulong)pCVar10 & 0xff000000) != 0) {
                    pSVar2 = (SimpleMatrix *)(pPVar22 + 200);
                    CalcParticleTransformSimple
                              (this,param_2,param_3,pPVar17,pPVar19,param_4,pPVar22,
                               (1.0 - fVar36) * fVar26 + fVar28 * fVar36,
                               (1.0 - fVar36) * fVar27 + fVar29 * fVar36);
                    if (this[0x1531] == (PIEffect)0x0) {
                      fVar36 = local_188[0] * *(float *)(pPVar22 + 200);
                      fVar30 = local_188[0] * *(float *)(pPVar22 + 0xcc);
                      fVar24 = local_17c * *(float *)(pPVar22 + 0xd0);
                      fVar35 = local_17c * *(float *)(pPVar22 + 0xd4);
                      fVar34 = local_188[0] * *(float *)(pPVar22 + 0xd8);
                      fVar32 = local_17c * *(float *)(pPVar22 + 0xdc);
                      *(float *)(pPVar22 + 200) = fVar36;
                      *(float *)(pPVar22 + 0xcc) = fVar30;
                      *(float *)(pPVar22 + 0xd0) = fVar24;
                      *(float *)(pPVar22 + 0xd4) = fVar35;
                      *(float *)(pPVar22 + 0xd8) = fVar34;
                      *(float *)(pPVar22 + 0xdc) = fVar32;
                    }
                    else {
                      SimpleMatrix::Concat(pSVar2,(SimpleMatrix *)local_188);
                      fVar34 = *(float *)(pPVar22 + 0xd8);
                      fVar36 = *(float *)(pPVar22 + 200);
                      fVar24 = *(float *)(pPVar22 + 0xd0);
                      fVar32 = *(float *)(pPVar22 + 0xdc);
                      fVar30 = *(float *)(pPVar22 + 0xcc);
                      fVar35 = *(float *)(pPVar22 + 0xd4);
                    }
                    lVar21 = *(long *)(pPVar22 + 0xe0);
                    uVar9 = (uint)pCVar10;
                    SexyVertex2D::SexyVertex2D
                              ((SexyVertex2D *)&local_148,(fVar34 - fVar36) - fVar24,
                               (fVar32 - fVar30) - fVar35,*(float *)(lVar21 + 0x20),
                               *(float *)(lVar21 + 0x24),uVar9);
                    SexyVertex2D::SexyVertex2D
                              ((SexyVertex2D *)&local_128,
                               (*(float *)pSVar2 + *(float *)(pPVar22 + 0xd8)) -
                               *(float *)(pPVar22 + 0xd0),
                               (*(float *)(pPVar22 + 0xcc) + *(float *)(pPVar22 + 0xdc)) -
                               *(float *)(pPVar22 + 0xd4),*(float *)(lVar21 + 0x28),
                               *(float *)(lVar21 + 0x24),uVar9);
                    SexyVertex2D::SexyVertex2D
                              ((SexyVertex2D *)&local_108,
                               (*(float *)(pPVar22 + 0xd0) + *(float *)(pPVar22 + 0xd8)) -
                               *(float *)pSVar2,
                               (*(float *)(pPVar22 + 0xd4) + *(float *)(pPVar22 + 0xdc)) -
                               *(float *)(pPVar22 + 0xcc),*(float *)(lVar21 + 0x20),
                               *(float *)(lVar21 + 0x2c),uVar9);
                    SexyVertex2D::SexyVertex2D
                              ((SexyVertex2D *)&local_e8,
                               *(float *)pSVar2 + *(float *)(pPVar22 + 0xd8) +
                               *(float *)(pPVar22 + 0xd0),
                               *(float *)(pPVar22 + 0xcc) + *(float *)(pPVar22 + 0xdc) +
                               *(float *)(pPVar22 + 0xd4),*(float *)(lVar21 + 0x28),
                               *(float *)(lVar21 + 0x2c),uVar9);
                    pIVar12 = *(Image **)(lVar21 + 8);
                    local_98 = local_118;
                    uStack_90 = uStack_110;
                    local_a8 = local_128;
                    uStack_a0 = uStack_120;
                    local_88 = local_108;
                    uStack_80 = uStack_100;
                    local_48 = local_108;
                    uStack_40 = uStack_100;
                    local_28 = local_e8;
                    uStack_20 = uStack_e0;
                    local_c8 = local_148;
                    uStack_c0 = uStack_140;
                    local_b8 = local_138;
                    uStack_b0 = uStack_130;
                    local_68 = local_a8;
                    uStack_60 = uStack_a0;
                    local_58 = local_98;
                    uStack_50 = uStack_90;
                    Color::FromInt(pCVar10,local_e8);
                    Graphics::DrawTrianglesTex
                              (param_1,pIVar12,(SexyVertex2D *)&local_c8,2,(Color *)&local_198,
                               *(int *)(*(long *)(pPVar22 + 8) + 0xcf8),
                               (float)gDrawBatcher._98328_4_,(float)gDrawBatcher._98332_4_,
                               (bool)param_1[0x7f],pTVar1);
                    pPVar22[0xf0] = (PIParticleInstance)0x1;
                  }
                }
                pPVar22 = pPVar14;
              } while (pPVar14 != (PIParticleInstance *)0x0);
            }
            else {
              pTVar1 = (TRect *)(param_1 + 0x28);
              if (bVar7 == 0) {
                pTVar1 = (TRect *)0x0;
              }
              do {
                pPVar14 = *(PIParticleInstance **)pPVar22;
                uVar9 = *(int *)(pPVar22 + 0x30) + *(int *)(pPVar22 + 0x34);
                *(uint *)(pPVar22 + 0x30) = uVar9;
                pPVar19 = *(PIParticleDef **)(pPVar22 + 8);
                lVar21 = *(long *)(pPVar22 + 0x10);
                if ((int)uVar9 < 1) {
                  FUN_053be4f0(this,pPVar22,param_4);
                }
                else {
                  iVar13 = (int)uVar9 >> 0x1a;
                  lVar16 = *(long *)pPVar19;
                  lVar18 = (long)iVar13 * 0x20;
                  iVar33 = DAT_06a91460 + 1;
                  lVar15 = lVar16 + lVar18;
                  fVar24 = *(float *)(lVar15 + 0x14) * *(float *)(pPVar17 + 0x128c) *
                           (*(float *)(pPVar22 + 0x38) + *(float *)(lVar21 + 0x18));
                  iVar5 = DAT_06a91460 % 0x400;
                  DAT_06a91460 = (DAT_06a91460 + 2) % 0x400;
                  fVar30 = (float)(uVar9 & 0x3ffffff) * 1.4901161e-08;
                  fVar34 = *(float *)(lVar16 + lVar18);
                  fVar32 = *(float *)(lVar15 + 0x20);
                  fVar35 = *(float *)(lVar15 + 4);
                  fVar36 = *(float *)(lVar15 + 0x24);
                  if (fVar24 <= 0.0) {
                    fVar24 = *(float *)(pPVar22 + 0x24);
                    fVar28 = *(float *)(pPVar22 + 0x20);
                  }
                  else {
                    fVar28 = *(float *)(pPVar22 + 0x20) + (float)(&DAT_06c440b0)[iVar5] * fVar24;
                    fVar24 = *(float *)(pPVar22 + 0x24) +
                             fVar24 * (float)(&DAT_06c440b0)[iVar33 % 0x400];
                    *(float *)(pPVar22 + 0x20) = fVar28;
                  }
                  lVar18 = lVar16 + (long)iVar13 * 0x20;
                  uVar9 = *(uint *)(lVar18 + 0x18);
                  uVar3 = *(uint *)(lVar16 + (-(ulong)(iVar13 + 1U >> 0x1f) & 0xffffffe000000000 |
                                             (ulong)(iVar13 + 1U) << 5) + 0x18);
                  fVar29 = *(float *)(lVar18 + 0x10);
                  fVar37 = *(float *)(pPVar17 + 0x1288);
                  fVar24 = fVar24 + (*(float *)(pPVar22 + 0x40) + *(float *)(lVar21 + 0x10)) *
                                    *(float *)(lVar15 + 0xc) * *(float *)(pPVar17 + 0x1284);
                  fVar27 = *(float *)(lVar21 + 0x14);
                  fVar26 = (1.0 / fVar31) * *(float *)(lVar15 + 8);
                  *(float *)(pPVar22 + 0x24) = fVar24;
                  *(float *)(pPVar22 + 0x18) = *(float *)(pPVar22 + 0x18) + fVar28 * fVar26;
                  *(float *)(pPVar22 + 0x28) =
                       *(float *)(pPVar22 + 0x28) +
                       (*(float *)(pPVar22 + 0x44) + fVar27) * fVar29 * fVar37;
                  *(float *)(pPVar22 + 0x1c) = *(float *)(pPVar22 + 0x1c) + fVar26 * fVar24;
                  uVar9 = InterpColor(uVar9,uVar3,fVar30);
                  uVar9 = uVar9 & *(uint *)(pPVar22 + 0x5c) | *(uint *)(pPVar22 + 0x60);
                  pCVar10 = (Color *)(ulong)uVar9;
                  if (fVar25 != 0.0) {
                    uVar11 = InterpColor(uVar9,*(uint *)(param_3 + 0xb8),fVar25);
                    pCVar10 = (Color *)(uVar11 & 0xffffffff);
                  }
                  if (bVar6) {
                    pCVar10 = (Color *)(((ulong)pCVar10 >> 8 & 0xff) * (ulong)(local_1b4 + 1) &
                                        0xff00 | ((ulong)pCVar10 >> 0x18) *
                                                 (long)*(int *)(lVar21 + 0x1c) * 0x10000 &
                                                 0xff000000 |
                                        ((ulong)pCVar10 & 0xff) * (ulong)(local_1b0 + 1) >> 8 & 0xff
                                       | ((ulong)pCVar10 >> 0x10 & 0xff) * (long)(local_1b8 + 1) *
                                         0x100 & 0xff0000);
                  }
                  else if (*(uint *)(lVar21 + 0x1c) != 0x100) {
                    pCVar10 = (Color *)((ulong)pCVar10 & 0xffffff |
                                       (((ulong)pCVar10 >> 0x18) * (ulong)*(uint *)(lVar21 + 0x1c) &
                                       0xff00) << 0x10);
                  }
                  if (((ulong)pCVar10 & 0xff000000) != 0) {
                    pSVar2 = (SimpleMatrix *)(pPVar22 + 200);
                    CalcParticleTransformSimple
                              (this,param_2,param_3,pPVar17,pPVar19,param_4,pPVar22,
                               (1.0 - fVar30) * fVar34 + fVar32 * fVar30,
                               (1.0 - fVar30) * fVar35 + fVar36 * fVar30);
                    if (this[0x1531] == (PIEffect)0x0) {
                      fVar36 = local_188[0] * *(float *)(pPVar22 + 200);
                      fVar30 = local_188[0] * *(float *)(pPVar22 + 0xcc);
                      fVar24 = local_17c * *(float *)(pPVar22 + 0xd0);
                      fVar35 = local_17c * *(float *)(pPVar22 + 0xd4);
                      fVar34 = local_188[0] * *(float *)(pPVar22 + 0xd8);
                      fVar32 = local_17c * *(float *)(pPVar22 + 0xdc);
                      *(float *)(pPVar22 + 200) = fVar36;
                      *(float *)(pPVar22 + 0xcc) = fVar30;
                      *(float *)(pPVar22 + 0xd0) = fVar24;
                      *(float *)(pPVar22 + 0xd4) = fVar35;
                      *(float *)(pPVar22 + 0xd8) = fVar34;
                      *(float *)(pPVar22 + 0xdc) = fVar32;
                    }
                    else {
                      SimpleMatrix::Concat(pSVar2,(SimpleMatrix *)local_188);
                      fVar34 = *(float *)(pPVar22 + 0xd8);
                      fVar36 = *(float *)(pPVar22 + 200);
                      fVar24 = *(float *)(pPVar22 + 0xd0);
                      fVar32 = *(float *)(pPVar22 + 0xdc);
                      fVar30 = *(float *)(pPVar22 + 0xcc);
                      fVar35 = *(float *)(pPVar22 + 0xd4);
                    }
                    lVar21 = *(long *)(pPVar22 + 0xe0);
                    uVar9 = (uint)pCVar10;
                    SexyVertex2D::SexyVertex2D
                              ((SexyVertex2D *)&local_148,(fVar34 - fVar36) - fVar24,
                               (fVar32 - fVar30) - fVar35,*(float *)(lVar21 + 0x20),
                               *(float *)(lVar21 + 0x24),uVar9);
                    SexyVertex2D::SexyVertex2D
                              ((SexyVertex2D *)&local_128,
                               (*(float *)pSVar2 + *(float *)(pPVar22 + 0xd8)) -
                               *(float *)(pPVar22 + 0xd0),
                               (*(float *)(pPVar22 + 0xcc) + *(float *)(pPVar22 + 0xdc)) -
                               *(float *)(pPVar22 + 0xd4),*(float *)(lVar21 + 0x28),
                               *(float *)(lVar21 + 0x24),uVar9);
                    SexyVertex2D::SexyVertex2D
                              ((SexyVertex2D *)&local_108,
                               (*(float *)(pPVar22 + 0xd0) + *(float *)(pPVar22 + 0xd8)) -
                               *(float *)pSVar2,
                               (*(float *)(pPVar22 + 0xd4) + *(float *)(pPVar22 + 0xdc)) -
                               *(float *)(pPVar22 + 0xcc),*(float *)(lVar21 + 0x20),
                               *(float *)(lVar21 + 0x2c),uVar9);
                    SexyVertex2D::SexyVertex2D
                              ((SexyVertex2D *)&local_e8,
                               *(float *)pSVar2 + *(float *)(pPVar22 + 0xd8) +
                               *(float *)(pPVar22 + 0xd0),
                               *(float *)(pPVar22 + 0xcc) + *(float *)(pPVar22 + 0xdc) +
                               *(float *)(pPVar22 + 0xd4),*(float *)(lVar21 + 0x28),
                               *(float *)(lVar21 + 0x2c),uVar9);
                    pIVar12 = *(Image **)(lVar21 + 8);
                    local_a8 = local_128;
                    uStack_a0 = uStack_120;
                    local_98 = local_118;
                    uStack_90 = uStack_110;
                    local_b8 = local_138;
                    uStack_b0 = uStack_130;
                    local_88 = local_108;
                    uStack_80 = uStack_100;
                    local_48 = local_108;
                    uStack_40 = uStack_100;
                    local_28 = local_e8;
                    uStack_20 = uStack_e0;
                    local_c8 = local_148;
                    uStack_c0 = uStack_140;
                    local_68 = local_a8;
                    uStack_60 = uStack_a0;
                    local_58 = local_98;
                    uStack_50 = uStack_90;
                    Color::FromInt(pCVar10,local_e8);
                    Graphics::DrawTrianglesTex
                              (param_1,pIVar12,(SexyVertex2D *)&local_c8,2,(Color *)&local_198,
                               *(int *)(*(long *)(pPVar22 + 8) + 0xcf8),
                               (float)gDrawBatcher._98328_4_,(float)gDrawBatcher._98332_4_,
                               (bool)param_1[0x7f],pTVar1);
                    pPVar22[0xf0] = (PIParticleInstance)0x1;
                  }
                }
                pPVar22 = pPVar14;
              } while (pPVar14 != (PIParticleInstance *)0x0);
            }
          }
          param_4[0x1e] = (PIParticleGroup)0x0;
        }
      }
      else if ((!param_5) &&
              (pPVar22 = *(PIParticleInstance **)param_4, pPVar22 != (PIParticleInstance *)0x0)) {
        pPVar17 = *(PIEmitter **)(pPVar22 + 0x78);
        fVar31 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x508),
                                            *(float *)(this + 0x14e8),0.0);
        fVar24 = (float)PIValue::GetValueAt((PIValue *)(pPVar17 + 0x8c8),*(float *)(this + 0x14e8),
                                            1.0);
        pTVar1 = (TRect *)(param_1 + 0x28);
        if (bVar7 == 0) {
          pTVar1 = (TRect *)0x0;
        }
        do {
          pPVar19 = *(PIParticleDef **)(pPVar22 + 8);
          pPVar14 = *(PIParticleInstance **)pPVar22;
          lVar21 = *(long *)(pPVar22 + 0x10);
          pCVar10 = (Color *)((ulong)*(uint *)(pPVar22 + 0x5c) &
                              *(ulong *)(*(long *)pPVar19 +
                                         (-(ulong)((uint)(*(int *)(pPVar22 + 0x30) / 0x3ffffff) >>
                                                  0x1f) & 0xffffffe000000000 |
                                         (ulong)(uint)(*(int *)(pPVar22 + 0x30) / 0x3ffffff) << 5) +
                                        0x18) | (ulong)*(uint *)(pPVar22 + 0x60));
          if (fVar24 * fVar31 != 0.0) {
            uVar11 = InterpColor((uint)pCVar10,*(uint *)(param_3 + 0xb8),fVar24 * fVar31);
            pCVar10 = (Color *)(uVar11 & 0xffffffff);
          }
          if (bVar6) {
            pCVar10 = (Color *)(((ulong)pCVar10 >> 8 & 0xff) * (ulong)(local_1b4 + 1) & 0xff00 |
                                ((ulong)pCVar10 >> 0x18) * (long)*(int *)(lVar21 + 0x1c) * 0x10000 &
                                0xff000000 |
                                ((ulong)pCVar10 & 0xff) * (ulong)(local_1b0 + 1) >> 8 & 0xff |
                               ((ulong)pCVar10 >> 0x10 & 0xff) * (long)(local_1b8 + 1) * 0x100 &
                               0xff0000);
          }
          else {
            uVar9 = *(uint *)(lVar21 + 0x1c);
            if (uVar9 != 0x100) {
              pCVar10 = (Color *)((ulong)pCVar10 & 0xffffff |
                                 (((ulong)pCVar10 >> 0x18) * (ulong)uVar9 & 0xff00) << 0x10);
            }
          }
          if (((ulong)pCVar10 & 0xff000000) != 0) {
            pSVar2 = (SimpleMatrix *)(pPVar22 + 200);
            CalcParticleTransform(this,param_2,param_3,pPVar17,pPVar19,param_4,pPVar22);
            if (this[0x1531] == (PIEffect)0x0) {
              fVar36 = local_188[0] * *(float *)(pPVar22 + 200);
              fVar30 = local_188[0] * *(float *)(pPVar22 + 0xcc);
              fVar25 = local_17c * *(float *)(pPVar22 + 0xd0);
              fVar35 = local_17c * *(float *)(pPVar22 + 0xd4);
              fVar34 = local_188[0] * *(float *)(pPVar22 + 0xd8);
              fVar32 = local_17c * *(float *)(pPVar22 + 0xdc);
              *(float *)(pPVar22 + 200) = fVar36;
              *(float *)(pPVar22 + 0xcc) = fVar30;
              *(float *)(pPVar22 + 0xd0) = fVar25;
              *(float *)(pPVar22 + 0xd4) = fVar35;
              *(float *)(pPVar22 + 0xd8) = fVar34;
              *(float *)(pPVar22 + 0xdc) = fVar32;
            }
            else {
              SimpleMatrix::Concat(pSVar2,(SimpleMatrix *)local_188);
              fVar34 = *(float *)(pPVar22 + 0xd8);
              fVar36 = *(float *)(pPVar22 + 200);
              fVar25 = *(float *)(pPVar22 + 0xd0);
              fVar32 = *(float *)(pPVar22 + 0xdc);
              fVar30 = *(float *)(pPVar22 + 0xcc);
              fVar35 = *(float *)(pPVar22 + 0xd4);
            }
            lVar21 = *(long *)(pPVar22 + 0xe0);
            uVar9 = (uint)pCVar10;
            SexyVertex2D::SexyVertex2D
                      ((SexyVertex2D *)&local_148,(fVar34 - fVar36) - fVar25,
                       (fVar32 - fVar30) - fVar35,*(float *)(lVar21 + 0x20),
                       *(float *)(lVar21 + 0x24),uVar9);
            SexyVertex2D::SexyVertex2D
                      ((SexyVertex2D *)&local_128,
                       (*(float *)pSVar2 + *(float *)(pPVar22 + 0xd8)) - *(float *)(pPVar22 + 0xd0),
                       (*(float *)(pPVar22 + 0xcc) + *(float *)(pPVar22 + 0xdc)) -
                       *(float *)(pPVar22 + 0xd4),*(float *)(lVar21 + 0x28),
                       *(float *)(lVar21 + 0x24),uVar9);
            SexyVertex2D::SexyVertex2D
                      ((SexyVertex2D *)&local_108,
                       (*(float *)(pPVar22 + 0xd0) + *(float *)(pPVar22 + 0xd8)) - *(float *)pSVar2,
                       (*(float *)(pPVar22 + 0xd4) + *(float *)(pPVar22 + 0xdc)) -
                       *(float *)(pPVar22 + 0xcc),*(float *)(lVar21 + 0x20),
                       *(float *)(lVar21 + 0x2c),uVar9);
            SexyVertex2D::SexyVertex2D
                      ((SexyVertex2D *)&local_e8,
                       *(float *)pSVar2 + *(float *)(pPVar22 + 0xd8) + *(float *)(pPVar22 + 0xd0),
                       *(float *)(pPVar22 + 0xcc) + *(float *)(pPVar22 + 0xdc) +
                       *(float *)(pPVar22 + 0xd4),*(float *)(lVar21 + 0x28),
                       *(float *)(lVar21 + 0x2c),uVar9);
            pIVar12 = *(Image **)(lVar21 + 8);
            local_98 = local_118;
            uStack_90 = uStack_110;
            local_88 = local_108;
            uStack_80 = uStack_100;
            local_58 = local_118;
            uStack_50 = uStack_110;
            local_48 = local_108;
            uStack_40 = uStack_100;
            local_28 = local_e8;
            uStack_20 = uStack_e0;
            local_a8 = local_128;
            uStack_a0 = uStack_120;
            local_c8 = local_148;
            uStack_c0 = uStack_140;
            local_b8 = local_138;
            uStack_b0 = uStack_130;
            local_68 = local_128;
            uStack_60 = uStack_120;
            Color::FromInt(pCVar10,local_e8);
            Graphics::DrawTrianglesTex
                      (param_1,pIVar12,(SexyVertex2D *)&local_c8,2,(Color *)&local_198,
                       *(int *)(*(long *)(pPVar22 + 8) + 0xcf8),(float)gDrawBatcher._98328_4_,
                       (float)gDrawBatcher._98332_4_,(bool)param_1[0x7f],pTVar1);
            pPVar22[0xf0] = (PIParticleInstance)0x1;
          }
          pPVar22 = pPVar14;
        } while (pPVar14 != (PIParticleInstance *)0x0);
      }
    }
    else if (*(PIParticleInstance **)param_4 != (PIParticleInstance *)0x0) {
      pPVar17 = (PIEmitter *)0x0;
      iVar33 = 0;
      pTVar1 = (TRect *)(param_1 + 0x28);
      if (bVar7 == 0) {
        pTVar1 = (TRect *)0x0;
      }
      fVar31 = 0.0;
      lVar21 = 0;
      pPVar19 = (PIParticleDef *)0x0;
      pPVar22 = *(PIParticleInstance **)param_4;
      iVar13 = iVar33;
      do {
        pPVar23 = *(PIParticleDef **)(pPVar22 + 8);
        pPVar14 = *(PIParticleInstance **)pPVar22;
        if (pPVar23 == pPVar19) {
          if (iVar13 == 0) goto LAB_053cd138;
          iVar13 = 1;
        }
        else {
          lVar21 = *(long *)(pPVar22 + 0x10);
          if (param_5 < (byte)pPVar23[0xc81]) {
            iVar33 = 1;
LAB_053cd130:
            if (pPVar23[0xc83] != (PIParticleDef)0x0) goto LAB_053cd138;
          }
          else {
            iVar33 = 0;
            if (pPVar23[0xc81] != (PIParticleDef)0x0) goto LAB_053cd130;
          }
          if (param_5) {
            iVar13 = 1;
          }
          else {
LAB_053cd138:
            pPVar20 = *(PIEmitter **)(pPVar22 + 0x78);
            if (pPVar20 != pPVar17) {
              fVar24 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x508),
                                                  *(float *)(this + 0x14e8),0.0);
              fVar31 = (float)PIValue::GetValueAt((PIValue *)(pPVar20 + 0x8c8),
                                                  *(float *)(this + 0x14e8),1.0);
              fVar31 = fVar31 * fVar24;
            }
            uVar11 = (ulong)((long)*(int *)(pPVar22 + 0x30) * 0x80000021) >> 0x20;
            uVar9 = *(int *)(pPVar22 + 0x30) / 0x3ffffff;
            pCVar10 = *(Color **)
                       (*(long *)pPVar23 +
                        (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5) + 0x18);
            if (pPVar23[0xca2] != (PIParticleDef)0x0) {
              pCVar10 = (Color *)(*(ulong *)(pPVar22 + 0xf8) & 0xffffff |
                                 (ulong)pCVar10 & 0xff000000);
            }
            if (pPVar23[0xca4] != (PIParticleDef)0x0) {
              pCVar10 = (Color *)((ulong)pCVar10 & 0xffffff |
                                 *(ulong *)(pPVar22 + 0xf8) & 0xff000000);
            }
            if (fVar31 != 0.0) {
              uVar9 = Color::ToInt((Color *)(param_3 + 0xd8));
              auVar38 = InterpColor((uint)pCVar10,uVar9,fVar31);
              uVar11 = auVar38._8_8_;
              pCVar10 = (Color *)(auVar38._0_8_ & 0xffffffff);
            }
            this_00 = (Color *)((ulong)pCVar10 & 0xff000000);
            if (!param_5) {
              this_00 = pCVar10;
            }
            Color::FromInt(this_00,uVar11);
            if (bVar6) {
              Insets::Insets((Insets *)&local_198,((int)local_1a8 * local_1b8) / 0xff,
                             (local_1a8._4_4_ * local_1b4) / 0xff,
                             ((int)local_1a0 * local_1b0) / 0xff,
                             (local_1a0._4_4_ * local_1ac) / 0xff);
              local_1a8 = local_198;
              local_1a0 = uStack_190;
            }
            else if (*(uint *)(lVar21 + 0x1c) != 0x100) {
              this_00 = (Color *)((ulong)this_00 & 0xffffff |
                                 (((ulong)this_00 >> 0x18) * (ulong)*(uint *)(lVar21 + 0x1c) &
                                 0xff00) << 0x10);
            }
            if (local_1a0._4_4_ != 0) {
              pSVar2 = (SimpleMatrix *)(pPVar22 + 200);
              CalcParticleTransform(this,param_2,param_3,pPVar20,pPVar23,param_4,pPVar22);
              if (this[0x1531] == (PIEffect)0x0) {
                *(float *)(pPVar22 + 200) = local_188[0] * *(float *)(pPVar22 + 200);
                *(float *)(pPVar22 + 0xcc) = *(float *)(pPVar22 + 0xcc) * local_188[0];
                *(float *)(pPVar22 + 0xd0) = local_17c * *(float *)(pPVar22 + 0xd0);
                *(float *)(pPVar22 + 0xd4) = *(float *)(pPVar22 + 0xd4) * local_17c;
                *(float *)(pPVar22 + 0xd8) = *(float *)(pPVar22 + 0xd8) * local_188[0];
                *(float *)(pPVar22 + 0xdc) = *(float *)(pPVar22 + 0xdc) * local_17c;
              }
              else {
                SimpleMatrix::Concat(pSVar2,(SimpleMatrix *)local_188);
              }
              SexyMatrix3::SexyMatrix3(aSStack_170,pSVar2);
              uVar9 = (uint)this_00;
              lVar15 = *(long *)(pPVar22 + 0xe0);
              SexyVertex2D::SexyVertex2D
                        ((SexyVertex2D *)&local_148,
                         (*(float *)(pPVar22 + 0xd8) - *(float *)pSVar2) -
                         *(float *)(pPVar22 + 0xd0),
                         (*(float *)(pPVar22 + 0xdc) - *(float *)(pPVar22 + 0xcc)) -
                         *(float *)(pPVar22 + 0xd4),*(float *)(lVar15 + 0x20),
                         *(float *)(lVar15 + 0x24),uVar9);
              SexyVertex2D::SexyVertex2D
                        ((SexyVertex2D *)&local_128,
                         (*(float *)pSVar2 + *(float *)(pPVar22 + 0xd8)) -
                         *(float *)(pPVar22 + 0xd0),
                         (*(float *)(pPVar22 + 0xcc) + *(float *)(pPVar22 + 0xdc)) -
                         *(float *)(pPVar22 + 0xd4),*(float *)(lVar15 + 0x28),
                         *(float *)(lVar15 + 0x24),uVar9);
              SexyVertex2D::SexyVertex2D
                        ((SexyVertex2D *)&local_108,
                         (*(float *)(pPVar22 + 0xd0) + *(float *)(pPVar22 + 0xd8)) -
                         *(float *)pSVar2,
                         (*(float *)(pPVar22 + 0xd4) + *(float *)(pPVar22 + 0xdc)) -
                         *(float *)(pPVar22 + 0xcc),*(float *)(lVar15 + 0x20),
                         *(float *)(lVar15 + 0x2c),uVar9);
              SexyVertex2D::SexyVertex2D
                        ((SexyVertex2D *)&local_e8,
                         *(float *)pSVar2 + *(float *)(pPVar22 + 0xd8) + *(float *)(pPVar22 + 0xd0),
                         *(float *)(pPVar22 + 0xcc) + *(float *)(pPVar22 + 0xdc) +
                         *(float *)(pPVar22 + 0xd4),*(float *)(lVar15 + 0x28),
                         *(float *)(lVar15 + 0x2c),uVar9);
              pIVar12 = *(Image **)(lVar15 + 8);
              local_a8 = local_128;
              uStack_a0 = uStack_120;
              local_98 = local_118;
              uStack_90 = uStack_110;
              local_c8 = local_148;
              uStack_c0 = uStack_140;
              local_b8 = local_138;
              uStack_b0 = uStack_130;
              local_88 = local_108;
              uStack_80 = uStack_100;
              local_48 = local_108;
              uStack_40 = uStack_100;
              uStack_20 = uStack_e0;
              local_28 = local_e8;
              local_68 = local_a8;
              uStack_60 = uStack_a0;
              local_58 = local_98;
              uStack_50 = uStack_90;
              Color::FromInt(this_00,(ulong)&local_c8);
              Graphics::DrawTrianglesTex
                        (param_1,pIVar12,(SexyVertex2D *)&local_c8,2,(Color *)&local_198,iVar33,
                         (float)gDrawBatcher._98328_4_,(float)gDrawBatcher._98332_4_,
                         (bool)param_1[0x7f],pTVar1);
              pPVar22[0xf0] = (PIParticleInstance)0x1;
            }
            iVar13 = 0;
            pPVar17 = pPVar20;
          }
        }
        pPVar19 = pPVar23;
        pPVar22 = pPVar14;
      } while (pPVar14 != (PIParticleInstance *)0x0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Sexy::PIEffect::DrawLayer(Sexy::Graphics*, Sexy::PILayer*) */

void __thiscall Sexy::PIEffect::DrawLayer(PIEffect *this,Graphics *param_1,PILayer *param_2)

{
  uint uVar1;
  FPoint *pFVar2;
  Point *pPVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  PIEmitterInstance *pPVar8;
  int *piVar9;
  long *plVar10;
  TPoint *pTVar11;
  SexyMatrix3 *pSVar12;
  long lVar13;
  undefined8 uVar14;
  bool bVar15;
  PieceConfig *pPVar16;
  FPoint *pFVar17;
  Point *this_00;
  undefined8 uVar18;
  long lVar19;
  FPoint *pFVar20;
  ulong uVar21;
  DVec2 *pDVar22;
  char cVar23;
  long lVar24;
  SexyVertex2D *this_01;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  int local_28fc;
  long local_28f8;
  undefined8 local_28d8;
  undefined8 local_28d0;
  float local_28c8;
  float local_28c4;
  undefined8 local_28c0;
  float local_28b8;
  float local_28b4;
  float local_28b0;
  float fStack_28ac;
  undefined8 uStack_28a8;
  undefined8 local_28a0;
  undefined8 uStack_2898;
  SexyTransform2D aSStack_2890 [8];
  undefined1 auStack_2888 [12];
  undefined1 auStack_287c [20];
  SexyVertex2D local_2868 [8];
  undefined8 auStack_2860 [2];
  Point aPStack_2850 [8];
  SexyVertex2D aSStack_2848 [32];
  SexyVertex2D aSStack_2828 [32];
  PieceConfig local_2808 [8];
  DVec2 aDStack_2800 [8];
  DVec2 aDStack_27f8 [4080];
  SexyMatrix3 local_1808 [8];
  FPoint aFStack_1800 [8];
  FPoint aFStack_17f8 [8];
  FPoint local_17f0 [6120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Graphics::PushState(param_1);
  Graphics::SetColorizeImages(param_1,true);
  lVar13 = *(long *)param_2;
  if ((this[0x1555] == (PIEffect)0x0) && (lVar7 = Graphics::Get3D(param_1), lVar7 != 0)) {
    cVar23 = *(char *)(*(long *)(this + 0x14b8) + 0x80);
  }
  else {
    cVar23 = '\0';
  }
  uVar18 = *(undefined8 *)(param_2 + 8);
  local_28f8 = 0;
  iVar5 = FUN_053b9b14(uVar18,*(undefined8 *)(param_2 + 0x10));
  if (0 < iVar5) {
LAB_053ce6dc:
    lVar7 = FUN_053b9c24(*(undefined8 *)(lVar13 + 8),local_28f8);
    pPVar8 = (PIEmitterInstance *)FUN_053b9b34(uVar18,local_28f8);
    if (pPVar8[0x120] != (PIEmitterInstance)0x0) {
      iVar5 = 0;
      local_28fc = 1;
      do {
        if ((iVar5 != 0) || (mGlobalAllowPreserveColor != '\0')) {
          lVar24 = 0;
          if (*(char *)(lVar7 + 0x20) == '\0') {
            plVar10 = (long *)FUN_053b9af8(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                                           (long)*(int *)(lVar7 + 0xc));
            lVar19 = *plVar10;
            iVar6 = *(int *)(this + 0x1470);
            fVar29 = 1000.0 / (*(float *)(this + 0x1540) * *(float *)(this + 0x15bc));
            fVar25 = (float)FUN_053b9a64(1.0 / fVar29);
            fVar26 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(pPVar8 + 0x38) + 0x268),
                                                *(float *)(this + 0x14e8),0.0);
            lVar24 = *(long *)(pPVar8 + 0x38);
            fVar27 = *(float *)(this + 0x14e8);
            *(float *)(lVar19 + 0x1284) =
                 ((((float)iVar6 + -100.0) * 0.0005 + 1.0) / fVar29) * 100.0 * fVar26;
            fVar26 = (float)PIValue::GetValueAt((PIValue *)(lVar24 + 0x2d8),fVar27,0.0);
            lVar24 = *(long *)(pPVar8 + 0x38);
            fVar27 = *(float *)(this + 0x14e8);
            *(float *)(lVar19 + 0x1288) = -(fVar25 * fVar26);
            uVar28 = PIValue::GetValueAt((PIValue *)(lVar24 + 0x348),fVar27,0.0);
            *(undefined4 *)(lVar19 + 0x128c) = uVar28;
            bVar15 = (bool)(((byte)iVar5 ^ 1) & 1);
            if (cVar23 == '\0') {
              DrawParticleGroup(this,param_1,param_2,pPVar8,(PIParticleGroup *)(pPVar8 + 0x98),
                                bVar15);
            }
            else {
              DrawParticleGroupAccel
                        (this,param_1,param_2,pPVar8,(PIParticleGroup *)(pPVar8 + 0x98),bVar15);
            }
          }
          else {
            uVar18 = *(undefined8 *)(lVar7 + 0x28);
            bVar15 = (bool)(((byte)iVar5 ^ 1) & 1);
            iVar6 = FUN_053b9d08(uVar18,*(undefined8 *)(lVar7 + 0x30));
            if (0 < iVar6) {
              do {
                piVar9 = (int *)FUN_053b9d00(uVar18,lVar24);
                plVar10 = (long *)FUN_053b9af8(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                                               (long)*piVar9);
                lVar19 = *plVar10;
                iVar6 = *(int *)(this + 0x1470);
                fVar29 = 1000.0 / (*(float *)(this + 0x1540) * *(float *)(this + 0x15bc));
                fVar25 = (float)FUN_053b9a64(1.0 / fVar29);
                fVar26 = (float)PIValue::GetValueAt((PIValue *)(lVar19 + 0x5b8),
                                                    *(float *)(this + 0x14e8),0.0);
                fVar27 = *(float *)(this + 0x14e8);
                *(float *)(lVar19 + 0x1284) =
                     ((((float)iVar6 + -100.0) * 0.0005 + 1.0) / fVar29) * 100.0 * fVar26;
                fVar26 = (float)PIValue::GetValueAt((PIValue *)(lVar19 + 0x628),fVar27,0.0);
                fVar27 = *(float *)(this + 0x14e8);
                *(float *)(lVar19 + 0x1288) = -(fVar25 * fVar26);
                uVar28 = PIValue::GetValueAt((PIValue *)(lVar19 + 0x698),fVar27,0.0);
                plVar10 = *(long **)(pPVar8 + 0x60);
                *(undefined4 *)(lVar19 + 0x128c) = uVar28;
                if (plVar10 != (long *)0x0) {
                  do {
                    if (cVar23 == '\0') {
                      DrawParticleGroup(this,param_1,param_2,pPVar8,
                                        (PIParticleGroup *)(plVar10 + 0x27),bVar15);
                    }
                    else {
                      DrawParticleGroupAccel
                                (this,param_1,param_2,pPVar8,(PIParticleGroup *)(plVar10 + 0x27),
                                 bVar15);
                    }
                    if ((iVar5 == 1) && (this[0x1554] != (PIEffect)0x0)) {
                      Graphics::SetDrawMode(param_1,0);
                      SexyMatrix3::SexyMatrix3(local_1808,(SimpleMatrix *)(plVar10 + 0x19));
                      DVec2::DVec2((DVec2 *)&local_28b0,0.0,0.0);
                      TransformFPoint(local_1808,(FPoint *)&local_28b0);
                      Color::Color((Color *)&local_28b0,0);
                      Graphics::SetColor(param_1,(Color *)&local_28b0);
                      Graphics::DrawRect(param_1,(int)(local_28b8 - 3.0),(int)(local_28b4 - 3.0),3,3
                                        );
                      Color::Color((Color *)&local_28b0,1);
                      Graphics::SetColor(param_1,(Color *)&local_28b0);
                      Graphics::DrawRect(param_1,(int)(local_28b8 - 2.0),(int)(local_28b4 - 2.0),3,3
                                        );
                    }
                    plVar10 = (long *)*plVar10;
                  } while (plVar10 != (long *)0x0);
                }
                uVar18 = *(undefined8 *)(lVar7 + 0x28);
                lVar24 = lVar24 + 1;
                iVar6 = FUN_053b9d08(uVar18,*(undefined8 *)(lVar7 + 0x30));
              } while ((int)lVar24 < iVar6);
            }
          }
          if (local_28fc == 2) goto code_r0x053ce874;
        }
        iVar5 = iVar5 + 1;
        local_28fc = local_28fc + 1;
      } while( true );
    }
    goto LAB_053ce888;
  }
LAB_053ce8a0:
  lVar7 = 0;
  Graphics::SetDrawMode(param_1,0);
  while( true ) {
    uVar18 = *(undefined8 *)(lVar13 + 0x38);
    iVar5 = FUN_053b9d58(uVar18,*(undefined8 *)(lVar13 + 0x40));
    if (iVar5 <= (int)lVar7) break;
    lVar24 = FUN_053b9d78(uVar18,lVar7);
    fVar25 = (float)PIValue::GetLastKeyframe((PIValue *)(lVar24 + 0x70),*(float *)(this + 0x14e8));
    if ((0.99 < fVar25) || (this[0x1554] != (PIEffect)0x0)) {
      SexyTransform2D::SexyTransform2D(aSStack_2890);
      fVar26 = (float)PIValue::GetValueAt((PIValue *)(lVar24 + 0xe0),*(float *)(this + 0x14e8),0.0);
      if (fVar26 != 0.0) {
        SexyTransform2D::RotateDeg(aSStack_2890,fVar26);
      }
      PIValue2D::GetValueAt(*(float *)(this + 0x14e8));
      FUN_053b9a94(local_28c8,local_28c4,auStack_2888,auStack_287c);
      PIValue2D::GetValueAt(*(float *)(this + 0x14e8));
      FUN_053b9a94((float)local_28c0,local_28c0._4_4_,auStack_2888,auStack_287c);
      fVar26 = (float)PIValue::GetValueAt((PIValue *)(lVar13 + 0xd0),*(float *)(this + 0x14e8),0.0);
      if (fVar26 != 0.0) {
        SexyTransform2D::RotateDeg(aSStack_2890,fVar26);
      }
      SexyMatrix3::operator*((SexyMatrix3 *)(this + 0x1574),(SexyMatrix3 *)aSStack_2890);
      SexyTransform2D::operator=(aSStack_2890,local_1808);
      pPVar16 = local_2808;
      do {
        pSVar12 = (SexyMatrix3 *)(pPVar16 + 8);
        PieceConfig::PieceConfig(pPVar16);
        pPVar16 = (PieceConfig *)pSVar12;
      } while (pSVar12 != local_1808);
      uVar18 = *(undefined8 *)(lVar24 + 0x150);
      local_28b8 = 7.17465e-43;
      local_28b0 = (float)FUN_053b9cd4(uVar18,*(undefined8 *)(lVar24 + 0x158));
      piVar9 = eastl::min_alt<int>((int *)&local_28b8,(int *)&local_28b0);
      iVar5 = *piVar9;
      pFVar20 = (FPoint *)local_1808;
      if (0 < iVar5) {
        lVar19 = 0;
        while( true ) {
          FUN_053b9ce8(uVar18,lVar19);
          PIValue2D::GetValueAt(*(float *)(this + 0x14e8));
          TransformFPoint((SexyMatrix3 *)aSStack_2890,(FPoint *)&local_28b8);
          *(ulong *)(local_2808 + lVar19 * 8) = CONCAT44(fStack_28ac,local_28b0);
          lVar19 = lVar19 + 1;
          if (lVar19 == (ulong)(iVar5 - 1) + 1) break;
          uVar18 = *(undefined8 *)(lVar24 + 0x150);
        }
      }
      do {
        pFVar17 = pFVar20;
        do {
          pFVar2 = pFVar17 + 8;
          PieceConfig::PieceConfig((PieceConfig *)pFVar17);
          pFVar17 = pFVar2;
        } while (pFVar2 != pFVar20 + 0x18);
        pFVar20 = pFVar20 + 0x18;
      } while (pFVar2 != (FPoint *)&local_8);
                    /* WARNING: Ignoring partial resolution of indirect */
      local_28d0._0_4_ = 0.0;
      DividePoly((FPoint *)local_2808,iVar5,(FPoint *)local_1808,0x100,(int *)&local_28d0);
      if (0.99 < fVar25) {
        if (0 < (int)(float)local_28d0) {
          iVar6 = 0;
          pFVar20 = (FPoint *)local_1808;
          do {
            this_00 = (Point *)local_2868;
            if (*(long *)(param_2 + 0x40) == 0) {
              do {
                pPVar3 = this_00 + 8;
                Point::Point(this_00);
                this_00 = pPVar3;
              } while (pPVar3 != aPStack_2850);
              lVar24 = 0;
              pFVar17 = pFVar20;
              do {
                fVar25 = *(float *)pFVar17;
                pFVar2 = pFVar17 + 4;
                pFVar17 = pFVar17 + 8;
                Point::Point((Point *)&local_28b0,(int)fVar25,(int)*(float *)pFVar2);
                *(ulong *)(local_2868 + lVar24) = CONCAT44(fStack_28ac,local_28b0);
                lVar24 = lVar24 + 8;
              } while (lVar24 != 0x18);
              Graphics::SetColor(param_1,(Color *)(this + 0x1460));
              Graphics::PolyFill(param_1,(Point *)local_2868,3,true);
            }
            else {
              this_01 = local_2868;
              do {
                pPVar16 = (PieceConfig *)(this_01 + 0x20);
                SexyVertex2D::SexyVertex2D(this_01);
                this_01 = (SexyVertex2D *)pPVar16;
              } while (pPVar16 != local_2808);
              lVar24 = 0;
              pFVar17 = pFVar20;
              do {
                SexyVertex2D::SexyVertex2D
                          ((SexyVertex2D *)&local_28b0,*(float *)pFVar17,*(float *)(pFVar17 + 4),
                           (*(float *)pFVar17 + (float)*(int *)(param_2 + 0x48)) /
                           (float)*(int *)(*(long *)(param_2 + 0x40) + 0x38),
                           (*(float *)(pFVar17 + 4) + (float)*(int *)(param_2 + 0x4c)) /
                           (float)*(int *)(*(long *)(param_2 + 0x40) + 0x3c));
                lVar19 = lVar24 + 0x20;
                *(ulong *)(local_2868 + lVar24) = CONCAT44(fStack_28ac,local_28b0);
                *(undefined8 *)((long)auStack_2860 + lVar24) = uStack_28a8;
                *(undefined8 *)((long)auStack_2860 + lVar24 + 8) = local_28a0;
                *(undefined8 *)(aSStack_2848 + lVar24 + -8) = uStack_2898;
                lVar24 = lVar19;
                pFVar17 = pFVar17 + 8;
              } while (lVar19 != 0x60);
              Color::Color((Color *)&local_28b0,1);
              Graphics::SetColor(param_1,(Color *)&local_28b0);
              Graphics::DrawTriangleTex
                        (param_1,*(Image **)(param_2 + 0x40),local_2868,aSStack_2848,aSStack_2828);
            }
            iVar6 = iVar6 + 1;
            pFVar20 = pFVar20 + 0x18;
          } while (iVar6 < (int)(float)local_28d0);
        }
        if (this[0x1554] != (PIEffect)0x0) {
          Color::Color((Color *)&local_28b0,0,0xff,0xff);
          Graphics::SetColor(param_1,(Color *)&local_28b0);
LAB_053cec70:
          iVar6 = 0;
          if (0 < iVar5) {
            pPVar16 = local_2808;
            do {
              iVar6 = iVar6 + 1;
              FPoint::FPoint((FPoint *)&local_28b8,(TPoint *)pPVar16);
              iVar4 = 0;
              if (iVar5 != 0) {
                iVar4 = iVar6 / iVar5;
              }
              FPoint::FPoint((FPoint *)&local_28b0,
                             (TPoint *)(local_2808 + (long)(iVar6 - iVar4 * iVar5) * 8));
              Graphics::DrawLine(param_1,local_28b8,local_28b4,local_28b0,fStack_28ac);
              pPVar16 = (PieceConfig *)(pPVar16 + 8);
            } while (iVar6 != iVar5);
          }
        }
      }
      else if (this[0x1554] != (PIEffect)0x0) {
        Color::Color((Color *)&local_28b0,0,0x40,0x40);
        Graphics::SetColor(param_1,(Color *)&local_28b0);
        goto LAB_053cec70;
      }
    }
    lVar7 = lVar7 + 1;
  }
  lVar7 = 0;
  uVar18 = *(undefined8 *)(lVar13 + 0x20);
  iVar5 = FUN_053b9cb4(uVar18,*(undefined8 *)(lVar13 + 0x28));
  if (0 < iVar5) {
    do {
      lVar24 = FUN_053b9d48(uVar18,lVar7);
      fVar25 = (float)PIValue::GetLastKeyframe((PIValue *)(lVar24 + 0x78),*(float *)(this + 0x14e8))
      ;
      if ((fVar25 <= 0.99) || (*(char *)(lVar24 + 0x14) == '\0')) {
        if (this[0x1554] != (PIEffect)0x0) {
          if (0.99 < fVar25) goto LAB_053cef50;
          Color::Color((Color *)&local_28b0,0x40,0,0);
          Graphics::SetColor(param_1,(Color *)&local_28b0);
          goto LAB_053cef74;
        }
      }
      else {
LAB_053cef50:
        Color::Color((Color *)&local_28b0,0xff,0,0);
        Graphics::SetColor(param_1,(Color *)&local_28b0);
LAB_053cef74:
        uVar18 = *(undefined8 *)(lVar24 + 0x170);
        lVar19 = 1;
        iVar5 = FUN_053b9da0(uVar18,*(undefined8 *)(lVar24 + 0x178));
        if (1 < iVar5) {
          do {
            pTVar11 = (TPoint *)FUN_053b9c64(uVar18,lVar19 + -1);
            FPoint::FPoint((FPoint *)&local_28d8,pTVar11);
            pTVar11 = (TPoint *)FUN_053b9c64(*(undefined8 *)(lVar24 + 0x170),lVar19);
            FPoint::FPoint((FPoint *)&local_28d0,pTVar11);
            if (1.5 < *(float *)(lVar24 + 0x10)) {
              uVar21 = 0;
              fVar26 = local_28d0._4_4_ - local_28d8._4_4_;
              FastCurve::SetOutRange
                        ((FastCurve *)&local_28c8,(float)local_28d0 - (float)local_28d8,fVar26);
              local_28b0 = (float)SexyVector2::Normalize((SexyVector2 *)&local_28c8);
              fStack_28ac = fVar26;
              fVar25 = (float)SexyVector2::Perp((SexyVector2 *)&local_28b0);
              DVec2::DVec2((DVec2 *)&local_28c0,fVar25,fVar26);
              TransformFPoint((SexyMatrix3 *)(this + 0x1574),(FPoint *)&local_28c0);
              local_28c0 = CONCAT44(fStack_28ac,local_28b0);
              TPoint<float>::operator*((TPoint<float> *)&local_28c0,*(float *)(lVar24 + 0x10));
              UI::UDim::operator+((UDim *)&local_28d8,(UDim *)&local_28b8);
              FPoint::FPoint((FPoint *)local_1808,(TPoint *)&local_28b0);
              TPoint<float>::operator*((TPoint<float> *)&local_28c0,*(float *)(lVar24 + 0x10));
              UI::UDim::operator+((UDim *)&local_28d0,(UDim *)&local_28b8);
              FPoint::FPoint(aFStack_1800,(TPoint *)&local_28b0);
              TPoint<float>::operator*((TPoint<float> *)&local_28c0,*(float *)(lVar24 + 0x10));
              TPoint<float>::operator-((TPoint<float> *)&local_28d0,(TPoint *)&local_28b8);
              FPoint::FPoint(aFStack_17f8,(TPoint *)&local_28b0);
              TPoint<float>::operator*((TPoint<float> *)&local_28c0,*(float *)(lVar24 + 0x10));
              TPoint<float>::operator-((TPoint<float> *)&local_28d8,(TPoint *)&local_28b8);
              FPoint::FPoint(local_17f0,(TPoint *)&local_28b0);
              pFVar20 = (FPoint *)local_1808;
              do {
                uVar1 = (int)uVar21 + 1;
                uVar21 = (ulong)uVar1;
                uVar18 = *(undefined8 *)pFVar20;
                local_28d8._0_4_ = (float)uVar18;
                local_28d8._4_4_ = (float)((ulong)uVar18 >> 0x20);
                fVar25 = local_28d8._4_4_;
                uVar14 = *(undefined8 *)((FPoint *)local_1808 + (uVar21 & 3) * 8);
                local_28d0._0_4_ = (float)uVar14;
                local_28d0._4_4_ = (float)((ulong)uVar14 >> 0x20);
                fVar26 = local_28d0._4_4_;
                fVar27 = (float)local_28d8;
                local_28d8 = uVar18;
                fVar29 = (float)local_28d0;
                local_28d0 = uVar14;
                Graphics::DrawLine(param_1,fVar27,fVar25,fVar29,fVar26);
                pFVar20 = pFVar20 + 8;
              } while (uVar1 != 4);
            }
            else {
              Graphics::DrawLine(param_1,(float)local_28d8,local_28d8._4_4_,(float)local_28d0,
                                 local_28d0._4_4_);
            }
            lVar19 = lVar19 + 1;
            uVar18 = *(undefined8 *)(lVar24 + 0x170);
            iVar5 = FUN_053b9da0(uVar18,*(undefined8 *)(lVar24 + 0x178));
          } while ((int)lVar19 < iVar5);
        }
      }
      lVar7 = lVar7 + 1;
      uVar18 = *(undefined8 *)(lVar13 + 0x20);
      iVar5 = FUN_053b9cb4(uVar18,*(undefined8 *)(lVar13 + 0x28));
    } while ((int)lVar7 < iVar5);
  }
  lVar7 = 0;
  uVar18 = *(undefined8 *)(lVar13 + 0x50);
  iVar5 = FUN_053b9d1c(uVar18,*(undefined8 *)(lVar13 + 0x58));
  if (0 < iVar5) {
    do {
      lVar24 = FUN_053b9d8c(uVar18,lVar7);
      fVar25 = (float)PIValue::GetLastKeyframe
                                ((PIValue *)(lVar24 + 0x150),*(float *)(this + 0x14e8));
      if ((fVar25 <= 0.99) || (*(char *)(lVar24 + 8) == '\0')) {
        if (this[0x1554] != (PIEffect)0x0) {
          if (0.99 < fVar25) goto LAB_053cf0c0;
          iVar5 = 0x40;
          goto LAB_053cf0d0;
        }
      }
      else {
LAB_053cf0c0:
        iVar5 = 0xff;
LAB_053cf0d0:
        uVar21 = 0;
        Color::Color((Color *)&local_28b0,iVar5,0,iVar5);
        Graphics::SetColor(param_1,(Color *)&local_28b0);
        pTVar11 = (TPoint *)(lVar24 + 0x310);
        do {
          uVar1 = (int)uVar21 + 1;
          uVar21 = (ulong)uVar1;
          FPoint::FPoint((FPoint *)&local_28b8,pTVar11);
          FPoint::FPoint((FPoint *)&local_28b0,(TPoint *)(lVar24 + ((uVar21 & 3) + 0x62) * 8));
          Graphics::DrawLine(param_1,local_28b8,local_28b4,local_28b0,fStack_28ac);
          pTVar11 = pTVar11 + 8;
        } while (uVar1 != 4);
        iVar5 = 0;
        fVar25 = (float)PIValue::GetValueAt((PIValue *)(lVar24 + 0xe0),*(float *)(this + 0x14e8),0.0
                                           );
        fVar25 = (float)FUN_053b9a64(-fVar25);
        fVar26 = (float)PIValue::GetValueAt((PIValue *)(lVar24 + 0x1c0),*(float *)(this + 0x14e8),
                                            0.0);
        fVar26 = (float)FUN_053b9a64(-fVar26);
        Transform::Transform((Transform *)local_1808);
        Transform::RotateRad((Transform *)local_1808,-(fVar26 + fVar25));
        DVec2::DVec2((DVec2 *)local_2808,5.0,0.0);
        DVec2::DVec2(aDStack_2800,-5.0,-10.0);
        DVec2::DVec2(aDStack_27f8,-5.0,10.0);
        pDVar22 = (DVec2 *)local_2808;
        do {
          iVar5 = iVar5 + 1;
          pSVar12 = (SexyMatrix3 *)Transform::GetMatrix((Transform *)local_1808);
          TransformFPoint(pSVar12,(FPoint *)pDVar22);
          UI::UDim::operator+((UDim *)&local_28b8,(UDim *)(lVar24 + 0x330));
          FPoint::FPoint((FPoint *)&local_28c8,(TPoint *)&local_28b0);
          pSVar12 = (SexyMatrix3 *)Transform::GetMatrix((Transform *)local_1808);
          TransformFPoint(pSVar12,(FPoint *)((DVec2 *)local_2808 + (long)(iVar5 % 3) * 8));
          UI::UDim::operator+((UDim *)&local_28b8,(UDim *)(lVar24 + 0x330));
          FPoint::FPoint((FPoint *)&local_28c0,(TPoint *)&local_28b0);
          Graphics::DrawLine(param_1,local_28c8,local_28c4,(float)local_28c0,local_28c0._4_4_);
          pDVar22 = (DVec2 *)(pDVar22 + 8);
        } while (iVar5 != 3);
      }
      lVar7 = lVar7 + 1;
      uVar18 = *(undefined8 *)(lVar13 + 0x50);
      iVar5 = FUN_053b9d1c(uVar18,*(undefined8 *)(lVar13 + 0x58));
    } while ((int)lVar7 < iVar5);
  }
  Graphics::PopState(param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x053ce874:
  uVar18 = *(undefined8 *)(param_2 + 8);
  iVar5 = FUN_053b9b14(uVar18,*(undefined8 *)(param_2 + 0x10));
LAB_053ce888:
  local_28f8 = local_28f8 + 1;
  if (iVar5 <= (int)local_28f8) goto LAB_053ce8a0;
  goto LAB_053ce6dc;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::Draw(Sexy::Graphics*) */

void __thiscall Sexy::PIEffect::Draw(PIEffect *this,Graphics *param_1)

{
  Insets *pIVar1;
  undefined8 uVar2;
  PIEffect PVar3;
  int iVar4;
  undefined8 *puVar5;
  PILayer *pPVar6;
  long lVar7;
  float fVar8;
  undefined8 local_28;
  undefined8 uStack_20;
  Color aCStack_18 [16];
  long local_8;
  
  pIVar1 = (Insets *)(this + 0x1544);
  local_8 = ___stack_chk_guard;
  Insets::Insets((Insets *)&local_28,pIVar1);
  Graphics::SetColor(param_1,(Color *)pIVar1);
  puVar5 = (undefined8 *)Graphics::GetFinalColor(param_1);
  uVar2 = puVar5[1];
  *(undefined8 *)pIVar1 = *puVar5;
  *(undefined8 *)(this + 0x154c) = uVar2;
  DrawBatcher::Setup((DrawBatcher *)gDrawBatcher,param_1);
  if (*(float *)(this + 0x1574) == 1.0) {
    if (*(float *)(this + 0x1580) == 0.0) {
      PVar3 = (PIEffect)0x1;
      if (((*(float *)(this + 0x1578) == 0.0) && (*(float *)(this + 0x1584) == 1.0)) &&
         (*(float *)(this + 0x157c) == 0.0)) {
        PVar3 = (PIEffect)(*(float *)(this + 0x1588) != 0.0);
      }
      this[0x1532] = PVar3;
      goto LAB_053cf7e4;
    }
    this[0x1532] = (PIEffect)0x1;
  }
  else {
    this[0x1532] = (PIEffect)0x1;
    if (*(float *)(this + 0x1580) == 0.0) {
LAB_053cf7e4:
      if (*(float *)(this + 0x1578) == 0.0) {
        this[0x1531] = (PIEffect)0x0;
        gDrawBatcher._98328_4_ = *(float *)(this + 0x157c) + (float)gDrawBatcher._98328_4_;
        gDrawBatcher._98332_4_ = *(float *)(this + 0x1588) + (float)gDrawBatcher._98332_4_;
        goto LAB_053cf69c;
      }
    }
  }
  this[0x1531] = (PIEffect)0x1;
LAB_053cf69c:
  lVar7 = 0;
  *(undefined4 *)(this + 0x153c) = 0;
  iVar4 = FUN_053b9ba0(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x38),
                       *(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
  if (0 < iVar4) {
    do {
      pPVar6 = (PILayer *)FUN_053b9bd4(*(undefined8 *)(this + 0x14c0),lVar7);
      if (pPVar6[0x2c] != (PILayer)0x0) {
        DrawLayer(this,param_1,pPVar6);
        iVar4 = FUN_053b9ba0(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x38),
                             *(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < iVar4);
  }
  if (this[0x1554] != (PIEffect)0x0) {
    Graphics::PushState(param_1);
    Color::Color(aCStack_18,0);
    Graphics::SetColor(param_1,aCStack_18);
    Graphics::FillRect(param_1,-4,-4,8,8);
    Color::Color(aCStack_18,1);
    Graphics::SetColor(param_1,aCStack_18);
    Graphics::FillRect(param_1,-3,-3,6,6);
    Graphics::PopState(param_1);
  }
  DrawBatcher::FlushTriQueue((DrawBatcher *)gDrawBatcher);
  if (this[0x1531] == (PIEffect)0x0) {
    gDrawBatcher._98328_4_ = (float)gDrawBatcher._98328_4_ - *(float *)(this + 0x157c);
    gDrawBatcher._98332_4_ = (float)gDrawBatcher._98332_4_ - *(float *)(this + 0x1588);
  }
  *(undefined8 *)(this + 0x1544) = local_28;
  *(undefined8 *)(this + 0x154c) = uStack_20;
  fVar8 = (float)GetMatrixScale((SexyMatrix3 *)(this + 0x1574));
  *(int *)(this + 0x153c) = (int)(fVar8 * (float)*(int *)(this + 0x153c));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Removing unreachable block (ram,0x053d0940) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::UpdateParticleDef(Sexy::PILayer*, Sexy::PIEmitter*, Sexy::PIEmitterInstance*,
   Sexy::PIParticleDef*, Sexy::PIParticleDefInstance*, Sexy::PIParticleGroup*,
   Sexy::PIFreeEmitterInstance*) */

void __thiscall
Sexy::PIEffect::UpdateParticleDef
          (PIEffect *this,PILayer *param_1,PIEmitter *param_2,PIEmitterInstance *param_3,
          PIParticleDef *param_4,PIParticleDefInstance *param_5,PIParticleGroup *param_6,
          PIFreeEmitterInstance *param_7)

{
  long *plVar1;
  TPoint<float> *this_00;
  char cVar2;
  PIParticleDef PVar3;
  bool bVar4;
  PIParticleGroup PVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  ulong uVar11;
  TPoint<float> *this_01;
  int *piVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  PIValue *this_02;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float local_58;
  float local_54;
  undefined8 local_50;
  TPoint<float> aTStack_48 [8];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 uStack_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  fVar19 = *(float *)(this + 0x1540);
  fVar25 = *(float *)(this + 0x15bc);
  local_8 = ___stack_chk_guard;
  lVar18 = *(long *)(param_3 + 0x38);
  if (param_7 == (PIFreeEmitterInstance *)0x0) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = *(float *)(param_7 + 0x6c);
  }
  if (param_4 != (PIParticleDef *)0x0) {
    iVar8 = *(int *)(this + 0x1550);
    iVar9 = *(int *)(param_1 + 0x3c);
    fVar20 = (float)PIValue::GetValueAt((PIValue *)(lVar18 + 0x498),*(float *)(this + 0x14e8),0.0);
    fVar21 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x7e8),*(float *)(this + 0x14e8),1.0);
    fVar22 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x9d8),*(float *)(this + 0x14e8),0.0);
    fVar23 = *(float *)(this + 0x14e8);
    *(int *)(param_5 + 0x1c) =
         (int)(fVar20 * fVar21 * (float)((iVar8 * iVar9 * 0x100) / 0xfe01) * fVar22);
    uVar24 = PIValue::GetValueAt((PIValue *)(param_4 + 0x1f8),fVar23,0.0);
    *(undefined4 *)(param_5 + 0x10) = uVar24;
    uVar24 = PIValue::GetValueAt((PIValue *)(param_4 + 0x268),*(float *)(this + 0x14e8),0.0);
    *(undefined4 *)(param_5 + 0x14) = uVar24;
    uVar24 = PIValue::GetValueAt((PIValue *)(param_4 + 0x2d8),*(float *)(this + 0x14e8),0.0);
    *(undefined4 *)(param_5 + 0x18) = uVar24;
  }
  iVar8 = *(int *)(param_5 + 0xc);
  PVar5 = param_6[0x14];
  if (iVar8 == (iVar8 / 0x19) * 0x19) {
    if (PVar5 == (PIParticleGroup)0x0) {
      if (iVar8 == 0) {
        fVar20 = (float)GetRandFloat(this);
        fVar21 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x428),*(float *)(this + 0x14e8),
                                            0.0);
        PVar5 = param_6[0x14];
        iVar8 = *(int *)(param_5 + 0xc);
        *(float *)(param_5 + 4) = fVar20 * fVar21 * 0.25;
      }
      else {
        fVar20 = (float)GetRandFloat(this);
        fVar21 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x428),*(float *)(this + 0x14e8),
                                            0.0);
        iVar8 = *(int *)(param_5 + 0xc);
        PVar5 = param_6[0x14];
        *(float *)(param_5 + 4) = fVar20 * fVar21 * 0.375;
      }
      goto LAB_053cfca0;
    }
    *(int *)(param_5 + 0xc) = iVar8 + 1;
LAB_053cfbf4:
    fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x78),*(float *)(this + 0x14e8),0.0);
    if (param_6[0x15] == (PIParticleGroup)0x0) {
      fVar21 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x118),
                                          *(float *)(this + 0x14e8),0.0);
    }
    else {
      fVar21 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x3f8),*(float *)(this + 0x14e8),0.0
                                         );
    }
    PVar5 = param_6[0x14];
    fVar20 = fVar21 * fVar20 * *(float *)(param_3 + 0x11c);
    if (PVar5 != (PIParticleGroup)0x0) goto LAB_053cfd44;
LAB_053cfc38:
    local_58 = fVar20;
    if (param_6[0x15] == (PIParticleGroup)0x0) {
      switch(*(undefined4 *)(lVar18 + 0x10)) {
      case 1:
        if (*(int *)(lVar18 + 0x18) == 0) {
          iVar8 = 0;
          lVar16 = 0;
          while( true ) {
            uVar13 = *(undefined8 *)(lVar18 + 0x8f8);
            iVar9 = FUN_053b9cd4(uVar13,*(undefined8 *)(lVar18 + 0x900));
            if (iVar9 + -1 <= (int)lVar16) break;
            FUN_053b9ce8(uVar13,lVar16);
            PIValue2D::GetValueAt(*(float *)(this + 0x14e8));
            FUN_053b9ce8(*(undefined8 *)(lVar18 + 0x8f8),lVar16 + 1);
            PIValue2D::GetValueAt(*(float *)(this + 0x14e8));
            TPoint<float>::operator-(aTStack_48,(TPoint *)&local_50);
            FPoint::FPoint((FPoint *)&local_40,(TPoint *)&local_38);
            iVar8 = (int)(SQRT(local_3c * local_3c + local_40 * local_40) + (float)iVar8);
            lVar16 = lVar16 + 1;
          }
          PVar5 = param_6[0x14];
          local_58 = fVar20 * 0.028571429 * (float)iVar8;
        }
        else {
          PVar5 = (PIParticleGroup)0x0;
          local_58 = fVar20 * (float)*(int *)(lVar18 + 0x18);
        }
        break;
      case 2:
        fVar21 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x738),
                                            *(float *)(this + 0x14e8),0.0);
        fVar22 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x7a8),
                                            *(float *)(this + 0x14e8),0.0);
        iVar8 = *(int *)(lVar18 + 0x18);
        if (iVar8 == 0) {
          PVar5 = param_6[0x14];
          fVar21 = (fVar22 * fVar22 + fVar21 * fVar21) * 0.5;
          goto LAB_053d0d04;
        }
LAB_053d0bcc:
        PVar5 = param_6[0x14];
        local_58 = fVar20 * (float)iVar8;
        break;
      case 3:
        if (*(int *)(lVar18 + 0x18) == 0) {
          fVar21 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x738),
                                              *(float *)(this + 0x14e8),0.0);
          fVar22 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x7a8),
                                              *(float *)(this + 0x14e8),0.0);
          PVar5 = param_6[0x14];
          local_58 = fVar20 * (fVar21 * fVar22 * 0.00027777778 + 1.0);
        }
        else {
          PVar5 = (PIParticleGroup)0x0;
          local_58 = fVar20 * (float)(*(int *)(lVar18 + 0x18) * *(int *)(lVar18 + 0x1c));
        }
        break;
      case 4:
        fVar21 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x738),
                                            *(float *)(this + 0x14e8),0.0);
        iVar8 = *(int *)(lVar18 + 0x18);
        if (iVar8 != 0) goto LAB_053d0bcc;
        fVar21 = fVar21 * fVar21;
        PVar5 = param_6[0x14];
LAB_053d0d04:
        local_58 = fVar20 * 0.028571429 * SQRT(fVar21) * 6.28318;
      }
    }
  }
  else {
LAB_053cfca0:
    *(int *)(param_5 + 0xc) = iVar8 + 1;
    if (PVar5 != (PIParticleGroup)0x0) goto LAB_053cfbf4;
    if (param_6[0x15] == (PIParticleGroup)0x0) {
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x118),
                                          *(float *)(this + 0x14e8),0.0);
    }
    else {
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x3f8),*(float *)(this + 0x14e8),0.0
                                         );
    }
    fVar21 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0xa8),*(float *)(this + 0x14e8),0.0);
    fVar23 = *(float *)(param_5 + 4);
    fVar22 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xe78),fVar26,1.0);
    local_38 = 0.0;
    local_58 = fVar22 * fVar20 * (fVar21 + fVar23);
    pfVar10 = eastl::max_alt<float>(&local_38,&local_58);
    fVar20 = *pfVar10;
    if ((1.0 <= fVar26) && (param_6[0x15] != (PIParticleGroup)0x0)) {
      fVar20 = 0.0;
    }
    PVar5 = param_6[0x14];
    fVar20 = fVar20 * *(float *)(param_3 + 0x11c);
    if (PVar5 == (PIParticleGroup)0x0) goto LAB_053cfc38;
LAB_053cfd44:
    local_58 = fVar20 * 30.0;
  }
  cVar2 = *(char *)(lVar18 + 0x20);
  *(float *)param_5 =
       *(float *)param_5 +
       (local_58 / (1000.0 / (fVar19 * fVar25))) *
       *(float *)(*(long *)(this + 0x14b8) + 4) * mGlobalCountScale;
  if (((cVar2 == '\0') && (param_3[0x40] == (PIEmitterInstance)0x0)) ||
     (param_3[0x41] == (PIEmitterInstance)0x0)) {
    *(undefined4 *)param_5 = 0;
  }
  if ((PVar5 != (PIParticleGroup)0x0) || (param_4[0xc82] == (PIParticleDef)0x0)) {
    fVar19 = *(float *)param_5;
    bVar4 = true;
    goto LAB_053cfe18;
  }
  iVar8 = *(int *)(lVar18 + 0x10);
  if ((iVar8 == 4) || (iVar8 == 1)) {
    iVar9 = *(int *)(lVar18 + 0x18);
LAB_053d0b64:
    if (iVar9 != 0) goto LAB_053cfdbc;
    iVar9 = 1;
    bVar4 = false;
  }
  else {
    iVar9 = 1;
    if (iVar8 == 3) {
      iVar9 = *(int *)(lVar18 + 0x18) * *(int *)(lVar18 + 0x1c);
      goto LAB_053d0b64;
    }
LAB_053cfdbc:
    bVar4 = true;
  }
  plVar15 = *(long **)param_6;
  if (plVar15 == (long *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    do {
      plVar1 = plVar15 + 1;
      plVar15 = (long *)*plVar15;
      if (param_4 == (PIParticleDef *)*plVar1) {
        iVar8 = iVar8 + 1;
      }
    } while (plVar15 != (long *)0x0);
  }
  fVar19 = (float)(iVar9 - iVar8);
  *(float *)param_5 = fVar19;
LAB_053cfe18:
  do {
    if (fVar19 < 1.0) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    PVar5 = param_6[0x14];
    *(float *)param_5 = fVar19 - 1.0;
    if (PVar5 == (PIParticleGroup)0x0) {
      pfVar10 = (float *)ObjectPool<Sexy::PIParticleInstance>::Alloc
                                   ((ObjectPool<Sexy::PIParticleInstance> *)(this + 0x14f0));
    }
    else {
      pfVar10 = (float *)ObjectPool<Sexy::PIFreeEmitterInstance>::Alloc
                                   ((ObjectPool<Sexy::PIFreeEmitterInstance> *)(this + 0x1510));
      uVar11 = FUN_053b9c30(*(undefined8 *)(param_2 + 0x1268),*(undefined8 *)(param_2 + 0x1270));
      std::vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>::resize
                ((vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>> *)
                 (pfVar10 + 0x48),uVar11);
    }
    fVar19 = *(float *)(param_5 + 8);
    *(PIParticleDef **)(pfVar10 + 2) = param_4;
    *(PIParticleDefInstance **)(pfVar10 + 4) = param_5;
    *(PIEmitter **)(pfVar10 + 0x1e) = param_2;
    *(PIFreeEmitterInstance **)(pfVar10 + 0x24) = param_7;
    *(int *)(param_5 + 8) = (int)fVar19 + 1;
    PVar5 = param_6[0x14];
    pfVar10[0x20] = fVar19;
    if (PVar5 == (PIParticleGroup)0x0) {
      if (param_4[0xcae] == (PIParticleDef)0x0) {
        fVar19 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0xa48),*(float *)(this + 0x14e8),
                                            0.0);
        this_02 = (PIValue *)(param_4 + 0xab8);
LAB_053d0a00:
        fVar25 = (float)PIValue::GetValueAt(this_02,*(float *)(this + 0x14e8),0.0);
        fVar20 = (float)GetRandFloat(this);
        fVar19 = fVar19 + fVar25 * fVar20 * 0.5;
      }
      else {
        if (param_6[0x15] != (PIParticleGroup)0x0) {
          fVar19 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x938),*(float *)(this + 0x14e8)
                                              ,0.0);
          this_02 = (PIValue *)(param_2 + 0x9a8);
          goto LAB_053d0a00;
        }
        fVar19 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x578),
                                            *(float *)(this + 0x14e8),0.0);
        if (param_6[0x15] == (PIParticleGroup)0x0) {
          fVar25 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x5e8),
                                              *(float *)(this + 0x14e8),0.0);
        }
        else {
          fVar25 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x9a8),*(float *)(this + 0x14e8)
                                              ,0.0);
        }
        fVar20 = (float)GetRandFloat(this);
        fVar19 = fVar19 + fVar25 * fVar20 * 0.5;
      }
      fVar19 = (float)FUN_053b9a64(-fVar19);
      if (param_7 == (PIFreeEmitterInstance *)0x0) goto LAB_053d066c;
LAB_053cff14:
      fVar19 = *(float *)(param_7 + 0x28) + fVar19;
      pfVar10[0x30] = *(float *)(param_7 + 0x28);
      if (param_4 == (PIParticleDef *)0x0) goto LAB_053d0694;
LAB_053cff24:
      if (param_4[0xc8c] == (PIParticleDef)0x0) {
        pfVar10[0x31] = 0.0;
        fVar25 = 0.0;
      }
      else {
        uVar6 = MTRand::Next((MTRand *)(this + 0x58));
        fVar25 = (float)(uVar6 & 0x7fff);
        pfVar10[0x31] = fVar25;
      }
      plVar15 = (long *)FUN_053b9b0c(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                                     (long)*(int *)(param_4 + 0x18));
      iVar8 = *(int *)(*plVar15 + 0x40);
      iVar9 = 0;
      if (iVar8 != 0) {
        iVar9 = (int)fVar25 / iVar8;
      }
      pfVar10[0xb] = (float)((int)fVar25 - iVar9 * iVar8);
      if (param_6[0x15] == (PIParticleGroup)0x0) goto LAB_053d06a0;
LAB_053cff60:
      fVar25 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x778),*(float *)(this + 0x14e8),0.0
                                         );
    }
    else {
      if (param_6[0x15] == (PIParticleGroup)0x0) {
        fVar19 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x578),
                                            *(float *)(this + 0x14e8),0.0);
      }
      else {
        fVar19 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x938),*(float *)(this + 0x14e8),
                                            0.0);
      }
      if (param_6[0x15] == (PIParticleGroup)0x0) {
        fVar25 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x5e8),
                                            *(float *)(this + 0x14e8),0.0);
      }
      else {
        fVar25 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x9a8),*(float *)(this + 0x14e8),
                                            0.0);
      }
      fVar20 = (float)GetRandFloat(this);
      fVar19 = (float)FUN_053b9a64(-(fVar19 + fVar25 * fVar20 * 0.5));
      if (param_7 != (PIFreeEmitterInstance *)0x0) goto LAB_053cff14;
LAB_053d066c:
      fVar25 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x6c8),
                                          *(float *)(this + 0x14e8),0.0);
      fVar25 = (float)FUN_053b9a64(-fVar25);
      pfVar10[0x30] = fVar25;
      fVar19 = fVar25 + fVar19;
      if (param_4 != (PIParticleDef *)0x0) goto LAB_053cff24;
LAB_053d0694:
      PVar5 = param_6[0x15];
      pfVar10[0x31] = SUB84(param_4,0);
      if (PVar5 != (PIParticleGroup)0x0) goto LAB_053cff60;
LAB_053d06a0:
      fVar25 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x428),
                                          *(float *)(this + 0x14e8),0.0);
    }
    PVar5 = param_6[0x14];
    pfVar10[0x2c] = fVar25;
    if (PVar5 == (PIParticleGroup)0x0) {
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x3b8),*(float *)(this + 0x14e8),0.0
                                         );
      pfVar10[0x15] = fVar20 * fVar25;
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x498),*(float *)(this + 0x14e8),0.0
                                         );
      fVar20 = fVar20 * fVar25;
      pfVar10[0x12] = fVar20;
      if ((param_4 != (PIParticleDef *)0x0) && (param_4[0xc80] == (PIParticleDef)0x0)) {
        fVar25 = (float)GetVariationScalar(this);
        fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0xb98),*(float *)(this + 0x14e8),
                                            0.0);
        fVar20 = fVar20 * fVar25;
      }
      pfVar10[0x13] = fVar20;
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x508),*(float *)(this + 0x14e8),0.0
                                         );
      pfVar10[0xf] = fVar20 * fVar25;
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x578),*(float *)(this + 0x14e8),0.0
                                         );
      pfVar10[0x10] = fVar20 * fVar25;
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x5e8),*(float *)(this + 0x14e8),0.0
                                         );
      pfVar10[0x11] = fVar20 * fVar25;
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x658),*(float *)(this + 0x14e8),0.0
                                         );
      pfVar10[0xe] = fVar20 * fVar25;
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x6c8),*(float *)(this + 0x14e8),0.0
                                         );
      PVar5 = param_6[0x15];
      pfVar10[0x14] = fVar20 * fVar25;
      if (PVar5 == (PIParticleGroup)0x0) {
        fVar25 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x188),
                                            *(float *)(this + 0x14e8),0.0);
      }
      else {
        fVar25 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x468),*(float *)(this + 0x14e8),
                                            0.0);
      }
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x118),*(float *)(this + 0x14e8),0.0
                                         );
      PVar5 = param_6[0x15];
      pfVar10[0x2d] = (fVar20 + pfVar10[0x12]) * fVar25;
      if (PVar5 == (PIParticleGroup)0x0) {
        fVar25 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x818),
                                            *(float *)(this + 0x14e8),0.0);
      }
      else {
        fVar25 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x4d8),*(float *)(this + 0x14e8),
                                            0.0);
      }
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0xb28),*(float *)(this + 0x14e8),0.0
                                         );
      PVar5 = param_6[0x15];
      pfVar10[0x2e] = (fVar20 + pfVar10[0x13]) * fVar25;
      if (PVar5 != (PIParticleGroup)0x0) {
        fVar20 = *(float *)(param_7 + 0x48);
        fVar25 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xee8),fVar26,1.0);
        fVar21 = *(float *)(param_7 + 0x4c);
        pfVar10[0x2d] = (fVar20 + 1.0) * pfVar10[0x2d] * fVar25;
        fVar25 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xee8),fVar26,1.0);
        fVar20 = *(float *)(param_7 + 0x58);
        pfVar10[0x2e] = (fVar21 + 1.0) * pfVar10[0x2e] * fVar25;
        fVar25 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x11f8),fVar26,1.0);
        pfVar10[0x2c] = (fVar20 + 1.0) * pfVar10[0x2c] * fVar25;
      }
    }
    else {
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xa18),*(float *)(this + 0x14e8),0.0
                                         );
      pfVar10[0x15] = fVar20 * fVar25;
      fVar25 = (float)GetRandFloat(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xaf8),*(float *)(this + 0x14e8),0.0
                                         );
      fVar20 = fVar20 * fVar25;
      pfVar10[0x12] = fVar20;
      if ((param_4 != (PIParticleDef *)0x0) && (param_4[0xc80] == (PIParticleDef)0x0)) {
        fVar25 = (float)GetRandFloat(this);
        fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xb68),*(float *)(this + 0x14e8),
                                            0.0);
        fVar20 = fVar20 * fVar25;
      }
      pfVar10[0x13] = fVar20;
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xbd8),*(float *)(this + 0x14e8),0.0
                                         );
      pfVar10[0xf] = fVar20 * fVar25;
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xc48),*(float *)(this + 0x14e8),0.0
                                         );
      pfVar10[0x10] = fVar20 * fVar25;
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xcb8),*(float *)(this + 0x14e8),0.0
                                         );
      pfVar10[0x11] = fVar20 * fVar25;
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xd28),*(float *)(this + 0x14e8),0.0
                                         );
      pfVar10[0xe] = fVar20 * fVar25;
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xd98),*(float *)(this + 0x14e8),0.0
                                         );
      pfVar10[0x14] = fVar20 * fVar25;
      fVar25 = (float)GetVariationScalar(this);
      fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xe08),*(float *)(this + 0x14e8),0.0
                                         );
      pfVar10[0x16] = fVar20 * fVar25;
    }
    local_54 = fVar19;
    fVar19 = (float)GetRandFloatU(this);
    pfVar10[0x2f] = fVar19;
    pfVar10[0x19] = 0.0;
    fVar19 = (float)GetRandFloat(this);
    PVar5 = param_6[0x14];
    pfVar10[0x3b] = fVar19;
    pfVar10[10] = 0.0;
    if (PVar5 == (PIParticleGroup)0x0) {
      if (param_6[0x15] == (PIParticleGroup)0x0) {
        fVar20 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0xa8),
                                            *(float *)(this + 0x14e8),0.0);
      }
      else {
        fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x388),*(float *)(this + 0x14e8),
                                            0.0);
      }
      fVar19 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x38),*(float *)(this + 0x14e8),0.0)
      ;
      fVar20 = (fVar19 + pfVar10[0x15]) * fVar20;
      pfVar10[0x1a] = fVar20;
    }
    else {
      fVar19 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 8),*(float *)(this + 0x14e8),0.0);
      fVar25 = pfVar10[0x15];
      if (param_6[0x15] == (PIParticleGroup)0x0) {
        fVar20 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0xa8),
                                            *(float *)(this + 0x14e8),0.0);
      }
      else {
        fVar20 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x388),*(float *)(this + 0x14e8),
                                            0.0);
      }
      fVar20 = (fVar19 + fVar25) * 5.0 * fVar20;
      pfVar10[0x1a] = fVar20;
    }
    if (fVar20 <= 1e-08) {
      pfVar10[0x1b] = 1.0;
    }
    fVar25 = *(float *)(this + 0x15bc);
    fVar19 = *(float *)(this + 0x1540);
    pfVar10[0xc] = 0.0;
    pfVar10[0x1d] = 0.0;
    fVar20 = fVar20 * (1000.0 / (fVar19 * fVar25));
    pfVar10[0xd] = (float)(int)(2.1474836e+09 / fVar20);
    pfVar10[0x1c] = 1.0 / fVar20;
    if ((param_4 != (PIParticleDef *)0x0) && (param_4[0xc82] != (PIParticleDef)0x0)) {
      pfVar10[0xd] = 0.0;
      pfVar10[0xc] = 1.4013e-45;
      pfVar10[0x1c] = 0.0;
    }
    PieceConfig::PieceConfig((PieceConfig *)&local_50);
    if (param_6[0x15] == (PIParticleGroup)0x0) {
      GetEmitterPos((PIEmitterInstance *)this,SUB81(param_3,0));
      *(ulong *)(pfVar10 + 0x28) = CONCAT44(uStack_34,local_38);
      *(ulong *)(pfVar10 + 0x2a) = CONCAT44(uStack_34,local_38);
      if (bVar4) {
        GetGeomPos((PIEmitterInstance *)this,(PIParticleInstance *)param_3,pfVar10,(bool *)&local_54
                  );
        TPoint<float>::operator-(aTStack_48,(TPoint *)(pfVar10 + 0x28));
        FPoint::FPoint((FPoint *)&local_38,(TPoint *)&local_40);
        local_50 = CONCAT44(uStack_34,local_38);
      }
    }
    else {
      UI::UDim::operator+((UDim *)(param_7 + 0xa8),(UDim *)(param_7 + 0x18));
      FPoint::FPoint((FPoint *)&local_38,(TPoint *)&local_40);
      *(ulong *)(pfVar10 + 0x28) = CONCAT44(uStack_34,local_38);
      *(ulong *)(pfVar10 + 0x2a) = CONCAT44(uStack_34,local_38);
    }
    fVar19 = local_54;
    this_00 = (TPoint<float> *)(pfVar10 + 8);
    fVar25 = cosf(local_54);
    fVar19 = sinf(fVar19);
    DVec2::DVec2((DVec2 *)&local_38,fVar25,fVar19);
    PVar5 = param_6[0x14];
    *(ulong *)(pfVar10 + 8) = CONCAT44(uStack_34,local_38);
    if (PVar5 == (PIParticleGroup)0x0) {
      if (param_6[0x15] == (PIParticleGroup)0x0) {
        fVar19 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x1f8),
                                            *(float *)(this + 0x14e8),0.0);
      }
      else {
        fVar19 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x548),*(float *)(this + 0x14e8),
                                            0.0);
      }
      fVar25 = (float)PIValue::GetValueAt((PIValue *)(param_4 + 0x188),*(float *)(this + 0x14e8),0.0
                                         );
      fVar19 = (fVar25 + pfVar10[0xf]) * fVar19;
      this_01 = this_00;
    }
    else {
      if (param_6[0x15] == (PIParticleGroup)0x0) {
        fVar19 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x1f8),
                                            *(float *)(this + 0x14e8),0.0);
      }
      else {
        fVar19 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0x548),*(float *)(this + 0x14e8),
                                            0.0);
      }
      fVar25 = (float)PIValue::GetValueAt((PIValue *)(param_2 + 0xe8),*(float *)(this + 0x14e8),0.0)
      ;
      TPoint<float>::operator*(this_00,(fVar25 + pfVar10[0xf]) * fVar19);
      fVar19 = 160.0;
      this_01 = aTStack_48;
    }
    TPoint<float>::operator*(this_01,fVar19);
    FPoint::FPoint((FPoint *)&local_38,(TPoint *)&local_40);
    *(ulong *)this_00 = CONCAT44(uStack_34,local_38);
    if (param_6[0x14] == (PIParticleGroup)0x0) {
      if (param_4[0xcaf] == (PIParticleDef)0x0) {
        if (param_4[0xcb1] == (PIParticleDef)0x0) {
          fVar19 = (float)FUN_053b9a64((float)*(int *)(param_4 + 0xcb8));
          pfVar10[10] = fVar19;
        }
        else {
          iVar8 = *(int *)(param_4 + 0xcc0);
          fVar19 = (float)GetRandFloat(this);
          fVar19 = (float)FUN_053b9a64(-((float)*(int *)(param_4 + 0xcbc) * 0.5 * fVar19) -
                                       (float)iVar8);
          pfVar10[10] = fVar19;
        }
      }
      else {
        fVar19 = (float)TPoint<float>::Magnitude(this_00);
        if (fVar19 == 0.0) {
          PVar3 = param_4[0xc82];
          local_54 = 0.0;
          pfVar10[10] = 0.0;
          if (((PVar3 != (PIParticleDef)0x0) && (param_4[0xcb0] != (PIParticleDef)0x0)) &&
             (param_4[0xc84] == (PIParticleDef)0x0)) {
            PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x6c8),
                                *(float *)(this + 0x14e8),0.0);
            fVar19 = (float)FUN_053b9a64();
            fVar19 = fVar19 + pfVar10[10];
          }
        }
        else {
          fVar19 = -local_54;
        }
        fVar25 = (float)FUN_053b9a64((float)*(int *)(param_4 + 0xcb4));
        pfVar10[10] = fVar25 + fVar19;
      }
      pfVar10[0x17] = -NAN;
      PVar3 = param_4[0xca0];
      pfVar10[0x18] = 0.0;
joined_r0x053d06dc:
      if (PVar3 == (PIParticleDef)0x0) {
        if (param_4[0xca1] != (PIParticleDef)0x0) {
          uVar17 = *(undefined8 *)(param_4 + 0xcd0);
          uVar13 = *(undefined8 *)(param_4 + 0xcc8);
          iVar8 = 0;
          if (*(int *)(param_4 + 0xca8) != 0) {
            iVar8 = (int)pfVar10[0x20] / *(int *)(param_4 + 0xca8);
          }
          pfVar10[0x17] = -1.7014118e+38;
          iVar7 = FUN_053b9b6c(uVar13,uVar17);
          iVar9 = 0;
          if (iVar7 != 0) {
            iVar9 = iVar8 / iVar7;
          }
          iVar8 = iVar8 - iVar9 * iVar7;
          goto LAB_053d03a0;
        }
      }
      else {
        PVar3 = param_4[0xcad];
        pfVar10[0x17] = -1.7014118e+38;
        if (PVar3 == (PIParticleDef)0x0) {
          uVar6 = PIInterpolator::GetValueAt((PIInterpolator *)(param_4 + 0xcc8),pfVar10[0x2f]);
          pfVar10[0x18] = (float)((uint)pfVar10[0x18] | uVar6 & 0xffffff);
        }
        else {
          uVar11 = FUN_053b9b6c(*(undefined8 *)(param_4 + 0xcc8),*(undefined8 *)(param_4 + 0xcd0));
          local_38 = (float)((int)uVar11 + -1);
          local_40 = (float)(int)((float)uVar11 * pfVar10[0x2f]);
          piVar12 = eastl::min_alt<int>((int *)&local_40,(int *)&local_38);
          iVar8 = *piVar12;
LAB_053d03a0:
          uVar6 = PIInterpolator::GetKeyframeNum((PIInterpolator *)(param_4 + 0xcc8),iVar8);
          pfVar10[0x18] = (float)((uint)pfVar10[0x18] | uVar6 & 0xffffff);
        }
      }
    }
    else {
      pfVar10[0x18] = 0.0;
      pfVar10[0x17] = -NAN;
      if (param_4 != (PIParticleDef *)0x0) {
        PVar3 = param_4[0xca0];
        goto joined_r0x053d06dc;
      }
    }
    *(undefined8 *)(pfVar10 + 0x26) = local_50;
    SexyTransform2D::SexyTransform2D(aSStack_30);
    fVar19 = (float)PIValue::GetValueAt((PIValue *)(*(long *)(param_3 + 0x38) + 0x6c8),
                                        *(float *)(this + 0x14e8),0.0);
    SexyTransform2D::RotateDeg(aSStack_30,fVar19);
    TransformFPoint((SexyMatrix3 *)aSStack_30,(FPoint *)&local_50);
    TPoint<float>::operator+=((TPoint<float> *)(pfVar10 + 0x28),(TPoint *)&local_38);
    if (param_2[0x1281] == (PIEmitter)0x0) {
      puVar14 = *(undefined8 **)(param_6 + 8);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = pfVar10;
      }
      lVar18 = *(long *)param_6;
      *(undefined8 **)(pfVar10 + 0x22) = puVar14;
      if (lVar18 == 0) {
        *(float **)param_6 = pfVar10;
        *(float **)(param_6 + 8) = pfVar10;
      }
      else {
        *(float **)(param_6 + 8) = pfVar10;
      }
    }
    else {
      lVar18 = *(long *)param_6;
      if (lVar18 != 0) {
        *(float **)(lVar18 + 0x88) = pfVar10;
      }
      lVar16 = *(long *)(param_6 + 8);
      *(long *)pfVar10 = lVar18;
      if (lVar16 == 0) {
        *(float **)(param_6 + 8) = pfVar10;
      }
      *(float **)param_6 = pfVar10;
    }
    fVar19 = *(float *)param_5;
    *(int *)(param_6 + 0x10) = *(int *)(param_6 + 0x10) + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::ReadStringS() */

void Sexy::PIEffect::ReadStringS(void)

{
  short extraout_w0;
  short extraout_w0_00;
  long in_x0;
  undefined8 uVar1;
  uint uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_053bcc2c(in_x0,in_x0 + 0x1420,2);
  nop();
  uVar2 = (uint)extraout_w0;
  if (uVar2 == 0xffffffff) {
    FUN_053bcc2c();
    nop();
    FUN_053bcc2c();
    nop();
    uVar2 = (uint)extraout_w0_00;
  }
  else if ((uVar2 >> 0xf & 1) != 0) {
    uVar1 = FUN_053b9c5c(*(undefined8 *)(in_x0 + 0x1440),uVar2 & 0x7fff);
    FUN_05475d88(asStack_10,uVar1);
    goto LAB_053d0e90;
  }
  Set8BytesTo0(asStack_10);
  FUN_05475c48(asStack_10,(long)(int)uVar2);
  if (0 < (int)uVar2) {
    FUN_05474ee8(asStack_10,0);
    FUN_053bcc2c();
  }
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(in_x0 + 0x1440),asStack_10);
LAB_053d0e90:
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(in_x0 + 0x1440),asStack_10);
  FUN_05474148();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::ExpectCmd(std::string const&) */

void __thiscall Sexy::PIEffect::ExpectCmd(PIEffect *this,string *param_1)

{
  bool bVar1;
  PIEffect PVar2;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  PVar2 = this[0x3c];
  local_8 = ___stack_chk_guard;
  if (PVar2 == (PIEffect)0x0) {
    PVar2 = (PIEffect)0x1;
    ReadStringS();
    bVar1 = std::operator!=(asStack_20,param_1);
    if (bVar1) {
      FUN_031f5e7c(asStack_18,"Expected \'",param_1);
      std::operator+(asStack_18,"\'");
      PVar2 = (PIEffect)Fail(this,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
    }
    std::string::~string(asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(PVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::ReadValue2D(Sexy::PIValue2D*) */

void __thiscall Sexy::PIEffect::ReadValue2D(PIEffect *this,PIValue2D *param_1)

{
  PIEffect *pPVar1;
  PIEffect PVar2;
  int iVar3;
  short extraout_w0;
  int extraout_w0_00;
  uint extraout_w0_01;
  char *pcVar4;
  FPoint *pFVar5;
  FPoint *pFVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float local_84;
  PieceConfig local_80 [8];
  PieceConfig local_78 [8];
  PieceConfig local_70 [8];
  TPoint aTStack_68 [8];
  float local_60 [4];
  undefined8 local_50 [3];
  undefined8 local_38 [3];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = this + 0x1420;
  FUN_053bcc2c(this,pPVar1,2);
  nop();
  iVar3 = (int)extraout_w0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  if ((iVar3 < 2) || (this[0x3c] == (PIEffect)0x0)) {
    uVar9 = 0;
    if (iVar3 < 1) goto LAB_053d1334;
  }
  else {
    pcVar4 = (char *)FUN_053bcc2c(this,pPVar1,1);
    uVar9 = (uint)(*pcVar4 != '\0');
  }
  iVar8 = 0;
  do {
    std::string::string((string *)local_60,"CKey");
    ExpectCmd(this,(string *)local_60);
    std::string::~string((string *)local_60);
    nop();
    FUN_053bcc2c(this,pPVar1,4);
    nop();
    local_84 = (float)extraout_w0_00;
    std::vector<float,std::allocator<float>>::push_back
              ((vector<float,std::allocator<float>> *)local_50,&local_84);
    PieceConfig::PieceConfig(local_80);
    FUN_053bcc2c(this,pPVar1,4);
    nop();
    FUN_053bcc2c(this,pPVar1,4);
    nop();
    std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::push_back
              ((vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> *)local_38,(FPoint *)local_80);
    PVar2 = this[0x3c];
    if ((byte)PVar2 <= uVar9) {
      PieceConfig::PieceConfig(local_78);
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      if (iVar8 != 0) {
        UI::UDim::operator+((UDim *)local_80,(UDim *)local_78);
        FPoint::FPoint((FPoint *)local_60,aTStack_68);
        std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::push_back
                  ((vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> *)local_20,(FPoint *)local_60)
        ;
      }
      PieceConfig::PieceConfig(local_70);
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      UI::UDim::operator+((UDim *)local_80,(UDim *)local_70);
      FPoint::FPoint((FPoint *)local_60,aTStack_68);
      std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::push_back
                ((vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> *)local_20,(FPoint *)local_60);
      PVar2 = this[0x3c];
    }
    if (PVar2 == (PIEffect)0x0) {
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      uVar9 = uVar9 | extraout_w0_01 & 1 ^ 1;
    }
    iVar8 = iVar8 + 1;
    PIValuePoint2D::PIValuePoint2D((PIValuePoint2D *)local_60);
    local_60[0] = local_84;
    std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>::push_back
              ((vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>> *)param_1,
               (PIValuePoint2D *)local_60);
  } while (iVar8 < iVar3);
  if ((uVar9 != 0) && (1 < iVar3)) {
    pFVar5 = (FPoint *)FUN_053b9c64(local_38[0],0);
    pFVar6 = (FPoint *)FUN_053b9c64(local_20[0],0);
    pfVar7 = (float *)FUN_053b9b58(local_50[0],0);
    Bezier::Init((Bezier *)(param_1 + 0x18),pFVar5,pFVar6,pfVar7,iVar3);
  }
LAB_053d1334:
  std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::~vector
            ((vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> *)local_20);
  std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::~vector
            ((vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> *)local_38);
  std::vector<float,std::allocator<float>>::~vector((vector<float,std::allocator<float>> *)local_50)
  ;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::ReadEPoint(Sexy::PIValue2D*) */

void __thiscall Sexy::PIEffect::ReadEPoint(PIEffect *this,PIValue2D *param_1)

{
  PIEffect *pPVar1;
  short extraout_w0;
  int extraout_w0_00;
  int iVar2;
  float local_18 [4];
  long local_8;
  
  pPVar1 = this + 0x1420;
  local_8 = ___stack_chk_guard;
  FUN_053bcc2c(this,pPVar1,2);
  nop();
  if (0 < extraout_w0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      std::string::string((string *)local_18,"CPointKey");
      ExpectCmd(this,(string *)local_18);
      std::string::~string((string *)local_18);
      nop();
      PIValuePoint2D::PIValuePoint2D((PIValuePoint2D *)local_18);
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      local_18[0] = (float)extraout_w0_00;
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>::push_back
                ((vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>> *)param_1,
                 (PIValuePoint2D *)local_18);
    } while (extraout_w0 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::ReadValue(Sexy::PIValue*) */

void __thiscall Sexy::PIEffect::ReadValue(PIEffect *this,PIValue *param_1)

{
  PIEffect *pPVar1;
  uint uVar2;
  PIEffect PVar3;
  bool bVar4;
  short extraout_w0;
  int extraout_w0_00;
  uint extraout_w0_01;
  float *pfVar5;
  FPoint *pFVar6;
  FPoint *pFVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  float extraout_s0;
  float extraout_s0_00;
  float fVar15;
  float local_84;
  string asStack_80 [8];
  float local_78;
  float local_74;
  PieceConfig local_70 [8];
  PieceConfig local_68 [8];
  TPoint aTStack_60 [8];
  FPoint aFStack_58 [8];
  undefined8 local_50 [3];
  undefined8 local_38 [3];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  if (this[0x3c] == (PIEffect)0x0) {
    uVar12 = 0;
LAB_053d1b40:
    FUN_053bcc2c(this,this + 0x1420,2);
    nop();
    uVar13 = (uint)extraout_w0;
  }
  else {
    pbVar8 = (byte *)FUN_053bcc2c(this,this + 0x1420,1);
    uVar12 = (ulong)*pbVar8;
    uVar13 = *pbVar8 & 7;
    if ((byte)this[0x3c] <= (uVar13 == 7)) goto LAB_053d1b40;
  }
  if ((int)uVar13 < 2) {
    uVar14 = 0;
    std::vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>>::resize
              ((vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>> *)(param_1 + 0x18),
               (long)(int)uVar13);
    if (uVar13 == 1) goto LAB_053d1b78;
  }
  else {
    uVar14 = uVar12 >> 3 & 1;
    std::vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>>::resize
              ((vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>> *)(param_1 + 0x18),
               (long)(int)uVar13);
LAB_053d1b78:
    uVar2 = (uint)uVar12 & 0x60;
    lVar11 = 0;
    do {
      Set8BytesTo0(asStack_80);
      if (this[0x3c] == (PIEffect)0x0) {
        ReadStringS();
        FUN_05474278(asStack_80,(string *)aFStack_58);
        std::string::~string((string *)aFStack_58);
        bVar4 = std::operator==(asStack_80,"CDataKey");
        if ((bVar4) || (bVar4 = std::operator==(asStack_80,"CDataOverLifeKey"), bVar4))
        goto LAB_053d1bb4;
        std::string::string((string *)aFStack_58,"CDataKey or CDataOverLifeKey expected");
        Fail(this,(string *)aFStack_58);
        std::string::~string((string *)aFStack_58);
        nop();
      }
      else {
LAB_053d1bb4:
        if (((int)lVar11 == 0) && ((uVar12 >> 4 & 1) != 0)) {
          local_84 = 0.0;
          std::vector<float,std::allocator<float>>::push_back
                    ((vector<float,std::allocator<float>> *)local_50,&local_84);
LAB_053d1fd0:
          if ((uVar12 & 0x60) == 0) goto LAB_053d1c04;
          if (uVar2 == 0x20) {
            fVar15 = 0.0;
          }
          else if (uVar2 == 0x40) {
            fVar15 = 1.0;
          }
          else {
            fVar15 = 2.0;
          }
        }
        else {
          bVar4 = std::operator==(asStack_80,"CDataKey");
          if (bVar4) {
            FUN_053bcc2c(this,this + 0x1420,4);
            nop();
            local_84 = (float)extraout_w0_00;
          }
          else {
            FUN_053bcc2c(this,this + 0x1420,4);
            nop();
            local_84 = extraout_s0_00;
          }
          std::vector<float,std::allocator<float>>::push_back
                    ((vector<float,std::allocator<float>> *)local_50,&local_84);
          if (lVar11 == 0) goto LAB_053d1fd0;
LAB_053d1c04:
          FUN_053bcc2c(this,this + 0x1420,4);
          nop();
          fVar15 = extraout_s0;
        }
        PieceConfig::PieceConfig((PieceConfig *)&local_78);
        local_78 = local_84;
        local_74 = fVar15;
        std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::push_back
                  ((vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> *)local_38,(FPoint *)&local_78
                  );
        PVar3 = this[0x3c];
        if ((uint)(byte)PVar3 <= (uint)uVar14) {
          pPVar1 = this + 0x1420;
          PieceConfig::PieceConfig(local_70);
          FUN_053bcc2c(this,pPVar1,4);
          nop();
          FUN_053bcc2c(this,pPVar1,4);
          nop();
          if (lVar11 != 0) {
            UI::UDim::operator+((UDim *)&local_78,(UDim *)local_70);
            FPoint::FPoint(aFStack_58,aTStack_60);
            std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::push_back
                      ((vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> *)local_20,aFStack_58);
          }
          PieceConfig::PieceConfig(local_68);
          FUN_053bcc2c(this,pPVar1,4);
          nop();
          FUN_053bcc2c(this,pPVar1,4);
          nop();
          UI::UDim::operator+((UDim *)&local_78,(UDim *)local_68);
          FPoint::FPoint(aFStack_58,aTStack_60);
          std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::push_back
                    ((vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> *)local_20,aFStack_58);
          PVar3 = this[0x3c];
        }
        if (PVar3 == (PIEffect)0x0) {
          FUN_053bcc2c(this,this + 0x1420,4);
          nop();
          FUN_053bcc2c(this,this + 0x1420,4);
          nop();
          uVar14 = (ulong)((uint)uVar14 | extraout_w0_01 & 1 ^ 1);
        }
        pfVar5 = (float *)FUN_053b9b44(*(undefined8 *)(param_1 + 0x18),lVar11);
        pfVar5[1] = local_74;
        *pfVar5 = local_84;
      }
      lVar11 = lVar11 + 1;
      std::string::~string(asStack_80);
    } while ((int)lVar11 < (int)uVar13);
    if ((int)uVar14 != 0) {
      if (1 < (int)uVar13) {
        pFVar6 = (FPoint *)FUN_053b9c64(local_38[0],0);
        pFVar7 = (FPoint *)FUN_053b9c64(local_20[0],0);
        pfVar5 = (float *)FUN_053b9b58(local_50[0],0);
        Bezier::Init((Bezier *)(param_1 + 0x30),pFVar6,pFVar7,pfVar5,uVar13);
      }
      goto LAB_053d1dd0;
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  lVar11 = FUN_053b9b4c(uVar10,*(undefined8 *)(param_1 + 0x20));
  if (lVar11 == 2) {
    lVar11 = FUN_053b9b44(uVar10,0);
    lVar9 = FUN_053b9b44(uVar10,1);
    if (*(float *)(lVar11 + 4) == *(float *)(lVar9 + 4)) {
      FUN_053b9f30(param_1 + 0x20);
    }
  }
LAB_053d1dd0:
  std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::~vector
            ((vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> *)local_20);
  std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::~vector
            ((vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> *)local_38);
  std::vector<float,std::allocator<float>>::~vector((vector<float,std::allocator<float>> *)local_50)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::ReadEmitterType(Sexy::PIEmitter*) */

void __thiscall Sexy::PIEffect::ReadEmitterType(PIEffect *this,PIEmitter *param_1)

{
  PIEffect *pPVar1;
  PIValue *pPVar2;
  PIEmitter *pPVar3;
  PIEffect PVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  PIEmitter PVar9;
  char cVar10;
  short extraout_w0;
  short extraout_w0_00;
  short extraout_w0_01;
  int extraout_w0_02;
  int extraout_w0_03;
  int extraout_w0_04;
  int iVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  int *piVar18;
  long *plVar19;
  RtMixedPtr *this_00;
  Image *pIVar20;
  PIEmitter *pPVar21;
  PIValue *pPVar22;
  long lVar23;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *this_01;
  ulong *puVar24;
  int iVar25;
  float extraout_s0;
  float extraout_s0_00;
  float fVar26;
  float fVar27;
  int local_1674;
  string asStack_1658 [8];
  undefined8 local_1650;
  undefined8 local_1648;
  undefined1 local_1640 [16];
  MD5Context aMStack_1628 [88];
  uint local_15d0 [28];
  PILifeValueTable local_1560 [4];
  float local_155c [5];
  ulong local_1548 [129];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_1140 [1064];
  long local_d18 [2];
  undefined1 auStack_d08 [8];
  int local_d00;
  undefined8 local_cf8;
  undefined8 local_cf0;
  PIValue aPStack_ce0 [1792];
  PIValue aPStack_5e0 [112];
  PIValue aPStack_570 [112];
  PIValue aPStack_500 [112];
  PIValue aPStack_490 [112];
  PIValue aPStack_420 [336];
  PIValue aPStack_2d0 [112];
  PIValue aPStack_260 [112];
  PIValue aPStack_1f0 [112];
  PIValue aPStack_180 [112];
  PIValue aPStack_110 [112];
  float local_a0;
  float local_9c;
  undefined1 local_98;
  bool local_97;
  char local_96;
  bool local_95;
  char local_94;
  undefined1 local_8c;
  char local_84;
  char local_83;
  int local_80;
  int local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  char local_54;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> avStack_50 [24];
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> avStack_38 [24];
  uint local_20;
  uchar auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = this + 0x1420;
  FUN_053bcc2c(this,pPVar1,4);
  nop();
  ReadString();
  FUN_05474278(param_1,(string *)local_15d0);
  std::string::~string((string *)local_15d0);
  if (this[0x3c] == (PIEffect)0x0) {
    piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
    bVar8 = *piVar18 == 0;
  }
  else {
    pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
    bVar8 = *pcVar12 == '\0';
  }
  param_1[0x1280] = (PIEmitter)!bVar8;
  FUN_053bcc2c(this,pPVar1,4);
  nop();
  if (this[0x3c] == (PIEffect)0x0) {
    piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
    PVar9 = (PIEmitter)(*piVar18 != 0);
  }
  else {
    pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
    PVar9 = (PIEmitter)(*pcVar12 != '\0');
  }
  param_1[0x1281] = PVar9;
  FUN_053bcc2c(this,pPVar1,2);
  nop();
  if (0 < extraout_w0) {
    local_1674 = 0;
    do {
      DAT_06c450b0 = DAT_06c450b0 + 1;
      PIParticleDef::PIParticleDef((PIParticleDef *)local_d18);
      std::string::string((string *)local_15d0,"CEmParticleType");
      ExpectCmd(this,(string *)local_15d0);
      std::string::~string((string *)local_15d0);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_97 = *piVar18 != 0;
        local_20 = (uint)local_97;
        if (this[0x3c] == (PIEffect)0x0) goto LAB_053d3f30;
LAB_053d30a0:
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_96 = *pcVar12 != '\0';
        PVar4 = this[0x3c];
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_97 = *pcVar12 != '\0';
        local_20 = (uint)local_97;
        if (this[0x3c] != (PIEffect)0x0) goto LAB_053d30a0;
LAB_053d3f30:
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_96 = *piVar18 != 0;
        PVar4 = this[0x3c];
      }
      if (PVar4 == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_95 = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_95 = *pcVar12 != '\0';
      }
      if ((local_95 != false) && (mGlobalAllowPreserveColor == '\0')) {
        local_95 = false;
      }
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        bVar8 = *piVar18 == 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        bVar8 = *pcVar12 == '\0';
      }
      local_94 = !bVar8;
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_84 = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_84 = *pcVar12 != '\0';
      }
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_83 = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_83 = *pcVar12 != '\0';
      }
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        bVar8 = *piVar18 == 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        bVar8 = *pcVar12 == '\0';
      }
      local_8c = !bVar8;
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      local_80 = extraout_w0_02;
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      local_7c = extraout_w0_03;
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_6c = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_6c = *pcVar12 != '\0';
      }
      ReadString();
      FUN_05474278(auStack_d08,(string *)local_15d0);
      std::string::~string((string *)local_15d0);
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_69 = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_69 = *pcVar12 != '\0';
      }
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_67 = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_67 = *pcVar12 != '\0';
      }
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        bVar8 = *piVar18 == 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        bVar8 = *pcVar12 == '\0';
      }
      local_68 = !bVar8;
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        bVar8 = *piVar18 == 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        bVar8 = *pcVar12 == '\0';
      }
      local_78 = !bVar8;
      iVar11 = 0;
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      local_d00 = extraout_w0_04;
      FUN_053bcc2c(this,pPVar1,2);
      nop();
      if (0 < extraout_w0_00) {
        do {
          iVar11 = iVar11 + 1;
          std::string::string((string *)local_15d0,"CColorPoint");
          ExpectCmd(this,(string *)local_15d0);
          std::string::~string((string *)local_15d0);
          nop();
          pbVar13 = (byte *)FUN_053bcc2c(this,pPVar1,1);
          bVar5 = *pbVar13;
          pbVar13 = (byte *)FUN_053bcc2c(this,pPVar1,1);
          bVar6 = *pbVar13;
          pbVar13 = (byte *)FUN_053bcc2c(this,pPVar1,1);
          bVar7 = *pbVar13;
          FUN_053bcc2c(this,pPVar1,4);
          nop();
          local_15d0[0] = bVar7 | 0xff000000 | (uint)bVar5 << 0x10 | (uint)bVar6 << 8;
          std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
          push_back(avStack_50,(PIInterpolatorPoint *)local_15d0);
        } while (extraout_w0_00 != iVar11);
      }
      iVar11 = 0;
      FUN_053bcc2c(this,pPVar1,2);
      nop();
      if (0 < extraout_w0_01) {
        do {
          iVar11 = iVar11 + 1;
          std::string::string((string *)local_15d0,"CAlphaPoint");
          ExpectCmd(this,(string *)local_15d0);
          std::string::~string((string *)local_15d0);
          nop();
          pbVar13 = (byte *)FUN_053bcc2c(this,pPVar1,1);
          bVar5 = *pbVar13;
          FUN_053bcc2c(this,pPVar1,4);
          nop();
          local_15d0[0] = (uint)bVar5;
          std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
          push_back(avStack_38,(PIInterpolatorPoint *)local_15d0);
        } while (extraout_w0_01 != iVar11);
      }
      pPVar22 = aPStack_ce0;
      do {
        pPVar2 = pPVar22 + 0x70;
        ReadValue(this,pPVar22);
        pPVar22 = pPVar2;
      } while (pPVar2 != aPStack_2d0);
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      local_a0 = extraout_s0;
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      local_9c = extraout_s0_00;
      if (this[0x3c] == (PIEffect)0x0) {
        plVar19 = (long *)FUN_053b9b0c(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                                       (long)local_d00);
        this_00 = (RtMixedPtr *)FUN_053b9c6c(*(undefined8 *)(*plVar19 + 0x20),0);
        pIVar20 = RtMixedPtr::operator_cast_to_Image_(this_00);
        local_a0 = local_a0 / (float)*(int *)(pIVar20 + 0x38);
        local_9c = local_9c / (float)*(int *)(pIVar20 + 0x3c);
      }
      lVar23 = 0;
      puVar14 = (undefined8 *)
                FUN_053b9b0c(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),(long)local_d00);
      std::vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>>::operator=
                ((vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>> *)&local_cf8,
                 (vector *)*puVar14);
      uVar17 = local_cf8;
      iVar11 = FUN_053b9c74(local_cf8,local_cf0);
      fVar26 = -local_a0;
      fVar27 = -local_9c;
      if (local_83 == '\0') {
        if (local_84 == '\0') {
          for (; (int)lVar23 < iVar11; lVar23 = lVar23 + 1) {
            lVar15 = FUN_053b9c94(uVar17,lVar23);
            *(float *)(lVar15 + 0x18) = fVar26 * *(float *)(lVar15 + 0x30);
            *(float *)(lVar15 + 0x1c) = fVar27 * *(float *)(lVar15 + 0x30);
          }
        }
        else {
          for (; (int)lVar23 < iVar11; lVar23 = lVar23 + 1) {
            lVar15 = FUN_053b9c94(uVar17,lVar23);
            *(float *)(lVar15 + 0x18) = fVar26 * *(float *)(lVar15 + 0x30);
            *(float *)(lVar15 + 0x10) = -*(float *)(lVar15 + 0x10);
            *(float *)(lVar15 + 0x1c) = fVar27 * *(float *)(lVar15 + 0x30);
          }
        }
      }
      else if (local_84 == '\0') {
        for (; (int)lVar23 < iVar11; lVar23 = lVar23 + 1) {
          lVar15 = FUN_053b9c94(uVar17,lVar23);
          *(float *)(lVar15 + 0x18) = fVar26 * *(float *)(lVar15 + 0x30);
          *(float *)(lVar15 + 0x14) = -*(float *)(lVar15 + 0x14);
          *(float *)(lVar15 + 0x1c) = fVar27 * *(float *)(lVar15 + 0x30);
        }
      }
      else {
        for (; (int)lVar23 < iVar11; lVar23 = lVar23 + 1) {
          lVar15 = FUN_053b9c94(uVar17,lVar23);
          *(float *)(lVar15 + 0x18) = fVar26 * *(float *)(lVar15 + 0x30);
          *(float *)(lVar15 + 0x10) = -*(float *)(lVar15 + 0x10);
          *(float *)(lVar15 + 0x1c) = fVar27 * *(float *)(lVar15 + 0x30);
          *(float *)(lVar15 + 0x14) = -*(float *)(lVar15 + 0x14);
        }
      }
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_98 = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_98 = *pcVar12 != '\0';
      }
      ReadValue(this,aPStack_1f0);
      ReadValue(this,aPStack_180);
      ReadValue(this,aPStack_110);
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_76 = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_76 = *pcVar12 != '\0';
      }
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_75 = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_75 = *pcVar12 != '\0';
      }
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_6a = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_6a = *pcVar12 != '\0';
      }
      ReadValue(this,aPStack_2d0);
      ReadValue(this,aPStack_260);
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      PIValue::PIValue((PIValue *)local_15d0);
      ReadValue(this,(PIValue *)local_15d0);
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_6b = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_6b = *pcVar12 != '\0';
      }
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_73 = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_73 = *pcVar12 != '\0';
      }
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        bVar8 = *piVar18 == 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        bVar8 = *pcVar12 == '\0';
      }
      local_77 = !bVar8;
      FUN_053bcc2c(this,pPVar1,4);
      nop();
      if (this[0x3c] == (PIEffect)0x0) {
        piVar18 = (int *)FUN_053bcc2c(this,pPVar1,4);
        local_74 = *piVar18 != 0;
      }
      else {
        pcVar12 = (char *)FUN_053bcc2c(this,pPVar1,1);
        local_74 = *pcVar12 != '\0';
      }
      this_01 = (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)0x0;
      pPVar22 = aPStack_5e0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_1640);
      iVar11 = 0;
      while( true ) {
        iVar25 = 0;
        puVar24 = local_1548;
        do {
          fVar26 = (float)iVar25 * 0.03125;
          if (iVar11 == 6) {
            fVar26 = fVar26 * (float)(local_80 + 1);
          }
          else if (iVar11 == 7) {
            fVar26 = fVar26 * (float)(local_7c + 1);
          }
          if (1.0001 < fVar26) {
            fVar26 = fVar26 - (float)(int)fVar26;
          }
          if (pPVar22 == (PIValue *)0x0) {
            uVar16 = PIInterpolator::GetValueAt((PIInterpolator *)this_01,fVar26);
            fVar26 = 0.0;
          }
          else {
            fVar26 = (float)PIValue::GetValueAt(pPVar22,fVar26,0.0);
            uVar16 = 0;
          }
          switch(iVar11) {
          case 1:
            *(float *)((long)puVar24 + -0x14) = fVar26;
            break;
          case 2:
            *(float *)(puVar24 + -2) = fVar26;
            break;
          case 3:
            *(float *)((long)puVar24 + -0xc) = fVar26 - 1.0;
            break;
          case 4:
            *(float *)(puVar24 + -1) = fVar26 - 1.0;
            break;
          case 5:
            *(float *)((long)puVar24 + -4) = fVar26;
            break;
          case 6:
            *puVar24 = uVar16 & 0xffffff;
            break;
          case 7:
            *puVar24 = *puVar24 | (long)((int)uVar16 << 0x18);
            break;
          default:
            *(float *)(puVar24 + -3) = fVar26;
          }
          iVar25 = iVar25 + 1;
          puVar24 = puVar24 + 4;
        } while (iVar25 != 0x21);
        lVar23 = FUN_053b9b4c(local_1640._0_8_,local_1640._8_8_);
        if (lVar23 == 1) {
          local_1648 = CONCAT44(local_1648._4_4_,0x3f800000);
          lVar23 = std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                   ::front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                            *)local_1640);
          local_1648 = CONCAT44(*(undefined4 *)(lVar23 + 4),(undefined4)local_1648);
          std::vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>>::push_back
                    ((vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>> *)local_1640,
                     (PIValuePoint *)&local_1648);
          std::vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>>::~vector
                    ((vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>> *)local_1640);
        }
        else {
          std::vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>>::~vector
                    ((vector<Sexy::PIValuePoint,std::allocator<Sexy::PIValuePoint>> *)local_1640);
        }
        if (iVar11 == 7) break;
        iVar25 = iVar11 + 1;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_1640);
        switch(iVar11) {
        case 1:
          this_01 = (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                    0x0;
          pPVar22 = aPStack_570;
          iVar11 = iVar25;
          break;
        case 2:
          this_01 = (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                    0x0;
          pPVar22 = aPStack_500;
          iVar11 = iVar25;
          break;
        case 3:
          this_01 = (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                    0x0;
          pPVar22 = aPStack_490;
          iVar11 = iVar25;
          break;
        case 4:
          this_01 = (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                    0x0;
          pPVar22 = aPStack_420;
          iVar11 = iVar25;
          break;
        case 5:
          this_01 = avStack_50;
          pPVar22 = (PIValue *)0x0;
          iVar11 = iVar25;
          break;
        case 6:
          this_01 = avStack_38;
          pPVar22 = (PIValue *)0x0;
          iVar11 = iVar25;
          break;
        default:
          this_01 = (vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                    0x0;
          pPVar22 = aPStack_110;
          iVar11 = iVar25;
        }
      }
      MD5Init(aMStack_1628);
      MD5Update(aMStack_1628,(uchar *)local_1560,0x420);
      MD5Final(auStack_18,aMStack_1628);
      std::string::string<unsigned_char*>
                (asStack_1658,auStack_18,(uchar *)&local_8,(allocator *)local_1640);
      nop();
      local_1650 = std::
                   map<std::string,Sexy::PILifeValueTable,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::PILifeValueTable>>>
                   ::find((map<std::string,Sexy::PILifeValueTable,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::PILifeValueTable>>>
                           *)PIParticleDef::mPILifeValueTableMap,asStack_1658);
      uVar17 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)PIParticleDef::mPILifeValueTableMap);
      local_1640._0_8_ = uVar17;
      cVar10 = std::__exception_ptr::operator==
                         ((exception_ptr *)&local_1650,(exception_ptr *)local_1640);
      if (cVar10 == '\0') {
        local_d18[0] = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                 ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                  &local_1650);
      }
      else {
        std::pair<std::string_const,Sexy::PILifeValueTable>::
        pair<std::string&,Sexy::PILifeValueTable&,void>(apStack_1140,asStack_1658,local_1560);
        local_1640 = std::
                     map<std::string,Sexy::PILifeValueTable,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::PILifeValueTable>>>
                     ::insert<std::pair<std::string_const,Sexy::PILifeValueTable>,void>
                               ((map<std::string,Sexy::PILifeValueTable,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::PILifeValueTable>>>
                                 *)PIParticleDef::mPILifeValueTableMap,(pair *)apStack_1140);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_1140);
        local_d18[0] = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                 ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_1640
                                 );
      }
      local_d18[0] = local_d18[0] + 8;
      local_54 = local_94;
      if (local_94 == '\0') {
        local_54 = local_96;
      }
      if (param_1[0x1281] == (PIEmitter)0x0) {
        std::vector<Sexy::PIParticleDef,std::allocator<Sexy::PIParticleDef>>::push_back
                  ((vector<Sexy::PIParticleDef,std::allocator<Sexy::PIParticleDef>> *)
                   (param_1 + 0x1268),(PIParticleDef *)local_d18);
      }
      else {
        local_1648 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(param_1 + 0x1268));
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_1640,(__normal_iterator *)&local_1648);
        std::vector<Sexy::PIParticleDef,std::allocator<Sexy::PIParticleDef>>::insert
                  ((vector<Sexy::PIParticleDef,std::allocator<Sexy::PIParticleDef>> *)
                   (param_1 + 0x1268),local_1640._0_8_,(PIParticleDef *)local_d18);
      }
      local_1674 = local_1674 + 1;
      std::string::~string(asStack_1658);
      PIValue::~PIValue((PIValue *)local_15d0);
      PIParticleDef::~PIParticleDef((PIParticleDef *)local_d18);
    } while (extraout_w0 != local_1674);
  }
  FUN_053bcc2c(this,pPVar1,4);
  nop();
  pPVar21 = param_1 + 8;
  do {
    pPVar3 = pPVar21 + 0x70;
    ReadValue(this,(PIValue *)pPVar21);
    pPVar21 = pPVar3;
  } while (pPVar3 != param_1 + 0x1268);
  lVar23 = FUN_053b9b4c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  param_1[0x1282] = (PIEmitter)(lVar23 != 0);
  FUN_053bcc2c(this,pPVar1,4);
  nop();
  FUN_053bcc2c(this,pPVar1,4);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::SaveState(Sexy::Buffer&, bool) */

void __thiscall Sexy::PIEffect::SaveState(PIEffect *this,Buffer *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  PILayer *pPVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  PIParticleDefInstance *pPVar14;
  undefined4 *puVar15;
  map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>
  *pmVar16;
  long lVar17;
  PIParticleInstance *pPVar18;
  PIParticleInstance *pPVar19;
  long lVar20;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  int local_8c;
  PIEmitter *local_88;
  PIEmitter *local_80;
  undefined8 local_78 [2];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_05474184(this + 0x14d8);
  if (lVar6 == 0) {
    uVar1 = *(int *)(param_1 + 0x28) + 7U & 0xfffffff8;
    *(uint *)(param_1 + 0x28) = uVar1;
    uVar2 = uVar1 + 7;
    if (-1 < (int)uVar1) {
      uVar2 = uVar1;
    }
    Buffer::WriteInt32(param_1,0);
    Buffer::WriteInt16(param_1,1);
    if (param_2) {
      Buffer::WriteFloat(param_1,*(float *)(this + 0x14e8));
    }
    else {
      Buffer::WriteString(param_1,(string *)(this + 0x48));
      Buffer::WriteInt32(param_1,*(int *)(this + 0x38));
      Buffer::WriteFloat(param_1,*(float *)(this + 0x14e8));
      MTRand::Serialize();
      Buffer::WriteString(param_1,(string *)local_38);
      std::string::~string((string *)local_38);
      Buffer::WriteInt8(param_1,this[0x1557]);
      local_a0 = *(undefined4 *)(this + 0x15b8);
      local_c0 = *(undefined8 *)(this + 0x1598);
      uStack_b8 = *(undefined8 *)(this + 0x15a0);
      local_b0 = *(undefined8 *)(this + 0x15a8);
      uStack_a8 = *(undefined8 *)(this + 0x15b0);
      Buffer::WriteTransform2D(param_1,&local_c0);
      local_c0 = *(undefined8 *)(this + 0x1574);
      uStack_b8 = *(undefined8 *)(this + 0x157c);
      local_a0 = *(undefined4 *)(this + 0x1594);
      local_b0 = *(undefined8 *)(this + 0x1584);
      uStack_a8 = *(undefined8 *)(this + 0x158c);
      Buffer::WriteTransform2D(param_1,&local_c0);
    }
    lVar6 = 0;
    if (0.0 < *(float *)(this + 0x14e8)) {
      uVar7 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
      iVar4 = FUN_053b9ba0(uVar7,*(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
      if (0 < iVar4) {
        do {
          lVar20 = 0;
          pPVar8 = (PILayer *)FUN_053b9bd4(*(undefined8 *)(this + 0x14c0),lVar6);
          lVar9 = FUN_053b9bc8(uVar7,lVar6);
          uVar7 = *(undefined8 *)(pPVar8 + 8);
          iVar4 = FUN_053b9b14(uVar7,*(undefined8 *)(pPVar8 + 0x10));
          if (0 < iVar4) {
            do {
              lVar10 = FUN_053b9b34(uVar7,lVar20);
              lVar11 = FUN_053b9c24(*(undefined8 *)(lVar9 + 8),lVar20);
              cVar3 = IsIdentityMatrix((SexyMatrix3 *)(lVar10 + 0xf0));
              if (cVar3 == '\0') {
                Buffer::WriteInt8(param_1,1);
                local_c0 = *(undefined8 *)(lVar10 + 0xf0);
                uStack_b8 = *(undefined8 *)(lVar10 + 0xf8);
                local_b0 = *(undefined8 *)(lVar10 + 0x100);
                uStack_a8 = *(undefined8 *)(lVar10 + 0x108);
                local_a0 = *(undefined4 *)(lVar10 + 0x110);
                Buffer::WriteTransform2D(param_1,&local_c0);
              }
              else {
                Buffer::WriteInt8(param_1,0);
              }
              lVar17 = 0;
              Buffer::WriteInt8(param_1,*(undefined1 *)(lVar10 + 0x40));
              Buffer::WriteInt8(param_1,*(undefined1 *)(lVar10 + 0x41));
              std::
              map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
              ::map(amStack_68);
              plVar12 = (long *)FUN_053b9af8(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                                             (long)*(int *)(lVar11 + 0xc));
              local_88 = (PIEmitter *)*plVar12;
              while( true ) {
                uVar7 = *(undefined8 *)(local_88 + 0x1268);
                iVar4 = FUN_053b9c30(uVar7,*(undefined8 *)(local_88 + 0x1270));
                if (iVar4 <= (int)lVar17) break;
                local_38[0] = FUN_053b9ca4(uVar7,lVar17);
                pPVar14 = (PIParticleDefInstance *)
                          FUN_053b9d98(*(undefined8 *)(lVar10 + 0x80),lVar17);
                pmVar16 = (map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>
                           *)std::
                             map<Sexy::PIEmitter*,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>>>>
                             ::operator[]((map<Sexy::PIEmitter*,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>>>>
                                           *)amStack_68,&local_88);
                piVar13 = (int *)std::
                                 map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>
                                 ::operator[](pmVar16,(PIParticleDef **)local_38);
                *piVar13 = (int)lVar17;
                lVar17 = lVar17 + 1;
                SaveParticleDefInstance(this,param_1,pPVar14);
              }
              iVar4 = 0;
              std::
              map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
              ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                     *)local_38);
              uVar7 = *(undefined8 *)(lVar11 + 0x28);
              local_8c = 0;
              iVar5 = FUN_053b9d08(uVar7,*(undefined8 *)(lVar11 + 0x30));
              if (0 < iVar5) {
                do {
                  lVar17 = 0;
                  piVar13 = (int *)FUN_053b9d00(uVar7,(long)iVar4);
                  plVar12 = (long *)FUN_053b9af8(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                                                 (long)*piVar13);
                  local_80 = (PIEmitter *)*plVar12;
                  while( true ) {
                    uVar7 = *(undefined8 *)(local_80 + 0x1268);
                    iVar4 = FUN_053b9c30(uVar7,*(undefined8 *)(local_80 + 0x1270));
                    if (iVar4 <= (int)lVar17) break;
                    local_78[0] = FUN_053b9ca4(uVar7,lVar17);
                    pmVar16 = (map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>
                               *)std::
                                 map<Sexy::PIEmitter*,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>>>>
                                 ::operator[]((map<Sexy::PIEmitter*,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>>>>
                                               *)amStack_68,&local_80);
                    piVar13 = (int *)std::
                                     map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>
                                     ::operator[](pmVar16,(PIParticleDef **)local_78);
                    *piVar13 = (int)lVar17;
                    lVar17 = lVar17 + 1;
                  }
                  pPVar14 = (PIParticleDefInstance *)
                            FUN_053b9d98(*(undefined8 *)(lVar10 + 0x48),(long)local_8c);
                  SaveParticleDefInstance(this,param_1,pPVar14);
                  std::pair<Sexy::PIEmitter*const,int>::pair<Sexy::PIEmitter*&,int&,void>
                            ((pair<Sexy::PIEmitter*const,int> *)local_78,&local_80,&local_8c);
                  std::
                  map<Sexy::PIEmitter*,int,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,int>>>
                  ::insert<std::pair<Sexy::PIEmitter*const,int>,void>
                            ((map<Sexy::PIEmitter*,int,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,int>>>
                              *)local_38,(pair *)local_78);
                  uVar7 = *(undefined8 *)(lVar11 + 0x28);
                  iVar4 = local_8c + 1;
                  local_8c = iVar4;
                  iVar5 = FUN_053b9d08(uVar7,*(undefined8 *)(lVar11 + 0x30));
                } while (iVar4 < iVar5);
              }
              pPVar19 = *(PIParticleInstance **)(lVar10 + 0x60);
              iVar4 = CountParticles(this,pPVar19);
              Buffer::WriteInt32(param_1,iVar4);
              for (; pPVar19 != (PIParticleInstance *)0x0; pPVar19 = *(PIParticleInstance **)pPVar19
                  ) {
                puVar15 = (undefined4 *)
                          std::
                          map<Sexy::PIEmitter*,int,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,int>>>
                          ::operator[]((map<Sexy::PIEmitter*,int,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,int>>>
                                        *)local_38,(PIEmitter **)(pPVar19 + 0x78));
                Buffer::WriteInt16(param_1,(short)*puVar15);
                SaveParticle(this,param_1,pPVar8,pPVar19);
                lVar17 = *(long *)(pPVar19 + 0x78);
                for (lVar11 = 0;
                    iVar4 = FUN_053b9c30(*(undefined8 *)(lVar17 + 0x1268),
                                         *(undefined8 *)(lVar17 + 0x1270)), (int)lVar11 < iVar4;
                    lVar11 = lVar11 + 1) {
                  pPVar14 = (PIParticleDefInstance *)
                            FUN_053b9d98(*(undefined8 *)(pPVar19 + 0x120),lVar11);
                  SaveParticleDefInstance(this,param_1,pPVar14);
                }
                pPVar18 = *(PIParticleInstance **)(pPVar19 + 0x138);
                iVar4 = CountParticles(this,pPVar18);
                Buffer::WriteInt32(param_1,iVar4);
                for (; pPVar18 != (PIParticleInstance *)0x0;
                    pPVar18 = *(PIParticleInstance **)pPVar18) {
                  pmVar16 = (map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>
                             *)std::
                               map<Sexy::PIEmitter*,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>>>>
                               ::operator[]((map<Sexy::PIEmitter*,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>>>>
                                             *)amStack_68,(PIEmitter **)(pPVar18 + 0x78));
                  puVar15 = (undefined4 *)
                            std::
                            map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>
                            ::operator[](pmVar16,(PIParticleDef **)(pPVar18 + 8));
                  Buffer::WriteInt16(param_1,(short)*puVar15);
                  SaveParticle(this,param_1,pPVar8,pPVar18);
                }
              }
              pPVar19 = *(PIParticleInstance **)(lVar10 + 0x98);
              iVar4 = CountParticles(this,pPVar19);
              Buffer::WriteInt32(param_1,iVar4);
              for (; pPVar19 != (PIParticleInstance *)0x0; pPVar19 = *(PIParticleInstance **)pPVar19
                  ) {
                pmVar16 = (map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>
                           *)std::
                             map<Sexy::PIEmitter*,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>>>>
                             ::operator[]((map<Sexy::PIEmitter*,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>>>>
                                           *)amStack_68,(PIEmitter **)(pPVar19 + 0x78));
                puVar15 = (undefined4 *)
                          std::
                          map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>
                          ::operator[](pmVar16,(PIParticleDef **)(pPVar19 + 8));
                Buffer::WriteInt16(param_1,(short)*puVar15);
                SaveParticle(this,param_1,pPVar8,pPVar19);
              }
              lVar20 = lVar20 + 1;
              std::
              map<Sexy::PIEmitter*,int,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,int>>>
              ::~map((map<Sexy::PIEmitter*,int,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,int>>>
                      *)local_38);
              std::
              map<Sexy::PIEmitter*,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>>>>
              ::~map((map<Sexy::PIEmitter*,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>,std::less<Sexy::PIEmitter*>,std::allocator<std::pair<Sexy::PIEmitter*const,std::map<Sexy::PIParticleDef*,int,std::less<Sexy::PIParticleDef*>,std::allocator<std::pair<Sexy::PIParticleDef*const,int>>>>>>
                      *)amStack_68);
              uVar7 = *(undefined8 *)(pPVar8 + 8);
              iVar4 = FUN_053b9b14(uVar7,*(undefined8 *)(pPVar8 + 0x10));
            } while ((int)lVar20 < iVar4);
          }
          lVar6 = lVar6 + 1;
          uVar7 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
          iVar4 = FUN_053b9ba0(uVar7,*(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
        } while ((int)lVar6 < iVar4);
      }
    }
    piVar13 = (int *)FUN_053b9d14(*(undefined8 *)(param_1 + 8),(long)((int)uVar2 >> 3));
    iVar5 = *(int *)(param_1 + 0x28);
    iVar4 = iVar5 + 7;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    *piVar13 = ((iVar4 >> 3) - ((int)uVar2 >> 3)) + -4;
    uVar7 = 1;
    if (local_8 != ___stack_chk_guard) goto LAB_053d6990;
  }
  else {
    uVar7 = 0;
    if (local_8 != ___stack_chk_guard) {
LAB_053d6990:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar7);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::PIEffect(Sexy::PIEffect const&) */

void __thiscall Sexy::PIEffect::PIEffect(PIEffect *this,PIEffect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PIEffect PVar3;
  PIEffect PVar4;
  PIEffect PVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  AutoCrit aAStack_18 [8];
  PIEffect *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseResource::BaseResource((BaseResource *)this);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  lVar20 = 0;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined ***)this = &PTR_GetClass_06a37060;
  FUN_05475d88(this + 0x48,param_1 + 0x48);
  Set8BytesTo0(this + 0x50);
  MTRand::MTRand((MTRand *)(this + 0x58));
  Buffer::Buffer((Buffer *)(this + 0x13f0),(Buffer *)(param_1 + 0x13f0));
  FUN_05475d88(this + 0x1430,param_1 + 0x1430);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1440));
  uVar1 = *(undefined4 *)(param_1 + 0x145c);
  *(undefined4 *)(this + 0x1458) = *(undefined4 *)(param_1 + 0x1458);
  *(undefined4 *)(this + 0x145c) = uVar1;
  Insets::Insets((Insets *)(this + 0x1460),(Insets *)(param_1 + 0x1460));
  uVar1 = *(undefined4 *)(param_1 + 0x1470);
  uVar2 = *(undefined4 *)(param_1 + 0x1474);
  *(undefined4 *)(this + 0x1478) = *(undefined4 *)(param_1 + 0x1478);
  *(undefined4 *)(this + 0x1470) = uVar1;
  *(undefined4 *)(this + 0x1474) = uVar2;
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
         *)(this + 0x1488),(map *)(param_1 + 0x1488));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x14c0));
  FUN_05475d88(this + 0x14d8,param_1 + 0x14d8);
  this[0x14e0] = param_1[0x14e0];
  ObjectPool<Sexy::PIParticleInstance>::ObjectPool
            ((ObjectPool<Sexy::PIParticleInstance> *)(this + 0x14f0));
  ObjectPool<Sexy::PIFreeEmitterInstance>::ObjectPool
            ((ObjectPool<Sexy::PIFreeEmitterInstance> *)(this + 0x1510));
  *(undefined4 *)(this + 0x1540) = *(undefined4 *)(param_1 + 0x1540);
  Insets::Insets((Insets *)(this + 0x1544),(Insets *)(param_1 + 0x1544));
  PVar3 = param_1[0x1554];
  PVar4 = param_1[0x1555];
  PVar5 = param_1[0x1556];
  this[0x1557] = param_1[0x1557];
  this[0x1554] = PVar3;
  this[0x1555] = PVar4;
  this[0x1556] = PVar5;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x1558),(vector *)(param_1 + 0x1558));
  uVar7 = *(undefined8 *)(param_1 + 0x1574);
  uVar15 = *(undefined8 *)(param_1 + 0x157c);
  this[0x1570] = param_1[0x1570];
  *(undefined8 *)(this + 0x1574) = uVar7;
  *(undefined8 *)(this + 0x157c) = uVar15;
  uVar7 = *(undefined8 *)(param_1 + 0x158c);
  *(undefined8 *)(this + 0x1584) = *(undefined8 *)(param_1 + 0x1584);
  *(undefined8 *)(this + 0x158c) = uVar7;
  *(undefined4 *)(this + 0x1594) = *(undefined4 *)(param_1 + 0x1594);
  uVar7 = *(undefined8 *)(param_1 + 0x15a0);
  *(undefined8 *)(this + 0x1598) = *(undefined8 *)(param_1 + 0x1598);
  *(undefined8 *)(this + 0x15a0) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x15b0);
  *(undefined8 *)(this + 0x15a8) = *(undefined8 *)(param_1 + 0x15a8);
  *(undefined8 *)(this + 0x15b0) = uVar7;
  *(undefined4 *)(this + 0x15b8) = *(undefined4 *)(param_1 + 0x15b8);
  *(undefined4 *)(this + 0x15bc) = *(undefined4 *)(param_1 + 0x15bc);
  AutoCrit::AutoCrit(aAStack_18,(CritSect *)(gSexyAppBase + 0x10c));
  local_10 = this;
  std::set<Sexy::PIEffect*,std::less<Sexy::PIEffect*>,std::allocator<Sexy::PIEffect*>>::insert
            ((set<Sexy::PIEffect*,std::less<Sexy::PIEffect*>,std::allocator<Sexy::PIEffect*>> *)
             (gSexyAppBase + 0x538),&local_10);
  AutoCrit::~AutoCrit(aAStack_18);
  *(undefined8 *)(this + 0x30) = 0;
  piVar17 = *(int **)(param_1 + 0x14b8);
  *(undefined4 *)(this + 0x1438) = 0;
  *(undefined4 *)(this + 0x14e4) = 0;
  iVar6 = *piVar17;
  *(undefined4 *)(this + 0x14e8) = 0;
  this[0x14ec] = (PIEffect)0x0;
  this[0x1530] = (PIEffect)0x0;
  this[0x1531] = (PIEffect)0x0;
  this[0x1532] = (PIEffect)0x0;
  *(int **)(this + 0x14b8) = piVar17;
  *(undefined4 *)(this + 0x1534) = 0;
  uVar15 = *(undefined8 *)(piVar17 + 0x10);
  uVar7 = *(undefined8 *)(piVar17 + 0xe);
  *(undefined4 *)(this + 0x1538) = 0;
  *(undefined4 *)(this + 0x153c) = 0;
  *piVar17 = iVar6 + 1;
  uVar8 = FUN_053b9ba0(uVar7,uVar15);
  std::vector<Sexy::PILayer,std::allocator<Sexy::PILayer>>::resize
            ((vector<Sexy::PILayer,std::allocator<Sexy::PILayer>> *)(this + 0x14c0),uVar8);
  uVar7 = *(undefined8 *)(this + 0x14c0);
  iVar6 = FUN_053b9bb4(uVar7,*(undefined8 *)(this + 0x14c8));
  if (0 < iVar6) {
    do {
      lVar9 = FUN_053b9bc8(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x38),lVar20);
      plVar10 = (long *)FUN_053b9bd4(uVar7,lVar20);
      *plVar10 = lVar9;
      uVar8 = FUN_053b9be4(*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10));
      std::vector<Sexy::PIEmitterInstance,std::allocator<Sexy::PIEmitterInstance>>::resize
                ((vector<Sexy::PIEmitterInstance,std::allocator<Sexy::PIEmitterInstance>> *)
                 (plVar10 + 1),uVar8);
      lVar19 = 0;
      while( true ) {
        uVar7 = *(undefined8 *)(lVar9 + 8);
        iVar6 = FUN_053b9be4(uVar7,*(undefined8 *)(lVar9 + 0x10));
        if (iVar6 <= (int)lVar19) break;
        lVar11 = FUN_053b9c04(*(undefined8 *)(param_1 + 0x14c0),lVar20);
        lVar11 = FUN_053b9c14(*(undefined8 *)(lVar11 + 8),lVar19);
        lVar12 = FUN_053b9c24(uVar7,lVar19);
        lVar13 = FUN_053b9b34(plVar10[1],lVar19);
        plVar14 = (long *)FUN_053b9af8(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                                       (long)*(int *)(lVar12 + 0xc));
        lVar18 = *plVar14;
        *(long *)(lVar13 + 0x38) = lVar12;
        uVar7 = *(undefined8 *)(lVar11 + 0xe0);
        uVar16 = *(undefined8 *)(lVar18 + 0x1270);
        uVar15 = *(undefined8 *)(lVar18 + 0x1268);
        *(undefined8 *)(lVar13 + 0xd8) = *(undefined8 *)(lVar11 + 0xd8);
        *(undefined8 *)(lVar13 + 0xe0) = uVar7;
        uVar8 = FUN_053b9c30(uVar15,uVar16);
        std::vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>::resize
                  ((vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>
                    *)(lVar13 + 0x80),uVar8);
        uVar8 = FUN_053b9c50(*(undefined8 *)(lVar11 + 0x48),*(undefined8 *)(lVar11 + 0x50));
        std::vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>::resize
                  ((vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>
                    *)(lVar13 + 0x48),uVar8);
        lVar19 = lVar19 + 1;
      }
      uVar7 = *(undefined8 *)(this + 0x14c0);
      lVar20 = lVar20 + 1;
      iVar6 = FUN_053b9bb4(uVar7,*(undefined8 *)(this + 0x14c8));
    } while ((int)lVar20 < iVar6);
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  DetermineGroupFlags(this);
  ResetAnim(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PIEffect::Duplicate() */

PIEffect * __thiscall Sexy::PIEffect::Duplicate(PIEffect *this)

{
  PIEffect *this_00;
  
  this_00 = ::operator_new(0x15c0);
  PIEffect(this_00,this);
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::LoadEffect(std::string const&) */

void __thiscall Sexy::PIEffect::LoadEffect(PIEffect *this,string *param_1)

{
  uint uVar1;
  PIEffect *pPVar2;
  PIValue *pPVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  PITexture PVar9;
  bool bVar10;
  char cVar11;
  PIEffect PVar12;
  short extraout_w0;
  short extraout_w0_00;
  short extraout_w0_01;
  short extraout_w0_02;
  short extraout_w0_03;
  short extraout_w0_04;
  short extraout_w0_05;
  short extraout_w0_06;
  short extraout_w0_07;
  short extraout_w0_08;
  short extraout_w0_09;
  short extraout_w0_10;
  short extraout_w0_11;
  short extraout_w0_12;
  short extraout_w0_13;
  short extraout_w0_14;
  short extraout_w0_15;
  short extraout_w0_16;
  int extraout_w0_17;
  int extraout_w0_18;
  int extraout_w0_19;
  undefined4 uVar13;
  int iVar14;
  undefined4 extraout_w0_20;
  undefined4 extraout_w0_21;
  undefined4 extraout_w0_22;
  undefined4 extraout_w0_23;
  int iVar15;
  undefined4 extraout_w0_24;
  int iVar16;
  int iVar17;
  undefined4 extraout_w0_25;
  undefined4 extraout_w0_26;
  undefined4 extraout_w0_27;
  undefined4 extraout_w0_28;
  int extraout_w0_29;
  int extraout_w0_30;
  PIEffectDef *this_00;
  long lVar18;
  PITexture *pPVar19;
  Image *pIVar20;
  DeviceImage *pDVar21;
  long extraout_x0;
  int *piVar22;
  ResourceInfo *pRVar23;
  RtObject *this_01;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  char *pcVar28;
  byte *pbVar29;
  long *plVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  undefined4 *puVar34;
  int *piVar35;
  string *this_02;
  ulong extraout_x1;
  PIEmitter *pPVar36;
  undefined8 uVar37;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *extraout_x1_06;
  ResourceManager *this_03;
  size_t __n;
  PIEffect *pPVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  uint uVar42;
  uint uVar43;
  long lVar44;
  code *pcVar45;
  long lVar46;
  PIValue *pPVar47;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  long local_600;
  Sexy *local_5d8;
  __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  *local_5d0;
  string asStack_5b8 [8];
  string asStack_5b0 [8];
  string asStack_5a8 [8];
  Sexy local_5a0 [8];
  PITexture *local_598;
  undefined8 local_590;
  undefined1 local_588 [16];
  undefined8 local_578 [5];
  undefined8 local_550 [5];
  int local_528;
  int iStack_524;
  int local_520;
  int local_51c [21];
  undefined1 local_4c8 [12];
  undefined4 uStack_4bc;
  float local_4b8;
  float local_4b4;
  PIValue2D aPStack_4b0 [8];
  float local_4a8;
  float local_4a4;
  float local_4a0;
  float local_49c;
  float local_498;
  PIValue aPStack_458 [8];
  PIValue aPStack_450 [104];
  PIValue aPStack_3e8 [8];
  PIValue aPStack_3e0 [104];
  vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>> avStack_378 [8];
  undefined8 local_370;
  undefined8 local_368;
  vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> avStack_358 [24];
  PIForce aPStack_340 [8];
  undefined1 local_338;
  PIValue2D aPStack_330 [96];
  PIValue aPStack_2d0 [112];
  PIValue aPStack_260 [112];
  PIValue aPStack_1f0 [112];
  PIValue aPStack_180 [112];
  PIValue aPStack_110 [112];
  PIValue aPStack_a0 [152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (1 < **(int **)(this + 0x14b8)) {
    Deref(this);
    this_00 = ::operator_new(0x88);
    PIEffectDef::PIEffectDef(this_00);
    *(PIEffectDef **)(this + 0x14b8) = this_00;
  }
  Clear(this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  thunk_FUN_05475e00(this + 0x48,param_1);
  cVar11 = SexyAppBase::ReadBufferFromFile
                     (gSexyAppBase,param_1,(void **)(this + 0x18),(ulong *)(this + 0x20));
  if (cVar11 == '\0') {
    FUN_031f5e7c((string *)local_4c8,"Unable to open file: ",param_1);
    PVar12 = (PIEffect)Fail(this,(string *)local_4c8);
    std::string::~string((string *)local_4c8);
    if (local_8 != ___stack_chk_guard) goto LAB_053da550;
  }
  else {
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x18);
    Lower((Sexy *)param_1,asStack_5b8);
    lVar18 = FUN_05474374((string *)local_4c8,&DAT_056ed038,0);
    this[0x3c] = (PIEffect)(lVar18 != -1);
    std::string::~string((string *)local_4c8);
    *(undefined4 *)(this + 0x1424) = 0;
    *(undefined4 *)(this + 0x1428) = 0x400;
    ReadString();
    if (this[0x3c] == (PIEffect)0x0) {
      iVar15 = *(int *)(this + 0x40);
    }
    else {
      FUN_053bcc2c(this,this + 0x1420,4);
      nop();
      *(int *)(this + 0x40) = extraout_w0_30;
      iVar15 = extraout_w0_30;
    }
    if (iVar15 < 0) {
      std::string::string((string *)local_4c8,"PPF version too old");
      Fail(this,(string *)local_4c8);
      std::string::~string((string *)local_4c8);
      nop();
    }
    pPVar38 = this + 0x1420;
    pPVar2 = this + 0x1430;
    ReadString();
    FUN_05474278(pPVar2,(string *)local_4c8);
    std::string::~string((string *)local_4c8);
    FUN_053bcc2c(this,pPVar38,2);
    nop();
    if (0 < extraout_w0) {
      uVar42 = 0;
      iVar15 = 0;
      do {
        std::string::string((string *)local_4c8,"CMultiTexture");
        ExpectCmd(this,(string *)local_4c8);
        std::string::~string((string *)local_4c8);
        nop();
        pPVar19 = ::operator_new(0x48);
        PITexture::PITexture(pPVar19);
        local_598 = pPVar19;
        ReadString();
        FUN_05474278(pPVar19 + 0x18,(string *)local_4c8);
        std::string::~string((string *)local_4c8);
        FUN_053bcc2c(this,pPVar38,2);
        nop();
        iVar16 = (int)extraout_w0_00;
        PVar12 = this[0x3c];
        *(int *)(local_598 + 0x40) = iVar16;
        if (PVar12 == (PIEffect)0x0) {
          local_598[0x44] = (PITexture)0x0;
          if (0 < iVar16) {
            uVar4 = uVar42 + iVar16;
            uVar43 = uVar42;
            do {
              uVar1 = uVar43 + 1;
              std::string::string((string *)local_4c8,"CTexture");
              ExpectCmd(this,(string *)local_4c8);
              std::string::~string((string *)local_4c8);
              nop();
              ReadString();
              FUN_053bcc2c(this,pPVar38,4);
              nop();
              FUN_053bcc2c(this,pPVar38,4);
              nop();
              FUN_053bcc2c(this,pPVar38,4);
              nop();
              iVar16 = extraout_w0_17 * extraout_w0_18;
              FUN_053bcc2c(this,pPVar38,4);
              nop();
              FUN_053bcc2c(this,pPVar38,4);
              nop();
              local_5a0[0] = (Sexy)0x1;
              RtMixedPtr<Sexy::Image>::RtMixedPtr();
              this_03 = *(ResourceManager **)(gSexyAppBase + 0x848);
              FUN_031f5e7c((string *)local_588,&DAT_056ecf00,this + 0x48);
              std::operator+((string *)local_588,":");
              StrFormat("%d",(string *)&local_528,(ulong)uVar43);
              std::operator+((string *)local_578,(string *)&local_528);
              ResourceManager::GetImage
                        (this_03,(RtMixedPtr *)local_550,(string *)local_4c8,(GetImageOptions *)0x0,
                         (bool *)local_5a0);
              std::string::~string((string *)local_4c8);
              std::string::~string((string *)&local_528);
              std::string::~string((string *)local_578);
              std::string::~string((string *)local_588);
              pIVar20 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)local_550);
              pDVar21 = RtObject::Cast<Sexy::DeviceImage>((RtObject *)pIVar20);
              (**(code **)(*(long *)pDVar21 + 200))(pDVar21,extraout_w0_17,extraout_w0_18);
              (**(code **)(*(long *)this + 0x50))(this,pDVar21);
              lVar18 = (**(code **)(*(long *)pDVar21 + 0xd0))(pDVar21,0,0,0,0);
              if (0 < iVar16) {
                lVar44 = 0;
                if (extraout_w0_19 == 8) {
                  do {
                    pbVar29 = (byte *)FUN_053bcc2c(this,pPVar38,1);
                    *(uint *)(lVar18 + lVar44 * 4) = (uint)*pbVar29 << 0x18 | 0xffffff;
                    lVar44 = lVar44 + 1;
                  } while ((int)lVar44 < iVar16);
                }
                else {
                  do {
                    FUN_053bcc2c(this,pPVar38,4);
                    nop();
                    *(uint *)(lVar18 + lVar44 * 4) =
                         (uint)(extraout_x0 << 0x10) & 0xff0000 |
                         (uint)((ulong)extraout_x0 >> 0x10) & 0xff | (uint)extraout_x0 & 0xff00ff00;
                    lVar44 = lVar44 + 1;
                  } while ((int)lVar44 < iVar16);
                }
              }
              if (local_5a0[0] != (Sexy)0x0) {
                (**(code **)(*(long *)pDVar21 + 0x98))(pDVar21);
              }
              std::
              vector<Sexy::RtMixedPtr<Sexy::Image>,std::allocator<Sexy::RtMixedPtr<Sexy::Image>>>::
              push_back((vector<Sexy::RtMixedPtr<Sexy::Image>,std::allocator<Sexy::RtMixedPtr<Sexy::Image>>>
                         *)(local_598 + 0x20),(RtMixedPtr *)local_550);
              pIVar20 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)local_550);
              Image::GetCelRect((int)pIVar20);
              local_4c8._0_8_ = local_598;
              if (local_598[0x44] != (PITexture)0x0) {
                local_528 = local_528 + 1;
                iStack_524 = iStack_524 + 1;
                local_520 = local_520 + -2;
                local_51c[0] = local_51c[0] + -2;
              }
              register0x00004000 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)local_550);
              fVar49 = (float)local_528;
              pIVar20 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)local_550);
              fVar48 = (float)iStack_524;
              local_4a8 = fVar49 / (float)*(int *)(pIVar20 + 0x38);
              pIVar20 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)local_550);
              iVar16 = local_528 + local_520;
              local_4a4 = fVar48 / (float)*(int *)(pIVar20 + 0x3c);
              pIVar20 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)local_550);
              iVar17 = iStack_524 + local_51c[0];
              local_4a0 = (float)iVar16 / (float)*(int *)(pIVar20 + 0x38);
              pIVar20 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)local_550);
              local_49c = (float)iVar17 / (float)*(int *)(pIVar20 + 0x3c);
              piVar22 = eastl::max_alt<int>(&local_520,local_51c);
              local_498 = (float)*piVar22;
              local_4b4 = (float)local_51c[0] / local_498;
              local_4b8 = (float)local_520 / local_498;
              std::vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>>::push_back
                        ((vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>> *)
                         local_598,(PITextureChunk *)local_4c8);
              RtMixedPtr<Sexy::Image>::~RtMixedPtr((RtMixedPtr<Sexy::Image> *)local_550);
              std::string::~string((string *)&local_590);
              uVar43 = uVar1;
              uVar42 = uVar4;
            } while (uVar1 != uVar4);
          }
        }
        else {
          FUN_053bcc2c(this,pPVar38,2);
          nop();
          pPVar19 = local_598;
          iVar17 = (int)extraout_w0_02;
          if (this[0x3c] == (PIEffect)0x0) {
            piVar22 = (int *)FUN_053bcc2c(this,pPVar38,4);
            PVar9 = (PITexture)(*piVar22 != 0);
          }
          else {
            pcVar28 = (char *)FUN_053bcc2c(this,pPVar38,1);
            PVar9 = (PITexture)(*pcVar28 != '\0');
          }
          pPVar19[0x44] = PVar9;
          ReadString();
          pPVar19 = local_598;
          (**(code **)(*(long *)this + 0x48))
                    ((string *)local_4c8,this,local_598 + 0x18,(RtMixedPtr *)local_550);
          RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)(pPVar19 + 0x38),(RtWeakPtr *)local_4c8);
          RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_4c8);
          pRVar23 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(local_598 + 0x38));
          if (pRVar23 == (ResourceInfo *)0x0) {
            FUN_031f5e7c((string *)local_4c8,"Unable to load image: ",(RtMixedPtr *)local_550);
            Fail(this,(string *)local_4c8);
            std::string::~string((string *)local_4c8);
          }
          else {
            lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
            if ((*(int *)(lVar18 + 0x44) == 1) &&
               (lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38)),
               *(int *)(lVar18 + 0x40) == 1)) {
              lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
              iVar14 = 0;
              if (iVar17 != 0) {
                iVar14 = iVar16 / iVar17;
              }
              *(int *)(lVar18 + 0x44) = iVar14;
              lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
              *(int *)(lVar18 + 0x40) = iVar17;
            }
            iVar17 = 0;
            pcVar45 = *(code **)(*(long *)this + 0x50);
            this_01 = (RtObject *)
                      RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
            pDVar21 = RtObject::Cast<Sexy::DeviceImage>(this_01);
            (*pcVar45)(this,pDVar21);
            if (0 < iVar16) {
              do {
                iVar14 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                Image::GetCelRect(iVar14);
                local_4c8._0_8_ = local_598;
                if (local_598[0x44] != (PITexture)0x0) {
                  local_528 = local_528 + 1;
                  iStack_524 = iStack_524 + 1;
                  local_520 = local_520 + -2;
                  local_51c[0] = local_51c[0] + -2;
                }
                lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                pRVar23 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar18 + 0x48));
                if (pRVar23 == (ResourceInfo *)0x0) {
                  register0x00004000 =
                       (Image *)RtWeakPtr::operator_cast_to_ResourceInfo_
                                          ((RtWeakPtr *)(local_598 + 0x38));
                  fVar49 = (float)local_528;
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                  fVar48 = (float)iStack_524;
                  local_4a8 = fVar49 / (float)*(int *)(lVar18 + 0x38);
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                  iVar5 = local_528 + local_520;
                  local_4a4 = fVar48 / (float)*(int *)(lVar18 + 0x3c);
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                  iVar14 = iStack_524 + local_51c[0];
                  local_4a0 = (float)iVar5 / (float)*(int *)(lVar18 + 0x38);
                  pPVar19 = local_598 + 0x38;
                }
                else {
                  *(undefined1 *)(*(long *)(this + 0x14b8) + 0x80) = 1;
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                  register0x00004000 =
                       (Image *)RtWeakPtr::operator_cast_to_ResourceInfo_
                                          ((RtWeakPtr *)(lVar18 + 0x48));
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                  iVar14 = *(int *)(lVar18 + 0x50) + local_528;
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar18 + 0x48));
                  local_4a8 = (float)iVar14 / (float)*(int *)(lVar18 + 0x38);
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                  iVar14 = *(int *)(lVar18 + 0x54) + iStack_524;
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar18 + 0x48));
                  local_4a4 = (float)iVar14 / (float)*(int *)(lVar18 + 0x3c);
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                  iVar14 = *(int *)(lVar18 + 0x50) + local_528 + local_520;
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar18 + 0x48));
                  local_4a0 = (float)iVar14 / (float)*(int *)(lVar18 + 0x38);
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                  iVar14 = *(int *)(lVar18 + 0x54) + iStack_524 + local_51c[0];
                  lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(local_598 + 0x38));
                  pPVar19 = (PITexture *)(lVar18 + 0x48);
                }
                lVar18 = RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)pPVar19);
                iVar17 = iVar17 + 1;
                local_49c = (float)iVar14 / (float)*(int *)(lVar18 + 0x3c);
                piVar22 = eastl::max_alt<int>(&local_520,local_51c);
                local_498 = (float)*piVar22;
                local_4b8 = (float)local_520 / local_498;
                local_4b4 = (float)local_51c[0] / local_498;
                std::vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>>::push_back
                          ((vector<Sexy::PITextureChunk,std::allocator<Sexy::PITextureChunk>> *)
                           local_598,(PITextureChunk *)local_4c8);
              } while (iVar16 != iVar17);
            }
          }
          std::string::~string((string *)local_550);
        }
        iVar15 = iVar15 + 1;
        std::vector<Sexy::PITexture*,std::allocator<Sexy::PITexture*>>::push_back
                  ((vector<Sexy::PITexture*,std::allocator<Sexy::PITexture*>> *)
                   (*(long *)(this + 0x14b8) + 0x20),&local_598);
      } while (iVar15 != extraout_w0);
    }
    local_5d0 = (__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 *)&local_598;
    local_5d8 = local_5a0;
    FUN_053bcc2c(this,pPVar38,2);
    nop();
    std::vector<Sexy::PIEmitter*,std::allocator<Sexy::PIEmitter*>>::reserve
              ((vector<Sexy::PIEmitter*,std::allocator<Sexy::PIEmitter*>> *)
               (*(long *)(this + 0x14b8) + 8),(long)extraout_w0_01);
    std::vector<Sexy::PIEmitter*,std::allocator<Sexy::PIEmitter*>>::resize
              ((vector<Sexy::PIEmitter*,std::allocator<Sexy::PIEmitter*>> *)
               (*(long *)(this + 0x14b8) + 8),(long)extraout_w0_01);
    lVar18 = 0;
    if (0 < extraout_w0_01) {
      do {
        pPVar36 = ::operator_new(0x1290);
        memset(pPVar36,0,0x1290);
        PIEmitter::PIEmitter(pPVar36);
        puVar32 = (undefined8 *)FUN_053b9af8(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),lVar18);
        *puVar32 = pPVar36;
        std::string::string((string *)local_4c8,"CEmitterType");
        ExpectCmd(this,(string *)local_4c8);
        std::string::~string((string *)local_4c8);
        nop();
        if (this[0x3c] == (PIEffect)0x0) {
          lVar44 = *(long *)(this + 0x14b8);
          uVar13 = FUN_053b9cf4(*(undefined8 *)(this + 0x1440),*(undefined8 *)(this + 0x1448));
          local_4c8._0_4_ = uVar13;
          puVar34 = (undefined4 *)
                    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                    operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                *)(lVar44 + 0x50),(int *)local_4c8);
          *puVar34 = (int)lVar18;
        }
        lVar44 = lVar18 + 1;
        puVar32 = (undefined8 *)FUN_053b9af8(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),lVar18);
        ReadEmitterType(this,(PIEmitter *)*puVar32);
        lVar18 = lVar44;
      } while ((int)lVar44 < (int)extraout_w0_01);
    }
    local_600 = 0;
    std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)local_578);
    uVar24 = FUN_053b9aec(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                          *(undefined8 *)(*(long *)(this + 0x14b8) + 0x10));
    std::vector<bool,std::allocator<bool>>::reserve
              ((vector<bool,std::allocator<bool>> *)local_578,uVar24);
    uVar24 = FUN_053b9aec(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                          *(undefined8 *)(*(long *)(this + 0x14b8) + 0x10));
    std::vector<bool,std::allocator<bool>>::resize
              ((vector<bool,std::allocator<bool>> *)local_578,uVar24,false);
    std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)local_550);
    uVar24 = FUN_053b9b00(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                          *(undefined8 *)(*(long *)(this + 0x14b8) + 0x28));
    std::vector<bool,std::allocator<bool>>::reserve
              ((vector<bool,std::allocator<bool>> *)local_550,uVar24);
    uVar24 = FUN_053b9b00(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                          *(undefined8 *)(*(long *)(this + 0x14b8) + 0x28));
    std::vector<bool,std::allocator<bool>>::resize
              ((vector<bool,std::allocator<bool>> *)local_550,uVar24,false);
    FUN_053bcc2c(this,pPVar38,2);
    nop();
    std::vector<Sexy::PILayer,std::allocator<Sexy::PILayer>>::resize
              ((vector<Sexy::PILayer,std::allocator<Sexy::PILayer>> *)(this + 0x14c0),
               (long)extraout_w0_03);
    std::vector<Sexy::PILayerDef,std::allocator<Sexy::PILayerDef>>::resize
              ((vector<Sexy::PILayerDef,std::allocator<Sexy::PILayerDef>> *)
               (*(long *)(this + 0x14b8) + 0x38),(long)extraout_w0_03);
    if (0 < extraout_w0_03) {
      do {
        lVar18 = 0;
        lVar44 = FUN_053b9bc8(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x38),local_600);
        plVar25 = (long *)FUN_053b9bd4(*(undefined8 *)(this + 0x14c0),local_600);
        *plVar25 = lVar44;
        std::string::string((string *)local_4c8,"CLayer");
        ExpectCmd(this,(string *)local_4c8);
        std::string::~string((string *)local_4c8);
        nop();
        ReadString();
        FUN_05474278(lVar44,(string *)local_4c8);
        std::string::~string((string *)local_4c8);
        FUN_053bcc2c(this,pPVar38,2);
        nop();
        uVar24 = (ulong)extraout_w0_04;
        std::vector<Sexy::PIEmitterInstance,std::allocator<Sexy::PIEmitterInstance>>::reserve
                  ((vector<Sexy::PIEmitterInstance,std::allocator<Sexy::PIEmitterInstance>> *)
                   (plVar25 + 1),uVar24);
        std::vector<Sexy::PIEmitterInstance,std::allocator<Sexy::PIEmitterInstance>>::resize
                  ((vector<Sexy::PIEmitterInstance,std::allocator<Sexy::PIEmitterInstance>> *)
                   (plVar25 + 1),uVar24);
        std::vector<Sexy::PIEmitterInstanceDef,std::allocator<Sexy::PIEmitterInstanceDef>>::reserve
                  ((vector<Sexy::PIEmitterInstanceDef,std::allocator<Sexy::PIEmitterInstanceDef>> *)
                   (lVar44 + 8),uVar24);
        std::vector<Sexy::PIEmitterInstanceDef,std::allocator<Sexy::PIEmitterInstanceDef>>::resize
                  ((vector<Sexy::PIEmitterInstanceDef,std::allocator<Sexy::PIEmitterInstanceDef>> *)
                   (lVar44 + 8),uVar24);
        if (0 < extraout_w0_04) {
          do {
            lVar26 = FUN_053b9c24(*(undefined8 *)(lVar44 + 8),lVar18);
            lVar27 = FUN_053b9b34(plVar25[1],lVar18);
            *(long *)(lVar27 + 0x38) = lVar26;
            std::string::string((string *)local_4c8,"CEmitter");
            ExpectCmd(this,(string *)local_4c8);
            std::string::~string((string *)local_4c8);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            *(undefined4 *)(lVar26 + 8) = extraout_w0_20;
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            ReadString();
            FUN_05474278(lVar26,(string *)local_4c8);
            std::string::~string((string *)local_4c8);
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            *(undefined4 *)(lVar26 + 0x10) = extraout_w0_21;
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            if (this[0x3c] == (PIEffect)0x0) {
              piVar22 = (int *)FUN_053bcc2c(this,pPVar38,4);
              bVar10 = *piVar22 != 0;
            }
            else {
              pcVar28 = (char *)FUN_053bcc2c(this,pPVar38,1);
              bVar10 = *pcVar28 != '\0';
            }
            if ((bVar10) && (*(int *)(lVar26 + 0x10) == 2)) {
              *(undefined4 *)(lVar26 + 0x10) = 4;
            }
            if (this[0x3c] == (PIEffect)0x0) {
              piVar22 = (int *)FUN_053bcc2c(this,pPVar38,4);
              bVar10 = *piVar22 != 0;
            }
            else {
              pcVar28 = (char *)FUN_053bcc2c(this,pPVar38,1);
              bVar10 = *pcVar28 != '\0';
            }
            PVar12 = this[0x3c];
            *(bool *)(lVar26 + 0x14) = bVar10;
            if (PVar12 == (PIEffect)0x0) {
              piVar22 = (int *)FUN_053bcc2c(this,pPVar38,4);
              bVar10 = *piVar22 != 0;
            }
            else {
              pcVar28 = (char *)FUN_053bcc2c(this,pPVar38,1);
              bVar10 = *pcVar28 != '\0';
            }
            *(bool *)(lVar26 + 0x15) = bVar10;
            pbVar29 = (byte *)FUN_053bcc2c(this,pPVar38,1);
            bVar6 = *pbVar29;
            FUN_053bcc2c(this,pPVar38,1);
            FUN_053bcc2c(this,pPVar38,1);
            FUN_053bcc2c(this,pPVar38,1);
            pbVar29 = (byte *)FUN_053bcc2c(this,pPVar38,1);
            bVar7 = *pbVar29;
            FUN_053bcc2c(this,pPVar38,1);
            FUN_053bcc2c(this,pPVar38,1);
            FUN_053bcc2c(this,pPVar38,1);
            pbVar29 = (byte *)FUN_053bcc2c(this,pPVar38,1);
            bVar8 = *pbVar29;
            FUN_053bcc2c(this,pPVar38,1);
            FUN_053bcc2c(this,pPVar38,1);
            FUN_053bcc2c(this,pPVar38,1);
            Color::FromInt((Color *)((ulong)bVar8 | 0xff000000 | (ulong)bVar6 << 0x10 |
                                    (ulong)bVar7 << 8),extraout_x1);
            *(undefined1 (*) [16])(lVar27 + 0xd8) = _local_4c8;
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            *(undefined4 *)(lVar26 + 0x18) = extraout_w0_22;
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            *(undefined4 *)(lVar26 + 0xc) = extraout_w0_23;
            auVar50 = FUN_053ba990(local_578[0]);
            _local_4c8 = auVar50;
            std::_Bit_reference::operator=((_Bit_reference *)local_4c8,true);
            plVar30 = (long *)FUN_053b9af8(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                                           (long)*(int *)(lVar26 + 0xc));
            lVar46 = *plVar30;
            uVar24 = FUN_053b9c30(*(undefined8 *)(lVar46 + 0x1268),*(undefined8 *)(lVar46 + 0x1270))
            ;
            std::vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>::
            resize((vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>
                    *)(lVar27 + 0x80),uVar24);
            lVar39 = 0;
            while( true ) {
              uVar40 = *(undefined8 *)(lVar46 + 0x1268);
              iVar15 = FUN_053b9c30(uVar40,*(undefined8 *)(lVar46 + 0x1270));
              if (iVar15 <= (int)lVar39) break;
              lVar31 = FUN_053b9ca4(uVar40,lVar39);
              auVar50 = FUN_053ba990(local_550[0],(long)*(int *)(lVar31 + 0x18));
              _local_4c8 = auVar50;
              std::_Bit_reference::operator=((_Bit_reference *)local_4c8,true);
              lVar39 = lVar39 + 1;
            }
            ReadValue2D(this,(PIValue2D *)(lVar26 + 0x48));
            FUN_053bcc2c(this,pPVar38,2);
            nop();
            if (0 < extraout_w0_05) {
              iVar15 = 0;
              do {
                iVar15 = iVar15 + 1;
                std::string::string((string *)local_4c8,"CEPoint");
                ExpectCmd(this,(string *)local_4c8);
                std::string::~string((string *)local_4c8);
                nop();
                FUN_053bcc2c(this,pPVar38,4);
                nop();
                FUN_053bcc2c(this,pPVar38,4);
                nop();
                PIValue2D::PIValue2D((PIValue2D *)local_4c8);
                ReadEPoint(this,(PIValue2D *)local_4c8);
                std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>::push_back
                          ((vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>> *)
                           (lVar26 + 0x8f8),(PIValue2D *)local_4c8);
                PIValue2D::~PIValue2D((PIValue2D *)local_4c8);
              } while (extraout_w0_05 != iVar15);
            }
            pPVar47 = (PIValue *)(lVar26 + 0xa8);
            do {
              pPVar3 = pPVar47 + 0x70;
              ReadValue(this,pPVar47);
              pPVar47 = pPVar3;
            } while (pPVar3 != (PIValue *)(lVar26 + 0x818));
            iVar15 = 0;
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            *(undefined4 *)(lVar26 + 0x1c) = extraout_w0_24;
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            ReadValue(this,pPVar3);
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            ReadValue(this,(PIValue *)(lVar26 + 0x888));
            FUN_053bcc2c(this,pPVar38,2);
            nop();
            Set8BytesTo0((string *)local_588);
            if (0 < extraout_w0_06) {
              do {
                iVar15 = iVar15 + 1;
                ReadString();
                FUN_05474278((string *)local_588,(string *)local_4c8);
                std::string::~string((string *)local_4c8);
              } while (extraout_w0_06 != iVar15);
            }
            if (this[0x3c] == (PIEffect)0x0) {
              piVar22 = (int *)FUN_053bcc2c(this,pPVar38,4);
              iVar15 = *piVar22;
              ReadString();
              if (iVar15 != 0) goto LAB_053d980c;
            }
            else {
              pcVar28 = (char *)FUN_053bcc2c(this,pPVar38,1);
              cVar11 = *pcVar28;
              ReadString();
              if (cVar11 != '\0') {
LAB_053d980c:
                (**(code **)(*(long *)this + 0x48))
                          ((string *)local_4c8,this,(string *)&local_528,(string *)local_588);
                RtWeakPtr<PowerPropertySheet>::operator=
                          ((RtWeakPtr<PowerPropertySheet> *)(lVar27 + 0xe8),(RtWeakPtr *)local_4c8);
                RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_4c8);
              }
            }
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            if (this[0x3c] == (PIEffect)0x0) {
              piVar22 = (int *)FUN_053bcc2c(this,pPVar38,4);
              bVar10 = *piVar22 != 0;
            }
            else {
              pcVar28 = (char *)FUN_053bcc2c(this,pPVar38,1);
              bVar10 = *pcVar28 != '\0';
            }
            *(bool *)(lVar26 + 0x40) = bVar10;
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            if (this[0x3c] == (PIEffect)0x0) {
              piVar22 = (int *)FUN_053bcc2c(this,pPVar38,4);
              bVar10 = *piVar22 != 0;
            }
            else {
              pcVar28 = (char *)FUN_053bcc2c(this,pPVar38,1);
              bVar10 = *pcVar28 != '\0';
            }
            iVar15 = 0;
            *(bool *)(lVar26 + 0x20) = bVar10;
            FUN_053bcc2c(this,pPVar38,2);
            nop();
            iVar16 = (int)extraout_w0_07;
            if (0 < iVar16) {
              do {
                while (this[0x3c] == (PIEffect)0x0) {
                  iVar15 = iVar15 + 1;
                  FUN_053bcc2c(this,pPVar38,2);
                  nop();
                  local_590 = CONCAT44(local_590._4_4_,(int)extraout_w0_09);
                  piVar22 = (int *)std::
                                   map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                   ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                                 *)(*(long *)(this + 0x14b8) + 0x50),
                                                (int *)&local_590);
                  std::vector<int,std::allocator<int>>::push_back
                            ((vector<int,std::allocator<int>> *)(lVar26 + 0x28),piVar22);
                  piVar22 = (int *)std::
                                   map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                   ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                                 *)(*(long *)(this + 0x14b8) + 0x50),
                                                (int *)&local_590);
                  auVar50 = FUN_053ba990(local_578[0],(long)*piVar22);
                  _local_4c8 = auVar50;
                  std::_Bit_reference::operator=((_Bit_reference *)local_4c8,true);
                  if (iVar16 == iVar15) goto LAB_053d9008;
                }
                iVar15 = iVar15 + 1;
                FUN_053bcc2c(this,pPVar38,2);
                nop();
                local_590 = CONCAT44(local_590._4_4_,(int)extraout_w0_08);
                std::vector<int,std::allocator<int>>::push_back
                          ((vector<int,std::allocator<int>> *)(lVar26 + 0x28),(int *)&local_590);
                auVar50 = FUN_053ba990(local_578[0],lVar18);
                _local_4c8 = auVar50;
                std::_Bit_reference::operator=((_Bit_reference *)local_4c8,true);
              } while (iVar16 != iVar15);
            }
LAB_053d9008:
            lVar18 = lVar18 + 1;
            std::vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>::
            resize((vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>
                    *)(lVar27 + 0x48),(long)extraout_w0_07);
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            std::string::~string((string *)&local_528);
            std::string::~string((string *)local_588);
          } while ((int)lVar18 < (int)extraout_w0_04);
        }
        FUN_053bcc2c(this,pPVar38,2);
        nop();
        if (0 < extraout_w0_10) {
          iVar15 = 0;
          do {
            PIDeflector::PIDeflector((PIDeflector *)local_4c8);
            std::string::string((string *)&local_528,"CDeflector");
            ExpectCmd(this,(string *)&local_528);
            std::string::~string((string *)&local_528);
            nop();
            ReadString();
            FUN_05474278((string *)local_4c8,(string *)&local_528);
            std::string::~string((string *)&local_528);
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            stack0xfffffffffffffb40 = (Image *)CONCAT44(uStack_4bc,extraout_s0);
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            stack0xfffffffffffffb40 = (Image *)CONCAT44(extraout_s0_00,local_4c8._8_4_);
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            local_4b8 = extraout_s0_01;
            if (this[0x3c] == (PIEffect)0x0) {
              piVar22 = (int *)FUN_053bcc2c(this,pPVar38,4);
              bVar10 = *piVar22 != 0;
            }
            else {
              pcVar28 = (char *)FUN_053bcc2c(this,pPVar38,1);
              bVar10 = *pcVar28 != '\0';
            }
            local_4b4 = (float)CONCAT31(local_4b4._1_3_,bVar10);
            iVar16 = 0;
            ReadValue2D(this,aPStack_4b0);
            FUN_053bcc2c(this,pPVar38,2);
            nop();
            if (0 < extraout_w0_11) {
              do {
                iVar16 = iVar16 + 1;
                std::string::string((string *)&local_528,"CEPoint");
                ExpectCmd(this,(string *)&local_528);
                std::string::~string((string *)&local_528);
                nop();
                FUN_053bcc2c(this,pPVar38,4);
                nop();
                FUN_053bcc2c(this,pPVar38,4);
                nop();
                PIValue2D::PIValue2D((PIValue2D *)&local_528);
                ReadEPoint(this,(PIValue2D *)&local_528);
                std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>::push_back
                          ((vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>> *)&local_370,
                           (PIValue2D *)&local_528);
                PIValue2D::~PIValue2D((PIValue2D *)&local_528);
              } while (extraout_w0_11 != iVar16);
            }
            iVar15 = iVar15 + 1;
            uVar24 = FUN_053b9cd4(local_370,local_368);
            std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::resize(avStack_358,uVar24);
            ReadValue(this,aPStack_450);
            ReadValue(this,aPStack_3e0);
            std::vector<Sexy::PIDeflector,std::allocator<Sexy::PIDeflector>>::push_back
                      ((vector<Sexy::PIDeflector,std::allocator<Sexy::PIDeflector>> *)
                       (lVar44 + 0x20),(PIDeflector *)local_4c8);
            PIDeflector::~PIDeflector((PIDeflector *)local_4c8);
          } while (iVar15 != extraout_w0_10);
        }
        FUN_053bcc2c(this,pPVar38,2);
        nop();
        if (0 < extraout_w0_12) {
          iVar15 = 0;
          do {
            iVar16 = 0;
            PIBlocker::PIBlocker((PIBlocker *)local_4c8);
            std::string::string((string *)&local_528,"CBlocker");
            ExpectCmd(this,(string *)&local_528);
            std::string::~string((string *)&local_528);
            nop();
            ReadString();
            FUN_05474278((string *)local_4c8,(string *)&local_528);
            std::string::~string((string *)&local_528);
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            FUN_053bcc2c(this,pPVar38,4);
            nop();
            ReadValue2D(this,(PIValue2D *)&local_4b8);
            FUN_053bcc2c(this,pPVar38,2);
            nop();
            if (0 < extraout_w0_13) {
              do {
                iVar16 = iVar16 + 1;
                std::string::string((string *)&local_528,"CEPoint");
                ExpectCmd(this,(string *)&local_528);
                std::string::~string((string *)&local_528);
                nop();
                FUN_053bcc2c(this,pPVar38,4);
                nop();
                FUN_053bcc2c(this,pPVar38,4);
                nop();
                PIValue2D::PIValue2D((PIValue2D *)&local_528);
                ReadEPoint(this,(PIValue2D *)&local_528);
                std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>::push_back
                          (avStack_378,(PIValue2D *)&local_528);
                PIValue2D::~PIValue2D((PIValue2D *)&local_528);
              } while (extraout_w0_13 != iVar16);
            }
            iVar15 = iVar15 + 1;
            ReadValue(this,aPStack_458);
            ReadValue(this,aPStack_3e8);
            std::vector<Sexy::PIBlocker,std::allocator<Sexy::PIBlocker>>::push_back
                      ((vector<Sexy::PIBlocker,std::allocator<Sexy::PIBlocker>> *)(lVar44 + 0x38),
                       (PIBlocker *)local_4c8);
            PIBlocker::~PIBlocker((PIBlocker *)local_4c8);
          } while (extraout_w0_12 != iVar15);
        }
        iVar15 = 0x20;
        ReadValue2D(this,(PIValue2D *)(lVar44 + 0x68));
        PIValue2D::GetValueAt(0.0);
        *(undefined8 *)(lVar44 + 200) = local_4c8._0_8_;
        ReadValue(this,(PIValue *)(lVar44 + 0xd0));
        ReadString();
        do {
          FUN_053bcc2c(this,pPVar38,1);
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        FUN_053bcc2c(this,pPVar38,2);
        nop();
        Set8BytesTo0((string *)&local_528);
        iVar15 = 0;
        if (0 < extraout_w0_14) {
          do {
            iVar15 = iVar15 + 1;
            ReadString();
            FUN_05474278((string *)&local_528,(string *)local_4c8);
            std::string::~string((string *)local_4c8);
          } while (extraout_w0_14 != iVar15);
        }
        iVar15 = 0x24;
        do {
          FUN_053bcc2c(this,pPVar38,1);
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        FUN_053bcc2c(this,pPVar38,2);
        nop();
        if (0 < extraout_w0_15) {
          iVar15 = 0;
          do {
            std::string::string((string *)local_4c8,"CForce");
            ExpectCmd(this,(string *)local_4c8);
            std::string::~string((string *)local_4c8);
            nop();
            PIForce::PIForce(aPStack_340);
            ReadString();
            FUN_05474278(aPStack_340,(string *)local_4c8);
            std::string::~string((string *)local_4c8);
            if (this[0x3c] == (PIEffect)0x0) {
              piVar22 = (int *)FUN_053bcc2c(this,pPVar38,4);
              local_338 = *piVar22 != 0;
            }
            else {
              pcVar28 = (char *)FUN_053bcc2c(this,pPVar38,1);
              local_338 = *pcVar28 != '\0';
            }
            iVar15 = iVar15 + 1;
            ReadValue2D(this,aPStack_330);
            ReadValue(this,aPStack_1f0);
            PIValue::PIValue((PIValue *)local_4c8);
            ReadValue(this,(PIValue *)local_4c8);
            ReadValue(this,aPStack_2d0);
            ReadValue(this,aPStack_110);
            ReadValue(this,aPStack_a0);
            ReadValue(this,aPStack_180);
            ReadValue(this,aPStack_260);
            std::vector<Sexy::PIForce,std::allocator<Sexy::PIForce>>::push_back
                      ((vector<Sexy::PIForce,std::allocator<Sexy::PIForce>> *)(lVar44 + 0x50),
                       aPStack_340);
            PIValue::~PIValue((PIValue *)local_4c8);
            PIForce::~PIForce(aPStack_340);
          } while (iVar15 != extraout_w0_15);
        }
        iVar15 = 0x1c;
        do {
          FUN_053bcc2c(this,pPVar38,1);
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        local_600 = local_600 + 1;
        std::string::~string((string *)&local_528);
        std::string::~string((string *)local_588);
      } while ((int)local_600 < (int)extraout_w0_03);
    }
    lVar18 = 0;
    iVar15 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_528);
    uVar24 = FUN_053b9aec(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                          *(undefined8 *)(*(long *)(this + 0x14b8) + 0x10));
    std::vector<int,std::allocator<int>>::resize
              ((vector<int,std::allocator<int>> *)&local_528,uVar24);
    lVar44 = *(long *)(this + 0x14b8);
    iVar16 = FUN_053b9aec(*(undefined8 *)(lVar44 + 8),*(undefined8 *)(lVar44 + 0x10));
    if (0 < iVar16) {
      do {
        auVar50 = FUN_053ba990(local_578[0],lVar18);
        _local_4c8 = auVar50;
        bVar10 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_4c8);
        if (bVar10) {
          piVar22 = (int *)FUN_053b9d00(CONCAT44(iStack_524,local_528),lVar18);
          *piVar22 = iVar15;
          iVar15 = iVar15 + 1;
        }
        lVar44 = *(long *)(this + 0x14b8);
        lVar18 = lVar18 + 1;
        iVar16 = FUN_053b9aec(*(undefined8 *)(lVar44 + 8),*(undefined8 *)(lVar44 + 0x10));
      } while ((int)lVar18 < iVar16);
    }
    lVar18 = 0;
    iVar17 = 0;
    for (iVar15 = 0; iVar15 < iVar16; iVar15 = iVar15 + 1) {
      auVar50 = FUN_053ba990(local_578[0],lVar18);
      _local_4c8 = auVar50;
      bVar10 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_4c8);
      if (bVar10) {
        iVar17 = iVar17 + 1;
      }
      else {
        lVar44 = *(long *)(this + 0x14b8);
        puVar32 = (undefined8 *)FUN_053b9af8(*(undefined8 *)(lVar44 + 8),(long)iVar17);
        pPVar36 = (PIEmitter *)*puVar32;
        if (pPVar36 != (PIEmitter *)0x0) {
          PIEmitter::~PIEmitter(pPVar36);
          AK::FreeHook(pPVar36);
          lVar44 = *(long *)(this + 0x14b8);
        }
        iVar15 = iVar15 + -1;
        local_590 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar44 + 8));
        local_588._0_8_ =
             __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_590,(long)iVar17);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_4c8,(__normal_iterator *)local_588);
        std::vector<Sexy::PIEmitter*,std::allocator<Sexy::PIEmitter*>>::erase
                  ((vector<Sexy::PIEmitter*,std::allocator<Sexy::PIEmitter*>> *)(lVar44 + 8),
                   local_4c8._0_8_);
      }
      lVar44 = *(long *)(this + 0x14b8);
      lVar18 = lVar18 + 1;
      iVar16 = FUN_053b9aec(*(undefined8 *)(lVar44 + 8),*(undefined8 *)(lVar44 + 0x10));
    }
    lVar18 = 0;
    uVar33 = *(undefined8 *)(lVar44 + 0x38);
    iVar15 = FUN_053b9ba0(uVar33,*(undefined8 *)(lVar44 + 0x40));
    uVar40 = CONCAT44(iStack_524,local_528);
    if (0 < iVar15) {
      do {
        lVar44 = 0;
        lVar26 = FUN_053b9bc8(uVar33,lVar18);
        uVar37 = *(undefined8 *)(lVar26 + 8);
        iVar16 = FUN_053b9be4(uVar37,*(undefined8 *)(lVar26 + 0x10));
        if (0 < iVar16) {
          do {
            lVar26 = FUN_053b9c24(uVar37,lVar44);
            puVar34 = (undefined4 *)FUN_053b9d00(uVar40,(long)*(int *)(lVar26 + 0xc));
            uVar41 = *(undefined8 *)(lVar26 + 0x28);
            *(undefined4 *)(lVar26 + 0xc) = *puVar34;
            iVar17 = FUN_053b9d08(uVar41,*(undefined8 *)(lVar26 + 0x30));
            for (lVar26 = 0; (int)lVar26 < iVar17; lVar26 = lVar26 + 1) {
              piVar22 = (int *)FUN_053b9d00(uVar41,lVar26);
              piVar35 = (int *)FUN_053b9d00(uVar40,(long)*piVar22);
              *piVar22 = *piVar35;
            }
            lVar44 = lVar44 + 1;
          } while ((int)lVar44 < iVar16);
        }
        lVar18 = lVar18 + 1;
      } while ((int)lVar18 < iVar15);
    }
    lVar18 = 0;
    iVar15 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_4c8);
    uVar24 = FUN_053b9b00(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                          *(undefined8 *)(*(long *)(this + 0x14b8) + 0x28));
    std::vector<int,std::allocator<int>>::resize
              ((vector<int,std::allocator<int>> *)local_4c8,uVar24);
    lVar44 = *(long *)(this + 0x14b8);
    iVar16 = FUN_053b9b00(*(undefined8 *)(lVar44 + 0x20),*(undefined8 *)(lVar44 + 0x28));
    if (0 < iVar16) {
      do {
        auVar50 = FUN_053ba990(local_550[0],lVar18);
        local_588 = auVar50;
        bVar10 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_588);
        if (bVar10) {
          piVar22 = (int *)FUN_053b9d00(local_4c8._0_8_,lVar18);
          *piVar22 = iVar15;
          iVar15 = iVar15 + 1;
        }
        lVar44 = *(long *)(this + 0x14b8);
        lVar18 = lVar18 + 1;
        iVar16 = FUN_053b9b00(*(undefined8 *)(lVar44 + 0x20),*(undefined8 *)(lVar44 + 0x28));
      } while ((int)lVar18 < iVar16);
    }
    lVar18 = 0;
    iVar17 = 0;
    for (iVar15 = 0; iVar15 < iVar16; iVar15 = iVar15 + 1) {
      auVar50 = FUN_053ba990(local_550[0],lVar18);
      local_588 = auVar50;
      bVar10 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_588);
      if (bVar10) {
        iVar17 = iVar17 + 1;
      }
      else {
        lVar44 = *(long *)(this + 0x14b8);
        puVar32 = (undefined8 *)FUN_053b9b0c(*(undefined8 *)(lVar44 + 0x20),(long)iVar17);
        pPVar19 = (PITexture *)*puVar32;
        if (pPVar19 != (PITexture *)0x0) {
          PITexture::~PITexture(pPVar19);
          AK::FreeHook(pPVar19);
          lVar44 = *(long *)(this + 0x14b8);
        }
        iVar15 = iVar15 + -1;
        local_598 = (PITexture *)
                    std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar44 + 0x20));
        local_590 = __gnu_cxx::
                    __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    ::operator+(local_5d0,(long)iVar17);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_588,(__normal_iterator *)&local_590);
        std::vector<Sexy::PITexture*,std::allocator<Sexy::PITexture*>>::erase
                  ((vector<Sexy::PITexture*,std::allocator<Sexy::PITexture*>> *)(lVar44 + 0x20),
                   local_588._0_8_);
      }
      lVar44 = *(long *)(this + 0x14b8);
      lVar18 = lVar18 + 1;
      iVar16 = FUN_053b9b00(*(undefined8 *)(lVar44 + 0x20),*(undefined8 *)(lVar44 + 0x28));
    }
    uVar33 = *(undefined8 *)(lVar44 + 8);
    lVar18 = 0;
    iVar15 = FUN_053b9aec(uVar33,*(undefined8 *)(lVar44 + 0x10));
    uVar40 = local_4c8._0_8_;
    if (0 < iVar15) {
      do {
        plVar25 = (long *)FUN_053b9af8(uVar33,lVar18);
        uVar37 = *(undefined8 *)(*plVar25 + 0x1268);
        iVar16 = FUN_053b9c30(uVar37,*(undefined8 *)(*plVar25 + 0x1270));
        for (lVar44 = 0; (int)lVar44 < iVar16; lVar44 = lVar44 + 1) {
          lVar26 = FUN_053b9ca4(uVar37,lVar44);
          puVar34 = (undefined4 *)FUN_053b9d00(uVar40,(long)*(int *)(lVar26 + 0x18));
          *(undefined4 *)(lVar26 + 0x18) = *puVar34;
        }
        lVar18 = lVar18 + 1;
      } while ((int)lVar18 < iVar15);
    }
    pbVar29 = (byte *)FUN_053bcc2c(this,pPVar38,1);
    bVar6 = *pbVar29;
    FUN_053bcc2c(this,pPVar38,1);
    FUN_053bcc2c(this,pPVar38,1);
    FUN_053bcc2c(this,pPVar38,1);
    pbVar29 = (byte *)FUN_053bcc2c(this,pPVar38,1);
    bVar7 = *pbVar29;
    FUN_053bcc2c(this,pPVar38,1);
    FUN_053bcc2c(this,pPVar38,1);
    FUN_053bcc2c(this,pPVar38,1);
    pbVar29 = (byte *)FUN_053bcc2c(this,pPVar38,1);
    bVar8 = *pbVar29;
    FUN_053bcc2c(this,pPVar38,1);
    FUN_053bcc2c(this,pPVar38,1);
    FUN_053bcc2c(this,pPVar38,1);
    Color::Color((Color *)local_588,bVar8 | 0xff000000 | (uint)bVar6 << 0x10 | (uint)bVar7 << 8);
    *(undefined1 (*) [16])(this + 0x1460) = local_588;
    FUN_053bcc2c(this,pPVar38,4);
    nop();
    FUN_053bcc2c(this,pPVar38,4);
    nop();
    FUN_053bcc2c(this,pPVar38,2);
    nop();
    *(int *)(this + 0x1470) = (int)extraout_w0_16;
    FUN_053bcc2c(this,pPVar38,2);
    nop();
    FUN_053bcc2c(this,pPVar38,2);
    nop();
    FUN_053bcc2c(this,pPVar38,2);
    nop();
    FUN_053bcc2c(this,pPVar38,4);
    nop();
    *(undefined4 *)(this + 0x1458) = extraout_w0_25;
    FUN_053bcc2c(this,pPVar38,4);
    nop();
    *(undefined4 *)(this + 0x145c) = extraout_w0_26;
    FUN_053bcc2c(this,pPVar38,4);
    nop();
    FUN_053bcc2c(this,pPVar38,4);
    nop();
    FUN_053bcc2c(this,pPVar38,4);
    nop();
    FUN_053bcc2c(this,pPVar38,4);
    nop();
    FUN_053bcc2c(this,pPVar38,4);
    nop();
    FUN_053bcc2c(this,pPVar38,4);
    nop();
    *(undefined4 *)(this + 0x1474) = extraout_w0_27;
    FUN_053bcc2c(this,pPVar38,4);
    nop();
    *(undefined4 *)(this + 0x1478) = extraout_w0_28;
    ReadString();
    FUN_053bcc2c(this,pPVar38,1);
    FUN_053bcc2c(this,pPVar38,2);
    nop();
    FUN_053bcc2c(this,pPVar38,2);
    nop();
    if ((this[0x3c] == (PIEffect)0x0) || (*(int *)(this + 0x40) < 1)) {
      Buffer::Clear((Buffer *)(this + 0x13f0));
    }
    else {
      FUN_053bcc2c(this,pPVar38,4);
      nop();
      if (0 < extraout_w0_29) {
        std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
                  ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x13f8),
                   (long)extraout_w0_29);
        *(int *)(this + 0x1410) = extraout_w0_29 << 3;
        uVar40 = FUN_053b9d14(*(undefined8 *)(this + 0x13f8),0);
        FUN_053bcc2c(this,uVar40,extraout_w0_29);
      }
    }
    iVar15 = 0;
    while( true ) {
      iVar16 = FUN_05474184(pPVar2);
      if (iVar16 <= iVar15) break;
      lVar18 = (long)iVar15;
      Set8BytesTo0(asStack_5a8);
      iVar16 = FUN_054743b0(pPVar2,10,lVar18);
      if (iVar16 == -1) {
        FUN_05475ffc((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_590,pPVar2,lVar18,0xffffffffffffffff);
        Trim((Sexy *)&local_590,extraout_x1_04);
        FUN_05474278(asStack_5a8,(string *)local_588);
        std::string::~string((string *)local_588);
        std::string::~string((string *)&local_590);
        iVar15 = FUN_05474184(pPVar2);
      }
      else {
        iVar17 = iVar16 - iVar15;
        iVar15 = iVar16 + 1;
        FUN_05475ffc((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_590,pPVar2,lVar18,(long)iVar17);
        Trim((Sexy *)&local_590,extraout_x1_00);
        FUN_05474278(asStack_5a8,(string *)local_588);
        std::string::~string((string *)local_588);
        std::string::~string((string *)&local_590);
      }
      lVar18 = FUN_05474184(asStack_5a8);
      if (lVar18 != 0) {
        __n = 0;
        iVar16 = FUN_054743b0(asStack_5a8,0x3a);
        if (iVar16 == -1) {
          Upper((Sexy *)asStack_5a8,extraout_x1_01);
          this_02 = (string *)
                    std::
                    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                    ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                                  *)(this + 0x1488),(string *)local_588);
          std::string::append(this_02,"",__n);
          std::string::~string((string *)local_588);
        }
        else {
          FUN_05475ffc(local_5d8,asStack_5a8,0,(long)iVar16);
          Upper(local_5d8,extraout_x1_02);
          uVar40 = std::
                   map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                   ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                                 *)(this + 0x1488),(string *)local_5d0);
          FUN_05475ffc((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_590,asStack_5a8,(long)(iVar16 + 1),0xffffffffffffffff);
          Trim((Sexy *)&local_590,extraout_x1_03);
          FUN_05474278(uVar40,(string *)local_588);
          std::string::~string((string *)local_588);
          std::string::~string((string *)&local_590);
          std::string::~string((string *)local_5d0);
          std::string::~string((string *)local_5d8);
        }
      }
      std::string::~string(asStack_5a8);
    }
    iVar15 = 0;
    std::string::string((string *)&local_590,"Rand");
    std::string::string((string *)local_588,"");
    GetNotesParam((string *)this,(string *)&local_590);
    std::string::~string((string *)local_588);
    nop();
    std::string::~string((string *)&local_590);
    nop();
    while( true ) {
      iVar16 = FUN_05474184(local_5d8);
      if (iVar16 <= iVar15) break;
      lVar18 = (long)iVar15;
      iVar16 = FUN_054743b0(local_5d8,0x2c,lVar18);
      if (iVar16 == -1) {
        FUN_05475ffc((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_590,local_5d8,lVar18,0xffffffffffffffff);
        Trim((Sexy *)&local_590,extraout_x1_06);
        pcVar28 = (char *)FUN_0547429c((string *)local_588);
        iVar15 = atoi(pcVar28);
        local_598 = (PITexture *)CONCAT44(local_598._4_4_,iVar15);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(this + 0x1558),(int *)local_5d0);
        std::string::~string((string *)local_588);
        std::string::~string((string *)&local_590);
        break;
      }
      iVar17 = iVar16 - iVar15;
      iVar15 = iVar16 + 1;
      FUN_05475ffc((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_590,local_5d8,lVar18,(long)iVar17);
      Trim((Sexy *)&local_590,extraout_x1_05);
      pcVar28 = (char *)FUN_0547429c((string *)local_588);
      iVar16 = atoi(pcVar28);
      local_598 = (PITexture *)CONCAT44(local_598._4_4_,iVar16);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0x1558),(int *)local_5d0);
      std::string::~string((string *)local_588);
      std::string::~string((string *)&local_590);
    }
    std::string::string((string *)local_5d0,"EmitAfter");
    std::string::string((string *)&local_590,"no");
    GetNotesParam((string *)this,(string *)local_5d0);
    PVar12 = (PIEffect)std::operator!=((string *)local_588,"no");
    this[0x1557] = PVar12;
    std::string::~string((string *)local_588);
    std::string::~string((string *)&local_590);
    nop();
    std::string::~string((string *)local_5d0);
    nop();
    DetermineGroupFlags(this);
    lVar18 = FUN_05474184(this + 0x14d8);
    if ((lVar18 == 0) && (gSexyAppBase[0x6b8] == (SexyAppBase)0x0)) {
      WriteToCache(this);
      lVar18 = FUN_05474184(this + 0x14d8);
    }
    PVar12 = (PIEffect)(lVar18 == 0);
    this[0x14e0] = PVar12;
    std::string::~string((string *)local_5d8);
    std::string::~string(asStack_5b0);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_4c8);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_528);
    std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_550);
    std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_578);
    std::string::~string(asStack_5b8);
    if (local_8 != ___stack_chk_guard) {
LAB_053da550:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(PVar12);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Sexy::PIEffect::LoadState(Sexy::Buffer const&, bool) */

void __thiscall Sexy::PIEffect::LoadState(PIEffect *this,Buffer *param_1,bool param_2)

{
  char cVar1;
  PIEmitterInstance PVar2;
  PIEffect PVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  PILayer *pPVar10;
  long lVar11;
  PIEmitterInstance *pPVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  PIParticleInstance *pPVar16;
  int *piVar17;
  undefined8 *puVar18;
  ulong uVar19;
  PIParticleDefInstance *pPVar20;
  PIParticleInstance *pPVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  undefined4 uVar26;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  string asStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar9 = FUN_05474184(this + 0x14d8);
  uVar22 = 0;
  if (lVar9 == 0) {
    ResetAnim(this);
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 7U & 0xfffffff8;
    iVar5 = Buffer::ReadInt32(param_1);
    iVar7 = *(int *)(param_1 + 0x24);
    iVar6 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    iVar5 = iVar5 + (iVar6 >> 3);
    sVar4 = Buffer::ReadInt16(param_1);
    if (param_2) {
      fVar25 = (float)Buffer::ReadFloat(param_1);
      *(float *)(this + 0x14e8) = fVar25;
      if (sVar4 == 0) {
        Buffer::ReadBoolean(param_1);
        SexyTransform2D::SexyTransform2D(aSStack_30);
        Buffer::ReadBytes(param_1,(uchar *)aSStack_30,0x24);
        Buffer::ReadBytes(param_1,(uchar *)aSStack_30,0x24);
        fVar25 = *(float *)(this + 0x14e8);
      }
    }
    else {
      Buffer::ReadString();
      if (this[0x14e0] == (PIEffect)0x0) {
        LoadEffect(this,asStack_38);
      }
      iVar6 = Buffer::ReadInt32(param_1);
      if (*(int *)(this + 0x38) != iVar6) {
        *(int *)(param_1 + 0x24) = iVar5 * 8;
        std::string::~string(asStack_38);
        uVar22 = 0;
        goto LAB_053da6dc;
      }
      std::string::~string(asStack_38);
      uVar26 = Buffer::ReadFloat(param_1);
      *(undefined4 *)(this + 0x14e8) = uVar26;
      Buffer::ReadString();
      MTRand::SRand((string *)(this + 0x58));
      std::string::~string(asStack_38);
      this[0x1570] = (PIEffect)0x0;
      PVar3 = (PIEffect)Buffer::ReadBoolean(param_1);
      this[0x1557] = PVar3;
      Buffer::ReadTransform2D();
      *(undefined4 *)(this + 0x15b8) = local_50;
      *(undefined8 *)(this + 0x1598) = local_70;
      *(undefined8 *)(this + 0x15a0) = uStack_68;
      *(undefined8 *)(this + 0x15a8) = local_60;
      *(undefined8 *)(this + 0x15b0) = uStack_58;
      Buffer::ReadTransform2D();
      *(undefined8 *)(this + 0x1574) = local_70;
      *(undefined8 *)(this + 0x157c) = uStack_68;
      *(undefined4 *)(this + 0x1594) = local_50;
      *(undefined8 *)(this + 0x1584) = local_60;
      *(undefined8 *)(this + 0x158c) = uStack_58;
      fVar25 = *(float *)(this + 0x14e8);
    }
    local_78 = 0;
    if (0.0 < fVar25) {
      uVar22 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
      iVar5 = FUN_053b9ba0(uVar22,*(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
      if (0 < iVar5) {
        do {
          lVar9 = 0;
          pPVar10 = (PILayer *)FUN_053b9bd4(*(undefined8 *)(this + 0x14c0),local_78);
          lVar11 = FUN_053b9bc8(uVar22,local_78);
          uVar22 = *(undefined8 *)(lVar11 + 8);
          iVar5 = FUN_053b9be4(uVar22,*(undefined8 *)(lVar11 + 0x10));
          if (0 < iVar5) {
            do {
              pPVar12 = (PIEmitterInstance *)FUN_053b9b34(*(undefined8 *)(pPVar10 + 8),lVar9);
              lVar13 = FUN_053b9c24(uVar22,lVar9);
              cVar1 = Buffer::ReadBoolean(param_1);
              if (cVar1 != '\0') {
                Buffer::ReadTransform2D();
                *(undefined8 *)(pPVar12 + 0xf0) = local_70;
                *(undefined8 *)(pPVar12 + 0xf8) = uStack_68;
                *(undefined8 *)(pPVar12 + 0x100) = local_60;
                *(undefined8 *)(pPVar12 + 0x108) = uStack_58;
                *(undefined4 *)(pPVar12 + 0x110) = local_50;
              }
              PVar2 = (PIEmitterInstance)Buffer::ReadBoolean(param_1);
              pPVar12[0x40] = PVar2;
              PVar2 = (PIEmitterInstance)Buffer::ReadBoolean(param_1);
              lVar23 = *(long *)(this + 0x14b8);
              pPVar12[0x41] = PVar2;
              plVar14 = (long *)FUN_053b9af8(*(undefined8 *)(lVar23 + 8),
                                             (long)*(int *)(lVar13 + 0xc));
              lVar15 = *plVar14;
              for (lVar23 = 0;
                  iVar5 = FUN_053b9c30(*(undefined8 *)(lVar15 + 0x1268),
                                       *(undefined8 *)(lVar15 + 0x1270)), (int)lVar23 < iVar5;
                  lVar23 = lVar23 + 1) {
                pPVar20 = (PIParticleDefInstance *)
                          FUN_053b9d98(*(undefined8 *)(pPVar12 + 0x80),lVar23);
                LoadParticleDefInstance(this,param_1,pPVar20);
              }
              for (lVar23 = 0;
                  iVar5 = FUN_053b9d08(*(undefined8 *)(lVar13 + 0x28),*(undefined8 *)(lVar13 + 0x30)
                                      ), (int)lVar23 < iVar5; lVar23 = lVar23 + 1) {
                pPVar20 = (PIParticleDefInstance *)
                          FUN_053b9d98(*(undefined8 *)(pPVar12 + 0x48),lVar23);
                LoadParticleDefInstance(this,param_1,pPVar20);
              }
              iVar5 = 0;
              iVar6 = Buffer::ReadInt32(param_1);
              if (0 < iVar6) {
                do {
                  pPVar16 = (PIParticleInstance *)
                            ObjectPool<Sexy::PIFreeEmitterInstance>::Alloc
                                      ((ObjectPool<Sexy::PIFreeEmitterInstance> *)(this + 0x1510));
                  sVar4 = Buffer::ReadInt16(param_1);
                  piVar17 = (int *)FUN_053b9d00(*(undefined8 *)(lVar13 + 0x28),(long)sVar4);
                  puVar18 = (undefined8 *)
                            FUN_053b9af8(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                                         (long)*piVar17);
                  *(undefined8 *)(pPVar16 + 0x78) = *puVar18;
                  *(int *)(pPVar16 + 0x80) = iVar5;
                  *(undefined8 *)(pPVar16 + 0x90) = 0;
                  *(undefined8 *)(pPVar16 + 8) = 0;
                  LoadParticle(this,param_1,pPVar10,pPVar16);
                  lVar24 = *(long *)(pPVar16 + 0x78);
                  uVar19 = FUN_053b9c30(*(undefined8 *)(lVar24 + 0x1268),
                                        *(undefined8 *)(lVar24 + 0x1270));
                  std::
                  vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>::
                  resize((vector<Sexy::PIParticleDefInstance,std::allocator<Sexy::PIParticleDefInstance>>
                          *)(pPVar16 + 0x120),uVar19);
                  for (lVar23 = 0;
                      iVar7 = FUN_053b9c30(*(undefined8 *)(lVar24 + 0x1268),
                                           *(undefined8 *)(lVar24 + 0x1270)), (int)lVar23 < iVar7;
                      lVar23 = lVar23 + 1) {
                    pPVar20 = (PIParticleDefInstance *)
                              FUN_053b9d98(*(undefined8 *)(pPVar16 + 0x120),lVar23);
                    LoadParticleDefInstance(this,param_1,pPVar20);
                  }
                  if (iVar5 < 1) {
                    *(PIParticleInstance **)(pPVar12 + 0x60) = pPVar16;
                  }
                  else {
                    puVar18 = *(undefined8 **)(pPVar12 + 0x68);
                    *puVar18 = pPVar16;
                    *(undefined8 **)(pPVar16 + 0x88) = puVar18;
                  }
                  *(PIParticleInstance **)(pPVar12 + 0x68) = pPVar16;
                  *(int *)(pPVar12 + 0x70) = *(int *)(pPVar12 + 0x70) + 1;
                  iVar7 = 0;
                  iVar8 = Buffer::ReadInt32(param_1);
                  if (0 < iVar8) {
                    do {
                      pPVar21 = (PIParticleInstance *)
                                ObjectPool<Sexy::PIParticleInstance>::Alloc
                                          ((ObjectPool<Sexy::PIParticleInstance> *)(this + 0x14f0));
                      *(undefined8 *)(pPVar21 + 0x78) = *(undefined8 *)(pPVar16 + 0x78);
                      *(PIParticleInstance **)(pPVar21 + 0x90) = pPVar16;
                      sVar4 = Buffer::ReadInt16(param_1);
                      uVar22 = FUN_053b9ca4(*(undefined8 *)(*(long *)(pPVar21 + 0x78) + 0x1268),
                                            (long)sVar4);
                      *(undefined8 *)(pPVar21 + 8) = uVar22;
                      uVar22 = FUN_053b9d98(*(undefined8 *)(pPVar16 + 0x120),(long)sVar4);
                      *(int *)(pPVar21 + 0x80) = iVar7;
                      *(undefined8 *)(pPVar21 + 0x10) = uVar22;
                      LoadParticle(this,param_1,pPVar10,pPVar21);
                      CalcParticleTransform
                                (this,pPVar10,pPVar12,*(PIEmitter **)(pPVar21 + 0x78),
                                 *(PIParticleDef **)(pPVar21 + 8),
                                 (PIParticleGroup *)(pPVar16 + 0x138),pPVar21);
                      if (iVar7 < 1) {
                        *(PIParticleInstance **)(pPVar16 + 0x138) = pPVar21;
                      }
                      else {
                        puVar18 = *(undefined8 **)(pPVar16 + 0x140);
                        *puVar18 = pPVar21;
                        *(undefined8 **)(pPVar21 + 0x88) = puVar18;
                      }
                      iVar7 = iVar7 + 1;
                      *(PIParticleInstance **)(pPVar16 + 0x140) = pPVar21;
                      *(int *)(pPVar16 + 0x148) = *(int *)(pPVar16 + 0x148) + 1;
                    } while (iVar7 != iVar8);
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 != iVar6);
              }
              iVar5 = 0;
              iVar6 = Buffer::ReadInt32(param_1);
              if (0 < iVar6) {
                do {
                  pPVar16 = (PIParticleInstance *)
                            ObjectPool<Sexy::PIParticleInstance>::Alloc
                                      ((ObjectPool<Sexy::PIParticleInstance> *)(this + 0x14f0));
                  *(long *)(pPVar16 + 0x78) = lVar15;
                  *(undefined8 *)(pPVar16 + 0x90) = 0;
                  sVar4 = Buffer::ReadInt16(param_1);
                  uVar22 = FUN_053b9ca4(*(undefined8 *)(*(long *)(pPVar16 + 0x78) + 0x1268),
                                        (long)sVar4);
                  *(undefined8 *)(pPVar16 + 8) = uVar22;
                  uVar22 = FUN_053b9d98(*(undefined8 *)(pPVar12 + 0x80),(long)sVar4);
                  *(int *)(pPVar16 + 0x80) = iVar5;
                  *(undefined8 *)(pPVar16 + 0x10) = uVar22;
                  LoadParticle(this,param_1,pPVar10,pPVar16);
                  CalcParticleTransform
                            (this,pPVar10,pPVar12,*(PIEmitter **)(pPVar16 + 0x78),
                             *(PIParticleDef **)(pPVar16 + 8),(PIParticleGroup *)(pPVar12 + 0x98),
                             pPVar16);
                  if (iVar5 < 1) {
                    *(PIParticleInstance **)(pPVar12 + 0x98) = pPVar16;
                  }
                  else {
                    puVar18 = *(undefined8 **)(pPVar12 + 0xa0);
                    *puVar18 = pPVar16;
                    *(undefined8 **)(pPVar16 + 0x88) = puVar18;
                  }
                  iVar5 = iVar5 + 1;
                  *(PIParticleInstance **)(pPVar12 + 0xa0) = pPVar16;
                  *(int *)(pPVar12 + 0xa8) = *(int *)(pPVar12 + 0xa8) + 1;
                } while (iVar5 != iVar6);
              }
              lVar9 = lVar9 + 1;
              uVar22 = *(undefined8 *)(lVar11 + 8);
              iVar5 = FUN_053b9be4(uVar22,*(undefined8 *)(lVar11 + 0x10));
            } while ((int)lVar9 < iVar5);
          }
          local_78 = local_78 + 1;
          uVar22 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
          iVar5 = FUN_053b9ba0(uVar22,*(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
        } while ((int)local_78 < iVar5);
      }
      uVar22 = 1;
      if (local_8 == ___stack_chk_guard) {
        return;
      }
      goto LAB_053dac00;
    }
    uVar22 = 1;
    *(int *)(param_1 + 0x24) = iVar5 * 8;
  }
LAB_053da6dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_053dac00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar22);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::Update() */

void __thiscall Sexy::PIEffect::Update(PIEffect *this)

{
  PIValue *pPVar1;
  FPoint *pFVar2;
  Buffer *this_00;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  PILayer *pPVar9;
  long lVar10;
  PIEmitterInstance *pPVar11;
  ulong uVar12;
  undefined8 *puVar13;
  PIFreeEmitterInstance *pPVar14;
  PIParticleDef *pPVar15;
  PIParticleDefInstance *pPVar16;
  undefined8 uVar17;
  int iVar18;
  long lVar19;
  PIEmitter *pPVar20;
  undefined8 uVar21;
  PIFreeEmitterInstance *pPVar22;
  long lVar23;
  uint uVar24;
  DVec2 *pDVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  float fVar33;
  long local_c0;
  long local_b8;
  int local_8c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  SexyMatrix3 aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  DVec2 aDStack_30 [8];
  DVec2 aDStack_28 [8];
  DVec2 aDStack_20 [8];
  DVec2 aDStack_18 [8];
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_05474184(this + 0x14d8);
  if (lVar6 == 0) {
    iVar5 = *(int *)(this + 0x14e4);
    *(uint *)(this + 0x14e4) = iVar5 + 1U;
    if ((*(float *)(this + 0x15bc) !=
         *(float *)(gSexyAppBase + 0x5cc) + *(float *)(gSexyAppBase + 0x5cc)) ||
       ((iVar5 + 1U & 1) != 0)) {
      bVar3 = *(float *)(this + 0x14e8) == 0.0;
      if (this[0x1570] != (PIEffect)0x0) {
        lVar6 = FUN_053b9d08(*(undefined8 *)(this + 0x1558),*(undefined8 *)(this + 0x1560));
        if (lVar6 == 0) {
          iVar5 = Rand();
          MTRand::SRand((MTRand *)(this + 0x58),(long)iVar5);
        }
        else {
          iVar5 = Rand();
          uVar21 = *(undefined8 *)(this + 0x1558);
          uVar7 = FUN_053b9d08(uVar21,*(undefined8 *)(this + 0x1560));
          uVar12 = 0;
          if (uVar7 != 0) {
            uVar12 = (ulong)(long)iVar5 / uVar7;
          }
          piVar8 = (int *)FUN_053b9d00(uVar21,(long)iVar5 - uVar12 * uVar7);
          MTRand::SRand((MTRand *)(this + 0x58),(long)*piVar8);
        }
        this[0x1570] = (PIEffect)0x0;
      }
      if (bVar3) {
        this_00 = (Buffer *)(this + 0x13f0);
        iVar5 = Buffer::GetDataLen(this_00);
        if (iVar5 != 0) {
          Buffer::SeekFront(this_00);
          LoadState(this,this_00,true);
          this[0x1570] = (PIEffect)0x0;
          goto LAB_053db8c8;
        }
      }
      fVar30 = *(float *)(this + 0x14e8);
      uVar21 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
      iVar5 = FUN_053b9ba0(uVar21,*(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
      do {
        *(undefined4 *)(this + 0x1538) = 0;
        *(undefined4 *)(this + 0x1534) = 0;
        iVar18 = (int)fVar30;
        fVar26 = 1000.0 / (*(float *)(this + 0x1540) * *(float *)(this + 0x15bc));
        if (bVar3) {
          fVar27 = 0.0001;
        }
        else {
          fVar27 = (float)*(int *)(this + 0x1470) / fVar26;
        }
        fVar30 = fVar30 + fVar27;
        local_b8 = 0;
        *(float *)(this + 0x14e8) = fVar30;
        this[0x14ec] = (PIEffect)((int)fVar30 != iVar18);
        if (0 < iVar5) {
          do {
            lVar6 = FUN_053b9bc8(uVar21,local_b8);
            pPVar1 = (PIValue *)(lVar6 + 0xd0);
            pPVar9 = (PILayer *)FUN_053b9bd4(*(undefined8 *)(this + 0x14c0),local_b8);
            PIValue2D::GetValueAt(fVar30);
            TPoint<float>::operator-((TPoint<float> *)&local_70,(TPoint *)(lVar6 + 200));
            FPoint::FPoint((FPoint *)&local_60,(TPoint *)&local_68);
            fVar30 = *(float *)(this + 0x14e8);
            *(undefined8 *)(pPVar9 + 0x20) = local_60;
            PIValue::GetValueAt(pPVar1,fVar30,0.0);
            fVar30 = (float)FUN_053b9a64();
            *(float *)(pPVar9 + 0x28) = -fVar30;
            if (pPVar9[0x2c] != (PILayer)0x0) {
              lVar23 = 0;
              uVar21 = *(undefined8 *)(lVar6 + 0x20);
              iVar5 = FUN_053b9cb4(uVar21,*(undefined8 *)(lVar6 + 0x28));
              if (0 < iVar5) {
                do {
                  lVar10 = FUN_053b9d48(uVar21,lVar23);
                  SexyTransform2D::SexyTransform2D((SexyTransform2D *)aSStack_58);
                  fVar30 = (float)PIValue::GetValueAt((PIValue *)(lVar10 + 0xe8),
                                                      *(float *)(this + 0x14e8),0.0);
                  if (fVar30 != 0.0) {
                    SexyTransform2D::RotateDeg((SexyTransform2D *)aSStack_58,fVar30);
                  }
                  PIValue2D::GetValueAt(*(float *)(this + 0x14e8));
                  FUN_053b9a94(local_78,local_74,auStack_50,auStack_44);
                  PIValue2D::GetValueAt(*(float *)(this + 0x14e8));
                  FUN_053b9a94(local_70,local_6c,auStack_50,auStack_44);
                  fVar30 = (float)PIValue::GetValueAt(pPVar1,*(float *)(this + 0x14e8),0.0);
                  if (fVar30 != 0.0) {
                    SexyTransform2D::RotateDeg((SexyTransform2D *)aSStack_58,fVar30);
                  }
                  SexyMatrix3::operator*((SexyMatrix3 *)(this + 0x1574),aSStack_58);
                  SexyTransform2D::operator=
                            ((SexyTransform2D *)aSStack_58,(SexyMatrix3 *)aDStack_30);
                  lVar19 = 0;
                  while( true ) {
                    uVar21 = *(undefined8 *)(lVar10 + 0x158);
                    iVar5 = FUN_053b9cd4(uVar21,*(undefined8 *)(lVar10 + 0x160));
                    if (iVar5 <= (int)lVar19) break;
                    puVar13 = (undefined8 *)FUN_053b9c64(*(undefined8 *)(lVar10 + 0x170),lVar19);
                    FUN_053b9ce8(uVar21,lVar19);
                    PIValue2D::GetValueAt(*(float *)(this + 0x14e8));
                    TransformFPoint(aSStack_58,(FPoint *)&local_68);
                    *puVar13 = local_60;
                    lVar19 = lVar19 + 1;
                  }
                  lVar23 = lVar23 + 1;
                  uVar21 = *(undefined8 *)(lVar6 + 0x20);
                  iVar5 = FUN_053b9cb4(uVar21,*(undefined8 *)(lVar6 + 0x28));
                } while ((int)lVar23 < iVar5);
              }
              lVar23 = 0;
              uVar21 = *(undefined8 *)(lVar6 + 0x50);
              iVar5 = FUN_053b9d1c(uVar21,*(undefined8 *)(lVar6 + 0x58));
              if (0 < iVar5) {
                do {
                  lVar10 = FUN_053b9d8c(uVar21,lVar23);
                  SexyTransform2D::SexyTransform2D((SexyTransform2D *)aSStack_58);
                  fVar30 = (float)PIValue::GetValueAt((PIValue *)(lVar10 + 0x230),
                                                      *(float *)(this + 0x14e8),0.0);
                  fVar27 = (float)PIValue::GetValueAt((PIValue *)(lVar10 + 0x2a0),
                                                      *(float *)(this + 0x14e8),0.0);
                  SexyTransform2D::Scale((SexyTransform2D *)aSStack_58,fVar30 * 0.5,fVar27 * 0.5);
                  fVar30 = (float)PIValue::GetValueAt((PIValue *)(lVar10 + 0x1c0),
                                                      *(float *)(this + 0x14e8),0.0);
                  if (fVar30 != 0.0) {
                    SexyTransform2D::RotateDeg((SexyTransform2D *)aSStack_58,fVar30);
                  }
                  PIValue2D::GetValueAt(*(float *)(this + 0x14e8));
                  FUN_053b9a94(local_70,local_6c,auStack_50,auStack_44);
                  PIValue2D::GetValueAt(*(float *)(this + 0x14e8));
                  FUN_053b9a94(local_68,local_64,auStack_50,auStack_44);
                  fVar30 = (float)PIValue::GetValueAt(pPVar1,*(float *)(this + 0x14e8),0.0);
                  if (fVar30 != 0.0) {
                    SexyTransform2D::RotateDeg((SexyTransform2D *)aSStack_58,fVar30);
                  }
                  SexyMatrix3::operator*((SexyMatrix3 *)(this + 0x1574),aSStack_58);
                  SexyTransform2D::operator=
                            ((SexyTransform2D *)aSStack_58,(SexyMatrix3 *)aDStack_30);
                  DVec2::DVec2(aDStack_30,-1.0,-1.0);
                  DVec2::DVec2(aDStack_28,1.0,-1.0);
                  DVec2::DVec2(aDStack_20,1.0,1.0);
                  DVec2::DVec2(aDStack_18,-1.0,1.0);
                  DVec2::DVec2(aDStack_10,0.0,0.0);
                  puVar13 = (undefined8 *)(lVar10 + 0x310);
                  pDVar25 = aDStack_30;
                  do {
                    pFVar2 = (FPoint *)(pDVar25 + 8);
                    TransformFPoint(aSStack_58,(FPoint *)pDVar25);
                    *puVar13 = local_60;
                    puVar13 = puVar13 + 1;
                    pDVar25 = (DVec2 *)pFVar2;
                  } while (pFVar2 != (FPoint *)&local_8);
                  lVar23 = lVar23 + 1;
                  uVar21 = *(undefined8 *)(lVar6 + 0x50);
                  iVar5 = FUN_053b9d1c(uVar21,*(undefined8 *)(lVar6 + 0x58));
                } while ((int)lVar23 < iVar5);
              }
              uVar21 = *(undefined8 *)(pPVar9 + 8);
              local_c0 = 0;
              iVar5 = FUN_053b9b14(uVar21,*(undefined8 *)(pPVar9 + 0x10));
              if (0 < iVar5) {
                do {
                  uVar32 = 0;
                  local_8c = 1;
                  lVar23 = FUN_053b9c24(*(undefined8 *)(lVar6 + 8),local_c0);
                  pPVar11 = (PIEmitterInstance *)FUN_053b9b34(uVar21,local_c0);
                  uVar12 = Color::ToInt((Color *)(pPVar11 + 0xd8));
                  fVar30 = *(float *)(this + 0x14e8);
                  *(ulong *)(pPVar11 + 0xb8) = uVar12 & 0xffffffff;
                  PIValue::GetValueAt((PIValue *)(lVar23 + 0x6c8),fVar30,0.0);
                  uVar28 = FUN_053b9a64();
                  *(undefined4 *)(lVar23 + 0x910) = uVar28;
                  uVar24 = uVar32;
LAB_053db3a0:
                  while (0 < local_8c) {
                    while( true ) {
                      if (pPVar11[0x120] == (PIEmitterInstance)0x0) goto LAB_053db64c;
                      pPVar1 = (PIValue *)(lVar23 + 0x658);
                      fVar30 = (float)PIValue::GetLastKeyframe(pPVar1,*(float *)(this + 0x14e8));
                      uVar24 = (uint)(0.99 < fVar30);
                      if (uVar24 == 0) {
                        local_8c = 0;
                      }
                      else {
                        local_8c = local_8c + -1;
                        if (pPVar11[0x40] == (PIEmitterInstance)0x0) {
                          local_8c = (int)((float)local_8c +
                                          (fVar26 * (float)*(int *)(lVar23 + 8)) /
                                          (float)*(int *)(this + 0x1470));
                        }
                      }
                      pPVar11[0x40] = (PIEmitterInstance)(0.99 < fVar30);
                      fVar30 = (float)PIValue::GetNextKeyframeTime(pPVar1,0.0);
                      fVar27 = (float)PIValue::GetLastKeyframeTime
                                                (pPVar1,(float)*(int *)(this + 0x1478) + 1.0);
                      fVar29 = (float)PIValue::GetLastKeyframe
                                                (pPVar1,(float)*(int *)(this + 0x1478) + 1.0);
                      fVar33 = *(float *)(this + 0x14e8);
                      if (((fVar30 <= fVar33) && ((fVar33 < fVar27 || (0.99 < fVar29)))) &&
                         ((this[0x1557] != (PIEffect)0x0 ||
                          (fVar33 < (float)*(int *)(this + 0x1478))))) break;
                      pPVar11[0x41] = (PIEmitterInstance)0x0;
                      cVar4 = *(char *)(lVar23 + 0x20);
                      if (uVar24 != 0) {
LAB_053db708:
                        uVar24 = 1;
                      }
                      if (cVar4 == '\0') goto LAB_053db748;
                      lVar10 = 0;
                      while( true ) {
                        uVar21 = *(undefined8 *)(lVar23 + 0x28);
                        iVar5 = FUN_053b9d08(uVar21,*(undefined8 *)(lVar23 + 0x30));
                        if (iVar5 <= (int)lVar10) break;
                        piVar8 = (int *)FUN_053b9d00(uVar21,lVar10);
                        puVar13 = (undefined8 *)
                                  FUN_053b9af8(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                                               (long)*piVar8);
                        pPVar20 = (PIEmitter *)*puVar13;
                        iVar5 = *(int *)(this + 0x1470);
                        fVar33 = 1000.0 / (*(float *)(this + 0x1540) * *(float *)(this + 0x15bc));
                        fVar30 = (float)FUN_053b9a64(1.0 / fVar33);
                        fVar27 = (float)PIValue::GetValueAt((PIValue *)(pPVar20 + 0x5b8),
                                                            *(float *)(this + 0x14e8),0.0);
                        fVar29 = *(float *)(this + 0x14e8);
                        *(float *)(pPVar20 + 0x1284) =
                             ((((float)iVar5 + -100.0) * 0.0005 + 1.0) / fVar33) * 100.0 * fVar27;
                        fVar27 = (float)PIValue::GetValueAt((PIValue *)(pPVar20 + 0x628),fVar29,0.0)
                        ;
                        fVar29 = *(float *)(this + 0x14e8);
                        *(float *)(pPVar20 + 0x1288) = -(fVar30 * fVar27);
                        uVar28 = PIValue::GetValueAt((PIValue *)(pPVar20 + 0x698),fVar29,0.0);
                        uVar21 = *(undefined8 *)(pPVar11 + 0x48);
                        *(undefined4 *)(pPVar20 + 0x128c) = uVar28;
                        pPVar16 = (PIParticleDefInstance *)FUN_053b9d98(uVar21,lVar10);
                        UpdateParticleDef(this,pPVar9,pPVar20,pPVar11,(PIParticleDef *)0x0,pPVar16,
                                          (PIParticleGroup *)(pPVar11 + 0x60),
                                          (PIFreeEmitterInstance *)0x0);
                        lVar10 = lVar10 + 1;
                      }
                      UpdateParticleGroup(this,pPVar9,pPVar11,(PIParticleGroup *)(pPVar11 + 0x60));
                      if (*(PIFreeEmitterInstance **)(pPVar11 + 0x60) ==
                          (PIFreeEmitterInstance *)0x0) goto LAB_053db874;
                      uVar32 = 0;
                      pPVar22 = *(PIFreeEmitterInstance **)(pPVar11 + 0x60);
                      do {
                        pPVar14 = *(PIFreeEmitterInstance **)pPVar22;
                        pPVar20 = *(PIEmitter **)(pPVar22 + 0x78);
                        lVar10 = 0;
                        while( true ) {
                          uVar21 = *(undefined8 *)(pPVar20 + 0x1268);
                          iVar5 = FUN_053b9c30(uVar21,*(undefined8 *)(pPVar20 + 0x1270));
                          if (iVar5 <= (int)lVar10) break;
                          pPVar15 = (PIParticleDef *)FUN_053b9ca4(uVar21,lVar10);
                          pPVar16 = (PIParticleDefInstance *)
                                    FUN_053b9d98(*(undefined8 *)(pPVar22 + 0x120),lVar10);
                          UpdateParticleDef(this,pPVar9,pPVar20,pPVar11,pPVar15,pPVar16,
                                            (PIParticleGroup *)(pPVar22 + 0x138),pPVar22);
                          lVar10 = lVar10 + 1;
                        }
                        uVar24 = uVar24 + 1;
                        UpdateParticleGroup(this,pPVar9,pPVar11,(PIParticleGroup *)(pPVar22 + 0x138)
                                           );
                        uVar32 = uVar32 + *(int *)(pPVar22 + 0x148);
                        pPVar22 = pPVar14;
                      } while (pPVar14 != (PIFreeEmitterInstance *)0x0);
                      if (local_8c < 1) goto LAB_053db64c;
                    }
                    pPVar11[0x41] = (PIEmitterInstance)0x1;
                    cVar4 = *(char *)(lVar23 + 0x20);
                    if ((uVar24 != 0) || (cVar4 != '\0')) goto LAB_053db708;
LAB_053db748:
                    puVar13 = (undefined8 *)
                              FUN_053b9af8(*(undefined8 *)(*(long *)(this + 0x14b8) + 8),
                                           (long)*(int *)(lVar23 + 0xc));
                    pPVar20 = (PIEmitter *)*puVar13;
                    iVar5 = *(int *)(this + 0x1470);
                    fVar31 = 1000.0 / (*(float *)(this + 0x1540) * *(float *)(this + 0x15bc));
                    fVar30 = (float)FUN_053b9a64(1.0 / fVar31);
                    fVar27 = (float)PIValue::GetValueAt((PIValue *)
                                                        (*(long *)(pPVar11 + 0x38) + 0x268),fVar33,
                                                        0.0);
                    lVar10 = *(long *)(pPVar11 + 0x38);
                    fVar29 = *(float *)(this + 0x14e8);
                    *(float *)(pPVar20 + 0x1284) =
                         ((((float)iVar5 + -100.0) * 0.0005 + 1.0) / fVar31) * 100.0 * fVar27;
                    fVar27 = (float)PIValue::GetValueAt((PIValue *)(lVar10 + 0x2d8),fVar29,0.0);
                    lVar10 = *(long *)(pPVar11 + 0x38);
                    fVar29 = *(float *)(this + 0x14e8);
                    *(float *)(pPVar20 + 0x1288) = -(fVar30 * fVar27);
                    uVar28 = PIValue::GetValueAt((PIValue *)(lVar10 + 0x348),fVar29,0.0);
                    *(undefined4 *)(pPVar20 + 0x128c) = uVar28;
                    lVar10 = 0;
                    while( true ) {
                      uVar21 = *(undefined8 *)(pPVar20 + 0x1268);
                      iVar5 = FUN_053b9c30(uVar21,*(undefined8 *)(pPVar20 + 0x1270));
                      if (iVar5 <= (int)lVar10) break;
                      pPVar15 = (PIParticleDef *)FUN_053b9ca4(uVar21,lVar10);
                      pPVar16 = (PIParticleDefInstance *)
                                FUN_053b9d98(*(undefined8 *)(pPVar11 + 0x80),lVar10);
                      UpdateParticleDef(this,pPVar9,pPVar20,pPVar11,pPVar15,pPVar16,
                                        (PIParticleGroup *)(pPVar11 + 0x98),
                                        (PIFreeEmitterInstance *)0x0);
                      lVar10 = lVar10 + 1;
                    }
                    UpdateParticleGroup(this,pPVar9,pPVar11,(PIParticleGroup *)(pPVar11 + 0x98));
                    uVar32 = *(uint *)(pPVar11 + 0xa8);
                  }
LAB_053db64c:
                  uVar21 = *(undefined8 *)(pPVar9 + 8);
                  local_c0 = local_c0 + 1;
                  *(uint *)(this + 0x1538) = *(int *)(this + 0x1538) + uVar24;
                  uVar17 = *(undefined8 *)(pPVar9 + 0x10);
                  *(uint *)(this + 0x1534) = *(int *)(this + 0x1534) + uVar32;
                  iVar5 = FUN_053b9b14(uVar21,uVar17);
                  if (iVar5 <= (int)local_c0) break;
                } while( true );
              }
            }
            fVar30 = *(float *)(this + 0x14e8);
            local_b8 = local_b8 + 1;
            uVar21 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
            iVar5 = FUN_053b9ba0(uVar21,*(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
          } while ((int)local_b8 < iVar5);
        }
        bVar3 = false;
      } while (fVar30 < (float)*(int *)(this + 0x1474));
    }
  }
LAB_053db8c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_053db874:
  uVar32 = 0;
  goto LAB_053db3a0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::WriteImage(std::string const&, int, Sexy::DeviceImage*, bool*) */

void __thiscall
Sexy::PIEffect::WriteImage
          (PIEffect *this,string *param_1,int param_2,DeviceImage *param_3,bool *param_4)

{
  int iVar1;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_054743b0(this + 0x50,0x2e,0);
  FUN_05475ffc(asStack_38,this + 0x50,0,(long)iVar1);
  StrFormat("_%d_",asStack_30,(ulong)(uint)param_2);
  std::operator+(asStack_30,param_1);
  thunk_FUN_054757c0(asStack_38,asStack_28);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  ImageLib::Image::Image((Image *)asStack_28);
  local_20 = *(undefined4 *)(param_3 + 0x38);
  local_1c = *(undefined4 *)(param_3 + 0x3c);
  local_18 = (**(code **)(*(long *)param_3 + 0xd0))(param_3,0,0,0,0);
  std::operator+(asStack_38,".png");
  ImageLib::WritePNGImage(asStack_30,(Image *)asStack_28,0);
  std::string::~string(asStack_30);
  local_18 = 0;
  GetFileName(asStack_38,false);
  ImageLib::Image::~Image((Image *)asStack_28);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PIEffect::SaveAsPPF(std::string const&, bool) */

void __thiscall Sexy::PIEffect::SaveAsPPF(PIEffect *this,string *param_1,bool param_2)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  PIValue *pPVar4;
  bool bVar5;
  undefined1 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  char *__filename;
  FILE *pFVar10;
  long *plVar11;
  RtMixedPtr *pRVar12;
  Image *pIVar13;
  DeviceImage *pDVar14;
  long lVar15;
  RtObject *pRVar16;
  undefined8 *puVar17;
  string *psVar18;
  string *psVar19;
  long lVar20;
  undefined4 *puVar21;
  PIValue2D *pPVar22;
  int *piVar23;
  void *__ptr;
  long lVar24;
  int iVar25;
  code *pcVar26;
  int iVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  string *psVar31;
  ulong uVar32;
  bool local_e5;
  int local_e4;
  int local_e0 [2];
  string asStack_d8 [8];
  string asStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05474ff8(this + 0x14d8);
  thunk_FUN_05475e00(this + 0x50,param_1);
  __filename = (char *)FUN_0547429c(param_1);
  pFVar10 = fopen(__filename,"wb");
  *(FILE **)(this + 0x30) = pFVar10;
  if (pFVar10 == (FILE *)0x0) {
    FUN_031f5e7c(asStack_d0,"Unable to create file: ",param_1);
    uVar6 = Fail(this,asStack_d0);
    std::string::~string(asStack_d0);
    if (local_8 != ___stack_chk_guard) goto LAB_053dcb38;
  }
  else {
    uVar32 = 0;
    std::string::string(asStack_d0,"PPF1");
    WriteString(this,asStack_d0);
    std::string::~string(asStack_d0);
    nop();
    WriteInt(this,1);
    WriteString(this,(string *)(this + 0x1430));
    sVar7 = FUN_053b9b00(*(undefined8 *)(*(long *)(this + 0x14b8) + 0x20),
                         *(undefined8 *)(*(long *)(this + 0x14b8) + 0x28));
    WriteShort(this,sVar7);
    while( true ) {
      lVar29 = *(long *)(this + 0x14b8);
      iVar9 = (int)uVar32;
      uVar28 = *(undefined8 *)(lVar29 + 0x20);
      iVar8 = FUN_053b9b00(uVar28,*(undefined8 *)(lVar29 + 0x28));
      if (iVar8 <= iVar9) break;
      plVar11 = (long *)FUN_053b9b0c(uVar28,uVar32);
      lVar30 = *plVar11;
      local_e5 = false;
      Set8BytesTo0(asStack_d8);
      uVar28 = *(undefined8 *)(lVar30 + 0x20);
      lVar29 = FUN_053b9d3c(uVar28,*(undefined8 *)(lVar30 + 0x28));
      if (lVar29 == 0) {
        lVar29 = RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar30 + 0x38));
        sVar7 = (short)*(undefined4 *)(lVar29 + 0x40);
        pcVar26 = *(code **)(*(long *)this + 0x58);
        pRVar16 = (RtObject *)
                  RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar30 + 0x38));
        pDVar14 = RtObject::Cast<Sexy::DeviceImage>(pRVar16);
LAB_053dbf3c:
        (*pcVar26)(asStack_d0,this,lVar30 + 0x18,uVar32 & 0xffffffff,pDVar14,&local_e5);
        FUN_05474278(asStack_d8,asStack_d0);
        std::string::~string(asStack_d0);
      }
      else {
        if (lVar29 == 1) {
          sVar7 = 1;
          pcVar26 = *(code **)(*(long *)this + 0x58);
          pRVar12 = (RtMixedPtr *)FUN_053b9c6c(uVar28,0);
          pIVar13 = RtMixedPtr::operator_cast_to_Image_(pRVar12);
          pDVar14 = RtObject::Cast<Sexy::DeviceImage>((RtObject *)pIVar13);
          goto LAB_053dbf3c;
        }
        if ((this[0x3d] != (PIEffect)0x0) && (0 < *(int *)(lVar30 + 0x40))) {
          lVar29 = 0;
          while( true ) {
            pRVar12 = (RtMixedPtr *)FUN_053b9c6c(uVar28,lVar29);
            pIVar13 = RtMixedPtr::operator_cast_to_Image_(pRVar12);
            pDVar14 = RtObject::Cast<Sexy::DeviceImage>((RtObject *)pIVar13);
            lVar15 = (**(code **)(*(long *)pDVar14 + 0xd0))(pDVar14,0,0,0,0);
            iVar9 = *(int *)(pDVar14 + 0x38);
            iVar8 = *(int *)(pDVar14 + 0x3c);
            if (0 < iVar9) {
              lVar24 = 0;
              do {
                lVar20 = lVar24 * 4;
                lVar2 = lVar24 * 4;
                lVar24 = lVar24 + 1;
                local_e5 = (bool)(local_e5 |
                                 ((*(uint *)(lVar15 + (long)(iVar9 * (iVar8 + -1)) * 4 + lVar20) &
                                  0xff000000) != 0 || (*(uint *)(lVar15 + lVar2) & 0xff000000) != 0)
                                 );
              } while ((int)lVar24 < iVar9);
            }
            if (2 < iVar8) {
              iVar25 = 1;
              lVar15 = lVar15 + (long)(iVar9 << 1) * 4;
              do {
                puVar1 = (uint *)(lVar15 + -4);
                iVar25 = iVar25 + 1;
                puVar3 = (uint *)(lVar15 + ((long)iVar9 - (long)(iVar9 << 1)) * 4);
                lVar15 = lVar15 + (long)iVar9 * 4;
                local_e5 = (bool)(local_e5 |
                                 ((*puVar1 & 0xff000000) != 0 || (*puVar3 & 0xff000000) != 0));
              } while (iVar25 != iVar8 + -1);
            }
            iVar9 = (int)lVar29;
            lVar29 = lVar29 + 1;
            if (*(int *)(lVar30 + 0x40) <= iVar9 + 1) break;
            uVar28 = *(undefined8 *)(lVar30 + 0x20);
          }
          uVar28 = *(undefined8 *)(lVar30 + 0x20);
        }
        bVar5 = local_e5;
        lVar29 = 0;
        pRVar12 = (RtMixedPtr *)FUN_053b9c6c(uVar28);
        iVar8 = (uint)bVar5 * 2;
        pIVar13 = RtMixedPtr::operator_cast_to_Image_(pRVar12);
        iVar9 = iVar8 + *(int *)(pIVar13 + 0x38);
        pRVar12 = (RtMixedPtr *)FUN_053b9c6c(*(undefined8 *)(lVar30 + 0x20),0);
        pIVar13 = RtMixedPtr::operator_cast_to_Image_(pRVar12);
        local_e4 = *(int *)(lVar30 + 0x40);
        iVar8 = iVar8 + *(int *)(pIVar13 + 0x3c);
        local_e0[0] = 1;
        FUN_053bdb44(local_e4,iVar9,iVar8,&local_e4,local_e0);
        pDVar14 = ::operator_new(0x160);
        DeviceImage::DeviceImage(pDVar14);
        (**(code **)(*(long *)pDVar14 + 200))(pDVar14,iVar9 * local_e4,iVar8 * local_e0[0]);
        (**(code **)(*(long *)pDVar14 + 0x130))(pDVar14,1,1);
        Graphics::Graphics((Graphics *)asStack_d0,(Image *)pDVar14);
        if (0 < *(int *)(lVar30 + 0x40)) {
          do {
            pRVar12 = (RtMixedPtr *)FUN_053b9c6c(*(undefined8 *)(lVar30 + 0x20),lVar29);
            pIVar13 = RtMixedPtr::operator_cast_to_Image_(pRVar12);
            iVar25 = 0;
            iVar27 = (int)lVar29;
            if (local_e4 != 0) {
              iVar25 = iVar27 / local_e4;
            }
            Graphics::DrawImage((Graphics *)asStack_d0,pIVar13,
                                (uint)bVar5 + (iVar27 - iVar25 * local_e4) * iVar9,
                                (uint)bVar5 + iVar25 * iVar8);
            lVar29 = lVar29 + 1;
          } while (iVar27 + 1 < *(int *)(lVar30 + 0x40));
        }
        Graphics::~Graphics((Graphics *)asStack_d0);
        iVar9 = local_e0[0];
        lVar29 = *(long *)this;
        *(int *)(pDVar14 + 0x44) = local_e4;
        pcVar26 = *(code **)(lVar29 + 0x58);
        *(int *)(pDVar14 + 0x40) = local_e0[0];
        (*pcVar26)(asStack_d0,this,lVar30 + 0x18,uVar32 & 0xffffffff,pDVar14,&local_e5);
        sVar7 = (short)iVar9;
        FUN_05474278(asStack_d8,asStack_d0);
        std::string::~string(asStack_d0);
        (**(code **)(*(long *)pDVar14 + 0x18))(pDVar14);
      }
      uVar32 = uVar32 + 1;
      WriteString(this,(string *)(lVar30 + 0x18));
      WriteShort(this,*(short *)(lVar30 + 0x40));
      WriteShort(this,sVar7);
      WriteBool(this,local_e5);
      WriteString(this,asStack_d8);
      std::string::~string(asStack_d8);
    }
    sVar7 = FUN_053b9aec(*(undefined8 *)(lVar29 + 8),*(undefined8 *)(lVar29 + 0x10));
    WriteShort(this,sVar7);
    lVar29 = 0;
    while( true ) {
      lVar30 = *(long *)(this + 0x14b8);
      uVar28 = *(undefined8 *)(lVar30 + 8);
      iVar8 = FUN_053b9aec(uVar28,*(undefined8 *)(lVar30 + 0x10));
      if (iVar8 <= (int)lVar29) break;
      puVar17 = (undefined8 *)FUN_053b9af8(uVar28,lVar29);
      WriteEmitterType(this,(PIEmitter *)*puVar17);
      lVar29 = lVar29 + 1;
    }
    lVar29 = 0;
    sVar7 = FUN_053b9ba0(*(undefined8 *)(lVar30 + 0x38),*(undefined8 *)(lVar30 + 0x40),local_e0);
    WriteShort(this,sVar7);
    uVar28 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
    iVar8 = FUN_053b9ba0(uVar28,*(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
    if (0 < iVar8) {
      do {
        lVar30 = 0;
        psVar18 = (string *)FUN_053b9bc8(uVar28,lVar29);
        lVar15 = FUN_053b9bd4(*(undefined8 *)(this + 0x14c0),lVar29);
        WriteString(this,psVar18);
        sVar7 = FUN_053b9be4(*(undefined8 *)(psVar18 + 8),*(undefined8 *)(psVar18 + 0x10));
        WriteShort(this,sVar7);
        uVar28 = *(undefined8 *)(psVar18 + 8);
        iVar8 = FUN_053b9be4(uVar28,*(undefined8 *)(psVar18 + 0x10));
        if (0 < iVar8) {
          do {
            psVar19 = (string *)FUN_053b9c24(uVar28,lVar30);
            lVar20 = FUN_053b9b34(*(undefined8 *)(lVar15 + 8),lVar30);
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            WriteInt(this,0);
            WriteInt(this,0);
            WriteInt(this,*(int *)(psVar19 + 8));
            WriteInt(this,0);
            WriteString(this,psVar19);
            WriteInt(this,*(int *)(psVar19 + 0x10));
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            WriteBool(this,*(int *)(psVar19 + 0x10) == 4);
            WriteBool(this,(bool)psVar19[0x14]);
            WriteBool(this,(bool)psVar19[0x15]);
            WriteInt(this,*(int *)(lVar20 + 0xd8));
            WriteInt(this,*(int *)(lVar20 + 0xdc));
            WriteInt(this,*(int *)(lVar20 + 0xe0));
            WriteInt(this,0);
            WriteInt(this,*(int *)(psVar19 + 0x18));
            WriteInt(this,*(int *)(psVar19 + 0xc));
            WriteValue2D(this,(PIValue2D *)(psVar19 + 0x48));
            sVar7 = FUN_053b9cd4(*(undefined8 *)(psVar19 + 0x8f8),*(undefined8 *)(psVar19 + 0x900));
            WriteShort(this,sVar7);
            for (lVar24 = 0;
                iVar8 = FUN_053b9cd4(*(undefined8 *)(psVar19 + 0x8f8),
                                     *(undefined8 *)(psVar19 + 0x900)), (int)lVar24 < iVar8;
                lVar24 = lVar24 + 1) {
              WriteFloat(this,0.0);
              WriteFloat(this,0.0);
              pPVar22 = (PIValue2D *)FUN_053b9ce8(*(undefined8 *)(psVar19 + 0x8f8),lVar24);
              WriteEPoint(this,pPVar22);
            }
            psVar31 = psVar19 + 0xa8;
            do {
              pPVar4 = (PIValue *)(psVar31 + 0x70);
              WriteValue(this,(PIValue *)psVar31);
              psVar31 = (string *)pPVar4;
            } while (pPVar4 != (PIValue *)(psVar19 + 0x818));
            WriteInt(this,*(int *)(psVar19 + 0x1c));
            WriteInt(this,0);
            WriteValue(this,pPVar4);
            WriteInt(this,0);
            WriteValue(this,(PIValue *)(psVar19 + 0x888));
            pRVar16 = (RtObject *)
                      RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar20 + 0xe8));
            pDVar14 = RtObject::Cast<Sexy::DeviceImage>(pRVar16);
            if (pDVar14 == (DeviceImage *)0x0) {
              WriteShort(this,0);
              WriteBool(this,false);
              std::string::string(asStack_d0,"empty");
              WriteString(this,asStack_d0);
              std::string::~string(asStack_d0);
              nop();
            }
            else {
              WriteShort(this,1);
              (**(code **)(*(long *)this + 0x58))(asStack_d8,this,psVar19,iVar9,pDVar14,0);
              WriteString(this,asStack_d8);
              WriteBool(this,true);
              std::string::string(asStack_d0,"");
              WriteString(this,asStack_d0);
              std::string::~string(asStack_d0);
              nop();
              std::string::~string(asStack_d8);
              iVar9 = iVar9 + 1;
            }
            WriteInt(this,0);
            WriteInt(this,0);
            WriteBool(this,(bool)psVar19[0x40]);
            WriteInt(this,0);
            WriteInt(this,0);
            WriteBool(this,(bool)psVar19[0x20]);
            sVar7 = FUN_053b9d08(*(undefined8 *)(psVar19 + 0x28),*(undefined8 *)(psVar19 + 0x30));
            WriteShort(this,sVar7);
            lVar24 = 0;
            while( true ) {
              uVar28 = *(undefined8 *)(psVar19 + 0x28);
              iVar8 = FUN_053b9d08(uVar28,*(undefined8 *)(psVar19 + 0x30));
              if (iVar8 <= (int)lVar24) break;
              puVar21 = (undefined4 *)FUN_053b9d00(uVar28,lVar24);
              WriteShort(this,(short)*puVar21);
              lVar24 = lVar24 + 1;
            }
            lVar30 = lVar30 + 1;
            WriteInt(this,0);
            WriteFloat(this,0.0);
            WriteFloat(this,0.0);
            uVar28 = *(undefined8 *)(psVar18 + 8);
            iVar8 = FUN_053b9be4(uVar28,*(undefined8 *)(psVar18 + 0x10));
          } while ((int)lVar30 < iVar8);
        }
        lVar30 = 0;
        sVar7 = FUN_053b9cb4(*(undefined8 *)(psVar18 + 0x20),*(undefined8 *)(psVar18 + 0x28));
        WriteShort(this,sVar7);
        uVar28 = *(undefined8 *)(psVar18 + 0x20);
        iVar8 = FUN_053b9cb4(uVar28,*(undefined8 *)(psVar18 + 0x28));
        if (0 < iVar8) {
          do {
            psVar19 = (string *)FUN_053b9d48(uVar28,lVar30);
            WriteString(this,psVar19);
            WriteFloat(this,*(float *)(psVar19 + 8));
            WriteFloat(this,*(float *)(psVar19 + 0xc));
            WriteFloat(this,*(float *)(psVar19 + 0x10));
            WriteBool(this,(bool)psVar19[0x14]);
            WriteValue2D(this,(PIValue2D *)(psVar19 + 0x18));
            sVar7 = FUN_053b9cd4(*(undefined8 *)(psVar19 + 0x158),*(undefined8 *)(psVar19 + 0x160));
            WriteShort(this,sVar7);
            for (lVar15 = 0;
                iVar8 = FUN_053b9cd4(*(undefined8 *)(psVar19 + 0x158),
                                     *(undefined8 *)(psVar19 + 0x160)), (int)lVar15 < iVar8;
                lVar15 = lVar15 + 1) {
              WriteFloat(this,0.0);
              WriteFloat(this,0.0);
              pPVar22 = (PIValue2D *)FUN_053b9ce8(*(undefined8 *)(psVar19 + 0x158),lVar15);
              WriteEPoint(this,pPVar22);
            }
            lVar30 = lVar30 + 1;
            WriteValue(this,(PIValue *)(psVar19 + 0x78));
            WriteValue(this,(PIValue *)(psVar19 + 0xe8));
            uVar28 = *(undefined8 *)(psVar18 + 0x20);
            iVar8 = FUN_053b9cb4(uVar28,*(undefined8 *)(psVar18 + 0x28));
          } while ((int)lVar30 < iVar8);
        }
        lVar30 = 0;
        sVar7 = FUN_053b9d58(*(undefined8 *)(psVar18 + 0x38),*(undefined8 *)(psVar18 + 0x40));
        WriteShort(this,sVar7);
        uVar28 = *(undefined8 *)(psVar18 + 0x38);
        iVar8 = FUN_053b9d58(uVar28,*(undefined8 *)(psVar18 + 0x40));
        if (0 < iVar8) {
          do {
            psVar19 = (string *)FUN_053b9d78(uVar28,lVar30);
            WriteString(this,psVar19);
            WriteInt(this,0);
            WriteInt(this,0);
            WriteInt(this,0);
            WriteInt(this,0);
            WriteInt(this,0);
            WriteValue2D(this,(PIValue2D *)(psVar19 + 0x10));
            sVar7 = FUN_053b9cd4(*(undefined8 *)(psVar19 + 0x150),*(undefined8 *)(psVar19 + 0x158));
            WriteShort(this,sVar7);
            for (lVar15 = 0;
                iVar8 = FUN_053b9cd4(*(undefined8 *)(psVar19 + 0x150),
                                     *(undefined8 *)(psVar19 + 0x158)), (int)lVar15 < iVar8;
                lVar15 = lVar15 + 1) {
              WriteFloat(this,0.0);
              WriteFloat(this,0.0);
              pPVar22 = (PIValue2D *)FUN_053b9ce8(*(undefined8 *)(psVar19 + 0x150),lVar15);
              WriteEPoint(this,pPVar22);
            }
            lVar30 = lVar30 + 1;
            WriteValue(this,(PIValue *)(psVar19 + 0x70));
            WriteValue(this,(PIValue *)(psVar19 + 0xe0));
            uVar28 = *(undefined8 *)(psVar18 + 0x38);
            iVar8 = FUN_053b9d58(uVar28,*(undefined8 *)(psVar18 + 0x40));
          } while ((int)lVar30 < iVar8);
        }
        iVar8 = 0x20;
        WriteValue2D(this,(PIValue2D *)(psVar18 + 0x68));
        WriteValue(this,(PIValue *)(psVar18 + 0xd0));
        std::string::string(asStack_d0,"");
        WriteString(this,asStack_d0);
        std::string::~string(asStack_d0);
        nop();
        do {
          WriteByte(this,'\0');
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar8 = 0x24;
        WriteShort(this,0);
        do {
          WriteByte(this,'\0');
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        sVar7 = FUN_053b9d1c(*(undefined8 *)(psVar18 + 0x50),*(undefined8 *)(psVar18 + 0x58));
        WriteShort(this,sVar7);
        lVar30 = 0;
        while( true ) {
          uVar28 = *(undefined8 *)(psVar18 + 0x50);
          iVar8 = FUN_053b9d1c(uVar28,*(undefined8 *)(psVar18 + 0x58));
          if (iVar8 <= (int)lVar30) break;
          psVar19 = (string *)FUN_053b9d8c(uVar28,lVar30);
          WriteString(this,psVar19);
          WriteBool(this,(bool)psVar19[8]);
          WriteValue2D(this,(PIValue2D *)(psVar19 + 0x10));
          WriteValue(this,(PIValue *)(psVar19 + 0x150));
          WriteValue(this,(PIValue *)(psVar19 + 0x230));
          WriteValue(this,(PIValue *)(psVar19 + 0x70));
          WriteValue(this,(PIValue *)(psVar19 + 0x230));
          WriteValue(this,(PIValue *)(psVar19 + 0x2a0));
          WriteValue(this,(PIValue *)(psVar19 + 0x1c0));
          WriteValue(this,(PIValue *)(psVar19 + 0xe0));
          lVar30 = lVar30 + 1;
        }
        iVar8 = 0x1c;
        do {
          WriteByte(this,'\0');
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        uVar28 = *(undefined8 *)(*(long *)(this + 0x14b8) + 0x38);
        lVar29 = lVar29 + 1;
        iVar8 = FUN_053b9ba0(uVar28,*(undefined8 *)(*(long *)(this + 0x14b8) + 0x40));
      } while ((int)lVar29 < iVar8);
    }
    WriteInt(this,*(int *)(this + 0x1460));
    WriteInt(this,*(int *)(this + 0x1464));
    WriteInt(this,*(int *)(this + 0x1468));
    WriteInt(this,0);
    WriteInt(this,0);
    WriteShort(this,*(short *)(this + 0x1470));
    WriteShort(this,0);
    WriteShort(this,0);
    WriteShort(this,0);
    WriteInt(this,*(int *)(this + 0x1458));
    WriteInt(this,*(int *)(this + 0x145c));
    WriteInt(this,0);
    WriteInt(this,0);
    WriteInt(this,0);
    WriteInt(this,0);
    WriteInt(this,0);
    WriteInt(this,*(int *)(this + 0x1474));
    WriteInt(this,*(int *)(this + 0x1478));
    std::string::string(asStack_d0,"");
    WriteString(this,asStack_d0);
    std::string::~string(asStack_d0);
    nop();
    WriteByte(this,'\0');
    WriteShort(this,0);
    WriteShort(this,0);
    ResetAnim(this);
    uVar28 = *(undefined8 *)(this + 0x1558);
    lVar29 = FUN_053b9d08(uVar28,*(undefined8 *)(this + 0x1560));
    if (lVar29 == 0) {
      MTRand::SRand((MTRand *)(this + 0x58),0);
    }
    else {
      piVar23 = (int *)FUN_053b9d00(uVar28,0);
      MTRand::SRand((MTRand *)(this + 0x58),(long)*piVar23);
    }
    this[0x1570] = (PIEffect)0x0;
    if (param_2) {
      Update(this);
      Buffer::Buffer((Buffer *)asStack_d0);
      SaveState(this,(Buffer *)asStack_d0,true);
      iVar9 = Buffer::GetDataLen((Buffer *)asStack_d0);
      WriteInt(this,iVar9);
      __ptr = (void *)Buffer::GetDataPtr((Buffer *)asStack_d0);
      iVar9 = Buffer::GetDataLen((Buffer *)asStack_d0);
      fwrite(__ptr,1,(long)iVar9,*(FILE **)(this + 0x30));
      Buffer::~Buffer((Buffer *)asStack_d0);
    }
    else {
      WriteInt(this,0);
    }
    fclose(*(FILE **)(this + 0x30));
    uVar6 = 1;
    if (local_8 != ___stack_chk_guard) {
LAB_053dcb38:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar6);
    }
  }
  return;
}

