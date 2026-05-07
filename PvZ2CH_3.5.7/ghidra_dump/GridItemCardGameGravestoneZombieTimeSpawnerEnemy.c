// Class: GridItemCardGameGravestoneZombieTimeSpawnerEnemy


/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::SetTimeRate(float) */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::SetTimeRate
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this,float param_1)

{
  *(float *)(this + 0x1c0) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::StaticClassInit() */

void GridItemCardGameGravestoneZombieTimeSpawnerEnemy::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameGravestoneZombieTimeSpawnerEnemy");
    (*pcVar2)(plVar1,asStack_10,FUN_03d5f068,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::StaticGetClass() */

long * GridItemCardGameGravestoneZombieTimeSpawnerEnemy::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameGravestoneZombieTimeSpawnerEnemy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::GetClass() const */

long * GridItemCardGameGravestoneZombieTimeSpawnerEnemy::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameGravestoneZombieTimeSpawnerEnemy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::CanLevelUpGravestone() */

bool __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::CanLevelUpGravestone
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this)

{
  return *(int *)(this + 0x1b8) <= *(int *)(this + 0x1c4);
}


/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::GridItemCardGameGravestoneZombieTimeSpawnerEnemy()
    */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::GridItemCardGameGravestoneZombieTimeSpawnerEnemy
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0676c330;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameGravestoneZombieTimeSpawnerEnemy_0676c5e8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1c8) = 1;
  *(undefined4 *)(this + 0x1c4) = 3;
  PVZ2UICheckBox::SetRightAligned((PVZ2UICheckBox *)this,true);
  return;
}


/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::StaticNew() */

GridItemCardGameGravestoneZombieTimeSpawnerEnemy *
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::StaticNew(void)

{
  GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this;
  
  this = ::operator_new(0x1d0);
  GridItemCardGameGravestoneZombieTimeSpawnerEnemy(this);
  return this;
}


/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::~GridItemCardGameGravestoneZombieTimeSpawnerEnemy()
    */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::~GridItemCardGameGravestoneZombieTimeSpawnerEnemy
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this)

{
  *(undefined ***)this = &PTR_GetClass_0676c330;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameGravestoneZombieTimeSpawnerEnemy_0676c5e8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to
   GridItemCardGameGravestoneZombieTimeSpawnerEnemy::~GridItemCardGameGravestoneZombieTimeSpawnerEnemy()
    */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::~GridItemCardGameGravestoneZombieTimeSpawnerEnemy
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this)

{
  ~GridItemCardGameGravestoneZombieTimeSpawnerEnemy(this + -0x10);
  return;
}


/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::~GridItemCardGameGravestoneZombieTimeSpawnerEnemy()
    */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::~GridItemCardGameGravestoneZombieTimeSpawnerEnemy
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this)

{
  ~GridItemCardGameGravestoneZombieTimeSpawnerEnemy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridItemCardGameGravestoneZombieTimeSpawnerEnemy::~GridItemCardGameGravestoneZombieTimeSpawnerEnemy()
    */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::~GridItemCardGameGravestoneZombieTimeSpawnerEnemy
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this)

{
  ~GridItemCardGameGravestoneZombieTimeSpawnerEnemy(this + -0x10);
  return;
}


/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::SetSpawnZombieType(Sexy::RtWeakPtr<ZombieType
   const>) */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::SetSpawnZombieType
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  bool bVar1;
  ZombieType *this_01;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x1b0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (!bVar1) {
    return;
  }
  this_01 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ZombieType::EnsureResourceGroupsLoaded(this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::onAnimationDone(std::string const&) */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::onAnimationDone
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  DummyInit *local_58;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"levelup1");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"idle2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  }
  else {
    bVar1 = std::operator==(param_1,"levelup2");
    if (bVar1) {
      GridItemAnimation::GetAnimRig();
      pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      std::string::string(asStack_40,"idle3");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      goto LAB_03d5ec44;
    }
    bVar1 = std::operator==(param_1,"levelup3");
    if (!bVar1) goto LAB_03d5ec44;
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"idle4");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  }
  local_58 = aDStack_38;
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,local_58);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
LAB_03d5ec44:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::LevelUpGravestone(int) */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::LevelUpGravestone
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this,int param_1)

