// Class: Effect_SmokePollution


/* Effect_SmokePollution::~Effect_SmokePollution() */

void __thiscall Effect_SmokePollution::~Effect_SmokePollution(Effect_SmokePollution *this)

{
  *(undefined ***)this = &PTR_GetClass_066be590;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_SmokePollution::~Effect_SmokePollution() */

void __thiscall Effect_SmokePollution::~Effect_SmokePollution(Effect_SmokePollution *this)

{
  ~Effect_SmokePollution(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_SmokePollution::PlaySmokeIdle(GridItemSmokeManhole*) */

void __thiscall
Effect_SmokePollution::PlaySmokeIdle(Effect_SmokePollution *this,GridItemSmokeManhole *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(GridItemSmokeManhole **)(this + 0x110) == param_1) {
    StandaloneEffect::SetVisibility((StandaloneEffect *)this,true);
    std::string::string(asStack_10,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    this[0x109] = (Effect_SmokePollution)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_SmokePollution::Effect_SmokePollution() */

void __thiscall Effect_SmokePollution::Effect_SmokePollution(Effect_SmokePollution *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  this[0x109] = (Effect_SmokePollution)0x0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined ***)this = &PTR_GetClass_066be590;
  return;
}


/* Effect_SmokePollution::StaticNew() */

Effect_SmokePollution * Effect_SmokePollution::StaticNew(void)

{
  Effect_SmokePollution *this;
  
  this = ::operator_new(0x118);
  Effect_SmokePollution(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_SmokePollution::StaticClassInit() */

void Effect_SmokePollution::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_SmokePollution");
    (*pcVar2)(plVar1,asStack_10,FUN_038eef88,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_SmokePollution::StaticGetClass() */

long * Effect_SmokePollution::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_SmokePollution",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_SmokePollution::GetClass() const */

long * Effect_SmokePollution::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_SmokePollution",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_SmokePollution::onAnimStopped(std::string const&) */

void __thiscall Effect_SmokePollution::onAnimStopped(Effect_SmokePollution *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"blow_off");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"absorb"), !bVar1)) {
    return;
  }
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  MessageRouter::Post((_func_void *)gMessageRouter);
  this[0x109] = (Effect_SmokePollution)0x0;
  return;
}


/* Effect_SmokePollution::registerForEvents() */

void __thiscall Effect_SmokePollution::registerForEvents(Effect_SmokePollution *this)

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
            ((ReceivedDataCallback *)this,PlaySmokeIdle);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<GridItemSmokeManhole*,Sexy::CBMemberTranslatorX<Effect_SmokePollution,void(Effect_SmokePollution::*)(GridItemSmokeManhole*)>>
            ((MessageRouter *)puVar1,Message::SmokeDiffusion,&local_40);
  return;
}

