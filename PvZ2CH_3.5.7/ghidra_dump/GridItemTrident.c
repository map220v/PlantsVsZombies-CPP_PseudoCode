// Class: GridItemTrident


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTrident::StaticClassInit() */

void GridItemTrident::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTrident");
    (*pcVar2)(plVar1,asStack_10,FUN_0374d0a8,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTrident::StaticGetClass() */

long * GridItemTrident::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemTrident",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTrident::GetClass() const */

long * GridItemTrident::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemTrident",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTrident::GridItemTrident() */

void __thiscall GridItemTrident::GridItemTrident(GridItemTrident *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_06694f70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTrident_06695228;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  return;
}


/* GridItemTrident::StaticNew() */

GridItemTrident * GridItemTrident::StaticNew(void)

{
  GridItemTrident *this;
  
  this = ::operator_new(0x1c0);
  GridItemTrident(this);
  return this;
}


/* GridItemTrident::~GridItemTrident() */

void __thiscall GridItemTrident::~GridItemTrident(GridItemTrident *this)

{
  *(undefined ***)this = &PTR_GetClass_06694f70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTrident_06695228;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemTrident::~GridItemTrident() */

void __thiscall GridItemTrident::~GridItemTrident(GridItemTrident *this)

{
  ~GridItemTrident(this + -0x10);
  return;
}


/* GridItemTrident::~GridItemTrident() */

void __thiscall GridItemTrident::~GridItemTrident(GridItemTrident *this)

{
  ~GridItemTrident(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemTrident::~GridItemTrident() */

void __thiscall GridItemTrident::~GridItemTrident(GridItemTrident *this)

{
  ~GridItemTrident(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTrident::TridentPlantEffect() */

void __thiscall GridItemTrident::TridentPlantEffect(GridItemTrident *this)

{
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  BoardTransforms *this_00;
  long lVar5;
  undefined8 *puVar6;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined4 local_70;
  undefined4 local_6c;
  string asStack_68 [8];
  RtWeakPtr aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  string asStack_48 [8];
  Vec3 aVStack_40 [16];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,local_70,
             local_6c);
  lVar5 = FUN_03724708(local_20,local_18);
  if (lVar5 != 0) {
    std::string::string(asStack_68,"POPANIM_EFFECTS_ARTIFACT_TRIDENT_EFFECT");
    nop();
    GetPAMByName(asStack_68);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)*puVar6;
      EATextSquish::Vec3::Vec3(aVStack_40,0.0,0.0,0.0);
      puVar6 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_02);
      local_30._4_4_ = (float)((ulong)*puVar6 >> 0x20);
      fVar1 = local_30._4_4_;
      local_28 = *(undefined4 *)(puVar6 + 1);
      local_30 = *puVar6;
      uVar3 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(fVar1);
      iVar4 = Board::MakeRenderOrder(0x65130,uVar3,0);
      EATextSquish::Vec3::operator+=((Vec3 *)&local_30,aVStack_40);
      this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
      Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar7,(RtClass *)0x0);
      Effect_PopAnim::SetCentered(this_01,true);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_01,(SexyVector3 *)&local_30,iVar4);
      std::string::string(asStack_48,"hd_on");
      Effect_PopAnim::PlaySingleAnimation(this_01,asStack_48,0);
      std::string::~string(asStack_48);
      nop();
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::~string(asStack_68);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTrident::BlowoffZombie() */

void __thiscall GridItemTrident::BlowoffZombie(GridItemTrident *this)

{
  ZombieTosserSubSystem *pZVar10;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  BoardTransforms *this_00;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ZombieTosserSubSystem *pZVar8;
  TridentTossSubSystem *this_01;
  int in_w4;
  Zombie *pZVar9;
  uint local_e8;
  int local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  Zombie *local_c8;
  int local_c0 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b0 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)local_e8,local_e4,1,1,in_w4);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  local_c0[0] = (int)((double)local_c0[0] - (double)iVar3 * 0.3);
  if ((local_e8 != 0xffffffff) && (local_e4 != -1)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b0);
    EntityFinder::GetEntitiesInRectangle(avStack_b0,2,local_c0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
    local_d8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_b0);
    local_d0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_b0);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_d8,(__normal_iterator *)&local_d0), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8)
      ;
      local_c8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if ((((local_c8 != (Zombie *)0x0) &&
           (cVar2 = RealObject::IsOnTeam(local_c8,1), pZVar9 = local_c8, cVar2 == '\0')) &&
          (cVar2 = FUN_0373c80c(*(undefined4 *)(local_c8 + 0xcc)), cVar2 == '\0')) &&
         ((iVar3 = Zombie::GetInvisibleState(pZVar9), iVar3 != 2 &&
          (cVar2 = (**(code **)(*(long *)local_c8 + 0x328))(local_c8), cVar2 == '\0')))) {
        iVar3 = Zombie::GetSizeType(local_c8);
        if (iVar3 == 0) {
          std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                    ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_98,&local_c8);
        }
        else if (iVar3 == 1) {
          std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                    ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_80,&local_c8);
        }
        else {
          std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                    ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_68,&local_c8);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d8);
    }
    local_d0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_c8,(__normal_iterator *)&local_d0);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_98);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_98);
    std::vector<Zombie*,std::allocator<Zombie*>>::
    insert<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,void>
              ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_80,local_c8,uVar6,uVar7);
    local_d0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_c8,(__normal_iterator *)&local_d0);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_68);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_68);
    std::vector<Zombie*,std::allocator<Zombie*>>::
    insert<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,void>
              ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_80,local_c8,uVar6,uVar7);
    iVar3 = *(int *)(this + 0x1ac);
    local_e0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_d8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_e0,(__normal_iterator *)&local_d8), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e0)
      ;
      pZVar9 = (Zombie *)*puVar5;
      if (((iVar3 < 1) || (iVar4 = Zombie::GetSizeType(pZVar9), 1 < iVar4)) ||
         ((cVar2 = (**(code **)(*(long *)pZVar9 + 0x4d8))(pZVar9), cVar2 != '\0' &&
          (((cVar2 = RealObject::IsOnTeam(pZVar9,1), cVar2 != '\0' &&
            (cVar2 = Zombie::HasCondition(pZVar9,0x82), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*(long *)pZVar9 + 0x508))(pZVar9), cVar2 != '\0')))))) {
        bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)pZVar9);
        if (((!bVar1) &&
            (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)pZVar9), !bVar1)) &&
           ((cVar2 = (**(code **)(*(long *)pZVar9 + 0x4d8))(pZVar9), cVar2 == '\0' &&
            (((cVar2 = (**(code **)(*(long *)pZVar9 + 0x508))(pZVar9), cVar2 == '\0' &&
              (cVar2 = Zombie::HasFogImmune(pZVar9), cVar2 == '\0')) &&
             ((cVar2 = Zombie::IsBerserk(pZVar9), cVar2 == '\0' &&
              (((cVar2 = (**(code **)(*(long *)pZVar9 + 0x328))(pZVar9), cVar2 == '\0' &&
                (cVar2 = (**(code **)(*(long *)pZVar9 + 0x330))(pZVar9), cVar2 == '\0')) &&
               (cVar2 = Zombie::CanBeLaunchedByPlantsExtra(pZVar9), cVar2 != '\0')))))))))) {
          pZVar8 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          uVar6 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)pZVar9);
          iVar4 = Zombie::GetSizeType(pZVar9);
          pZVar10._0_4_ = (ZombieTosserSubSystem *)0x435c0000;
          if (iVar4 == 2) {
            pZVar10._0_4_ = (ZombieTosserSubSystem *)0x43160000;
          }
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this + 0x1b8));
          std::string::string((string *)&local_c8,"DamageFlyZombie");
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,(RtId *)&local_d0,
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_c8);
          ZombieTosserSubSystem::LaunchZombie
                    (pZVar10._0_4_,0x3f800000,pZVar8,pZVar9,uVar6,aRStack_50,1);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string((string *)&local_c8);
          nop();
          Sexy::RtId::~RtId((RtId *)&local_d0);
        }
      }
      else {
        iVar3 = iVar3 + -1;
        this_01 = Board::GetGameSubSystem<TridentTossSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        TridentTossSubSystem::tossZombieOff(this_01,pZVar9);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e0);
    }
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_68);
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_80);
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_98);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_b0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTrident::setState(GridItemTridentState) */

void __thiscall GridItemTrident::setState(GridItemTrident *this,int param_2)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"water");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimation");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  else if (param_2 == 1) {
    BlowoffZombie(this);
    TridentPlantEffect(this);
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"pq");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimation");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTrident::onAnimation(std::string const&) */

void __thiscall GridItemTrident::onAnimation(GridItemTrident *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"water");
  if (bVar1) {
    setState(this,1);
    return;
  }
  bVar1 = std::operator==(param_1,"pq");
  if (!bVar1) {
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTrident::onGridItemInitialize() */

void __thiscall GridItemTrident::onGridItemInitialize(GridItemTrident *this)

{
  long lVar1;
  BoardTransforms *this_00;
  
  lVar1 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  setState(this,0);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

