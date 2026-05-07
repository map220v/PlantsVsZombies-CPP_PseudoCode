// Class: ArtifactMowerCalabash_Effect


/* ArtifactMowerCalabash_Effect::~ArtifactMowerCalabash_Effect() */

void __thiscall
ArtifactMowerCalabash_Effect::~ArtifactMowerCalabash_Effect(ArtifactMowerCalabash_Effect *this)

{
  *(undefined ***)this = &PTR_GetClass_0669bf80;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* ArtifactMowerCalabash_Effect::~ArtifactMowerCalabash_Effect() */

void __thiscall
ArtifactMowerCalabash_Effect::~ArtifactMowerCalabash_Effect(ArtifactMowerCalabash_Effect *this)

{
  ~ArtifactMowerCalabash_Effect(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactMowerCalabash_Effect::ArtifactMowerCalabash_Effect() */

void __thiscall
ArtifactMowerCalabash_Effect::ArtifactMowerCalabash_Effect(ArtifactMowerCalabash_Effect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0669bf80;
  return;
}


/* ArtifactMowerCalabash_Effect::StaticNew() */

ArtifactMowerCalabash_Effect * ArtifactMowerCalabash_Effect::StaticNew(void)

{
  ArtifactMowerCalabash_Effect *this;
  
  this = ::operator_new(0x110);
  ArtifactMowerCalabash_Effect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMowerCalabash_Effect::StaticClassInit() */

void ArtifactMowerCalabash_Effect::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactMowerCalabash_Effect");
    (*pcVar2)(plVar1,asStack_10,FUN_037e5f48,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMowerCalabash_Effect::StaticGetClass() */

long * ArtifactMowerCalabash_Effect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMowerCalabash_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMowerCalabash_Effect::GetClass() const */

long * ArtifactMowerCalabash_Effect::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMowerCalabash_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMowerCalabash_Effect::onUpdate() */

void __thiscall ArtifactMowerCalabash_Effect::onUpdate(ArtifactMowerCalabash_Effect *this)

{
  PopAnimRig *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  
  this_00 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar2 = (float)FUN_037e4cd8(*(undefined4 *)(lVar1 + 0x38));
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar3 = (float)FUN_037e4cdc(*(undefined4 *)(lVar1 + 0x3c));
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  return;
}


/* ArtifactMowerCalabash_Effect::OnAnimCommand(std::string const&, std::string const&) */

void ArtifactMowerCalabash_Effect::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  ArtifactCalabashSubSystem *this;
  
  bVar1 = std::operator==(param_2,"createElixir");
  if (!bVar1) {
    return;
  }
  this = Board::GetGameSubSystem<ArtifactCalabashSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ArtifactCalabashSubSystem::TryCreateElixir(this);
  return;
}


/* ArtifactMowerCalabash_Effect::onAnimStopped(std::string const&) */

void __thiscall
ArtifactMowerCalabash_Effect::onAnimStopped(ArtifactMowerCalabash_Effect *this,string *param_1)

{
  bool bVar1;
  ArtifactCalabashSubSystem *pAVar2;
  
  bVar1 = std::operator==(param_1,"trigger_2");
  if (!bVar1) {
    return;
  }
  pAVar2 = Board::GetGameSubSystem<ArtifactCalabashSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ArtifactCalabashSubSystem::SetState(pAVar2,4);
  return;
}

