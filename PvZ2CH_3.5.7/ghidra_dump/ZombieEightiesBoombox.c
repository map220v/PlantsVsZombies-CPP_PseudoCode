// Class: ZombieEightiesBoombox


/* ZombieEightiesBoombox::onBoomboxLowered() */

void __thiscall ZombieEightiesBoombox::onBoomboxLowered(ZombieEightiesBoombox *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* ZombieEightiesBoombox::onBoomboxRaised() */

void __thiscall ZombieEightiesBoombox::onBoomboxRaised(ZombieEightiesBoombox *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x20);
  return;
}


/* ZombieEightiesBoombox::endBlockingJam() */

void ZombieEightiesBoombox::endBlockingJam(void)

{
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* ZombieEightiesBoombox::onExitState_BoomBox(ZombieState) */

void ZombieEightiesBoombox::onExitState_BoomBox(void)

{
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* ZombieEightiesBoombox::ZombieEightiesBoombox() */

void __thiscall ZombieEightiesBoombox::ZombieEightiesBoombox(ZombieEightiesBoombox *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068f04d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesBoombox_068f0f18;
  *(undefined4 *)(this + 0x800) = 0;
  uVar1 = PVZ_EOT();
  this[0x808] = (ZombieEightiesBoombox)0x0;
  *(undefined4 *)(this + 0x804) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x810));
  return;
}


/* ZombieEightiesBoombox::StaticNew() */

ZombieEightiesBoombox * ZombieEightiesBoombox::StaticNew(void)

{
  ZombieEightiesBoombox *this;
  
  this = ::operator_new(0x828);
  ZombieEightiesBoombox(this);
  return this;
}


/* ZombieEightiesBoombox::GetJamStyle() */

void ZombieEightiesBoombox::GetJamStyle(void)

{
  Zombie *in_x0;
  
  Zombie::GetProps<ZombieEightiesBoomboxProps>(in_x0);
  FUN_05475d88();
  return;
}


/* ZombieEightiesBoombox::shouldPlayBoomBox() */

