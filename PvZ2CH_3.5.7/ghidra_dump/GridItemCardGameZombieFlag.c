// Class: GridItemCardGameZombieFlag


/* GridItemCardGameZombieFlag::PlayAttackAnim() */

void __thiscall GridItemCardGameZombieFlag::PlayAttackAnim(GridItemCardGameZombieFlag *this)

{
  GridItemCardGameZombie::PlayAttackAnim();
  if (*(long *)(this + 0x1f8) != 0) {
    (**(code **)(*(long *)this + 0x328))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieFlag::StaticClassInit() */

void GridItemCardGameZombieFlag::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieFlag");
    (*pcVar2)(plVar1,asStack_10,FUN_04e1cc84,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieFlag::StaticGetClass() */

long * GridItemCardGameZombieFlag::StaticGetClass(void)

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
  uVar2 = GridItemCardGameZombie::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieFlag",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieFlag::GetClass() const */

long * GridItemCardGameZombieFlag::GetClass(void)

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
  uVar2 = GridItemCardGameZombie::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieFlag",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieFlag::findTargets() */

void __thiscall GridItemCardGameZombieFlag::findTargets(GridItemCardGameZombieFlag *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  EntityFinder::GetEntities();
  return;
}


/* GridItemCardGameZombieFlag::GridItemCardGameZombieFlag() */

void __thiscall
GridItemCardGameZombieFlag::GridItemCardGameZombieFlag(GridItemCardGameZombieFlag *this)

{
  GridItemCardGameZombie::GridItemCardGameZombie((GridItemCardGameZombie *)this);
  *(undefined ***)this = &PTR_GetClass_069d7510;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieFlag_069d78d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  *(undefined4 *)(this + 0x208) = 1;
  *(undefined4 *)(this + 0x20c) = 1;
  return;
}


/* GridItemCardGameZombieFlag::StaticNew() */

GridItemCardGameZombieFlag * GridItemCardGameZombieFlag::StaticNew(void)

{
  GridItemCardGameZombieFlag *this;
  
  this = ::operator_new(0x228);
  GridItemCardGameZombieFlag(this);
  return this;
}


/* GridItemCardGameZombieFlag::~GridItemCardGameZombieFlag() */

void __thiscall
GridItemCardGameZombieFlag::~GridItemCardGameZombieFlag(GridItemCardGameZombieFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_069d7510;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieFlag_069d78d0;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x210));
  GridItemCardGameZombie::~GridItemCardGameZombie((GridItemCardGameZombie *)this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieFlag::~GridItemCardGameZombieFlag() */

void __thiscall
GridItemCardGameZombieFlag::~GridItemCardGameZombieFlag(GridItemCardGameZombieFlag *this)

{
  ~GridItemCardGameZombieFlag(this + -0x10);
  return;
}


/* GridItemCardGameZombieFlag::~GridItemCardGameZombieFlag() */

void __thiscall
GridItemCardGameZombieFlag::~GridItemCardGameZombieFlag(GridItemCardGameZombieFlag *this)

{
  ~GridItemCardGameZombieFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieFlag::~GridItemCardGameZombieFlag() */

void __thiscall
GridItemCardGameZombieFlag::~GridItemCardGameZombieFlag(GridItemCardGameZombieFlag *this)

{
  ~GridItemCardGameZombieFlag(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieFlag::BuffZombies() */

void __thiscall GridItemCardGameZombieFlag::BuffZombies(GridItemCardGameZombieFlag *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  GridItemCardGameZombieFlagProps *pGVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  BoardEntity *this_01;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  findTargets(this);
  pGVar4 = GridItem::GetProps<GridItemCardGameZombieFlagProps>();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_01 = (BoardEntity *)*puVar5;
    if ((this_01 != (BoardEntity *)0x0) && (cVar1 = RealObject::IsOnTeam(this_01,2), cVar1 != '\0'))
    {
      iVar3 = FUN_04e1c964(*(undefined4 *)(this_01 + 0x50));
      BoardEntity::LevelUp(this_01,iVar3 + *(int *)(pGVar4 + 0x180));
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_01);
      if (this_00 != (Zombie *)0x0) {
        (**(code **)(*(long *)this_00 + 0x358))(*(undefined4 *)(pGVar4 + 0x188));
        Zombie::SetDpsScale(this_00,*(float *)(pGVar4 + 0x184));
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
/* GridItemCardGameZombieFlag::SummonZombie() */

void __thiscall GridItemCardGameZombieFlag::SummonZombie(GridItemCardGameZombieFlag *this)

{
  int iVar1;
  undefined4 uVar2;
  GridItemCardGameZombieFlagProps *pGVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  string *psVar7;
  ZombieType *this_00;
  undefined4 *puVar8;
  int iVar9;
  Board *pBVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48 [3];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar3 = GridItem::GetProps<GridItemCardGameZombieFlagProps>();
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_60,(vector *)(pGVar3 + 0x160)
            );
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_60);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_60);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            (uVar4,uVar5);
  lVar6 = FUN_04e1c998(local_60,local_58);
  if (lVar6 != 0) {
    psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_04e1c9a4(local_60,0);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar7);
    this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    ZombieType::EnsureResourceGroupsLoaded(this_00);
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)local_48,&DAT_05755cd0,3,
               (SpawnZombieParams *)&local_30);
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_2c = 0;
    iVar1 = *(int *)(this + 0x208);
    local_30 = *(undefined4 *)(this + 0x50);
    local_2b = 0;
    if (0 < iVar1) {
      lVar6 = 0;
      do {
        pBVar10 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_70);
        puVar8 = (undefined4 *)FUN_04e1c9ac(local_48[0],lVar6);
        Board::AddZombieInRow
                  (pBVar10,aRStack_68,*puVar8,0xfffffffb,(SpawnZombieParams *)&local_30,1,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        iVar1 = *(int *)(this + 0x208);
        iVar9 = (int)lVar6;
        lVar6 = lVar6 + 1;
      } while (iVar9 + 1 < iVar1);
    }
    uVar2 = ClampInt(iVar1 + 1,1,*(int *)(this + 0x20c));
    *(undefined4 *)(this + 0x208) = uVar2;
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieFlag::GenerateZombieActions() */

void __thiscall GridItemCardGameZombieFlag::GenerateZombieActions(GridItemCardGameZombieFlag *this)

{
  ulong uVar1;
  int iVar2;
  GridItemCardGameZombieFlagProps *pGVar3;
  GridItemCardGameZombieAction *pGVar4;
  GridItemCardGameZombieActionData *pGVar5;
  Delegate0 *pDVar6;
  ulong uVar7;
  code *pcVar8;
  GridItemCardGameZombieAction *local_78;
  undefined8 local_70;
  undefined8 local_68;
  GridItemCardGameZombieActionData aGStack_58 [32];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieFlag::GenerateZombieActions");
  std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::clear
            ((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>> *)
             (this + 0x1e0));
  pGVar3 = GridItem::GetProps<GridItemCardGameZombieFlagProps>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x3a0);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombieFlag,void(GridItemCardGameZombieFlag::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x3a8);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombieFlag,void(GridItemCardGameZombieFlag::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  iVar2 = FUN_04e1c968(local_70,local_68);
  uVar7 = 0;
  if (0 < iVar2) {
    do {
      pGVar4 = ::operator_new(0x70);
      GridItemCardGameZombieAction::GridItemCardGameZombieAction(pGVar4);
      pcVar8 = (code *)**(undefined8 **)pGVar4;
      local_78 = pGVar4;
      pGVar5 = (GridItemCardGameZombieActionData *)
               FUN_04e1c990(*(undefined8 *)(pGVar3 + 0x148),uVar7);
      GridItemCardGameZombieActionData::GridItemCardGameZombieActionData(aGStack_58,pGVar5);
      (*pcVar8)(pGVar4,uVar7 & 0xffffffff,aGStack_58);
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData(aGStack_58);
      pGVar4 = local_78;
      uVar1 = uVar7 + 1;
      pDVar6 = (Delegate0 *)FUN_04e1c97c(local_70,uVar7);
      Sexy::Delegate0::Delegate0(aDStack_38,pDVar6);
      GridItemCardGameZombieAction::SetCallbackFunc(pGVar4,aDStack_38);
      std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::
      push_back((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>
                 *)(this + 0x1e0),&local_78);
      uVar7 = uVar1;
    } while ((int)uVar1 < iVar2);
  }
  *(undefined4 *)(this + 0x20c) = *(undefined4 *)(pGVar3 + 0x178);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::~vector
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

