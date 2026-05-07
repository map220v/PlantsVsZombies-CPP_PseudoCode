// Class: ComponentLightingDamageRadius


/* ComponentLightingDamageRadius::beginPropagate() */

void __thiscall ComponentLightingDamageRadius::beginPropagate(ComponentLightingDamageRadius *this)

{
  ComponentRadiusBurst::calculateOrigin((ComponentRadiusBurst *)this);
  *(float *)(this + 0x114) = *(float *)(this + 0x90) + *(float *)(this + 0x110);
  *(float *)(this + 0x118) = *(float *)(this + 0xb8) + *(float *)(this + 0x110);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLightingDamageRadius::StaticClassInit() */

void ComponentLightingDamageRadius::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentLightingDamageRadius");
    (*pcVar2)(plVar1,asStack_10,FUN_03b90b08,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentLightingDamageRadius::StaticGetClass() */

long * ComponentLightingDamageRadius::StaticGetClass(void)

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
  uVar2 = ComponentDamageRadius::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentLightingDamageRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentLightingDamageRadius::GetClass() const */

long * ComponentLightingDamageRadius::GetClass(void)

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
  uVar2 = ComponentDamageRadius::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentLightingDamageRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentLightingDamageRadius::onBegin() */

void __thiscall ComponentLightingDamageRadius::onBegin(ComponentLightingDamageRadius *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  ComponentRadiusBurst::updateTimes((ComponentRadiusBurst *)this,fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLightingDamageRadius::onUpdate() */

void __thiscall ComponentLightingDamageRadius::onUpdate(ComponentLightingDamageRadius *this)

{
  char cVar1;
  char cVar2;
  long *extraout_x0;
  long *extraout_x0_00;
  float fVar3;
  float fVar4;
  RtMixedPtr<Sexy::Image> aRStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_Dt();
  fVar4 = *(float *)(this + 0x208);
  *(float *)(this + 0x208) = fVar4 - fVar3;
  if (0.0 <= fVar4 - fVar3) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_28);
    cVar2 = cVar1;
    if (cVar1 == '\0') {
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
      if (cVar2 == '\0') {
        cVar2 = '\x01';
        cVar1 = '\0';
      }
      else {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        nop();
        cVar1 = (**(code **)(*extraout_x0 + 0x328))();
        if (cVar1 == '\0') {
          Sexy::ResourceInfoTypes::FontRes::GetFont();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          nop();
          cVar1 = (**(code **)(*extraout_x0_00 + 0x330))();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    }
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    if (cVar1 == '\0') {
      ComponentRadiusBurst::onUpdate((ComponentRadiusBurst *)this);
      goto LAB_03b90ddc;
    }
  }
  ComponentBase::End((ComponentBase *)this);
LAB_03b90ddc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ComponentLightingDamageRadius::ComponentLightingDamageRadius() */

void __thiscall
ComponentLightingDamageRadius::ComponentLightingDamageRadius(ComponentLightingDamageRadius *this)

{
  ComponentDamageRadius::ComponentDamageRadius((ComponentDamageRadius *)this);
  *(undefined ***)this = &PTR_GetClass_067360e0;
  return;
}


/* ComponentLightingDamageRadius::StaticNew() */

ComponentLightingDamageRadius * ComponentLightingDamageRadius::StaticNew(void)

{
  ComponentLightingDamageRadius *this;
  
  this = ::operator_new(0x210);
  ComponentLightingDamageRadius(this);
  return this;
}


/* ComponentLightingDamageRadius::registerForEvents() */

void __thiscall
ComponentLightingDamageRadius::registerForEvents(ComponentLightingDamageRadius *this)

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
            ((ReceivedDataCallback *)this,DamageZombies);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ComponentLightingDamageRadius,void(ComponentLightingDamageRadius::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::DoEntangleZombie,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLightingDamageRadius::playEffect() */

void ComponentLightingDamageRadius::playEffect(void)

{
  char cVar1;
  int iVar2;
  Zombie *this;
  string *this_00;
  AttachedEffect *this_01;
  string *__n;
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  this_00 = (string *)Zombie::GetAttachedEffects(this);
  __n = asStack_28;
  std::string::string((string *)aRStack_20,"eel_entangle");
  cVar1 = GameObjectDictionary::Contains(this_00);
  std::string::~string((string *)aRStack_20);
  nop();
  if (cVar1 != '\0') {
    Set8BytesTo0(asStack_30);
    iVar2 = Zombie::GetSizeType(this);
    if (iVar2 == 1) {
      std::string::append(asStack_30,"zhong",(size_t)__n);
    }
    else if (iVar2 == 0) {
      std::string::append(asStack_30,"xiao",(size_t)__n);
    }
    else if (iVar2 == 2) {
      std::string::append(asStack_30,"da",(size_t)__n);
    }
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
    std::operator+(asStack_30,"_2");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    std::operator+(asStack_30,"_1");
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    std::string::string(asStack_28,"eel_entangle");
    this_01 = (AttachedEffect *)
              GameObjectDictionary::FindOrCreate((GameObjectDictionary *)this_00,asStack_28);
    std::string::~string(asStack_28);
    nop();
    AttachedEffect::PlayAnimSequence(this_01,(AnimationSequence *)aRStack_20);
    AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
    std::string::~string(asStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLightingDamageRadius::beginApply() */

void ComponentLightingDamageRadius::beginApply(void)

{
  char cVar1;
  int iVar2;
  Zombie *this;
  string *this_00;
  AttachedEffect *this_01;
  string *__n;
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  this_00 = (string *)Zombie::GetAttachedEffects(this);
  __n = asStack_28;
  std::string::string((string *)aRStack_20,"eel_entangle");
  cVar1 = GameObjectDictionary::Contains(this_00);
  std::string::~string((string *)aRStack_20);
  nop();
  if (cVar1 != '\0') {
    Set8BytesTo0(asStack_30);
    iVar2 = Zombie::GetSizeType(this);
    if (iVar2 == 1) {
      std::string::append(asStack_30,"zhong",(size_t)__n);
    }
    else if (iVar2 == 0) {
      std::string::append(asStack_30,"xiao",(size_t)__n);
    }
    else if (iVar2 == 2) {
      std::string::append(asStack_30,"da",(size_t)__n);
    }
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
    std::operator+(asStack_30,"_2");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    std::operator+(asStack_30,"_1");
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    std::string::string(asStack_28,"eel_entangle");
    this_01 = (AttachedEffect *)
              GameObjectDictionary::FindOrCreate((GameObjectDictionary *)this_00,asStack_28);
    std::string::~string(asStack_28);
    nop();
    AttachedEffect::PlayAnimSequence(this_01,(AnimationSequence *)aRStack_20);
    AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
    std::string::~string(asStack_30);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLightingDamageRadius::DamageZombies(Zombie*) */

void ComponentLightingDamageRadius::DamageZombies(Zombie *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  BoardEntity *this;
  SharkMinion *this_00;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x0;
  int local_d8;
  int local_d4;
  long *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [16];
  RtMixedPtrBase aRStack_98 [24];
  RtWeakPtrBase aRStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_98);
  if (cVar2 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
  }
  else {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    ToolPacketData::GetProps();
    cVar2 = Sexy::RtWeakPtrBase::operator==(aRStack_80,(RtWeakPtrBase *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    if (cVar2 != '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_98);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_80);
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      this = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
      iVar4 = BoardEntity::CalcColumnPosition(this);
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      this_00 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      iVar5 = SharkMinion::getRow(this_00);
      Sexy::Point::Point((Point *)&local_d8,iVar4,iVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
      Sexy::Insets::Insets((Insets *)aRStack_a8,local_d8 + -1,local_d4 + -1,3,3);
      EntityFinder::GetEntitiesAtGridSquare(aRStack_98,2,local_d8,local_d4);
      EntityFinder::GetEntitiesInGridSquares(aRStack_80,2,aRStack_a8);
      CrazyNPC::IsInitialized((CrazyNPC *)param_1);
      DamageInfoProps::BuildDamageInfo();
      local_c8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_98);
      local_c0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_98);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0),
            bVar3) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
        local_d0 = (long *)*puVar6;
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
        plVar1 = local_d0;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
        if (plVar7 == plVar1) {
          nop();
          Zombie::ApplyCondition((Zombie *)0x3fc00000,0);
          Zombie::ApplyCondition((Zombie *)0x3fc00000,0,extraout_x0,0x18,1);
        }
        (**(code **)(*local_d0 + 0x110))(local_d0,aRStack_68);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)aRStack_80);
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)aRStack_80);
        local_b8 = std::
                   find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                             (uVar8,uVar9,&local_d0);
        local_b0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_80);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0)
        ;
        if (bVar3) {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_b0,(__normal_iterator *)&local_b8);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_80,local_b0);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c8);
      }
      local_60 = local_60 * 0.5;
      local_b8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_80);
      local_b0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_80);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0),
            bVar3) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
        (**(code **)(*(long *)*puVar6 + 0x110))((long *)*puVar6,aRStack_68);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
      }
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_80);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_98);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentLightingDamageRadius::~ComponentLightingDamageRadius() */

void __thiscall
ComponentLightingDamageRadius::~ComponentLightingDamageRadius(ComponentLightingDamageRadius *this)

{
  *(undefined ***)this = &PTR_GetClass_067360e0;
  ComponentDamageRadius::~ComponentDamageRadius((ComponentDamageRadius *)this);
  return;
}


/* ComponentLightingDamageRadius::~ComponentLightingDamageRadius() */

void __thiscall
ComponentLightingDamageRadius::~ComponentLightingDamageRadius(ComponentLightingDamageRadius *this)

{
  ~ComponentLightingDamageRadius(this);
  AK::FreeHook(this);
  return;
}