undefined8 __thiscall ZombieEightiesBoombox::shouldPlayBoomBox(ZombieEightiesBoombox *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  ZombieEightiesBoomboxProps *pZVar3;
  Plant *pPVar4;
  undefined8 uVar5;
  float fVar6;
  
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  pZVar3 = Zombie::GetProps<ZombieEightiesBoomboxProps>((Zombie *)this);
  fVar6 = (float)FUN_047e2958(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(fVar6);
  cVar1 = Zombie::isInState((Zombie *)this,4);
  if (((cVar1 == '\0') &&
      (((this_00 == (RtObject *)0x0 ||
        (pPVar4 = Sexy::RtObject::Cast<Plant>(this_00), pPVar4 == (Plant *)0x0)) &&
       ((float)iVar2 <= *(float *)(pZVar3 + 0x248))))) &&
     (this[0x808] == (ZombieEightiesBoombox)0x0)) {
    uVar5 = RealObject::IsOnTeam(this,2);
    return uVar5;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBoombox::applyBoomConditionToPlantsInRange() */

void __thiscall
ZombieEightiesBoombox::applyBoomConditionToPlantsInRange(ZombieEightiesBoombox *this)

{
  bool bVar1;
  char cVar2;
  float *pfVar3;
  ZombieEightiesBoomboxProps *pZVar4;
  RtMixedPtrBase *this_00;
  GameObject *this_01;
  Plant *this_02;
  ResourceInfo *pRVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_20;
  undefined8 local_18;
  float local_10 [2];
  long local_8;
  
  fVar7 = *(float *)(this + 0x800);
  local_8 = ___stack_chk_guard;
  local_10[0] = (float)PVZ_T();
  local_10[0] = fVar7 - local_10[0];
  pfVar3 = eastl::min_alt<float>(local_10,(float *)&DAT_05754a48);
  fVar7 = *pfVar3;
  if (0.0 < fVar7) {
    pZVar4 = Zombie::GetProps<ZombieEightiesBoomboxProps>((Zombie *)this);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x810));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x810));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1)
    {
      this_00 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar2 != '\0') {
        this_01 = (GameObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        cVar2 = GameObject::IsDestroyed(this_01);
        if (cVar2 == '\0') {
          this_02 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          cVar2 = Plant::IsInvincible(this_02,false);
          if (cVar2 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            Plant::GetType();
            pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_10);
            cVar2 = PlantRestrictionSet::IsIncluded
                              ((PlantRestrictionSet *)(pZVar4 + 0x210),(PlantType *)pRVar5);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
            if (cVar2 != '\0') {
              uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              Plant::ApplyCondition(fVar7,0,uVar6,0x11);
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  fVar7 = (float)PVZ_T();
  *(float *)(this + 0x804) = fVar7 + 0.16666667;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBoombox::playBlockingJam() */

void __thiscall ZombieEightiesBoombox::playBlockingJam(ZombieEightiesBoombox *this)

{
  undefined *puVar1;
  ZombieEightiesBoomboxProps *pZVar2;
  string asStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieEightiesBoomboxProps>((Zombie *)this);
  FUN_05475d88(asStack_10,pZVar2 + 0x238);
  MessageRouter::Broadcast<std::string_const&,std::string>
            ((MessageRouter *)puVar1,Message::OverrideJamsWith,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBoombox::onEnterState_BoomBoxUp(ZombieState) */

void ZombieEightiesBoombox::onEnterState_BoomBoxUp(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onBoomboxRaised");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_EightiesBoombox::RaiseBoombox((ZombieAnimRig_EightiesBoombox *)pZVar1,aRStack_50);
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
/* ZombieEightiesBoombox::updateState_BoomBox() */

void __thiscall ZombieEightiesBoombox::updateState_BoomBox(ZombieEightiesBoombox *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  float fVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x804) <= fVar2) {
    applyBoomConditionToPlantsInRange(this);
  }
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x800) <= fVar2) {
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onBoomboxLowered");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_EightiesBoombox::StopJamming((ZombieAnimRig_EightiesBoombox *)pZVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesBoombox::~ZombieEightiesBoombox() */

void __thiscall ZombieEightiesBoombox::~ZombieEightiesBoombox(ZombieEightiesBoombox *this)

{
  *(undefined ***)this = &PTR_GetClass_068f04d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieEightiesBoombox_068f0f18;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x810)
            );
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieEightiesBoombox::~ZombieEightiesBoombox() */

void __thiscall ZombieEightiesBoombox::~ZombieEightiesBoombox(ZombieEightiesBoombox *this)

{
  ~ZombieEightiesBoombox(this + -0x10);
  return;
}


/* ZombieEightiesBoombox::~ZombieEightiesBoombox() */

void __thiscall ZombieEightiesBoombox::~ZombieEightiesBoombox(ZombieEightiesBoombox *this)

{
  ~ZombieEightiesBoombox(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieEightiesBoombox::~ZombieEightiesBoombox() */

void __thiscall ZombieEightiesBoombox::~ZombieEightiesBoombox(ZombieEightiesBoombox *this)

{
  ~ZombieEightiesBoombox(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBoombox::findPlantsToBoom() */

void __thiscall ZombieEightiesBoombox::findPlantsToBoom(ZombieEightiesBoombox *this)

{
  int iVar1;
  bool bVar2;
  ZombieEightiesBoomboxProps *pZVar3;
  undefined4 uVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x810)
            );
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pZVar3 = Zombie::GetProps<ZombieEightiesBoomboxProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar3 + 0x244);
  uVar4 = *(undefined4 *)(this + 0x1c);
  local_40 = FUN_047e2958(*(undefined4 *)(this + 0x18),uVar4,*(undefined4 *)(this + 0x20));
  local_3c = uVar4;
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar1,avStack_20,1,&local_40,0xffffffff,0xffffffff);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  while( true ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_28);
    if (!bVar2) break;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_30);
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
               (this + 0x810),(RtWeakPtr *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesBoombox::onEnterState_BoomBox(ZombieState) */

void ZombieEightiesBoombox::onEnterState_BoomBox(ZombieEightiesBoombox *param_1)

{
  ZombieHydraHeadAnimRig *this;
  ZombieEightiesBoomboxProps *pZVar1;
  float fVar2;
  
  playBlockingJam(param_1);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_EightiesBoombox::StartJamming((ZombieAnimRig_EightiesBoombox *)this);
  param_1[0x808] = (ZombieEightiesBoombox)0x1;
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombieEightiesBoomboxProps>((Zombie *)param_1);
  *(float *)(param_1 + 0x800) = fVar2 + *(float *)(pZVar1 + 0x240);
  findPlantsToBoom(param_1);
  applyBoomConditionToPlantsInRange(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBoombox::StaticClassInit() */

void ZombieEightiesBoombox::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieEightiesBoombox");
      (*pcVar4)(plVar1,asStack_150,FUN_047e45b4,0x828,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesBoombox,void(ZombieEightiesBoombox::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieEightiesBoombox,void(ZombieEightiesBoombox::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesBoombox,void(ZombieEightiesBoombox::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BOOMBOX_BoomBoxUp");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047e3fa4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesBoombox,void(ZombieEightiesBoombox::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieEightiesBoombox,void(ZombieEightiesBoombox::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieEightiesBoombox,void(ZombieEightiesBoombox::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BOOMBOX_BoomBox");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047e3fa4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieEightiesBoombox::StaticGetClass() */

long * ZombieEightiesBoombox::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEightiesBoombox",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesBoombox::GetClass() const */

long * ZombieEightiesBoombox::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEightiesBoombox",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesBoombox::updateState_Walk() */

void __thiscall ZombieEightiesBoombox::updateState_Walk(ZombieEightiesBoombox *this)

{
  char cVar1;
  
  Zombie::updateState_Walk((Zombie *)this);
  cVar1 = shouldPlayBoomBox(this);
  if (cVar1 == '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombieEightiesBoombox::onDestroy() */

void __thiscall ZombieEightiesBoombox::onDestroy(ZombieEightiesBoombox *this)

{
  Zombie::onDestroy((Zombie *)this);
  endBlockingJam();
  return;
}

