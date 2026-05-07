// Class: PresentDisplayRect


/* PresentDisplayRect::SetPAMScale(float) */

void __thiscall PresentDisplayRect::SetPAMScale(PresentDisplayRect *this,float param_1)

{
  *(float *)(this + 0xa8) = param_1;
  return;
}


/* PresentDisplayRect::SetRect(Sexy::TRect<int> const&) */

void __thiscall PresentDisplayRect::SetRect(PresentDisplayRect *this,TRect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 4) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xc) = uVar1;
  return;
}


/* PresentDisplayRect::SetContentsEffect(StandaloneEffect*, float) */

void __thiscall
PresentDisplayRect::SetContentsEffect
          (PresentDisplayRect *this,StandaloneEffect *param_1,float param_2)

{
  *(float *)(this + 0x40) = param_2;
  *(StandaloneEffect **)(this + 0x38) = param_1;
  return;
}


/* PresentDisplayRect::Translate(float, float) */

void __thiscall PresentDisplayRect::Translate(PresentDisplayRect *this,float param_1,float param_2)

{
  *(int *)(this + 4) = (int)(param_1 + (float)*(int *)(this + 4));
  *(int *)(this + 8) = (int)(param_2 + (float)*(int *)(this + 8));
  return;
}


/* PresentDisplayRect::IsDone() const */

bool __thiscall PresentDisplayRect::IsDone(PresentDisplayRect *this)

{
  return *(int *)this == 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentDisplayRect::BuildRig(Sexy::PopAnim*, std::string const&, std::string const&) */

void __thiscall
PresentDisplayRect::BuildRig
          (PresentDisplayRect *this,PopAnim *param_1,string *param_2,string *param_3)

{
  RtClass *pRVar1;
  PopAnimRig *pPVar2;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(this + 0x20,param_2);
  thunk_FUN_05475e00(this + 0x28,param_3);
  pRVar1 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar2 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(param_1,pRVar1);
  *(PopAnimRig **)(this + 0x18) = pPVar2;
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,this + 0x20,0,aDStack_38);
  PopAnimRig::RandomizeCurrentAnimFrame(*(PopAnimRig **)(this + 0x18));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresentDisplayRect::Update() */

void __thiscall PresentDisplayRect::Update(PresentDisplayRect *this)

{
  char cVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  this_00 = *(PopAnimRig **)(this + 0x18);
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  if (*(StandaloneEffect **)(this + 0x38) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x38));
  }
  if ((*(int *)this == 1) &&
     (cVar1 = PopAnimRig::IsPlayingAnything(*(PopAnimRig **)(this + 0x18)), cVar1 == '\0')) {
    *(undefined4 *)this = 2;
    return;
  }
  return;
}


/* PresentDisplayRect::PresentDisplayRect() */

void __thiscall PresentDisplayRect::PresentDisplayRect(PresentDisplayRect *this)

{
  undefined4 uVar1;
  
  Sexy::Insets::Insets((Insets *)(this + 4));
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x48));
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x68));
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x88));
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0xa8) = 0x3f800000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentDisplayRect::Draw(Sexy::Graphics*) */

void __thiscall PresentDisplayRect::Draw(PresentDisplayRect *this,Graphics *param_1)

