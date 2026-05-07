// Class: Effect_BeachWaterWave


/* Effect_BeachWaterWave::~Effect_BeachWaterWave() */

void __thiscall Effect_BeachWaterWave::~Effect_BeachWaterWave(Effect_BeachWaterWave *this)

{
  *(undefined ***)this = &PTR_GetClass_067d1580;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_BeachWaterWave::~Effect_BeachWaterWave() */

void __thiscall Effect_BeachWaterWave::~Effect_BeachWaterWave(Effect_BeachWaterWave *this)

{
  ~Effect_BeachWaterWave(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_BeachWaterWave::StaticClassInit() */

void Effect_BeachWaterWave::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_BeachWaterWave");
    (*pcVar2)(plVar1,asStack_10,FUN_040a6928,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_BeachWaterWave::StaticGetClass() */

long * Effect_BeachWaterWave::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_BeachWaterWave",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_BeachWaterWave::GetClass() const */

long * Effect_BeachWaterWave::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_BeachWaterWave",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_BeachWaterWave::Effect_BeachWaterWave() */

void __thiscall Effect_BeachWaterWave::Effect_BeachWaterWave(Effect_BeachWaterWave *this)

{
  undefined4 uVar1;
  
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  this[0x109] = (Effect_BeachWaterWave)0x0;
  this[0x10a] = (Effect_BeachWaterWave)0x0;
  *(undefined ***)this = &PTR_GetClass_067d1580;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x10c) = uVar1;
  return;
}


/* Effect_BeachWaterWave::StaticNew() */

Effect_BeachWaterWave * Effect_BeachWaterWave::StaticNew(void)

{
  Effect_BeachWaterWave *this;
  
  this = ::operator_new(0x110);
  Effect_BeachWaterWave(this);
  return this;
}


/* Effect_BeachWaterWave::DoChangeColor(bool) */

void __thiscall Effect_BeachWaterWave::DoChangeColor(Effect_BeachWaterWave *this,bool param_1)

{
  undefined4 uVar1;
  
  this[0x10a] = (Effect_BeachWaterWave)param_1;
  this[0x109] = (Effect_BeachWaterWave)0x1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x10c) = uVar1;
  return;
}


/* Effect_BeachWaterWave::registerForEvents() */

void __thiscall Effect_BeachWaterWave::registerForEvents(Effect_BeachWaterWave *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DoChangeColor);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<Effect_BeachWaterWave,void(Effect_BeachWaterWave::*)(bool)>>
            ((MessageRouter *)puVar1,Message::BeachWaveChangeColor,&local_40);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x040a6dec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Effect_BeachWaterWave::onDraw(Sexy::Graphics*) */

void __thiscall Effect_BeachWaterWave::onDraw(Effect_BeachWaterWave *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  BeachStage *pBVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 local_1c;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onDraw((Effect_PopAnim *)this,param_1);
  this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if ((this_00 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<BeachStage>(this_00), bVar1)) {
    pBVar3 = Sexy::RtObject::Cast<BeachStage>(this_00);
    cVar2 = FUN_040a6760(*(undefined4 *)(pBVar3 + 0xe4));
    if (cVar2 == '\0') {
      Effect_PopAnim::ClearShaderOverrideColor((Effect_PopAnim *)this);
    }
    else {
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0x66,0xff);
      Effect_PopAnim::SetShaderOverrideColor((Effect_PopAnim *)this,(Color *)local_18);
    }
    if (this[0x109] != (Effect_BeachWaterWave)0x0) {
      auVar5 = PVZ_T();
      local_1c = 0;
      local_18[0] = 0x3f800000;
      CurveLerp<float>(auVar5,0x40a00000,auVar5._0_4_ - *(float *)(this + 0x10c),&local_1c,
                       (Insets *)local_18,1);
      local_1c = 0;
      local_18[0] = 0x437f0000;
      fVar4 = CurveEvaluate<float>(&local_1c,(Insets *)local_18,3);
      if (254.0 <= fVar4) {
        this[0x109] = (Effect_BeachWaterWave)0x0;
        fVar4 = 255.0;
      }
      if (this[0x10a] != (Effect_BeachWaterWave)0x0) {
        fVar4 = 255.0 - fVar4;
      }
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0x66,(int)fVar4);
      Effect_PopAnim::SetShaderOverrideColor((Effect_PopAnim *)this,(Color *)local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

