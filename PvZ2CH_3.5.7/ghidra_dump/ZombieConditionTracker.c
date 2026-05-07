// Class: ZombieConditionTracker


/* ZombieConditionTracker::~ZombieConditionTracker() */

void __thiscall ZombieConditionTracker::~ZombieConditionTracker(ZombieConditionTracker *this)

{
  *(undefined ***)this = &PTR__ZombieConditionTracker_068a13b0;
  EntityConditionTracker<Zombie,ZombieConditions>::~EntityConditionTracker
            ((EntityConditionTracker<Zombie,ZombieConditions> *)this);
  return;
}


/* ZombieConditionTracker::~ZombieConditionTracker() */

void __thiscall ZombieConditionTracker::~ZombieConditionTracker(ZombieConditionTracker *this)

{
  ~ZombieConditionTracker(this);
  AK::FreeHook(this);
  return;
}


/* ZombieConditionTracker::getConditionMaxCount() const */

undefined8 ZombieConditionTracker::getConditionMaxCount(void)

{
  return 0x9b;
}


/* ZombieConditionTracker::SetAdditionalValue(ZombieConditions, float) */

void __thiscall
ZombieConditionTracker::SetAdditionalValue
          (undefined4 param_1,ZombieConditionTracker *this,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_0468dbbc(*(undefined8 *)(this + 0x20),(long)param_3);
  *(undefined4 *)(lVar1 + 0xc) = param_1;
  return;
}


/* ZombieConditionTracker::SetExtraAdditionalValue(ZombieConditions, float) */

void __thiscall
ZombieConditionTracker::SetExtraAdditionalValue
          (undefined4 param_1,ZombieConditionTracker *this,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_0468dbbc(*(undefined8 *)(this + 0x20),(long)param_3);
  *(undefined4 *)(lVar1 + 0x10) = param_1;
  return;
}


/* ZombieConditionTracker::SetExtraAdditionalValue2(ZombieConditions, float) */

void __thiscall
ZombieConditionTracker::SetExtraAdditionalValue2
          (undefined4 param_1,ZombieConditionTracker *this,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_0468dbbc(*(undefined8 *)(this + 0x20),(long)param_3);
  *(undefined4 *)(lVar1 + 0x14) = param_1;
  return;
}


/* ZombieConditionTracker::SetEliminateColor(EEliminateType) */

void __thiscall ZombieConditionTracker::SetEliminateColor(ZombieConditionTracker *this,uint param_2)

{
  if (7 < param_2) {
    param_2 = 8;
  }
  *(uint *)(this + 0x84) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieConditionTracker::computePotionScaleAndColor(float&, Sexy::Color&, bool&) const */

void __thiscall
ZombieConditionTracker::computePotionScaleAndColor
          (ZombieConditionTracker *this,float *param_1,Color *param_2,bool *param_3)

{
  char cVar1;
  float *pfVar2;
  undefined8 uVar3;
  Color *pCVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48 [2];
  int local_40;
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  long local_8;
  
  uVar9 = 0x3f800000;
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)local_48,0);
  *param_3 = false;
  *param_1 = 1.0;
  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x12);
  if (cVar1 == '\0') {
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x13);
    if (cVar1 != '\0') {
      iVar5 = 0x55;
      uVar3 = 0x13;
      local_38[0] = 0x3f99999a;
      uVar9 = 0x3f8ccccd;
      goto LAB_0468ddcc;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x14);
    if (cVar1 != '\0') {
      local_38[0] = 0x3fa66666;
      iVar5 = 0x7f;
      uVar9 = 0x3f99999a;
      uVar3 = 0x14;
      goto LAB_0468ddcc;
    }
  }
  else {
    local_38[0] = 0x3f8ccccd;
    iVar5 = 0x2a;
    uVar3 = 0x12;
LAB_0468ddcc:
    local_50 = 0x3dcccccd;
    local_4c = uVar9;
    fVar6 = (float)PVZ_T();
    pfVar2 = (float *)FUN_0468dbd0(*(undefined8 *)(this + 0x20),uVar3);
    local_28[0] = 0;
    local_18 = 0x3f800000;
    fVar6 = CurveLerp<float>(0,0x3f19999a,fVar6 - *pfVar2,local_28,&local_18,3);
    fVar7 = CurveEvaluate<float>(&local_4c,local_38,1);
    local_18 = 0;
    fVar6 = CurveEvaluate<float>(fVar6,&local_18,&local_50,8);
    *param_1 = *param_1 * (fVar6 + fVar7);
    *param_3 = true;
    local_40 = iVar5;
  }
  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x15);
  if (cVar1 == '\0') {
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x16);
    if (cVar1 != '\0') {
      iVar5 = 0x55;
      uVar3 = 0x16;
      local_38[0] = 0x3f99999a;
      local_4c = 0x3f8ccccd;
      goto LAB_0468dec4;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x17);
    if (cVar1 != '\0') {
      local_38[0] = 0x3fa66666;
      iVar5 = 0x7f;
      local_4c = 0x3f99999a;
      uVar3 = 0x17;
      goto LAB_0468dec4;
    }
  }
  else {
    local_38[0] = 0x3f8ccccd;
    iVar5 = 0x2a;
    uVar3 = 0x15;
    local_4c = 0x3f800000;
LAB_0468dec4:
    local_50 = 0x3dcccccd;
    fVar6 = (float)PVZ_T();
    pfVar2 = (float *)FUN_0468dbd0(*(undefined8 *)(this + 0x20),uVar3);
    local_28[0] = 0;
    local_18 = 0x3f800000;
    fVar6 = CurveLerp<float>(0,0x3f19999a,fVar6 - *pfVar2,local_28,&local_18,3);
    fVar7 = CurveEvaluate<float>(&local_4c,local_38,1);
    local_18 = 0;
    fVar6 = CurveEvaluate<float>(fVar6,&local_18,&local_50,8);
    *param_1 = *param_1 * (fVar6 + fVar7);
    *param_3 = true;
    local_48[0] = iVar5;
  }
  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x7a);
  if (cVar1 != '\0') {
    local_48[0] = 0x109a;
    *param_3 = true;
  }
  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,99);
  if (cVar1 != '\0') {
    local_50 = 0x3dcccccd;
    local_4c = 0x3f800000;
    local_38[0] = 0x3f8ccccd;
    fVar6 = (float)PVZ_T();
    pfVar2 = (float *)FUN_0468dbd0(*(undefined8 *)(this + 0x20),99);
    local_28[0] = 0;
    local_18 = 0x3f800000;
    fVar6 = CurveLerp<float>(0,0x3f19999a,fVar6 - *pfVar2,local_28,&local_18,3);
    fVar7 = CurveEvaluate<float>(&local_4c,local_38,1);
    local_18 = 0;
    fVar6 = CurveEvaluate<float>(fVar6,&local_18,&local_50,8);
    local_40 = 0x2a;
    *param_1 = *param_1 * (fVar6 + fVar7);
    *param_3 = true;
  }
  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,100);
  if (cVar1 != '\0') {
    local_50 = 0x3dcccccd;
    local_4c = 0x3f800000;
    local_38[0] = 0x3f8ccccd;
    fVar6 = (float)PVZ_T();
    pfVar2 = (float *)FUN_0468dbd0(*(undefined8 *)(this + 0x20),100);
    local_28[0] = 0;
    local_18 = 0x3f800000;
    fVar6 = CurveLerp<float>(0,0x3f19999a,fVar6 - *pfVar2,local_28,&local_18,3);
    fVar7 = CurveEvaluate<float>(&local_4c,local_38,1);
    local_18 = 0;
    fVar6 = CurveEvaluate<float>(fVar6,&local_18,&local_50,8);
    local_48[0] = 0x2a;
    *param_1 = *param_1 * (fVar6 + fVar7);
    *param_3 = true;
  }
  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x79);
  if (cVar1 != '\0') {
    local_50 = 0x3dcccccd;
    local_4c = 0x3f8ccccd;
    local_38[0] = 0x3f99999a;
    fVar6 = (float)PVZ_T();
    pfVar2 = (float *)FUN_0468dbd0(*(undefined8 *)(this + 0x20),0x79);
    local_28[0] = 0;
    local_18 = 0x3f800000;
    fVar6 = CurveLerp<float>(0,0x3f19999a,fVar6 - *pfVar2,local_28,&local_18,3);
    fVar7 = CurveEvaluate<float>(&local_4c,local_38,1);
    local_18 = 0;
    fVar6 = CurveEvaluate<float>(fVar6,&local_18,&local_50,8);
    *param_1 = *param_1 * (fVar6 + fVar7);
  }
  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x3b);
  if (cVar1 != '\0') {
    pfVar2 = (float *)FUN_0468dbd0(*(undefined8 *)(this + 0x20),0x3b);
    fVar10 = pfVar2[1];
    fVar11 = *pfVar2;
    fVar6 = (float)PVZ_T();
    fVar7 = (float)PVZ_T();
    fVar8 = (float)Zombie::GetMinifyTime();
    local_28[0] = 0x3f000000;
    if (fVar8 < fVar10 - fVar7) {
      local_18 = 0x3f800000;
      fVar6 = CurveLerp<float>(0,fVar8,fVar6 - fVar11,&local_18,local_28,1);
    }
    else {
      local_18 = 0x3f800000;
      fVar6 = CurveLerp<float>(0,fVar8,fVar10 - fVar7,&local_18,local_28,1);
    }
    *param_1 = *param_1 * fVar6;
  }
  if (*param_3 == false) goto LAB_0468e274;
  if (local_40 < 1) {
    Sexy::Insets::Insets((Insets *)local_38,0xff,0xff,0xff,0);
    if (local_48[0] < 1) goto LAB_0468e38c;
LAB_0468e220:
    pCVar4 = (Color *)0x80;
    Sexy::Insets::Insets((Insets *)local_28,0x100,0x80,0x80,local_48[0]);
  }
  else {
    Sexy::Insets::Insets((Insets *)local_38,0x80,0x80,0x100,local_40);
    if (0 < local_48[0]) goto LAB_0468e220;
LAB_0468e38c:
    pCVar4 = (Color *)0xff;
    Sexy::Insets::Insets((Insets *)local_28,0xff,0xff,0xff,0);
  }
  fVar6 = (float)PVZ_T();
  fVar6 = (float)SampleSinWave(0.6,0.0,1.0,fVar6);
  Sexy::SexyMath::Lerp<Sexy::Color>((SexyMath *)local_38,(Color *)local_28,pCVar4,fVar6);
  local_c = 0xff;
  *(ulong *)param_2 = CONCAT44(uStack_14,local_18);
  *(ulong *)(param_2 + 8) = CONCAT44(0xff,uStack_10);
