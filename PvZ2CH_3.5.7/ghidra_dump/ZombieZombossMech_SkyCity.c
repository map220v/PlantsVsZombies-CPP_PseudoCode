// Class: ZombieZombossMech_SkyCity


/* ZombieZombossMech_SkyCity::~ZombieZombossMech_SkyCity() */

void __thiscall
ZombieZombossMech_SkyCity::~ZombieZombossMech_SkyCity(ZombieZombossMech_SkyCity *this)

{
  *(undefined ***)this = &PTR_GetClass_068c3890;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_SkyCity_068c4468;
  LawnApp::KillSkycityBossWarnig(gLawnApp);
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_SkyCity::~ZombieZombossMech_SkyCity() */

void __thiscall
ZombieZombossMech_SkyCity::~ZombieZombossMech_SkyCity(ZombieZombossMech_SkyCity *this)

{
  ~ZombieZombossMech_SkyCity(this + -0x10);
  return;
}


/* ZombieZombossMech_SkyCity::~ZombieZombossMech_SkyCity() */

void __thiscall
ZombieZombossMech_SkyCity::~ZombieZombossMech_SkyCity(ZombieZombossMech_SkyCity *this)

{
  ~ZombieZombossMech_SkyCity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_SkyCity::~ZombieZombossMech_SkyCity() */

void __thiscall
ZombieZombossMech_SkyCity::~ZombieZombossMech_SkyCity(ZombieZombossMech_SkyCity *this)

{
  ~ZombieZombossMech_SkyCity(this + -0x10);
  return;
}


/* ZombieZombossMech_SkyCity::ZombieZombossMech_SkyCity() */

void __thiscall
ZombieZombossMech_SkyCity::ZombieZombossMech_SkyCity(ZombieZombossMech_SkyCity *this)

{
  undefined4 uVar1;
  
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  this[0x970] = (ZombieZombossMech_SkyCity)0x0;
  this[0x964] = (ZombieZombossMech_SkyCity)0x0;
  *(undefined ***)this = &PTR_GetClass_068c3890;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_SkyCity_068c4468;
  *(undefined4 *)(this + 0x960) = 0;
  *(undefined4 *)(this + 0x96c) = 0;
  *(undefined4 *)(this + 0x974) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x968) = uVar1;
  return;
}


/* ZombieZombossMech_SkyCity::StaticNew() */

ZombieZombossMech_SkyCity * ZombieZombossMech_SkyCity::StaticNew(void)

{
  ZombieZombossMech_SkyCity *this;
  
  this = ::operator_new(0x978);
  ZombieZombossMech_SkyCity(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_SkyCity::CalcBellyFootprint() const */

void __thiscall ZombieZombossMech_SkyCity::CalcBellyFootprint(ZombieZombossMech_SkyCity *this)

{
  long lVar1;
  Insets *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(in_x8,local_10 + -1,local_c + -1,1,3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_SkyCity::GetNearByTargets(BoardEntityTypeFlag, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
ZombieZombossMech_SkyCity::GetNearByTargets
          (undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets((Insets *)&local_28);
  Sexy::Insets::Insets((Insets *)&local_18,local_30 + -1,local_2c,2,1);
  local_28 = local_18;
  uStack_20 = uStack_10;
  EntityFinder::GetEntitiesInGridSquares(param_3,param_2,(Insets *)&local_28);
  lVar1 = FUN_04726018(*param_3,param_3[1]);
  uVar2 = 0;
  if (lVar1 == 0) {
    Sexy::Insets::Insets((Insets *)&local_18,local_30 + -1,local_2c + -1,2,1);
    local_28 = local_18;
    uStack_20 = uStack_10;
    EntityFinder::GetEntitiesInGridSquares(param_3,param_2,(Insets *)&local_28);
    lVar1 = FUN_04726018(*param_3,param_3[1]);
    uVar2 = 1;
    if (lVar1 == 0) {
      Sexy::Insets::Insets((Insets *)&local_18,local_30 + -1,local_2c + 1,2,1);
      local_28 = local_18;
      uStack_20 = uStack_10;
      EntityFinder::GetEntitiesInGridSquares(param_3,param_2,(Insets *)&local_28);
      lVar1 = FUN_04726018(*param_3,param_3[1]);
      uVar2 = 2;
      if (lVar1 == 0) {
        uVar2 = 0xffffffff;
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_SkyCity::createLaserCannonEffect() */

void __thiscall ZombieZombossMech_SkyCity::createLaserCannonEffect(ZombieZombossMech_SkyCity *this)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  EATextSquish::Vec3::Vec3(aVStack_18,(float)(iVar1 * -7),(float)(iVar2 * -2),0.0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_ZOMBOSS_SKYCITY_LASER_LINE");
  GetPAMByName(asStack_28);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  nop();
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this_00,(RealObject *)this,(SexyVector3 *)aVStack_18,1);
  std::string::string((string *)aRStack_20,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_SkyCity::takeLineShoot() */

void __thiscall ZombieZombossMech_SkyCity::takeLineShoot(ZombieZombossMech_SkyCity *this)

{
  float *pfVar1;
  undefined8 uVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  float local_20;
  float local_1c;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"ZombossSkyCityLineShootDefault");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName((RtName *)&local_18,(wstring *)&local_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar2,0xc,(RtName *)&local_18);
  Sexy::RtName::~RtName((RtName *)&local_18);
  FUN_05476c50((FastCurve *)&local_20);
  std::string::~string(asStack_28);
  nop();
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Board::AddProjectile
                         ((Board *)(fVar4 + 35.0),fVar5,0x42000000,uVar2,(RtName *)&local_18,this,0)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  RealObject::JoinTeam((RealObject *)this_00,2);
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = *puVar3;
  local_10 = *(float *)(puVar3 + 1);
  fVar4 = sinf((float)*(int *)(this + 0x960) * 10.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,0.0,fVar4 * 5.0);
  local_10 = local_10 - fVar4 * 10.0;
  local_18 = CONCAT44(local_1c + local_18._4_4_,local_20 + (float)local_18);
  (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtName *)&local_18);
  *(int *)(this + 0x960) = *(int *)(this + 0x960) + 1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_SkyCity::takeSandStorm() */

void __thiscall ZombieZombossMech_SkyCity::takeSandStorm(ZombieZombossMech_SkyCity *this)

{
  int iVar1;
  float *pfVar2;
  undefined8 uVar3;
  RealObject *pRVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar6 = *pfVar2;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar5 = pfVar2[1];
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"ZombossSkyCityStormDefault");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar3,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
  pRVar4 = (RealObject *)
           Board::AddProjectile((Board *)((float)iVar1 + fVar6),fVar5,0,uVar3,aRStack_18,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  RealObject::JoinTeam(pRVar4,2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_SkyCity::FindRushDownTargets(BoardEntityTypeFlag, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) const */

void __thiscall
ZombieZombossMech_SkyCity::FindRushDownTargets
          (ZombieZombossMech_SkyCity *this,undefined4 param_2,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  int aiStack_24 [3];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CalcBellyFootprint(this);
  local_30 = (ZombieZombossMech_SkyCity *)((ulong)local_30._4_4_ << 0x20);
  piVar2 = eastl::max_alt<int>((int *)&local_30,aiStack_24);
  Sexy::Insets::Insets(aIStack_18,0,*piVar2,1,2);
  EntityFinder::GetEntitiesInGridSquares(param_3,param_2,aIStack_18);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_3);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_3);
  local_30 = this;
  local_38 = std::
             find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,ZombieZombossMech_SkyCity_const*>
                       (uVar3,uVar4,(__normal_iterator *)&local_30);
  local_30 = (ZombieZombossMech_SkyCity *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_3);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_38);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_30,(__normal_iterator *)&local_38);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_3,local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_SkyCity::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieZombossMech_SkyCity::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  Plant *this;
  long *plVar6;
  ZombieZombossMechSkyCityProps *pZVar7;
  AircraftSubSystem *pAVar8;
  SexyVector3 *pSVar9;
  int iVar10;
  float fVar11;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"intro_roar");
  if (bVar1) {
    iVar4 = 6;
    iVar10 = 3;
    fVar11 = 0.5;
  }
  else {
    bVar1 = std::operator==(param_4,"intro_flyover");
    if (bVar1) {
      iVar4 = 10;
      iVar10 = -5;
      fVar11 = 2.0;
    }
    else {
      bVar1 = std::operator==(param_4,"hit_ground");
      if (!bVar1) {
        bVar1 = std::operator==(param_4,"rush_down_attack");
        if (bVar1) {
          Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),5,-5,0.2);
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
          FindRushDownTargets((ZombieZombossMech_SkyCity *)param_1,1,avStack_20);
          local_30 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_20);
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
          if (bVar1) {
            do {
              puVar5 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
              plVar6 = (long *)0x0;
              if ((RtObject *)*puVar5 == (RtObject *)0x0) {
LAB_0472eb94:
                (**(code **)(*plVar6 + 0x48))();
              }
              else {
                this = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
                if ((this == (Plant *)0x0) ||
                   (cVar2 = Plant::IsIgnoreControlAndDmg(this), cVar2 == '\0')) {
                  plVar6 = (long *)*puVar5;
                  goto LAB_0472eb94;
                }
              }
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
              bVar1 = __gnu_cxx::operator!=
                                ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
            } while (bVar1);
          }
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
        }
        else {
          bVar3 = std::operator==(param_4,"aircraft_attack");
          if (bVar3) {
            pZVar7 = Zombie::GetProps<ZombieZombossMechSkyCityProps>((Zombie *)param_1);
            iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
            if (iVar4 == 1) {
              *(int *)(param_1 + 0x974) = *(int *)(param_1 + 0x974) + 1;
              pAVar8 = Board::GetGameSubSystem<AircraftSubSystem>(*(Board **)(gLawnApp + 0x9f0));
              pSVar9 = (SexyVector3 *)
                       std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)param_1);
              AircraftSubSystem::LaunchAircraft
                        (pAVar8,pSVar9,*(int *)(param_1 + 0x974),0,2,*(float *)(pZVar7 + 0x2a0),
                         *(float *)(pZVar7 + 0x2a8),*(float *)(pZVar7 + 0x2a4));
            }
            else {
              iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
              *(int *)(param_1 + 0x974) = *(int *)(param_1 + 0x974) + 1;
              if (iVar4 == 3) {
                pAVar8 = Board::GetGameSubSystem<AircraftSubSystem>(*(Board **)(gLawnApp + 0x9f0));
                pSVar9 = (SexyVector3 *)
                         std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)param_1);
                AircraftSubSystem::LaunchAircraft
                          (pAVar8,pSVar9,*(int *)(param_1 + 0x974),2,4,*(float *)(pZVar7 + 0x2a0),
                           *(float *)(pZVar7 + 0x2a8),*(float *)(pZVar7 + 0x2a4));
              }
              else {
                pAVar8 = Board::GetGameSubSystem<AircraftSubSystem>(*(Board **)(gLawnApp + 0x9f0));
                pSVar9 = (SexyVector3 *)
                         std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)param_1);
                AircraftSubSystem::LaunchAircraft
                          (pAVar8,pSVar9,*(int *)(param_1 + 0x974),(uint)bVar1,4,
                           *(float *)(pZVar7 + 0x2a0),*(float *)(pZVar7 + 0x2a8),
                           *(float *)(pZVar7 + 0x2a4));
              }
            }
          }
          else {
            bVar1 = std::operator==(param_4,"sandstorm_attack");
            if (bVar1) {
              takeSandStorm((ZombieZombossMech_SkyCity *)param_1);
            }
          }
        }
        goto LAB_0472ebe8;
      }
      iVar4 = 5;
      iVar10 = -5;
      fVar11 = 0.2;
    }
  }
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),iVar4,iVar10,fVar11);
LAB_0472ebe8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_SkyCity::FindNearByTargets(BoardEntityTypeFlag, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) const */

