// Class: SpaceDebrisDrawer


/* SpaceDebrisDrawer::GetDrawZ() */

undefined4 __thiscall SpaceDebrisDrawer::GetDrawZ(SpaceDebrisDrawer *this)

{
  return *(undefined4 *)(this + 0x28);
}


/* SpaceDebrisDrawer::GetScrollScale() */

undefined4 __thiscall SpaceDebrisDrawer::GetScrollScale(SpaceDebrisDrawer *this)

{
  return *(undefined4 *)(this + 0x2c);
}


/* SpaceDebrisDrawer::~SpaceDebrisDrawer() */

void __thiscall SpaceDebrisDrawer::~SpaceDebrisDrawer(SpaceDebrisDrawer *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 0x18))();
  }
  return;
}


/* SpaceDebrisDrawer::Update() */

void __thiscall SpaceDebrisDrawer::Update(SpaceDebrisDrawer *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(PopAnimRig **)this;
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_RealT();
    fVar2 = (float)PVZ_RealDt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2 * 0.38196602);
  }
  fVar2 = *(float *)(this + 0x34);
  fVar1 = (float)PVZ_RealDt();
  *(float *)(this + 0x30) = *(float *)(this + 0x30) + fVar2 * fVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpaceDebrisDrawer::initialize(Sexy::SexyVector2 const&) */

void __thiscall SpaceDebrisDrawer::initialize(SpaceDebrisDrawer *this,SexyVector2 *param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)ValueRange::GetRandomValue((ValueRange *)&DAT_06afd548);
  *(float *)(this + 0x2c) = fVar3;
  ValueRange::GetTimeForValue((ValueRange *)&DAT_06afd548,fVar3);
  uVar4 = ValueRange::GetInterpValue(&DAT_06afd3a0,1);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x28) = uVar4;
  local_18 = 0x3f800000;
  *(float *)(this + 0x14) = *(float *)(this + 0x14) * *(float *)(this + 0x2c);
  local_1c = 0;
  fVar3 = CurveEvaluate<float>(&local_1c,(Insets *)&local_18,1);
  iVar2 = (int)(fVar3 * 255.0);
  Sexy::Insets::Insets((Insets *)&local_18,iVar2,iVar2,iVar2,0xff);
  *(ulong *)(this + 0x18) = CONCAT44(uStack_14,local_18);
  *(undefined8 *)(this + 0x20) = uStack_10;
  uVar4 = Sexy::Rand(360.0);
  *(undefined4 *)(this + 0x30) = uVar4;
  uVar4 = ValueRange::GetRandomValue((ValueRange *)&DAT_06afd4d0);
  *(undefined4 *)(this + 0x34) = uVar4;
  uVar4 = Sexy::Rand(1.0);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x38) = uVar4;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpaceDebrisDrawer::SpaceDebrisDrawer(PopAnimRig*, Sexy::SexyVector2 const&, std::string const&)
    */

void __thiscall
SpaceDebrisDrawer::SpaceDebrisDrawer
          (SpaceDebrisDrawer *this,PopAnimRig *param_1,SexyVector2 *param_2,string *param_3)

{
  bool bVar1;
  char cVar2;
  long *extraout_x0;
  PopAnimRig *pPVar3;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  Sexy::Color::Color((Color *)(this + 0x18));
  *(undefined8 *)(this + 8) = 0;
  *(PopAnimRig **)this = param_1;
  pPVar3 = (PopAnimRig *)0x0;
  if (param_1 != (PopAnimRig *)0x0) {
    bVar1 = Sexy::RtObject::IsA<PlantAnimRig>((RtObject *)param_1);
    if ((bVar1) && (cVar2 = FUN_0547419c(param_3), cVar2 != '\0')) {
      nop();
      (**(code **)(*extraout_x0 + 0x118))();
      goto LAB_04371ba0;
    }
    pPVar3 = *(PopAnimRig **)this;
  }
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar3,param_3,0,aDStack_38);
LAB_04371ba0:
  initialize(this,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpaceDebrisDrawer::SpaceDebrisDrawer(Sexy::Image*, Sexy::SexyVector2 const&) */

void __thiscall
SpaceDebrisDrawer::SpaceDebrisDrawer(SpaceDebrisDrawer *this,Image *param_1,SexyVector2 *param_2)

{
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  Sexy::Color::Color((Color *)(this + 0x18));
  *(undefined8 *)this = 0;
  *(Image **)(this + 8) = param_1;
  initialize(this,param_2);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04371d98 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* SpaceDebrisDrawer::Draw(Sexy::Graphics*, float) */

void __thiscall SpaceDebrisDrawer::Draw(SpaceDebrisDrawer *this,Graphics *param_1,float param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  float fVar3;
  undefined1 extraout_var [12];
  float fVar4;
  float fVar5;
  float fVar6;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)this == 0) {
    fVar4 = (float)(*(int *)(*(long *)(this + 8) + 0x38) / 2);
    fVar6 = (float)(*(int *)(*(long *)(this + 8) + 0x3c) / 2);
  }
  else {
    lVar2 = FUN_04370c94(*(undefined8 *)(*(long *)this + 0x20));
    Sexy::Insets::Insets((Insets *)&local_40,(Insets *)(lVar2 + 0x34));
    lVar2 = FUN_04370c94(*(undefined8 *)(*(long *)this + 0x20));
    fVar4 = (float)local_40 + (float)(int)((float)local_38 * *(float *)(lVar2 + 0x28)) * 0.5;
    fVar6 = (float)local_3c + (float)(int)((float)local_34 * *(float *)(lVar2 + 0x28)) * 0.5;
  }
  fVar3 = (float)Sexy::SexyMath::DegToRad(*(float *)(this + 0x30));
  fVar5 = *(float *)(this + 0x28);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,fVar4,fVar6);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyVector2 *)(this + 0x10),fVar3,fVar5,(SexyVector2 *)&local_40,true);
  FUN_04370ddc(param_2 * *(float *)(this + 0x2c),auStack_28,auStack_1c);
  fVar4 = (float)PVZ_RealT();
  fVar4 = fmodf(fVar4 + *(float *)(this + 0x38) * 7.5,7.5);
  local_40 = 0xc1200000;
  auVar1._4_12_ = extraout_var;
  auVar1._0_4_ = fVar4;
  CurveLerp<float>(auVar1,0x40f00000,fVar4,(FastCurve *)&local_40,&DAT_05753560,0xc);
  fVar4 = (float)FUN_04370e00();
  FUN_04370ddc(fVar4 * *(float *)(this + 0x28),auStack_28,auStack_1c);
  if (*(PopAnimRig **)this == (PopAnimRig *)0x0) {
    if (*(Image **)(this + 8) != (Image *)0x0) {
      Sexy::Graphics::DrawImageMatrix
                (param_1,*(Image **)(this + 8),(SexyMatrix3 *)aSStack_30,0.0,0.0);
    }
  }
  else {
    PopAnimRig::SetPAMColor(*(PopAnimRig **)this,(Color *)(this + 0x18));
    PopAnimRig::Draw(*(PopAnimRig **)this,param_1,aSStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