{
  long lVar1;
  SexyVector2 *extraout_x1;
  StandaloneEffect *this_00;
  float fVar2;
  float fVar3;
  GraphicsAutoState aGStack_60 [8];
  float local_58;
  float local_54;
  ResistenceValueInfo aRStack_50 [8];
  float local_48;
  float local_44;
  FastCurve aFStack_40 [8];
  undefined4 local_38;
  float local_34;
  SexyTransform2D local_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  Sexy::Graphics::Translate(param_1,*(int *)(this + 4),*(int *)(this + 8));
  lVar1 = FUN_0431b3fc(*(undefined8 *)(*(long *)(this + 0x18) + 0x20));
  fVar2 = (float)*(int *)(lVar1 + 0x40);
  fVar3 = ((float)*(int *)(this + 0x10) / (fVar2 * *(float *)(lVar1 + 0x28))) *
          *(float *)(this + 0xa8);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,(float)*(int *)(lVar1 + 0x3c),fVar2);
  local_38 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_58,*(float *)(lVar1 + 0x28));
  local_34 = fVar2;
  local_58 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)&local_38,fVar3);
  local_54 = fVar2;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_50);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_38,(float)(*(int *)(this + 0xc) / 2),
             (float)(*(int *)(this + 0x10) / 2));
  Sexy::TPoint<float>::operator+=((TPoint<float> *)aRStack_50,(TPoint *)&local_38);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,-(local_58 * 0.5),-(local_54 * 0.5));
  Sexy::TPoint<float>::operator+=((TPoint<float> *)aRStack_50,(TPoint *)&local_38);
  Sexy::SexyTransform2D::SexyTransform2D(local_30);
  Sexy::SexyTransform2D::CreateTransform((SexyTransform2D *)aRStack_50,extraout_x1,0.0,fVar3);
  PopAnimRig::Draw(*(PopAnimRig **)(this + 0x18),param_1,local_30);
  fVar2 = (float)PVZ_EOT();
  if ((*(float *)(this + 0x30) < fVar2) && (*(long *)(this + 0x38) != 0)) {
    fVar2 = (float)PVZ_T();
    fVar2 = (float)TimeLineTrack<float>::GetValueAt
                             ((TimeLineTrack<float> *)(this + 0x48),fVar2 - *(float *)(this + 0x30))
    ;
    fVar3 = (float)PVZ_T();
    fVar3 = (float)TimeLineTrack<float>::GetValueAt
                             ((TimeLineTrack<float> *)(this + 0x68),fVar3 - *(float *)(this + 0x30))
    ;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,fVar2,fVar3);
    local_48 = local_48 * (float)*(int *)(this + 0xc);
    local_44 = local_44 * (float)*(int *)(this + 0x10);
    fVar2 = (float)PVZ_T();
    fVar2 = (float)TimeLineTrack<float>::GetValueAt
                             ((TimeLineTrack<float> *)(this + 0x88),fVar2 - *(float *)(this + 0x30))
    ;
    this_00 = *(StandaloneEffect **)(this + 0x38);
    fVar3 = (float)(*(int *)(this + 0x10) / 2);
    Sexy::FastCurve::SetOutRange(aFStack_40,(float)(*(int *)(this + 0xc) / 2),fVar3);
    local_38 = Sexy::SexyVector2::operator+((SexyVector2 *)aFStack_40,(SexyVector2 *)&local_48);
    local_34 = fVar3;
    StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)&local_38,0);
    (**(code **)(**(long **)(this + 0x38) + 0x80))
              (fVar2 * *(float *)(this + 0x40),*(long **)(this + 0x38));
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x38),param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PresentDisplayRect::~PresentDisplayRect() */

void __thiscall PresentDisplayRect::~PresentDisplayRect(PresentDisplayRect *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x18))();
    *(undefined8 *)(this + 0x18) = 0;
  }
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 0x18))();
    *(undefined8 *)(this + 0x38) = 0;
  }
  TimeLineTrack<float>::~TimeLineTrack((TimeLineTrack<float> *)(this + 0x88));
  TimeLineTrack<float>::~TimeLineTrack((TimeLineTrack<float> *)(this + 0x68));
  TimeLineTrack<float>::~TimeLineTrack((TimeLineTrack<float> *)(this + 0x48));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentDisplayRect::buildTimelines() */

void __thiscall PresentDisplayRect::buildTimelines(PresentDisplayRect *this)

{
  TimeLineTrack<float> *this_00;
  TimeLineTrack<float> *this_01;
  TimeLineTrack<float> *this_02;
  undefined4 local_c;
  long local_8;
  
  this_00 = (TimeLineTrack<float> *)(this + 0x88);
  local_8 = ___stack_chk_guard;
  this_01 = (TimeLineTrack<float> *)(this + 0x48);
  this_02 = (TimeLineTrack<float> *)(this + 0x68);
  TimeLineTrack<float>::Initialize(this_00,0.0);
  local_c = 0;
  TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)0x3f800000,this_00,&local_c,4);
  local_c = 0x3f800000;
  TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)0x3fc00000,this_00,&local_c,1);
  TimeLineTrack<float>::Initialize(this_01,0.0);
  local_c = 0;
  TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)0x3f800000,this_01,&local_c,3);
  local_c = 0x3e99999a;
  TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)0x3fc00000,this_01,&local_c,0);
  TimeLineTrack<float>::Initialize(this_02,0.4);
  local_c = 0x3ecccccd;
  TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)0x3f800000,this_02,&local_c,3);
  local_c = 0xbe19999a;
  TimeLineTrack<float>::AddKeyFrame((TimeLineTrack<float> *)0x3fc00000,this_02,&local_c,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PresentDisplayRect::Tap(Sexy::Point const&) */

void __thiscall PresentDisplayRect::Tap(PresentDisplayRect *this,Point *param_1)

{
  char cVar1;
  char *pcVar2;
  PopAnimRig *pPVar3;
  undefined4 uVar4;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)this == 0) &&
     (cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 4),(TPoint *)param_1), cVar1 != '\0')
     ) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Lunchbox_Open");
    pPVar3 = *(PopAnimRig **)(this + 0x18);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(pPVar3,this + 0x28,0,aDStack_38);
    *(undefined4 *)this = 1;
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0x30) = uVar4;
    buildTimelines(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