LAB_0468e274:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieConditionTracker::scaleZombie(float, float, float, float, float, bool) */

void __thiscall
ZombieConditionTracker::scaleZombie
          (ZombieConditionTracker *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,bool param_6)

{
  float fVar1;
  float fVar2;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  float local_28;
  float local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_5;
  local_24[0] = param_4;
  Sexy::Color::Color((Color *)&local_18,1);
  fVar2 = 0.0;
  *(ulong *)(this + 0x4c) = CONCAT44(uStack_14,local_18);
  *(undefined8 *)(this + 0x54) = uStack_10;
  local_1c = 0;
  local_18 = 0x3f800000;
  CurveLerp<float>(CONCAT44(in_register_00005004,param_1),CONCAT44(in_register_00005024,param_2),
                   CONCAT44(in_register_00005044,param_3),&local_1c,(Color *)&local_18,1);
  fVar1 = CurveEvaluate<float>(local_24,&local_28,3);
  if (param_6) {
    fVar2 = CurveEvaluate<float>(local_24,&local_28,8);
  }
  *(float *)(this + 0x78) = *(float *)(this + 0x78) * (fVar2 + fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieConditionTracker::continueShrinkingZombie() */

void __thiscall ZombieConditionTracker::continueShrinkingZombie(ZombieConditionTracker *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = (float *)FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x40);
  fVar5 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[3];
  fVar2 = (float)PVZ_T();
  scaleZombie(this,fVar5,fVar3,fVar2,1.0,fVar4,false);
  return;
}


/* ZombieConditionTracker::continueHocusCrocusShrinkingZombie() */

void __thiscall
ZombieConditionTracker::continueHocusCrocusShrinkingZombie(ZombieConditionTracker *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = (float *)FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x42);
  fVar5 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[3];
  fVar2 = (float)PVZ_T();
  scaleZombie(this,fVar5,fVar3,fVar2,1.0,fVar4,false);
  return;
}


/* ZombieConditionTracker::continueHocusCrocusShrinkRecoveringZombie() */

void __thiscall
ZombieConditionTracker::continueHocusCrocusShrinkRecoveringZombie(ZombieConditionTracker *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = (float *)FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x44);
  fVar5 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[3];
  fVar2 = (float)PVZ_T();
  scaleZombie(this,fVar5,fVar3,fVar2,fVar4,1.0,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieConditionTracker::blinkWarpingZombie() */

void __thiscall ZombieConditionTracker::blinkWarpingZombie(ZombieConditionTracker *this)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  fVar3 = fmodf(fVar3,_FUN_0468e6a4);
  local_1c = 0;
  local_18 = 0xff;
  iVar2 = CurveEvaluate<int>(fVar3 * 10.0,&local_1c,(Insets *)&local_18,8);
  Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,iVar2);
  bVar1 = local_8 == ___stack_chk_guard;
  *(ulong *)(this + 0x4c) = CONCAT44(uStack_14,local_18);
  *(undefined8 *)(this + 0x54) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieConditionTracker::continueWarpingZombieIn() */

