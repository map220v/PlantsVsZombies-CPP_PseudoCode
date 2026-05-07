// Class: HotUIWidgetTrainingPacketMotion


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetTrainingPacketMotion::StaticClassInit() */

void HotUIWidgetTrainingPacketMotion::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetTrainingPacketMotion");
    (*pcVar2)(plVar1,asStack_10,FUN_034bd0e0,0x2b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetTrainingPacketMotion::StaticGetClass() */

long * HotUIWidgetTrainingPacketMotion::StaticGetClass(void)

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
  uVar2 = HotUIWidgetTrainingPacket::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetTrainingPacketMotion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetTrainingPacketMotion::SetMotionInterpolate(HotUIWidgetTrainingPacket*,
   Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, float, CurveType) */

void __thiscall
HotUIWidgetTrainingPacketMotion::SetMotionInterpolate
          (undefined4 param_4,HotUIWidgetTrainingPacketMotion *this,undefined8 param_1,
          undefined8 *param_2,undefined8 *param_3,undefined4 param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(this + 0x288) = param_1;
  *(undefined4 *)(this + 0x260) = 1;
  uVar2 = PVZ_T();
  *(undefined8 *)(this + 0x268) = *param_2;
  *(undefined4 *)(this + 0x264) = uVar2;
  pcVar1 = *(code **)(*(long *)this + 0x158);
  *(undefined8 *)(this + 0x270) = *param_3;
  *(undefined4 *)(this + 0x27c) = param_6;
  this[0x280] = (HotUIWidgetTrainingPacketMotion)0x0;
  *(undefined4 *)(this + 0x278) = param_4;
  (*pcVar1)(this,1);
  return;
}


/* HotUIWidgetTrainingPacketMotion::SetMotionIdle() */

void __thiscall
HotUIWidgetTrainingPacketMotion::SetMotionIdle(HotUIWidgetTrainingPacketMotion *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x260) = 0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x264) = uVar1;
  (**(code **)(*(long *)this + 0x158))(this,0);
  return;
}


/* HotUIWidgetTrainingPacketMotion::onInitializeWidget() */

void HotUIWidgetTrainingPacketMotion::onInitializeWidget(void)

{
  HotUIWidgetTrainingPacketMotion *in_x0;
  
  nop();
  SetMotionIdle(in_x0);
  return;
}


/* HotUIWidgetTrainingPacketMotion::onFinishMotion() */

void __thiscall
HotUIWidgetTrainingPacketMotion::onFinishMotion(HotUIWidgetTrainingPacketMotion *this)

{
  bool bVar1;
  
  SetMotionIdle(this);
  this[0x280] = (HotUIWidgetTrainingPacketMotion)0x1;
  if (*(long **)(this + 0x288) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x288) + 0x158))();
    *(undefined8 *)(this + 0x288) = 0;
  }
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x290));
  if (!bVar1) {
    return;
  }
  std::function<void()>::operator()((function<void()> *)(this + 0x290));
  return;
}


/* HotUIWidgetTrainingPacketMotion::SetOnFinishAction(std::function<void ()>) */

void __thiscall
HotUIWidgetTrainingPacketMotion::SetOnFinishAction
          (HotUIWidgetTrainingPacketMotion *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x290),param_2);
  return;
}


/* HotUIWidgetTrainingPacketMotion::HotUIWidgetTrainingPacketMotion() */

void __thiscall
HotUIWidgetTrainingPacketMotion::HotUIWidgetTrainingPacketMotion
          (HotUIWidgetTrainingPacketMotion *this)

{
  undefined4 uVar1;
  
  HotUIWidgetTrainingPacket::HotUIWidgetTrainingPacket((HotUIWidgetTrainingPacket *)this);
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined ***)this = &PTR_GetWidgetClass_06648cf0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x264) = uVar1;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x268));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x270));
  *(undefined4 *)(this + 0x27c) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  this[0x280] = (HotUIWidgetTrainingPacketMotion)0x1;
  *(undefined4 *)(this + 0x278) = 0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x290));
  return;
}


/* HotUIWidgetTrainingPacketMotion::StaticNew() */

HotUIWidgetTrainingPacketMotion * HotUIWidgetTrainingPacketMotion::StaticNew(void)

{
  HotUIWidgetTrainingPacketMotion *this;
  
  this = ::operator_new(0x2b0);
  HotUIWidgetTrainingPacketMotion(this);
  return this;
}


/* HotUIWidgetTrainingPacketMotion::UpdateMotion() */

void __thiscall HotUIWidgetTrainingPacketMotion::UpdateMotion(HotUIWidgetTrainingPacketMotion *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(this + 0x260) == 1) {
    fVar1 = (float)PVZ_T();
    fVar2 = *(float *)(this + 0x264);
    fVar3 = (fVar1 - fVar2) / *(float *)(this + 0x278);
    fVar1 = (float)CurveEvaluate<Sexy::SexyVector2>
                             (fVar3,this + 0x268,this + 0x270,*(undefined4 *)(this + 0x27c));
    (**(code **)(*(long *)this + 0x1a8))(this,(int)fVar1,(int)fVar2);
    if (1.0 < fVar3) {
      onFinishMotion(this);
      return;
    }
  }
  return;
}


/* HotUIWidgetTrainingPacketMotion::onUpdate() */

void __thiscall HotUIWidgetTrainingPacketMotion::onUpdate(HotUIWidgetTrainingPacketMotion *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(this + 0x260) == 1) {
    fVar1 = (float)PVZ_T();
    fVar2 = *(float *)(this + 0x264);
    fVar3 = (fVar1 - fVar2) / *(float *)(this + 0x278);
    fVar1 = (float)CurveEvaluate<Sexy::SexyVector2>
                             (fVar3,this + 0x268,this + 0x270,*(undefined4 *)(this + 0x27c));
    (**(code **)(*(long *)this + 0x1a8))(this,(int)fVar1,(int)fVar2);
    if (1.0 < fVar3) {
      onFinishMotion(this);
      return;
    }
  }
  return;
}


/* HotUIWidgetTrainingPacketMotion::~HotUIWidgetTrainingPacketMotion() */

void __thiscall
HotUIWidgetTrainingPacketMotion::~HotUIWidgetTrainingPacketMotion
          (HotUIWidgetTrainingPacketMotion *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_06648cf0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x290));
  HotUIWidgetTrainingPacket::~HotUIWidgetTrainingPacket((HotUIWidgetTrainingPacket *)this);
  return;
}


/* HotUIWidgetTrainingPacketMotion::~HotUIWidgetTrainingPacketMotion() */

void __thiscall
HotUIWidgetTrainingPacketMotion::~HotUIWidgetTrainingPacketMotion
          (HotUIWidgetTrainingPacketMotion *this)

{
  ~HotUIWidgetTrainingPacketMotion(this);
  AK::FreeHook(this);
  return;
}


/* HotUIWidgetTrainingPacketMotion::init() */

void __thiscall HotUIWidgetTrainingPacketMotion::init(HotUIWidgetTrainingPacketMotion *this)

{
  HotUIWidgetTrainingPacket::init((HotUIWidgetTrainingPacket *)this);
  SetMotionIdle(this);
  return;
}

