// Class: Effect_PopAnim


/* Effect_PopAnim::OnAnimCommand(std::string const&, std::string const&) */

void Effect_PopAnim::OnAnimCommand(string *param_1,string *param_2)

{
  return;
}


/* Effect_PopAnim::GetPopAnimRigPtr() const */

RtWeakPtr<Sexy::SoundResource> * Effect_PopAnim::GetPopAnimRigPtr(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0xa0));
  return in_x8;
}


/* Effect_PopAnim::RecAnimCommand(std::string const&, float, std::string const&, std::string const&)
    */

float Effect_PopAnim::RecAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  if (*(code **)(*(long *)param_1 + 200) != OnAnimCommand) {
    param_2 = (float)(**(code **)(*(long *)param_1 + 200))(param_1,param_4);
  }
  return param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PopAnim::onInitialized() */

void __thiscall Effect_PopAnim::onInitialized(Effect_PopAnim *this)

{
  long lVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(undefined4 *)(this + 0xd4) = 0x3f800000;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,0.0,0.0);
  *(undefined8 *)(this + 0xdc) = local_38;
  Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)&local_30,true);
  *(undefined8 *)(this + 0xe4) = local_30;
  *(undefined8 *)(this + 0xec) = uStack_28;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x104) = local_10;
  *(undefined8 *)(this + 0xf4) = local_20;
  *(undefined8 *)(this + 0xfc) = uStack_18;
  this[0x108] = (Effect_PopAnim)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PopAnim::StaticClassInit() */

void Effect_PopAnim::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AnimationSequenceEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_03cced48,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AnimationSequence");
    (*pcVar3)(plVar2,asStack_10,FUN_03ccff24,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Effect_PopAnim");
    (*pcVar3)(plVar2,asStack_10,FUN_03cd0004,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_PopAnim::StaticGetClass() */

long * Effect_PopAnim::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_PopAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_PopAnim::GetClass() const */

long * Effect_PopAnim::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_PopAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_PopAnim::SetColor(Sexy::Color const&) */

void __thiscall Effect_PopAnim::SetColor(Effect_PopAnim *this,Color *param_1)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0))
  ;
  PopAnimRig::SetPAMColor(this_00,param_1);
  return;
}


/* Effect_PopAnim::SetMultiplicativeOverlayColor(Sexy::Color const&) */

void __thiscall Effect_PopAnim::SetMultiplicativeOverlayColor(Effect_PopAnim *this,Color *param_1)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0))
  ;
  PopAnimRig::SetMultiplicativeOverlayColor(this_00,param_1);
  return;
}


/* Effect_PopAnim::ClearMultiplicativeOverlayColor() */

void __thiscall Effect_PopAnim::ClearMultiplicativeOverlayColor(Effect_PopAnim *this)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0))
  ;
  PopAnimRig::ClearMultiplicativeOverlayColor(this_00);
  return;
}


/* Effect_PopAnim::SetShaderOverrideColor(Sexy::Color const&) */

void __thiscall Effect_PopAnim::SetShaderOverrideColor(Effect_PopAnim *this,Color *param_1)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0))
  ;
  PopAnimRig::SetShaderOverrideColor(this_00,param_1);
  return;
}


/* Effect_PopAnim::ClearShaderOverrideColor() */

void __thiscall Effect_PopAnim::ClearShaderOverrideColor(Effect_PopAnim *this)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0))
  ;
  PopAnimRig::ClearShaderOverrideColor(this_00);
  return;
}


/* Effect_PopAnim::onDraw(Sexy::Graphics*) */

