// Class: ZombieTeleportActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionDefinition::StaticClassInit() */

void ZombieTeleportActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTeleportActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04f3302c,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTeleportActionDefinition::StaticGetClass() */

long * ZombieTeleportActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTeleportActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTeleportActionDefinition::GetClass() const */

long * ZombieTeleportActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTeleportActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTeleportActionDefinition::IsValidTarget(Sexy::RtWeakPtr<Zombie>, bool) const */

bool __thiscall
ZombieTeleportActionDefinition::IsValidTarget
          (ZombieTeleportActionDefinition *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  GameObject *pGVar5;
  Zombie *pZVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  fVar9 = (float)FUN_04f2d7d8(*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                              *(undefined4 *)(lVar4 + 0x20));
  iVar2 = BoardTransforms::BoardSpaceToGridX(fVar9);
  if (param_3 == '\0') {
    pGVar5 = (GameObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = ClassRestrictionSet::IsExcluded((ClassRestrictionSet *)(this + 0x90),pGVar5);
    if (cVar1 != '\0') {
      return false;
    }
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    uVar7 = operator|(1,8);
    uVar3 = operator|(uVar7,2);
    cVar1 = Zombie::MatchesAny(pZVar6,uVar3);
    if (cVar1 != '\0') {
      return false;
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = RealObject::IsOnTeam(uVar7,1);
    if (cVar1 != '\0') {
      return false;
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar7,0x3f);
    if (cVar1 != '\0') {
      return false;
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar7,0x11);
    if (cVar1 != '\0') {
      return false;
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar7,0x19);
    if (cVar1 != '\0') {
      return false;
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar7,0x90);
    if (cVar1 != '\0') {
      return false;
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar7,0x77);
    if (cVar1 != '\0') {
      return false;
    }
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::IsBoss(pZVar6);
    if (cVar1 != '\0') {
      return false;
    }
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = (**(code **)(*plVar8 + 0x4d8))();
    if (cVar1 != '\0') {
      return false;
    }
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::CanTakeFatalDamage(pZVar6);
    if (cVar1 == '\0') {
      return false;
    }
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = (**(code **)(*plVar8 + 0x508))();
    if (cVar1 != '\0') {
      return false;
    }
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasFogImmune(pZVar6);
    if (cVar1 != '\0') {
      return false;
    }
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::IsBerserk(pZVar6);
    if (cVar1 != '\0') {
      return false;
    }
  }
  else {
    pGVar5 = (GameObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = ClassRestrictionSet::IsExcluded((ClassRestrictionSet *)(this + 0xb8),pGVar5);
    if (cVar1 != '\0') {
      return false;
    }
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    uVar7 = operator|(1,8);
    uVar3 = operator|(uVar7,2);
    cVar1 = Zombie::MatchesAny(pZVar6,uVar3);
    if (cVar1 != '\0') {
      return false;
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = RealObject::IsOnTeam(uVar7,1);
    if (cVar1 != '\0') {
      return false;
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar7,0x3f);
    if (cVar1 != '\0') {
      return false;
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar7,0x11);
    if (cVar1 != '\0') {
      return false;
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar7,0x19);
    if (cVar1 != '\0') {
      return false;
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar7,0x90);
    if (cVar1 != '\0') {
      return false;
    }
    uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar7,0x77);
    if (cVar1 != '\0') {
      return false;
    }
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::IsBoss(pZVar6);
    if (cVar1 != '\0') {
      return false;
    }
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = (**(code **)(*plVar8 + 0x4d8))();
    if (cVar1 != '\0') {
      return false;
    }
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = (**(code **)(*plVar8 + 0x508))();
    if (cVar1 != '\0') {
      return false;
    }
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasFogImmune(pZVar6);
    if (cVar1 != '\0') {
      return false;
    }
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::IsBerserk(pZVar6);
    if (cVar1 != '\0') {
      return false;
    }
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::CanTakeFatalDamage(pZVar6);
    if (cVar1 == '\0') {
      return false;
    }
  }
  pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = Zombie::IsTargetable(pZVar6);
  if (cVar1 != '\0') {
    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::IsControlled(pZVar6);
    if (cVar1 == '\0') {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = FUN_02fd47cc(*(undefined4 *)(lVar4 + 0xcc));
      if (cVar1 == '\0') {
        return *(int *)(this + 0x44) <= iVar2;
      }
    }
  }
  return false;
}


/* ZombieTeleportActionDefinition::ZombieTeleportActionDefinition() */

void __thiscall
ZombieTeleportActionDefinition::ZombieTeleportActionDefinition(ZombieTeleportActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x38) = 3;
  *(undefined ***)this = &PTR_GetClass_06a16420;
  *(undefined4 *)(this + 0x3c) = 3;
  *(undefined4 *)(this + 0x48) = 0x21;
  *(undefined4 *)(this + 0x4c) = 0x21;
  *(undefined4 *)(this + 0x50) = 0x21;
  *(undefined4 *)(this + 0x40) = 2;
  *(undefined4 *)(this + 0x44) = 0;
  this[0x65] = (ZombieTeleportActionDefinition)0x1;
  this[100] = (ZombieTeleportActionDefinition)0x0;
  this[0x66] = (ZombieTeleportActionDefinition)0x0;
  this[0x67] = (ZombieTeleportActionDefinition)0x0;
  this[0x68] = (ZombieTeleportActionDefinition)0x0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x90));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0xb8));
  Set8BytesTo0(this + 0xe0);
  Set8BytesTo0(this + 0xe8);
  Set8BytesTo0(this + 0xf0);
  return;
}


