// Class: RiftThemeBlizzard


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBlizzard::StaticClassInit() */

void RiftThemeBlizzard::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeBlizzard");
    (*pcVar2)(plVar1,asStack_10,FUN_036fc660,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBlizzard::StaticGetClass() */

long * RiftThemeBlizzard::StaticGetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeBlizzard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBlizzard::GetClass() const */

long * RiftThemeBlizzard::GetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeBlizzard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeBlizzard::~RiftThemeBlizzard() */

void __thiscall RiftThemeBlizzard::~RiftThemeBlizzard(RiftThemeBlizzard *this)

{
  *(undefined ***)this = &PTR_GetClass_06687a10;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeBlizzard::~RiftThemeBlizzard() */

void __thiscall RiftThemeBlizzard::~RiftThemeBlizzard(RiftThemeBlizzard *this)

{
  ~RiftThemeBlizzard(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeBlizzard::RiftThemeBlizzard() */

void __thiscall RiftThemeBlizzard::RiftThemeBlizzard(RiftThemeBlizzard *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06687a10;
  return;
}


/* RiftThemeBlizzard::StaticNew() */

RiftThemeBlizzard * RiftThemeBlizzard::StaticNew(void)

{
  RiftThemeBlizzard *this;
  
  this = ::operator_new(0x28);
  RiftThemeBlizzard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBlizzard::AddSnowman(Zombie*) */

void __thiscall RiftThemeBlizzard::AddSnowman(RiftThemeBlizzard *this,Zombie *param_1)

{
  BoardTransforms *this_00;
  GridItemSunSeed *extraout_x0;
  Board *this_01;
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"monotropa_snowman_christmas");
  Board::AddGridItem(this_01,asStack_10,local_20,local_1c,1);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (extraout_x0 != (GridItemSunSeed *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    GridItemSunSeed::setBindZombie(extraout_x0,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    FUN_036f7690(extraout_x0 + 0x1cc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBlizzard::onGamePlayStarted() */

void __thiscall RiftThemeBlizzard::onGamePlayStarted(RiftThemeBlizzard *this)

{
  bool bVar1;
  long extraout_x0;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x1c) = fVar2 + *(float *)(extraout_x0 + 0x20);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBlizzard::createBlizzardEffect() */

void __thiscall RiftThemeBlizzard::createBlizzardEffect(RiftThemeBlizzard *this)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) / 2 + 1);
  fVar3 = (float)iVar1 + DAT_06aaed90;
  iVar1 = BoardTransforms::GridToBoardSpaceY(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) / 2 + 1);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_18,(float)(int)fVar3,(float)(int)((float)iVar1 + DAT_06aaed94),0.0);
  std::string::string(asStack_30,"SNOW");
  nop();
  std::string::string(asStack_28,"POPANIM_EFFECTS_MONOTROPA_PROJECTILE");
  FUN_05475d88(asStack_20,asStack_30);
  plVar2 = (long *)PlantMonotropa::CreateProjectileEffectByBoardSpace
                             (local_18,local_14,local_10,this,asStack_28,asStack_20,0x64961);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  nop();
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x80))(0x40000000,plVar2);
  }
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBlizzard::triggerBlizzard() */

void __thiscall RiftThemeBlizzard::triggerBlizzard(RiftThemeBlizzard *this)

{
  bool bVar1;
  long extraout_x0;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  createBlizzardEffect(this);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x20) = fVar2 + *(float *)(extraout_x0 + 0x24);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeBlizzard::CheckZombieCanBeSnowman(Zombie*) */

byte __thiscall RiftThemeBlizzard::CheckZombieCanBeSnowman(RiftThemeBlizzard *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ZombieSwashbuckler *this_00;
  SexyVector3 *pSVar5;
  
  if ((((param_1 != (Zombie *)0x0) &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) &&
     ((cVar1 = Zombie::IsInSandStorm(param_1), cVar1 == '\0' &&
      (cVar1 = Zombie::IsRisingFromGround(param_1), cVar1 == '\0')))) {
    this_00 = Sexy::RtObject::Cast<ZombieSwashbuckler>((RtObject *)param_1);
    if (this_00 != (ZombieSwashbuckler *)0x0) {
      if (*(code **)(*(long *)this_00 + 0x338) == ZombieSwashbuckler::IsSwingingIn) {
        cVar1 = ZombieSwashbuckler::IsSwingingIn(this_00);
      }
      else {
        cVar1 = (**(code **)(*(long *)this_00 + 0x338))();
      }
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = FUN_036f75a8(this_00[0x802]);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    cVar1 = Zombie::IsBoss(param_1);
    if ((((cVar1 == '\0') &&
         (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) &&
        ((cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0' &&
         ((((iVar4 = Zombie::GetSizeType(param_1), iVar4 != 2 &&
            (iVar4 = Zombie::GetSizeType(param_1), iVar4 != 1)) &&
           (cVar1 = Zombie::HasCondition(param_1,0x65), cVar1 == '\0')) &&
          ((cVar1 = Zombie::IsFlying(param_1), cVar1 == '\0' &&
           (bVar2 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)param_1), !bVar2)))))))) &&
       (cVar1 = Zombie::HasCondition(param_1,0x18), cVar1 == '\0')) {
      pSVar5 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_1);
      bVar3 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),pSVar5);
      return bVar3 ^ 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBlizzard::effectEntities() */

void __thiscall RiftThemeBlizzard::effectEntities(RiftThemeBlizzard *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  Plant *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(2,1);
  EntityFinder::GetEntitiesOnBoard(avStack_20,uVar3);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
    if (pZVar5 == (Zombie *)0x0) {
      this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
      if (this_00 != (Plant *)0x0) {
        Plant::AddFrost(this_00,100);
        Plant::AddFrost(this_00,100);
      }
    }
    else {
      cVar2 = CheckZombieCanBeSnowman(this,pZVar5);
      if (cVar2 != '\0') {
        AddSnowman(this,pZVar5);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
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
/* RiftThemeBlizzard::Update() */

void __thiscall RiftThemeBlizzard::Update(RiftThemeBlizzard *this)

{
  long extraout_x0;
  float fVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x1c) < fVar1) {
    triggerBlizzard(this);
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x1c) = fVar1 + *(float *)(extraout_x0 + 0x20);
  }
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x20) < fVar1) {
    effectEntities(this);
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x20) = uVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBlizzard::Activate() */

void __thiscall RiftThemeBlizzard::Activate(RiftThemeBlizzard *this)

{
  LevelModuleManager *pLVar1;
  undefined4 uVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RiftTheme::Activate((RiftTheme *)this);
  pLVar1 = (LevelModuleManager *)FUN_036f7590(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (pLVar1 != (LevelModuleManager *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGamePlayStarted);
    Sexy::Delegate0::Delegate0<RiftThemeBlizzard,void(RiftThemeBlizzard::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

