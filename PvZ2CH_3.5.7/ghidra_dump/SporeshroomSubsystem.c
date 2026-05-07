// Class: SporeshroomSubsystem


/* SporeshroomSubsystem::RecordSporeshroomLevel(int) */

void __thiscall SporeshroomSubsystem::RecordSporeshroomLevel(SporeshroomSubsystem *this,int param_1)

{
  *(int *)(this + 0x10) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SporeshroomSubsystem::StaticClassInit() */

void SporeshroomSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"SporeshroomSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04170800,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SporeshroomSubsystem::StaticGetClass() */

long * SporeshroomSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SporeshroomSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SporeshroomSubsystem::GetClass() const */

long * SporeshroomSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"SporeshroomSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SporeshroomSubsystem::SporeshroomSubsystem() */

void __thiscall SporeshroomSubsystem::SporeshroomSubsystem(SporeshroomSubsystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067f4910;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x20));
  *(undefined4 *)(this + 0x10) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDeath);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<SporeshroomSubsystem,void(SporeshroomSubsystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombiePlantified,&local_40);
  return;
}


/* SporeshroomSubsystem::StaticNew() */

SporeshroomSubsystem * SporeshroomSubsystem::StaticNew(void)

{
  SporeshroomSubsystem *this;
  
  this = ::operator_new(0x50);
  SporeshroomSubsystem(this);
  return this;
}


/* SporeshroomSubsystem::~SporeshroomSubsystem() */

void __thiscall SporeshroomSubsystem::~SporeshroomSubsystem(SporeshroomSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067f4910;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::
  set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
  ::~set((set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
          *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* SporeshroomSubsystem::~SporeshroomSubsystem() */

void __thiscall SporeshroomSubsystem::~SporeshroomSubsystem(SporeshroomSubsystem *this)

{
  ~SporeshroomSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SporeshroomSubsystem::shouldReplaceZombieWithShroom(Zombie*) */

void SporeshroomSubsystem::shouldReplaceZombieWithShroom(Zombie *param_1)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  lVar1 = std::
          set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
          ::count((set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                   *)(param_1 + 0x20),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SporeshroomSubsystem::ReplaceZombieWithShroom(Zombie*) */

void SporeshroomSubsystem::ReplaceZombieWithShroom(Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
  ::insert((set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
            *)(param_1 + 0x20),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SporeshroomSubsystem::GetSpawnPlantType() */

void SporeshroomSubsystem::GetSpawnPlantType(void)

{
  char cVar1;
  bool bVar2;
  long in_x0;
  string *psVar3;
  long extraout_x0;
  Board *this;
  long lVar4;
  string *psVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [24];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_50,"sporeshroom");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_50);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  PlantImitater::GetImitatedPlant();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
  if (*(int *)(in_x0 + 0x10) < 3) {
    std::vector<SpawnItemRecord,std::allocator<SpawnItemRecord>>::operator=
              ((vector<SpawnItemRecord,std::allocator<SpawnItemRecord>> *)asStack_50,
               (vector *)(extraout_x0 + 0x2b8));
    this = *(Board **)(gLawnApp + 0x9f0);
    if (this != (Board *)0x0) goto LAB_04171ae4;
LAB_04171bd8:
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_50);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_50);
  }
  else {
    std::vector<SpawnItemRecord,std::allocator<SpawnItemRecord>>::operator=
              ((vector<SpawnItemRecord,std::allocator<SpawnItemRecord>> *)asStack_50,
               (vector *)(extraout_x0 + 0x2d0));
    this = *(Board **)(gLawnApp + 0x9f0);
    if (this == (Board *)0x0) goto LAB_04171bd8;
LAB_04171ae4:
    cVar1 = Board::IsDangerRoom(this);
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_50);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_50);
    if (cVar1 != '\0') {
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60),
            bVar2) {
        psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        bVar2 = std::operator==(psVar3,"sunshroom");
        if (!bVar2) {
          psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
          ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::AddItem
                    ((ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>> *)aPStack_38,aRStack_58,
                     *(undefined4 *)(psVar3 + 8));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        }
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_68);
      }
      goto LAB_04171b64;
    }
  }
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar2) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::AddItem
              ((ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>> *)aPStack_38,aRStack_58,
               *(undefined4 *)(lVar4 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_68);
  }
