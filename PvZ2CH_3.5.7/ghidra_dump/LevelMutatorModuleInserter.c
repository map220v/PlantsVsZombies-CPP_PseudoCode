// Class: LevelMutatorModuleInserter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorModuleInserter::createNewChallenge(std::string const&, int, std::string) const */

void __thiscall
LevelMutatorModuleInserter::createNewChallenge
          (undefined8 param_1_00,string *param_1,int param_2,undefined8 param_4)

{
  undefined8 uVar1;
  GridItemPlacementChallengeModuleProps *this;
  GridItemPlacementChallengeModuleProps *pGVar2;
  wstring awStack_28 [8];
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToWString(param_1);
  if (param_2 == 1) {
    pGVar2 = (GridItemPlacementChallengeModuleProps *)GameObject::Create<MoldColonyChallengeProps>()
    ;
    uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName(aRStack_18,awStack_28);
    PVZDB::GetIdByAlias(aRStack_20,uVar1,0x7c,aRStack_18);
    this = pGVar2 + 0x40;
  }
  else {
    if (param_2 != 2) {
      pGVar2 = (GridItemPlacementChallengeModuleProps *)0x0;
      goto LAB_0369fe10;
    }
    pGVar2 = GameObject::Create<GridItemPlacementChallengeModuleProps>();
    thunk_FUN_05475e00(pGVar2 + 0x40,param_4);
    uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName(aRStack_18,awStack_28);
    PVZDB::GetIdByAlias(aRStack_20,uVar1,0x7c,aRStack_18);
    this = pGVar2 + 0x48;
  }
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)this,aRStack_20);
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
LAB_0369fe10:
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pGVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorModuleInserter::AddLevelModules(Sexy::RtWeakPtr<LevelDefinition>,
   std::vector<Sexy::RtId, std::allocator<Sexy::RtId> > const&) const */

