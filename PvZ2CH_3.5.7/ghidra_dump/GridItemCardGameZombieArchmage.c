// Class: GridItemCardGameZombieArchmage


/* GridItemCardGameZombieArchmage::~GridItemCardGameZombieArchmage() */

void __thiscall
GridItemCardGameZombieArchmage::~GridItemCardGameZombieArchmage
          (GridItemCardGameZombieArchmage *this)

{
  *(undefined ***)this = &PTR_GetClass_069d7e00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieArchmage_069d81b0;
  GridItemCardGameZombie::~GridItemCardGameZombie((GridItemCardGameZombie *)this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieArchmage::~GridItemCardGameZombieArchmage() */

void __thiscall
GridItemCardGameZombieArchmage::~GridItemCardGameZombieArchmage
          (GridItemCardGameZombieArchmage *this)

{
  ~GridItemCardGameZombieArchmage(this + -0x10);
  return;
}


/* GridItemCardGameZombieArchmage::~GridItemCardGameZombieArchmage() */

void __thiscall
GridItemCardGameZombieArchmage::~GridItemCardGameZombieArchmage
          (GridItemCardGameZombieArchmage *this)

{
  ~GridItemCardGameZombieArchmage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieArchmage::~GridItemCardGameZombieArchmage() */

void __thiscall
GridItemCardGameZombieArchmage::~GridItemCardGameZombieArchmage
          (GridItemCardGameZombieArchmage *this)

{
  ~GridItemCardGameZombieArchmage(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieArchmage::StaticClassInit() */

void GridItemCardGameZombieArchmage::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieArchmage");
    (*pcVar2)(plVar1,asStack_10,FUN_04e1f0f0,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieArchmage::StaticGetClass() */

long * GridItemCardGameZombieArchmage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieArchmage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieArchmage::GetClass() const */

long * GridItemCardGameZombieArchmage::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieArchmage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieArchmage::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void GridItemCardGameZombieArchmage::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"attack_action");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0x328))(param_1,*(undefined8 *)(param_1 + 0x1f8));
  }
  return;
}


/* GridItemCardGameZombieArchmage::GridItemCardGameZombieArchmage() */

void __thiscall
GridItemCardGameZombieArchmage::GridItemCardGameZombieArchmage(GridItemCardGameZombieArchmage *this)

{
  GridItemCardGameZombie::GridItemCardGameZombie((GridItemCardGameZombie *)this);
  *(undefined ***)this = &PTR_GetClass_069d7e00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieArchmage_069d81b0;
  return;
}


/* GridItemCardGameZombieArchmage::StaticNew() */

GridItemCardGameZombieArchmage * GridItemCardGameZombieArchmage::StaticNew(void)

{
  GridItemCardGameZombieArchmage *this;
  
  this = ::operator_new(0x210);
  GridItemCardGameZombieArchmage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieArchmage::Summon() */

void __thiscall GridItemCardGameZombieArchmage::Summon(GridItemCardGameZombieArchmage *this)

{
  string *psVar1;
  ZombieType *this_00;
  int iVar2;
  Board *pBVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = 0;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_10,"future_protector");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  if (0 < *(int *)(this + 0x20c)) {
    do {
      iVar2 = iVar2 + 1;
      pBVar3 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      Board::AddZombie(pBVar3,asStack_10,0xfffffffb,*(undefined4 *)(this + 0x50),0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    } while (iVar2 < *(int *)(this + 0x20c));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieArchmage::GenerateZombieActions() */

void __thiscall
GridItemCardGameZombieArchmage::GenerateZombieActions(GridItemCardGameZombieArchmage *this)

{
  ulong uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  GridItemCardGameZombieArchmageProps *pGVar5;
  GridItemCardGameZombieAction *pGVar6;
  GridItemCardGameZombieActionData *pGVar7;
  Delegate0 *pDVar8;
  ulong uVar9;
  code *pcVar10;
  GridItemCardGameZombieAction *local_78;
  undefined8 local_70;
  undefined8 local_68;
  GridItemCardGameZombieActionData aGStack_58 [32];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieArchmage::GenerateZombieActions");
  std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::clear
            ((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>> *)
             (this + 0x1e0));
  pGVar5 = GridItem::GetProps<GridItemCardGameZombieArchmageProps>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Hypnotize);
  Sexy::Delegate0::
  Delegate0<GridItemCardGameZombieArchmage,void(GridItemCardGameZombieArchmage::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Summon);
  Sexy::Delegate0::
  Delegate0<GridItemCardGameZombieArchmage,void(GridItemCardGameZombieArchmage::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  iVar4 = FUN_04e1e90c(local_70,local_68);
  uVar9 = 0;
  if (0 < iVar4) {
    do {
      pGVar6 = ::operator_new(0x70);
      GridItemCardGameZombieAction::GridItemCardGameZombieAction(pGVar6);
      pcVar10 = (code *)**(undefined8 **)pGVar6;
      local_78 = pGVar6;
      pGVar7 = (GridItemCardGameZombieActionData *)
               FUN_04e1e934(*(undefined8 *)(pGVar5 + 0x148),uVar9);
      GridItemCardGameZombieActionData::GridItemCardGameZombieActionData(aGStack_58,pGVar7);
      (*pcVar10)(pGVar6,uVar9 & 0xffffffff,aGStack_58);
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData(aGStack_58);
      pGVar6 = local_78;
      uVar1 = uVar9 + 1;
      pDVar8 = (Delegate0 *)FUN_04e1e920(local_70,uVar9);
      Sexy::Delegate0::Delegate0(aDStack_38,pDVar8);
      GridItemCardGameZombieAction::SetCallbackFunc(pGVar6,aDStack_38);
      std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::
      push_back((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>
                 *)(this + 0x1e0),&local_78);
      uVar9 = uVar1;
    } while ((int)uVar1 < iVar4);
  }
  cVar3 = CardGameUtils::IsHardMode();
  uVar2 = *(undefined4 *)(pGVar5 + 0x164);
  if (cVar3 == '\0') {
    uVar2 = *(undefined4 *)(pGVar5 + 0x160);
  }
  *(undefined4 *)(this + 0x208) = uVar2;
  cVar3 = CardGameUtils::IsHardMode();
  uVar2 = *(undefined4 *)(pGVar5 + 0x16c);
  if (cVar3 == '\0') {
    uVar2 = *(undefined4 *)(pGVar5 + 0x168);
  }
  *(undefined4 *)(this + 0x20c) = uVar2;
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::~vector
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieArchmage::FindTargets() */

void __thiscall GridItemCardGameZombieArchmage::FindTargets(GridItemCardGameZombieArchmage *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  undefined8 uVar7;
  undefined8 uVar8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtObject *this_01;
  undefined8 local_80;
  undefined8 local_78;
  Zombie *local_70;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  EntityFinder::GetEntities(avStack_68,2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    this_01 = (RtObject *)*puVar6;
    if ((this_01 != (RtObject *)0x0) && (cVar1 = RealObject::IsOnTeam(this_01,1), cVar1 != '\0')) {
      this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
      iVar3 = Zombie::GetSizeType(this_00);
      if (iVar3 == 2) {
        local_70 = this_00;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,
                   (BoardEntity **)&local_70);
      }
      else {
        iVar3 = Zombie::GetSizeType(this_00);
        if (iVar3 == 1) {
          local_70 = this_00;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,
                     (BoardEntity **)&local_70);
        }
        else {
          iVar3 = Zombie::GetSizeType(this_00);
          if (iVar3 == 0) {
            local_70 = this_00;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,
                       (BoardEntity **)&local_70);
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  iVar3 = FUN_04e1e93c(local_50,local_48);
  iVar4 = FUN_04e1e93c(local_38,local_30);
  iVar5 = FUN_04e1e93c(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::reserve
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,
             (long)(iVar3 + iVar4 + iVar5));
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)in_x8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_70,(__normal_iterator *)&local_78);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           *)&local_50);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         *)&local_50);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
  insert<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
            ();
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)in_x8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_70,(__normal_iterator *)&local_78);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           *)&local_38);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         *)&local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
  insert<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
            ();
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)in_x8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_70,(__normal_iterator *)&local_78);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           *)&local_20);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::
  insert<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,void>
            ();
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)in_x8);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)in_x8);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,bool(*)(BoardEntity_const*,BoardEntity_const*)>
            (uVar7,uVar8,sortByHitpoint);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieArchmage::Hypnotize() */

void __thiscall GridItemCardGameZombieArchmage::Hypnotize(GridItemCardGameZombieArchmage *this)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  long lVar7;
  Zombie *pZVar8;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargets(this);
  uVar4 = local_20;
  local_24 = FUN_04e1e93c(local_20,local_18);
  piVar3 = eastl::min_alt<int>(&local_24,(int *)(this + 0x208));
  iVar2 = *piVar3;
  if (0 < iVar2) {
    pZVar8._0_4_ = (Zombie *)PVZ_EOT();
    lVar7 = 0;
    do {
      lVar1 = lVar7 + 1;
      puVar5 = (undefined8 *)FUN_04e1e948(uVar4,lVar7);
      pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      Zombie::SetFacing(pZVar6,0);
      Zombie::ApplyCondition(pZVar8._0_4_,0,pZVar6,0x19,1);
      RealObject::JoinTeam((RealObject *)pZVar6,2);
      uVar4 = local_20;
      lVar7 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

