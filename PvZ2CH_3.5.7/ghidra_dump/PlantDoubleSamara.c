// Class: PlantDoubleSamara


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDoubleSamara::StaticClassInit() */

void PlantDoubleSamara::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectedZombie");
    (*pcVar3)(plVar2,asStack_10,FUN_0421c504,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantDoubleSamara");
    (*pcVar3)(plVar2,asStack_10,FUN_0421c770,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDoubleSamara::StaticGetClass() */

long * PlantDoubleSamara::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantDoubleSamara",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDoubleSamara::GetClass() const */

long * PlantDoubleSamara::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantDoubleSamara",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDoubleSamara::Initialize() */

void __thiscall PlantDoubleSamara::Initialize(PlantDoubleSamara *this)

{
  char cVar1;
  PlantAnimRig *pPVar2;
  PopAnimRig *pPVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    pPVar2 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar2,0xe);
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_40,"attack");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDoubleSamara::PlantDoubleSamara() */

void __thiscall PlantDoubleSamara::PlantDoubleSamara(PlantDoubleSamara *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0680dfd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  this[0x40] = (PlantDoubleSamara)0x0;
  return;
}


/* PlantDoubleSamara::StaticNew() */

PlantDoubleSamara * PlantDoubleSamara::StaticNew(void)

{
  PlantDoubleSamara *this;
  
  this = ::operator_new(0x48);
  PlantDoubleSamara(this);
  return this;
}


/* PlantDoubleSamara::registerForEvents() */

void __thiscall PlantDoubleSamara::registerForEvents(PlantDoubleSamara *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieTossEnd);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PlantDoubleSamara,void(PlantDoubleSamara::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieTossEnd,&local_40);
  return;
}


/* PlantDoubleSamara::~PlantDoubleSamara() */

void __thiscall PlantDoubleSamara::~PlantDoubleSamara(PlantDoubleSamara *this)

{
  *(undefined ***)this = &PTR_GetClass_0680dfd0;
  std::vector<PlantDoubleSamara::CollectedZombie,std::allocator<PlantDoubleSamara::CollectedZombie>>
  ::~vector((vector<PlantDoubleSamara::CollectedZombie,std::allocator<PlantDoubleSamara::CollectedZombie>>
             *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDoubleSamara::~PlantDoubleSamara() */

void __thiscall PlantDoubleSamara::~PlantDoubleSamara(PlantDoubleSamara *this)

{
  ~PlantDoubleSamara(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDoubleSamara::UpdateActions() */

void __thiscall PlantDoubleSamara::UpdateActions(PlantDoubleSamara *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  ZombieTosserSubSystem *pZVar3;
  RtWeakPtr *pRVar4;
  PopAnimRig *this_01;
  ResourceInfo *pRVar5;
  long lVar6;
  float fVar7;
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') && (this[0x40] != (PlantDoubleSamara)0x0)) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x28);
    pZVar3 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    do {
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
      while( true ) {
        if (!bVar2) {
          cVar1 = std::
                  vector<PlantDoubleSamara::CollectedZombie,std::allocator<PlantDoubleSamara::CollectedZombie>>
                  ::empty((vector<PlantDoubleSamara::CollectedZombie,std::allocator<PlantDoubleSamara::CollectedZombie>>
                           *)this_00);
          if (cVar1 != '\0') {
            this_01 = (PopAnimRig *)
                      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
            cVar1 = PopAnimRig::IsPlayingAnything(this_01);
            if (cVar1 == '\0') {
              Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
            }
          }
          goto LAB_0421ced0;
        }
        fVar7 = (float)PVZ_T();
        pRVar4 = (RtWeakPtr *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
        if (fVar7 <= *(float *)(pRVar4 + 0x14)) break;
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar4);
        if (bVar2) {
          pRVar4 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
          pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar4);
          lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x41200000,0x40000000,pZVar3,pRVar5,lVar6 + 8,
                     aRStack_50,1);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
        }
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_58,(__normal_iterator *)&local_60);
        local_60 = std::
                   vector<PlantDoubleSamara::CollectedZombie,std::allocator<PlantDoubleSamara::CollectedZombie>>
                   ::erase((vector<PlantDoubleSamara::CollectedZombie,std::allocator<PlantDoubleSamara::CollectedZombie>>
                            *)this_00,local_58);
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_60,(__normal_iterator *)&local_58)
        ;
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_60);
    } while( true );
  }
LAB_0421ced0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDoubleSamara::onZombieTossEnd(Zombie*) */

void __thiscall PlantDoubleSamara::onZombieTossEnd(PlantDoubleSamara *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  SexyVector3 *pSVar7;
  long lVar8;
  BoardEntity *pBVar9;
  float fVar10;
  Zombie *pZVar11;
  undefined8 local_88;
  CollectedZombie aCStack_80 [24];
  undefined8 local_68 [12];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  CollectedZombie::CollectedZombie(aCStack_80);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aCStack_80,(RtWeakPtrBase *)local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_88 = FUN_0421cac4(uVar5,uVar6,aCStack_80);
  local_68[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)local_68);
  if (bVar1) {
    pSVar7 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    cVar2 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),pSVar7);
    if (cVar2 != '\0') {
      iVar3 = FUN_0421bba4(*(undefined4 *)(param_1 + 0x50));
      pBVar9 = *(BoardEntity **)(this + 0x10);
      iVar4 = FUN_0421bba4(*(undefined4 *)(pBVar9 + 0x50));
      if (iVar3 < iVar4) {
        Zombie::TakeFatalDamage(param_1,pBVar9);
      }
      else {
        FUN_0421bbac((RtWeakPtr<Sexy::ResourceInfo> *)local_68,pBVar9);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        FUN_0421bc84(*(undefined8 *)(lVar8 + 0x70));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
        (**(code **)(*(long *)param_1 + 0x110))(param_1,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
      if (cVar2 != '\0') {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_68,(__normal_iterator *)&local_88);
        std::
        vector<PlantDoubleSamara::CollectedZombie,std::allocator<PlantDoubleSamara::CollectedZombie>>
        ::erase((vector<PlantDoubleSamara::CollectedZombie,std::allocator<PlantDoubleSamara::CollectedZombie>>
                 *)this_00,local_68[0]);
        cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        if (cVar2 != '\0') {
          lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
          Sexy::SexyVector3::operator=((SexyVector3 *)(lVar8 + 8),pSVar7);
        }
        goto LAB_0421d108;
      }
    }
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 != '\0') {
      lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
      Sexy::SexyVector3::operator=((SexyVector3 *)(lVar8 + 8),pSVar7);
    }
    pZVar11._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar11._0_4_,0,param_1,2,1);
    Zombie::ApplyCondition(pZVar11._0_4_,0,param_1,0xe,1);
    Zombie::SetIsControlled(param_1,true);
    lVar8 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    fVar10 = (float)PVZ_T();
    *(float *)(lVar8 + 0x14) = fVar10 + 2.0;
  }
