// Class: ZombieWithPushingAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithPushingAction::StaticClassInit() */

void ZombieWithPushingAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWithPushingAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04629fa0,0x848,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWithPushingAction::StaticGetClass() */

long * ZombieWithPushingAction::StaticGetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWithPushingAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWithPushingAction::GetClass() const */

long * ZombieWithPushingAction::GetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWithPushingAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWithPushingAction::setPushingProperties(int) */

void __thiscall
ZombieWithPushingAction::setPushingProperties(ZombieWithPushingAction *this,int param_1)

{
  *(int *)(this + 0x840) = param_1;
  return;
}


/* ZombieWithPushingAction::ZombieWithPushingAction() */

void __thiscall ZombieWithPushingAction::ZombieWithPushingAction(ZombieWithPushingAction *this)

{
  ZombieWithActions::ZombieWithActions((ZombieWithActions *)this);
  *(undefined4 *)(this + 0x840) = 0;
  *(undefined ***)this = &PTR_GetClass_0687dcf0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWithPushingAction_0687e768;
  return;
}


/* ZombieWithPushingAction::StaticNew() */

ZombieWithPushingAction * ZombieWithPushingAction::StaticNew(void)

{
  ZombieWithPushingAction *this;
  
  this = ::operator_new(0x848);
  ZombieWithPushingAction(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithPushingAction::tryPush() */

void __thiscall ZombieWithPushingAction::tryPush(ZombieWithPushingAction *this)

{
  uint uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieWithActions::getBaseActionDefinition<ZombiePushGridItemActionDefinition>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  uVar1 = ZombieWithActions::tryStartAction((ZombieWithActions *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if ((uVar1 & 0xff) != 0) {
    ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ZombieWithPushingAction::updateState_Walk() */

void __thiscall ZombieWithPushingAction::updateState_Walk(ZombieWithPushingAction *this)

{
  char cVar1;
  
  cVar1 = tryPush(this);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieWithPushingAction::~ZombieWithPushingAction() */

void __thiscall ZombieWithPushingAction::~ZombieWithPushingAction(ZombieWithPushingAction *this)

{
  *(undefined ***)this = &PTR_GetClass_0687dcf0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWithPushingAction_0687e768;
  ZombieWithActions::~ZombieWithActions((ZombieWithActions *)this);
  return;
}


/* non-virtual thunk to ZombieWithPushingAction::~ZombieWithPushingAction() */

void __thiscall ZombieWithPushingAction::~ZombieWithPushingAction(ZombieWithPushingAction *this)

{
  ~ZombieWithPushingAction(this + -0x10);
  return;
}


/* ZombieWithPushingAction::~ZombieWithPushingAction() */

void __thiscall ZombieWithPushingAction::~ZombieWithPushingAction(ZombieWithPushingAction *this)

{
  ~ZombieWithPushingAction(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWithPushingAction::~ZombieWithPushingAction() */

void __thiscall ZombieWithPushingAction::~ZombieWithPushingAction(ZombieWithPushingAction *this)

{
  ~ZombieWithPushingAction(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWithPushingAction::tryToPlaceCorrectlyOnBoard() */

void __thiscall ZombieWithPushingAction::tryToPlaceCorrectlyOnBoard(ZombieWithPushingAction *this)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  code *pcVar11;
  int local_bc;
  RtWeakPtr<Sexy::SoundResource> aRStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [3];
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = NewPVPUtils::IsPlayingNewPVP();
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 0) {
    puVar9 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_68 = *puVar9;
    local_60 = *(undefined4 *)(puVar9 + 1);
    iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar4 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar4 + 1 + *(int *)(this + 0x840));
    local_68 = CONCAT44(local_68._4_4_,(float)iVar4);
    (**(code **)(*(long *)this + 0x78))(this,&local_68);
    goto LAB_0462c9ac;
  }
  ZombieWithActions::getBaseActionDefinition<ZombiePushGridItemActionDefinition>();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b8,(RtWeakPtrBase *)&local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80);
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  std::vector<int,std::allocator<int>>::reserve
            ((vector<int,std::allocator<int>> *)local_80,(long)iVar4);
  local_68._0_4_ = 0;
  while (iVar4 = BoardConstants::NUMBER_OF_ROWS(), (int)local_68 < iVar4) {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)local_80,(int *)&local_68);
    local_68._0_4_ = (int)local_68 + 1;
  }
  local_bc = 0;
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  if (local_bc < iVar4) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      EntityFinder::GetEntitiesAtGridSquare
                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,4,iVar4 + 1,local_bc);
      local_b0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_68);
      local_a8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_68);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8),
            bVar1) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
        nop();
        cVar2 = GridItemRestrictionSet::IsIncluded((GridItem *)(lVar6 + 0x38));
        if (cVar2 != '\0') {
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)local_80);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_80);
          local_a0 = std::
                     remove<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                               (uVar7,uVar8,&local_bc);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_90,(__normal_iterator *)&local_a0);
          local_98 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)local_80);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_88,(__normal_iterator *)&local_98);
          std::vector<int,std::allocator<int>>::erase
                    ((vector<int,std::allocator<int>> *)local_80,local_90,local_88);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
      local_bc = local_bc + 1;
      iVar4 = BoardConstants::NUMBER_OF_ROWS();
    } while (local_bc < iVar4);
  }
  puVar9 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uVar5 = BoardTransforms::BoardSpaceToGridY(*(float *)((long)puVar9 + 4));
  local_98 = CONCAT44(local_98._4_4_,uVar5);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_80);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_80);
  local_88 = std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                       (uVar7,uVar8,(__normal_iterator *)&local_98);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)local_80);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_88,(__normal_iterator *)&local_68);
  if (bVar1) {
    cVar2 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)local_80)
    ;
    if (cVar2 == '\0') {
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_80);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_80);
      std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                (uVar7,uVar8);
      piVar10 = (int *)FUN_04629d1c(local_80[0]);
      iVar4 = *piVar10;
      local_98 = CONCAT44(local_98._4_4_,iVar4);
      goto LAB_0462c934;
    }
    pcVar11 = *(code **)(*(long *)this + 0x120);
    Sexy::Point::Point((Point *)&local_90,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x0,(undefined4)local_88,local_88._4_4_,
               (RtWeakPtr<Sexy::ResourceInfo> *)&local_68,4,(Point *)&local_90,0);
    (*pcVar11)(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    local_98 = CONCAT44(local_98._4_4_,0xffffffff);
  }
  else {
    iVar4 = (uint)local_98;
LAB_0462c934:
    if (-1 < iVar4) {
      local_68 = *puVar9;
      local_60 = *(undefined4 *)(puVar9 + 1);
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar4 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar4 + 1 + *(int *)(this + 0x840));
      local_68 = CONCAT44(local_68._4_4_,(float)iVar4);
      iVar4 = BoardTransforms::GridToBoardSpaceYUnbounded((uint)local_98);
      local_68 = CONCAT44((float)iVar4,(int)local_68);
      (**(code **)(*(long *)this + 0x78))(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      uVar3 = ~(uint)local_98 >> 0x1f;
    }
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
LAB_0462c9ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ZombieWithPushingAction::onPlaceOnBoard() */

void __thiscall ZombieWithPushingAction::onPlaceOnBoard(ZombieWithPushingAction *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  Zombie::onPlaceOnBoard((Zombie *)this);
  cVar1 = tryToPlaceCorrectlyOnBoard(this);
  if ((cVar1 != '\0') && (0 < *(int *)(this + 0x840))) {
    iVar3 = 0;
    do {
      pcVar4 = *(code **)(*(long *)this + 0xa60);
      iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar2 = iVar2 + 1 + iVar3;
      iVar3 = iVar3 + 1;
      (*pcVar4)(this,iVar2);
    } while (iVar3 < *(int *)(this + 0x840));
  }
  return;
}

