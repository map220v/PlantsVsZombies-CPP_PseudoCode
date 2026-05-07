// Class: DarkSunbombProjectile


/* DarkSunbombProjectile::~DarkSunbombProjectile() */

void __thiscall DarkSunbombProjectile::~DarkSunbombProjectile(DarkSunbombProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067c9480;
  *(undefined ***)(this + 0x10) = &PTR__DarkSunbombProjectile_067c9670;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to DarkSunbombProjectile::~DarkSunbombProjectile() */

void __thiscall DarkSunbombProjectile::~DarkSunbombProjectile(DarkSunbombProjectile *this)

{
  ~DarkSunbombProjectile(this + -0x10);
  return;
}


/* DarkSunbombProjectile::~DarkSunbombProjectile() */

void __thiscall DarkSunbombProjectile::~DarkSunbombProjectile(DarkSunbombProjectile *this)

{
  ~DarkSunbombProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DarkSunbombProjectile::~DarkSunbombProjectile() */

void __thiscall DarkSunbombProjectile::~DarkSunbombProjectile(DarkSunbombProjectile *this)

{
  ~DarkSunbombProjectile(this + -0x10);
  return;
}


/* DarkSunbombProjectile::DarkSunbombProjectile() */

void __thiscall DarkSunbombProjectile::DarkSunbombProjectile(DarkSunbombProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067c9480;
  *(undefined ***)(this + 0x10) = &PTR__DarkSunbombProjectile_067c9670;
  return;
}


/* DarkSunbombProjectile::StaticNew() */

DarkSunbombProjectile * DarkSunbombProjectile::StaticNew(void)

{
  DarkSunbombProjectile *this;
  
  this = ::operator_new(0x1a8);
  DarkSunbombProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DarkSunbombProjectile::StaticClassInit() */

void DarkSunbombProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"DarkSunbombProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04079004,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DarkSunbombProjectile::StaticGetClass() */

long * DarkSunbombProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"DarkSunbombProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DarkSunbombProjectile::GetClass() const */

long * DarkSunbombProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"DarkSunbombProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DarkSunbombProjectile::handleImpact(BoardEntity*) */

void __thiscall
DarkSunbombProjectile::handleImpact(DarkSunbombProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  float *pfVar4;
  DarkSunbombEffect *this_00;
  ResourceInfo *pRVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  string asStack_e8 [8];
  RtMixedPtrBase aRStack_e0 [8];
  float local_d8;
  float local_d4;
  RtWeakPtr<Sexy::SoundResource> aRStack_d0 [8];
  undefined8 local_c8;
  float local_c0;
  Vec3 aVStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x170))();
  lVar3 = Projectile::getProps((Projectile *)this);
  (**(code **)(*(long *)this + 0x180))(asStack_e8,this);
  cVar2 = FUN_0547419c(asStack_e8);
  if (cVar2 == '\0') {
    GetPAMByName(asStack_e8);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_e0);
    if (cVar2 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_d8);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_d8);
      if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar3 + 0x6d) == '\0')) {
        fVar8 = local_d8 + *(float *)(this + 0x18);
        fVar7 = (local_d4 + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
      }
      else {
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar8 = local_d8 + *pfVar4;
        fVar7 = (local_d4 + pfVar4[1]) - pfVar4[2];
      }
      cVar2 = CardGameUtils::IsPlayingCardGame();
      if ((cVar2 == '\0') && (cVar2 = NewPVPUtils::IsPlayingNewPVP(), cVar2 == '\0')) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = *(undefined4 *)(this + 0xc0);
      }
      this_00 = Board::AddEffect<DarkSunbombEffect>(*(Board **)(gLawnApp + 0x9f0));
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_e0);
      Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
      Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
      (**(code **)(*(long *)this_00 + 0x80))(uVar6,this_00);
      EATextSquish::Vec3::Vec3(aVStack_68,fVar8,fVar7,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_68,-1);
      FUN_0407848c(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      DamageInfo::DamageInfo((DamageInfo *)&local_c8);
      (**(code **)(*(long *)this + 0x178))(this,(DamageInfo *)&local_c8,0);
      fVar7 = *(float *)(this + 0xd8);
      local_c0 = 1.0;
      if (*(char *)(lVar3 + 0x3c) == '\0') {
        local_c0 = (float)FUN_04078494(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                       *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
      }
      local_c0 = local_c0 * fVar7;
      local_c8 = 0;
      DamageInfo::DamageInfo((DamageInfo *)aVStack_68,(DamageInfo *)&local_c8);
      uVar6 = *(undefined4 *)(this + 0xa8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_d0,(RtWeakPtrBase *)(this + 0x68));
      DarkSunbombEffect::SetProps
                (*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                 *(undefined4 *)(this + 0x20),0x4004dd2f,this_00,aVStack_68,uVar6,aRStack_d0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
      DamageInfo::~DamageInfo((DamageInfo *)aVStack_68);
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aVStack_68);
      std::string::string((string *)aRStack_d0,"purple");
      AnimationSequence::AddLoopingAnimation(0x3f000000,aVStack_68,aRStack_d0,0);
      std::string::~string((string *)aRStack_d0);
      nop();
      std::string::string((string *)aRStack_d0,"attack_purple");
      AnimationSequence::AddSingleAnimation(aVStack_68,aRStack_d0,0);
      std::string::~string((string *)aRStack_d0);
      nop();
      Effect_PopAnim::PlayAnimationSequence
                ((Effect_PopAnim *)this_00,(AnimationSequence *)aVStack_68);
      Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this_00);
      AnimationSequence::~AnimationSequence((AnimationSequence *)aVStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)&local_c8);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0);
  }
  if (((*(int *)(this + 0x4c) < 1) ||
      (iVar1 = *(int *)(this + 0x4c) + -1, *(int *)(this + 0x4c) = iVar1, iVar1 == 0)) &&
     (cVar2 = *(char *)(lVar3 + 0x65), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    cVar2 = '\0';
  }
  std::string::~string(asStack_e8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