LAB_04171b64:
  ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::PickItem();
  std::vector<SpawnItemRecord,std::allocator<SpawnItemRecord>>::~vector
            ((vector<SpawnItemRecord,std::allocator<SpawnItemRecord>> *)asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>>::~ProbabilitySet
            ((ProbabilitySet<Sexy::RtWeakPtr<PlantType_const>> *)aPStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SporeshroomSubsystem::trySpawnAnotherSporeshroom(Zombie*) */

void SporeshroomSubsystem::trySpawnAnotherSporeshroom(Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  UINewPVPTopZombieQueue *this;
  long lVar4;
  string *psVar5;
  Plant *pPVar6;
  Effect_PopAnim *this_00;
  PopAnim *pPVar7;
  float *pfVar8;
  PlantSporeshroom *this_01;
  Board *pBVar9;
  undefined8 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30;
  int local_2c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetSpawnPlantType();
  cVar1 = CustomLevelUtils::IsCustomLevel();
  if ((cVar1 != '\0') &&
     (this = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0)),
     this != (UINewPVPTopZombieQueue *)0x0)) {
    for (iVar3 = 0; cVar1 = FUN_0416e390(this[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
      UINewPVPTopZombieQueue::gettItem(this,iVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
      if ((bVar2) &&
         (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18), cVar1 != '\0')) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        iVar3 = FUN_0416e380(*(undefined4 *)(lVar4 + 0x1cc));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        goto LAB_04171ccc;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  iVar3 = -1;
LAB_04171ccc:
  BoardEntity::CalcGridPosition();
  if (*(int *)(param_1 + 0x10) < 2) {
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string((string *)aRStack_18,"sporeshroom");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    std::string::~string((string *)aRStack_18);
    nop();
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
    cVar1 = Board::CanPlantAt(pBVar9,&local_30,aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (cVar1 != '\0') {
      pBVar9 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)aRStack_18,"sporeshroom");
      pPVar6 = (Plant *)Board::AddPlant(pBVar9,local_30,local_2c,(string *)aRStack_18,iVar3,false,
                                        true,false,false);
      std::string::~string((string *)aRStack_18);
      nop();
      if (pPVar6 != (Plant *)0x0) {
        Plant::SetIsDuplicatePlant(pPVar6,true);
        nop();
        PlantSporeshroom::PlayGrowAnimation(this_01);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  else {
    GetSpawnPlantType();
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_28);
    cVar1 = Board::CanPlantAt(pBVar9,&local_30,aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (cVar1 != '\0') {
      uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_28);
      pPVar6 = (Plant *)Board::AddPlant((Board *)0x0,uVar10,local_30,local_2c,aRStack_18,1,1,iVar3,0
                                        ,1,1,1,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (pPVar6 != (Plant *)0x0) {
        Plant::SetIsDuplicatePlant(pPVar6,true);
        this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        std::string::string((string *)aRStack_20,"POPANIM_EFFECTS_SPORESHROOM_PROJECTILE_GUANG");
        GetPAMByName((string *)aRStack_20);
        pPVar7 = (PopAnim *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        Effect_PopAnim::CreatePopAnimRig(this_00,pPVar7,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        std::string::~string((string *)aRStack_20);
        nop();
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)pPVar6);
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*pfVar8 + 10.0,pfVar8[1] - 20.0,0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
        iVar3 = (**(code **)(*(long *)pPVar6 + 200))(pPVar6);
        FUN_0416e368(this_00 + 0x1c,iVar3 + 1);
        Effect_PopAnim::SetCentered(this_00,true);
        std::string::string((string *)aRStack_18,"idle");
        Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
        std::string::~string((string *)aRStack_18);
        nop();
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SporeshroomSubsystem::onZombieDeath(Zombie*) */

void SporeshroomSubsystem::onZombieDeath(Zombie *param_1)

{
  char cVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = shouldReplaceZombieWithShroom(param_1);
  if (cVar1 != '\0') {
    trySpawnAnotherSporeshroom(param_1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    uVar2 = std::
            set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
            ::find((set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                    *)(param_1 + 0x20),(RtWeakPtr *)aRStack_10);
    std::
    set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
    ::erase_abi_cxx11_((set<Sexy::RtWeakPtr<Zombie>,std::less<Sexy::RtWeakPtr<Zombie>>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                        *)(param_1 + 0x20),uVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