void __thiscall
ZombieZombossMech_SkyCity::FindNearByTargets
          (ZombieZombossMech_SkyCity *this,undefined4 param_2,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_30;
  int local_2c;
  undefined8 local_28;
  ZombieZombossMech_SkyCity *local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(aIStack_18,local_30 + -1,local_2c + -1,2,3);
  EntityFinder::GetEntitiesInGridSquares(param_3,param_2,aIStack_18);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_3);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_3);
  local_20 = this;
  local_28 = std::
             find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,ZombieZombossMech_SkyCity_const*>
                       (uVar2,uVar3,(__normal_iterator *)&local_20);
  local_20 = (ZombieZombossMech_SkyCity *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_3);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_28);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_20,(__normal_iterator *)&local_28);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_3,local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_SkyCity::takeThunder() */

void __thiscall ZombieZombossMech_SkyCity::takeThunder(ZombieZombossMech_SkyCity *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  Plant *this_00;
  ulong uVar6;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar7;
  ThunderSubSystem *pTVar8;
  float fVar9;
  undefined8 local_68;
  undefined8 local_60;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar9 = (float)PVZ_T();
  *(float *)(this + 0x968) = fVar9 + 6.0;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_48,0,0,iVar3,iVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntitiesInGridSquares(avStack_38,1,aIStack_48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
    if ((this_00 != (Plant *)0x0) && (cVar1 = Plant::CanBeRangeTargeted(this_00), cVar1 != '\0')) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_58);
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)&local_20,
                 (RtWeakPtr *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  }
  uVar6 = FUN_04725fc4(local_20,local_18);
  if (uVar6 != 0) {
    iVar3 = (**(code **)(*(long *)this + 0x300))(this,uVar6 & 0xffffffff);
    this_01 = (RtWeakPtr *)FUN_04726028(local_20,(long)iVar3);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    iVar3 = *(int *)(this + 0x96c);
    if ((pRVar7 == (ResourceInfo *)0x0) || (2 < iVar3)) goto LAB_0472f3ec;
    iVar3 = (**(code **)(*(long *)this + 0x300))(this,1);
    if (iVar3 == 0) {
      pTVar8 = Board::GetGameSubSystem<ThunderSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      ThunderSubSystem::AddPlantToThunder((ThunderSubSystem *)0x0,pTVar8,pRVar7,0);
      iVar3 = *(int *)(this + 0x96c);
      goto LAB_0472f3ec;
    }
    pTVar8 = Board::GetGameSubSystem<ThunderSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ThunderSubSystem::AddPlantToThunder((ThunderSubSystem *)0x0,pTVar8,pRVar7,1);
  }
  iVar3 = *(int *)(this + 0x96c);
