// Class: Effect_GroundEffectSurf


/* Effect_GroundEffectSurf::~Effect_GroundEffectSurf() */

void __thiscall Effect_GroundEffectSurf::~Effect_GroundEffectSurf(Effect_GroundEffectSurf *this)

{
  *(undefined ***)this = &PTR_GetClass_0675fc20;
  Effect_BeachWaterWave::~Effect_BeachWaterWave((Effect_BeachWaterWave *)this);
  return;
}


/* Effect_GroundEffectSurf::~Effect_GroundEffectSurf() */

void __thiscall Effect_GroundEffectSurf::~Effect_GroundEffectSurf(Effect_GroundEffectSurf *this)

{
  ~Effect_GroundEffectSurf(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_GroundEffectSurf::StaticClassInit() */

void Effect_GroundEffectSurf::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"Effect_GroundEffectSurf");
    (*pcVar2)(plVar1,asStack_10,FUN_03cd6410,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_GroundEffectSurf::StaticGetClass() */

long * Effect_GroundEffectSurf::StaticGetClass(void)

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
  uVar2 = Effect_BeachWaterWave::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_GroundEffectSurf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_GroundEffectSurf::GetClass() const */

long * Effect_GroundEffectSurf::GetClass(void)

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
  uVar2 = Effect_BeachWaterWave::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_GroundEffectSurf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_GroundEffectSurf::Effect_GroundEffectSurf() */

void __thiscall Effect_GroundEffectSurf::Effect_GroundEffectSurf(Effect_GroundEffectSurf *this)

{
  undefined4 uVar1;
  
  Effect_BeachWaterWave::Effect_BeachWaterWave((Effect_BeachWaterWave *)this);
  uVar1 = _FUN_03cd65a8;
  *(undefined ***)this = &PTR_GetClass_0675fc20;
  *(undefined4 *)(this + 0x110) = uVar1;
  return;
}


/* Effect_GroundEffectSurf::StaticNew() */

Effect_GroundEffectSurf * Effect_GroundEffectSurf::StaticNew(void)

{
  Effect_GroundEffectSurf *this;
  
  this = ::operator_new(0x118);
  Effect_GroundEffectSurf(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_GroundEffectSurf::IsDone() const */

bool __thiscall Effect_GroundEffectSurf::IsDone(Effect_GroundEffectSurf *this)

{
  return *(float *)(this + 0x110) < _FUN_03cd65ec;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_GroundEffectSurf::updateAttachOffset() */

void Effect_GroundEffectSurf::updateAttachOffset(void)

{
  char cVar1;
  int iVar2;
  StandaloneEffect *in_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long lVar3;
  Plant *this_00;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FastCurve aFStack_48 [8];
  undefined4 local_40;
  float local_3c;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = DAT_06ad43f0;
  local_30 = DAT_06ad43f8;
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)StandaloneEffect::GetAttachedTo(in_x0);
  if (this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0) {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this);
    fVar6 = *(float *)(lVar3 + 8);
    local_38 = CONCAT44(local_38._4_4_ + fVar6,(undefined4)local_38);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)this);
    if (this_00 == (Plant *)0x0) {
      (**(code **)(*(long *)in_x0 + 0x80))(0x3f800000);
      StandaloneEffect::SetAttachmentOffset(in_x0,(SexyVector3 *)&local_38);
      StandaloneEffect::FollowAttachment(in_x0);
    }
    else {
      (**(code **)(*(long *)in_x0 + 0x80))(*(undefined4 *)(in_x0 + 0x110));
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
      local_28 = *puVar4;
      local_20 = *(float *)(puVar4 + 1);
      cVar1 = FUN_03cd5fdc(*(undefined4 *)(this_00 + 0x1d0));
      if (cVar1 != '\0') {
        local_18 = Plant::GetRelocationPosition(this_00);
        local_14 = fVar6;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
      }
      fVar6 = (float)FUN_03cd5ff8((undefined4)local_38);
      fVar7 = *(float *)(in_x0 + 0x110);
      fVar5 = (float)FUN_03cd5ff8(local_38._4_4_ - local_30);
      Sexy::FastCurve::SetOutRange(aFStack_48,fVar6 * fVar7,fVar5 * fVar7);
      fVar5 = local_28._4_4_ - local_20;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)local_28,fVar5);
      fVar6 = (float)FUN_03cd5ff8(0x3f800000);
      local_40 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_18,fVar6);
      local_3c = fVar5;
      local_18 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_40,(SexyVector2 *)aFStack_48);
      local_14 = fVar5;
      iVar2 = (**(code **)(*(long *)this_00 + 200))(this_00);
      StandaloneEffect::SetScreenSpaceOrigin(in_x0,(SexyVector2 *)&local_18,iVar2 + 1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_GroundEffectSurf::onDraw(Sexy::Graphics*) */

void __thiscall Effect_GroundEffectSurf::onDraw(Effect_GroundEffectSurf *this,Graphics *param_1)

{
  updateAttachOffset();
  Effect_BeachWaterWave::onDraw((Effect_BeachWaterWave *)this,param_1);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03cd739c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Effect_GroundEffectSurf::getTargetWakeScale() const */

undefined1  [16] __thiscall
Effect_GroundEffectSurf::getTargetWakeScale(Effect_GroundEffectSurf *this)

{
  char cVar1;
  RtObject *this_00;
  Plant *this_01;
  undefined1 auVar2 [16];
  undefined1 extraout_var [12];
  
  this_00 = (RtObject *)StandaloneEffect::GetAttachedTo((StandaloneEffect *)this);
  if (this_00 != (RtObject *)0x0) {
    this_01 = Sexy::RtObject::Cast<Plant>(this_00);
    if (this_01 != (Plant *)0x0) {
      cVar1 = FUN_03cd5fdc(*(undefined4 *)(this_01 + 0x1d0));
      if (cVar1 != '\0') {
        auVar2 = Plant::GetRelocationSpeedInGridSquaresPerSecond(this_01);
        auVar2._0_4_ = CurveLerp<float>(auVar2,0x40400000,auVar2._0_4_,&DAT_05752588,&DAT_0575258c,1
                                       );
        auVar2._8_8_ = extraout_var._4_8_;
        auVar2._4_4_ = extraout_var._0_4_;
        return auVar2;
      }
    }
  }
  return ZEXT816(0);
}


/* Effect_GroundEffectSurf::onUpdate() */

void __thiscall Effect_GroundEffectSurf::onUpdate(Effect_GroundEffectSurf *this)

{
  float fVar1;
  undefined4 uVar2;
  
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  fVar1 = (float)getTargetWakeScale(this);
  uVar2 = ClampFloat(fVar1,*(float *)(this + 0x110) - 0.15,*(float *)(this + 0x110) + 0.08);
  *(undefined4 *)(this + 0x110) = uVar2;
  return;
}