void __thiscall Effect_PopAnim::onDraw(Effect_PopAnim *this,Graphics *param_1)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0))
  ;
  PopAnimRig::Draw(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PopAnim::GetDimensions() */

void __thiscall Effect_PopAnim::GetDimensions(Effect_PopAnim *this)

{
  long *plVar1;
  FastCurve local_20 [8];
  Insets aIStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18);
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
  (**(code **)(*plVar1 + 0x90))(plVar1,aIStack_18);
  Sexy::FastCurve::SetOutRange(local_20,(float)local_10,(float)local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_20._0_4_,local_20._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PopAnim::setRigTransform() */

void __thiscall Effect_PopAnim::setRigTransform(Effect_PopAnim *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  undefined4 *puVar2;
  PopAnimRig *this_01;
  long lVar3;
  float fVar4;
  float local_60;
  float local_5c;
  SexyTransform2D aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_58,true);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    Sexy::SexyTransform2D::Scale(aSStack_58,*(float *)(this + 0xd0),*(float *)(this + 0xd4));
    if ((*(float *)(this + 200) == 0.0) && (*(float *)(this + 0xcc) == 0.0)) {
      fVar4 = *(float *)(this + 0xd8);
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      lVar3 = FUN_03ccec44(*(undefined8 *)(lVar3 + 0x20));
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_60,(float)*(int *)(lVar3 + 0x3c),(float)*(int *)(lVar3 + 0x40))
      ;
      local_60 = *(float *)(lVar3 + 0x28) * local_60 * *(float *)(this + 0xd0);
      local_5c = *(float *)(lVar3 + 0x28) * local_5c * *(float *)(this + 0xd4);
      FUN_03cceb70(-(*(float *)(this + 200) * local_60),-(*(float *)(this + 0xcc) * local_5c),
                   auStack_50,auStack_44);
      fVar4 = *(float *)(this + 0xd8);
    }
    if (fVar4 != 0.0) {
      Sexy::SexyTransform2D::RotateRad(aSStack_58,fVar4);
    }
    Sexy::SexyMatrix3::Multiply
              ((SexyMatrix3 *)aSStack_30,(SexyMatrix3 *)(this + 0xe4),(SexyMatrix3 *)aSStack_58);
    puVar2 = (undefined4 *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)this);
    FUN_03cceb70(*puVar2,puVar2[1],auStack_28,auStack_1c);
    FUN_03cceb70(*(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xe0),auStack_28,auStack_1c);
    this_01 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::SetRenderTransform(this_01,aSStack_30);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PopAnim::onOriginChanged() */

void __thiscall Effect_PopAnim::onOriginChanged(Effect_PopAnim *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  undefined4 *puVar2;
  PopAnimRig *this_01;
  long lVar3;
  float fVar4;
  float fStack_60;
  float fStack_5c;
  SexyTransform2D aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long lStack_8;
  
  this_00 = (RtWeakPtr *)(this + 0xa0);
  lStack_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_58,true);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    Sexy::SexyTransform2D::Scale(aSStack_58,*(float *)(this + 0xd0),*(float *)(this + 0xd4));
    if ((*(float *)(this + 200) == 0.0) && (*(float *)(this + 0xcc) == 0.0)) {
      fVar4 = *(float *)(this + 0xd8);
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      lVar3 = FUN_03ccec44(*(undefined8 *)(lVar3 + 0x20));
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&fStack_60,(float)*(int *)(lVar3 + 0x3c),(float)*(int *)(lVar3 + 0x40)
                );
      fStack_60 = *(float *)(lVar3 + 0x28) * fStack_60 * *(float *)(this + 0xd0);
      fStack_5c = *(float *)(lVar3 + 0x28) * fStack_5c * *(float *)(this + 0xd4);
      FUN_03cceb70(-(*(float *)(this + 200) * fStack_60),-(*(float *)(this + 0xcc) * fStack_5c),
                   auStack_50,auStack_44);
      fVar4 = *(float *)(this + 0xd8);
    }
    if (fVar4 != 0.0) {
      Sexy::SexyTransform2D::RotateRad(aSStack_58,fVar4);
    }
    Sexy::SexyMatrix3::Multiply
              ((SexyMatrix3 *)aSStack_30,(SexyMatrix3 *)(this + 0xe4),(SexyMatrix3 *)aSStack_58);
    puVar2 = (undefined4 *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)this);
    FUN_03cceb70(*puVar2,puVar2[1],auStack_28,auStack_1c);
    FUN_03cceb70(*(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xe0),auStack_28,auStack_1c);
    this_01 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    PopAnimRig::SetRenderTransform(this_01,aSStack_30);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Effect_PopAnim::SetCentered(bool) */

