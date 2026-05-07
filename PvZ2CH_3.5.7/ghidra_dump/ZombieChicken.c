// Class: ZombieChicken


/* ZombieChicken::GetAmberScale() */

undefined4 ZombieChicken::GetAmberScale(void)

{
  return 0x3ecccccd;
}


/* ZombieChicken::onTakeFatalDamage(DamageInfo const&) */

void ZombieChicken::onTakeFatalDamage(DamageInfo *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,6);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0xa08))(param_1);
  }
  return;
}


/* ZombieChicken::~ZombieChicken() */

void __thiscall ZombieChicken::~ZombieChicken(ZombieChicken *this)

{
  *(undefined ***)this = &PTR_GetClass_0689d3d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieChicken_0689ddf0;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieChicken::~ZombieChicken() */

void __thiscall ZombieChicken::~ZombieChicken(ZombieChicken *this)

{
  ~ZombieChicken(this + -0x10);
  return;
}


/* ZombieChicken::~ZombieChicken() */

void __thiscall ZombieChicken::~ZombieChicken(ZombieChicken *this)

{
  ~ZombieChicken(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieChicken::~ZombieChicken() */

void __thiscall ZombieChicken::~ZombieChicken(ZombieChicken *this)

{
  ~ZombieChicken(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChicken::getElectrocutePAMName() const */

void __thiscall ZombieChicken::getElectrocutePAMName(ZombieChicken *this)

{
  char cVar1;
  string *extraout_x1;
  string *in_x8;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_CHICKEN_SHOCK");
  nop();
  Zombie::GetElectrocuteColor();
  cVar1 = FUN_0547419c(aSStack_18);
  if (cVar1 == '\0') {
    FUN_05475ad8();
    Sexy::Upper(aSStack_18,extraout_x1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieChicken::ZombieChicken() */

void __thiscall ZombieChicken::ZombieChicken(ZombieChicken *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0689d3d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieChicken_0689ddf0;
  return;
}


/* ZombieChicken::StaticNew() */

ZombieChicken * ZombieChicken::StaticNew(void)

{
  ZombieChicken *this;
  
  this = ::operator_new(0x800);
  ZombieChicken(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChicken::StaticClassInit() */

void ZombieChicken::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieChicken");
    (*pcVar2)(plVar1,asStack_10,FUN_04689f48,0x800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieChicken::StaticGetClass() */

long * ZombieChicken::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieChicken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieChicken::GetClass() const */

long * ZombieChicken::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieChicken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChicken::playBirdLossAnimation(bool) */

void __thiscall ZombieChicken::playBirdLossAnimation(ZombieChicken *this,bool param_1)

{
  int iVar1;
  float *pfVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  Effect_PopAnim *this_00;
  PVPManager *this_01;
  string *psVar5;
  ResourceInfo *pRVar6;
  float local_20;
  float local_1c;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,*pfVar2,pfVar2[1]);
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  Sexy::SexyVector2::operator-=((SexyVector2 *)&local_20,(SexyVector2 *)(lVar4 + 0xc4));
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this);
  this_01 = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  psVar5 = (string *)PVPManager::GetSkillDatas(this_01);
  GetPAMByName(psVar5);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,local_20,local_1c,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_04689c1c(this_00 + 0x1c,iVar1 + 1);
  if (param_1) {
    std::string::string((string *)aRStack_18,"chicken_bucket");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  else {
    std::string::string((string *)aRStack_18,"feather_burst");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    std::string::string((string *)aRStack_18,"Play_Bird_Explo");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_18,0.0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChicken::updateState_Walk() */

void __thiscall ZombieChicken::updateState_Walk(ZombieChicken *this)

{
  char cVar1;
  int iVar2;
  SexyVector3 *this_00;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  EntityConditionTracker<Creature,CreatureConditions> *this_02;
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
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  fVar5 = *(float *)this_00;
  lVar3 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
  if (*(float *)(lVar3 + 0x10) < fVar5 - 1000.0) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  cVar1 = (**(code **)(*(long *)this + 0x330))(this);
  if (cVar1 == '\0') {
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    fVar10 = *(float *)(lVar3 + 0x10);
    this_02 = (EntityConditionTracker<Creature,CreatureConditions> *)
              Zombie::GetConditionTracker((Zombie *)this);
    fVar5 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this_02);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar6 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
    fVar7 = (float)PVZ_Dt();
    uVar8 = 0;
    uVar9 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,fVar7 * fVar6 * -((float)iVar2 * fVar5 * fVar10),0.0,0.0);
    pcVar4 = *(code **)(*(long *)this + 0x78);
    local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
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


/* ZombieChicken::onElectrocuted() */

void __thiscall ZombieChicken::onElectrocuted(ZombieChicken *this)

{
  ZombieChickenProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000);
  pZVar1 = Zombie::GetProps<ZombieChickenProps>((Zombie *)this);
  if (*(float *)(pZVar1 + 0x210) <= fVar2) {
    Zombie::onElectrocuted((Zombie *)this);
    return;
  }
  (**(code **)(*(long *)this + 0xa08))(this,1);
  return;
}