LAB_0421d108:
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aCStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDoubleSamara::CollectZombies() */

void __thiscall PlantDoubleSamara::CollectZombies(PlantDoubleSamara *this)

{
  vector<PlantDoubleSamara::CollectedZombie,std::allocator<PlantDoubleSamara::CollectedZombie>>
  *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int *piVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar7;
  ZombieTosserSubSystem *pZVar8;
  undefined8 *puVar9;
  CollectedZombie *pCVar10;
  ResourceInfo *pRVar11;
  long lVar12;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  int local_68 [2];
  SexyVector3 aSStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  this_00 = (vector<PlantDoubleSamara::CollectedZombie,std::allocator<PlantDoubleSamara::CollectedZombie>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  local_90[0] = 0;
  local_68[0] = *(int *)(*(long *)(this + 0x10) + 0x114) + -1;
  piVar6 = eastl::max_alt<int>((int *)local_90,local_68);
  iVar1 = *piVar6;
  local_90[0] = BoardConstants::NUMBER_OF_COLUMNS();
  lVar12 = *(long *)(this + 0x10);
  local_68[0] = *(int *)(lVar12 + 0x114) + 2;
  piVar6 = eastl::min_alt<int>((int *)local_90,local_68);
  iVar2 = *piVar6;
  local_90[0] = 0;
  local_68[0] = *(int *)(lVar12 + 0x110) + -1;
  piVar6 = eastl::max_alt<int>((int *)local_90,local_68);
  iVar3 = *piVar6;
  local_90[0] = BoardConstants::NUMBER_OF_ROWS();
  local_68[0] = *(int *)(*(long *)(this + 0x10) + 0x110) + 2;
  piVar6 = eastl::min_alt<int>((int *)local_90,local_68);
  Sexy::Insets::Insets((Insets *)local_90,iVar1,iVar3,iVar2 - iVar1,*piVar6 - iVar3);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,2,(Insets *)local_90);
  std::vector<PlantDoubleSamara::CollectedZombie,std::allocator<PlantDoubleSamara::CollectedZombie>>
  ::clear(this_00);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar4) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    nop();
    CollectedZombie::CollectedZombie((CollectedZombie *)local_68);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)local_68,(RtWeakPtrBase *)&local_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
    pSVar7 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    Sexy::SexyVector3::operator=(aSStack_60,pSVar7);
    cVar5 = CollectedZombie::CanBeControlled((CollectedZombie *)local_68);
    if (cVar5 != '\0') {
      std::
      vector<PlantDoubleSamara::CollectedZombie,std::allocator<PlantDoubleSamara::CollectedZombie>>
      ::push_back(this_00,(CollectedZombie *)local_68);
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  pZVar8 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  puVar9 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  local_a0 = *puVar9;
  local_98 = *(undefined4 *)(puVar9 + 1);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar4) {
    pCVar10 = (CollectedZombie *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    CollectedZombie::CollectedZombie((CollectedZombie *)local_68,pCVar10);
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
    ZombieTosserSubSystem::LaunchZombie
              ((ZombieTosserSubSystem *)0x41200000,0x3f800000,pZVar8,pRVar11,&local_a0,aRStack_50,1)
    ;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_68);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_b0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDoubleSamara::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantDoubleSamara::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator==(param_2,"collect");
  if (!bVar1) {
    uVar2 = PlantFramework::OnAnimCommand(param_1,param_2);
    return uVar2;
  }
  param_1[0x40] = (string)0x1;
  CollectZombies((PlantDoubleSamara *)param_1);
  return 1;
}

