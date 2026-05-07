// Class: ZombieCarnieMagicianArtifact


/* ZombieCarnieMagicianArtifact::onDestroy() */

void __thiscall ZombieCarnieMagicianArtifact::onDestroy(ZombieCarnieMagicianArtifact *this)

{
  this[0x51c] = (ZombieCarnieMagicianArtifact)0x1;
  (**(code **)(*(long *)this + 0x2f0))();
  Zombie::ClearConditions((Zombie *)this);
  MessageRouter::Post<Zombie*,Zombie*>
            ((MessageRouter *)gMessageRouter,Message::ZombieDestroyed,(Zombie *)this);
  AttachedEffectManager::Clear((AttachedEffectManager *)(this + 0x420));
  EntityComponent_GroundEffect::Destroy((EntityComponent_GroundEffect *)(this + 0x198));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieMagicianArtifact::StaticClassInit() */

void ZombieCarnieMagicianArtifact::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCarnieMagicianArtifact");
    (*pcVar2)(plVar1,asStack_10,FUN_04f3918c,0x868,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieMagicianArtifact::SetRecoveryTime(int) */

void __thiscall
ZombieCarnieMagicianArtifact::SetRecoveryTime(ZombieCarnieMagicianArtifact *this,int param_1)

{
  *(int *)(this + 0x850) = param_1;
  return;
}


/* ZombieCarnieMagicianArtifact::SetMagichatParams(float, float) */

void __thiscall
ZombieCarnieMagicianArtifact::SetMagichatParams
          (ZombieCarnieMagicianArtifact *this,float param_1,float param_2)

{
  *(float *)(this + 0x854) = param_1;
  *(float *)(this + 0x858) = param_2;
  return;
}


/* ZombieCarnieMagicianArtifact::SetEnableDove(bool) */

void __thiscall
ZombieCarnieMagicianArtifact::SetEnableDove(ZombieCarnieMagicianArtifact *this,bool param_1)

{
  this[0x860] = (ZombieCarnieMagicianArtifact)param_1;
  return;
}


/* ZombieCarnieMagicianArtifact::SetPassiveField3(bool) */

void __thiscall
ZombieCarnieMagicianArtifact::SetPassiveField3(ZombieCarnieMagicianArtifact *this,bool param_1)

{
  this[0x861] = (ZombieCarnieMagicianArtifact)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieMagicianArtifact::RecoveryZombie() */

void __thiscall ZombieCarnieMagicianArtifact::RecoveryZombie(ZombieCarnieMagicianArtifact *this)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_04f2d4d8(*(undefined4 *)(this + 0x284));
  Zombie::SetHitpoints((Zombie *)this,fVar2);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_10 = *(undefined4 *)(puVar1 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),0x42f00000);
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieMagicianArtifact::CheckDisappear() */

bool __thiscall ZombieCarnieMagicianArtifact::CheckDisappear(ZombieCarnieMagicianArtifact *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x85c) < fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieMagicianArtifact::GenerateMagichat() */

void __thiscall ZombieCarnieMagicianArtifact::GenerateMagichat(ZombieCarnieMagicianArtifact *this)

{
  RtObject *this_00;
  GridItemMagichat *this_01;
  Board *this_02;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"griditem_artifact_magichat");
  this_00 = (RtObject *)Board::AddGridItem(this_02,asStack_10,local_18,local_14,1);
  this_01 = Sexy::RtObject::Cast<GridItemMagichat>(this_00);
  std::string::~string(asStack_10);
  nop();
  if (this_01 != (GridItemMagichat *)0x0) {
    FUN_04f2d494(*(undefined4 *)(this + 0x854),this_01 + 300);
    FUN_04f2d49c(*(undefined4 *)(this + 0x854),this_01 + 0x128);
    GridItemMagichat::SetDuration(this_01,*(float *)(this + 0x858));
    GridItemMagichat::SetLevel(this_01,*(int *)(this + 0x50));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieMagicianArtifact::ZombieDied(Zombie*, DamageInfo const*) */

void ZombieCarnieMagicianArtifact::ZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  if (0.0 < *(float *)(param_1 + 0x858)) {
    GenerateMagichat((ZombieCarnieMagicianArtifact *)param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieMagicianArtifact::CreateDisappearEffect() */

void __thiscall
ZombieCarnieMagicianArtifact::CreateDisappearEffect(ZombieCarnieMagicianArtifact *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  float *pfVar3;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ARTIFACT_MAGICHAT_SMOKE");
  nop();
  GetPAMByName(asStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*pfVar3,pfVar3[1] - 40.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)this + 200))(this);
  FUN_04f2d488(this_00 + 0x1c,iVar1 + 1);
  Effect_PopAnim::SetCentered(this_00,true);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieMagicianArtifact::updateState_Walk() */

void __thiscall ZombieCarnieMagicianArtifact::updateState_Walk(ZombieCarnieMagicianArtifact *this)

{
  char cVar1;
  
  cVar1 = CheckDisappear(this);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0xa60))(this);
    ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,1);
    ZombieCarnieMagician::updateState_Walk((ZombieCarnieMagician *)this);
    return;
  }
  CreateDisappearEffect(this);
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* ZombieCarnieMagicianArtifact::updateState_Eat() */

void __thiscall ZombieCarnieMagicianArtifact::updateState_Eat(ZombieCarnieMagicianArtifact *this)

{
  char cVar1;
  
  cVar1 = CheckDisappear(this);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0xa60))(this);
    ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,2);
    ZombieCarnieMagician::updateState_Eat((ZombieCarnieMagician *)this);
    return;
  }
  CreateDisappearEffect(this);
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* ZombieCarnieMagicianArtifact::ZombieCarnieMagicianArtifact() */

