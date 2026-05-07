// Class: GridItemCardGameGravestoneZombieTimeSpawner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestoneZombieTimeSpawner::StaticClassInit() */

void GridItemCardGameGravestoneZombieTimeSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameGravestoneZombieTimeSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_03d5ee04,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameGravestoneZombieTimeSpawner::StaticGetClass() */

long * GridItemCardGameGravestoneZombieTimeSpawner::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameGravestoneZombieTimeSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameGravestoneZombieTimeSpawner::GetClass() const */

long * GridItemCardGameGravestoneZombieTimeSpawner::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameGravestoneZombieTimeSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameGravestoneZombieTimeSpawner::CanLevelUpGravestone() */

bool __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::CanLevelUpGravestone
          (GridItemCardGameGravestoneZombieTimeSpawner *this)

{
  return *(int *)(this + 0x1b8) < *(int *)(this + 0x1c4);
}


/* GridItemCardGameGravestoneZombieTimeSpawner::GridItemCardGameGravestoneZombieTimeSpawner() */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::GridItemCardGameGravestoneZombieTimeSpawner
          (GridItemCardGameGravestoneZombieTimeSpawner *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0676c040;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameGravestoneZombieTimeSpawner_0676c2f8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1c4) = 3;
  PVZ2UICheckBox::SetRightAligned((PVZ2UICheckBox *)this,true);
  return;
}


/* GridItemCardGameGravestoneZombieTimeSpawner::StaticNew() */

GridItemCardGameGravestoneZombieTimeSpawner *
GridItemCardGameGravestoneZombieTimeSpawner::StaticNew(void)

{
  GridItemCardGameGravestoneZombieTimeSpawner *this;
  
  this = ::operator_new(0x1c8);
  GridItemCardGameGravestoneZombieTimeSpawner(this);
  return this;
}


/* GridItemCardGameGravestoneZombieTimeSpawner::~GridItemCardGameGravestoneZombieTimeSpawner() */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::~GridItemCardGameGravestoneZombieTimeSpawner
          (GridItemCardGameGravestoneZombieTimeSpawner *this)

{
  *(undefined ***)this = &PTR_GetClass_0676c040;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameGravestoneZombieTimeSpawner_0676c2f8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to
   GridItemCardGameGravestoneZombieTimeSpawner::~GridItemCardGameGravestoneZombieTimeSpawner() */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::~GridItemCardGameGravestoneZombieTimeSpawner
          (GridItemCardGameGravestoneZombieTimeSpawner *this)

{
  ~GridItemCardGameGravestoneZombieTimeSpawner(this + -0x10);
  return;
}


/* GridItemCardGameGravestoneZombieTimeSpawner::~GridItemCardGameGravestoneZombieTimeSpawner() */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::~GridItemCardGameGravestoneZombieTimeSpawner
          (GridItemCardGameGravestoneZombieTimeSpawner *this)

{
  ~GridItemCardGameGravestoneZombieTimeSpawner(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridItemCardGameGravestoneZombieTimeSpawner::~GridItemCardGameGravestoneZombieTimeSpawner() */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::~GridItemCardGameGravestoneZombieTimeSpawner
          (GridItemCardGameGravestoneZombieTimeSpawner *this)

{
  ~GridItemCardGameGravestoneZombieTimeSpawner(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestoneZombieTimeSpawner::onAnimationDone(std::string const&) */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::onAnimationDone
          (GridItemCardGameGravestoneZombieTimeSpawner *this,string *param_1)

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
      goto LAB_03d5ea48;
    }
    bVar1 = std::operator==(param_1,"levelup3");
    if (!bVar1) goto LAB_03d5ea48;
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
LAB_03d5ea48:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameGravestoneZombieTimeSpawner::registerForEvents() */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::registerForEvents
          (GridItemCardGameGravestoneZombieTimeSpawner *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItem::registerForEvents((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCardGameStaffChange);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<CardGameGridItemStaff*,Sexy::CBMemberTranslatorX<GridItemCardGameGravestoneZombieTimeSpawner,void(GridItemCardGameGravestoneZombieTimeSpawner::*)(CardGameGridItemStaff*)>>
            ((MessageRouter *)puVar1,Message::CardGameStaffChange,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestoneZombieTimeSpawner::LevelUpGravestone(int) */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::LevelUpGravestone
          (GridItemCardGameGravestoneZombieTimeSpawner *this,int param_1)

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
      GridItemCardGameGravestoneZombieTimeSpawnerEnemy::SetSpawnZombieType
                ((GridItemCardGameGravestoneZombieTimeSpawnerEnemy *)this,
                 (RtWeakPtr<Sexy::SoundResource> *)asStack_58);
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


/* GridItemCardGameGravestoneZombieTimeSpawner::onCardGameStaffChange(CardGameGridItemStaff*) */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::onCardGameStaffChange
          (GridItemCardGameGravestoneZombieTimeSpawner *this,CardGameGridItemStaff *param_1)

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
        GridItemCardGameGravestoneZombieTimeSpawnerEnemy::SetTimeRate
                  ((GridItemCardGameGravestoneZombieTimeSpawnerEnemy *)this,0.5);
        return;
      }
    } while (lVar6 != 3);
    lVar7 = lVar7 + 1;
    if (lVar7 == 3) {
      GridItemCardGameGravestoneZombieTimeSpawnerEnemy::SetTimeRate
                ((GridItemCardGameGravestoneZombieTimeSpawnerEnemy *)this,1.0);
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameGravestoneZombieTimeSpawner::spawnZombie() */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::spawnZombie
          (GridItemCardGameGravestoneZombieTimeSpawner *this)

{
  SexyVector3 *pSVar1;
  long *plVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  int local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_2c = 0;
  local_30 = *(int *)(this + 0x1b8) + 1;
  local_29 = 1;
  local_2b = 1;
  plVar2 = *(long **)(gLawnApp + 0x9f0);
  pcVar3 = *(code **)(*plVar2 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)(this + 0x1b0));
  pSVar1 = (SexyVector3 *)(*pcVar3)(plVar2,aRStack_38,0xfffffffb,(SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  (**(code **)(*(long *)pSVar1 + 0x198))(pSVar1,1);
  RealObject::JoinTeam((RealObject *)pSVar1,1);
  Zombie::SetFacing((Zombie *)pSVar1,1);
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
/* GridItemCardGameGravestoneZombieTimeSpawner::onGridItemInitialize() */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::onGridItemInitialize
          (GridItemCardGameGravestoneZombieTimeSpawner *this)

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
  GridItemCardGameGravestoneZombieTimeSpawnerEnemy::SetSpawnZombieType
            ((GridItemCardGameGravestoneZombieTimeSpawnerEnemy *)this,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  FUN_03d5dc50(*(undefined4 *)(pGVar2 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03d5dc58(this + 0x128);
  RealObject::JoinTeam((RealObject *)this,1);
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


/* GridItemCardGameGravestoneZombieTimeSpawner::onUpdate() */

void __thiscall
GridItemCardGameGravestoneZombieTimeSpawner::onUpdate
          (GridItemCardGameGravestoneZombieTimeSpawner *this)

{
  char cVar1;
  float fVar2;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar2 = (float)PVZ_T();
  if ((*(float *)(this + 0x1a8) < fVar2) && (cVar1 = FUN_03d5dc4c(this[0x18c]), cVar1 == '\0')) {
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x1a8) = fVar2 + *(float *)(this + 0x1bc) * *(float *)(this + 0x1c0);
    spawnZombie(this);
    return;
  }
  return;
}

