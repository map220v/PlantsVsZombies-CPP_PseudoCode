// Class: BloomingHeartsProjectile


/* BloomingHeartsProjectile::~BloomingHeartsProjectile() */

void __thiscall BloomingHeartsProjectile::~BloomingHeartsProjectile(BloomingHeartsProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06727600;
  *(undefined ***)(this + 0x10) = &PTR__BloomingHeartsProjectile_067277f0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BloomingHeartsProjectile::~BloomingHeartsProjectile() */

void __thiscall BloomingHeartsProjectile::~BloomingHeartsProjectile(BloomingHeartsProjectile *this)

{
  ~BloomingHeartsProjectile(this + -0x10);
  return;
}


/* BloomingHeartsProjectile::~BloomingHeartsProjectile() */

void __thiscall BloomingHeartsProjectile::~BloomingHeartsProjectile(BloomingHeartsProjectile *this)

{
  ~BloomingHeartsProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BloomingHeartsProjectile::~BloomingHeartsProjectile() */

void __thiscall BloomingHeartsProjectile::~BloomingHeartsProjectile(BloomingHeartsProjectile *this)

{
  ~BloomingHeartsProjectile(this + -0x10);
  return;
}


/* BloomingHeartsProjectile::BloomingHeartsProjectile() */

void __thiscall BloomingHeartsProjectile::BloomingHeartsProjectile(BloomingHeartsProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06727600;
  *(undefined ***)(this + 0x10) = &PTR__BloomingHeartsProjectile_067277f0;
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* BloomingHeartsProjectile::StaticNew() */

BloomingHeartsProjectile * BloomingHeartsProjectile::StaticNew(void)

{
  BloomingHeartsProjectile *this;
  
  this = ::operator_new(0x1b0);
  BloomingHeartsProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BloomingHeartsProjectile::StaticClassInit() */

void BloomingHeartsProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BloomingHeartsProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03afb08c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BloomingHeartsProjectile::StaticGetClass() */

long * BloomingHeartsProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BloomingHeartsProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BloomingHeartsProjectile::GetClass() const */

long * BloomingHeartsProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BloomingHeartsProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BloomingHeartsProjectile::calcAnimForStacks(float) */

void BloomingHeartsProjectile::calcAnimForStacks(float param_1)

{
  long lVar1;
  Projectile *in_x0;
  long extraout_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  Projectile::GetProps(in_x0);
  nop();
  if (param_1 <= 0.0) {
    std::string::string(in_x8,"animation_sm");
    nop();
  }
  else if (param_1 < *(float *)(extraout_x0 + 0x1e0)) {
    std::string::string(in_x8,"animation_med");
    nop();
  }
  else {
    std::string::string(in_x8,"animation_lrg");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BloomingHeartsProjectile::handleImpact(BoardEntity*) */

void __thiscall
BloomingHeartsProjectile::handleImpact(BloomingHeartsProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  float *pfVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  float fVar5;
  RtMixedPtrBase aRStack_28 [8];
  float local_20;
  float local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x170))();
  Projectile::GetProps((Projectile *)this);
  nop();
  GetPAMByName((string *)(extraout_x0 + 0x140));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar1 != '\0') {
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_20);
    Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_20);
    if ((param_1 == (BoardEntity *)0x0) || (*(char *)(extraout_x0 + 0x6d) == '\0')) {
      fVar5 = (local_1c + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
      local_20 = local_20 + *(float *)(this + 0x18);
    }
    else {
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      fVar5 = (local_1c + pfVar3[1]) - pfVar3[2];
      local_20 = local_20 + *pfVar3;
    }
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(this_00,true);
    EATextSquish::Vec3::Vec3(aVStack_18,local_20,fVar5,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
    if (*(code **)(*(long *)this + 400) == Projectile::CalcRenderOrder) {
      iVar2 = Projectile::CalcRenderOrder((Projectile *)this);
    }
    else {
      iVar2 = (**(code **)(*(long *)this + 400))();
    }
    FUN_03afadc0(this_00 + 0x1c,iVar2 + 1);
    std::string::string((string *)aVStack_18,"animation_sm");
    Effect_PopAnim::PlaySingleAnimation(this_00,aVStack_18,0);
    std::string::~string((string *)aVStack_18);
    nop();
  }
  cVar1 = *(char *)(extraout_x0 + 0x65);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BloomingHeartsProjectile::damageEntity(BoardEntity*) */

void __thiscall
BloomingHeartsProjectile::damageEntity(BloomingHeartsProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  Zombie *this_00;
  GridItem *this_01;
  float *pfVar3;
  EntityConditionTracker<GridItem,GridItemConditions> *pEVar4;
  long lVar5;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar6;
  Zombie *pZVar7;
  float fVar8;
  float fVar9;
  float local_6c;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  if (param_1 == (BoardEntity *)0x0) {
    if (this[0x48] == (BloomingHeartsProjectile)0x0) goto LAB_03afc814;
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  }
  else {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    this_01 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
    if (this[0x48] == (BloomingHeartsProjectile)0x0) goto LAB_03afc814;
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
    if (this_00 != (Zombie *)0x0) {
      cVar1 = Zombie::HasCondition(this_00,0x48);
      if (cVar1 != '\0') {
        pEVar6 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                 Zombie::GetConditionTracker(this_00);
        lVar5 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar6,0x48);
        *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(lVar5 + 0xc);
        Zombie::EndCondition(this_00,0x48);
      }
      local_6c = *(float *)(extraout_x0 + 0x1e8) + *(float *)(this + 0x1a8);
      pfVar3 = eastl::min_alt<float>(&local_6c,(float *)(extraout_x0 + 0x1e0));
      fVar8 = *pfVar3;
      pZVar7 = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar7,0,this_00,0x48,1);
      Zombie::SetConditionTracker(fVar8,this_00,0x48);
      iVar2 = FUN_03afadd4(*(undefined4 *)(this + 0x70));
      if (1 < iVar2) {
        fVar8 = (float)Sexy::Rand(1.0);
        fVar9 = *(float *)(extraout_x0 + 0x1ec);
        iVar2 = FUN_03afadd4(*(undefined4 *)(this + 0x70));
        if (2 < iVar2) {
          fVar9 = *(float *)(extraout_x0 + 0x1f0) * fVar9 + fVar9;
        }
        if ((fVar8 < fVar9) && (cVar1 = Zombie::HasCondition(this_00,0x49), cVar1 == '\0')) {
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(extraout_x0 + 500),0,this_00,0x49,1);
        }
      }
    }
    if (this_01 != (GridItem *)0x0) {
      cVar1 = GridItem::HasCondition(this_01,3);
      if (cVar1 != '\0') {
        pEVar4 = (EntityConditionTracker<GridItem,GridItemConditions> *)
                 GridItem::GetConditionTracker(this_01);
        lVar5 = EntityConditionTracker<GridItem,GridItemConditions>::GetCondition(pEVar4,3);
        *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(lVar5 + 0xc);
        GridItem::EndCondition(this_01,3);
      }
      local_6c = *(float *)(extraout_x0 + 0x1e8) + *(float *)(this + 0x1a8);
      pfVar3 = eastl::min_alt<float>(&local_6c,(float *)(extraout_x0 + 0x1e0));
      fVar8 = *pfVar3;
      PVZ_EOT();
      GridItem::ApplyCondition(this_01,3);
      GridItem::SetConditionTracker(fVar8,this_01,3);
    }
  }
  local_60 = local_60 + *(float *)(this + 0x1a8) * *(float *)(extraout_x0 + 0x1e4);
  (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
LAB_03afc814:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