LAB_0472f3ec:
  *(int *)(this + 0x96c) = iVar3 + 1;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_SkyCity::thunderStart() */

void __thiscall ZombieZombossMech_SkyCity::thunderStart(ZombieZombossMech_SkyCity *this)

{
  ZombieZombossMechSkyCityProps *pZVar1;
  char *pcVar2;
  
  pZVar1 = Zombie::GetProps<ZombieZombossMechSkyCityProps>((Zombie *)this);
  if (pZVar1[0x2ac] == (ZombieZombossMechSkyCityProps)0x0) {
    return;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  *(undefined4 *)(this + 0x96c) = 0;
  this[0x970] = (ZombieZombossMech_SkyCity)0x1;
  takeThunder(this);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_Zomb_SkyCity_Zomboss_Attack_Roar");
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0472fa9c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieZombossMech_SkyCity::Retreat(ZombieState) */

void __thiscall ZombieZombossMech_SkyCity::Retreat(ZombieZombossMech_SkyCity *this,int param_2)

{
  ZombieWithActions *pZVar1;
  ZombossSkyCityWalkActionHandler *pZVar2;
  Point local_18 [8];
  RtWeakPtr<Sexy::SoundResource> local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = (ZombieWithActions *)ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_10,(RtWeakPtrBase *)(pZVar1 + 0x20));
  pZVar2 = ZombieWithActions::QueueAction<ZombossSkyCityWalkActionHandler>(pZVar1,local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  Sexy::Point::Point(local_18);
  if (param_2 == 0x27) {
    FUN_0472bd8c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    ZombossBattleModule::GetDeathLocation();
  }
  else {
    ZombieZombossMech::PickRetreatTarget((ZombieZombossMech *)this,local_18);
  }
  ZombossWalkActionHandler::SetWalkTarget((ZombossWalkActionHandler *)pZVar2,local_18,0);
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,param_2);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_SkyCity::StaticClassInit() */

void ZombieZombossMech_SkyCity::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieZombossMech_SkyCity");
      (*pcVar4)(plVar1,asStack_150,FUN_047306d0,0x978,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossMech_SkyCity,void(ZombieZombossMech_SkyCity::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb8);
  Sexy::Delegate0::Delegate0<ZombieZombossMech_SkyCity,void(ZombieZombossMech_SkyCity::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbc0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossMech_SkyCity,void(ZombieZombossMech_SkyCity::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossSkyCityMagnetStun");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x29,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04730474(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossMech_SkyCity::StaticGetClass() */

long * ZombieZombossMech_SkyCity::StaticGetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_SkyCity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_SkyCity::GetClass() const */

long * ZombieZombossMech_SkyCity::GetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_SkyCity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_SkyCity::onUpdate() */

void __thiscall ZombieZombossMech_SkyCity::onUpdate(ZombieZombossMech_SkyCity *this)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  ZombieZombossMech::onUpdate((ZombieZombossMech *)this);
  if ((this[0x970] != (ZombieZombossMech_SkyCity)0x0) &&
     (fVar3 = *(float *)(this + 0x968), fVar1 = (float)PVZ_T(), fVar3 <= fVar1)) {
    if (*(int *)(this + 0x96c) < 3) {
      takeThunder(this);
      return;
    }
    uVar2 = PVZ_EOT();
    this[0x970] = (ZombieZombossMech_SkyCity)0x0;
    *(undefined4 *)(this + 0x968) = uVar2;
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* ZombieZombossMech_SkyCity::onStartedNewStage(int) */

void __thiscall
ZombieZombossMech_SkyCity::onStartedNewStage(ZombieZombossMech_SkyCity *this,int param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  ZombieZombossMech::onStartedNewStage((ZombieZombossMech *)this,param_1);
  if (param_1 != 2) {
    return;
  }
  this[0x964] = (ZombieZombossMech_SkyCity)0x1;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  pZVar1[0x240] = (ZombieHydraHeadAnimRig)0x1;
  return;
}