void __thiscall ZombieConditionTracker::continueWarpingZombieIn(ZombieConditionTracker *this)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x11);
  fVar5 = *pfVar2;
  fVar3 = pfVar2[1];
  fVar4 = (float)PVZ_T();
  pfVar2 = (float *)FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x11);
  fVar1 = (fVar3 - fVar5) * 0.45;
  fVar4 = fVar4 - *pfVar2;
  if (fVar4 <= fVar1) {
    scaleZombie(this,0.0,fVar1,fVar4,0.0,1.0,true);
  }
  else if (fVar4 <= (fVar3 - fVar5) * 0.85) {
    Sexy::Color::Color((Color *)&local_18,1);
    *(undefined8 *)(this + 0x4c) = local_18;
    *(undefined8 *)(this + 0x54) = uStack_10;
  }
  else {
    blinkWarpingZombie(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieConditionTracker::continueWarpingZombieOut() */

void __thiscall ZombieConditionTracker::continueWarpingZombieOut(ZombieConditionTracker *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x3f);
  fVar3 = pfVar1[1] - *pfVar1;
  fVar2 = (float)PVZ_T();
  pfVar1 = (float *)FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x3f);
  fVar2 = fVar2 - *pfVar1;
  if (fVar2 <= fVar3 * 0.15) {
    blinkWarpingZombie(this);
  }
  else if (fVar2 <= fVar3 * 0.55) {
    Sexy::Color::Color((Color *)&local_18,1);
    *(undefined8 *)(this + 0x4c) = local_18;
    *(undefined8 *)(this + 0x54) = uStack_10;
  }
  else {
    scaleZombie(this,fVar3 * 0.55,fVar3,fVar2,1.0,0.0,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieConditionTracker::CalcRageScale() */

void __thiscall ZombieConditionTracker::CalcRageScale(ZombieConditionTracker *this)

{
  int iVar1;
  PVPManager *this_00;
  long lVar2;
  string *psVar3;
  long lVar4;
  long extraout_x0;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x7c) = 0x3f800000;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  std::string::string(asStack_10,"pvpskill_rage");
  lVar2 = PVPManager::GetSkillData(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar2 != 0) {
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"pvpskill_rage");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0xa0));
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    nop();
    iVar1 = *(int *)(lVar2 + 8) + -1;
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(extraout_x0 + 0x2a0);
    if (-1 < iVar1) {
      uVar7 = *(undefined8 *)(extraout_x0 + 0x288);
      uVar5 = FUN_0468dbb0(uVar7,*(undefined8 *)(extraout_x0 + 0x290));
      if ((ulong)(long)iVar1 < uVar5) {
        puVar6 = (undefined4 *)FUN_0468dbdc(uVar7,(long)iVar1);
        *(undefined4 *)(this + 0x7c) = *puVar6;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieConditionTracker::GetRageSpeed() */

float __thiscall ZombieConditionTracker::GetRageSpeed(ZombieConditionTracker *this)

{
  if (0.0 <= *(float *)(this + 0x7c)) {
    return *(float *)(this + 0x7c);
  }
  CalcRageScale(this);
  return *(float *)(this + 0x7c);
}


/* ZombieConditionTracker::GetRageDamage() */

float __thiscall ZombieConditionTracker::GetRageDamage(ZombieConditionTracker *this)

{
  if (0.0 <= *(float *)(this + 0x80)) {
    return *(float *)(this + 0x80);
  }
  CalcRageScale(this);
  return *(float *)(this + 0x80);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieConditionTracker::recomputeScaleAndColor() */

void __thiscall ZombieConditionTracker::recomputeScaleAndColor(ZombieConditionTracker *this)

{
  Color *this_00;
  Color *this_01;
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ProfileMgr *pPVar7;
  PlayerInfo *pPVar8;
  EntityCondition *pEVar9;
  float *pfVar10;
  ulong uVar11;
  Insets *pIVar12;
  int iVar13;
  Color *pCVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool local_3d;
  undefined4 local_3c;
  undefined4 local_38 [4];
  ulong local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Color *)(this + 0x4c);
  *(undefined4 *)(this + 0x78) = 0x3f800000;
  Sexy::Color::Color((Color *)&local_18,1);
  *(ulong *)this_00 = CONCAT44(uStack_14,local_18);
  *(undefined8 *)(this + 0x54) = uStack_10;
  this_01 = (Color *)(this + 0x5c);
  Sexy::Color::Color((Color *)&local_18,1);
  local_3d = false;
  *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
  *(undefined8 *)(this + 100) = uStack_10;
  computePotionScaleAndColor(this,(float *)(this + 0x78),this_01,&local_3d);
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x41);
  if (cVar2 == '\0') {
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x43);
    if (cVar2 != '\0') {
      lVar6 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition
                        ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x43);
      *(float *)(this + 0x78) = *(float *)(this + 0x78) * *(float *)(lVar6 + 0xc);
    }
  }
  else {
    pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar7);
    if (pPVar8 != (PlayerInfo *)0x0) {
      std::string::string((string *)&local_18,"shrinkingviolet");
      iVar5 = PlayerInfo::GetEquipAvatarID(pPVar8,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
      if (iVar5 != -1) {
        *(float *)(this + 0x78) = *(float *)(this + 0x78) * 0.3;
        goto LAB_0468eb64;
      }
    }
    *(float *)(this + 0x78) = *(float *)(this + 0x78) * 0.5;
  }
LAB_0468eb64:
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x60);
  if (cVar2 != '\0') {
    lVar6 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x60);
    *(float *)(this + 0x78) = *(float *)(this + 0x78) * *(float *)(lVar6 + 0xc);
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x19);
  if (cVar2 != '\0') {
    fVar16 = (float)PVZ_T();
    pfVar10 = (float *)FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x19);
    fVar17 = *pfVar10;
    if (((DAT_06b1e738 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06b1e738), iVar5 != 0)) {
      Sexy::Insets::Insets((Insets *)&DAT_06b1e838,0xf3,0x70,0xd2,0xff);
      Sexy::Insets::Insets((Insets *)&DAT_06b1e848,0x9c,200,0xdd,0xff);
      Sexy::Insets::Insets((Insets *)&DAT_06b1e858,0xb8,0x48,0xe7,0xff);
      __cxa_guard_release(&DAT_06b1e738);
    }
    if (((DAT_06b1e7d0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06b1e7d0), iVar5 != 0)) {
      std::vector<Sexy::Color,std::allocator<Sexy::Color>>::vector<Sexy::Color*,void>
                ((Color *)&DAT_06b1e7d8,(Color *)&DAT_06b1e838,(allocator *)&DAT_06b1e868);
      __cxa_guard_release(&DAT_06b1e7d0);
      __cxa_atexit(std::vector<Sexy::Color,std::allocator<Sexy::Color>>::~vector,&DAT_06b1e7d8,
                   &DAT_06a88000);
    }
    uVar1 = DAT_06b1e7d8;
    uVar11 = FUN_0468dba4(DAT_06b1e7d8,DAT_06b1e7e0);
    fVar18 = 2.0 / (float)uVar11;
    fVar16 = fmodf(fVar16 - fVar17,2.0);
    iVar13 = (int)(fVar16 / fVar18);
    pIVar12 = (Insets *)FUN_0468dbc8(uVar1,(long)iVar13);
    Sexy::Insets::Insets((Insets *)local_38,pIVar12);
    uVar1 = DAT_06b1e7d8;
    uVar11 = FUN_0468dba4(DAT_06b1e7d8,DAT_06b1e7e0);
    iVar5 = 0;
    if (uVar11 != 0) {
      iVar5 = (int)((ulong)(long)(iVar13 + 1) / uVar11);
    }
    pIVar12 = (Insets *)FUN_0468dbc8(uVar1,(long)((iVar13 + 1) - iVar5 * (int)uVar11));
    Sexy::Insets::Insets((Insets *)&local_28,pIVar12);
    pCVar14 = (Color *)&DAT_00000004;
    local_18 = 0x3f800000;
    local_3c = 0;
    fVar16 = CurveEvaluate<float>
                       ((fVar16 - fVar18 * (float)iVar13) / fVar18,&local_3c,(string *)&local_18);
    Sexy::SexyMath::Lerp<Sexy::Color>((SexyMath *)local_38,(Color *)&local_28,pCVar14,fVar16);
    local_3d = true;
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x77);
  if (cVar2 != '\0') {
    fVar16 = (float)PVZ_T();
    pfVar10 = (float *)FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x77);
    fVar17 = *pfVar10;
    if (((DAT_06b1e790 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06b1e790), iVar5 != 0)) {
      Sexy::Insets::Insets((Insets *)&DAT_06b1e868,0xf3,0x70,0xd2,0xff);
      Sexy::Insets::Insets((Insets *)&DAT_06b1e878,0x9c,200,0xdd,0xff);
      Sexy::Insets::Insets((Insets *)&DAT_06b1e888,0xb8,0x48,0xe7,0xff);
      __cxa_guard_release(&DAT_06b1e790);
    }
    if (((DAT_06b1e750 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06b1e750), iVar5 != 0)) {
      std::vector<Sexy::Color,std::allocator<Sexy::Color>>::vector<Sexy::Color*,void>
                ((Color *)&DAT_06b1e898,(Color *)&DAT_06b1e868,(allocator *)&DAT_06b1e898);
      __cxa_guard_release(&DAT_06b1e750);
      __cxa_atexit(std::vector<Sexy::Color,std::allocator<Sexy::Color>>::~vector,&DAT_06b1e898,
                   &DAT_06a88000);
    }
    uVar1 = DAT_06b1e898;
    uVar11 = FUN_0468dba4(DAT_06b1e898,DAT_06b1e8a0);
    fVar18 = 2.0 / (float)uVar11;
    fVar16 = fmodf(fVar16 - fVar17,2.0);
    iVar13 = (int)(fVar16 / fVar18);
    pIVar12 = (Insets *)FUN_0468dbc8(uVar1,(long)iVar13);
    Sexy::Insets::Insets((Insets *)local_38,pIVar12);
    uVar1 = DAT_06b1e898;
    uVar11 = FUN_0468dba4(DAT_06b1e898,DAT_06b1e8a0);
    iVar5 = 0;
    if (uVar11 != 0) {
      iVar5 = (int)((ulong)(long)(iVar13 + 1) / uVar11);
    }
    pIVar12 = (Insets *)FUN_0468dbc8(uVar1,(long)((iVar13 + 1) - iVar5 * (int)uVar11));
    Sexy::Insets::Insets((Insets *)&local_28,pIVar12);
    pCVar14 = (Color *)&DAT_00000004;
    local_18 = 0x3f800000;
    local_3c = 0;
    fVar16 = CurveEvaluate<float>
                       ((fVar16 - fVar18 * (float)iVar13) / fVar18,&local_3c,(string *)&local_18);
    Sexy::SexyMath::Lerp<Sexy::Color>((SexyMath *)local_38,(Color *)&local_28,pCVar14,fVar16);
    local_3d = true;
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x1c);
  if (cVar2 != '\0') {
    fVar16 = (float)PVZ_T();
    pfVar10 = (float *)FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x1c);
    if (fVar16 - *pfVar10 < 0.5) {
      local_3c = 0x3f000000;
      local_38[0] = 0x3ecccccd;
      local_28 = local_28 & 0xffffffff00000000;
      local_18 = 0x3f800000;
      fVar16 = CurveLerp<float>(0,0x3f000000,&local_28,(string *)&local_18,3);
      local_18 = 0x3f800000;
      fVar17 = CurveEvaluate<float>(&local_3c,(string *)&local_18,1);
      local_18 = 0;
      fVar16 = CurveEvaluate<float>(fVar16,(string *)&local_18,local_38,8);
      *(float *)(this + 0x78) = *(float *)(this + 0x78) * (fVar16 + fVar17);
    }
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x11);
  if (cVar2 != '\0') {
    continueWarpingZombieIn(this);
  }
  cVar3 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x3f);
  if (cVar3 != '\0') {
    continueWarpingZombieOut(this);
  }
  bVar15 = cVar3 != '\0' || cVar2 != '\0';
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x40);
  if (cVar2 != '\0') {
    continueShrinkingZombie(this);
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x7c);
  if (cVar2 != '\0') {
    pfVar10 = (float *)FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x7c);
    fVar20 = *pfVar10;
    fVar17 = pfVar10[3];
    fVar19 = fVar20 + 1.0;
    fVar18 = pfVar10[4];
    fVar16 = (float)PVZ_T();
    scaleZombie(this,fVar20,fVar19,fVar16,fVar17,fVar18,false);
    fVar16 = (float)PVZ_T();
    bVar15 = fVar16 <= fVar19 - 0.5;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x42);
  if (cVar2 != '\0') {
    continueHocusCrocusShrinkingZombie(this);
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x44);
  if (cVar2 != '\0') {
    continueHocusCrocusShrinkRecoveringZombie(this);
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x1e);
  if (cVar2 == '\0') goto LAB_0468ec60;
  fVar16 = (float)PVZ_T();
  iVar5 = (int)(fVar16 * 100.0) % 100;
  if (iVar5 < 0x32) {
    fVar16 = (float)iVar5 * 0.02;
    Sexy::Color::Color((Color *)&local_28);
    cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if (cVar2 != '\0') goto LAB_0468f660;
LAB_0468fad4:
    iVar5 = (int)(fVar16 * 40.0 + 255.0);
    Sexy::Insets::Insets((Insets *)&local_18,iVar5,(int)(fVar16 * 255.0 + 255.0),iVar5,0xff);
    local_28 = CONCAT44(uStack_14,local_18);
  }
  else {
    fVar16 = (float)(100 - iVar5) * 0.02;
    Sexy::Color::Color((Color *)&local_28);
    cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if (cVar2 == '\0') goto LAB_0468fad4;
LAB_0468f660:
    iVar5 = (int)(fVar16 * 40.0 + 255.0);
    Sexy::Insets::Insets((Insets *)&local_18,iVar5,iVar5,(int)(fVar16 * 255.0 + 255.0),0xff);
    local_28 = CONCAT44(uStack_14,local_18);
  }
  local_3d = true;
  uStack_20 = uStack_10;
  Sexy::Color::operator*(this_01,(Color *)&local_28);
  *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
  *(undefined8 *)(this + 100) = uStack_10;
