// Class: Effect_GroundEffectTide


/* Effect_GroundEffectTide::~Effect_GroundEffectTide() */

void __thiscall Effect_GroundEffectTide::~Effect_GroundEffectTide(Effect_GroundEffectTide *this)

{
  *(undefined ***)this = &PTR_GetClass_0675fb40;
  Effect_BeachWaterWave::~Effect_BeachWaterWave((Effect_BeachWaterWave *)this);
  return;
}


/* Effect_GroundEffectTide::~Effect_GroundEffectTide() */

void __thiscall Effect_GroundEffectTide::~Effect_GroundEffectTide(Effect_GroundEffectTide *this)

{
  ~Effect_GroundEffectTide(this);
  AK::FreeHook(this);
  return;
}


/* Effect_GroundEffectTide::StaticGetClass() */

long * Effect_GroundEffectTide::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_GroundEffectTide",uVar2,StaticNew);
  return sClass;
}


/* Effect_GroundEffectTide::GetClass() const */

long * Effect_GroundEffectTide::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_GroundEffectTide",uVar2,StaticNew);
  return sClass;
}


/* Effect_GroundEffectTide::Effect_GroundEffectTide() */

void __thiscall Effect_GroundEffectTide::Effect_GroundEffectTide(Effect_GroundEffectTide *this)

{
  Effect_BeachWaterWave::Effect_BeachWaterWave((Effect_BeachWaterWave *)this);
  *(undefined ***)this = &PTR_GetClass_0675fb40;
  return;
}


/* Effect_GroundEffectTide::StaticNew() */

Effect_GroundEffectTide * Effect_GroundEffectTide::StaticNew(void)

{
  Effect_GroundEffectTide *this;
  
  this = ::operator_new(0x110);
  Effect_GroundEffectTide(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_GroundEffectTide::updateAttachOffset() */

void __thiscall Effect_GroundEffectTide::updateAttachOffset(Effect_GroundEffectTide *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar1;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_18 = DAT_06ad44e8;
  local_10 = DAT_06ad44f0;
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)StandaloneEffect::GetAttachedTo((StandaloneEffect *)this);
  if (this_00 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    lVar1 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
    local_18 = CONCAT44(local_18._4_4_ + *(float *)(lVar1 + 8),(undefined4)local_18);
    StandaloneEffect::SetAttachmentOffset((StandaloneEffect *)this,(SexyVector3 *)&local_18);
    StandaloneEffect::FollowAttachment((StandaloneEffect *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_GroundEffectTide::onDraw(Sexy::Graphics*) */

void __thiscall Effect_GroundEffectTide::onDraw(Effect_GroundEffectTide *this,Graphics *param_1)

{
  updateAttachOffset(this);
  Effect_BeachWaterWave::onDraw((Effect_BeachWaterWave *)this,param_1);
  return;
}

