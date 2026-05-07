// Class: DusklobberProjectile


/* DusklobberProjectile::~DusklobberProjectile() */

void __thiscall DusklobberProjectile::~DusklobberProjectile(DusklobberProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0673d690;
  *(undefined ***)(this + 0x10) = &PTR__DusklobberProjectile_0673d880;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to DusklobberProjectile::~DusklobberProjectile() */

void __thiscall DusklobberProjectile::~DusklobberProjectile(DusklobberProjectile *this)

{
  ~DusklobberProjectile(this + -0x10);
  return;
}


/* DusklobberProjectile::~DusklobberProjectile() */

void __thiscall DusklobberProjectile::~DusklobberProjectile(DusklobberProjectile *this)

{
  ~DusklobberProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DusklobberProjectile::~DusklobberProjectile() */

void __thiscall DusklobberProjectile::~DusklobberProjectile(DusklobberProjectile *this)

{
  ~DusklobberProjectile(this + -0x10);
  return;
}


/* DusklobberProjectile::DusklobberProjectile() */

void __thiscall DusklobberProjectile::DusklobberProjectile(DusklobberProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  this[0x1ac] = (DusklobberProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_0673d690;
  *(undefined ***)(this + 0x10) = &PTR__DusklobberProjectile_0673d880;
  return;
}


/* DusklobberProjectile::StaticNew() */

DusklobberProjectile * DusklobberProjectile::StaticNew(void)

{
  DusklobberProjectile *this;
  
  this = ::operator_new(0x1b0);
  DusklobberProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DusklobberProjectile::StaticClassInit() */

void DusklobberProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"DusklobberProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03bd5ab8,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DusklobberProjectile::StaticGetClass() */

long * DusklobberProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DusklobberProjectile::GetClass() const */

long * DusklobberProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"DusklobberProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DusklobberProjectile::setIsStun(bool) */

void __thiscall DusklobberProjectile::setIsStun(DusklobberProjectile *this,bool param_1)

{
  this[0x1ac] = (DusklobberProjectile)param_1;
  return;
}


/* DusklobberProjectile::shouldStun(BoardEntity*) */

DusklobberProjectile __thiscall
DusklobberProjectile::shouldStun(DusklobberProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Zombie *this_00;
  
  if (((((param_1 != (BoardEntity *)0x0) &&
        (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
       (cVar1 = Zombie::IsFriendZombie(this_00), cVar1 == '\0')) &&
      (((cVar1 = Zombie::IsFlying(this_00), cVar1 == '\0' &&
        (cVar1 = Zombie::IsFlickedOff(this_00), cVar1 == '\0')) &&
       ((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0' &&
        ((cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0' &&
         (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')))))))) &&
     ((cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0' &&
      ((((iVar2 = Zombie::GetSizeType(this_00), iVar2 != 2 &&
         (cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0')) &&
        (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')))))) {
    return this[0x1ac];
  }
  return (DusklobberProjectile)0x0;
}


/* DusklobberProjectile::stunZombie(BoardEntity*) */

void __thiscall DusklobberProjectile::stunZombie(DusklobberProjectile *this,BoardEntity *param_1)

{
  long lVar1;
  RtObject *pRVar2;
  Plant *pPVar3;
  float fVar4;
  Zombie *pZVar5;
  
  if (param_1 == (BoardEntity *)0x0) {
    return;
  }
  lVar1 = Projectile::GetInstigator((Projectile *)this);
  if (lVar1 != 0) {
    pRVar2 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    pPVar3 = Sexy::RtObject::Cast<Plant>(pRVar2);
    if (pPVar3 != (Plant *)0x0) {
      pRVar2 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
      pPVar3 = Sexy::RtObject::Cast<Plant>(pRVar2);
      fVar4 = (float)Plant::GetZombieConditionExtendRate(pPVar3,2);
      pZVar5._0_4_ = (Zombie *)(fVar4 * 1.5);
      goto LAB_03bd854c;
    }
  }
  pZVar5._0_4_ = (Zombie *)0x3fc00000;
LAB_03bd854c:
  nop();
  Zombie::ApplyCondition(pZVar5._0_4_,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DusklobberProjectile::handleImpact(BoardEntity*) */

void __thiscall DusklobberProjectile::handleImpact(DusklobberProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar6;
  char *__s;
  float fVar7;
  RtMixedPtrBase aRStack_30 [8];
  float local_28;
  float local_24;
  string asStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = shouldStun(this,param_1);
  if (cVar2 != '\0') {
    stunZombie(this,param_1);
  }
  (**(code **)(*(long *)this + 0x170))(this,param_1);
  lVar3 = Projectile::getProps((Projectile *)this);
  cVar2 = FUN_0547419c(lVar3 + 0x140);
  if (cVar2 == '\0') {
    lVar4 = Projectile::getProps((Projectile *)this);
    GetPAMByName((string *)(lVar4 + 0x140));
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
    if (cVar2 != '\0') {
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_28);
      Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_28);
      if ((param_1 == (BoardEntity *)0x0) || (*(char *)(lVar3 + 0x6d) == '\0')) {
        fVar7 = (local_24 + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
        local_28 = local_28 + *(float *)(this + 0x18);
      }
      else {
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        fVar7 = (local_24 + pfVar5[1]) - pfVar5[2];
        local_28 = local_28 + *pfVar5;
      }
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_00,true);
      EATextSquish::Vec3::Vec3(aVStack_18,local_28,fVar7,0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
      FUN_03bd42d8(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
      std::string::string(asStack_20,"animation");
      nop();
      if ((*(int *)(this + 0x1a8) - 2U < 3) && (this[0x1ac] != (DusklobberProjectile)0x0)) {
        Sexy::StrFormat("%d",aVStack_18,2);
        thunk_FUN_054757c0(asStack_20,aVStack_18);
        std::string::~string((string *)aVStack_18);
      }
      __s = (char *)FUN_0547429c(asStack_20);
      std::string::string((string *)aVStack_18,__s);
      Effect_PopAnim::PlaySingleAnimation(this_00,aVStack_18,0);
      std::string::~string((string *)aVStack_18);
      nop();
      std::string::~string(asStack_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  if (((*(int *)(this + 0x4c) < 1) ||
      (iVar1 = *(int *)(this + 0x4c) + -1, *(int *)(this + 0x4c) = iVar1, iVar1 == 0)) &&
     (cVar2 = *(char *)(lVar3 + 0x65), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    cVar2 = '\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