LAB_0468ec60:
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x6e);
  if (cVar2 != '\0') {
    fVar16 = (float)PVZ_T();
    iVar5 = (int)(fVar16 * 100.0) % 100;
    if (0x31 < iVar5) {
      iVar5 = 100 - iVar5;
    }
    Sexy::Insets::Insets
              ((Insets *)&local_28,(int)(((float)iVar5 * 0.02 + 1.0) * 255.0),
               (int)((float)iVar5 * 0.02 * 215.0 + 255.0),0xff,0xff);
    local_3d = true;
    Sexy::Color::operator*(this_01,(Color *)&local_28);
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x4a);
  if (cVar2 != '\0') {
    fVar16 = (float)PVZ_T();
    iVar5 = (int)(fVar16 * 100.0) % 100;
    if (0x31 < iVar5) {
      iVar5 = 100 - iVar5;
    }
    iVar13 = (int)((float)iVar5 * 0.02 * 40.0 + 255.0);
    Sexy::Insets::Insets
              ((Insets *)&local_28,(int)((float)iVar5 * 0.02 * 255.0 + 255.0),iVar13,iVar13,0xff);
    local_3d = true;
    Sexy::Color::operator*(this_01,(Color *)&local_28);
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x38);
  if (cVar2 != '\0') {
    fVar16 = (float)PVZ_T();
    iVar5 = (int)(fVar16 * 100.0) % 100;
    if (0x31 < iVar5) {
      iVar5 = 100 - iVar5;
    }
    iVar13 = (int)((float)iVar5 * 0.02 * 200.0 + 255.0);
    Sexy::Insets::Insets
              ((Insets *)&local_28,iVar13,(int)((float)iVar5 * 0.02 * 20.0 + 255.0),iVar13,0xff);
    local_3d = true;
    Sexy::Color::operator*(this_01,(Color *)&local_28);
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x3e);
  if (cVar2 != '\0') {
    Sexy::Insets::Insets((Insets *)&local_28,500,500,500,0xff);
    local_3d = true;
    Sexy::Color::operator*(this_01,(Color *)&local_28);
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x3d);
  if (cVar2 != '\0') {
    fVar16 = (float)PVZ_T();
    iVar5 = (int)(fVar16 * 100.0) % 100;
    if (0x31 < iVar5) {
      iVar5 = 100 - iVar5;
    }
    Sexy::Insets::Insets
              ((Insets *)&local_28,(int)((((float)iVar5 * 0.02 + 1.0) * 0.5 + 1.0) * 255.0),0xff,
               0xff,0xff);
    local_3d = true;
    Sexy::Color::operator*(this_01,(Color *)&local_28);
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x1f);
  if (cVar2 != '\0') {
    Sexy::Color::Color((Color *)&local_28);
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x20);
    if (cVar2 == '\0') {
      Sexy::Color::Color((Color *)&local_18,1);
      local_28 = CONCAT44(uStack_14,local_18);
    }
    else {
      Sexy::Insets::Insets((Insets *)&local_18,0xff,200,200,0xff);
      local_28 = CONCAT44(uStack_14,local_18);
    }
    uStack_20 = uStack_10;
    pEVar9 = (EntityCondition *)FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x1f);
    calculateConditionColor_Flash(pEVar9,(Color *)&local_28,this_01);
    local_3d = true;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0);
  if ((((cVar2 != '\0') ||
       (cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                          ((EntityConditionTracker<Zombie,ZombieConditions> *)this,1), cVar2 != '\0'
       )) || (cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                                ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x2a),
             cVar2 != '\0')) ||
     ((cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                         ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x25),
      cVar2 != '\0' ||
      (cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                         ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x27),
      cVar2 != '\0')))) {
    Sexy::Color::Color((Color *)&local_28,0,300,0x200);
    Sexy::Color::operator*(this_01,(Color *)&local_28);
    local_3d = true;
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x3a);
  if (cVar2 != '\0') {
    Sexy::Color::Color((Color *)&local_28,0,0,0);
    switch(*(undefined4 *)(this + 0x84)) {
    case 0:
      Sexy::Color::Color((Color *)&local_18,0x1fe,200,200);
      local_28 = CONCAT44(uStack_14,local_18);
      uStack_20 = uStack_10;
      break;
    case 1:
      Sexy::Color::Color((Color *)&local_18,0x200,300,100);
      local_28 = CONCAT44(uStack_14,local_18);
      uStack_20 = uStack_10;
      break;
    case 2:
      Sexy::Color::Color((Color *)&local_18,0x127,0x1fe,0x127);
      local_28 = CONCAT44(uStack_14,local_18);
      uStack_20 = uStack_10;
      break;
    case 3:
      Sexy::Color::Color((Color *)&local_18,0,300,0x200);
      local_28 = CONCAT44(uStack_14,local_18);
      uStack_20 = uStack_10;
      break;
    case 4:
      Sexy::Color::Color((Color *)&local_18,0x14e,0x96,0x118);
      local_28 = CONCAT44(uStack_14,local_18);
      uStack_20 = uStack_10;
      break;
    case 6:
      Sexy::Color::Color((Color *)&local_18,0x91,0xfb,0xff);
      local_28 = CONCAT44(uStack_14,local_18);
      uStack_20 = uStack_10;
    }
    Sexy::Color::operator*(this_01,(Color *)&local_28);
    local_3d = true;
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x2d);
  if (((cVar2 == '\0') &&
      (cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                         ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x2f),
      cVar2 == '\0')) &&
     (cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                        ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x4f),
     cVar2 == '\0')) {
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x4c);
  }
  else {
    Sexy::Color::Color((Color *)&local_28,0xfb,0x5a,0xfa);
    Sexy::Color::operator*(this_01,(Color *)&local_28);
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
    local_3d = true;
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x4c);
  }
  if (cVar2 == '\0') {
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x8e);
  }
  else {
    Sexy::Color::Color((Color *)&local_28,0xab,0x82,0xff);
    lVar6 = FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x4c);
    if (*(float *)(lVar6 + 0x14) == 1.0) {
      Sexy::Color::Color((Color *)&local_18,0x9b,0x30,0xff);
      local_28 = CONCAT44(uStack_14,local_18);
      uStack_20 = uStack_10;
    }
    else if (*(float *)(lVar6 + 0x14) == 2.0) {
      Sexy::Color::Color((Color *)&local_18,0x55,0x1a,0x8b);
      local_28 = CONCAT44(uStack_14,local_18);
      uStack_20 = uStack_10;
    }
    Sexy::Color::operator*(this_01,(Color *)&local_28);
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
    local_3d = true;
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x8e);
  }
  if (cVar2 == '\0') {
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x4d);
  }
  else {
    Sexy::Color::Color((Color *)&local_28,0xab,0x82,0xff);
    Sexy::Color::operator*(this_01,(Color *)&local_28);
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
    local_3d = true;
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x4d);
  }
  if (cVar2 == '\0') {
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x2e);
  }
  else {
    Sexy::Color::Color((Color *)&local_28,0xab,0x82,0xff);
    lVar6 = FUN_0468dbbc(*(undefined8 *)(this + 0x20),0x4d);
    if (*(float *)(lVar6 + 0x10) == 1.0) {
      Sexy::Color::Color((Color *)&local_18,0x9b,0x30,0xff);
      local_28 = CONCAT44(uStack_14,local_18);
      uStack_20 = uStack_10;
    }
    else if (*(float *)(lVar6 + 0x10) == 2.0) {
      Sexy::Color::Color((Color *)&local_18,0x55,0x1a,0x8b);
      local_28 = CONCAT44(uStack_14,local_18);
      uStack_20 = uStack_10;
    }
    Sexy::Color::operator*(this_01,(Color *)&local_28);
    *(ulong *)this_01 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 100) = uStack_10;
    local_3d = true;
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x2e);
  }
  if (cVar2 == '\0') {
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x30);
  }
  else {
    bVar15 = true;
    Sexy::Insets::Insets((Insets *)&local_28,0xff,0x14,0x93,0xd7);
    Sexy::Color::operator*(this_00,(Color *)&local_28);
    *(ulong *)this_00 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 0x54) = uStack_10;
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x30);
  }
  if (cVar2 == '\0') {
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x31);
  }
  else {
    Sexy::Insets::Insets((Insets *)&local_28,0x2c,2,0x50,0x80);
    pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar7);
    if (pPVar8 != (PlayerInfo *)0x0) {
      std::string::string((string *)&local_18,"shadowshroom");
      iVar5 = PlayerInfo::GetEquipAvatarID(pPVar8,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
      if (iVar5 != -1) {
        Sexy::Insets::Insets((Insets *)&local_18,0,0xff,0,0x80);
        local_28 = CONCAT44(uStack_14,local_18);
        uStack_20 = uStack_10;
      }
    }
    bVar15 = true;
    Sexy::Color::operator*(this_00,(Color *)&local_28);
    *(ulong *)this_00 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 0x54) = uStack_10;
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x31);
  }
  if (cVar2 == '\0') {
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x8d);
  }
  else {
    bVar15 = true;
    Sexy::Insets::Insets((Insets *)&local_28,0,0xff,0,0x80);
    Sexy::Color::operator*(this_00,(Color *)&local_28);
    *(ulong *)this_00 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 0x54) = uStack_10;
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x8d);
  }
  if (cVar2 == '\0') {
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x86);
  }
  else {
    bVar15 = true;
    Sexy::Insets::Insets((Insets *)&local_28,0x2c,2,0x50,0x80);
    Sexy::Color::operator*(this_00,(Color *)&local_28);
    *(ulong *)this_00 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 0x54) = uStack_10;
    cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                      ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x86);
  }
  if (cVar2 != '\0') {
    bVar15 = true;
    Sexy::Insets::Insets((Insets *)&local_28,0xc4,0xd0,0x24,0x80);
    Sexy::Color::operator*(this_00,(Color *)&local_28);
    *(ulong *)this_00 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 0x54) = uStack_10;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x32);
  if ((cVar2 != '\0') ||
     (cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                        ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x87),
     cVar2 != '\0')) {
    bVar15 = true;
    Sexy::Insets::Insets((Insets *)&local_28,0xff,0x61,0,0x80);
    Sexy::Color::operator*(this_00,(Color *)&local_28);
    *(ulong *)this_00 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 0x54) = uStack_10;
  }
  cVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)this,0x94);
  if (cVar2 != '\0') {
    bVar15 = true;
    Sexy::Insets::Insets((Insets *)&local_28,0x7e,0x13,0xc1,0x50);
    Sexy::Color::operator*(this_00,(Color *)&local_28);
    *(ulong *)this_00 = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(this + 0x54) = uStack_10;
  }
  uVar4 = EntityModifierToFlag(0x10);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar4,local_3d);
  uVar4 = EntityModifierToFlag(8);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar4,bVar15);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieConditionTracker::recomputeModifierValues() */

