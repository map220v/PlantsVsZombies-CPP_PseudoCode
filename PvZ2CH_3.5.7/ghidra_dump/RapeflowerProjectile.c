// Class: RapeflowerProjectile


/* RapeflowerProjectile::onProjectileInitialized() */

void __thiscall RapeflowerProjectile::onProjectileInitialized(RapeflowerProjectile *this)

{
  *(undefined4 *)(this + 0x208) = 0;
  this[0x20c] = (RapeflowerProjectile)0x0;
  this[0x214] = (RapeflowerProjectile)0x0;
  *(undefined4 *)(this + 0x210) = 0;
  return;
}


/* RapeflowerProjectile::HasBurn(Zombie*) */

undefined1 __thiscall RapeflowerProjectile::HasBurn(RapeflowerProjectile *this,Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = Zombie::HasCondition(param_1,0x35);
  if ((((cVar1 != '\0') || (cVar1 = Zombie::HasCondition(param_1,0x36), cVar1 != '\0')) ||
      (cVar1 = Zombie::HasCondition(param_1,0x32), cVar1 != '\0')) ||
     (cVar1 = Zombie::HasCondition(param_1,0x87), uVar2 = 0, cVar1 != '\0')) {
    uVar2 = 1;
  }
  return uVar2;
}


/* RapeflowerProjectile::onUpdate(float) */

void RapeflowerProjectile::onUpdate(float param_1)

{
  Projectile *in_x0;
  float *pfVar1;
  
  pfVar1 = (float *)Projectile::GetVelocity(in_x0);
  atan2f(pfVar1[2],*pfVar1);
  FUN_04e35510(in_x0 + 0xc4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RapeflowerProjectile::StaticClassInit() */

void RapeflowerProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"RapeflowerProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04e36b50,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RapeflowerProjectile::StaticGetClass() */

long * RapeflowerProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RapeflowerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RapeflowerProjectile::GetClass() const */

long * RapeflowerProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"RapeflowerProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RapeflowerProjectile::handleImpacteffect(BoardEntity*) */

void __thiscall
RapeflowerProjectile::handleImpacteffect(RapeflowerProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  char *__s;
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
  (**(code **)(*(long *)this + 0x180))(asStack_30);
  lVar2 = Projectile::getProps((Projectile *)this);
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
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      (**(code **)(*(long *)this_00 + 0x80))(uVar6,this_00);
      EATextSquish::Vec3::Vec3(aVStack_18,fVar7,fVar5,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
      FUN_04e35508(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      lVar2 = Projectile::getProps((Projectile *)this);
      __s = (char *)FUN_0547429c(lVar2 + 0x148);
      std::string::string((string *)aVStack_18,__s);
      Effect_PopAnim::PlaySingleAnimation(this_00,aVStack_18,2);
      std::string::~string((string *)aVStack_18);
      nop();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RapeflowerProjectile::handlerealize(BoardEntity*) */

void __thiscall RapeflowerProjectile::handlerealize(RapeflowerProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtObject *pRVar4;
  RapeflowerProjectileProps *pRVar5;
  Zombie *this_00;
  ResourceInfo *pRVar6;
  Effect_PopAnim *this_01;
  float *pfVar7;
  long lVar8;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  string asStack_30 [8];
  string asStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pRVar5 = Sexy::RtObject::Cast<RapeflowerProjectileProps>(pRVar4);
  if ((param_1 == (BoardEntity *)0x0) ||
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), !bVar1)) goto LAB_04e37230;
  ToolPacketData::GetProps();
  pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  this_00 = Sexy::RtObject::Cast<Zombie>(pRVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (this[0x214] != (RapeflowerProjectile)0x0) {
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(pRVar5 + 0x1e4),0,this_00,0x88,1);
  }
  cVar2 = (**(code **)(*(long *)this + 0x1e0))(this,this_00);
  if (cVar2 == '\0') {
    if (*(int *)(this + 0x208) < 1) {
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(pRVar5 + 0x1e8),0,this_00,0x86,1);
      iVar3 = Zombie::GetSizeType(this_00);
      if ((iVar3 != 2) && (this_00 != (Zombie *)0x0)) {
        Sexy::RtObject::IsA<ZombieCavalry>((RtObject *)this_00);
      }
    }
    else {
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(pRVar5 + 0x1e4),0,this_00,0x87,1);
    }
    if (this[0x20c] != (RapeflowerProjectile)0x0) {
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(pRVar5 + 0x1e8),0,this_00,0x89,1);
      if (this[0x214] != (RapeflowerProjectile)0x0) goto LAB_04e37200;
      if (this[0x20c] == (RapeflowerProjectile)0x0) goto LAB_04e37220;
      goto LAB_04e37288;
    }
    if (this[0x214] != (RapeflowerProjectile)0x0) {
LAB_04e37200:
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(pRVar5 + 0x1e8),0,this_00,0x88,1);
      goto LAB_04e37218;
    }
  }
  else {
    Zombie::EndCondition(this_00,0x86);
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(pRVar5 + 0x1e4),0,this_00,0x87,1);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x68));
    lVar8 = *(long *)this_00;
    *(ResourceInfo **)(this + 0x1a8) = pRVar6;
    (**(code **)(lVar8 + 0x110))(this_00,this + 0x1a8);
    if (this[0x20c] != (RapeflowerProjectile)0x0) {
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(pRVar5 + 0x1e4),0,this_00,0x89,1);
    }
    __n = aRStack_18;
    std::string::string(asStack_30,"h_idle");
    nop();
    if (*(int *)(this + 0x208) == 2) {
      std::string::append(asStack_30,"h_idle02",(size_t)__n);
    }
    else if (*(int *)(this + 0x208) == 3) {
      std::string::append(asStack_30,"h_idle03",(size_t)__n);
    }
    (**(code **)(*(long *)this + 0x180))(asStack_28,this);
    cVar2 = FUN_0547419c(asStack_28);
    if (cVar2 == '\0') {
      GetPAMByName(asStack_28);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
      if (cVar2 != '\0') {
        this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
        Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar6,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(this_01,true);
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_00);
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*pfVar7,pfVar7[1] - 30.0,0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_18,-1);
        FUN_04e35508(this_01 + 0x1c,*(int *)(this + 0x50) + 1);
        Effect_PopAnim::PlaySingleAnimation(this_01,asStack_30,0);
        std::string::string((string *)aRStack_18,"inferno_fire_ball");
        RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_18,0.0);
        std::string::~string((string *)aRStack_18);
        nop();
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
LAB_04e37218:
    if (this[0x20c] != (RapeflowerProjectile)0x0) {
LAB_04e37288:
      Zombie::SetConditionTracker(*(undefined4 *)(this + 0x210),this_00,0x89);
      Zombie::SetConditionTracker(*(float *)(this + 0x210) * 0.33333334,this_00,0x87);
      goto LAB_04e37230;
    }
  }
