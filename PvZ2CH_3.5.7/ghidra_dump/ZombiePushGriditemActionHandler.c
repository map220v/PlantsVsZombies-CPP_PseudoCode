// Class: ZombiePushGriditemActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePushGriditemActionHandler::StaticClassInit() */

void ZombiePushGriditemActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"PushInProgress");
    (*pcVar3)(plVar2,asStack_10,FUN_0462c1ec,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombiePushGriditemActionHandler");
    (*pcVar3)(plVar2,asStack_10,FUN_0462ac14,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePushGriditemActionHandler::StaticGetClass() */

long * ZombiePushGriditemActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePushGriditemActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePushGriditemActionHandler::GetClass() const */

long * ZombiePushGriditemActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePushGriditemActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePushGriditemActionHandler::ZombiePushGriditemActionHandler() */

void __thiscall
ZombiePushGriditemActionHandler::ZombiePushGriditemActionHandler
          (ZombiePushGriditemActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  this[0x21] = (ZombiePushGriditemActionHandler)0x0;
  *(undefined ***)this = &PTR_GetClass_0687e840;
  return;
}


/* ZombiePushGriditemActionHandler::StaticNew() */

ZombiePushGriditemActionHandler * ZombiePushGriditemActionHandler::StaticNew(void)

{
  ZombiePushGriditemActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombiePushGriditemActionHandler(this);
  return this;
}


/* ZombiePushGriditemActionHandler::~ZombiePushGriditemActionHandler() */

void __thiscall
ZombiePushGriditemActionHandler::~ZombiePushGriditemActionHandler
          (ZombiePushGriditemActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_0687e840;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombiePushGriditemActionHandler::~ZombiePushGriditemActionHandler() */

void __thiscall
ZombiePushGriditemActionHandler::~ZombiePushGriditemActionHandler
          (ZombiePushGriditemActionHandler *this)

{
  ~ZombiePushGriditemActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombiePushGriditemActionHandler::haltAction() */

void __thiscall ZombiePushGriditemActionHandler::haltAction(ZombiePushGriditemActionHandler *this)

{
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar1;
  
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  (**(code **)(*(long *)pZVar1 + 0x270))();
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  return;
}


/* ZombiePushGriditemActionHandler::onAnimationDone(std::string const&) */

void ZombiePushGriditemActionHandler::onAnimationDone(string *param_1)

{
  param_1[0x21] = (string)0x0;
  haltAction((ZombiePushGriditemActionHandler *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePushGriditemActionHandler::onStartAction() */

void __thiscall
ZombiePushGriditemActionHandler::onStartAction(ZombiePushGriditemActionHandler *this)

{
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x268);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePushGriditemActionHandler::beginPushing(GridItem*) */

void __thiscall
ZombiePushGriditemActionHandler::beginPushing
          (ZombiePushGriditemActionHandler *this,GridItem *param_1)

{
  char cVar1;
  bool bVar2;
  ZombiePushGridItemActionDefinition *this_00;
  Zombie *pZVar3;
  long lVar4;
  RtWeakPtr *this_01;
  undefined8 *puVar5;
  GridItemBoardEntityConditionTarget *pGVar6;
  RtObject *pRVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  reverse_iterator<__gnu_cxx::__normal_iterator<ZombiePushGriditemActionHandler::PushInProgress*,std::vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>>>
  arStack_c8 [8];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  Point aPStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  pZVar3 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  cVar1 = ZombiePushGridItemActionDefinition::CanPushGridItem(this_00,pZVar3,param_1);
  if (cVar1 != '\0') {
    this[0x21] = (ZombiePushGriditemActionHandler)0x1;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
    do {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)&local_a0);
      PushInProgress::PushInProgress((PushInProgress *)aRStack_68,aRStack_80);
      std::
      vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
      ::push_back((vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
                   *)avStack_98,(PushInProgress *)aRStack_68);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
      auVar9 = std::vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>
               ::back((vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>
                       *)avStack_98);
      BoardTransforms::BoardSpaceToGridUnbounded
                ((BoardTransforms *)(auVar9._0_8_ + 0x14),auVar9._8_8_);
      lVar4 = ZombiePushGridItemActionDefinition::FindGriditemAt(this_00,(Point *)aRStack_68);
    } while (lVar4 != 0);
    std::
    vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
    ::rbegin();
    std::
    vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
    ::rend();
    bVar2 = std::operator!=(arStack_c8,aRStack_68);
    if (bVar2) {
      do {
        auVar9 = std::
                 reverse_iterator<__gnu_cxx::__normal_iterator<ZombiePushGriditemActionHandler::PushInProgress*,std::vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>>>
                 ::operator*(arStack_c8);
        this_01 = auVar9._0_8_;
        BoardTransforms::BoardSpaceToGridUnbounded((BoardTransforms *)(this_01 + 0x14),auVar9._8_8_)
        ;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_80);
        EntityFinder::GetEntitiesAtGridSquare(aRStack_80,1,local_c0,local_bc);
        local_b8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aRStack_80);
        local_b0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_80);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0),
              bVar2) {
          puVar5 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
          pRVar7 = (RtObject *)*puVar5;
          bVar2 = Sexy::RtObject::IsA<Plant>(pRVar7);
          if (bVar2) {
            Sexy::RtObject::Cast<Plant>(pRVar7);
            cVar1 = PlantRestrictionSet::IsIncluded((Plant *)(this_00 + 0x88));
            if (cVar1 != '\0') goto LAB_0462d370;
          }
          else {
LAB_0462d370:
            pcVar8 = *(code **)(*(long *)pRVar7 + 0x120);
            Sexy::Point::Point(aPStack_a8,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_a0,local_9c,aRStack_68,0x200000,param_1,aPStack_a8,0)
            ;
            (*pcVar8)(pRVar7,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
        }
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
        if (bVar2) {
          pRVar7 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          pGVar6 = Sexy::RtObject::Cast<GridItemBoardEntityConditionTarget>(pRVar7);
          if (pGVar6 != (GridItemBoardEntityConditionTarget *)0x0) {
            (**(code **)(*(long *)pGVar6 + 0x2d0))(*(undefined4 *)(this_00 + 0xb0),pGVar6,&local_c0)
            ;
          }
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_80);
        std::
        reverse_iterator<__gnu_cxx::__normal_iterator<ZombiePushGriditemActionHandler::PushInProgress*,std::vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>>>
        ::operator++(arStack_c8);
        std::
        vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
        ::rend();
        bVar2 = std::operator!=(arStack_c8,aRStack_68);
      } while (bVar2);
    }
    std::
    vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
    ::~vector((vector<ZombiePushGriditemActionHandler::PushInProgress,std::allocator<ZombiePushGriditemActionHandler::PushInProgress>>
               *)avStack_98);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePushGriditemActionHandler::OnPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombiePushGriditemActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  Zombie *pZVar3;
  ZombiePushGridItemActionDefinition *this;
  GridItem *pGVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    pZVar3 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pGVar4 = (GridItem *)ZombiePushGridItemActionDefinition::FindReachableGridItem(this,pZVar3);
    if ((pGVar4 != (GridItem *)0x0) &&
       (cVar2 = ZombiePushGridItemActionDefinition::CanPushGridItem(this,pZVar3,pGVar4),
       cVar2 != '\0')) {
      beginPushing((ZombiePushGriditemActionHandler *)param_1,pGVar4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePushGriditemActionHandler::hasGridItemToPush() */

void __thiscall
ZombiePushGriditemActionHandler::hasGridItemToPush(ZombiePushGriditemActionHandler *this)

{
  undefined1 uVar1;
  ZombiePushGridItemActionDefinition *this_00;
  Zombie *pZVar2;
  GridItem *pGVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pZVar2 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pGVar3 = (GridItem *)ZombiePushGridItemActionDefinition::FindReachableGridItem(this_00,pZVar2);
  if (pGVar3 == (GridItem *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ZombiePushGridItemActionDefinition::CanPushGridItem(this_00,pZVar2,pGVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ZombiePushGriditemActionHandler::onUpdateAction() */

void __thiscall
ZombiePushGriditemActionHandler::onUpdateAction(ZombiePushGriditemActionHandler *this)

{
  char cVar1;
  
  if ((this[0x21] == (ZombiePushGriditemActionHandler)0x0) &&
     (cVar1 = hasGridItemToPush(this), cVar1 == '\0')) {
    haltAction(this);
    return;
  }
  return;
}

