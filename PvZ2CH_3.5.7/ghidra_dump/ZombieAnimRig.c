// Class: ZombieAnimRig


/* ZombieAnimRig::CursorAnimChange(Zombie*) */

void ZombieAnimRig::CursorAnimChange(Zombie *param_1)

{
  return;
}


/* ZombieAnimRig::hasHat() */

undefined8 ZombieAnimRig::hasHat(void)

{
  return 0;
}


/* ZombieAnimRig::onNeedsToDie() */

void ZombieAnimRig::onNeedsToDie(void)

{
  return;
}


/* ZombieAnimRig::getDieShouldBlend() */

undefined8 ZombieAnimRig::getDieShouldBlend(void)

{
  return 1;
}


/* ZombieAnimRig::ZombieAnimRig() */

void __thiscall ZombieAnimRig::ZombieAnimRig(ZombieAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0686bf60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_0686c1d8;
  Set8BytesTo0(this + 0x218);
  Set8BytesTo0(this + 0x238);
  return;
}


/* ZombieAnimRig::~ZombieAnimRig() */

void __thiscall ZombieAnimRig::~ZombieAnimRig(ZombieAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0686bf60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_0686c1d8;
  std::string::~string((string *)(this + 0x238));
  std::string::~string((string *)(this + 0x218));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig::~ZombieAnimRig() */

void __thiscall ZombieAnimRig::~ZombieAnimRig(ZombieAnimRig *this)

{
  ~ZombieAnimRig(this + -0x10);
  return;
}


/* ZombieAnimRig::~ZombieAnimRig() */

void __thiscall ZombieAnimRig::~ZombieAnimRig(ZombieAnimRig *this)

{
  ~ZombieAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig::~ZombieAnimRig() */

void __thiscall ZombieAnimRig::~ZombieAnimRig(ZombieAnimRig *this)

{
  ~ZombieAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::getWalkReverseAnimationName() */

void __thiscall ZombieAnimRig::getWalkReverseAnimationName(ZombieAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"walk_off");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::getStunAnimationName() */

void __thiscall ZombieAnimRig::getStunAnimationName(ZombieAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"stun");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::getButterName() */

void __thiscall ZombieAnimRig::getButterName(ZombieAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"butter");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::getInkName() */

void __thiscall ZombieAnimRig::getInkName(ZombieAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ink");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::getRangedAttackAnimationName() */

void __thiscall ZombieAnimRig::getRangedAttackAnimationName(ZombieAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ranged");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::DropArm(Zombie*) */

void __thiscall ZombieAnimRig::DropArm(ZombieAnimRig *this,Zombie *param_1)

{
  vector *pvVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = (vector *)(**(code **)(*(long *)this + 0x218))();
  (**(code **)(*(long *)this + 0x1c8))(asStack_10,this);
  uVar2 = SpawnZombieParticle(param_1,pvVar1,asStack_10,0.5);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::DropHead(Zombie*) */

void __thiscall ZombieAnimRig::DropHead(ZombieAnimRig *this,Zombie *param_1)

{
  vector *pvVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = (vector *)(**(code **)(*(long *)this + 0x210))();
  (**(code **)(*(long *)this + 0x1a0))(asStack_10,this);
  uVar2 = SpawnZombieParticle(param_1,pvVar1,asStack_10,0.75);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::SpawnHead(ZombieAnimRig*) */

void __thiscall ZombieAnimRig::SpawnHead(ZombieAnimRig *this,ZombieAnimRig *param_1)

{
  vector *pvVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = (vector *)(**(code **)(*(long *)this + 0x210))();
  (**(code **)(*(long *)this + 0x1a0))(asStack_10,this);
  uVar2 = SpawnZombieProjectileParticle(param_1,pvVar1,asStack_10,0.75);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ZombieAnimRig::HideArmStub() */

void __thiscall ZombieAnimRig::HideArmStub(ZombieAnimRig *this)

{
  int iVar1;
  undefined8 *puVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x220))();
  lVar4 = 0;
  while( true ) {
    uVar5 = *puVar2;
    iVar1 = FUN_045f0428(uVar5,puVar2[1]);
    if (iVar1 + -1 <= (int)lVar4) break;
    psVar3 = (string *)FUN_045f0434(uVar5,lVar4 + 1);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,false);
    lVar4 = lVar4 + 2;
  }
  return;
}


/* ZombieAnimRig::HideHead() */

void __thiscall ZombieAnimRig::HideHead(ZombieAnimRig *this)

{
  int iVar1;
  undefined8 *puVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x210))();
  lVar4 = 0;
  while( true ) {
    uVar5 = *puVar2;
    iVar1 = FUN_045f0428(uVar5,puVar2[1]);
    if (iVar1 <= (int)lVar4) break;
    psVar3 = (string *)FUN_045f0434(uVar5,lVar4);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,false);
    lVar4 = lVar4 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::GetHeadOffset() */

void __thiscall ZombieAnimRig::GetHeadOffset(ZombieAnimRig *this)

{
  undefined8 *puVar1;
  long lVar2;
  string *psVar3;
  undefined8 uVar4;
  ResistenceValueInfo local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)(**(code **)(*(long *)this + 0x210))();
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(local_10);
  uVar4 = *puVar1;
  lVar2 = FUN_045f0428(uVar4,puVar1[1]);
  if (lVar2 != 0) {
    psVar3 = (string *)FUN_045f0434(uVar4,0);
    PopAnimRig::CalcLayerTranslation((PopAnimRig *)this,psVar3,(SexyVector2 *)local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* ZombieAnimRig::StaticNew() */

ZombieAnimRig * ZombieAnimRig::StaticNew(void)

{
  ZombieAnimRig *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::StaticClassInit() */

void ZombieAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_045f07f8,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig::StaticGetClass() */

long * ZombieAnimRig::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig::GetClass() const */

long * ZombieAnimRig::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::PlayStreetIdle(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall ZombieAnimRig::PlayStreetIdle(ZombieAnimRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1e0))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::PlayAndStop(std::string const&, AnimSelectionMethod, Sexy::Delegate1<std::string
   const&>) */

void __thiscall
ZombieAnimRig::PlayAndStop
          (ZombieAnimRig *this,undefined8 param_1,undefined8 param_3,Delegate1 *param_4)

{
  long lVar1;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_4);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,param_1,param_3,aDStack_38);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::PlayAndStop(std::string const&, AnimSelectionMethod,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig::PlayAndStop
          (ZombieAnimRig *this,undefined8 param_1,undefined8 param_3,RtReflectionDelegate *param_4)

{
  long lVar1;
  undefined4 uVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_4);
  uVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_1,param_3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall ZombieAnimRig::PlayAttack(ZombieAnimRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  (**(code **)(*(long *)this + 0x1e8))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 5;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::PlayRangedAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall ZombieAnimRig::PlayRangedAttack(ZombieAnimRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  (**(code **)(*(long *)this + 0x238))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 7;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* ZombieAnimRig::setArmVisibility(bool) */

void __thiscall ZombieAnimRig::setArmVisibility(ZombieAnimRig *this,bool param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  string *psVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)(**(code **)(*(long *)this + 0x218))();
  lVar5 = 0;
  while( true ) {
    uVar6 = *puVar3;
    iVar2 = FUN_045f0428(uVar6,puVar3[1]);
    if (iVar2 <= (int)lVar5) break;
    psVar4 = (string *)FUN_045f0434(uVar6,lVar5);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,param_1);
    lVar5 = lVar5 + 1;
  }
  lVar5 = 0;
  puVar3 = (undefined8 *)(**(code **)(*(long *)this + 0x220))(this);
  while( true ) {
    uVar6 = *puVar3;
    iVar2 = FUN_045f0428(uVar6,puVar3[1]);
    if (iVar2 + -1 <= (int)lVar5) break;
    psVar4 = (string *)FUN_045f0434(uVar6,lVar5);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,param_1);
    lVar1 = lVar5 + 1;
    lVar5 = lVar5 + 2;
    psVar4 = (string *)FUN_045f0434(*puVar3,lVar1);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,!param_1);
  }
  return;
}


/* ZombieAnimRig::HideArm() */

void __thiscall ZombieAnimRig::HideArm(ZombieAnimRig *this)

{
  setArmVisibility(this,false);
  return;
}


/* ZombieAnimRig::ShowArm() */

void __thiscall ZombieAnimRig::ShowArm(ZombieAnimRig *this)

{
  setArmVisibility(this,true);
  return;
}


/* ZombieAnimRig::GetGroundTrackName() */

undefined8 ZombieAnimRig::GetGroundTrackName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* ZombieAnimRig::GetAnimRateModifier() */

int __thiscall ZombieAnimRig::GetAnimRateModifier(ZombieAnimRig *this)

{
  return (int)*(float *)(this + 0x228);
}


/* ZombieAnimRig::SetLayerSet(std::string) */

void ZombieAnimRig::SetLayerSet(long *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x47);
  (**(code **)(*param_1 + 0x1f8))(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::SetButterVisibility(bool) */

void __thiscall ZombieAnimRig::SetButterVisibility(ZombieAnimRig *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x250))(asStack_10);
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::SetInkVisibility(bool) */

void __thiscall ZombieAnimRig::SetInkVisibility(ZombieAnimRig *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 600))(asStack_10);
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig::setReadyToDie() */

void __thiscall ZombieAnimRig::setReadyToDie(ZombieAnimRig *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  if (*(float *)(this + 0x22c) < fVar1) {
    this[0x230] = (ZombieAnimRig)0x1;
  }
  return;
}


/* ZombieAnimRig::onAnimSequenceContinued() */

void __thiscall ZombieAnimRig::onAnimSequenceContinued(ZombieAnimRig *this)

{
  if (*(int *)(this + 0x210) != 2) {
    return;
  }
  setReadyToDie(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::PlayDie() */

void __thiscall ZombieAnimRig::PlayDie(ZombieAnimRig *this)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  code *pcVar5;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  lVar4 = *(long *)this;
  local_8 = ___stack_chk_guard;
  if (*(code **)(lVar4 + 0x260) == getDieShouldBlend) {
    cVar1 = getDieShouldBlend();
    pcVar3 = *(code **)(lVar4 + 0x240);
  }
  else {
    cVar1 = (**(code **)(lVar4 + 0x260))();
    lVar4 = *(long *)this;
    pcVar3 = *(code **)(lVar4 + 0x240);
  }
  if (cVar1 == '\0') {
    pcVar5 = *(code **)(lVar4 + 0x168);
    (*pcVar3)(asStack_40,this);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = (*pcVar5)(this,asStack_40,3,aDStack_38);
    std::string::~string(asStack_40);
  }
  else {
    (*pcVar3)(this);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    iVar2 = PopAnimRig::BlendTo((PopAnimRig *)0x3f000000,0,this,asStack_40,0,2,aDStack_38);
    std::string::~string(asStack_40);
  }
  if (iVar2 != -1) {
    *(undefined4 *)(this + 0x210) = 4;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


/* ZombieAnimRig::setAnimRateForWalkAnim(std::string const&) */

void __thiscall ZombieAnimRig::setAnimRateForWalkAnim(ZombieAnimRig *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  bVar1 = std::operator==(param_1,"");
  if ((!bVar1) &&
     (fVar3 = (float)CalcWalkPixelsPerSecondForAnimLabel
                               ((PopAnimRig *)this,(string *)(this + 0x218),param_1), 0.0 < fVar3))
  {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    (**(code **)(*(long *)this + 0x80))
              ((((float)iVar2 * *(float *)(this + 0x224)) / fVar3) * *(float *)(this + 0x228),this);
    return;
  }
  (**(code **)(*(long *)this + 0x80))(*(undefined4 *)(this + 0x228),this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::PlayWalk(RtReflectionDelegate<Sexy::Delegate3<std::string const&, std::string
   const&, int> >) */

void __thiscall ZombieAnimRig::PlayWalk(ZombieAnimRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1f0))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 2;
    PopAnimRig::CalcPlayingAnimLabelName();
    setAnimRateForWalkAnim(this,asStack_58);
    std::string::~string(asStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::PlayReverseWalk(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void __thiscall ZombieAnimRig::PlayReverseWalk(ZombieAnimRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x228))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 2;
    PopAnimRig::CalcPlayingAnimLabelName();
    setAnimRateForWalkAnim(this,asStack_58);
    std::string::~string(asStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::SetDesiredWalkVelocity(float) */

void __thiscall ZombieAnimRig::SetDesiredWalkVelocity(ZombieAnimRig *this,float param_1)

{
  string asStack_10 [8];
  long local_8;
  
  *(float *)(this + 0x224) = param_1;
  local_8 = ___stack_chk_guard;
  PopAnimRig::CalcPlayingAnimLabelName();
  setAnimRateForWalkAnim(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::SetAnimRateModifier(float) */

void __thiscall ZombieAnimRig::SetAnimRateModifier(ZombieAnimRig *this,float param_1)

{
  string asStack_10 [8];
  long local_8;
  
  *(float *)(this + 0x228) = param_1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x210) == 2) {
    PopAnimRig::CalcPlayingAnimLabelName();
    setAnimRateForWalkAnim(this,asStack_10);
    std::string::~string(asStack_10);
  }
  else {
    (**(code **)(*(long *)this + 0x80))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::PlayResilienceStandstill(std::string const&) */

void __thiscall ZombieAnimRig::PlayResilienceStandstill(ZombieAnimRig *this,string *param_1)

{
  int iVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,param_1,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::PlayEat() */

void __thiscall ZombieAnimRig::PlayEat(ZombieAnimRig *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x230))(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,3,aDStack_38);
  std::string::~string(asStack_40);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 3;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::PlayStunned() */

void __thiscall ZombieAnimRig::PlayStunned(ZombieAnimRig *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x248))(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,3,aDStack_38);
  std::string::~string(asStack_40);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 6;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* ZombieAnimRig::SetNeedsToDie() */

void __thiscall ZombieAnimRig::SetNeedsToDie(ZombieAnimRig *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  this[0x230] = (ZombieAnimRig)0x0;
  *(undefined4 *)(this + 0x22c) = uVar1;
  if (*(code **)(*(long *)this + 0x208) != onNeedsToDie) {
    (**(code **)(*(long *)this + 0x208))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::ZombieUpdateAnim(bool) */

void __thiscall ZombieAnimRig::ZombieUpdateAnim(ZombieAnimRig *this,bool param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_24;
  float local_20;
  float local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_24 = 0.0;
  local_8 = ___stack_chk_guard;
  local_20 = 0.0;
  PopAnimRig::CalcPlayingAnimLabelName();
  if (param_1) {
    lVar2 = FUN_045f0414(*(undefined8 *)(this + 0x20));
    fVar5 = *(float *)(*(long *)(lVar2 + 0x50) + 0xc);
    cVar1 = PopAnimRig::CalcLayerTranslation
                      ((PopAnimRig *)this,(string *)(this + 0x218),&local_24,&local_20);
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim((PopAnimRig *)this,fVar3,fVar4);
    if (cVar1 != '\0') {
      PopAnimRig::CalcPlayingAnimLabelName();
      cVar1 = std::operator==(asStack_10,asStack_18);
      std::string::~string(asStack_10);
      if ((cVar1 == '\0') ||
         (lVar2 = FUN_045f0414(*(undefined8 *)(this + 0x20)),
         *(float *)(*(long *)(lVar2 + 0x50) + 0xc) < fVar5)) goto LAB_045f1abc;
      cVar1 = PopAnimRig::CalcLayerTranslation
                        ((PopAnimRig *)this,(string *)(this + 0x218),&local_1c,(float *)asStack_10);
      if (cVar1 != '\0') {
        *(float *)(this + 0x220) = local_1c - local_24;
        goto LAB_045f1abc;
      }
    }
  }
  else {
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim((PopAnimRig *)this,fVar3,fVar4);
  }
  *(undefined4 *)(this + 0x220) = 0;
LAB_045f1abc:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig::getEmptyLayerNames() const */

undefined * ZombieAnimRig::getEmptyLayerNames(void)

{
  int iVar1;
  
  if (((DAT_06b166f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b166f8), iVar1 != 0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&DAT_06b16738);
    __cxa_guard_release(&DAT_06b166f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16738,
                 &DAT_06a88000);
    return &DAT_06b16738;
  }
  return &DAT_06b16738;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::SpawnProjectileParticle() */

void __thiscall ZombieAnimRig::SpawnProjectileParticle(ZombieAnimRig *this)

{
  vector *pvVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*(long *)this + 0x78);
  std::string::string(asStack_28,"particles");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar3)(this,asStack_28,0,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  pvVar1 = (vector *)(**(code **)(*(long *)this + 0x210))(this);
  (**(code **)(*(long *)this + 0x1a0))(avStack_20,this);
  uVar2 = SpawnZombieProjectileParticle(this,pvVar1,(string *)avStack_20,0.75);
  std::string::~string((string *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ZombieAnimRig::CreateProjectileParticle() */

void __thiscall ZombieAnimRig::CreateProjectileParticle(ZombieAnimRig *this)

{
  PopAnim *pPVar1;
  RtClass *pRVar2;
  ZombieAnimRig *this_00;
  
  pPVar1 = (PopAnim *)FUN_045f0414(*(undefined8 *)(this + 0x20));
  pRVar2 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  PopAnimRig::CreateRig(pPVar1,pRVar2);
  nop();
  SpawnProjectileParticle(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::SetLayerVisibilityForCurrentState() */

void __thiscall ZombieAnimRig::SetLayerVisibilityForCurrentState(ZombieAnimRig *this)

{
  bool bVar1;
  string *psVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  ArmorPropertySheetUtils::GetToggleLayers
            ((ArmorPropertySheetUtils *)(this + 0x238),___stack_chk_guard);
  local_30 = FUN_045f1bb4(local_20);
  while( true ) {
    local_28 = FUN_045f1c04(local_18);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) break;
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar2,false);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::getHeadLayerNames() */

void ZombieAnimRig::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16688 & 1;
  if (((DAT_06b16688 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16688), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16698,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b16688);
    __cxa_atexit(FUN_045efea4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16728 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16728), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b166c0,(string *)&DAT_06b16698,(allocator *)&DAT_06b166a0);
    __cxa_guard_release(&DAT_06b16728);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b166c0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b166c0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::getArmLayerNames() */

void ZombieAnimRig::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16700 & 1;
  if (((DAT_06b16700 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16700), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16730,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b16700);
    __cxa_atexit(FUN_045efeb0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b166a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b166a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16760,(string *)&DAT_06b16730,(allocator *)&DAT_06b16738);
    __cxa_guard_release(&DAT_06b166a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16760,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16760);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig::getArmReplacementPairNames() */

void ZombieAnimRig::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16678 & 1;
  if (((DAT_06b16678 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16678), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16680,"FIXME, 0 size array");
    nop();
    __cxa_guard_release(&DAT_06b16678);
    __cxa_atexit(FUN_045efebc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b166e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b166e0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b166a8,(string *)&DAT_06b16680,(allocator *)&DAT_06b16688);
    __cxa_guard_release(&DAT_06b166e0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b166a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b166a8);
}


/* ZombieAnimRig::onPopAnimInitialized() */

void __thiscall ZombieAnimRig::onPopAnimInitialized(ZombieAnimRig *this)

{
  undefined4 uVar1;
  
  PopAnimRig::onPopAnimInitialized((PopAnimRig *)this);
  *(undefined4 *)(this + 0x210) = 0;
  this[0x230] = (ZombieAnimRig)0x0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = 0x3f800000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x22c) = uVar1;
  (**(code **)(*(long *)this + 0x1b8))(this);
  SetButterVisibility(this,false);
  SetInkVisibility(this,false);
  (**(code **)(*(long *)this + 0x1f8))(this);
  return;
}

