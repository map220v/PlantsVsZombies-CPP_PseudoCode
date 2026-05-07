// Class: MagnetShroomSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnetShroomSubSystem::StaticClassInit() */

void MagnetShroomSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagnetShroomSubSystemOwnershipRecord");
    (*pcVar3)(plVar2,asStack_10,FUN_04205b78,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MagnetShroomSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04205fb4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagnetShroomSubSystem::StaticGetClass() */

long * MagnetShroomSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MagnetShroomSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagnetShroomSubSystem::GetClass() const */

long * MagnetShroomSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"MagnetShroomSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagnetShroomSubSystem::findIndexForEntity(BoardEntity*) const */

ulong __thiscall
MagnetShroomSubSystem::findIndexForEntity(MagnetShroomSubSystem *this,BoardEntity *param_1)

{
  char cVar1;
  MagnetShroomSubSystemOwnershipRecord *this_00;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar3 = 0;
  do {
    uVar4 = *(undefined8 *)(this + 0x10);
    uVar5 = uVar3 & 0xffffffff;
    uVar2 = FUN_04203388(uVar4,*(undefined8 *)(this + 0x18));
    if (uVar2 <= uVar3) {
      return 0xffffffff;
    }
    this_00 = (MagnetShroomSubSystemOwnershipRecord *)FUN_042033b8(uVar4,uVar3);
    uVar3 = uVar3 + 1;
    cVar1 = MagnetShroomSubSystemOwnershipRecord::ContainsEntity(this_00,param_1);
  } while (cVar1 == '\0');
  return uVar5;
}


/* MagnetShroomSubSystem::IsEntityOwned(BoardEntity*) */

uint __thiscall
MagnetShroomSubSystem::IsEntityOwned(MagnetShroomSubSystem *this,BoardEntity *param_1)

{
  uint uVar1;
  
  uVar1 = findIndexForEntity(this,param_1);
  return ~uVar1 >> 0x1f;
}


/* MagnetShroomSubSystem::findIndexForOwner(Plant*) const */

ulong __thiscall
MagnetShroomSubSystem::findIndexForOwner(MagnetShroomSubSystem *this,Plant *param_1)

{
  RtWeakPtr *this_00;
  ResourceInfo *pRVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar3 = 0;
  do {
    uVar4 = *(undefined8 *)(this + 0x10);
    uVar5 = uVar3 & 0xffffffff;
    uVar2 = FUN_04203388(uVar4,*(undefined8 *)(this + 0x18));
    if (uVar2 <= uVar3) {
      return 0xffffffff;
    }
    this_00 = (RtWeakPtr *)FUN_042033b8(uVar4,uVar3);
    uVar3 = uVar3 + 1;
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  } while (param_1 != (Plant *)pRVar1);
  return uVar5;
}


/* MagnetShroomSubSystem::MagnetShroomSubSystem() */

void __thiscall MagnetShroomSubSystem::MagnetShroomSubSystem(MagnetShroomSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068094c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* MagnetShroomSubSystem::StaticNew() */

MagnetShroomSubSystem * MagnetShroomSubSystem::StaticNew(void)

{
  MagnetShroomSubSystem *this;
  
  this = ::operator_new(0x28);
  MagnetShroomSubSystem(this);
  return this;
}


/* MagnetShroomSubSystem::~MagnetShroomSubSystem() */

void __thiscall MagnetShroomSubSystem::~MagnetShroomSubSystem(MagnetShroomSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068094c0;
  std::
  vector<MagnetShroomSubSystemOwnershipRecord,std::allocator<MagnetShroomSubSystemOwnershipRecord>>
  ::~vector((vector<MagnetShroomSubSystemOwnershipRecord,std::allocator<MagnetShroomSubSystemOwnershipRecord>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* MagnetShroomSubSystem::~MagnetShroomSubSystem() */

void __thiscall MagnetShroomSubSystem::~MagnetShroomSubSystem(MagnetShroomSubSystem *this)

{
  ~MagnetShroomSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* MagnetShroomSubSystem::ReleaseEntity(BoardEntity*) */

void __thiscall
MagnetShroomSubSystem::ReleaseEntity(MagnetShroomSubSystem *this,BoardEntity *param_1)

{
  int iVar1;
  MagnetShroomSubSystemOwnershipRecord *this_00;
  
  iVar1 = findIndexForEntity(this,param_1);
  if (-1 < iVar1) {
    this_00 = (MagnetShroomSubSystemOwnershipRecord *)FUN_042033b0(*(undefined8 *)(this + 0x10));
    MagnetShroomSubSystemOwnershipRecord::RemoveEntity(this_00,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnetShroomSubSystem::Update() */

void __thiscall MagnetShroomSubSystem::Update(MagnetShroomSubSystem *this)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  RtWeakPtr *this_00;
  RtWeakPtr *pRVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_50;
  undefined8 local_48;
  ResourceInfo *local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  uVar7 = *(undefined8 *)(this + 0x10);
  iVar4 = FUN_04203388(uVar7,*(undefined8 *)(this + 0x18));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar11 = (long)(int)uVar1 + -1;
    lVar6 = lVar11;
    lVar13 = (long)(int)uVar1;
    while( true ) {
      lVar12 = lVar6;
      this_00 = (RtWeakPtr *)FUN_042033b0(uVar7,lVar13);
      uVar7 = *(undefined8 *)(this_00 + 8);
      iVar4 = FUN_04203374(uVar7,*(undefined8 *)(this_00 + 0x10));
      uVar2 = iVar4 - 1;
      if (-1 < (int)uVar2) {
        lVar8 = (long)(int)uVar2 + -1;
        lVar6 = lVar8;
        lVar10 = (long)(int)uVar2;
        while( true ) {
          lVar9 = lVar6;
          pRVar5 = (RtWeakPtr *)FUN_04203380(uVar7,lVar10);
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar5);
          if (bVar3) {
            pRVar5 = (RtWeakPtr *)FUN_04203380(*(undefined8 *)(this_00 + 8),lVar10);
            local_40 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar5);
            std::set<BoardEntity*,std::less<BoardEntity*>,std::allocator<BoardEntity*>>::insert
                      ((set<BoardEntity*,std::less<BoardEntity*>,std::allocator<BoardEntity*>> *)
                       amStack_38,(BoardEntity **)&local_40);
          }
          else {
            local_50 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)(this_00 + 8));
            local_48 = __gnu_cxx::
                       __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                       ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                    *)&local_50,lVar10);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_40,(__normal_iterator *)&local_48);
            std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            erase((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)(this_00 + 8),local_40);
          }
          if (lVar9 == lVar8 - (ulong)uVar2) break;
          uVar7 = *(undefined8 *)(this_00 + 8);
          lVar6 = lVar9 + -1;
          lVar10 = lVar9;
        }
      }
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if ((!bVar3) ||
         (lVar6 = FUN_04203374(*(undefined8 *)(this_00 + 8),*(undefined8 *)(this_00 + 0x10)),
         lVar6 == 0)) {
        local_50 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x10));
        local_48 = __gnu_cxx::
                   __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                   ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                                *)&local_50,lVar13);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_40,(__normal_iterator *)&local_48);
        std::
        vector<MagnetShroomSubSystemOwnershipRecord,std::allocator<MagnetShroomSubSystemOwnershipRecord>>
        ::erase((vector<MagnetShroomSubSystemOwnershipRecord,std::allocator<MagnetShroomSubSystemOwnershipRecord>>
                 *)(this + 0x10),local_40);
      }
      if (lVar12 == lVar11 - (ulong)uVar1) break;
      uVar7 = *(undefined8 *)(this + 0x10);
      lVar6 = lVar12 + -1;
      lVar13 = lVar12;
    }
  }
  std::set<BoardEntity*,std::less<BoardEntity*>,std::allocator<BoardEntity*>>::~set
            ((set<BoardEntity*,std::less<BoardEntity*>,std::allocator<BoardEntity*>> *)amStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnetShroomSubSystem::ClaimEntity(Plant*, BoardEntity*) */

void __thiscall
MagnetShroomSubSystem::ClaimEntity(MagnetShroomSubSystem *this,Plant *param_1,BoardEntity *param_2)

{
  int iVar1;
  MagnetShroomSubSystemOwnershipRecord *this_00;
  long lVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = findIndexForEntity(this,param_2);
  if (-1 < iVar1) {
    this_00 = (MagnetShroomSubSystemOwnershipRecord *)FUN_042033b0(*(undefined8 *)(this + 0x10));
    MagnetShroomSubSystemOwnershipRecord::RemoveEntity(this_00,param_2);
  }
  iVar1 = findIndexForOwner(this,param_1);
  if (iVar1 < 0) {
    MagnetShroomSubSystemOwnershipRecord::MagnetShroomSubSystemOwnershipRecord
              ((MagnetShroomSubSystemOwnershipRecord *)aRStack_28,param_1);
    std::
    vector<MagnetShroomSubSystemOwnershipRecord,std::allocator<MagnetShroomSubSystemOwnershipRecord>>
    ::push_back((vector<MagnetShroomSubSystemOwnershipRecord,std::allocator<MagnetShroomSubSystemOwnershipRecord>>
                 *)(this + 0x10),(MagnetShroomSubSystemOwnershipRecord *)aRStack_28);
    MagnetShroomSubSystemOwnershipRecord::~MagnetShroomSubSystemOwnershipRecord
              ((MagnetShroomSubSystemOwnershipRecord *)aRStack_28);
    uVar3 = *(undefined8 *)(this + 0x10);
    iVar1 = FUN_04203388(uVar3,*(undefined8 *)(this + 0x18));
    iVar1 = iVar1 + -1;
  }
  else {
    uVar3 = *(undefined8 *)(this + 0x10);
  }
  lVar2 = FUN_042033b0(uVar3,(long)iVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (lVar2 + 8),(RtWeakPtr *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