void __thiscall
LevelMutatorModuleInserter::AddLevelModules
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  RtId *this;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  local_20 = FUN_0369fbe8(*param_3);
  local_18 = FUN_0369fc38(param_3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    this = (RtId *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    std::string::string(asStack_10,"");
    nop();
    Sexy::RtId::ToString(this,asStack_10,false);
    std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::push_back
              ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(lVar2 + 0x88),this);
    std::string::~string(asStack_10);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorModuleInserter::getOrCreateChallengeModule(Sexy::RtWeakPtr<LevelDefinition>) */

void __thiscall
LevelMutatorModuleInserter::getOrCreateChallengeModule
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  long lVar3;
  CompiledMap *this_00;
  RtObject *this_01;
  StarChallengeModuleProperties *pSVar4;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(lVar3 + 0x88);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    this_00 = (CompiledMap *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
    ;
    cVar2 = Sexy::CompiledMap::Initialized(this_00);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)this_00);
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      pSVar4 = Sexy::RtObject::Cast<StarChallengeModuleProperties>(this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      if (pSVar4 != (StarChallengeModuleProperties *)0x0) goto LAB_036a02e8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  pSVar4 = GameObject::Create<StarChallengeModuleProperties>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  std::
  vector<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>,std::allocator<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>>>
  ::push_back((vector<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>,std::allocator<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>>>
               *)(pSVar4 + 0x40),(vector *)aRStack_20);
  std::
  vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
             *)aRStack_20);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_28);
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::push_back
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)this,(RtId *)aRStack_20);
  Sexy::RtId::~RtId((RtId *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
LAB_036a02e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pSVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorModuleInserter::addMainChallengeModules(Sexy::RtWeakPtr<LevelDefinition>,
   std::vector<Sexy::RtId, std::allocator<Sexy::RtId> > const&) */

void __thiscall
LevelMutatorModuleInserter::addMainChallengeModules
          (LevelMutatorModuleInserter *this,RtWeakPtrBase *param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  RtId *this_00;
  vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
  *this_01;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  lVar2 = getOrCreateChallengeModule(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  *(undefined1 *)(lVar2 + 0x70) = 1;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  local_28 = FUN_0369fbe8(*param_3);
  local_20 = FUN_0369fc38(param_3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    this_00 = (RtId *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    std::string::string(asStack_18,"");
    nop();
    Sexy::RtId::ToString(this_00,asStack_18,false);
    this_01 = (vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
               *)FUN_0369fbe4(*(undefined8 *)(lVar2 + 0x40));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
    std::
    vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::push_back
              ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(lVar3 + 0x88),this_00);
    std::string::~string(asStack_18);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorModuleInserter::applyGridMutator(Sexy::RtWeakPtr<LevelDefinition>, MutatorGridEntry
   const&) */

void __thiscall
LevelMutatorModuleInserter::applyGridMutator
          (LevelMutatorModuleInserter *this,RtWeakPtrBase *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
  *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  lVar2 = getOrCreateChallengeModule(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  *(undefined1 *)(lVar2 + 0x70) = 1;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  uVar1 = *(undefined4 *)(param_3 + 8);
  FUN_05475d88(aRStack_10,param_3 + 0x10);
  lVar4 = createNewChallenge(this,param_3,uVar1,aRStack_10);
  std::string::~string((string *)aRStack_10);
  if (lVar4 != 0) {
    this_00 = (vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
               *)FUN_0369fbe4(*(undefined8 *)(lVar2 + 0x40));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::
    vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
    ::push_back(this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_18);
    std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::push_back
              ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(lVar3 + 0x88),(RtId *)aRStack_10);
    Sexy::RtId::~RtId((RtId *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorModuleInserter::getOrCreateBonusChallengeModule(Sexy::RtWeakPtr<LevelDefinition>)
   const */

void __thiscall
LevelMutatorModuleInserter::getOrCreateBonusChallengeModule
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  long lVar3;
  CompiledMap *this_00;
  RtObject *this_01;
  BonusChallengeModuleProperties *pBVar4;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(lVar3 + 0x88);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    this_00 = (CompiledMap *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
    ;
    cVar2 = Sexy::CompiledMap::Initialized(this_00);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)this_00);
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      pBVar4 = Sexy::RtObject::Cast<BonusChallengeModuleProperties>(this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      if (pBVar4 != (BonusChallengeModuleProperties *)0x0) goto LAB_036a06d8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  pBVar4 = GameObject::Create<BonusChallengeModuleProperties>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  std::
  vector<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>,std::allocator<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>>>
  ::push_back((vector<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>,std::allocator<std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>>>
               *)(pBVar4 + 0x40),(vector *)aRStack_20);
  std::
  vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
             *)aRStack_20);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_28);
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::push_back
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)this,(RtId *)aRStack_20);
  Sexy::RtId::~RtId((RtId *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
LAB_036a06d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pBVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorModuleInserter::addBonusChallengeModules(Sexy::RtWeakPtr<LevelDefinition>,
   std::vector<Sexy::RtId, std::allocator<Sexy::RtId> > const&) const */

void __thiscall
LevelMutatorModuleInserter::addBonusChallengeModules
          (LevelMutatorModuleInserter *this,RtWeakPtrBase *param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  RtId *this_00;
  vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
  *this_01;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  lVar2 = getOrCreateBonusChallengeModule(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  *(undefined1 *)(lVar2 + 0x70) = 1;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  local_28 = FUN_0369fbe8(*param_3);
  local_20 = FUN_0369fc38(param_3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    this_00 = (RtId *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    std::string::string(asStack_18,"");
    nop();
    Sexy::RtId::ToString(this_00,asStack_18,false);
    this_01 = (vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
               *)FUN_0369fbe4(*(undefined8 *)(lVar2 + 0x40));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
    std::
    vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>
    ::push_back(this_01,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::push_back
              ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(lVar3 + 0x88),this_00);
    std::string::~string(asStack_18);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorModuleInserter::Execute(Sexy::RtWeakPtr<LevelDefinition>, Sexy::RtId const&, int,
   int, int) */

void LevelMutatorModuleInserter::Execute
               (LevelMutatorModuleInserter *param_1,RtWeakPtrBase *param_2,RtWeakPtrBase *param_3,
               int param_4,int param_5)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (-1 < param_4) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
    if (cVar2 == '\0') {
      Set8BytesTo0((string *)aRStack_10);
      Sexy::RtId::ToString((RtId *)param_3,(string *)aRStack_10,false);
      std::string::~string((string *)aRStack_10);
    }
    else {
      lVar4 = LevelMutatorTableHelper::Find((RtWeakPtr *)aRStack_18,param_4,param_5);
      if (lVar4 != 0) {
        lVar5 = FUN_0369fb4c(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
        if (lVar5 != 0) {
          iVar3 = rand();
          uVar6 = FUN_0369fb4c(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = (ulong)(long)iVar3 / uVar6;
          }
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
          uVar7 = FUN_0369fb60(*(undefined8 *)(lVar4 + 8),(long)iVar3 - uVar1 * uVar6);
          applyGridMutator(param_1,aRStack_10,uVar7);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
        lVar5 = FUN_0369fb40(*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28));
        if (lVar5 != 0) {
          iVar3 = *(int *)(lVar4 + 0x38);
          if (iVar3 == 1) {
            cVar2 = RiftUtils::IsPlayingRiftLevel();
            if ((cVar2 != '\0') &&
               (cVar2 = RiftUtils::PlayerHasCompletedPerkProgression(), cVar2 == '\0')) {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
              addBonusChallengeModules(param_1,aRStack_10,lVar4 + 0x20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            }
          }
          else if (iVar3 == 0) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
            AddLevelModules(param_1,aRStack_10,lVar4 + 0x20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          }
          else if (iVar3 == 2) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
            addMainChallengeModules(param_1,aRStack_10,lVar4 + 0x20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

