// Class: ArtifactMowerGuitar_Effect


/* ArtifactMowerGuitar_Effect::~ArtifactMowerGuitar_Effect() */

void __thiscall
ArtifactMowerGuitar_Effect::~ArtifactMowerGuitar_Effect(ArtifactMowerGuitar_Effect *this)

{
  *(undefined ***)this = &PTR_GetClass_0669bb30;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* ArtifactMowerGuitar_Effect::~ArtifactMowerGuitar_Effect() */

void __thiscall
ArtifactMowerGuitar_Effect::~ArtifactMowerGuitar_Effect(ArtifactMowerGuitar_Effect *this)

{
  ~ArtifactMowerGuitar_Effect(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactMowerGuitar_Effect::ArtifactMowerGuitar_Effect() */

void __thiscall
ArtifactMowerGuitar_Effect::ArtifactMowerGuitar_Effect(ArtifactMowerGuitar_Effect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0669bb30;
  return;
}


/* ArtifactMowerGuitar_Effect::StaticNew() */

ArtifactMowerGuitar_Effect * ArtifactMowerGuitar_Effect::StaticNew(void)

{
  ArtifactMowerGuitar_Effect *this;
  
  this = ::operator_new(0x110);
  ArtifactMowerGuitar_Effect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMowerGuitar_Effect::StaticClassInit() */

void ArtifactMowerGuitar_Effect::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactMowerGuitar_Effect");
    (*pcVar2)(plVar1,asStack_10,FUN_037e23f0,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMowerGuitar_Effect::StaticGetClass() */

long * ArtifactMowerGuitar_Effect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMowerGuitar_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMowerGuitar_Effect::GetClass() const */

long * ArtifactMowerGuitar_Effect::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMowerGuitar_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMowerGuitar_Effect::onUpdate() */

void __thiscall ArtifactMowerGuitar_Effect::onUpdate(ArtifactMowerGuitar_Effect *this)

{
  PopAnimRig *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  
  this_00 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar2 = (float)FUN_037e12f8(*(undefined4 *)(lVar1 + 0x38));
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar3 = (float)FUN_037e12fc(*(undefined4 *)(lVar1 + 0x3c));
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMowerGuitar_Effect::OnAnimCommand(std::string const&, std::string const&) */

void ArtifactMowerGuitar_Effect::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  RtObject *this;
  ArtifactGuitar *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action1");
  if (bVar1) {
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    this_00 = Sexy::RtObject::Cast<ArtifactGuitar>(this);
    ArtifactGuitar::fireMusicalNotesProjectile(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMowerGuitar_Effect::onAnimStopped(std::string const&) */

void __thiscall
ArtifactMowerGuitar_Effect::onAnimStopped(ArtifactMowerGuitar_Effect *this,string *param_1)

{
  bool bVar1;
  RtObject *this_00;
  ArtifactGuitar *this_01;
  char *__s;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"trigger");
  if (bVar1) {
    std::string::string(asStack_10,"loop");
    PVZ_EOT();
  }
  else {
    bVar1 = std::operator==(param_1,"over");
    if (bVar1) {
      std::string::string(asStack_10,"cooldown");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
      goto LAB_037e2bfc;
    }
    bVar1 = std::operator==(param_1,"passive");
    if (!bVar1) goto LAB_037e2bfc;
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    this_01 = Sexy::RtObject::Cast<ArtifactGuitar>(this_00);
    fVar2 = (float)Artifact::GetTriggerLeftTime((Artifact *)this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (fVar2 == 0.0) {
      __s = "idle";
    }
    else {
      __s = "cooldown";
    }
    std::string::string(asStack_10,__s);
    PVZ_EOT();
  }
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
LAB_037e2bfc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

