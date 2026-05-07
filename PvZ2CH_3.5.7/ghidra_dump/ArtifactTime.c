// Class: ArtifactTime


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTime::StaticClassInit() */

void ArtifactTime::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactTime");
    (*pcVar2)(plVar1,asStack_10,FUN_037605a0,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactTime::StaticGetClass() */

long * ArtifactTime::StaticGetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactTime",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactTime::GetClass() const */

long * ArtifactTime::GetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactTime",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTime::getWarpingEffectNameFor(Sexy::RtWeakPtr<Zombie>) */

void ArtifactTime::getWarpingEffectNameFor
               (string *param_1,undefined8 param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  long lVar1;
  bool bVar2;
  RtObject *this;
  
  lVar1 = ___stack_chk_guard;
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>(this);
  if (bVar2) {
    std::string::string(param_1,"POPANIM_EFFECTS_THYMEWARP_GARGANTUAR_WARP");
    nop();
  }
  else {
    std::string::string(param_1,"POPANIM_EFFECTS_THYMEWARP_ZOMBIE_WARP");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* ArtifactTime::GetExtraReducedCooldown(std::string const&) */

float ArtifactTime::GetExtraReducedCooldown(string *param_1)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  float fVar3;
  
  cVar1 = Artifact::IsFieldActivated((Artifact *)param_1,1);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar3 = fVar3 * 0.01;
  }
  return fVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTime::CreateSpecialEffect(int) */

void __thiscall ArtifactTime::CreateSpecialEffect(ArtifactTime *this,int param_1)

{
  long extraout_x0;
  long extraout_x0_00;
  Board *pBVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"artifact_timestop");
    Board::AddGridItem(pBVar1,asStack_10,6,2,1);
    nop();
    std::string::~string(asStack_10);
    nop();
    if (extraout_x0 != 0) {
      FUN_03723c3c(*(undefined4 *)(this + 0x60),extraout_x0 + 0x1ac);
    }
  }
  else if (param_1 == 1) {
    pBVar1 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"artifact_timespeedup");
    Board::AddGridItem(pBVar1,asStack_10,1,2,1);
    nop();
    std::string::~string(asStack_10);
    nop();
    if (extraout_x0_00 != 0) {
      EntityComponent_GroundEffect::GetEffect();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      fVar2 = *(float *)(this + 100);
      FUN_03723c3c(*(undefined4 *)(this + 0x60),extraout_x0_00 + 0x1ac);
      FUN_03723c44(fVar2 * 0.01 + 1.0,extraout_x0_00 + 0x218);
      FUN_03723c4c(fVar2 * 0.01,extraout_x0_00 + 0x21c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTime::createWarpingEffectAt(Sexy::RtWeakPtr<Zombie>, std::string) */

void __thiscall
ArtifactTime::createWarpingEffectAt
          (ArtifactTime *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined8 param_3)

{
  int iVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)param_2);
  getWarpingEffectNameFor(asStack_20,this,aRStack_28);
  GetPAMByName(asStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var3);
  fVar7 = *pfVar4;
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  lVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var3);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar7,*(float *)(lVar5 + 4) - 40.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar1 = (**(code **)(*plVar6 + 200))();
  FUN_03723aa0(this_00 + 0x1c,iVar1 + -1);
  Effect_PopAnim::SetCentered(this_00,true);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_3,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTime::createWarpingInEffectAt(Sexy::RtWeakPtr<Zombie>) */

void __thiscall ArtifactTime::createWarpingInEffectAt(ArtifactTime *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
  std::string::string(asStack_10,"warp_in");
  createWarpingEffectAt(this,aRStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactTime::shouldDoStuffTo(Sexy::RtWeakPtr<Zombie>) */

byte __thiscall
ArtifactTime::shouldDoStuffTo(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  Zombie *pZVar5;
  undefined8 uVar6;
  RtObject *pRVar7;
  ZombieZombossMech *pZVar8;
  long *plVar9;
  ZombieEndlessWealth *pZVar10;
  string *psVar11;
  
  pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  uVar6 = operator|(1,8);
  uVar4 = operator|(uVar6,4);
  cVar1 = Zombie::MatchesAny(pZVar5,uVar4);
  if (cVar1 == '\0') {
    uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar6,0x3f);
    if (cVar1 == '\0') {
      uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = Zombie::HasCondition(uVar6,0x11);
      if (cVar1 == '\0') {
        pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        pZVar8 = Sexy::RtObject::Cast<ZombieZombossMech>(pRVar7);
        if (pZVar8 == (ZombieZombossMech *)0x0) {
          plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = (**(code **)(*plVar9 + 0x4d8))();
          if (cVar1 == '\0') {
            plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            cVar1 = (**(code **)(*plVar9 + 0x508))();
            if (cVar1 == '\0') {
              pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              cVar1 = Zombie::HasFogImmune(pZVar5);
              if (cVar1 == '\0') {
                pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                cVar1 = Zombie::IsBerserk(pZVar5);
                if (cVar1 == '\0') {
                  pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  pZVar10 = Sexy::RtObject::Cast<ZombieEndlessWealth>(pRVar7);
                  if (pZVar10 == (ZombieEndlessWealth *)0x0) {
                    pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    psVar11 = (string *)Zombie::GetTypeName(pZVar5);
                    bVar2 = std::operator!=(psVar11,"wave_airbubble");
                    if (bVar2) {
                      pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                      psVar11 = (string *)Zombie::GetTypeName(pZVar5);
                      bVar2 = std::operator!=(psVar11,"renai_toxicwater");
                      if (bVar2) {
                        uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                        bVar3 = RealObject::IsOnTeam(uVar6,1);
                        return bVar3 ^ 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


/* ArtifactTime::ArtifactTime() */

void __thiscall ArtifactTime::ArtifactTime(ArtifactTime *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_0668f090;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* ArtifactTime::StaticNew() */

ArtifactTime * ArtifactTime::StaticNew(void)

{
  ArtifactTime *this;
  
  this = ::operator_new(0x68);
  ArtifactTime(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTime::DoSpecial1() */

void __thiscall ArtifactTime::DoSpecial1(ArtifactTime *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  Zombie *this_00;
  ZombieZombossMech *pZVar5;
  string *psVar6;
  undefined8 local_58;
  undefined8 local_50;
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_48,6,0,3,5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntitiesInGridSquares(avStack_38,1,aIStack_48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_48);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if ((pPVar4 != (Plant *)0x0) && (cVar2 = Plant::HasCondition(pPVar4,0xf), cVar2 == '\0')) {
      Plant::ApplyCondition(*(undefined4 *)(this + 0x60),0,pPVar4,0xf);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (!bVar1) break;
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    if (((((this_00 != (Zombie *)0x0) && (cVar2 = Zombie::HasCondition(this_00,0x18), cVar2 == '\0')
          ) && (cVar2 = Zombie::IsBoss(this_00), cVar2 == '\0')) &&
        ((pZVar5 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)this_00),
         pZVar5 == (ZombieZombossMech *)0x0 &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')))) &&
       (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')) {
      psVar6 = (string *)Zombie::GetTypeName(this_00);
      bVar1 = std::operator!=(psVar6,"wave_airbubble");
      if ((bVar1) && (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0')) {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x60),0,this_00,0x18,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  CreateSpecialEffect(this,0);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTime::DoSpecial2() */

void __thiscall ArtifactTime::DoSpecial2(ArtifactTime *this)

{
  bool bVar1;
  undefined8 *puVar2;
  Plant *this_00;
  float fVar3;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_30,0,0,3,5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,1,aIStack_30);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  fVar3 = *(float *)(this + 100);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar2);
    if (this_00 != (Plant *)0x0) {
      Plant::ChangeSpeedModifier(this_00,fVar3 * 0.01 + 1.0,*(float *)(this + 0x60));
      Plant::SetFastCoolDownRatio(this_00,fVar3 * 0.01);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  CreateSpecialEffect(this,1);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactTime::~ArtifactTime() */

void __thiscall ArtifactTime::~ArtifactTime(ArtifactTime *this)

{
  *(undefined ***)this = &PTR_GetClass_0668f090;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactTime::~ArtifactTime() */

void __thiscall ArtifactTime::~ArtifactTime(ArtifactTime *this)

{
  ~ArtifactTime(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTime::reapearZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
ArtifactTime::reapearZombie(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  Zombie *pZVar2;
  long extraout_x0;
  long *plVar3;
  long lVar4;
  string *psVar5;
  RtObject *this;
  ZombieFutureProtector *this_00;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresAllDamage(pZVar2,false);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)aRStack_20,
             (vector *)(extraout_x0 + 0x158));
  Zombie::EndConditions(pZVar2,aRStack_20);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)aRStack_20);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar3 + 0x80))(plVar3,0);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  fVar6 = (float)FUN_03723b94(*(undefined4 *)(lVar4 + 0x284));
  Zombie::SetHitpoints(pZVar2,fVar6);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  psVar5 = (string *)Zombie::GetTypeName(pZVar2);
  bVar1 = std::operator==(psVar5,"future_protector");
  if (bVar1) {
    this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    this_00 = Sexy::RtObject::Cast<ZombieFutureProtector>(this);
    ZombieFutureProtector::deactivateShield(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTime::warpZombieIn(Sexy::RtWeakPtr<Zombie>) */

void __thiscall ArtifactTime::warpZombieIn(ArtifactTime *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  Zombie *pZVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    reapearZombie(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    PlantThymeWarp::placeZombieInNewPosition((PlantThymeWarp *)this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::StartWarpIn(pZVar2,*(float *)(this + 0x58));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    createWarpingInEffectAt(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetIsControlled(pZVar2,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTime::WarpZombiesIn() */

void __thiscall ArtifactTime::WarpZombiesIn(ArtifactTime *this)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_00;
  char cVar1;
  bool bVar2;
  long extraout_x0;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(this + 0x40)
  ;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  while( true ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_28);
    if (!bVar2) break;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    if (extraout_x0 != 0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
      cVar1 = shouldDoStuffTo(this,(RtWeakPtr<Sexy::SoundResource> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      if (cVar1 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  (this_00,(RtWeakPtr *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_40);
    warpZombieIn(this,(RtWeakPtr<Sexy::SoundResource> *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactTime::DoTrigger() */

void __thiscall ArtifactTime::DoTrigger(ArtifactTime *this)

{
  char cVar1;
  
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  WarpZombiesIn(this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 != '\0') {
    DoSpecial1(this);
  }
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  if (cVar1 == '\0') {
    return;
  }
  DoSpecial2(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTime::Activate() */

void __thiscall ArtifactTime::Activate(ArtifactTime *this)

{
  char cVar1;
  long extraout_x0;
  ArtifactMgr *pAVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(extraout_x0 + 0x150);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar3 = fVar3 * 0.01;
  }
  *(float *)(this + 0x5c) = fVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x60) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  *(float *)(this + 0x60) = *(float *)(this + 0x60) + fVar3 * fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar5 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar5 = ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
  }
  *(undefined4 *)(this + 100) = uVar5;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