void __thiscall Effect_PopAnim::SetCentered(Effect_PopAnim *this,bool param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f000000;
  if (!param_1) {
    uVar1 = 0;
  }
  *(undefined4 *)(this + 200) = uVar1;
  *(undefined4 *)(this + 0xcc) = uVar1;
  setRigTransform(this);
  return;
}


/* Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions(float, float) */

void __thiscall
Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions
          (Effect_PopAnim *this,float param_1,float param_2)

{
  *(float *)(this + 200) = param_1;
  *(float *)(this + 0xcc) = param_2;
  setRigTransform(this);
  return;
}


/* Effect_PopAnim::SetScale(float) */

void __thiscall Effect_PopAnim::SetScale(Effect_PopAnim *this,float param_1)

{
  *(float *)(this + 0xd0) = param_1;
  *(float *)(this + 0xd4) = param_1;
  setRigTransform(this);
  return;
}


/* Effect_PopAnim::SetScale(float, float) */

void __thiscall Effect_PopAnim::SetScale(Effect_PopAnim *this,float param_1,float param_2)

{
  *(float *)(this + 0xd0) = param_1;
  *(float *)(this + 0xd4) = param_2;
  setRigTransform(this);
  return;
}


/* Effect_PopAnim::SetSkewTransform(Sexy::SexyTransform2D) */

void __thiscall Effect_PopAnim::SetSkewTransform(Effect_PopAnim *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(this + 0x104) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(this + 0xe4) = uVar1;
  *(undefined8 *)(this + 0xec) = uVar3;
  *(undefined8 *)(this + 0xf4) = uVar2;
  *(undefined8 *)(this + 0xfc) = uVar4;
  setRigTransform(this);
  return;
}


/* Effect_PopAnim::SetTranslation(Sexy::SexyVector2) */

void Effect_PopAnim::SetTranslation(undefined4 param_1,undefined4 param_2,Effect_PopAnim *param_3)

{
  *(ulong *)(param_3 + 0xdc) = CONCAT44(param_2,param_1);
  setRigTransform(param_3);
  return;
}


/* Effect_PopAnim::SetOrientation(float) */

void __thiscall Effect_PopAnim::SetOrientation(Effect_PopAnim *this,float param_1)

{
  *(float *)(this + 0xd8) = param_1;
  setRigTransform(this);
  return;
}


/* Effect_PopAnim::SetOrientation(Sexy::SexyVector2 const&) */

void __thiscall Effect_PopAnim::SetOrientation(Effect_PopAnim *this,SexyVector2 *param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  
  fVar3 = 0.0001;
  if ((ABS(*(float *)param_1) < 0.0001) && (ABS(*(float *)(param_1 + 4)) < 0.0001)) {
    return;
  }
  fVar1 = (float)Sexy::SexyVector2::Normalize(param_1);
  dVar2 = atan2((double)-fVar3,(double)fVar1);
  fVar3 = (float)dVar2;
  if (0.0 <= fVar3) {
    SetOrientation(this,fVar3);
    return;
  }
  SetOrientation(this,fVar3 + 6.2831855);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PopAnim::SetPopAnimDelegates() */

void __thiscall Effect_PopAnim::SetPopAnimDelegates(Effect_PopAnim *this)

{
  TimeChallengeEndLevelUI *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (TimeChallengeEndLevelUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RecAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<Effect_PopAnim,void(Effect_PopAnim::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_PopAnim::Effect_PopAnim() */

void __thiscall Effect_PopAnim::Effect_PopAnim(Effect_PopAnim *this)

{
  StandaloneEffect::StandaloneEffect((StandaloneEffect *)this);
  *(undefined ***)this = &PTR_GetClass_0675f5f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xa8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xdc));
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)(this + 0xe4));
  return;
}


/* Effect_PopAnim::StaticNew() */

Effect_PopAnim * Effect_PopAnim::StaticNew(void)