LAB_04e37220:
  Zombie::SetConditionTracker(*(undefined4 *)(this + 0x210),this_00,0x87);
LAB_04e37230:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RapeflowerProjectile::handleImpact(BoardEntity*) */

undefined8 __thiscall
RapeflowerProjectile::handleImpact(RapeflowerProjectile *this,BoardEntity *param_1)

{
  long lVar1;
  BoardEntity *pBVar2;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (((lVar1 = (**(code **)(*(long *)this + 0x1a0))(), lVar1 == 0 ||
       (this[0x214] != (RapeflowerProjectile)0x0)) ||
      (pBVar2 = (BoardEntity *)(**(code **)(*(long *)this + 0x1a0))(this), param_1 == pBVar2)))) {
    handlerealize(this,param_1);
    if (this[0x214] != (RapeflowerProjectile)0x0) {
      (**(code **)(*(long *)this + 0x170))(this,param_1);
    }
    handleImpacteffect(this,param_1);
    (**(code **)(*(long *)this + 0x48))(this);
    return 1;
  }
  return 0;
}


/* RapeflowerProjectile::RapeflowerProjectile() */

void __thiscall RapeflowerProjectile::RapeflowerProjectile(RapeflowerProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069dc250;
  *(undefined ***)(this + 0x10) = &PTR__RapeflowerProjectile_069dc448;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x1a8));
  return;
}


/* RapeflowerProjectile::StaticNew() */

RapeflowerProjectile * RapeflowerProjectile::StaticNew(void)