/* ZombieTeleportActionDefinition::StaticNew() */

ZombieTeleportActionDefinition * ZombieTeleportActionDefinition::StaticNew(void)

{
  ZombieTeleportActionDefinition *this;
  
  this = ::operator_new(0xf8);
  ZombieTeleportActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f388c4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieTeleportActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombieTeleportActionDefinition::TryStartAction
          (ZombieTeleportActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombieTeleportActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* ZombieTeleportActionDefinition::~ZombieTeleportActionDefinition() */

void __thiscall
ZombieTeleportActionDefinition::~ZombieTeleportActionDefinition
          (ZombieTeleportActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a16420;
  std::string::~string((string *)(this + 0xf0));
  std::string::~string((string *)(this + 0xe8));
  std::string::~string((string *)(this + 0xe0));
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0xb8));
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x90));
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x78));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombieTeleportActionDefinition::~ZombieTeleportActionDefinition() */

void __thiscall
ZombieTeleportActionDefinition::~ZombieTeleportActionDefinition
          (ZombieTeleportActionDefinition *this)

{
  ~ZombieTeleportActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionDefinition::FindTargetsForWarp(ZombieWithActions*) const */

void ZombieTeleportActionDefinition::FindTargetsForWarp(ZombieWithActions *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  RtObject *extraout_x0;
  ZombieCarnieMagicianArtifact *pZVar8;
  RtObject *in_x1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  if (param_1[0x66] == (ZombieWithActions)0x0) {
    if ((in_x1 == (RtObject *)0x0) ||
       (bVar2 = Sexy::RtObject::IsA<ZombieCarnieMagicianArtifact>(in_x1), !bVar2)) {
      uVar3 = 0;
      EntityFinder::GetEntitiesOnBoard(avStack_20,2);
    }
    else {
      iVar5 = SharkMinion::getRow((SharkMinion *)in_x1);
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      Sexy::Insets::Insets((Insets *)local_30,0,iVar5,iVar4,1);
      EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)local_30);
      pZVar8 = Sexy::RtObject::Cast<ZombieCarnieMagicianArtifact>(in_x1);
      uVar3 = FUN_04f2d4dc(pZVar8[0x861]);
    }
    iVar4 = Sexy::Rand(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c) +
                       *(int *)(param_1 + 0x50));
    iVar5 = *(int *)(param_1 + 0x50);
    if (iVar5 < iVar4) {
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
      Sexy::Point::Point((Point *)aRStack_38,0,0);
      EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
                ((BoardEntitySorter_ClosestByColumn *)local_30,(Point *)aRStack_38);
      std::
      sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
                (uVar6,uVar7,(BoardEntitySorter_ClosestByColumn *)local_30);
      if (*(int *)(param_1 + 0x48) < iVar4 - iVar5) {
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_20);
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
        std::
        reverse<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>>
                  (uVar6,uVar7);
      }
    }
    else {
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
                (uVar6,uVar7);
    }
    iVar5 = 0;
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    while (iVar5 < *(int *)(param_1 + 0x38)) {
      local_30[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_20);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_30);
      if (!bVar2) break;
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      if (extraout_x0 != (RtObject *)0x0) {
        if (param_1[100] != (ZombieWithActions)0x0) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_38);
          cVar1 = Zombie::IsInTargetHistory();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          if (cVar1 != '\0') goto LAB_04f3a3a0;
        }
        if ((in_x1 != extraout_x0) || (param_1[0x67] == (ZombieWithActions)0x0)) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_38);
          cVar1 = IsValidTarget((ZombieTeleportActionDefinition *)param_1,
                                (RtWeakPtr<Sexy::SoundResource> *)local_30,uVar3);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          if (cVar1 != '\0') {
            iVar5 = iVar5 + 1;
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_38);
            std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       in_x8,(RtWeakPtr *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          }
        }
      }
LAB_04f3a3a0:
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
  }
  else if (in_x1 != (RtObject *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_38);
    cVar1 = IsValidTarget((ZombieTeleportActionDefinition *)param_1,
                          (RtWeakPtr<Sexy::SoundResource> *)local_30,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_38);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)in_x8,
                 (RtWeakPtr *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTeleportActionDefinition::CanStartAction(ZombieWithActions*) const */

void ZombieTeleportActionDefinition::CanStartAction(ZombieWithActions *param_1)

{
  long lVar1;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargetsForWarp(param_1);
  lVar1 = FUN_04f2d66c(local_20,local_18);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 != 0);
}

