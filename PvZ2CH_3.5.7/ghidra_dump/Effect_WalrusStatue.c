// Class: Effect_WalrusStatue


/* Effect_WalrusStatue::~Effect_WalrusStatue() */

void __thiscall Effect_WalrusStatue::~Effect_WalrusStatue(Effect_WalrusStatue *this)

{
  *(undefined ***)this = &PTR_GetClass_068d7b40;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_WalrusStatue::~Effect_WalrusStatue() */

void __thiscall Effect_WalrusStatue::~Effect_WalrusStatue(Effect_WalrusStatue *this)

{
  ~Effect_WalrusStatue(this);
  AK::FreeHook(this);
  return;
}


/* Effect_WalrusStatue::Effect_WalrusStatue() */

void __thiscall Effect_WalrusStatue::Effect_WalrusStatue(Effect_WalrusStatue *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  this[0x109] = (Effect_WalrusStatue)0x0;
  *(undefined ***)this = &PTR_GetClass_068d7b40;
  return;
}


/* Effect_WalrusStatue::StaticNew() */

Effect_WalrusStatue * Effect_WalrusStatue::StaticNew(void)

{
  Effect_WalrusStatue *this;
  
  this = ::operator_new(0x110);
  Effect_WalrusStatue(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_WalrusStatue::StaticClassInit() */

void Effect_WalrusStatue::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_WalrusStatue");
    (*pcVar2)(plVar1,asStack_10,FUN_04777aa8,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_WalrusStatue::StaticGetClass() */

long * Effect_WalrusStatue::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_WalrusStatue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_WalrusStatue::GetClass() const */

long * Effect_WalrusStatue::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_WalrusStatue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_WalrusStatue::SetStatuePosition(Sexy::SexyVector2) */

void Effect_WalrusStatue::SetStatuePosition
               (undefined4 param_1,undefined4 param_2,StandaloneEffect *param_3)

{
  int iVar1;
  undefined8 local_8;
  
  local_8 = CONCAT44(param_2,param_1);
  iVar1 = FUN_04777504(*(undefined4 *)(param_3 + 0x1c),param_3 + 0x20);
  StandaloneEffect::SetScreenSpaceOrigin(param_3,(SexyVector2 *)&local_8,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_WalrusStatue::PlayFullHeal() */

void __thiscall Effect_WalrusStatue::PlayFullHeal(Effect_WalrusStatue *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"snowdrift");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_WalrusStatue::PlayMidHeal() */

void __thiscall Effect_WalrusStatue::PlayMidHeal(Effect_WalrusStatue *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"die_1");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_WalrusStatue::PlayDieExit() */

void __thiscall Effect_WalrusStatue::PlayDieExit(Effect_WalrusStatue *this)

{
  string asStack_10 [8];
  long local_8;
  
  this[0x109] = (Effect_WalrusStatue)0x1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"die_exit");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_WalrusStatue::onUpdate() */

void __thiscall Effect_WalrusStatue::onUpdate(Effect_WalrusStatue *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  if (this[0x109] != (Effect_WalrusStatue)0x0) {
    pfVar3 = (float *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)this);
    fVar6 = *pfVar3;
    fVar5 = pfVar3[1];
    iVar1 = FUN_047776dc();
    fVar4 = (float)PVZ_Dt();
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar6 + fVar4 * (float)iVar1,fVar5);
    SetStatuePosition(local_10,local_c,this);
    fVar4 = (float)FUN_047776f0(fVar6);
    iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(fVar4);
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar2 < iVar1) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

