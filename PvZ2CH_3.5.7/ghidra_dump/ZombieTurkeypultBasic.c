// Class: ZombieTurkeypultBasic


/* ZombieTurkeypultBasic::~ZombieTurkeypultBasic() */

void __thiscall ZombieTurkeypultBasic::~ZombieTurkeypultBasic(ZombieTurkeypultBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_06729bd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTurkeypultBasic_0672a5e8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieTurkeypultBasic::~ZombieTurkeypultBasic() */

void __thiscall ZombieTurkeypultBasic::~ZombieTurkeypultBasic(ZombieTurkeypultBasic *this)

{
  ~ZombieTurkeypultBasic(this + -0x10);
  return;
}


/* ZombieTurkeypultBasic::~ZombieTurkeypultBasic() */

void __thiscall ZombieTurkeypultBasic::~ZombieTurkeypultBasic(ZombieTurkeypultBasic *this)

{
  ~ZombieTurkeypultBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieTurkeypultBasic::~ZombieTurkeypultBasic() */

void __thiscall ZombieTurkeypultBasic::~ZombieTurkeypultBasic(ZombieTurkeypultBasic *this)

{
  ~ZombieTurkeypultBasic(this + -0x10);
  return;
}


/* ZombieTurkeypultBasic::ZombieTurkeypultBasic() */

void __thiscall ZombieTurkeypultBasic::ZombieTurkeypultBasic(ZombieTurkeypultBasic *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06729bd0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTurkeypultBasic_0672a5e8;
  return;
}


/* ZombieTurkeypultBasic::StaticNew() */

ZombieTurkeypultBasic * ZombieTurkeypultBasic::StaticNew(void)

{
  ZombieTurkeypultBasic *this;
  
  this = ::operator_new(0x808);
  ZombieTurkeypultBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTurkeypultBasic::StaticClassInit() */

void ZombieTurkeypultBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTurkeypultBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_03b05920,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTurkeypultBasic::StaticGetClass() */

long * ZombieTurkeypultBasic::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTurkeypultBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTurkeypultBasic::GetClass() const */

long * ZombieTurkeypultBasic::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTurkeypultBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTurkeypultBasic::TurkeyRefreshStats() */

void __thiscall ZombieTurkeypultBasic::TurkeyRefreshStats(ZombieTurkeypultBasic *this)

{
  int iVar1;
  string *psVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar4 = Zombie::CalcExtraDpsFactor((Zombie *)this);
  *(undefined4 *)(this + 0x5a8) = uVar4;
  uVar4 = Zombie::CalcExtraHpFactor((Zombie *)this);
  *(undefined4 *)(this + 0x5ac) = uVar4;
  psVar2 = (string *)Zombie::GetTypeName((Zombie *)this);
  lVar3 = FUN_045b32dc(*(undefined8 *)(this + 0x550));
  fVar5 = (float)NewPVPUtils::ApplyOverride_ZombieHitpoints
                           (psVar2,*(int *)(this + 0x29c),*(float *)(lVar3 + 0x18));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x1c8));
  iVar1 = BoardHelpers::GetLevelBasedZombieTypeIndexByType(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  fVar6 = (float)BoardHelpers::ApplyLevelBasedModifierValue(1.0,0xe,iVar1,0);
  fVar7 = (float)BoardHelpers::ApplyLevelBasedModifierValue(0.0,0xe,iVar1,3);
  fVar8 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  fVar8 = (fVar7 + fVar5 * fVar6) * fVar8;
  *(float *)(this + 0x280) = fVar8;
  *(float *)(this + 0x284) = fVar8;
  lVar3 = FUN_045b32dc(*(undefined8 *)(this + 0x550));
  fVar6 = *(float *)(lVar3 + 0x60);
  uVar4 = *(undefined4 *)(lVar3 + 0x5c);
  fVar5 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  Zombie::setHelm((Zombie *)(fVar5 * fVar6),this,uVar4);
  Zombie::Heal((Zombie *)this);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTurkeypultBasic::onInitialized() */

void __thiscall ZombieTurkeypultBasic::onInitialized(ZombieTurkeypultBasic *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x800) = fVar1 + 20.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTurkeypultBasic::updateState_Walk() */

void __thiscall ZombieTurkeypultBasic::updateState_Walk(ZombieTurkeypultBasic *this)

{
  char cVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  EntityConditionTracker<Creature,CreatureConditions> *this_01;
  SexyVector3 *this_02;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::updateState_Walk((Zombie *)this);
  cVar1 = (**(code **)(*(long *)this + 0x330))(this);
  if (cVar1 == '\0') {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fVar10 = *(float *)(lVar3 + 0x10);
    this_01 = (EntityConditionTracker<Creature,CreatureConditions> *)
              Zombie::GetConditionTracker((Zombie *)this);
    fVar5 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this_01);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar6 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
    fVar7 = (float)PVZ_Dt();
    uVar8 = 0;
    uVar9 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,fVar5 * fVar6 * fVar10 * fVar7 * (float)iVar2,0.0,0.0);
    pcVar4 = *(code **)(*(long *)this + 0x78);
    this_02 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    local_18 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)aVStack_28);
    local_14 = uVar8;
    local_10 = uVar9;
    (*pcVar4)(this,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTurkeypultBasic::onUpdate() */

void __thiscall ZombieTurkeypultBasic::onUpdate(ZombieTurkeypultBasic *this)

{
  float fVar1;
  float fVar2;
  
  Zombie::onUpdate((Zombie *)this);
  fVar2 = *(float *)(this + 0x800);
  fVar1 = (float)PVZ_T();
  if (fVar2 < fVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* ZombieTurkeypultBasic::TakeDamage(DamageInfo const&) */

void __thiscall ZombieTurkeypultBasic::TakeDamage(ZombieTurkeypultBasic *this,DamageInfo *param_1)

{
  float fVar1;
  
  Zombie::TakeDamage((Zombie *)this,param_1);
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x800) = fVar1 + 20.0;
  return;
}


/* ZombieTurkeypultBasic::calcEatDamage() */

void __thiscall ZombieTurkeypultBasic::calcEatDamage(ZombieTurkeypultBasic *this)

{
  Zombie::calcEatDamage();
  return;
}