void __thiscall
ZombieCarnieMagicianArtifact::ZombieCarnieMagicianArtifact(ZombieCarnieMagicianArtifact *this)

{
  ZombieCarnieMagician::ZombieCarnieMagician((ZombieCarnieMagician *)this);
  *(undefined ***)this = &PTR_GetClass_06a13d50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCarnieMagicianArtifact_06a147c8;
  return;
}


/* ZombieCarnieMagicianArtifact::StaticNew() */

ZombieCarnieMagicianArtifact * ZombieCarnieMagicianArtifact::StaticNew(void)

{
  ZombieCarnieMagicianArtifact *this;
  
  this = ::operator_new(0x868);
  ZombieCarnieMagicianArtifact(this);
  return this;
}


/* ZombieCarnieMagicianArtifact::onZombieInitialize() */

void __thiscall ZombieCarnieMagicianArtifact::onZombieInitialize(ZombieCarnieMagicianArtifact *this)

{
  ZombieCarnieMagicianProps *pZVar1;
  float fVar2;
  
  ZombieCarnieMagician::onZombieInitialize((ZombieCarnieMagician *)this);
  *(undefined4 *)(this + 0x850) = 0;
  this[0x860] = (ZombieCarnieMagicianArtifact)0x0;
  this[0x861] = (ZombieCarnieMagicianArtifact)0x0;
  *(undefined4 *)(this + 0x854) = 0;
  *(undefined4 *)(this + 0x858) = 0;
  pZVar1 = Zombie::GetProps<ZombieCarnieMagicianProps>((Zombie *)this);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x85c) = fVar2 + *(float *)(pZVar1 + 0x270);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieMagicianArtifact::tryStartZombieActions() */

void __thiscall
ZombieCarnieMagicianArtifact::tryStartZombieActions(ZombieCarnieMagicianArtifact *this)