{
  Effect_PopAnim *this;
  
  this = ::operator_new(0x110);
  Effect_PopAnim(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PopAnim::advanceAnimSequence() */

void __thiscall Effect_PopAnim::advanceAnimSequence(Effect_PopAnim *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  PopAnimRig *pPVar5;
  undefined4 uVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xc0) = iVar1 + 1;
  iVar2 = AnimationSequence::GetEntryCount((AnimationSequence *)(this + 0xa8));
  if (iVar1 + 1 < iVar2) {
    lVar3 = AnimationSequence::GetEntry((AnimationSequence *)(this + 0xa8),*(int *)(this + 0xc0));
    if (*(float *)(lVar3 + 0xc) <= 0.0) {
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
      uVar6 = *(undefined4 *)(lVar3 + 8);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop
                (pPVar5,lVar3,uVar6,
                 (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else {
      lVar4 = FUN_05474184();
      if (lVar4 != 0) {
        pPVar5 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
        uVar6 = *(undefined4 *)(lVar3 + 8);
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
        PopAnimRig::PlayAndContinue(pPVar5,lVar3,uVar6,aDStack_50);
      }
    }
    uVar6 = PVZ_T();
    *(undefined4 *)(this + 0xc4) = uVar6;
  }
  else {
    StandaloneEffect::triggerCompletion((StandaloneEffect *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_PopAnim::startAnimSequence() */

void __thiscall Effect_PopAnim::startAnimSequence(Effect_PopAnim *this)

{
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  advanceAnimSequence(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PopAnim::onAnimStopped(std::string const&) */

void Effect_PopAnim::onAnimStopped(string *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  PopAnimRig *pPVar5;
  undefined4 uVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long lStack_8;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  lStack_8 = ___stack_chk_guard;
  *(int *)(param_1 + 0xc0) = iVar1 + 1;
  iVar2 = AnimationSequence::GetEntryCount((AnimationSequence *)(param_1 + 0xa8));
  if (iVar1 + 1 < iVar2) {
    lVar3 = AnimationSequence::GetEntry
                      ((AnimationSequence *)(param_1 + 0xa8),*(int *)(param_1 + 0xc0));
    if (*(float *)(lVar3 + 0xc) <= 0.0) {
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa0));
      uVar6 = *(undefined4 *)(lVar3 + 8);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop
                (pPVar5,lVar3,uVar6,
                 (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else {
      lVar4 = FUN_05474184();
      if (lVar4 != 0) {
        pPVar5 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa0));
        uVar6 = *(undefined4 *)(lVar3 + 8);
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
        PopAnimRig::PlayAndContinue(pPVar5,lVar3,uVar6,aDStack_50);
      }
    }
    uVar6 = PVZ_T();
    *(undefined4 *)(param_1 + 0xc4) = uVar6;
  }
  else {
    StandaloneEffect::triggerCompletion((StandaloneEffect *)param_1);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_PopAnim::onUpdate() */

void __thiscall Effect_PopAnim::onUpdate(Effect_PopAnim *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  PopAnimRig *this_00;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(this + 0xc0);
  if (-1 < iVar1) {
    iVar2 = AnimationSequence::GetEntryCount((AnimationSequence *)(this + 0xa8));
    if (iVar1 < iVar2) {
      lVar3 = AnimationSequence::GetEntry((AnimationSequence *)(this + 0xa8),*(int *)(this + 0xc0));
      fVar5 = *(float *)(lVar3 + 0xc);
      if (((0.0 < fVar5) && (fVar4 = (float)PVZ_EOT(), fVar5 < fVar4)) &&
         (fVar4 = (float)PVZ_T(), fVar5 < fVar4 - *(float *)(this + 0xc4))) {
        advanceAnimSequence(this);
      }
    }
  }
  if (this[0x108] == (Effect_PopAnim)0x0) {
    return;
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0))
  ;
  fVar5 = (float)PVZ_T();
  fVar4 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar5,fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PopAnim::CreatePopAnimRig(std::string const&, std::string const&) */

void __thiscall
Effect_PopAnim::CreatePopAnimRig(Effect_PopAnim *this,string *param_1,string *param_2)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  ResourceInfo *pRVar2;
  long *plVar3;
  char *pcVar4;
  RtClass *pRVar5;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtMixedPtrBase *)(this + 0xa0);
  GetPAMByName(param_1);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  pcVar4 = (char *)FUN_0547429c(param_2);
  pRVar5 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar4);
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar5);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  setRigTransform(this);
  MessageRouter::Post<Effect_PopAnim*,Effect_PopAnim*>
            ((MessageRouter *)gMessageRouter,Message::NotifyPopAnimCreated,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PopAnim::CreatePopAnimRig(Sexy::PopAnim*, Sexy::RtClass*) */

void __thiscall
Effect_PopAnim::CreatePopAnimRig(Effect_PopAnim *this,PopAnim *param_1,RtClass *param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (RtClass *)0x0) {
    param_2 = (RtClass *)PopAnimRig::StaticGetClass();
  }
  PopAnimRig::CreateRig(param_1,param_2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  setRigTransform(this);
  MessageRouter::Post<Effect_PopAnim*,Effect_PopAnim*>
            ((MessageRouter *)gMessageRouter,Message::NotifyPopAnimCreated,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_PopAnim::clearAnimSequence() */

void __thiscall Effect_PopAnim::clearAnimSequence(Effect_PopAnim *this)

{
  undefined4 uVar1;
  
  AnimationSequence::Clear((AnimationSequence *)(this + 0xa8));
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xc4) = uVar1;
  return;
}


/* Effect_PopAnim::~Effect_PopAnim() */

void __thiscall Effect_PopAnim::~Effect_PopAnim(Effect_PopAnim *this)

{
  bool bVar1;
  long *plVar2;
  RtWeakPtr *this_00;
  
  this_00 = (RtWeakPtr *)(this + 0xa0);
  *(undefined ***)this = &PTR_GetClass_0675f5f0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  AnimationSequence::~AnimationSequence((AnimationSequence *)(this + 0xa8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::~StandaloneEffect((StandaloneEffect *)this);
  return;
}


/* Effect_PopAnim::~Effect_PopAnim() */

void __thiscall Effect_PopAnim::~Effect_PopAnim(Effect_PopAnim *this)

{
  ~Effect_PopAnim(this);
  AK::FreeHook(this);
  return;
}


/* Effect_PopAnim::PlayAnimationSequence(AnimationSequence const&) */

void __thiscall
Effect_PopAnim::PlayAnimationSequence(Effect_PopAnim *this,AnimationSequence *param_1)

{
  clearAnimSequence(this);
  AnimationSequence::operator=((AnimationSequence *)(this + 0xa8),param_1);
  startAnimSequence(this);
  return;
}


/* Effect_PopAnim::PlaySingleAnimation(std::string const&, AnimSelectionMethod) */

void __thiscall
Effect_PopAnim::PlaySingleAnimation(Effect_PopAnim *this,undefined8 param_1,undefined8 param_3)

{
  clearAnimSequence(this);
  AnimationSequence::AddSingleAnimation(this + 0xa8,param_1,param_3);
  startAnimSequence(this);
  return;
}


/* Effect_PopAnim::PlayLoopingAnimation(std::string const&, float, AnimSelectionMethod) */

void __thiscall
Effect_PopAnim::PlayLoopingAnimation
          (undefined8 param_1_00,Effect_PopAnim *this,undefined8 param_1,undefined8 param_4)

{
  clearAnimSequence(this);
  AnimationSequence::AddLoopingAnimation(param_1_00,this + 0xa8,param_1,param_4);
  startAnimSequence(this);
  return;
}


/* Effect_PopAnim::PlaySingleAndLoopingAnimation(std::string const&, std::string const&, float,
   AnimSelectionMethod) */

void __thiscall
Effect_PopAnim::PlaySingleAndLoopingAnimation
          (undefined8 param_1_00,Effect_PopAnim *this,undefined8 param_1,undefined8 param_2,
          undefined4 param_5)

{
  clearAnimSequence(this);
  AnimationSequence::AddSingleAnimation(this + 0xa8,param_1,param_5);
  AnimationSequence::AddLoopingAnimation(param_1_00,this + 0xa8,param_2,param_5);
  startAnimSequence(this);
  return;
}

