// Class: Effect_AirflowDown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_AirflowDown::playAirflowDown(Sexy::SexyVector3) */

void Effect_AirflowDown::playAirflowDown
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
  std::string::string(asStack_18,"POPANIM_ZOMBIE_ZOMBIE_YEARMONSTER");
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
  local_2c = (fVar2 + 28.0) - (float)(iVar3 << 1);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)param_4,(SexyVector3 *)&local_30,0x635d7);
  std::string::string((string *)aRStack_10,"tx_down");
  Effect_PopAnim::PlaySingleAnimation(param_4,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_AirflowDown::startAirflowDown(Sexy::SexyVector3) */

void Effect_AirflowDown::startAirflowDown(void)

{
  playAirflowDown();
  return;
}


/* Effect_AirflowDown::~Effect_AirflowDown() */

void __thiscall Effect_AirflowDown::~Effect_AirflowDown(Effect_AirflowDown *this)

{
  *(undefined ***)this = &PTR_GetClass_067ab8d0;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_AirflowDown::~Effect_AirflowDown() */

void __thiscall Effect_AirflowDown::~Effect_AirflowDown(Effect_AirflowDown *this)

{
  ~Effect_AirflowDown(this);
  AK::FreeHook(this);
  return;
}


/* Effect_AirflowDown::Effect_AirflowDown() */

void __thiscall Effect_AirflowDown::Effect_AirflowDown(Effect_AirflowDown *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067ab8d0;
  return;
}


/* Effect_AirflowDown::StaticNew() */

Effect_AirflowDown * Effect_AirflowDown::StaticNew(void)

{
  Effect_AirflowDown *this;
  
  this = ::operator_new(0x110);
  Effect_AirflowDown(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_AirflowDown::StaticClassInit() */

void Effect_AirflowDown::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_AirflowDown");
    (*pcVar2)(plVar1,asStack_10,FUN_03fc7a24,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_AirflowDown::StaticGetClass() */

long * Effect_AirflowDown::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_AirflowDown",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_AirflowDown::GetClass() const */

long * Effect_AirflowDown::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_AirflowDown",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

