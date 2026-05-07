// Class: IceYearMonsterProjectile


/* IceYearMonsterProjectile::onProjectileInitialized() */

void __thiscall IceYearMonsterProjectile::onProjectileInitialized(IceYearMonsterProjectile *this)

{
  RealObject::JoinTeam((RealObject *)this,2);
  return;
}


/* IceYearMonsterProjectile::~IceYearMonsterProjectile() */

void __thiscall IceYearMonsterProjectile::~IceYearMonsterProjectile(IceYearMonsterProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067ab5d0;
  *(undefined ***)(this + 0x10) = &PTR__IceYearMonsterProjectile_067ab7c0;
  std::string::~string((string *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to IceYearMonsterProjectile::~IceYearMonsterProjectile() */

void __thiscall IceYearMonsterProjectile::~IceYearMonsterProjectile(IceYearMonsterProjectile *this)

{
  ~IceYearMonsterProjectile(this + -0x10);
  return;
}


/* IceYearMonsterProjectile::~IceYearMonsterProjectile() */

void __thiscall IceYearMonsterProjectile::~IceYearMonsterProjectile(IceYearMonsterProjectile *this)

{
  ~IceYearMonsterProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to IceYearMonsterProjectile::~IceYearMonsterProjectile() */

void __thiscall IceYearMonsterProjectile::~IceYearMonsterProjectile(IceYearMonsterProjectile *this)

{
  ~IceYearMonsterProjectile(this + -0x10);
  return;
}


/* IceYearMonsterProjectile::SetTargetPosition(Sexy::SexyVector3) */

void IceYearMonsterProjectile::SetTargetPosition
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x1b0),(SexyVector3 *)&local_10);
  return;
}


/* IceYearMonsterProjectile::IceYearMonsterProjectile() */

void __thiscall IceYearMonsterProjectile::IceYearMonsterProjectile(IceYearMonsterProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067ab5d0;
  *(undefined ***)(this + 0x10) = &PTR__IceYearMonsterProjectile_067ab7c0;
  Set8BytesTo0(this + 0x1a8);
  DVec3::DVec3((DVec3 *)(this + 0x1b0));
  return;
}


/* IceYearMonsterProjectile::StaticNew() */

IceYearMonsterProjectile * IceYearMonsterProjectile::StaticNew(void)

{
  IceYearMonsterProjectile *this;
  
  this = ::operator_new(0x1c0);
  IceYearMonsterProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IceYearMonsterProjectile::StaticClassInit() */

void IceYearMonsterProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"IceYearMonsterProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03fc74b0,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IceYearMonsterProjectile::StaticGetClass() */

long * IceYearMonsterProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IceYearMonsterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IceYearMonsterProjectile::GetClass() const */

long * IceYearMonsterProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"IceYearMonsterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IceYearMonsterProjectile::RotateToward() */

void IceYearMonsterProjectile::RotateToward(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  SexyVector3 *pSVar1;
  DVec3 *this;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 in_d1;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  this = (DVec3 *)Projectile::GetVelocity((Projectile *)in_x0);
  local_18 = Sexy::SexyVector3::operator-((SexyVector3 *)(in_x0 + 0x1b0),pSVar1);
  local_14 = (undefined4)in_d1;
  uVar2 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
  uVar3 = FUN_03fc6218(*(undefined4 *)(in_x0 + 0xc4));
  FUN_03fc63a0(uVar2,in_d1,uVar3);
  FUN_03fc621c(in_x0 + 0xc4);
  fVar4 = (float)DVec3::getLength(this);
  Projectile::SetRotatedVelocity((Projectile *)in_x0,fVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IceYearMonsterProjectile::SetAnimname(std::string) */

void IceYearMonsterProjectile::SetAnimname(Projectile *param_1)

{
  PopAnimRig *pPVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(param_1 + 0x1a8);
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig(param_1);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar1,param_1 + 0x1a8,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IceYearMonsterProjectile::handleImpact(BoardEntity*) */

void __thiscall
IceYearMonsterProjectile::handleImpact(IceYearMonsterProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  Effect_ZombieIceMove *this_00;
  ResourceInfo *pRVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  float local_20;
  float local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Projectile::getProps((Projectile *)this);
  (**(code **)(*(long *)this + 0x180))(asStack_30,this);
  cVar1 = FUN_0547419c(asStack_30);
  if (cVar1 == '\0') {
    GetPAMByName(asStack_30);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_20);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_20);
      if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar2 + 0x6d) == '\0')) {
        fVar7 = local_20 + *(float *)(this + 0x18);
        fVar5 = (local_1c + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
      }
      else {
        pfVar3 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar7 = local_20 + *pfVar3;
        fVar5 = (local_1c + pfVar3[1]) - pfVar3[2];
      }
      cVar1 = CardGameUtils::IsPlayingCardGame();
      if ((cVar1 == '\0') && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = *(undefined4 *)(this + 0xc0);
      }
      this_00 = Board::AddEffect<Effect_ZombieIceMove>(*(Board **)(gLawnApp + 0x9f0));
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
      Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
      Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
      (**(code **)(*(long *)this_00 + 0x80))(uVar6,this_00);
      EATextSquish::Vec3::Vec3(aVStack_18,fVar7,fVar5,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
      FUN_03fc6210(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aVStack_18,(RtWeakPtrBase *)(this + 0x68));
      CthulhuEyeballEffect::SetCthulhuEasyButton((CthulhuEyeballEffect *)this_00,aVStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
      std::string::string((string *)aVStack_18,"attack01_3");
      nop();
      Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,aVStack_18,2);
      std::string::~string((string *)aVStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  (**(code **)(*(long *)this + 0x48))(this);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

