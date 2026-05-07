// Class: ZombieChickenSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChickenSubsystem::StaticClassInit() */

void ZombieChickenSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"Chickening");
    (*pcVar3)(plVar2,asStack_10,FUN_046f145c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieChickenSubsystem");
    (*pcVar3)(plVar2,asStack_10,FUN_046f1fe0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieChickenSubsystem::StaticGetClass() */

long * ZombieChickenSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieChickenSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieChickenSubsystem::GetClass() const */

long * ZombieChickenSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieChickenSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieChickenSubsystem::ZombieChickenSubsystem() */

void __thiscall ZombieChickenSubsystem::ZombieChickenSubsystem(ZombieChickenSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068b7db0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = 1;
  return;
}


/* ZombieChickenSubsystem::StaticNew() */

ZombieChickenSubsystem * ZombieChickenSubsystem::StaticNew(void)

{
  ZombieChickenSubsystem *this;
  
  this = ::operator_new(0x30);
  ZombieChickenSubsystem(this);
  return this;
}


/* ZombieChickenSubsystem::StopAllChickening() */

void __thiscall ZombieChickenSubsystem::StopAllChickening(ZombieChickenSubsystem *this)

{
  std::vector<Chickening,std::allocator<Chickening>>::clear
            ((vector<Chickening,std::allocator<Chickening>> *)(this + 0x10));
  return;
}


/* ZombieChickenSubsystem::~ZombieChickenSubsystem() */

void __thiscall ZombieChickenSubsystem::~ZombieChickenSubsystem(ZombieChickenSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068b7db0;
  std::vector<Chickening,std::allocator<Chickening>>::~vector
            ((vector<Chickening,std::allocator<Chickening>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombieChickenSubsystem::~ZombieChickenSubsystem() */

void __thiscall ZombieChickenSubsystem::~ZombieChickenSubsystem(ZombieChickenSubsystem *this)

{
  ~ZombieChickenSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChickenSubsystem::Update() */

void __thiscall ZombieChickenSubsystem::Update(ZombieChickenSubsystem *this)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar8 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_046f0f50(uVar8,*(undefined8 *)(this + 0x18));
  uVar1 = iVar4 - 1;
  if ((int)uVar1 < 0) {
LAB_046f2818:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar9 = (long)(int)uVar1 + -1;
  lVar2 = lVar9;
  lVar11 = (long)(int)uVar1;
  do {
    lVar10 = lVar2;
    piVar6 = (int *)FUN_046f0f78(uVar8,lVar11);
    fVar13 = (float)PVZ_T();
    if ((float)piVar6[3] < fVar13) {
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x10));
      local_18 = __gnu_cxx::
                 __normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
                 ::operator+((__normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
                              *)&local_20,lVar11);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Chickening,std::allocator<Chickening>>::erase
                ((vector<Chickening,std::allocator<Chickening>> *)(this + 0x10),local_10);
    }
    else {
      fVar13 = (float)PVZ_T();
      if ((float)piVar6[2] < fVar13) {
        cVar3 = NewPVPUtils::IsPlayingNewPVP();
        if (cVar3 == '\0') {
          if ((char)piVar6[0xd] == '\0') {
            iVar4 = *piVar6;
            iVar5 = Sexy::Rand(3);
            iVar4 = ClampInt(iVar4 + iVar5 + -1,0,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1)
            ;
            goto LAB_046f27a4;
          }
          if (*(SharkMinion **)(piVar6 + 0xe) != (SharkMinion *)0x0) {
            iVar4 = SharkMinion::getRow(*(SharkMinion **)(piVar6 + 0xe));
            cVar3 = (char)piVar6[0xd];
            pcVar12 = *(code **)(*(long *)this + 0x98);
            goto joined_r0x046f2878;
          }
          iVar4 = *piVar6;
          pcVar12 = *(code **)(*(long *)this + 0x98);
LAB_046f28f8:
          fVar13 = (float)piVar6[1];
        }
        else {
          iVar4 = *piVar6;
LAB_046f27a4:
          cVar3 = (char)piVar6[0xd];
          pcVar12 = *(code **)(*(long *)this + 0x98);
joined_r0x046f2878:
          if (cVar3 == '\0') {
            iVar5 = piVar6[1];
            fVar13 = (float)Sexy::Rand(30.0);
            fVar13 = (float)iVar5 + 20.0 + fVar13;
          }
          else {
            if (*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(piVar6 + 0xe) ==
                (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0) goto LAB_046f28f8;
            pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                              **)(piVar6 + 0xe));
            fVar13 = *pfVar7;
          }
        }
        (*pcVar12)(fVar13,this,piVar6 + 6,iVar4,piVar6[4],piVar6[0xc],*(undefined4 *)(this + 0x28));
        fVar13 = (float)PVZ_T();
        fVar15 = (float)piVar6[10];
        fVar14 = (float)Sexy::Rand((float)piVar6[0xb]);
        piVar6[2] = (int)(fVar13 + fVar14 + fVar15);
      }
    }
    if (lVar10 == lVar9 - (ulong)uVar1) goto LAB_046f2818;
    uVar8 = *(undefined8 *)(this + 0x10);
    lVar2 = lVar10 + -1;
    lVar11 = lVar10;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChickenSubsystem::Remove(Zombie*) */

void __thiscall ZombieChickenSubsystem::Remove(ZombieChickenSubsystem *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_046f1e44(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<Chickening,std::allocator<Chickening>>::erase
              ((vector<Chickening,std::allocator<Chickening>> *)this_00,local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChickenSubsystem::spawnChicken(std::string const&, float, int, TeamFlags, ZombieConditions,
   int) */

void __thiscall
ZombieChickenSubsystem::spawnChicken
          (undefined4 param_2,undefined8 param_2_00,string *param_1,undefined8 param_4,int param_5,
          int param_6,undefined4 param_7)

{
  string *psVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 *puVar2;
  Board *pBVar3;
  Zombie *pZVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_2b = 1;
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  local_30 = param_7;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Board::AddZombieInRow
                      (pBVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_40,param_4,0xfffffffb,
                       (SpawnZombieParams *)&local_30,1,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this);
  local_38 = *(undefined4 *)(puVar2 + 1);
  _local_40 = CONCAT44((int)((ulong)*puVar2 >> 0x20),param_2);
  (**(code **)(*(long *)this + 0x78))(this,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
  RealObject::JoinTeam((RealObject *)this,param_5);
  Zombie::SetFacing((Zombie *)this,param_5 == 1);
  FUN_046f1094(this + 0x59b);
  if (param_6 != -1) {
    pZVar4 = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar4,0,this,param_6,1);
  }
  std::operator==(param_1,"iceage_weasel");
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieChickenSubsystem::StartChickening(std::string const&, float, int, TeamFlags, float, float,
   float, float, ZombieConditions, int, bool, bool, Zombie*) */

void __thiscall
ZombieChickenSubsystem::StartChickening
          (float param_2,float param_2_00,float param_3_00,undefined4 param_4,undefined4 param_5,
          ZombieChickenSubsystem *this,undefined8 param_1,undefined4 param_3,undefined4 param_9,
          undefined4 param_10,undefined4 param_11,char param_12,undefined1 param_13,
          undefined8 param_14)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined1 auStack_30 [8];
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::SharedRenderTarget::Pool::Entry::Entry((Entry *)&local_48);
  local_44 = (int)param_2;
  local_48 = param_3;
  local_40 = PVZ_T();
  fVar2 = (float)PVZ_T();
  fVar3 = (float)Sexy::Rand(param_3_00);
  local_3c = fVar2 + fVar3 + param_2_00;
  local_38 = param_9;
  thunk_FUN_05475e00(auStack_30,param_1);
  local_10 = param_14;
  local_28 = param_2_00;
  local_24 = param_3_00;
  local_20 = param_4;
  local_1c = param_5;
  local_18 = param_10;
  local_14 = param_13;
  std::vector<Chickening,std::allocator<Chickening>>::push_back
            ((vector<Chickening,std::allocator<Chickening>> *)(this + 0x10),(Chickening *)&local_48)
  ;
  *(undefined4 *)(this + 0x28) = param_11;
  if (param_12 != '\0') {
    pcVar1 = *(code **)(*(long *)this + 0x98);
    fVar2 = (float)Sexy::Rand(30.0);
    (*pcVar1)(param_2 + 20.0 + fVar2,this,param_1,param_3,param_9,param_10,param_11);
    pcVar1 = *(code **)(*(long *)this + 0x98);
    fVar2 = (float)Sexy::Rand(30.0);
    (*pcVar1)((param_2 - 20.0) - fVar2,this,param_1,param_3,param_9,param_10,param_11);
  }
  Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)&local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