{
  char cVar1;
  char cVar2;
  ZombieCarnieMagicianProps *pZVar3;
  ZombieWithActionsProps *pZVar4;
  RtWeakPtrBase *pRVar5;
  long *plVar6;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombieCarnieMagicianProps>((Zombie *)this);
  cVar1 = Creature::IsOnBoard();
  if (((cVar1 != '\0') && (cVar1 = RealObject::IsOnTeam(this,1), cVar1 != '\0')) &&
     (*(int *)(this + 0x84c) == 3)) {
    fVar7 = (float)PVZ_T();
    if (*(float *)(this + 0x840) < fVar7) {
      *(undefined4 *)(this + 0x84c) = 0;
      cVar2 = '\0';
      fVar7 = (float)PVZ_T();
      *(float *)(this + 0x840) = fVar7 + *(float *)(pZVar3 + 0x234);
      pZVar4 = Zombie::GetProps<ZombieWithActionsProps>((Zombie *)this);
      pRVar5 = (RtWeakPtrBase *)FUN_04f2d654(*(undefined8 *)(pZVar4 + 0x210),0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar5);
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      cVar1 = (**(code **)(*plVar6 + 0x80))(plVar6,this);
      if (cVar1 != '\0') {
LAB_04f31ce0:
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        cVar2 = ZombieWithActions::tryStartAction((ZombieWithActions *)this,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
    }
    else {
      fVar7 = (float)PVZ_T();
      if ((fVar7 <= *(float *)(this + 0x848)) || (this[0x860] == (ZombieCarnieMagicianArtifact)0x0))
      goto LAB_04f31b84;
      *(undefined4 *)(this + 0x84c) = 2;
      fVar7 = (float)PVZ_T();
      *(float *)(this + 0x848) = fVar7 + *(float *)(pZVar3 + 0x23c);
      pZVar4 = Zombie::GetProps<ZombieWithActionsProps>((Zombie *)this);
      pRVar5 = (RtWeakPtrBase *)FUN_04f2d654(*(undefined8 *)(pZVar4 + 0x210),1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar5);
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      cVar1 = (**(code **)(*plVar6 + 0x80))(plVar6,this);
      if (cVar1 != '\0') goto LAB_04f31ce0;
      cVar2 = '\0';
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (cVar2 != '\0') goto LAB_04f31ba0;
  }
LAB_04f31b84:
  cVar2 = '\0';
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x84c) = 3;
  }
LAB_04f31ba0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* ZombieCarnieMagicianArtifact::~ZombieCarnieMagicianArtifact() */

void __thiscall
ZombieCarnieMagicianArtifact::~ZombieCarnieMagicianArtifact(ZombieCarnieMagicianArtifact *this)

{
  *(undefined ***)this = &PTR_GetClass_06a13d50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCarnieMagicianArtifact_06a147c8;
  ZombieCarnieMagician::~ZombieCarnieMagician((ZombieCarnieMagician *)this);
  return;
}


/* non-virtual thunk to ZombieCarnieMagicianArtifact::~ZombieCarnieMagicianArtifact() */

void __thiscall
ZombieCarnieMagicianArtifact::~ZombieCarnieMagicianArtifact(ZombieCarnieMagicianArtifact *this)

{
  ~ZombieCarnieMagicianArtifact(this + -0x10);
  return;
}


/* ZombieCarnieMagicianArtifact::~ZombieCarnieMagicianArtifact() */

void __thiscall
ZombieCarnieMagicianArtifact::~ZombieCarnieMagicianArtifact(ZombieCarnieMagicianArtifact *this)

{
  ~ZombieCarnieMagicianArtifact(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCarnieMagicianArtifact::~ZombieCarnieMagicianArtifact() */

void __thiscall
ZombieCarnieMagicianArtifact::~ZombieCarnieMagicianArtifact(ZombieCarnieMagicianArtifact *this)

{
  ~ZombieCarnieMagicianArtifact(this + -0x10);
  return;
}


/* ZombieCarnieMagicianArtifact::StaticGetClass() */

long * ZombieCarnieMagicianArtifact::StaticGetClass(void)

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
  uVar2 = ZombieCarnieMagician::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCarnieMagicianArtifact",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCarnieMagicianArtifact::GetClass() const */

long * ZombieCarnieMagicianArtifact::GetClass(void)

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
  uVar2 = ZombieCarnieMagician::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCarnieMagicianArtifact",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