{
  RapeflowerProjectile *this;
  
  this = ::operator_new(0x218);
  RapeflowerProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RapeflowerProjectile::radiateSplashDamage(BoardEntity*) */

void __thiscall
RapeflowerProjectile::radiateSplashDamage(RapeflowerProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  RtObject *this_00;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  Zombie *pZVar8;
  ulong uVar9;
  undefined8 uVar10;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (cVar1 = (**(code **)(*(long *)param_1 + 0x128))(param_1), cVar1 == '\0')) {
    this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
    Sexy::RtObject::Cast<RapeflowerProjectileProps>(this_00);
    if (this[0x214] != (RapeflowerProjectile)0x0) {
      uVar9 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      iVar2 = BoardEntity::CalcColumnPosition(param_1);
      iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
      Sexy::Insets::Insets(aIStack_30,iVar2,iVar3,1,1);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
                 aIStack_30);
      uVar10 = local_20;
      lVar5 = FUN_04e3557c(local_20,local_18);
      if (lVar5 != 0) {
        do {
          puVar6 = (undefined8 *)FUN_04e35588(uVar10,uVar9);
          uVar4 = FUN_04e35448(*(undefined4 *)(this + 0x24));
          cVar1 = RealObject::IsOnOpposingTeam(*puVar6,uVar4);
          uVar10 = local_20;
          if (cVar1 != '\0') {
            puVar6 = (undefined8 *)FUN_04e35588(local_20,uVar9);
            pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
            if ((pZVar8 == (Zombie *)0x0) ||
               (cVar1 = (**(code **)(*(long *)pZVar8 + 0xb8))(pZVar8,7), uVar10 = local_20,
               cVar1 != '\0')) {
              uVar10 = local_20;
              puVar6 = (undefined8 *)FUN_04e35588(local_20,uVar9);
              if (param_1 != (BoardEntity *)*puVar6) {
                handlerealize(this,(BoardEntity *)*puVar6);
                uVar10 = local_20;
              }
            }
          }
          uVar9 = uVar9 + 1;
          uVar7 = FUN_04e3557c(uVar10,local_18);
        } while (uVar9 < uVar7);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RapeflowerProjectile::~RapeflowerProjectile() */

void __thiscall RapeflowerProjectile::~RapeflowerProjectile(RapeflowerProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069dc250;
  *(undefined ***)(this + 0x10) = &PTR__RapeflowerProjectile_069dc448;
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to RapeflowerProjectile::~RapeflowerProjectile() */

void __thiscall RapeflowerProjectile::~RapeflowerProjectile(RapeflowerProjectile *this)

{
  ~RapeflowerProjectile(this + -0x10);
  return;
}


/* RapeflowerProjectile::~RapeflowerProjectile() */

void __thiscall RapeflowerProjectile::~RapeflowerProjectile(RapeflowerProjectile *this)

{
  ~RapeflowerProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RapeflowerProjectile::~RapeflowerProjectile() */

void __thiscall RapeflowerProjectile::~RapeflowerProjectile(RapeflowerProjectile *this)

{
  ~RapeflowerProjectile(this + -0x10);
  return;
}


/* RapeflowerProjectile::OnCollideGround() */

undefined8 __thiscall RapeflowerProjectile::OnCollideGround(RapeflowerProjectile *this)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  
  lVar2 = Projectile::getProps((Projectile *)this);
  cVar1 = FUN_0547419c((void *)(lVar2 + 0x130));
  if (cVar1 == '\0') {
    psVar3 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEventThrottled(psVar3,*(float *)(lVar2 + 0x138),(void *)(lVar2 + 0x130));
  }
  handleImpacteffect(this,(BoardEntity *)0x0);
  (**(code **)(*(long *)this + 0x48))(this);
  return 1;
}


/* RapeflowerProjectile::SetDamageInfo(DamageInfo) */

void __thiscall RapeflowerProjectile::SetDamageInfo(RapeflowerProjectile *this,DamageInfo *param_2)

{
  DamageInfo::operator=((DamageInfo *)(this + 0x1a8),param_2);
  return;
}


/* RapeflowerProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
RapeflowerProjectile::OnCollideEntity(RapeflowerProjectile *this,BoardEntity *param_1)

{
  long lVar1;
  undefined8 uVar2;
  BoardEntity *pBVar3;
  
  lVar1 = (**(code **)(*(long *)this + 0x1a0))();
  if ((lVar1 != 0) && (this[0x214] == (RapeflowerProjectile)0x0)) {
    pBVar3 = (BoardEntity *)(**(code **)(*(long *)this + 0x1a0))(this);
    if (param_1 != pBVar3) {
      return 0;
    }
  }
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  return uVar2;
}

