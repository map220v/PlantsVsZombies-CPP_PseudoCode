// Class: ZombossSteamFireActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamFireActionDefinition::StaticClassInit() */

void ZombossSteamFireActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamFireActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_03c49ae4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamFireActionDefinition::StaticGetClass() */

long * ZombossSteamFireActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombossFireActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamFireActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamFireActionDefinition::GetClass() const */

long * ZombossSteamFireActionDefinition::GetClass(void)

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
  uVar2 = ZombossFireActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamFireActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamFireActionDefinition::ZombossSteamFireActionDefinition() */

void __thiscall
ZombossSteamFireActionDefinition::ZombossSteamFireActionDefinition
          (ZombossSteamFireActionDefinition *this)

{
  ZombossFireActionDefinition::ZombossFireActionDefinition((ZombossFireActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_067524a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  return;
}


/* ZombossSteamFireActionDefinition::StaticNew() */

ZombossSteamFireActionDefinition * ZombossSteamFireActionDefinition::StaticNew(void)

{
  ZombossSteamFireActionDefinition *this;
  
  this = ::operator_new(0x78);
  ZombossSteamFireActionDefinition(this);
  return this;
}


/* ZombossSteamFireActionDefinition::~ZombossSteamFireActionDefinition() */

void __thiscall
ZombossSteamFireActionDefinition::~ZombossSteamFireActionDefinition
          (ZombossSteamFireActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_067524a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  ZombossFireActionDefinition::~ZombossFireActionDefinition((ZombossFireActionDefinition *)this);
  return;
}


/* ZombossSteamFireActionDefinition::~ZombossSteamFireActionDefinition() */

void __thiscall
ZombossSteamFireActionDefinition::~ZombossSteamFireActionDefinition
          (ZombossSteamFireActionDefinition *this)

{
  ~ZombossSteamFireActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamFireActionDefinition::HasEnoughTargets() const */

void __thiscall
ZombossSteamFireActionDefinition::HasEnoughTargets(ZombossSteamFireActionDefinition *this)

{
  ulong uVar1;
  float fVar2;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
  uVar1 = FUN_03c3ed5c(local_20,local_18);
  fVar2 = *(float *)(this + 0x6c);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2 <= (float)uVar1);
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03c4f51c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSteamFireActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossSteamFireActionDefinition::TryStartAction
          (ZombossSteamFireActionDefinition *this,RtWeakPtrBase *param_2,RtObject *param_3)

{
  bool bVar1;
  ZombieZombossMech *pZVar2;
  ZombieWithActions *pZVar3;
  ZombossSteamJumpActionHandler *this_00;
  ZombieWithActions *extraout_x0;
  ZombossSteamFireActionHandler *this_01;
  ZombieHydraHeadAnimRig *pZVar4;
  long extraout_x0_00;
  code *pcVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pcVar5 = *(code **)(*(long *)this + 0x90);
  if (param_3 == (RtObject *)0x0) {
    pZVar2 = (ZombieZombossMech *)0x0;
  }
  else {
    pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech>(param_3);
  }
  pZVar3 = (ZombieWithActions *)(*pcVar5)(this,pZVar2,avStack_20);
  bVar1 = ((ulong)pZVar3 & 0xff) != 0;
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)(this + 0x70));
    this_00 = ZombieWithActions::QueueAction<ZombossSteamJumpActionHandler>(pZVar3,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    nop();
    ZombossJumpActionHandler::SetJumpTarget
              ((ZombossJumpActionHandler *)this_00,(Point *)(extraout_x0 + 0x44));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_2);
    this_01 = ZombieWithActions::QueueAction<ZombossSteamFireActionHandler>(extraout_x0,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    ZombossFireActionHandler::SetRocketTargets
              ((ZombossFireActionHandler *)this_01,(vector *)avStack_20);
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_3);
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    nop();
    FUN_03c3ed20(pZVar4 + 0x240,(int)*(float *)(extraout_x0_00 + 0x6c));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamFireActionDefinition::pickRocketTargets(ZombieZombossMech*, std::vector<Sexy::Point,
   std::allocator<Sexy::Point> >&) const */

void __thiscall
ZombossSteamFireActionDefinition::pickRocketTargets
          (ZombossSteamFireActionDefinition *this,ZombieZombossMech *param_1,vector *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Point *pPVar11;
  TPoint *pTVar12;
  ulong uVar13;
  float fVar14;
  int local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  Insets aIStack_e0 [4];
  int local_dc;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  Delegate1wRet<bool,Sexy::Point_const&> aDStack_b8 [48];
  undefined8 local_88 [6];
  Delegate1wRet<bool,Sexy::Point_const&> aDStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(aIStack_e0,*(int *)(this + 0x38),local_f4 + -1,*(int *)(this + 0x3c) + 1,2);
  local_dc = local_dc - *(int *)(this + 0x40);
  local_d4 = local_d4 + *(int *)(this + 0x40) * 2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0);
  uVar1 = *(undefined4 *)(this + 0x44);
  local_88[0] = std::
                __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                          ((TaskResource **)FUN_03c492bc);
  Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet<bool(*)(Sexy::Point_const&)>
            (aDStack_b8,(CBFunctionTranslatorX *)local_88);
  FUN_03c46bc4(aDStack_58,1,uVar1,aDStack_b8);
  FUN_03c5038c((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0,aDStack_58
              );
  FUN_03c4937c(aDStack_58);
  cVar2 = HasEnoughTargets(this);
  if (cVar2 == '\0') {
    uVar1 = *(undefined4 *)(this + 0x48);
    local_88[0] = std::
                  __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                            ((TaskResource **)FUN_03c491f4);
    Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet<bool(*)(Sexy::Point_const&)>
              (aDStack_b8,(CBFunctionTranslatorX *)local_88);
    FUN_03c46bc4(aDStack_58,0,uVar1,aDStack_b8);
    FUN_03c5038c((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0,
                 aDStack_58);
    FUN_03c4937c(aDStack_58);
  }
  uVar13 = 0;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_88);
  uVar9 = local_d0;
  lVar4 = FUN_03c3ead0(local_d0,local_c8);
  if (lVar4 != 0) {
    do {
      lVar4 = FUN_03c3eae4(uVar9,uVar13);
      Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet
                (aDStack_58,(Delegate1wRet *)(lVar4 + 8));
      ZombossFireActionDefinition::getRocketTargetSquaresInRect
                ((ZombossFireActionDefinition *)this,param_1,aIStack_e0,lVar4 + 0x38,aDStack_58);
      uVar9 = local_d0;
      lVar4 = FUN_03c3eae4(local_d0,uVar13);
      lVar5 = FUN_03c3ed48(*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x40));
      if (lVar5 != 0) {
        ProbabilitySet<int>::AddItem
                  ((ProbabilitySet<int> *)local_88,(int)uVar13,*(int *)(lVar4 + 4));
        uVar9 = local_d0;
      }
      uVar13 = uVar13 + 1;
      uVar6 = FUN_03c3ead0(uVar9,local_c8);
    } while (uVar13 < uVar6);
  }
  local_f0 = CONCAT44(local_f0._4_4_,0x3f800000);
  local_e8 = ValueRange::GetRandomValue((ValueRange *)(this + 0x68));
  pfVar7 = eastl::max_alt<float>((float *)&local_f0,(float *)&local_e8);
  fVar14 = *pfVar7;
  lVar4 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)local_88);
  if (lVar4 != 0) {
    iVar3 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)local_88);
    piVar8 = (int *)FUN_03c3eae4(local_d0,(long)iVar3);
    if (*piVar8 == 2) {
      iVar3 = FUN_03c3ed48(*(undefined8 *)(piVar8 + 0xe),*(undefined8 *)(piVar8 + 0x10));
      iVar3 = Sexy::Rand(iVar3);
      pTVar12 = (TPoint *)FUN_03c3ed54(*(undefined8 *)(piVar8 + 0xe),(long)iVar3);
      Sexy::Point::Point((Point *)&local_e8,pTVar12);
      ZombossFireActionDefinition::pickRocketRailTargets
                ((ZombossFireActionDefinition *)this,param_2,
                 (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_e8);
    }
    else {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(piVar8 + 0xe);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
      FUN_03c50ba8(uVar9,uVar10);
      if (0 < (int)fVar14) {
        iVar3 = 0;
        do {
          uVar9 = *(undefined8 *)(piVar8 + 0xe);
          lVar4 = FUN_03c3ed48(uVar9,*(undefined8 *)(piVar8 + 0x10));
          if (lVar4 == 0) break;
          iVar3 = iVar3 + 1;
          pPVar11 = (Point *)FUN_03c3ed54(uVar9,0);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_2,pPVar11);
          local_f0 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_00);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_e8,(__normal_iterator *)&local_f0);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::erase
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,
                     CONCAT44(uStack_e4,local_e8));
        } while (iVar3 != (int)fVar14);
      }
    }
  }
  lVar4 = FUN_03c3ed48(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)local_88);
  FUN_03c493d0((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4 != 0);
  }
  return;
}

