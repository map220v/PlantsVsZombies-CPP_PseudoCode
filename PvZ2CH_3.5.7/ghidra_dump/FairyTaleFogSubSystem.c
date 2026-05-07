// Class: FairyTaleFogSubSystem


/* FairyTaleFogSubSystem::onSetNextWaveVisible(bool) */

void FairyTaleFogSubSystem::onSetNextWaveVisible(bool param_1)

{
  FUN_04eca7b4((ulong)param_1 + 0xa4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogSubSystem::StaticClassInit() */

void FairyTaleFogSubSystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BuffedProjectileData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ece3d8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"FairyTaleFogSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04ece5d4,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FairyTaleFogSubSystem::StaticGetClass() */

long * FairyTaleFogSubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"FairyTaleFogSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FairyTaleFogSubSystem::GetClass() const */

long * FairyTaleFogSubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"FairyTaleFogSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FairyTaleFogSubSystem::canBeTargeted(Zombie*) */

undefined8 __thiscall
FairyTaleFogSubSystem::canBeTargeted(FairyTaleFogSubSystem *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')
       ) && (cVar1 = FUN_04ecbdec(*(undefined4 *)(param_1 + 0x28)), cVar1 == '\0')) &&
     ((cVar1 = RealObject::IsOnTeam(param_1,1), cVar1 == '\0' &&
      (cVar1 = FUN_04ecc140(*(undefined4 *)(param_1 + 0xcc)), cVar1 == '\0')))) {
    psVar3 = (string *)Zombie::GetTypeName(param_1);
    bVar2 = std::operator==(psVar3,"wave_airbubble");
    if ((!bVar2) && (cVar1 = Zombie::HasCondition(param_1,0x6d), cVar1 == '\0')) {
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogSubSystem::playWindEffect() */

void FairyTaleFogSubSystem::playWindEffect(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  Effect_PopAnim *this;
  ResourceInfo *pRVar4;
  Point aPStack_38 [4];
  undefined4 local_34;
  Point aPStack_30 [8];
  int local_28;
  int local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Point::Point(aPStack_38,iVar1,2);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Point::Point(aPStack_30,iVar1 * -5,iVar2 * -2);
  BoardTransforms::GridToBoardSpace(aPStack_38);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_28,(TPoint *)aPStack_30);
  uVar3 = Board::MakeRenderOrder(900000,local_34,0);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_HEIAN_WIND_LARGE");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_28,(float)local_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  std::string::string((string *)aRStack_18,"animation1");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  FUN_04eca774(this + 0x1c,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogSubSystem::IsFogDoneMoving() */

void __thiscall FairyTaleFogSubSystem::IsFogDoneMoving(FairyTaleFogSubSystem *this)

{
  vector<Sexy::RtWeakPtr<GridItemFairyTaleFog>,std::allocator<Sexy::RtWeakPtr<GridItemFairyTaleFog>>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar3;
  undefined1 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<GridItemFairyTaleFog>,std::allocator<Sexy::RtWeakPtr<GridItemFairyTaleFog>>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          vector<Sexy::RtWeakPtr<GridItemFairyTaleFog>,std::allocator<Sexy::RtWeakPtr<GridItemFairyTaleFog>>>
          ::empty(this_00);
  uVar4 = 0;
  if (cVar1 == '\0') {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar1 = FUN_04eca79c(*(undefined4 *)(lVar3 + 0x1ec));
      uVar4 = 0;
      if (cVar1 == '\0') goto LAB_04ece0b0;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    uVar4 = 1;
  }
LAB_04ece0b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* FairyTaleFogSubSystem::FairyTaleFogSubSystem() */

void __thiscall FairyTaleFogSubSystem::FairyTaleFogSubSystem(FairyTaleFogSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069f76a0;
  Sexy::Insets::Insets((Insets *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x70));
  this[0xa4] = (FairyTaleFogSubSystem)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetNextWaveVisible);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<FairyTaleFogSubSystem,void(FairyTaleFogSubSystem::*)(bool)>>
            ((MessageRouter *)puVar1,Message::SetNextWaveVisible,&local_40);
  return;
}


/* FairyTaleFogSubSystem::StaticNew() */

FairyTaleFogSubSystem * FairyTaleFogSubSystem::StaticNew(void)

{
  FairyTaleFogSubSystem *this;
  
  this = ::operator_new(0xa8);
  FairyTaleFogSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogSubSystem::TryFogDisappear() */

void __thiscall FairyTaleFogSubSystem::TryFogDisappear(FairyTaleFogSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  GridItemFairyTaleFog *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_02 = (GridItemFairyTaleFog *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    GridItemFairyTaleFog::DoDisappear(this_02);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::
  vector<Sexy::RtWeakPtr<GridItemFairyTaleFog>,std::allocator<Sexy::RtWeakPtr<GridItemFairyTaleFog>>>
  ::clear((vector<Sexy::RtWeakPtr<GridItemFairyTaleFog>,std::allocator<Sexy::RtWeakPtr<GridItemFairyTaleFog>>>
           *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogSubSystem::recoverZombies() */

void __thiscall FairyTaleFogSubSystem::recoverZombies(FairyTaleFogSubSystem *this)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtr *this_01;
  undefined8 uVar3;
  Zombie *pZVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)(this + 0x40)
  ;
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                    (this_00);
  if (cVar1 == '\0') {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar2) {
        uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        cVar1 = Zombie::HasCondition(uVar3,0x6d);
        if (cVar1 != '\0') {
          pZVar4 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          Zombie::EndCondition(pZVar4,0x6d);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogSubSystem::recoverProjectiles() */

void __thiscall FairyTaleFogSubSystem::recoverProjectiles(FairyTaleFogSubSystem *this)

{
  vector<BuffedProjectileData,std::allocator<BuffedProjectileData>> *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtr *this_01;
  Projectile *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<BuffedProjectileData,std::allocator<BuffedProjectileData>> *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<BuffedProjectileData,std::allocator<BuffedProjectileData>>::empty(this_00);
  if (cVar1 == '\0') {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar2) {
        this_02 = (Projectile *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01)
        ;
        Projectile::SetVelocityScale(this_02,(SexyVector3 *)(this_01 + 8));
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
    }
    std::vector<BuffedProjectileData,std::allocator<BuffedProjectileData>>::clear(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FairyTaleFogSubSystem::resetWinds() */

void __thiscall FairyTaleFogSubSystem::resetWinds(FairyTaleFogSubSystem *this)

{
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  std::vector<BuffedProjectileData,std::allocator<BuffedProjectileData>>::clear
            ((vector<BuffedProjectileData,std::allocator<BuffedProjectileData>> *)(this + 0x58));
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::clear((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
           *)(this + 0x70));
  return;
}


/* FairyTaleFogSubSystem::~FairyTaleFogSubSystem() */

void __thiscall FairyTaleFogSubSystem::~FairyTaleFogSubSystem(FairyTaleFogSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_069f76a0;
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x70));
  std::vector<BuffedProjectileData,std::allocator<BuffedProjectileData>>::~vector
            ((vector<BuffedProjectileData,std::allocator<BuffedProjectileData>> *)(this + 0x58));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  std::
  vector<Sexy::RtWeakPtr<GridItemFairyTaleFog>,std::allocator<Sexy::RtWeakPtr<GridItemFairyTaleFog>>>
  ::~vector((vector<Sexy::RtWeakPtr<GridItemFairyTaleFog>,std::allocator<Sexy::RtWeakPtr<GridItemFairyTaleFog>>>
             *)(this + 0x20));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* FairyTaleFogSubSystem::~FairyTaleFogSubSystem() */

void __thiscall FairyTaleFogSubSystem::~FairyTaleFogSubSystem(FairyTaleFogSubSystem *this)

{
  ~FairyTaleFogSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogSubSystem::canBuffProjectile(Projectile*) */

void __thiscall
FairyTaleFogSubSystem::canBuffProjectile(FairyTaleFogSubSystem *this,Projectile *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  ProjectilePropertySheet *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04eca77c(*(undefined4 *)(param_1 + 0x24));
  if (iVar2 == 1) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x58);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_28 = FUN_04ecec54(uVar3,uVar4,param_1);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
    if (!bVar1) {
      local_20 = (ProjectilePropertySheet *)Projectile::GetProps(param_1);
      local_18 = std::
                 set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                 ::find((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                         *)(this + 0x70),&local_20);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)(this + 0x70));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      goto LAB_04ecf410;
    }
  }
  bVar1 = false;
LAB_04ecf410:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogSubSystem::buildProjectileSet(std::vector<std::string, std::allocator<std::string > >
   const&) */

void __thiscall
FairyTaleFogSubSystem::buildProjectileSet(FairyTaleFogSubSystem *this,vector *param_1)

{
  bool bVar1;
  string *psVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  wstring awStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  ResourceInfo *local_20;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = FUN_04ecc7d0(*(undefined8 *)param_1);
  local_38 = FUN_04ecc820(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar2);
    Sexy::RtName::RtName(aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar3,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x70),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FairyTaleFogSubSystem::TryWindAppear(float, std::vector<std::string, std::allocator<std::string >
   > const&, float) */

void __thiscall
FairyTaleFogSubSystem::TryWindAppear
          (FairyTaleFogSubSystem *this,float param_1,vector *param_2,float param_3)

{
  float fVar1;
  
  resetWinds(this);
  buildProjectileSet(this,param_2);
  TryFogDisappear(this);
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0xa0) = param_3;
  *(float *)(this + 0x38) = fVar1 + param_1;
  playWindEffect();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogSubSystem::buffProjectiles() */

void __thiscall FairyTaleFogSubSystem::buffProjectiles(FairyTaleFogSubSystem *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  Projectile *this_00;
  int extraout_w1;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  Vec3 aVStack_40 [24];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x2b);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,(RtWeakPtrBase *)aVStack_40);
    Sexy::RtId::~RtId((RtId *)aVStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    nop();
    if ((this_00 != (Projectile *)0x0) && (cVar2 = canBuffProjectile(this,this_00), cVar2 != '\0'))
    {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
      uVar3 = Projectile::GetVelocityScale(this_00);
      BuffedProjectileData::BuffedProjectileData
                ((BuffedProjectileData *)aVStack_40,aRStack_48,uVar3);
      std::vector<BuffedProjectileData,std::allocator<BuffedProjectileData>>::push_back
                ((vector<BuffedProjectileData,std::allocator<BuffedProjectileData>> *)(this + 0x58),
                 (BuffedProjectileData *)aVStack_40);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aVStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      fVar4 = *(float *)(this + 0xa0);
      if (fVar4 == 0.0) {
        EATextSquish::Vec3::Vec3(aVStack_40,1.0,1.0,1.0);
      }
      else {
        EATextSquish::Vec3::Vec3(aVStack_40,fVar4,fVar4,fVar4);
      }
      Projectile::SetVelocityScale(this_00,(SexyVector3 *)aVStack_40);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogSubSystem::debuffZombies() */

void __thiscall FairyTaleFogSubSystem::debuffZombies(FairyTaleFogSubSystem *this)

{
  bool bVar1;
  char cVar2;
  Zombie *extraout_x0;
  undefined1 auVar3 [16];
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
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
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    cVar2 = canBeTargeted(this,extraout_x0);
    if (cVar2 != '\0') {
      auVar3 = PVZ_EOT();
      Zombie::ApplyCondition((Zombie *)auVar3,0,extraout_x0,0x6d,1);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0x40),(RtWeakPtr *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogSubSystem::Update() */

void __thiscall FairyTaleFogSubSystem::Update(FairyTaleFogSubSystem *this)

{
  char cVar1;
  long lVar2;
  RtObject *this_00;
  NextWaveButton *this_01;
  float fVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x38) < fVar3) {
    recoverZombies(this);
    recoverProjectiles(this);
    cVar1 = IsFogDoneMoving(this);
  }
  else {
    debuffZombies(this);
    buffProjectiles(this);
    cVar1 = IsFogDoneMoving(this);
  }
  if (cVar1 != '\0') {
    std::string::string(asStack_18,"UINextWaveButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
    if (lVar2 == 0) {
      std::string::~string(asStack_18);
      nop();
    }
    else {
      std::string::string(asStack_10,"UINextWaveButton");
      this_00 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_10);
      this_01 = Sexy::RtObject::Cast<NextWaveButton>(this_00);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (this_01 != (NextWaveButton *)0x0) {
        cVar1 = (**(code **)(*(long *)this_01 + 0xc0))(this_01);
        if (cVar1 == '\0') {
          FUN_04eca7c8(this_01 + 0x189,1);
        }
        cVar1 = UIWidget::IsVisible((UIWidget *)this_01);
        if ((cVar1 == '\0') && (this[0xa4] != (FairyTaleFogSubSystem)0x0)) {
          UIWidget::SetVisible((UIWidget *)this_01,true);
          this[0xa4] = (FairyTaleFogSubSystem)0x0;
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogSubSystem::TryFogAppear(std::string const&, Sexy::TRect<int> const&, int, float) */

void __thiscall
FairyTaleFogSubSystem::TryFogAppear
          (FairyTaleFogSubSystem *this,string *param_1,TRect *param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  RtObject *this_00;
  GridItemFairyTaleFog *this_01;
  int iVar6;
  int iVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  FogMovingData aFStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar4 = std::
          vector<Sexy::RtWeakPtr<GridItemFairyTaleFog>,std::allocator<Sexy::RtWeakPtr<GridItemFairyTaleFog>>>
          ::empty((vector<Sexy::RtWeakPtr<GridItemFairyTaleFog>,std::allocator<Sexy::RtWeakPtr<GridItemFairyTaleFog>>>
                   *)(this + 0x20));
  if (cVar4 != '\0') {
    uVar5 = *(undefined8 *)param_2;
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 8);
    iVar7 = param_3 + (int)uVar5;
    *(undefined8 *)(this + 0x10) = uVar5;
    iVar2 = *(int *)(this + 0x14);
    iVar1 = iVar7 + *(int *)(this + 0x18);
    iVar3 = *(int *)(this + 0x1c);
    if (iVar7 < iVar1) {
      do {
        iVar6 = iVar2;
        if (iVar2 < iVar2 + iVar3) {
          do {
            this_00 = (RtObject *)
                      Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),param_1,iVar7,iVar6,1);
            this_01 = Sexy::RtObject::Cast<GridItemFairyTaleFog>(this_00);
            if (this_01 != (GridItemFairyTaleFog *)0x0) {
              FogMovingData::FogMovingData(aFStack_18,param_3,param_4,iVar7 - param_3,iVar6);
              FUN_04eca7a8(this_01 + 0x1f0,aFStack_18);
              GridItemFairyTaleFog::DoAppear(this_01);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aFStack_18,(RtWeakPtrBase *)aRStack_20);
              std::
              vector<Sexy::RtWeakPtr<GridItemFairyTaleFog>,std::allocator<Sexy::RtWeakPtr<GridItemFairyTaleFog>>>
              ::push_back((vector<Sexy::RtWeakPtr<GridItemFairyTaleFog>,std::allocator<Sexy::RtWeakPtr<GridItemFairyTaleFog>>>
                           *)(this + 0x20),(RtWeakPtr *)aFStack_18);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_18);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 != iVar2 + iVar3);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

