// Class: Effect_SmokeManhole


/* Effect_SmokeManhole::~Effect_SmokeManhole() */

void __thiscall Effect_SmokeManhole::~Effect_SmokeManhole(Effect_SmokeManhole *this)

{
  *(undefined ***)this = &PTR_GetClass_066be4b0;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_SmokeManhole::~Effect_SmokeManhole() */

void __thiscall Effect_SmokeManhole::~Effect_SmokeManhole(Effect_SmokeManhole *this)

{
  ~Effect_SmokeManhole(this);
  AK::FreeHook(this);
  return;
}


/* Effect_SmokeManhole::Effect_SmokeManhole() */

void __thiscall Effect_SmokeManhole::Effect_SmokeManhole(Effect_SmokeManhole *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined ***)this = &PTR_GetClass_066be4b0;
  return;
}


/* Effect_SmokeManhole::StaticNew() */

Effect_SmokeManhole * Effect_SmokeManhole::StaticNew(void)

{
  Effect_SmokeManhole *this;
  
  this = ::operator_new(0x118);
  Effect_SmokeManhole(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_SmokeManhole::StaticClassInit() */

void Effect_SmokeManhole::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_SmokeManhole");
    (*pcVar2)(plVar1,asStack_10,FUN_038eed74,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_SmokeManhole::StaticGetClass() */

long * Effect_SmokeManhole::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_SmokeManhole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_SmokeManhole::GetClass() const */

long * Effect_SmokeManhole::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_SmokeManhole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_SmokeManhole::onAnimStopped(std::string const&) */

void __thiscall Effect_SmokeManhole::onAnimStopped(Effect_SmokeManhole *this,string *param_1)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_05474374(param_1,&DAT_055d3ef0,0);
  if (lVar1 != -1) {
    std::string::string(asStack_10,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    MessageRouter::Post<GridItemSmokeManhole*,GridItemSmokeManhole*>
              ((MessageRouter *)gMessageRouter,Message::SmokeDiffusion,
               *(GridItemSmokeManhole **)(this + 0x110));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