{
  int iVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  GridItemCardGameGravestonePropertySheet *pGVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = CanLevelUpGravestone(this);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(this + 0x1b8);
    *(int *)(this + 0x1b8) = param_1 + iVar1;
    if (*(int *)(this + 0x1c4) <= param_1 + iVar1) {
      *(int *)(this + 0x1b8) = *(int *)(this + 0x1c4);
      pGVar4 = GridItem::GetProps<GridItemCardGameGravestonePropertySheet>();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_58,(RtWeakPtrBase *)(pGVar4 + 0xd8));
      SetSpawnZombieType(this,(RtWeakPtr<Sexy::SoundResource> *)asStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    }
    GridItemAnimation::GetAnimRig();
    pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    Sexy::StrFormat("levelup%d",asStack_70,(ulong)*(uint *)(this + 0x1b8));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar3,asStack_70,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string(asStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::onCardGameStaffChange(CardGameGridItemStaff*)
    */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::onCardGameStaffChange
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this,CardGameGridItemStaff *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CardGameGridItemStaff *pCVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = 0;
  do {
    lVar6 = 0;
    iVar2 = (&DAT_057527c0)[lVar7];
    do {
      iVar3 = FUN_03d5dc60(*(undefined4 *)(this + 0x130));
      iVar4 = FUN_03d5dc64(*(undefined4 *)(this + 0x134));
      piVar1 = &DAT_057527c0 + lVar6;
      lVar6 = lVar6 + 1;
      pCVar5 = (CardGameGridItemStaff *)FUN_03d5fcd0(iVar3 + iVar2,iVar4 + *piVar1);
      if ((pCVar5 != (CardGameGridItemStaff *)0x0) && (pCVar5 != param_1)) {
        SetTimeRate(this,0.5);
        return;
      }
    } while (lVar6 != 3);
    lVar7 = lVar7 + 1;
    if (lVar7 == 3) {
      SetTimeRate(this,1.0);
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::spawnZombie() */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::spawnZombie
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this)

{
  SexyVector3 *pSVar1;
  long *plVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_2c = 0;
  local_30 = *(undefined4 *)(this + 0x1c8);
  local_29 = 1;
  local_2b = 1;
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  pcVar3 = *(code **)(*plVar2 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)(this + 0x1b0));
  pSVar1 = (SexyVector3 *)(*pcVar3)(plVar2,aRStack_38,0xfffffffb,(SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  (**(code **)(*(long *)pSVar1 + 0x198))(pSVar1,1);
  RealObject::JoinTeam((RealObject *)pSVar1,2);
  Zombie::SetFacing((Zombie *)pSVar1,0);
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)this);
  BoardEntity::PlaceOnBoard(pSVar1);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::onGridItemInitialize() */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::onGridItemInitialize
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this)

{
  undefined4 uVar1;
  GridItemCardGameGravestonePropertySheet *pGVar2;
  PopAnimRig *pPVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  pGVar2 = GridItem::GetProps<GridItemCardGameGravestonePropertySheet>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)(pGVar2 + 0xd0));
  SetSpawnZombieType(this,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  FUN_03d5dc50(*(undefined4 *)(pGVar2 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03d5dc58(this + 0x128);
  RealObject::JoinTeam((RealObject *)this,2);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string((string *)aRStack_40,"idle1");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar3,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  uVar1 = *(undefined4 *)(pGVar2 + 0xe4);
  *(undefined4 *)(this + 0x1c4) = *(undefined4 *)(pGVar2 + 0xe0);
  *(undefined4 *)(this + 0x1bc) = uVar1;
  *(undefined4 *)(this + 0x1c0) = 0x3f800000;
  fVar4 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar4 + *(float *)(this + 0x1bc) * *(float *)(this + 0x1c0);
  onCardGameStaffChange(this,(CardGameGridItemStaff *)0x0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameGravestoneZombieTimeSpawnerEnemy::onUpdate() */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawnerEnemy::onUpdate
          (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *this)

{
  float fVar1;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x1a8)) {
    return;
  }
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar1 + *(float *)(this + 0x1bc) * *(float *)(this + 0x1c0);
  spawnZombie(this);
  return;
}