void ZombieConditionTracker::recomputeModifierValues(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ZombieConditionTracker *in_x0;
  long lVar4;
  float *pfVar5;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar6;
  wchar16 *pwVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  LineBreakCategory *pLVar10;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  LineBreakCategory aLStack_28 [8];
  LineBreakCategory aLStack_20 [8];
  float local_18 [2];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
                    ((EntityConditionTracker<Zombie,ZombieConditions> *)in_x0,1);
  if (((((((cVar1 == '\0') &&
          (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 == '\0'))
         && (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 == '\0')
         ) && ((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
               cVar1 == '\0' &&
               (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
               cVar1 == '\0')))) &&
       ((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 == '\0' &&
        ((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 == '\0' &&
         (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 == '\0'))))
       )) && ((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
              cVar1 == '\0' &&
              (((((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
                  cVar1 == '\0' &&
                  (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
                  cVar1 == '\0')) &&
                 (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
                 cVar1 == '\0')) &&
                (((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
                  cVar1 == '\0' &&
                  (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
                  cVar1 == '\0')) &&
                 ((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
                  cVar1 == '\0' &&
                  ((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
                   cVar1 == '\0' &&
                   (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
                   cVar1 == '\0')))))))) &&
               (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
               cVar1 == '\0')))))) &&
     ((((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 == '\0' &&
        (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 == '\0')) &&
       (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 == '\0')) &&
      (((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 == '\0' &&
        (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 == '\0')) &&
       ((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 == '\0' &&
        ((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 == '\0' &&
         (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), bVar11 = false,
         cVar1 == '\0')))))))))) {
LAB_046901b4:
    bVar12 = bVar11;
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      fVar16 = (float)PVZ_T();
      pfVar5 = (float *)FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x3b);
      fVar15 = *pfVar5;
      fVar17 = (float)Zombie::GetMinifyTime();
      if (fVar16 - fVar15 < fVar17) goto LAB_0468fef4;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 == '\0') {
      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
      if (cVar1 == '\0') {
        cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
        if (cVar1 == '\0') {
          cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
          if (cVar1 == '\0') {
            cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
            if (cVar1 == '\0') {
              cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
              if (cVar1 == '\0') {
                cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                if (cVar1 == '\0') {
                  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                  if (cVar1 == '\0') {
                    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                    if (cVar1 == '\0') {
                      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                      if (cVar1 != '\0') goto LAB_046908ec;
                      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                      if (cVar1 != '\0') goto LAB_046909f4;
                      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                      if (cVar1 != '\0') goto LAB_04690aa8;
                      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                      if (cVar1 == '\0') {
                        cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                        if (cVar1 == '\0') {
                          cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                          if (cVar1 == '\0') {
                            cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                            fVar15 = 0.0;
                            fVar16 = 1.0;
                            if (cVar1 == '\0') {
                              fVar15 = 1.0;
                              fVar16 = 1.0;
                            }
                          }
                          else {
                            fVar16 = 1.2;
                            fVar15 = 1.0;
                          }
                        }
                        else {
                          fVar16 = 1.0;
                          fVar15 = 2.0;
                        }
                      }
                      else {
                        fVar16 = 5.0;
                        fVar15 = 5.0;
                      }
                    }
                    else {
                      fVar16 = 1.0;
                      fVar15 = 3.0;
                    }
                  }
                  else {
LAB_04690aa8:
                    fVar16 = 2.5;
                    fVar15 = 2.5;
                  }
                }
                else {
                  fVar16 = 1.0;
                  fVar15 = 0.67;
                }
              }
              else {
                fVar16 = 1.0;
                fVar15 = 1.5;
              }
            }
            else {
LAB_046909f4:
              fVar16 = 2.0;
              fVar15 = 2.0;
            }
          }
          else {
LAB_046908ec:
            fVar16 = 1.5;
            fVar15 = 1.5;
          }
        }
        else {
          fVar16 = 1.25;
          fVar15 = 1.25;
        }
      }
      else {
        fVar16 = 3.0;
        fVar15 = 3.0;
      }
    }
    else {
      fVar15 = 4.0;
      fVar16 = fVar15;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 == '\0') {
      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
      if (cVar1 == '\0') {
        cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
        if (cVar1 == '\0') {
          fVar17 = 0.25;
          cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
          if (cVar1 == '\0') {
            fVar17 = 0.75;
            cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
            if (cVar1 == '\0') {
              fVar17 = 0.5;
              cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
              if (cVar1 == '\0') {
                fVar17 = 1.0;
                cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                if (cVar1 != '\0') {
                  fVar17 = 0.25;
                }
              }
            }
          }
        }
        else {
          fVar17 = 0.55;
        }
      }
      else {
        fVar17 = 0.7;
      }
    }
    else {
      fVar17 = 0.85;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (((((cVar1 != '\0') ||
          (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 != '\0'))
         || (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 != '\0')
         ) || ((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
               cVar1 != '\0' ||
               (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
               cVar1 != '\0')))) ||
       ((cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 != '\0' ||
        (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(), cVar1 != '\0'))))
    {
      fVar16 = 0.5;
      fVar15 = fVar16;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      fVar16 = 0.5;
      lVar4 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition();
      local_18[0] = 0.5 - *(float *)(lVar4 + 0xc);
      local_10[0] = 0.1;
      pfVar5 = eastl::max_alt<float>(local_18,local_10);
      fVar15 = *pfVar5;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      fVar16 = 0.25;
      fVar15 = fVar16;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      fVar15 = 0.5;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      fVar16 = 0.5;
      fVar15 = fVar16;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      fVar16 = 0.5;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      fVar15 = 0.5;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x5f);
      fVar16 = 1.0 - *(float *)(lVar4 + 0xc);
      fVar15 = fVar16;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      fVar15 = fVar15 + fVar15;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      fVar15 = 0.25;
      fVar16 = fVar16 * 0.25;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      fVar13 = (float)GetRageSpeed(in_x0);
      fVar15 = fVar15 * fVar13;
      fVar13 = (float)GetRageDamage(in_x0);
      fVar17 = fVar17 * fVar13;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      lVar4 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition();
      fVar15 = fVar15 * *(float *)(lVar4 + 0xc);
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      lVar4 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
      lVar6 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition();
      fVar13 = *(float *)(lVar6 + 0x14);
      if ((int)*(float *)(lVar6 + 0xc) < 3) {
        pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        pLVar10 = aLStack_28;
        std::string::string((string *)local_18,"SetPlantLevel3");
        cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar7,(wchar16 *)local_18,pLVar10,in_x3,in_x4);
        if (cVar1 != '\0') {
          std::string::~string((string *)local_18);
          nop();
          goto LAB_04690818;
        }
        pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        pLVar10 = aLStack_20;
        std::string::string((string *)local_10,"SetPlantLevel4");
        cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar7,(wchar16 *)local_10,pLVar10,in_x3,in_x4);
        std::string::~string((string *)local_10);
        nop();
        std::string::~string((string *)local_18);
        nop();
        if (cVar1 != '\0') goto LAB_04690818;
        fVar14 = *(float *)(lVar4 + 0xcc);
      }
      else {
LAB_04690818:
        fVar14 = *(float *)(lVar4 + 0xd0);
        fVar16 = fVar16 * *(float *)(lVar4 + 200);
      }
      fVar17 = fVar17 * (fVar13 + fVar14);
      lVar6 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition();
      if ((int)*(float *)(lVar6 + 0x10) == 1) {
        fVar15 = fVar15 * *(float *)(lVar4 + 0xd8);
      }
      else {
        fVar15 = fVar15 * *(float *)(lVar4 + 0xd4);
      }
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      lVar4 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition();
      fVar17 = *(float *)(lVar4 + 0xc) * fVar17 + fVar17;
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      lVar4 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition();
      fVar17 = fVar17 * *(float *)(lVar4 + 0xc);
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      lVar4 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
      fVar15 = fVar15 * *(float *)(lVar4 + 0xd4);
      fVar17 = fVar17 * *(float *)(lVar4 + 0xcc);
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      lVar4 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition();
      fVar15 = *(float *)(lVar4 + 0x10);
    }
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
      if (this_00 == (PlayerInfo *)0x0) {
        fVar16 = 0.5;
      }
      else {
        fVar16 = 0.5;
        std::string::string((string *)local_10,"shadowshroom");
        iVar3 = PlayerInfo::GetEquipAvatarID(this_00,(string *)local_10);
        std::string::~string((string *)local_10);
        nop();
        if (iVar3 != -1) {
          fVar15 = fVar16;
        }
      }
    }
    bVar11 = false;
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 != '\0') {
      lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x7d);
      fVar16 = *(float *)(lVar4 + 0xc);
    }
  }
  else {
    bVar12 = true;
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    bVar11 = true;
    if (cVar1 != '\0') goto LAB_046901b4;
LAB_0468fef4:
    fVar16 = 0.0;
    bVar11 = true;
    fVar17 = 1.0;
    fVar15 = fVar16;
  }
  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
  if (cVar1 != '\0') {
    fVar13 = 0.07;
    goto LAB_0468ff4c;
  }
  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
  if (cVar1 == '\0') {
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
    if (cVar1 == '\0') {
      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
      if (cVar1 != '\0') {
        lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x4c);
        fVar13 = *(float *)(lVar4 + 0xc);
        goto joined_r0x046902c4;
      }
      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
      if (cVar1 == '\0') {
        cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
        if (cVar1 == '\0') {
          cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
          if (cVar1 == '\0') {
            cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
            if (cVar1 == '\0') {
              cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
              if (cVar1 != '\0') {
                CreatureType::GetPropsPtr();
                cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
                if (cVar1 != '\0') {
                  lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x75);
                  fVar13 = *(float *)(lVar4 + 0xc);
                  goto LAB_0468ff4c;
                }
              }
              cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
              if (cVar1 != '\0') {
                CreatureType::GetPropsPtr();
                cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
                if (cVar1 != '\0') {
                  lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x7e);
                  fVar13 = *(float *)(lVar4 + 0xc);
                  goto LAB_0468ff4c;
                }
              }
              cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
              if (cVar1 == '\0') {
                cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                if (cVar1 == '\0') {
                  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                  if (cVar1 != '\0') {
                    CreatureType::GetPropsPtr();
                    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
                    if (cVar1 == '\0') goto LAB_04690b80;
                    uVar8 = *(undefined8 *)(in_x0 + 0x20);
                    uVar9 = 0x30;
LAB_04690c28:
                    lVar4 = FUN_0468dbbc(uVar8,uVar9);
                    fVar13 = *(float *)(lVar4 + 0xc);
                    CreatureType::GetPropsPtr();
                    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
                    fVar14 = (float)FUN_02fd4758(*(undefined4 *)(lVar4 + 0x284));
                    fVar13 = fVar13 / fVar14;
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
                    goto LAB_0468ff4c;
                  }
LAB_04690b80:
                  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                  if ((cVar1 != '\0') ||
                     (cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(),
                     cVar1 != '\0')) {
                    CreatureType::GetPropsPtr();
                    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
                    if (cVar1 != '\0') {
                      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                      if (cVar1 == '\0') {
                        uVar8 = *(undefined8 *)(in_x0 + 0x20);
                        uVar9 = 0x87;
                      }
                      else {
                        uVar8 = *(undefined8 *)(in_x0 + 0x20);
                        uVar9 = 0x89;
                      }
                      goto LAB_04690c28;
                    }
                  }
                  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                  if (cVar1 != '\0') {
                    CreatureType::GetPropsPtr();
                    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
                    if (cVar1 != '\0') {
                      uVar8 = *(undefined8 *)(in_x0 + 0x20);
                      uVar9 = 0x32;
                      goto LAB_04690c28;
                    }
                  }
                  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                  if (cVar1 != '\0') {
                    CreatureType::GetPropsPtr();
                    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
                    if (cVar1 != '\0') {
                      uVar8 = *(undefined8 *)(in_x0 + 0x20);
                      uVar9 = 0x54;
                      goto LAB_04690c28;
                    }
                  }
                  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                  if (cVar1 != '\0') {
                    CreatureType::GetPropsPtr();
                    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
                    if (cVar1 != '\0') {
                      uVar8 = *(undefined8 *)(in_x0 + 0x20);
                      uVar9 = 0x31;
                      goto LAB_04690c28;
                    }
                  }
                  cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition();
                  if (cVar1 != '\0') {
                    CreatureType::GetPropsPtr();
                    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_10);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
                    if (cVar1 != '\0') {
                      uVar8 = *(undefined8 *)(in_x0 + 0x20);
                      uVar9 = 0x8d;
                      goto LAB_04690c28;
                    }
                  }
                }
                else {
                  lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x65);
                  fVar13 = *(float *)(lVar4 + 0x10);
                  if (0.0 < fVar13) goto LAB_0468ff44;
                }
                fVar13 = 0.0;
                goto LAB_0468ff4c;
              }
              lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x76);
              fVar13 = *(float *)(lVar4 + 0xc);
              if (fVar13 <= 0.0) {
                fVar13 = 0.01;
                goto LAB_0468ff4c;
              }
            }
            else {
              lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x5d);
              fVar13 = *(float *)(lVar4 + 0xc);
              if (fVar13 <= 0.0) {
                fVar13 = 0.01;
                goto LAB_0468ff4c;
              }
            }
          }
          else {
            lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x4d);
            fVar13 = *(float *)(lVar4 + 0xc);
            if (fVar13 <= 0.0) {
              fVar13 = 0.01;
              goto LAB_0468ff4c;
            }
          }
        }
        else {
          lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x4f);
          fVar13 = *(float *)(lVar4 + 0xc);
          if (fVar13 <= 0.0) {
            fVar13 = 0.01;
            goto LAB_0468ff4c;
          }
        }
      }
      else {
        lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x8e);
        fVar13 = *(float *)(lVar4 + 0xc);
        if (fVar13 <= 0.0) {
          fVar13 = 0.01;
          goto LAB_0468ff4c;
        }
      }
    }
    else {
      lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x68);
      fVar13 = *(float *)(lVar4 + 0xc);
      if (fVar13 <= 0.0) {
        fVar13 = 0.01;
        goto LAB_0468ff4c;
      }
    }
  }
  else {
    lVar4 = FUN_0468dbbc(*(undefined8 *)(in_x0 + 0x20),0x2f);
    fVar13 = *(float *)(lVar4 + 0xc);
joined_r0x046902c4:
    if (fVar13 <= 0.0) {
      fVar13 = 0.01;
      goto LAB_0468ff4c;
    }
  }
