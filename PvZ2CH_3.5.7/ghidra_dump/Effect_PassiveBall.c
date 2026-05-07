// Class: Effect_PassiveBall


/* Effect_PassiveBall::~Effect_PassiveBall() */

void __thiscall Effect_PassiveBall::~Effect_PassiveBall(Effect_PassiveBall *this)

{
  *(undefined ***)this = &PTR_GetClass_06639100;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_PassiveBall::~Effect_PassiveBall() */

void __thiscall Effect_PassiveBall::~Effect_PassiveBall(Effect_PassiveBall *this)

{
  ~Effect_PassiveBall(this);
  AK::FreeHook(this);
  return;
}


/* Effect_PassiveBall::Effect_PassiveBall() */

void __thiscall Effect_PassiveBall::Effect_PassiveBall(Effect_PassiveBall *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined4 *)(this + 0x10c) = 0x62251;
  *(undefined ***)this = &PTR_GetClass_06639100;
  return;
}


/* Effect_PassiveBall::StaticNew() */

Effect_PassiveBall * Effect_PassiveBall::StaticNew(void)

{
  Effect_PassiveBall *this;
  
  this = ::operator_new(0x110);
  Effect_PassiveBall(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PassiveBall::StaticClassInit() */

void Effect_PassiveBall::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_PassiveBall");
    (*pcVar2)(plVar1,asStack_10,FUN_034626c4,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_PassiveBall::StaticGetClass() */

long * Effect_PassiveBall::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_PassiveBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_PassiveBall::GetClass() const */

long * Effect_PassiveBall::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_PassiveBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PassiveBall::playBallShowUp(Sexy::SexyVector3) */

void Effect_PassiveBall::playBallShowUp
               (float param_1,float param_2,undefined4 param_3,Effect_PopAnim *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  PopAnim *pPVar4;
  float local_30;
  float local_2c;
  undefined4 local_28;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  Effect_PopAnim::clearAnimSequence(param_4);
  std::string::string(asStack_18,"POPANIM_EFFECTS_ORCHIDMAGE_PASSIVEBALL_SHOWUP");
  GetPAMByName(asStack_18);
  pPVar4 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(param_4,pPVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  fVar1 = local_30;
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar2 = local_2c;
  local_30 = (fVar1 + 28.0) - (float)(iVar3 << 1);
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_2c = (fVar2 - (float)iVar3) - 22.0;
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)param_4,(SexyVector3 *)&local_30,*(int *)(param_4 + 0x10c));
  std::string::string((string *)aRStack_10,"idle");
  Effect_PopAnim::PlaySingleAnimation(param_4,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_PassiveBall::startBallShowUp(Sexy::SexyVector3) */

void Effect_PassiveBall::startBallShowUp(void)

{
  playBallShowUp();
  return;
}

