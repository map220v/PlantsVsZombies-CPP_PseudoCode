// Class: ShineVineProjectile


/* ShineVineProjectile::~ShineVineProjectile() */

void __thiscall ShineVineProjectile::~ShineVineProjectile(ShineVineProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067a6d10;
  *(undefined ***)(this + 0x10) = &PTR__ShineVineProjectile_067a6f00;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ShineVineProjectile::~ShineVineProjectile() */

void __thiscall ShineVineProjectile::~ShineVineProjectile(ShineVineProjectile *this)

{
  ~ShineVineProjectile(this + -0x10);
  return;
}


/* ShineVineProjectile::~ShineVineProjectile() */

void __thiscall ShineVineProjectile::~ShineVineProjectile(ShineVineProjectile *this)

{
  ~ShineVineProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ShineVineProjectile::~ShineVineProjectile() */

void __thiscall ShineVineProjectile::~ShineVineProjectile(ShineVineProjectile *this)

{
  ~ShineVineProjectile(this + -0x10);
  return;
}


/* ShineVineProjectile::ShineVineProjectile() */

void __thiscall ShineVineProjectile::ShineVineProjectile(ShineVineProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (ShineVineProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_067a6d10;
  *(undefined ***)(this + 0x10) = &PTR__ShineVineProjectile_067a6f00;
  *(undefined4 *)(this + 0x1a8) = 0x3f800000;
  return;
}


/* ShineVineProjectile::StaticNew() */

ShineVineProjectile * ShineVineProjectile::StaticNew(void)

{
  ShineVineProjectile *this;
  
  this = ::operator_new(0x1b0);
  ShineVineProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShineVineProjectile::StaticClassInit() */

void ShineVineProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShineVineProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03faa448,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShineVineProjectile::StaticGetClass() */

long * ShineVineProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShineVineProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShineVineProjectile::GetClass() const */

long * ShineVineProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ShineVineProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShineVineProjectile::SetChargeAttack(bool, float) */

void __thiscall
ShineVineProjectile::SetChargeAttack(ShineVineProjectile *this,bool param_1,float param_2)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this[0x1a5] = (ShineVineProjectile)param_1;
  *(float *)(this + 0x1a8) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    std::string::string(asStack_40,"animation02");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShineVineProjectile::handleImpact(BoardEntity*) */

void __thiscall ShineVineProjectile::handleImpact(ShineVineProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  char *pcVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  string asStack_38 [8];
  RtMixedPtrBase aRStack_30 [8];
  float local_28;
  float local_24;
  string asStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Projectile::getProps((Projectile *)this);
  (**(code **)(*(long *)this + 0x180))(asStack_38,this);
  cVar1 = FUN_0547419c(asStack_38);
  if (cVar1 == '\0') {
    GetPAMByName(asStack_38);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
    if (cVar1 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_28);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_28);
      if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar2 + 0x6d) == '\0')) {
        fVar8 = local_28 + *(float *)(this + 0x18);
        fVar7 = (local_24 + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
      }
      else {
        pfVar3 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar8 = local_28 + *pfVar3;
        fVar7 = (local_24 + pfVar3[1]) - pfVar3[2];
      }
      cVar1 = CardGameUtils::IsPlayingCardGame();
      if ((cVar1 == '\0') && (cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0')) {
        uVar6 = 0x3f800000;
      }
      else {
        uVar6 = *(undefined4 *)(this + 0xc0);
      }
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      (**(code **)(*(long *)this_00 + 0x80))(uVar6,this_00);
      EATextSquish::Vec3::Vec3(aVStack_18,fVar8,fVar7,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
      FUN_03fa9480(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      if (this[0x1a5] == (ShineVineProjectile)0x0) {
        pcVar5 = "animation01";
      }
      else {
        pcVar5 = "animation02";
      }
      std::string::string(asStack_20,pcVar5);
      nop();
      pcVar5 = (char *)FUN_0547429c(asStack_20);
      std::string::string((string *)aVStack_18,pcVar5);
      Effect_PopAnim::PlaySingleAnimation(this_00,aVStack_18,2);
      std::string::~string((string *)aVStack_18);
      nop();
      std::string::~string(asStack_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  (**(code **)(*(long *)this + 0x48))(this);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