LAB_0468ff44:
  fVar13 = fVar13 * 0.01;
LAB_0468ff4c:
  *(float *)(in_x0 + 0x38) = fVar15;
  *(float *)(in_x0 + 0x3c) = fVar16;
  *(float *)(in_x0 + 0x40) = fVar13;
  *(float *)(in_x0 + 0x44) = fVar17;
  uVar2 = EntityModifierToFlag(2);
  SetFlag<unsigned_int>((uint *)(in_x0 + 0x48),uVar2,bVar11);
  uVar2 = EntityModifierToFlag(4);
  SetFlag<unsigned_int>((uint *)(in_x0 + 0x48),uVar2,bVar12);
  recomputeScaleAndColor(in_x0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieConditionTracker::ZombieConditionTracker() */

void __thiscall ZombieConditionTracker::ZombieConditionTracker(ZombieConditionTracker *this)

{
  int iVar1;
  
  iVar1 = getConditionMaxCount();
  EntityConditionTracker<Zombie,ZombieConditions>::EntityConditionTracker
            ((EntityConditionTracker<Zombie,ZombieConditions> *)this,iVar1);
  *(undefined4 *)(this + 0x84) = 8;
  *(undefined ***)this = &PTR__ZombieConditionTracker_068a13b0;
  *(undefined4 *)(this + 0x78) = 0x3f800000;
  *(undefined4 *)(this + 0x7c) = 0xbf800000;
  *(undefined4 *)(this + 0x80) = 0xbf800000;
  return;
}

