// Class: ZombieEightiesGlitter


/* ZombieEightiesGlitter::StopJamming() */

void __thiscall ZombieEightiesGlitter::StopJamming(ZombieEightiesGlitter *this)

{
  this[0x804] = (ZombieEightiesGlitter)0x0;
  return;
}


/* ZombieEightiesGlitter::~ZombieEightiesGlitter() */

void __thiscall ZombieEightiesGlitter::~ZombieEightiesGlitter(ZombieEightiesGlitter *this)

{
  *(undefined ***)this = &PTR_GetClass_068f2dc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesGlitter_068f37d8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieEightiesGlitter::~ZombieEightiesGlitter() */

void __thiscall ZombieEightiesGlitter::~ZombieEightiesGlitter(ZombieEightiesGlitter *this)

{
  ~ZombieEightiesGlitter(this + -0x10);
  return;
}


/* ZombieEightiesGlitter::~ZombieEightiesGlitter() */

void __thiscall ZombieEightiesGlitter::~ZombieEightiesGlitter(ZombieEightiesGlitter *this)

{
  ~ZombieEightiesGlitter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEightiesGlitter::~ZombieEightiesGlitter() */

void __thiscall ZombieEightiesGlitter::~ZombieEightiesGlitter(ZombieEightiesGlitter *this)

{
  ~ZombieEightiesGlitter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGlitter::StaticClassInit() */

void ZombieEightiesGlitter::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEightiesGlitter");
    (*pcVar2)(plVar1,asStack_10,FUN_047e899c,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesGlitter::StaticGetClass() */

long * ZombieEightiesGlitter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesGlitter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesGlitter::GetClass() const */

long * ZombieEightiesGlitter::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesGlitter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesGlitter::ZombieEightiesGlitter() */

void __thiscall ZombieEightiesGlitter::ZombieEightiesGlitter(ZombieEightiesGlitter *this)

{
  Zombie::Zombie((Zombie *)this);
  this[0x804] = (ZombieEightiesGlitter)0x0;
  this[0x805] = (ZombieEightiesGlitter)0x0;
  *(undefined ***)this = &PTR_GetClass_068f2dc0;
  this[0x806] = (ZombieEightiesGlitter)0x0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesGlitter_068f37d8;
  *(undefined4 *)(this + 0x800) = 0;
  return;
}


/* ZombieEightiesGlitter::StaticNew() */

ZombieEightiesGlitter * ZombieEightiesGlitter::StaticNew(void)

{
  ZombieEightiesGlitter *this;
  
  this = ::operator_new(0x808);
  ZombieEightiesGlitter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGlitter::areRainbowIntroEffectsDone() */

void __thiscall ZombieEightiesGlitter::areRainbowIntroEffectsDone(ZombieEightiesGlitter *this)

{
  bool bVar1;
  long lVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = false;
  std::string::string(asStack_18,"rainbow_front_intro");
  lVar2 = Zombie::GetAttachedEffect((Zombie *)this,asStack_18);
  if (lVar2 == 0) {
    std::string::string(asStack_10,"rainbow_front");
    lVar2 = Zombie::GetAttachedEffect((Zombie *)this,asStack_10);
    bVar1 = lVar2 == 0;
    std::string::~string(asStack_10);
    nop();
  }
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* ZombieEightiesGlitter::shouldKillRainbowTrail() */

byte __thiscall ZombieEightiesGlitter::shouldKillRainbowTrail(ZombieEightiesGlitter *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) &&
      (cVar1 = RealObject::IsOnTeam(this,1), cVar1 == '\0')) &&
     ((cVar1 = Zombie::IsFlickedOff((Zombie *)this), cVar1 == '\0' &&
      (cVar1 = FUN_047e9370(*(undefined4 *)(this + 0x28)), cVar1 == '\0')))) {
    bVar2 = (byte)this[0x804] ^ 1;
  }
  else {
    bVar2 = 1;
  }
  return bVar2;
}


/* ZombieEightiesGlitter::shouldHaveRainbowTrail() */

byte __thiscall ZombieEightiesGlitter::shouldHaveRainbowTrail(ZombieEightiesGlitter *this)

{
  char cVar1;
  byte bVar2;
  
  if ((this[0x805] == (ZombieEightiesGlitter)0x0) &&
     (cVar1 = shouldKillRainbowTrail(this), cVar1 == '\0')) {
    bVar2 = Zombie::isInState((Zombie *)this,10);
    return bVar2 ^ 1;
  }
  return 0;
}


/* ZombieEightiesGlitter::shouldZombieBeInvincible(Zombie*) */

bool __thiscall
ZombieEightiesGlitter::shouldZombieBeInvincible(ZombieEightiesGlitter *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *this_00;
  RtWeakPtrBase *pRVar3;
  ZombieZombossMech *pZVar4;
  
  this_00 = (RtWeakPtrBase *)Zombie::GetType(param_1);
  pRVar3 = (RtWeakPtrBase *)Zombie::GetType((Zombie *)this);
  cVar2 = Sexy::RtWeakPtrBase::operator==(this_00,pRVar3);
  if ((((cVar2 == '\0') &&
       (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)param_1,(RealObject *)this),
       cVar2 == '\0')) && (cVar2 = Zombie::IsControlled(param_1), cVar2 == '\0')) &&
     ((cVar2 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar2 == '\0' &&
      (cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar2 == '\0')))) {
    pZVar4 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1);
    bVar1 = pZVar4 == (ZombieZombossMech *)0x0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* ZombieEightiesGlitter::updateState_Idle() */

void __thiscall ZombieEightiesGlitter::updateState_Idle(ZombieEightiesGlitter *this)

{
  char cVar1;
  RtObject *this_00;
  Plant *this_01;
  
  if (this[0x805] == (ZombieEightiesGlitter)0x0) {
    this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
    if (this_00 == (RtObject *)0x0) {
      cVar1 = Zombie::HasCondition(this,0x55);
      if (cVar1 == '\0') {
        Zombie::setZombieState((Zombie *)this,1);
        return;
      }
    }
    else {
      this_01 = Sexy::RtObject::Cast<Plant>(this_00);
      if (((byte)this[0x804] <= (this_01 == (Plant *)0x0)) ||
         (cVar1 = Plant::IsInvincible(this_01,false), cVar1 == '\0')) {
        Zombie::setZombieState((Zombie *)this,1,0);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGlitter::createHitEffectAt(BoardEntity*) */

void __thiscall
ZombieEightiesGlitter::createHitEffectAt(ZombieEightiesGlitter *this,BoardEntity *param_1)

{
  int iVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  SexyVector3 *pSVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_18,"POPANIM_EFFECTS_ZOMBIE_80S_GLITTER_PLANT_HIT");
  GetPAMByName(asStack_18);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  iVar1 = (**(code **)(*(long *)param_1 + 200))(param_1);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,pSVar3,iVar1 + 1);
  Effect_PopAnim::SetCentered(this_00,true);
  std::string::string((string *)aRStack_10,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesGlitter::GetJamStyle() */

void ZombieEightiesGlitter::GetJamStyle(void)

{
  Zombie *in_x0;
  
  Zombie::GetProps<ZombieEightiesGlitterProps>(in_x0);
  FUN_05475d88();
  return;
}


/* ZombieEightiesGlitter::calcRainbowRect() */

void ZombieEightiesGlitter::calcRainbowRect(void)

{
  int iVar1;
  int iVar2;
  Zombie *in_x0;
  Insets *pIVar3;
  ZombieEightiesGlitterProps *pZVar4;
  CreatureConditionTracker *this;
  Insets *in_x8;
  float fVar5;
  
  pIVar3 = (Insets *)(**(code **)(*(long *)in_x0 + 0x178))();
  Sexy::Insets::Insets(in_x8,pIVar3);
  iVar1 = *(int *)(in_x8 + 8);
  *(int *)in_x8 = *(int *)in_x8 + iVar1;
  pZVar4 = Zombie::GetProps<ZombieEightiesGlitterProps>(in_x0);
  iVar2 = *(int *)(pZVar4 + 0x218);
  this = (CreatureConditionTracker *)Zombie::GetConditionTracker(in_x0);
  fVar5 = (float)CreatureConditionTracker::GetDrawScale(this);
  *(int *)(in_x8 + 8) = (int)(((float)*(int *)(in_x8 + 8) - (float)iVar1) + (float)iVar2 * fVar5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGlitter::makeZombiesInTrailInvincible() */

void __thiscall ZombieEightiesGlitter::makeZombiesInTrailInvincible(ZombieEightiesGlitter *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Zombie *extraout_x0;
  float fVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0x800) + 0.2 <= fVar4) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    fVar4 = *(float *)(this + 0x1c);
    FUN_047e880c(*(undefined4 *)(this + 0x18),fVar4,*(undefined4 *)(this + 0x20));
    uVar3 = BoardTransforms::BoardSpaceToGridY(fVar4);
    calcRainbowRect();
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,2,(__normal_iterator *)local_30,uVar3,uVar3);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)local_30), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      nop();
      cVar2 = shouldZombieBeInvincible(this,extraout_x0);
      if (cVar2 != '\0') {
        Zombie::ApplyCondition((Zombie *)0x3e75c28f,0,extraout_x0,0x2e,1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x800) = uVar3;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGlitter::skateOverThis(BoardEntity*) */

void __thiscall
ZombieEightiesGlitter::skateOverThis(ZombieEightiesGlitter *this,BoardEntity *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Zombie *this_00;
  SexyVector3 *this_01;
  ZombieGum *pZVar4;
  ZombieTosserSubSystem *pZVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar6;
  EntityConditionTracker<Zombie,ZombieConditions> *this_03;
  float *pfVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  float fVar11;
  DamageInfo *pDVar12;
  Point aPStack_c8 [8];
  float local_c0;
  undefined4 local_bc;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), !bVar2)) {
    pcVar9 = *(code **)(*(long *)param_1 + 0x120);
    Sexy::Point::Point(aPStack_c8,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_c0,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x0,local_c0,local_bc,(DamageInfo *)&local_68,0,this,aPStack_c8,0);
    (*pcVar9)(param_1,(DamageInfo *)&local_68);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    createHitEffectAt(this,param_1);
  }
  else {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_00);
    fVar11 = *(float *)(this_01 + 8);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    pZVar4 = Sexy::RtObject::Cast<ZombieGum>((RtObject *)param_1);
    if (pZVar4 == (ZombieGum *)0x0) {
      pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      local_64 = 0;
      iVar1 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
      uVar10 = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)&local_c0,(float)(iVar1 >> 2),0.0,0.0);
      local_68 = Sexy::SexyVector3::operator-(this_01,(SexyVector3 *)&local_c0);
      local_60 = uVar10;
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)(fVar11 + 75.0),0x3f400000,pZVar5,this_00,
                 (DamageInfo *)&local_68,aRStack_b0,1);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_b0);
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      fVar11 = *(float *)(lVar6 + 0x24);
      this_03 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                Zombie::GetConditionTracker((Zombie *)this);
      local_c0 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDPSModifier(this_03);
      local_c0 = local_c0 * fVar11;
      local_68 = 0;
      pfVar7 = eastl::max_alt<float>(&local_c0,(float *)&local_68);
                    /* WARNING: Load size is inaccurate */
      pDVar12._0_4_ = *(DamageInfo **)pfVar7;
      if (*(code **)(*(long *)this + 0x910) == Zombie::getEatingDamageType) {
        uVar8 = Zombie::getEatingDamageType();
      }
      else {
        uVar8 = (**(code **)(*(long *)this + 0x910))(this);
      }
      Sexy::Point::Point(aPStack_c8,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_c0,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar12._0_4_,local_c0,local_bc,(DamageInfo *)&local_68,uVar8,this,aPStack_c8,0);
      (**(code **)(*(long *)param_1 + 0x110))(param_1,(DamageInfo *)&local_68);
      createHitEffectAt(this,param_1);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
    else {
      (**(code **)(*(long *)this + 0x958))(this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGlitter::addRainbowEffect(std::string, std::string, bool, bool) */

void __thiscall
ZombieEightiesGlitter::addRainbowEffect
          (ZombieEightiesGlitter *this,undefined8 param_2,undefined8 param_3,char param_4,
          bool param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  AttachedEffect *pAVar5;
  int iVar6;
  string asStack_60 [8];
  Vec3 aVStack_58 [16];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_48);
  lVar1 = Zombie::GetAttachedEffect((Zombie *)this,asStack_48);
  std::string::~string(asStack_48);
  if (lVar1 == 0) {
    if (param_4 == '\0') {
      std::string::string(asStack_60,"POPANIM_EFFECTS_ZOMBIE_80S_GLITTER_EFFECT_BACK");
      nop();
      pcVar2 = (char *)FUN_0547429c(param_2);
      pcVar3 = (char *)FUN_0547429c(asStack_60);
      pcVar4 = (char *)FUN_0547429c(param_3);
      EATextSquish::Vec3::Vec3(aVStack_58,285.0,78.0,0.0);
      iVar6 = -0x9c4;
    }
    else {
      std::string::string(asStack_60,"POPANIM_EFFECTS_ZOMBIE_80S_GLITTER_EFFECT_FRONT");
      nop();
      pcVar2 = (char *)FUN_0547429c(param_2);
      pcVar3 = (char *)FUN_0547429c(asStack_60);
      pcVar4 = (char *)FUN_0547429c(param_3);
      EATextSquish::Vec3::Vec3(aVStack_58,285.0,78.0,0.0);
      iVar6 = -500;
    }
    pAVar5 = (AttachedEffect *)
             Zombie::AddAttachedEffect
                       ((Zombie *)this,pcVar2,pcVar3,pcVar4,(SexyVector3 *)aVStack_58,iVar6,param_5)
    ;
    AttachedEffect::AttachedEffect((AttachedEffect *)asStack_48,pAVar5);
    AttachedEffect::~AttachedEffect((AttachedEffect *)asStack_48);
    std::string::~string(asStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGlitter::startRainbowTrail() */

void __thiscall ZombieEightiesGlitter::startRainbowTrail(ZombieEightiesGlitter *this)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x806] == (ZombieEightiesGlitter)0x0) {
    this[0x806] = (ZombieEightiesGlitter)0x1;
    std::string::string(asStack_18,"rainbow_front_intro");
    std::string::string(asStack_10,"intro");
    addRainbowEffect(this,asStack_18,asStack_10,1,1);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"rainbow_back_intro");
    std::string::string(asStack_10,"intro");
    addRainbowEffect(this,asStack_18,asStack_10,0,1);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesGlitter::StartJamming() */

void __thiscall ZombieEightiesGlitter::StartJamming(ZombieEightiesGlitter *this)

{
  char cVar1;
  
  this[0x804] = (ZombieEightiesGlitter)0x1;
  cVar1 = shouldHaveRainbowTrail(this);
  if (cVar1 == '\0') {
    return;
  }
  startRainbowTrail(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGlitter::endRainbowTrail() */

void __thiscall ZombieEightiesGlitter::endRainbowTrail(ZombieEightiesGlitter *this)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x806] != (ZombieEightiesGlitter)0x0) {
    this[0x806] = (ZombieEightiesGlitter)0x0;
    Zombie::RemoveAttachedEffect((Zombie *)this,"rainbow_front_intro");
    Zombie::RemoveAttachedEffect((Zombie *)this,"rainbow_back_intro");
    Zombie::RemoveAttachedEffect((Zombie *)this,"rainbow_front");
    Zombie::RemoveAttachedEffect((Zombie *)this,"rainbow_back");
    std::string::string(asStack_18,"rainbow_front_outro");
    std::string::string(asStack_10,"outro");
    addRainbowEffect(this,asStack_18,asStack_10,1,1);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"rainbow_back_outro");
    std::string::string(asStack_10,"outro");
    addRainbowEffect(this,asStack_18,asStack_10,0,1);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesGlitter::setupRainbowEffects() */

void __thiscall ZombieEightiesGlitter::setupRainbowEffects(ZombieEightiesGlitter *this)

{
  char cVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = areRainbowIntroEffectsDone(this);
  if ((cVar1 != '\0') && (cVar1 = shouldHaveRainbowTrail(this), cVar1 != '\0')) {
    std::string::string(asStack_18,"rainbow_front");
    std::string::string(asStack_10,"animation");
    addRainbowEffect(this,asStack_18,asStack_10,1,0);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"rainbow_back");
    std::string::string(asStack_10,"animation");
    addRainbowEffect(this,asStack_18,asStack_10,0,0);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesGlitter::onExitState_RiseFromGround(ZombieState) */

void ZombieEightiesGlitter::onExitState_RiseFromGround(ZombieEightiesGlitter *param_1)

{
  char cVar1;
  
  Zombie::onExitState_RiseFromGround();
  cVar1 = shouldKillRainbowTrail(param_1);
  if (cVar1 != '\0') {
    return;
  }
  startRainbowTrail(param_1);
  return;
}


/* ZombieEightiesGlitter::onUpdate() */

void __thiscall ZombieEightiesGlitter::onUpdate(ZombieEightiesGlitter *this)

{
  char cVar1;
  
  Zombie::onUpdate((Zombie *)this);
  cVar1 = shouldHaveRainbowTrail(this);
  if (cVar1 != '\0') {
    makeZombiesInTrailInvincible(this);
    setupRainbowEffects(this);
    return;
  }
  cVar1 = shouldKillRainbowTrail(this);
  if (cVar1 == '\0') {
    return;
  }
  endRainbowTrail(this);
  return;
}


/* ZombieEightiesGlitter::updateState_Eat() */

void __thiscall ZombieEightiesGlitter::updateState_Eat(ZombieEightiesGlitter *this)

{
  char cVar1;
  RtObject *this_00;
  Plant *this_01;
  
  if (this[0x804] == (ZombieEightiesGlitter)0x0) {
    Zombie::updateState_Eat((Zombie *)this);
    return;
  }
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if (this_00 != (RtObject *)0x0) {
    this_01 = Sexy::RtObject::Cast<Plant>(this_00);
    if ((this_01 != (Plant *)0x0) && (cVar1 = Plant::IsInvincible(this_01,false), cVar1 != '\0')) {
      Zombie::setZombieState((Zombie *)this,0,0);
      return;
    }
    skateOverThis(this,(BoardEntity *)this_00);
    return;
  }
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1);
  return;
}


/* ZombieEightiesGlitter::onPlaceOnStreet() */

void __thiscall ZombieEightiesGlitter::onPlaceOnStreet(ZombieEightiesGlitter *this)

{
  Zombie::onPlaceOnStreet((Zombie *)this);
  this[0x805] = (ZombieEightiesGlitter)0x1;
  return;
}

